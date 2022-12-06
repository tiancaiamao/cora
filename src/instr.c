#include "gc.h"
#include "types.h"
#include "vm.h"
#include "builtin.h"
#include "instr.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int NREG = 4;

static int
cgGetLabel(struct CodeGen *cg) {
  int ret = cg->label;
  cg->label++;
  return ret;
}

static void
cgAddGlobal(struct CodeGen *cg, FILE* global) {
  if (cg->cap == 0) {
    cg->cap = 8;
    cg->pos = 0;
    cg->globals = calloc(cg->cap, sizeof(FILE*));
  } else if (cg->pos == cg->cap) {
    cg->cap = cg->cap * 2;
    cg->globals = realloc(cg->globals, cg->cap * sizeof(FILE*));
  }

  cg->globals[cg->pos] = global;
  cg->pos = cg->pos + 1;
}

typedef void (*InstrGCFunc)(struct GC *gc, void *obj);
typedef void (*InstrCodeGenFunc)(struct CodeGen *cg, Instr instr, FILE *to);

static InstrCodeGenFunc getInstrCodeGenFunc(Instr i);

void
codeGen(struct CodeGen *cg, Instr instr, FILE *to) {
  InstrCodeGenFunc f = getInstrCodeGenFunc(instr);
  f(cg, instr, to);
}

InstrFunc getInstrFunc(Instr i);

struct InstrConst {
  instrHead head;
  Obj val;
  Instr next;
};

void
opConst(struct VM *vm, Obj val) {
  vm->val = val;
}

static void
instrConstExec(struct VM *vm) {
  /* printf("instr const exec\n"); */

  struct InstrConst *c = vm->pcData;
  opConst(vm, c->val);
  vm->pc = getInstrFunc(c->next);
  vm->pcData = c->next;
}

static void
instrConstCodeGen(struct CodeGen *cg, Instr i, FILE *to) {
  struct InstrConst *c = (void*)i;
  if (c->val == Nil) {
    fprintf(to, "val = Nil;\n");
  } else if (isboolean(c->val)) {
    if (c->val == True) {
      fprintf(to, "val = True;\n");
    } else {
      fprintf(to, "val = False;\n");
    }
  } else if (isfixnum(c->val)) {
    fprintf(to, "val = makeNumber(%ld);\n", fixnum(c->val));
  } else if (isstring(c->val)) {
    char *str = stringStr(c->val);
    fprintf(to, "val = makeString(\"%s\", %ld);\n", str, strlen(str));
  } else if (issymbol(c->val)) {
    fprintf(to, "val = makeSymbol(\"%s\");\n", symbolStr(c->val));
  } else {
    fprintf(to, "unknown instr const type;\n");
  }

  codeGen(cg, c->next, to);
}

static void
instrConstGCFunc(struct GC *gc, void *obj) {
  struct InstrConst *p = obj;
  gcField(gc, getScmHead(p->val));
  gcField(gc, &p->next->head);
}

Instr
makeInstrConst(Obj val, Instr next) {
  struct InstrConst *data = newObj(scmHeadInstr, sizeof(struct InstrConst));
  data->head.type = instrHeadConst;
  data->val = val;
  data->next = next;
  return &data->head;
}

struct InstrIf {
  instrHead head;
  Instr br1;
  Instr br2;
};

static void
instrIfExec(struct VM *vm) {
  /* printf("instr if exec\n"); */

  struct InstrIf *i = vm->pcData;
  if (vm->val == True) {
    vm->pc = getInstrFunc(i->br1);
    vm->pcData = i->br1;
  } else if (vm->val == False) {
    vm->pc = getInstrFunc(i->br2);
    vm->pcData = i->br2;
  } else {
    // TODO?
    assert(false);
  }
}

static void
instrIfGCFunc(struct GC *gc, void *obj) {
  struct InstrIf *x = obj;
  gcField(gc, &x->br1->head);
  gcField(gc, &x->br2->head);
}

static void
instrIfCodeGen(struct CodeGen *cg, Instr i, FILE *to) {
  struct InstrIf *x = (void*)i;
  fprintf(to, "if (val == True) {\n");
  codeGen(cg, x->br1, to);
  fprintf(to, "} else if (val == False) {\n");
  codeGen(cg, x->br2, to);
  fprintf(to, "} else {\n");
  fprintf(to, "perror(\"if only accept true or false\");\n");
  fprintf(to, "}\n");
}

