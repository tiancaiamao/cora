#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reader.h"
#include "types.h"

struct returnAddr {
  void *pc;
  int base;
  int pos;
};

struct callStack {
  struct returnAddr *data;
  int len;
  int cap;
};

static void
ensureSize(char **data, int *len, int *cap, int sz) {
  if (*len + sz < *cap) {
    return;
  }

  while(*len + sz >= *cap) {
    *cap = *cap * 2;
  }
  void *newData = malloc(*cap);
  memcpy(newData, *data, *len);
  free(*data);
  *data = newData;
}

static void
saveStack(struct callStack *cs, void *pc, int base, int pos) {
  if (cs->len + 1 >= cs->cap) {
    cs->cap = cs->cap * 2;
    void *newData = malloc(cs->cap);
    memcpy(newData, cs->data, cs->len);
    free(cs->data);
    cs->data = newData;
  }
  
  struct returnAddr *addr = &cs->data[cs->len];
  addr->pc = pc;
  addr->base = base;
  addr->pos = pos;
  cs->len++;
  return;
}

static void
popStack(struct callStack *cs, void **pc, int *base, int *pos) {
  cs->len--;
  struct returnAddr *addr = &cs->data[cs->len];
  *pc = addr->pc;
  *base = addr->base;
  *pos = addr->pos;
  return;
}

struct VM {
  Obj *stack;
  int base;
  struct callStack callstack;
  Obj result;
};

static void
opConst(void* pc, Obj val, struct VM *vm, int pos) {
  pc = (void*)((char*)pc+sizeof(opcode));
  val = *((Obj*)pc);
  pc = (void*)((char*)pc + sizeof(Obj));
  (*((opcode*)pc))(pc, val, vm, pos);
}

static void
opLocalRef(void* pc, Obj val, struct VM *vm, int pos) {
  pc = (char*)pc + sizeof(opcode*);
  uint32_t idx = *((uint32_t*)pc);
  pc = (char*)pc + sizeof(uint32_t);
  val = vm->stack[vm->base+idx+1];
  (*((opcode*)pc))(pc, val, vm, pos);
}

static void
opLocalSet(void* pc, Obj val, struct VM *vm, int pos) {
  pc = (char*)pc + sizeof(opcode*);
  uint32_t idx = *((uint32_t*)pc);
  pc = (char*)pc + sizeof(uint32_t);
  vm->stack[vm->base+idx+1] = val;
  (*((opcode*)pc))(pc, val, vm, pos);
}

