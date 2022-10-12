#include "gc.h"
#include "types.h"
#include "vm.h"
#include "builtin.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* struct CodeGen { */
/*   FILE* output; */

/*   int label; */
/*   FILE* globals; */
/* }; */

/* static void */
/* codeGen(struct CodeGen *cg, Instr *instr) { */
/* } */

InstrFunc getInstrFunc(Instr i);

struct InstrConst {
  instrHead head;
  Obj val;
  Instr next;
};

static void
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

/* static void */
/* instrConstCodeGen() { */

/* } */

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

static void
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

static void
opLocalRef(struct VM *vm, int idx) {
  vm->val = vmGet(vm, idx + 2);
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

static void
opClosureRef(struct VM *vm, int up, int idx) {
  Obj tmp = vmGet(vm, 1);
  for (int i=up; i>0; i--) {
    tmp = closureParent(tmp);
  }
  vm->val = closureSlot(tmp, idx);
}

static void
instrClosureRefExec(struct VM *vm) {
  /* printf("instr closure ref exec\n"); */
  struct InstrClosureRef *instr = vm->pcData;
  opClosureRef(vm, instr->up, instr->idx);
  vm->pc = getInstrFunc(instr->next);
  vm->pcData = instr->next;
}

static void
instrClosureRefGCFunc(struct GC *gc, void *obj) {
  struct InstrClosureRef *p = obj;
  gcField(gc, &p->next->head);
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

static void
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
  /* printf("instr global ref exec\n"); */

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

static void
opPrimitive(struct VM *vm, int size, Obj prim) {
  int required = primitiveRequired(prim);
  if (size == required) {
    InstrFunc fn = primitiveFn(prim);
    /* printf("before instr primitive(%s) exec %p \n", primitiveName(c->prim), fn); */
    fn(vm);
    /* printf("after instr primitive(%s) exec %p \n", primitiveName(c->prim), fn); */
  } else if (size < required) {
    Obj *array = (Obj*)malloc(size * sizeof(Obj));
    memcpy(array, vm->data+vm->pos-size, size*sizeof(Obj));
    vm->val = makeCurry(required - size, size, array, prim);
    vm->pos = vm->pos - size;
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

static void
opExit(struct VM *vm) {
  vmReturn(vm, vm->val);
}

static void
instrExitExec(struct VM *vm) {
  /* printf("instr exit exec (%d %d)\n", vm->base, vm->pos); */
  /* if (vm->base == 43 && vm->pos == 46) { */
  /*   // ?? */
  /*   printf("lalal--"); */
  /* } */
  opExit(vm);
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
  int size;
  Instr next;
};

static void
callClosureNormal(struct InstrCall *c, struct VM *vm, Obj clo) {
  if (getInstrFunc(c->next) == NULL) {
    // TODO panic("should never here?")
    assert(false);
  }

  if (getInstrFunc(c->next) == instrExitExec) { // Jump
    // Reuse the old stack
    for (int i=0; i<c->size; i++) {
      Obj arg = vmGet(vm, -c->size + i);
      vmSet(vm, i+1, arg);
    }
    vmResize(vm, c->size + 1);
  } else { // Call
    int newStackBase = vm->pos - c->size - 1;

    struct stack old;
    old.data = vm->data;
    old.base = vm->base;
    old.pos = newStackBase;

    /* printf("call closure old stack == %d %d vm->base:%d\n", old.base, old.pos, vm->base); */

    Obj cc = makeContinuation(old, getInstrFunc(c->next), c->next);
    vm->base = newStackBase;
    vmSet(vm, 0, cc);
  }

  Instr code = closureCode(clo);
  vm->pc = getInstrFunc(code);
  vm->pcData = code;
}

static void instrCallExec(struct VM *vm);
Instr makeInstrCall(int size, Instr next);

static void
callClosurePartial(struct InstrCall *c, struct VM *vm, Obj clo) {
  struct stack old;
  old.data = vm->data;
  old.base = vm->base;
  old.pos = vm->pos;
  int newBase = vm->pos;

  // Prepare a new stack for call.
  Obj cc = makeContinuation(old, NULL, NULL);
  int required = closureRequired(clo);
  push(vm, cc);
  for(int i=0; i<required+1; i++) {
    Obj tmp = vmGet(vm, i+2);
    push(vm, tmp);
  }
  vm->base = newBase;

  // Call partial.
  Instr code = closureCode(clo);
  vm->pc = getInstrFunc(code);
  vm->pcData = code;
  while(vm->pc != NULL) {
    vm->pc(vm);
  }

  // Handle the remain call.
  vmSet(vm, 2, vm->val);
  for (int i=0; i<c->size-1-required; i++) {
    Obj tmp = vmGet(vm, i+3+required);
    vmSet(vm, i+3, tmp);
  }
  vmResize(vm, c->size-required+2);

  Instr instr = makeInstrCall(c->size - required, c->next); // mem leak?
  vm->pc = getInstrFunc(instr);
  vm->pcData = instr;
}

static void
callCurry(struct InstrCall *c, struct VM *vm, Obj curry) {
  int sz = curryCaptured(curry);
  Obj *data = curryData(curry);
  Obj prim = curryPrim(curry);

  // TODO check range and realloc?

  Instr instr;
  Obj *base = vm->data + vm->pos - c->size;
  if (prim != Nil) {
    memcpy(base+sz-1, base+1, (c->size-1)*sizeof(Obj));
    memcpy(base-1, data, sz*sizeof(Obj));
    vm->pos = vm->pos + sz - 2;
    instr = makeInstrPrimitive(c->size+sz-1, prim, c->next);
  } else {
    memcpy(base+sz, base+1, (c->size-1)*sizeof(Obj));
    memcpy(base, data, sz*sizeof(Obj));
    vm->pos = vm->pos + sz - 1;
    instr = makeInstrCall(c->size+sz-1, c->next);
  }

  vm->pc = getInstrFunc(instr);
  vm->pcData = instr;
}

static void
callClosure(struct InstrCall *c, struct VM *vm, Obj clo) {
  int argc = c->size - 1;
  int required = closureRequired(clo);
  if (argc == required) {
    callClosureNormal(c, vm, clo);
  } else if (argc < required) {
    Obj *array = calloc(c->size, sizeof(Obj));
    memcpy(array, vm->data+vm->pos - c->size, c->size * sizeof(Obj));

    Obj curry = makeCurry(required - argc, c->size, array, Nil);
    vm->val = curry;
    vm->pos = vm->pos - c->size - 1;

    vm->pc = getInstrFunc(c->next);
    vm->pcData = c->next;
  } else {
    // partial apply
    callClosurePartial(c, vm, clo);
  }
}

static void
instrCallExec(struct VM *vm) {
  struct InstrCall *c = vm->pcData;
  /* printf("instr call exec\n"); */
  Obj fn = vmGet(vm, -c->size);
  if (isclosure(fn)) {
    callClosure(c, vm, fn);
  } else if (iscurry(fn)) {
    callCurry(c, vm, fn);
  } else {
    // TODO: panic
    printf("call non-callable obj:%ld\n", fn);
    assert(false);
  }
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

struct InstrPrepareCall {
  instrHead head;
  Instr next;
};

static void
instrPrepareCallExec(struct VM *vm) {
  /* printf("instr prepare call exec\n"); */

  struct InstrPrepareCall *i = vm->pcData;
  push(vm, Nil);
  vm->pc = getInstrFunc(i->next);
  vm->pcData = i->next;
}

static void
instrPrepareCallGCFunc(struct GC *gc, void *obj) {
  struct InstrPrepareCall *i = obj;
  gcField(gc, &i->next->head);
}

Instr
makeInstrPrepareCall(Instr next) {
  struct InstrPrepareCall *data = newObj(scmHeadInstr, sizeof(struct InstrPrepareCall));
  data->head.type = instrHeadPrepareCall;
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


static void
instrMakeClosureExec(struct VM *vm) {
  /* printf("instr make closure exec\n"); */

  struct InstrMakeClosure *i = vm->pcData;

  struct hashForObj h;
  h.size = i->nclosed * 2;
  h.ptr = calloc(h.size, sizeof(struct hashForObj)); // memory leak!

  Obj parent = vmGet(vm, 1);
  for (int idx=0; idx<i->nclosed; idx++) {
    int pos = i->closed[idx];
    Obj val = vmGet(vm, pos+2);

    hashInsert(&h, pos, val);
  }

  vm->val = makeClosure(i->required, i->code, parent, h);
  vm->pc = getInstrFunc(i->next);
  vm->pcData = i->next;
}

static void
instrMakeClosureGCFunc(struct GC *gc, void *obj) {
  struct InstrMakeClosure *x = obj;

  gcField(gc, &x->code->head);
  gcField(gc, &x->next->head);
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

typedef void (*InstrGCFunc)(struct GC *gc, void *obj);

struct _instrMethod {
  InstrFunc exec;
  InstrGCFunc gcFunc;
  /* void (*codeGen)(struct CodeGen *cg, Instr *instr); */
} instrMethodTable[instrHeadMax] = {
  [instrHeadConst]{.exec = instrConstExec, .gcFunc = instrConstGCFunc},
  [instrHeadIf]{.exec = instrIfExec, .gcFunc = instrIfGCFunc},
  [instrHeadNOP]{.exec = instrNOPExec, .gcFunc = instrNOPGCFunc},
  [instrHeadPush]{.exec = instrPushExec, .gcFunc = instrPushGCFunc},
  [instrHeadLocalRef]{.exec = instrLocalRefExec, .gcFunc = instrLocalRefGCFunc},
  [instrHeadClosureRef]{.exec = instrClosureRefExec, .gcFunc = instrClosureRefGCFunc},
  [instrHeadGlobalRef]{.exec = instrGlobalRefExec, .gcFunc = instrGlobalRefGCFunc},
  [instrHeadPrimitive]{.exec = instrPrimitiveExec, .gcFunc = instrPrimitiveGCFunc},
  [instrHeadExit]{.exec = instrExitExec, .gcFunc = NULL},
  [instrHeadCall]{.exec = instrCallExec, .gcFunc = instrCallGCFunc},
  [instrHeadPrepareCall]{.exec = instrPrepareCallExec, .gcFunc = instrPrepareCallGCFunc},
  [instrHeadMakeClosure]{.exec = instrMakeClosureExec, .gcFunc = instrMakeClosureGCFunc},
};

InstrFunc getInstrFunc(Instr i) {
  return instrMethodTable[i->type].exec;
}

InstrGCFunc getInstrGCFunc(Instr i) {
  return instrMethodTable[i->type].gcFunc;
}

/* InstrCodeGenFunc getInstrGCFunc(Instr i) { */
/*   return instrMethodTable[i->type].codeGen; */
/* } */

void
instrGCFunc(struct GC *gc, void *obj) {
  Instr instr = obj;
  if (instr->type == instrHeadExit) {
    // Nothing
  }
  return getInstrGCFunc(instr)(gc, obj);
}