Instr
makeInstrIf(Instr br1, Instr br2) {
  struct InstrIf *data = newObj(scmHeadInstr, sizeof(struct InstrIf));
  data->head.type = instrHeadIf;
  data->br1 = br1;
  data->br2 = br2;
  return &data->head;
}

struct InstrNOP {
  instrHead head;
  Instr next;
};

static void
instrNOPExec(struct VM *vm) {
  /* printf("instr nop exec\n"); */

  struct InstrNOP *i = vm->pcData;
  vm->pc = getInstrFunc(i->next);
  vm->pcData = i->next;
}

static void
instrNOPGCFunc(struct GC *gc, void *obj) {
  struct InstrNOP *x = obj;
  gcField(gc, &x->next->head);
}

static void
instrNOPCodeGen(struct CodeGen *cg, Instr i, FILE *to) {
  struct InstrNOP *x = (void*)i;
  codeGen(cg, x->next, to);
}

Instr
makeInstrNOP(Instr next) {
  struct InstrNOP *data = newObj(scmHeadInstr, sizeof(struct InstrNOP));
  data->head.type = instrHeadNOP;
  data->next = next;
  return &data->head;
}

struct InstrPush {
  instrHead head;
  Instr next;
};

extern void gcGlobal(struct GC *gc);
extern struct GC *gc;
extern void gcFull(struct GC *gc);

static bool
maybeTriggerGC(struct VM *vm, struct GC *gc) {
  return false;

  assert(!gcIng(gc));

  if (gc->black.next != NULL) {
    return false;
  }

  vm->gcTicker++;
  if (vm->gcTicker <= 64) {
    return false;
  }
  vm->gcTicker = 0;

  // Maybe trigger a new round of GC, if not currently GC-ing.
  /* for (int i=vm->base; i<vm->pos; i++) { */
  for (int i=0; i<vm->pos; i++) {
    scmHead *p = getScmHead(vm->data[i]);
    if (p != NULL) {
      gcMarkRoot(gc, p);
    }
  }

  scmHead *p = getScmHead(vm->val);
  if (p != NULL) {
    gcMarkRoot(gc, p);
  }

  gcMarkRoot(gc, vm->pcData);

  for (int i=0; i<2; i++) {
    if (vm->gcSave[i] != NULL) {
      gcMarkRoot(gc, vm->gcSave[i]);
    }
  }

  gcGlobal(gc);
  return true;
}

void
opPush(struct VM *vm) {
  /* printf("instr push exec\n"); */
  if (gcIng(gc)) {
    gcStep(gc, 5);
  } else {
    bool succ = maybeTriggerGC(vm, gc);
    if (succ) {
      /* printf("\ttrigger gc ~~~~\n"); */
    }
  }

  push(vm, vm->val);
}

static void
instrPushExec(struct VM *vm) {
  struct InstrPush *i = vm->pcData;
  opPush(vm);
  vm->pc = getInstrFunc(i->next);
  vm->pcData = i->next;
}

static void
instrPushGCFunc(struct GC *gc, void *obj) {
  struct InstrPush *p = obj;
  gcField(gc, &p->next->head);
}

static void
instrPushCodeGen(struct CodeGen *cg, Instr i, FILE *to) {
  struct InstrPush *p = (void*)i;
  if (cg->state == NREG) {
    fprintf(to, "*sp++ = r%d;\n", cg->cur);
  }
  fprintf(to, "r%d = val;\n", cg->cur);
  if (cg->state < NREG) {
    cg->state = cg->state + 1;
  }
  cg->cur = (cg->cur + 1) % NREG;
  codeGen(cg, p->next, to);
}

Instr
makeInstrPush(Instr next) {
  struct InstrPush *data = newObj(scmHeadInstr, sizeof(struct InstrPush));
  data->head.type = instrHeadPush;
  data->next = next;
  return &data->head;
}

struct InstrLocalRef {
  instrHead head;
  int idx;
  Instr next;
};

void
opLocalRef(struct VM *vm, int idx) {
  vm->val = vmGet(vm, idx + 1);
}

static void
instrLocalRefExec(struct VM *vm) {
  /* printf("instr local ref exec\n"); */
  struct InstrLocalRef *i = vm->pcData;
  opLocalRef(vm, i->idx);
  vm->pc = getInstrFunc(i->next);
  vm->pcData = i->next;
}