static void
opGlobalRef(void *pc, Obj val, struct VM *vm, int pos) {
  pc = (void*)((char*)pc+sizeof(opcode));
  Obj sym = *((Obj*)pc);
  assert(issymbol(sym));
  struct trieNode* s = ptr(sym);
  val = s->value;
  if (val == Undef) {
    printf("undefined global symbol: %s\n", s->sym);
    assert(false);
  }
  pc = (void*)((char*)pc + sizeof(uint64_t));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static Obj
makePrimitive(void* fn, int nargs) {
  Obj tmp = makeClosure(nargs, 0, NULL, NULL, 0);
  struct scmClosure* clo = mustClosure(tmp);
  clo->fn = fn;
  clo->required = nargs;
  clo->code = &clo->fn;
  return tmp;
}


static void makeTheCall(void *pc, Obj val, struct VM *vm, int pos);
static void opExit(void* pc, Obj val, struct VM *vm, int pos);

static void
resumeCurry(void *pc, Obj val, struct VM *vm, int pos) {
  struct scmClosure* clo = mustClosure(vm->stack[vm->base]);
  // TODO: make sure the capacity of the stack is enough
  memmove(vm->stack+clo->nfrees, &vm->stack[vm->base + 1], sizeof(Obj) * (pos - vm->base-1));
  memmove(vm->stack, clo->closed, sizeof(Obj)*clo->nfrees);
  pos += (clo->nfrees - 1);
  makeTheCall(pc, val, vm, pos);
}

static Obj
makeCurry(int required, Obj *closed, int nfrees) {
  Obj tmp = makeClosure(required, nfrees, closed, NULL, 0);
  struct scmClosure* clo = mustClosure(tmp);
  clo->fn = resumeCurry;
  clo->code = &clo->fn;
  return tmp;
}

static void
makeTheCall(void *pc, Obj val, struct VM *vm, int pos) {
  Obj fn = vm->stack[vm->base];
  int required = closureRequired(fn) + 1;
  int provided = pos - vm->base;
  if (provided == required) {
    pc = closureCode(fn);
    (*((opcode*)pc))(pc, val, vm, pos);
  } else if (provided < required) {
    int sz = sizeof(Obj) * provided;
    Obj *closed = malloc(sz);
    memcpy(closed, &vm->stack[pos-provided], sz); 
    val = makeCurry(required - provided, closed, provided);
    opExit(pc, val, vm, pos);
  } else {
    int newBase = pos;
    // TODO: make sure the capacity of the stack is enough
    memcpy(vm->stack+pos, vm->stack, required * sizeof(Obj));
    saveStack(&vm->callstack, NULL, vm->base, newBase);
    vm->base = newBase;
    pos += required;
    makeTheCall(pc, val, vm, pos);
    vm->stack[vm->base] = vm->result;
    memcpy(vm->stack+1, vm->stack+required, (provided-required)*sizeof(Obj));
    pos = newBase-(required-1);
    makeTheCall(pc, val, vm, pos);
  }
}

static void
opTailCall(void *pc, Obj val, struct VM *vm, int pos) {
  pc = (void*)((char*)pc+sizeof(opcode));
  uint32_t nargs = *((int32_t*)pc);
  for (int i=0; i<nargs; i++) {
    vm->stack[vm->base+i] = vm->stack[pos - nargs + i];
  }
  pos = vm->base+nargs;
  makeTheCall(pc, val, vm, pos);
}

static void
opClosureRef(void* pc, Obj val, struct VM *vm, int pos) {
  pc = (char*)pc + sizeof(opcode*);
  uint32_t idx = *((uint32_t*)pc);
  pc = (char*)pc + sizeof(uint32_t);
  Obj clo = vm->stack[0];
  val = closureSlot(clo, idx);
  (*((opcode*)pc))(pc, val, vm, pos);
}

static void
opExit(void* pc, Obj val, struct VM *vm, int pos) {
  popStack(&vm->callstack, &pc, &vm->base, &pos);
  if (pc == NULL) {
    vm->result = val;
  } else {
    (*((opcode*)pc))(pc, val, vm, pos);
  }
}

static void
opPush(void* pc, Obj val, struct VM *vm, int pos) {
  vm->stack[pos] = val;
  pos++;
  pc = (void*)((char*)pc + sizeof(uint64_t));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opIf(void* pc, Obj val, struct VM *vm, int pos) {
  pc = (void*)((char*)pc + sizeof(opcode*));
  if (val == True) {
    pc = (void*)((char*)pc + sizeof(uint32_t));
    (*((opcode*)(pc)))(pc, val, vm, pos);
    return;
  }
  if (val == False) {
    uint32_t sz = *((uint32_t*)pc);
    pc = (void*)((char*)pc + sizeof(uint32_t) + sz);
    (*((opcode*)(pc)))(pc, val, vm, pos);
    return;
  }
}

static void
opCall(void* pc, Obj val, struct VM *vm, int pos) {
  pc = (void*)((char*)pc+sizeof(opcode));
  uint32_t nargs = *((uint32_t*)pc);
  pc = (void*)((char*)pc + sizeof(uint32_t));
  int newBase = pos - nargs;
  saveStack(&vm->callstack, pc, vm->base, newBase);
  vm->base = newBase;
  makeTheCall(pc, val, vm, pos);
}

static void
opMakeClosure(void *pc, Obj val, struct VM *vm, int pos) {
  pc = (void*)((char*)pc + sizeof(opcode*));
  uint32_t required = *((uint32_t*)pc);
  pc = (void*)((char*)pc + sizeof(uint32_t));
  uint32_t nfrees = *((uint32_t*)pc);
  pc = (void*)((char*)pc + sizeof(uint32_t));

  Obj *closed = NULL;
  if (nfrees > 0 ) {
    closed = malloc(sizeof(Obj) * nfrees);
    memcpy(closed, vm->stack+pos-nfrees, sizeof(Obj) * nfrees);
  }

  uint32_t sz = *((uint32_t*)pc);
  pc = (void*)((char*)pc + sizeof(uint32_t));
  val = makeClosure(required, nfrees, closed, pc, sz);
  pc = (void*)((char*)pc + sz);

  /* pc = (void*)((char*)pc + sizeof(opcode*)); */
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimSet(void *pc, Obj val, struct VM *vm, int pos) {
  val = vm->stack[pos-1];
  Obj key = vm->stack[pos-2];
  assert(issymbol(key));
  struct trieNode* s = ptr(key);
  s->value = val;
  pos -= 2;
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimSub(void *pc, Obj val, struct VM *vm, int pos) {
  Obj x = vm->stack[pos-2];
  Obj y = vm->stack[pos-1];
  if (isfixnum(x) && isfixnum(y)) {
    val = x - y;
  } else {
    // TODO
  }
  pos -= 2;
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimAdd(void *pc, Obj val, struct VM *vm, int pos) {
  Obj x = vm->stack[pos-1];
  Obj y = vm->stack[pos-2];
  if (isfixnum(x) && isfixnum(y)) {
    val = x + y;
  } else {
    // TODO
  }
  pos -= 2;
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimCar(void *pc, Obj val, struct VM *vm, int pos) {
  val = car(vm->stack[--pos]);
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimCdr(void *pc, Obj val, struct VM *vm, int pos) {
  val = cdr(vm->stack[--pos]);
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimCons(void *pc, Obj val, struct VM *vm, int pos) {
  Obj y = vm->stack[--pos];
  Obj x = vm->stack[--pos];
  val = cons(x, y);
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimIsCons(void *pc, Obj val, struct VM *vm, int pos) {
  if (iscons(vm->stack[--pos])) {
    val = True;
  } else {
    val = False;
  }
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimNot(void *pc, Obj val, struct VM *vm, int pos) {
  Obj x = vm->stack[--pos];
  if (x == True) {
    val = False;
  } else if (x == False) {
    val = True;
  } else {
    assert(false);
  }
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimMul(void *pc, Obj val, struct VM *vm, int pos) {
  Obj x = vm->stack[pos-1];
  Obj y = vm->stack[pos-2];
  val = makeNumber(fixnum(x) * fixnum(y));
  pos -= 2;
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static Obj
__inline_eq(Obj x, Obj y) {
  if (x == y) {
    return True;
  }
  uintptr_t tagX = tag(x);
  uintptr_t tagY = tag(y);
  if (tagX != tagY) {
    return False;
  }
  if (tagX != TAG_CONS || tagX != TAG_PTR) {
    return False;
  }

  return eq(x, y) ? True : False;
}

static void
opPrimEQ(void *pc, Obj val, struct VM *vm, int pos) {
  Obj x = vm->stack[pos-1];
  Obj y = vm->stack[pos-2];
  val = __inline_eq(x, y);
  pos -= 2;
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opReserveLocals(void* pc, Obj val, struct VM *vm, int pos) {
  pc = (char*)pc + sizeof(opcode*);
  uint32_t nlocals = *((uint32_t*)pc);
  pc = (char*)pc + sizeof(uint32_t);
  // The top level let differs from the let inside a lambda.
  // There is no [fn arg1 arg2 ...], need to fill [fn] to make the offset correct.
  if (vm->base == pos) {
    pos++;
  }
  pos += nlocals;
  (*((opcode*)pc))(pc, val, vm, pos);
}

struct program {
  char *code;
  int len1;
  int cap1;
};

static void
progAppendOP(struct program *p, opcode op) {
  ensureSize(&p->code, &p->len1, &p->cap1, sizeof(op));
  memcpy(p->code+p->len1, &op, sizeof(op));
  p->len1 += sizeof(op);
}

static void
progAppendObj(struct program *p, Obj obj) {
  ensureSize(&p->code, &p->len1, &p->cap1, sizeof(obj));
  memcpy(p->code+p->len1, &obj, sizeof(obj));
  p->len1 += sizeof(obj);
}

static void
progAppendInt32(struct program *p, int32_t v) {
  ensureSize(&p->code, &p->len1, &p->cap1, sizeof(int32_t));
  memcpy(p->code+p->len1, &v, sizeof(int32_t));
  p->len1 += sizeof(int32_t);
}

Obj symConst,symLocalRef,symClosureRef,symGlobalRef,symIf,symMakeClosure,symTailCall,symCall,symPush,symExit,symPrimitive,symReserveLocals,symLocalSet;

static void toExecMany(Obj exp, struct program *p);

static void
toExec(Obj exp, struct program *p) {
  Obj sym = car(exp);
  if (sym == symConst) {
    progAppendOP(p, opConst);
    progAppendObj(p, cadr(exp));
  } else if (sym == symLocalRef) {
    progAppendOP(p, opLocalRef);
    progAppendInt32(p, fixnum(cadr(exp)));
  } else if (sym == symClosureRef) {
    progAppendOP(p, opClosureRef);
    progAppendInt32(p, fixnum(cadr(exp)));
  } else if (sym == symGlobalRef) {
    progAppendOP(p, opGlobalRef);
    progAppendObj(p, cadr(exp));
  } else if (sym == symIf) {
    progAppendOP(p, opIf);
    int pos = p->len1;
    ensureSize(&p->code, &p->len1, &p->cap1, sizeof(uint32_t));
    p->len1 += sizeof(uint32_t);
    toExecMany(cadr(exp), p);
    int sz = p->len1 - pos - sizeof(uint32_t);
    *((uint32_t*)(p->code+pos)) = sz;
    toExecMany(cadr(cdr(exp)), p);
  } else if (sym == symMakeClosure) {
    progAppendOP(p, opMakeClosure);
    progAppendInt32(p, fixnum(cadr(exp))); // required
    progAppendInt32(p, fixnum(cadr(cdr(exp)))); // nfrees
    int pos = p->len1;
    ensureSize(&p->code, &p->len1, &p->cap1, sizeof(uint32_t));
    p->len1 += sizeof(uint32_t);
    toExecMany(cadr(cdr(cdr(exp))), p);
    int sz = p->len1 - pos - sizeof(uint32_t);
    *(uint32_t*)(p->code+pos) = sz;
  } else if (sym == symTailCall) {
    progAppendOP(p, opTailCall);
    progAppendInt32(p, fixnum(cadr(exp)));
  } else if (sym == symCall) {
    progAppendOP(p, opCall);
    progAppendInt32(p, fixnum(cadr(exp)));
  } else if (sym == symPush) {
    progAppendOP(p, opPush);
  } else if (sym == symExit) {
    progAppendOP(p, opExit);
  } else if (sym == symReserveLocals) {
    progAppendOP(p, opReserveLocals);
    progAppendInt32(p, fixnum(cadr(exp)));
  } else if (sym == symLocalSet) {
    progAppendOP(p, opLocalSet);
    progAppendInt32(p, fixnum(cadr(exp)));
  } else if (sym == symPrimitive) {
    Obj prim = cadr(exp);
    if (prim == makeSymbol("=")) {
      progAppendOP(p, opPrimEQ);
    } else if (prim == makeSymbol("set")) {
      progAppendOP(p, opPrimSet);
    } else if (prim == makeSymbol("+")) {
      progAppendOP(p, opPrimAdd);
    } else if (prim == makeSymbol("-")) {
      progAppendOP(p, opPrimSub);
    } else if (prim == makeSymbol("*")) {
      progAppendOP(p, opPrimMul);
    } else if (prim == makeSymbol("car")) {
      progAppendOP(p, opPrimCar);
    } else if (prim == makeSymbol("cdr")) {
      progAppendOP(p, opPrimCdr);
    } else if (prim == makeSymbol("cons")) {
      progAppendOP(p, opPrimCons);
    } else if (prim == makeSymbol("not")) {
      progAppendOP(p, opPrimNot);
    } else if (prim == makeSymbol("cons?")) {
      progAppendOP(p, opPrimIsCons);
    } else {
      printf("primitive not implement: %s\n", symbolStr(prim));
    }
  } else {
    printf("instr not implement: %s\n", symbolStr(car(exp)));
  }
}

static void
toExecMany(Obj exp, struct program *p) {
  for (; exp != Nil; exp = cdr(exp)) {
    toExec(car(exp), p);
  }
}

static char*
bytecodeToExec(Obj bc)  {
  struct program p;
  p.cap1 = 64;
  p.len1 = 0;
  p.code = malloc(p.cap1);
  toExecMany(bc, &p);
  return p.code;
}

Obj
run(char *pc) {
  struct VM vm;
  vm.base = 0;
  vm.stack = malloc(4096);
  vm.callstack.data = malloc(64*sizeof(struct returnAddr));
  vm.callstack.len = 0;
  vm.callstack.cap = 64;
  saveStack(&vm.callstack, NULL, 0, 0);

  Obj val = Nil;
  int pos = 0;
  (*(opcode*)(pc))(pc, val, &vm, pos); 
  return vm.result;
}

/* static void */
/* xxx(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj x = vm->stack[vm->base+1]; */
/*   Obj y = vm->stack[vm->base+2]; */
/*   val = makeNumber(fixnum(x) + fixnum(y)); */

/*   opExit(pc, val, vm, pos); */
/* } */

int main(int argc, char *argv[]) {
  symConst=makeSymbol("const");
  symLocalRef = makeSymbol("local-ref");
  symClosureRef = makeSymbol("closure-ref");
  symGlobalRef = makeSymbol("global-ref");
  symIf = makeSymbol("if");
  symMakeClosure = makeSymbol("make-closure");
  symTailCall = makeSymbol("tailcall");
  symCall = makeSymbol("call");
  symPush = makeSymbol("push");
  symExit = makeSymbol("exit");
  symPrimitive = makeSymbol("primitive");
  symReserveLocals = makeSymbol("reserve-locals");
  symLocalSet = makeSymbol("local-set");

  /* char *bc = "((global-ref test) (push) (const 1) (push) (const 2) (push) (tailcall 3))"; */

  FILE *in = fopen("../init.bc", "r");
  if (in == NULL) {
    assert("wrong path");
  }
  struct SexpReader r = {.pkgMapping = Nil, .selfPath = ""};
  int err = 0;
  Obj ast = sexpRead(&r, in, &err);
  while(ast != Nil) {
    /* printf("========================================= read == \n"); */

    Obj code = car(ast);
    char *exec = bytecodeToExec(code);
    Obj res = run(exec);
    printObj(stdout, res);

    ast = cdr(ast);
  }


  /* FILE *stream = fmemopen(bc, strlen(bc), "r"); */
  /* struct SexpReader r = {.pkgMapping = Nil}; */
  /* int errCode; */
  /* Obj code = sexpRead(&r, stream, &errCode); */
  /* char *exec = bytecodeToExec(code); */
  /* Obj res = run(exec); */
  /* printObj(stdout, res); */
}
