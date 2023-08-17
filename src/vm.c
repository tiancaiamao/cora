#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reader.h"
#include "types.h"
#include "builtin.h"

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
    void *newData = malloc(cs->cap*sizeof(struct returnAddr));
    memcpy(newData, cs->data, cs->len*sizeof(struct returnAddr));
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

const int INIT_STACK_SIZE = 4096;

static void
resumeCurry(void *pc, Obj val, struct VM *vm, int pos) {
  struct scmClosure* clo = mustClosure(vm->stack[vm->base]);
  // TODO: make sure the capacity of the stack is enough
  if ((pos + (clo->nfrees - 1)) >= INIT_STACK_SIZE) {
    assert(false);
  }
  memmove(&vm->stack[vm->base+clo->nfrees], &vm->stack[vm->base + 1], sizeof(Obj) * (pos - vm->base-1));
  memmove(&vm->stack[vm->base], clo->closed, sizeof(Obj)*clo->nfrees);
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
    if ((pos + required) >= INIT_STACK_SIZE) {
      assert(false);
    }
    memmove(vm->stack+pos, &vm->stack[vm->base], required * sizeof(Obj));
    saveStack(&vm->callstack, NULL, vm->base, newBase);
    vm->base = newBase;
    pos += required;
    makeTheCall(pc, val, vm, pos);
    vm->stack[vm->base] = vm->result;
    memmove(vm->stack+vm->base+1, vm->stack+vm->base+required, (provided-required)*sizeof(Obj));
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
  Obj clo = vm->stack[vm->base];
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
  assert(false);
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
    pos -= nfrees;
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
    assert(false);
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
    assert(false);
  }
  pos -= 2;
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimIsString(void *pc, Obj val, struct VM *vm, int pos) {
  if (isstring(vm->stack[--pos])) {
    val = True;
  } else {
    val = False;
  }
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

static uint64_t genIdx = 0;

static void
opPrimGenSym(void *pc, Obj val, struct VM *vm, int pos) {
  Obj arg = vm->stack[--pos];
  assert(issymbol(arg));
  char tmp[200];
  snprintf(tmp, 100, "#%s%ld", symbolStr(arg), genIdx);
  genIdx++;
  val = makeSymbol(tmp);
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimIsInteger(void *pc, Obj val, struct VM *vm, int pos) {
  if (isfixnum(vm->stack[--pos])) {
    val = True;
  } else {
    val = False;
  }
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimIsSymbol(void *pc, Obj val, struct VM *vm, int pos) {
  if (issymbol(vm->stack[--pos])) {
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
opPrimGT(void *pc, Obj val, struct VM *vm, int pos) {
  Obj y = vm->stack[--pos];
  Obj x = vm->stack[--pos];
  assert(isfixnum(x));
  assert(isfixnum(y));
  if (fixnum(x) > fixnum(y)) {
    val = True;
  } else {
    val = False;
  }
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimLT(void *pc, Obj val, struct VM *vm, int pos) {
  Obj y = vm->stack[--pos];
  Obj x = vm->stack[--pos];
  assert(isfixnum(x));
  assert(isfixnum(y));
  if (fixnum(x) < fixnum(y)) {
    val = True;
  } else {
    val = False;
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
  if (tagX != TAG_CONS && tagX != TAG_PTR) {
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
    Obj val = cadr(exp);
    if (iscons(val)) {
      printObj(stdout, exp);
      printf("invalid bytecode (const (pair ..))\n");
      /* assert(false); */
    }
    progAppendObj(p, val);
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
    } else if (prim == makeSymbol("<")) {
      progAppendOP(p, opPrimLT);
    } else if (prim == makeSymbol(">")) {
      progAppendOP(p, opPrimGT);
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
    } else if (prim == makeSymbol("gensym")) {
      progAppendOP(p, opPrimGenSym);
    } else if (prim == makeSymbol("integer?")) {
      progAppendOP(p, opPrimIsInteger);
    } else if (prim == makeSymbol("symbol?")) {
      progAppendOP(p, opPrimIsSymbol);
    } else if (prim == makeSymbol("string?")) {
      progAppendOP(p, opPrimIsString);
    } else {
      printf("primitive not implement: %s\n", symbolStr(prim));
    }
  } else {
    /* printf("instr not implement: %s\n", symbolStr(car(exp))); */
    printf("instr not implement: ");
    printObj(stdout, exp);
    printf("\n");
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

void
coraInit() {
  symQuote = intern("quote");
  symIf = intern("if");
  symLambda = intern("lambda");
  symDo = intern("do");
  symMacroExpand = intern("macroexpand");
  symDebugEval = intern("*debug-eval*");
  symbolSet(intern("*imported*"), Nil);
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

  symbolSet(makeSymbol("symbol->string"), makePrimitive(builtinSymbolToString, 1));
  symbolSet(makeSymbol("load"), makePrimitive(builtinLoad, 2));
  symbolSet(makeSymbol("vector"), makePrimitive(builtinMakeVector, 1));
  symbolSet(makeSymbol("vector?"), makePrimitive(builtinIsVector, 1));
  symbolSet(makeSymbol("vector-set!"), makePrimitive(builtinVectorSet, 3));
  symbolSet(makeSymbol("vector-ref"), makePrimitive(builtinVectorRef, 2));
  symbolSet(makeSymbol("import"), makePrimitive(builtinImport, 1));
  symbolSet(makeSymbol("intern"), makePrimitive(builtinIntern, 1));
  symbolSet(makeSymbol("number?"), makePrimitive(builtinIsNumber, 1));
}

static bool inited = false;

struct VM*
newVM() {
  if (!inited) {
    coraInit();
    inited = true;
  }
  struct VM *vm = malloc(sizeof(struct VM));
  vm->base = 0;
  vm->stack = malloc(INIT_STACK_SIZE * sizeof(Obj));
  vm->callstack.data = malloc(64*sizeof(struct returnAddr));
  vm->callstack.len = 0;
  vm->callstack.cap = 64;
  return vm;
}

Obj
run(struct VM *vm, char *pc) {
  saveStack(&vm->callstack, NULL, 0, 0);
  (*(opcode*)(pc))(pc, Nil, vm, 0); 
  return vm->result;
}

int
loadByteCode(struct VM *vm, str path) {
  FILE *in = fopen(path.str, "r");
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
    run(vm, exec);
    /* printObj(stdout, res); */
    ast = cdr(ast);
  }
  return 0;
}

Obj
macroExpand(struct VM *vm, Obj exp) {
  Obj val = symbolGet(symMacroExpand);
  if (val == Nil || val == Undef) {
    return exp;
  }
  int pos = 0;
  vm->stack[pos++] = val;
  vm->stack[pos++] = exp;
  saveStack(&vm->callstack, NULL, 0, pos);
  makeTheCall(NULL, Nil, vm, pos);
  return vm->result;
}

Obj
eval(struct VM *vm, Obj exp) {
  // call (cora/lib/compile.cc exp) to generate the bytecode
  Obj compile = symbolGet(makeSymbol("cora/lib/compile.cc"));
  int pos = 0;
  vm->stack[pos++] = compile;
  vm->stack[pos++] = exp;
  saveStack(&vm->callstack, NULL, 0, pos);
  makeTheCall(NULL, Nil, vm, pos);

  /* printf("the byte code is ===\n"); */
  /* printObj(stdout, vm->result); */

  // run the bytecode
  char *pc = bytecodeToExec(vm->result);
  return run(vm, pc);
}

Obj
vmGet(struct VM *vm, int idx) {
  return vm->stack[vm->base + idx];
}

void
vmReturn(struct VM *vm, Obj val) {
  opExit(NULL, val, vm, 0);
}

#ifdef _EVAL_TEST_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "reader.h"
#include <assert.h>

struct testCase {
  char *name;
  char *input;
  char *output;
};

extern void printObj(FILE *to, Obj o);

static void
TestEvalBasic() {
  struct testCase cases[] = {
    {
      "curry as arg",
      "((lambda (f) (f 42)) (+ 1))",
      "43",
    },

    {
      "curry",
      "(do (set (quote f) (lambda (x y z) y)) ((f 1 2) 3))",
      "2",
    },

    {
      "curry-partial",
      "((lambda (x) (lambda (y) (lambda (z) (+ x z)))) 1 2 3)",
      "4",
    },
    {
      "curry1",
      "(do (set (quote f) (lambda (x) \
			      (do (set (quote ignore) (lambda (z w) \
						       (lambda (y) \
							z))) (ignore)))) \
		(((f 1) 2 3) 4))",
      "2",
    },

    {
      "fib10",
      "(do (set (quote fib) (lambda (i) \
	(if (= i 0) \
	    1 \
	    (if (= i 1) \
		1 \
		(+ (fib (- i 1)) (fib (- i 2))))))) \
	(fib 10))",
      "89",
    },

    {
      "proper tail call",
      "(do (set (quote sum) (lambda (r i) \
	  (if (= i 0) \
	      r \
	      (sum (+ r 1) (- i 1))))) \
	(sum 0 5000000))",
      "5000000",
    },

    {
      "do in args",
      "(+ (do 1 (do 2 3)) 4)",
      "7",
    },

    {
      "partial primitive",
      "(+ (+ (+ 1 2) 3) 4)",
      "10",
    },

    {
      "do in tail call",
      "(do (set (quote f) (lambda (x y z) (do 1 (do 2 z)))) (f 1 2 3))",
      "3",
    },

    {
      "closure value",
      "((((lambda (x) (lambda (y) (lambda (z) (+ x z)))) 1) 2) 3)",
      "4",
    },

    {
      "basic func call",
      "(do (set (quote id) (lambda (x) x)) (id (do 1 (do 2 42))))",
      "42",
    },

    {
      "identify function",
      "(do (set (quote id) (lambda (x) x)) (id 42))",
      "42",
    },

    {
      "basic set",
      "(do (set (quote x) 42) x)",
      "42",
    },

    {
      "basic if",
      "(if true 1 2)",
      "1",
    },

    {
      "curry lambda",
      "((lambda (x) (lambda (y) (lambda (z) z))) 1 2 3)",
      "3",
    },

    {
      "basic lambda",
      "(((lambda (x y) (lambda (z) y)) 1 2) 3)",
      "2",
    },

    {
      "basic do",
      "(do 1 2)",
      "2",
    },

    {
      "basic primitive",
      "(+ 3 7)",
      "10",
    },

    {
      "constant",
      "42",
      "42",
    },

    {
      "partial primitive1",
      "((+ 1) 2)",
      "3",
    },

    {
      "partial primitive2",
      "(((+) 1) 2)",
      "3",
    },

  };

  struct VM *vm= newVM();
  loadByteCode(vm, cstr("../init.bc"));
  loadByteCode(vm, cstr("../compile.bc"));
  for (int i=0; i<sizeof(cases)/sizeof(struct testCase); i++) {
    struct testCase *c = &cases[i];

    printf("testing case %s ", c->name);

    struct SexpReader r = {.pkgMapping = Nil};
    FILE* f = fmemopen(c->input, strlen(c->input), "r");
    int errCode;
    Obj s = sexpRead(&r, f, &errCode);
    Obj res = eval(vm, s);

    char output[512];
    memset(output, 0, 512);
    FILE *to = fmemopen(output, 512, "w");
    printObj(to, res);
    fclose(to);

    int v = strcmp(output, c->output);
    if (v != 0) {
      printf("run test case: %s fail\n", c->name);
      printf("expected: %s\n", c->output);
      printf("actual: %s\n", output);
    }
    assert(v == 0);

    printf("... ok\n");
  }
}

static void
TestTryCatch() {
  struct testCase cases[] = {
    {
      "let-variable-shadow",
      "(do (set (quote f) (lambda (a b) (let a 3 a))) (f 4 5))",
      "3",
    },
    {
      "let variable shadow",
      "(let Result 123 \
	(let Result 456 \
		  (if (= Result 456) \
		      true \
		      Result)))",
      "true",
    },
    {
      "try-let",
      "(try (lambda () (let X 666 42)) (lambda (E) (cons '--> (cons 'A ()))))",
      "42",
    },

    {
      "no throw",
      "(try (lambda () 42) (lambda (v cc) v))",
      "42",
    },
    {
      "basic throw",
      "(try (lambda () (throw 42)) (lambda (v _) v))",
      "42",
    },
    {
      "resume",
      "(try (lambda () (throw 42)) (lambda (v resume) (resume v)))",
      "42",
    },
    {
      "try in primitive call",
      "(+ (try (lambda () (throw 42)) (lambda (v resume) (resume v))) 1)",
      "43",
    },
    {
      "try in closure call",
      "(do (set 'f (lambda (x) x)) (f (try (lambda () (throw 42)) (lambda (v resume) (resume v)))))",
      "42",
    },
    {
      "throw in primitive call",
      "(try (lambda () (+ (throw 42) 1)) (lambda (v _) v))",
      "42",
    },
    {
      "throw in closure call",
      "(do (set 'f (lambda (a b) b)) (try (lambda () (f (throw 42) 33)) (lambda (v _) v)))",
      "42",
    },
    {
      "resume in primitive call1",
      "(try (lambda () (+ (throw 42) 1)) (lambda (v resume) (resume 66)))",
      "67",
    },
    {
      "resume in primitive call2",
      "(try (lambda () (+ (throw 42) 1)) (lambda (v resume) (resume (+ v 1))))",
      "44",
    },
    {
      "resume in closure call",
      "(do (set 'f (lambda (a b) (+ a b))) (try (lambda () (f (throw 42) 1)) (lambda (v resume) (resume (+ v 1)))))",
      "44",
    },
    {
      "throw in handler",
      "(try (lambda () \
		(try (lambda () \
			(throw \"from body\")) \
		     (lambda (v cc) \
			(throw \"from inner\")))) \
	    (lambda (v1 cc1) \
		v1))",
      "\"from inner\"",
    },
    {
      "try partial curry",
      "((try (lambda () (+ ((throw 4) 7) 5))) (lambda (v cc) (cc (+ v))))",
      "16",
    },
    /* { */
    /*   "curry throw is not supported", */
    /*   "((try (lambda () (throw)) (lambda (v cc) (v))) 666)", */
    /*   "666", */
    /* } */
    {
      "closure ref",
      "((lambda (x y) \
	(try (lambda () \
		(+ x (throw 'ignore))) \
	    (lambda (v resume) (resume y)))) \
	666 1)",
      "667",
    },
    {
      "iterate list",
      "(try (lambda () (map (lambda (x) (throw x)) [1 2 3 4 5])) (lambda (v cc) (cc v)))",
      "12345",
    },
    {
      "throw in deep stack",
      "(do \
 (set 'add (lambda (x y) (+ x y))) \
 (do (set 'f (lambda (n) \
	       (if (= n 0) \
		   (throw 42) \
		 (add (f (- n 1)) 1)))) \
     (try (lambda () \
	    (f 300)) \
      (lambda (v cc) (cc v)))))",
      "342",
    },
    {
      "recover multiple times",
      "(try (lambda () (do (throw 1) (throw 2))) (lambda (v cc) (cc v)))",
      "2",
    },
  };

  struct VM *vm= newVM();
  loadByteCode(vm, cstr("../init.bc"));
  loadByteCode(vm, cstr("../compile.bc"));

  /* char *pkgName = "cora/init"; */
  /* eval(vm, cons(intern("import"), cons(makeString(pkgName, strlen(pkgName)), Nil))); */

  for (int i=0; i<sizeof(cases)/sizeof(struct testCase); i++) {
    struct testCase *c = &cases[i];

    printf("testing case %s ", c->name);

    struct SexpReader r = {.pkgMapping = Nil};
    FILE* f = fmemopen(c->input, strlen(c->input), "r");
    int errCode;
    Obj s = sexpRead(&r, f, &errCode);
    Obj exp = macroExpand(vm, s);
    Obj res = eval(vm, exp);

    char output[512];
    memset(output, 0, 512);
    FILE *to = fmemopen(output, 512, "w");
    printObj(to, res);
    fclose(to);

    int v = strcmp(output, c->output);
    if (v != 0) {
      printf("run test case: %s fail\n", c->name);
      printf("expected: %s\n", c->output);
      printf("actual: %s\n", output);
    }
    assert(v == 0);

    printf("... ok\n");
  }
}

int main() {
  TestEvalBasic();
  /* TestTryCatch(); */
}

#endif



#ifdef _BOOTSTRAP_TEST_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "reader.h"
#include <assert.h>


void readFileAsSexp(void *pc, Obj val, struct VM *vm, int pos) {
  Obj path = vmGet(vm, 1);
  Obj pkg = vmGet(vm, 2);

  struct SexpReader r = {.pkgMapping = Nil, .selfPath = toCStr(stringStr(pkg))};
  strBuf pathStr = stringStr(path);
  FILE* f = fopen(toCStr(pathStr), "r");
  int errCode = 0;
  Obj ret = Nil;
  while(errCode == 0) {
    Obj v = sexpRead(&r, f, &errCode);
    ret = cons(v, ret);
  }
  fclose(f);
  ret = reverse(ret);
  vmReturn(vm, ret);
}

void writeSexpToFile(void *pc, Obj val, struct VM *vm, int pos) {
  Obj path = vmGet(vm, 1);
  Obj exp = vmGet(vm, 2);
  strBuf pathStr = stringStr(path);
  FILE* f = fopen(toCStr(pathStr), "w");
  /* printObj(stdout, exp); */
  printObj(f, exp);
  fclose(f);
  vmReturn(vm, Nil);
}

int main(int argc, char *argv) {
  struct VM *vm = newVM();
  loadByteCode(vm, cstr("../init.bc"));
  loadByteCode(vm, cstr("../compile.bc"));

  symbolSet(makeSymbol("read-file-as-sexp"), makePrimitive(readFileAsSexp, 2));
  symbolSet(makeSymbol("write-sexp-to-file"), makePrimitive(writeSexpToFile, 2));
  // (load "lib/bootstrap.cora" "")  to generate the new init.bc and compile.bc
  char *s = "../lib/bootstrap.cora";
  eval(vm, cons(intern("load"), cons(makeString(s, strlen(s)), cons(makeString("", 0), Nil))));

  // Check the new generated bytecode can be load successfully
  loadByteCode(vm, cstr("./init.bc"));
  loadByteCode(vm, cstr("./compile.bc"));
}

#endif