static void
instrLocalRefGCFunc(struct GC *gc, void *obj) {
  struct InstrLocalRef *i = obj;
  gcField(gc, &i->next->head);
}

static void
instrLocalRefCodeGen(struct CodeGen *cg, Instr i, FILE *to) {
  struct InstrLocalRef *x = (void*)i;
  fprintf(to, "val = bp[%d];\n", x->idx + 1);
  codeGen(cg, x->next, to);
}

Instr
makeInstrLocalRef(int idx, Instr next) {
  struct InstrLocalRef *data = newObj(scmHeadInstr, sizeof(struct InstrLocalRef));
  data->head.type = instrHeadLocalRef;
  data->idx = idx;
  data->next = next;
  return &data->head;
}

struct InstrClosureRef {
  instrHead head;
  int up;
  int idx;
  Instr next;
};

Obj opClosureRef(struct VM *vm, int up, int idx) {
  Obj tmp = vmGet(vm, 0);
  for (int i=up; i>0; i--) {
    tmp = closureParent(tmp);
  }
  return closureSlot(tmp, idx);
}

static void
instrClosureRefExec(struct VM *vm) {
  /* printf("instr closure ref exec\n"); */
  struct InstrClosureRef *instr = vm->pcData;
  vm->val = opClosureRef(vm, instr->up, instr->idx);
  vm->pc = getInstrFunc(instr->next);
  vm->pcData = instr->next;
}

static void
instrClosureRefGCFunc(struct GC *gc, void *obj) {
  struct InstrClosureRef *p = obj;
  gcField(gc, &p->next->head);
}

static void
instrClosureRefCodeGen(struct CodeGen *cg, Instr i, FILE *to) {
  struct InstrClosureRef *p = (void*)i;
  fprintf(to, "val = opClosureRef(vm, %d, %d);\n", p->up, p->idx);
  codeGen(cg, p->next, to);
}

Instr
makeInstrClosureRef(int up, int idx, Instr next) {
  struct InstrClosureRef *data = newObj(scmHeadInstr, sizeof(struct InstrClosureRef));
  data->head.type = instrHeadClosureRef;
  data->up = up;
  data->idx = idx;
  data->next = next;
  return &data->head;
}

struct InstrGlobalRef {
  instrHead head;
  Obj sym;
  Instr next;
};

void
opGlobalRef(struct VM *vm, Obj sym) {
  Obj val = symbolGet(sym);
  if (val == 0) {
    // TODO: panic("undefined symbol")
    assert(false);
  }
  vm->val = val;
}

static void
instrGlobalRefExec(struct VM *vm) {
  struct InstrGlobalRef *i = vm->pcData;
  opGlobalRef(vm, i->sym);
  vm->pc = getInstrFunc(i->next);
  vm->pcData = i->next;
}

static void
instrGlobalRefGCFunc(struct GC *gc, void *obj) {
  struct InstrGlobalRef *p = obj;
  // TODO: handle the symbol?
  gcField(gc, &p->next->head);
}

static void
instrGlobalRefCodeGen(struct CodeGen *cg, Instr i, FILE *to) {
  struct InstrGlobalRef *p = (void*)i;
  fprintf(to, "val = symbolGet(makeSymbol(\"%s\"));\n", symbolStr(p->sym));
  codeGen(cg, p->next, to);
}

Instr
makeInstrGlobalRef(Obj sym, Instr next) {
  struct InstrGlobalRef *data = newObj(scmHeadInstr, sizeof(struct InstrGlobalRef));
  data->head.type = instrHeadGlobalRef;
  data->sym = sym;
  data->next = next;
  return &data->head;
}

struct InstrPrimitive {
  instrHead head;
  int size;
  Obj prim;
  Instr next;
};

extern InstrFunc primitiveFn(Obj o);

void
opPrimitive(struct VM *vm, int size, Obj prim) {
  int required = primitiveRequired(prim);
  if (size == required) {
    InstrFunc fn = primitiveFn(prim);
    fn(vm);
  } else {
    // TODO: panic
    assert(false);
  }
}

static void
instrPrimitiveExec(struct VM *vm) {
  struct InstrPrimitive *c = vm->pcData;
  opPrimitive(vm, c->size, c->prim);

  if (getInstrFunc(c->next) == NULL) {
    vmReturn(vm, vm->val);
  } else {
    vm->pc = getInstrFunc(c->next);
    vm->pcData = c->next;
  }
}

static void
instrPrimitiveGCFunc(struct GC *gc, void *obj) {
  struct InstrPrimitive *p = obj;
  gcField(gc, getScmHead(p->prim));
  gcField(gc, &p->next->head);
}

static void
instrPrimitiveCodeGen(struct CodeGen *cg, Instr i, FILE *to) {
  struct InstrPrimitive *p = (void*)i;


  /* fprintf(to, "// before handle prim, state=%d, cur=%d;\n", cg->state, cg->cur); */

  fprintf(to, "val = prim%s(", primitiveFnName(p->prim));
  for (int i=0; i<p->size; i++) {
    if (i != 0) {
      fprintf(to, ", ");
    }
    // Get the virtual SP[i], when i + cg->state >= argc, SP[i] is in the register,
    // For example, cg->state = 3, argc = 5
    // rN
    // rN-1  <- i
    // rN-2   
    // sp-1
    // sp-2
    // Otherwise it's in the stack.
    if (i + cg->state < p->size) {
      fprintf(to, "sp[%d]", i - cg->state );
    } else {
      int distanceToTop = p->size - i;
      fprintf(to, "r%d", (cg->cur + NREG - distanceToTop) % NREG);
    }
  }
  fprintf(to, ");\n");

  // Need to pop stack argc times!
  if (p->size <= cg->state) {
    // All args in the register
    for (int i=p->size-1; i>=0; i--) {
      cg->cur = (cg->cur - 1 + NREG) % NREG;
      cg->state--;
    }
  } else {
    // Some args are in the register and some are in the stack.
    int state = cg->state;
    for (int i=0; i<cg->state; i++) {
      cg->cur = (cg->cur - 1 + NREG) % NREG;
      cg->state--;
    }
    for (int i=0; i< (p->size - state); i++) {
      // handle arg[i], from top to bottom
      // i < cg->state means the argument is in the stack, otherwise it's in the register.
      if (i < state) {
	fprintf(to, "sp--;\n");
      }
    }
  }

  /* fprintf(to, "// after handle prim, state=%d, cur=%d;\n", cg->state, cg->cur); */

  if (getInstrFunc(p->next) == NULL) {
    fprintf(to, "vmReturn(vm, vm->val);\n");
  } else {
    codeGen(cg, p->next, to);
  }
}

struct scmPrimitive;

Instr
makeInstrPrimitive(int size, Obj prim, Instr next) {
  struct InstrPrimitive *data = newObj(scmHeadInstr, sizeof(struct InstrPrimitive));
  data->head.type = instrHeadPrimitive;
  data->size = size;
  data->prim = prim;
  data->next = next;
  return &data->head;
}

struct InstrExit {
  instrHead head;
};

void
opExit(struct VM *vm) {
  vmReturn(vm, vm->val);
}

void
instrExitExec(struct VM *vm) {
  opExit(vm);
}

static void
instrExitCodeGen(struct CodeGen *cg, Instr i, FILE *to) {
  fprintf(to, "vm->val=val;\nopExit(vm);\nreturn;\n");
}

struct InstrExit identityData = {
  .head.type = instrHeadExit,
};

Instr
identity() {
  return &identityData.head;
}

struct InstrCall {
  instrHead head;
  // Size is the count of the stack for calling, including the function itself.
  // The actual argc is size - 1
  // fn arg0 arg1 ... argc
  int size;
  Instr next;
};

static void
callClosureNormal(struct VM *vm, Obj clo, int size, InstrFunc next, void *codeData) {
  assert(next != NULL);

  if (next == instrExitExec) { // Jump
    // Reuse the old stack
    for (int i=0; i<size; i++) {
      Obj arg = vmGet(vm, -size + i);
      vmSet(vm, i, arg);
    }
    vmResize(vm, size);
  } else { // Call
    int newBase = vm->pos - size;
    vmSaveCont(vm, newBase, next, codeData);
    vm->base = newBase;
  }

  vm->pc = closureCode(clo);
  vm->pcData = closureCodeData(clo);
}

static void instrCallExec(struct VM *vm);
Instr makeInstrCall(int size, Instr next);

static void
callClosurePartial(struct VM *vm, Obj clo, int size, InstrFunc next, void *codeData) {
  // TODO: rewrite to run() to avoid duplicated code.
  // Prepare a new stack for call.
  int newBase = vm->pos;
  vmSaveCont(vm, newBase, NULL, NULL);
  int required = closureRequired(clo);
  for(int i=0; i<required+1; i++) {
    Obj tmp = vmGet(vm, i);
    push(vm, tmp);
  }
  vm->base = newBase;

  // Call partial.
  vm->pc = closureCode(clo);
  vm->pcData = closureCodeData(clo);
  while(vm->pc != NULL) {
    vm->pc(vm);
  }

  // Handle the remain call.
  vmSet(vm, 0, vm->val);
  for (int i=0; i<size-1-required; i++) {
    Obj tmp = vmGet(vm, i+1+required);
    vmSet(vm, i+1, tmp);
  }
  vmResize(vm, size-required);

  opCall(vm, size-required, next, codeData);
}

static void
callCurry(struct VM *vm, Obj curry, int size, InstrFunc next, void *codeData) {
  int sz = curryCaptured(curry);
  Obj *data = curryData(curry);

  // TODO check range and realloc?
  Obj *base = vm->data + vm->pos - size;
  memcpy(base+sz, base+1, (size-1)*sizeof(Obj));
  memcpy(base, data, sz*sizeof(Obj));
  vm->pos = vm->pos + sz - 1;
  opCall(vm, size+sz-1, next, codeData);
}

static void
callClosure(struct VM *vm, Obj clo, int size, InstrFunc next, void *codeData) {
  int argc = size - 1;
  int required = closureRequired(clo);
  if (argc == required) {
    callClosureNormal(vm, clo, size, next, codeData);
  } else if (argc < required) {
    Obj *array = calloc(size, sizeof(Obj));
    memcpy(array, vm->data+vm->pos - size, size * sizeof(Obj));

    Obj curry = makeCurry(required - argc, size, array);
    vm->val = curry;
    vm->pos = vm->pos - size;

    vm->pc = next;
    vm->pcData = codeData;
  } else {
    // partial apply
    callClosurePartial(vm, clo, size, next, codeData);
  }
}

static void
instrCallCodeGen(struct CodeGen *cg, Instr i, FILE *to) {
  struct InstrCall *c = (void*)i;
  Instr next = c->next;
  assert(next != NULL);

  int label = cgGetLabel(cg);
  if (getInstrFunc(next) != instrExitExec) {
    char *ptr;
    size_t sizeloc;
    FILE *global = open_memstream(&ptr, &sizeloc);

    fprintf(global, "static void fn_label_%d(struct VM* vm) {\n", label);
    fprintf(global, "Obj *bp, *sp, val, r0, r1, r2, r3;\n");
    fprintf(global, "bp = vm->data + vm->base;\n");
    fprintf(global, "sp = vm->data + vm->pos;\n");
    fprintf(global, "val = vm->val;\n");

    int saveState = cg->state;
    int saveCur = cg->cur;

    cg->state = 0;
    cg->cur = 0;

    codeGen(cg, c->next, global);

    cg->state = saveState;
    cg->cur = saveCur;

    fprintf(global, "}\n");
    cgAddGlobal(cg, global);
  }

  // Save the registers to stack for the calling protocol.
  for (int i=0; i<cg->state; i++) {
    int offToTop = cg->state-i;
    int pos = (cg->cur - offToTop + NREG) % NREG;
    fprintf(to, "*sp++ = r%d;\n", pos);
  }
  fprintf(to, "vm->pos = sp - vm->data;\n");

  if (getInstrFunc(next) != instrExitExec) {
    fprintf(to, "opCall(vm, %d, fn_label_%d, NULL);\nreturn;\n", c->size, label);
  } else {
    fprintf(to, "opCall(vm, %d, instrExitExec, NULL);\nreturn;\n", c->size);
  }
}

void
opCall(struct VM *vm, int size, InstrFunc next, void* codeData) {
  Obj fn = vmGet(vm, -size);
  if (isclosure(fn)) {
    callClosure(vm, fn, size, next, codeData);
  } else if (iscurry(fn)) {
    callCurry(vm, fn, size, next, codeData);
  } else {
    // TODO: panic
    printf("call non-callable obj:%ld\n", fn);
    assert(false);
  }
}

static void
instrCallExec(struct VM *vm) {
  /* printf("instr call exec\n"); */
  struct InstrCall *c = vm->pcData;
  int sz = c->size;
  InstrFunc next = getInstrFunc(c->next);
  void *codeData = c->next;

  opCall(vm, sz, next, codeData);
}

static void
instrCallGCFunc(struct GC *gc, void *obj) {
  struct InstrCall *c = obj;
  gcField(gc, &c->next->head);
}

Instr
makeInstrCall(int size, Instr next) {
  struct InstrCall *data = newObj(scmHeadInstr, sizeof(struct InstrCall));
  data->head.type = instrHeadCall;
  data->size = size;
  data->next = next;
  return &data->head;
}

struct InstrMakeClosure {
  instrHead head;
  Instr code;
  int required;
  Instr next;

  int *closed;
  int nclosed;
};

static void
hashInsert(struct hashForObj *h, int key, Obj value) {
  // simple open address hashing
  int pos = key % h->size;
  while(h->ptr[pos].value != 0) {
    pos = (pos + 1) % h->size;
  }

  h->ptr[pos].key = key;
  h->ptr[pos].value = value;
}

Obj
opMakeClosure(struct VM *vm, int required, InstrFunc fn, void* codeData, int *closed, int nclosed) {
  struct hashForObj h;
  h.size = nclosed * 2;
  h.ptr = calloc(h.size, sizeof(struct hashForObj)); // memory leak!

  Obj parent = vmGet(vm, 0);
  for (int idx=0; idx<nclosed; idx++) {
    int pos = closed[idx];
    Obj val = vmGet(vm, pos+1);

    hashInsert(&h, pos, val);
  }
  return makeClosure(required, fn, codeData, parent, h);
}

static void
instrMakeClosureExec(struct VM *vm) {
  /* printf("instr make closure exec\n"); */

  struct InstrMakeClosure *i = vm->pcData;
  vm->val = opMakeClosure(vm, i->required, getInstrFunc(i->code), i->code, i->closed, i->nclosed);
  vm->pc = getInstrFunc(i->next);
  vm->pcData = i->next;
}

static void
instrMakeClosureGCFunc(struct GC *gc, void *obj) {
  struct InstrMakeClosure *x = obj;

  gcField(gc, &x->code->head);
  gcField(gc, &x->next->head);
}

static void
instrMakeClosureCodeGen(struct CodeGen *cg, Instr i, FILE *to) {
  struct InstrMakeClosure *x = (void*)i;
  int label = cgGetLabel(cg);
  char *ptr;
  size_t sizeloc;
  FILE *global = open_memstream(&ptr, &sizeloc);


  int saveState = cg->state;
  int saveCur = cg->cur;

  cg->state = 0;
  cg->cur = 0;

  fprintf(global, "static void fn_label_%d(struct VM *vm) {\n", label);
  fprintf(global, "Obj *bp, *sp, val, r0, r1, r2, r3;\n");
  fprintf(global, "bp = vm->data + vm->base;\n");
  fprintf(global, "sp = vm->data + vm->pos;\n");
  codeGen(cg, x->code, global);
  fprintf(global, "}\n");
  cgAddGlobal(cg, global);

  if (x->nclosed == 0) {
    fprintf(to, "val = opMakeClosure(vm, %d, fn_label_%d, NULL, NULL, 0);\n", x->required, label);
  } else {
    int id = cgGetLabel(cg);
    fprintf(to, "int closed%d[] = {", id);
    for (int i=0; i<x->nclosed; i++) {
      if (i != 0 ) {
	fprintf(to, ", ");
      }
      fprintf(to, "%d", x->closed[i]);
    }
    fprintf(to, "};\n");
    fprintf(to, "val = opMakeClosure(vm, %d, fn_label_%d, NULL, closed%d, %d);\n", x->required, label, id, x->nclosed);
  }

  cg->state = saveState;
  cg->cur = saveCur;
  codeGen(cg, x->next, to);
}

Instr
makeInstrMakeClosure(Instr code, int required, Instr next, int *closed, int nclosed) {
  struct InstrMakeClosure *data = newObj(scmHeadInstr, sizeof(struct InstrMakeClosure));
  data->head.type = instrHeadMakeClosure;
  data->code = code;
  data->required = required;
  data->next = next;
  data->closed = closed;
  data->nclosed = nclosed;
  return &data->head;
}

struct _instrMethod {
  InstrFunc exec;
  InstrGCFunc gcFunc;
  InstrCodeGenFunc codeGen;
} instrMethodTable[instrHeadMax] = {
  [instrHeadConst]{.exec = instrConstExec, .gcFunc = instrConstGCFunc, codeGen: instrConstCodeGen},
  [instrHeadIf]{.exec = instrIfExec, .gcFunc = instrIfGCFunc, codeGen: instrIfCodeGen},
  [instrHeadNOP]{.exec = instrNOPExec, .gcFunc = instrNOPGCFunc, codeGen: instrNOPCodeGen},
  [instrHeadPush]{.exec = instrPushExec, .gcFunc = instrPushGCFunc, codeGen: instrPushCodeGen},
  [instrHeadLocalRef]{.exec = instrLocalRefExec, .gcFunc = instrLocalRefGCFunc, codeGen: instrLocalRefCodeGen},
  [instrHeadClosureRef]{.exec = instrClosureRefExec, .gcFunc = instrClosureRefGCFunc, codeGen: instrClosureRefCodeGen},
  [instrHeadGlobalRef]{.exec = instrGlobalRefExec, .gcFunc = instrGlobalRefGCFunc, codeGen: instrGlobalRefCodeGen},
  [instrHeadPrimitive]{.exec = instrPrimitiveExec, .gcFunc = instrPrimitiveGCFunc, codeGen: instrPrimitiveCodeGen},
  [instrHeadExit]{.exec = instrExitExec, .gcFunc = NULL, codeGen: instrExitCodeGen},
  [instrHeadCall]{.exec = instrCallExec, .gcFunc = instrCallGCFunc, codeGen: instrCallCodeGen},
  [instrHeadMakeClosure]{.exec = instrMakeClosureExec, .gcFunc = instrMakeClosureGCFunc, codeGen: instrMakeClosureCodeGen},
};

InstrFunc
getInstrFunc(Instr i) {
  return instrMethodTable[i->type].exec;
}

InstrGCFunc
getInstrGCFunc(Instr i) {
  return instrMethodTable[i->type].gcFunc;
}

static InstrCodeGenFunc
getInstrCodeGenFunc(Instr i) {
  return instrMethodTable[i->type].codeGen;
}

void
instrGCFunc(struct GC *gc, void *obj) {
  Instr instr = obj;
  if (instr->type == instrHeadExit) {

  }
  return getInstrGCFunc(instr)(gc, obj);
}

#ifdef _INSTR_TEST_

#include "reader.h"
#include <stdio.h>


static void
copyStream(FILE *to, FILE *from) {
  char            buffer[BUFSIZ];
  size_t          n;
  n = fread(buffer, sizeof(char), sizeof(buffer), from);
  while (n > 0) {
    if (fwrite(buffer, sizeof(char), n, to) != n) {
      perror("write failed\n");
    }
    n = fread(buffer, sizeof(char), sizeof(buffer), from);
  }
}

int main(int argc, char* argv[]) {
  coraInit();
  

  static char *input = "(do (set (quote fact) \
     (lambda (n) \
       (if (= n 0) \
	   1 \
	 (* n (fact (- n 1)))))) \
     (fact 5))";

  struct SexpReader r = {.pkgMapping = Nil};
  FILE* f = fmemopen(input, strlen(input), "r");
  int errCode;
  Obj s = sexpRead(&r, f, &errCode);
  Instr code = compileAPI(s);

  char *ptr;
  size_t sizeloc;
  FILE *to = open_memstream(&ptr, &sizeloc);
  struct CodeGen cg = {};

  codeGen(&cg, code, to);

  fprintf(stdout, "#include \"types.h\" \n\
#include \"vm.h\" \n\
#include \"builtin.h\" \n\
#include \"instr.h\" \n\
#include <stdio.h>\n");

  for (int i=0; i<cg.pos; i++) {
    if (fseek(cg.globals[i], 0, SEEK_SET) < 0) {
      perror("fseek fail");
    };
    copyStream(stdout, cg.globals[i]);
    fprintf(stdout, "\n");
  }

  fprintf(stdout, "static void\n__entry(struct VM *vm) {\n");
  fprintf(stdout, "Obj *bp, *sp, val, r0, r1, r2, r3;\n");
  fprintf(stdout, "bp = vm->data + vm->base;\n");
  fprintf(stdout, "sp = vm->data + vm->pos;\n");
  copyStream(stdout, to);
  fprintf(stdout, "}\n\n");

  fprintf(stdout, "int main(int argc, char *argv[]) {\n\
  struct VM *vm = newVM();\n\
  coraInit();\n\
  run(vm, __entry);\n\
  printf(\"%%ld\", fixnum(vm->val));\n\
}");
}

#endif
