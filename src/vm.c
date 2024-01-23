#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reader.h"
#include "vm.h"
#include "types.h"
#include "builtin.h"

struct returnAddr {
  void *pc;
  void *data;
  int base;
  int pos;
  Obj *stack;
};

struct callStack {
  struct returnAddr *data;
  int len;
  int cap;
};

static void
saveStack(struct callStack *cs, void *pc, void *data, int base, int pos, Obj *stack) {
  if (cs->len + 1 >= cs->cap) {
    cs->cap = cs->cap * 2;
    void *newData = malloc(cs->cap*sizeof(struct returnAddr));
    memcpy(newData, cs->data, cs->len*sizeof(struct returnAddr));
    free(cs->data);
    cs->data = newData;
  }
  
  struct returnAddr *addr = &cs->data[cs->len];
  addr->pc = pc;
  addr->data = data;
  addr->base = base;
  addr->pos = pos;
  addr->stack = stack;
  cs->len++;
  return;
}

static void
popStack(struct callStack *cs, nativeFn **pc, void **data, int *base, int *pos, Obj **stack) {
  cs->len--;
  struct returnAddr *addr = &cs->data[cs->len];
  *pc = addr->pc;
  *data = addr->data;
  *base = addr->base;
  *pos = addr->pos;
  *stack = addr->stack;
  return;
}

struct VM {
  Obj *stack;
  int base;
  int pos;

  struct callStack callstack;

  // pc + data = closure!
  nativeFn *pc;
  void *data;
};

int
vmPos(struct VM *vm) {
  return vm->pos;
}

Obj symConst,symLocalRef,symClosureRef,symGlobalRef,symIf,symMakeClosure,symTailCall,symCall,symPush,symExit,symPrimitive,symReserveLocals,symLocalSet, symPop;

void
opConst(struct VM *vm, Obj val) {
  vm->stack[vm->pos++] = val;
}

void
opLocalRef(struct VM *vm, int idx) {
  vm->stack[vm->pos++] = vm->stack[vm->base+idx+1];
}

void
opLocalSet(struct VM *vm, int idx) {
  vm->stack[vm->base+idx+1] = vm->stack[--vm->pos];
}

void
opGlobalRef(struct VM *vm, Obj sym) {
  assert(issymbol(sym));
  struct trieNode* s = ptr(sym);
  Obj val = s->value;
  if (val == Undef) {
    printf("undefined global symbol: %s\n", s->sym);
    assert(false);
  }
  vm->stack[vm->pos++] = val;
}

static void makeTheCall(struct VM *vm);
void opExit(struct VM *vm);

const int INIT_STACK_SIZE = 4096;

void
resumeCurry(struct VM *vm) {
  struct scmClosure* clo = mustClosure(vm->stack[vm->base]);
  // TODO: make sure the capacity of the stack is enough
  if ((vm->pos + (clo->nfrees - 1)) >= INIT_STACK_SIZE) {
    assert(false);
  }
  memmove(&vm->stack[vm->base+clo->nfrees], &vm->stack[vm->base + 1], sizeof(Obj) * (vm->pos - vm->base-1));
  memmove(&vm->stack[vm->base], clo->closed, sizeof(Obj)*clo->nfrees);
  vm->pos += (clo->nfrees - 1);
  vm->pc = makeTheCall;
}

Obj
makeCurry(int required, Obj *closed, int nfrees) {
  Obj tmp = makeClosure(NULL, required, nfrees, closed, Nil, resumeCurry);
  /* struct scmClosure* clo = mustClosure(tmp); */
  return tmp;
}

static void dispatch(struct VM *vm);

void
trampoline(struct VM *vm, nativeFn pc) {
  saveStack(&vm->callstack, NULL, NULL, vm->base, vm->pos, vm->stack);
  vm->pc = pc;
  while(vm->pc != NULL) {
    vm->pc(vm);
  }
}

static void
makeTheCall(struct VM *vm) {
  Obj fn = vm->stack[vm->base];
  int required = closureRequired(fn) + 1;
  int provided = vm->pos - vm->base;
  if (provided == required) {
    vm->pc = closurePC(fn);
    vm->data = (void*)closureCode(fn);
  } else if (provided < required) {
    int sz = sizeof(Obj) * provided;
    Obj *closed = malloc(sz);
    memcpy(closed, &vm->stack[vm->pos-provided], sz);
    Obj val = makeCurry(required - provided, closed, provided);
    vm->stack[vm->pos++] = val;
    opExit(vm);
  } else {
    int newBase = vm->pos;
    // TODO: make sure the capacity of the stack is enough
    if ((vm->pos + required) >= INIT_STACK_SIZE) {
      assert(false);
    }
    // save the extra args.
    memmove(vm->stack+vm->pos, &vm->stack[vm->base], required * sizeof(Obj));

    // eval the first call and get the result;
    saveStack(&vm->callstack, NULL, NULL, vm->base, newBase, vm->stack);
    vm->base = newBase;
    vm->pos += required;
    vm->pc = makeTheCall;
    while(vm->pc != NULL) {
      vm->pc(vm);
    }

    vm->stack[vm->base] = vm->stack[vm->pos-1];
    // recover args and make the next call.
    memmove(vm->stack+vm->base+1, vm->stack+vm->base+required, (provided-required)*sizeof(Obj));
    vm->pos = newBase-(required-1);
    /* makeTheCall(vm); */
    vm->pc = makeTheCall;
  }
}

void
opTailCall(struct VM *vm, int nargs) {
  for (int i=0; i<nargs; i++) {
    vm->stack[vm->base+i] = vm->stack[vm->pos - nargs + i];
  }
  vm->pos = vm->base+nargs;
  makeTheCall(vm);
}

void
opClosureRef(struct VM *vm, int idx) {
  Obj clo = vm->stack[vm->base];
  vm->stack[vm->pos++] = closureSlot(clo, idx);
}

void
opExit(struct VM *vm) {
  Obj val = vm->stack[vm->pos-1];
  popStack(&vm->callstack, &vm->pc, &vm->data, &vm->base, &vm->pos, &vm->stack);
  vm->stack[vm->pos++] = val;
}

void
opPop(struct VM *vm) {
  vm->pos--;
}

/* void */
/* opPush(void* pc, Obj val, struct VM *vm, int pos) { */
/*   vm->stack[pos] = val; */
/*   pos++; */
/*   pc = (void*)((char*)pc + sizeof(uint64_t)); */
/*   (*((opcode*)(pc)))(pc, val, vm, pos); */
/* } */

void
opIf(struct VM *vm, Obj succ, Obj fail) {
  Obj val = vm->stack[--vm->pos];
  if (val == True) {
    vm->data = (void*)succ;
    return;
  }
  if (val == False) {
    vm->data = (void*)fail;
    return;
  }
  assert(false);
}

void
opCall(struct VM *vm, int nargs) {
  int newBase = vm->pos - nargs;
  Obj nextBytecode = cdr((Obj)vm->data);
  saveStack(&vm->callstack, vm->pc, (void*)nextBytecode, vm->base, newBase, vm->stack);
  vm->base = newBase;
  makeTheCall(vm);
}

void
opMakeClosure(struct VM *vm, int required, int nfrees, Obj body) {
  Obj *closed = NULL;
  if (nfrees > 0 ) {
    closed = malloc(sizeof(Obj) * nfrees);
    memcpy(closed, vm->stack+vm->pos-nfrees, sizeof(Obj) * nfrees);
    vm->pos -= nfrees;
  }

  Obj val = makeClosure(vm, required, nfrees, closed, body, dispatch);
  vm->stack[vm->pos++] = val;
}

void
primSet(struct VM *vm) {
  Obj val = vm->stack[vm->pos-1];
  Obj key = vm->stack[vm->pos-2];
  assert(issymbol(key));
  struct trieNode* s = ptr(key);
  s->value = val;
  vm->pos -= 1;
}

void
primSub(struct VM *vm) {
  Obj x = vm->stack[vm->pos-2];
  Obj y = vm->stack[vm->pos-1];
  if (isfixnum(x) && isfixnum(y)) {
    vm->stack[vm->pos-2] = x - y;
    vm->pos --;
  } else {
    // TODO
    assert(false);
  }
}

void
primAdd(struct VM *vm) {
  Obj x = vm->stack[vm->pos-1];
  Obj y = vm->stack[vm->pos-2];
  if (isfixnum(x) && isfixnum(y)) {
    vm->stack[vm->pos-2] =  x + y;
    vm->pos--;
  } else {
    // TODO
    assert(false);
  }
}

void
primIsString(struct VM *vm) {
  if (isstring(vm->stack[--vm->pos])) {
    vm->stack[vm->pos++] = True;
  } else {
    vm->stack[vm->pos++] = False;
  }
}

void
primCar(struct VM *vm) {
  vm->stack[vm->pos-1] = car(vm->stack[vm->pos-1]);
}

void
primCdr(struct VM *vm) {
  vm->stack[vm->pos-1] = cdr(vm->stack[vm->pos-1]);
}

void
primCons(struct VM *vm) {
  Obj y = vm->stack[--vm->pos];
  Obj x = vm->stack[vm->pos-1];
  vm->stack[vm->pos-1] = cons(vm, vm->pos, x, y);
}

void
primIsCons(struct VM *vm) {
  if (iscons(vm->stack[vm->pos-1])) {
    vm->stack[vm->pos-1] = True;
  } else {
    vm->stack[vm->pos-1] = False;
  }
}

static uint64_t genIdx = 0;

void
primGenSym(struct VM *vm) {
  Obj arg = vm->stack[vm->pos-1];
  assert(issymbol(arg));
  char tmp[200];
  snprintf(tmp, 100, "#%s%ld", symbolStr(arg), genIdx);
  genIdx++;
  vm->stack[vm->pos-1] = makeSymbol(tmp);
}

void
primIsInteger(struct VM *vm) {
  if (isfixnum(vm->stack[vm->pos-1])) {
    vm->stack[vm->pos-1] = True;
  } else {
    vm->stack[vm->pos-1] = False;
  }
}

void
primIsSymbol(struct VM *vm) {
  if (issymbol(vm->stack[vm->pos-1])) {
    vm->stack[vm->pos-1] = True;
  } else {
    vm->stack[vm->pos-1] = False;
  }
}

void
primNot(struct VM *vm) {
  Obj x = vm->stack[vm->pos-1];
  if (x == True) {
    vm->stack[vm->pos-1] = False;
  } else if (x == False) {
    vm->stack[vm->pos-1] = True;
  } else {
    assert(false);
  }
}

void
primGT(struct VM *vm) {
  Obj y = vm->stack[--vm->pos];
  Obj x = vm->stack[vm->pos-1];
  assert(isfixnum(x));
  assert(isfixnum(y));
  if (fixnum(x) > fixnum(y)) {
    vm->stack[vm->pos-1] = True;
  } else {
    vm->stack[vm->pos-1] = False;
  }
}

void
primLT(struct VM *vm) {
  Obj y = vm->stack[--vm->pos];
  Obj x = vm->stack[vm->pos-1];
  assert(isfixnum(x));
  assert(isfixnum(y));
  if (fixnum(x) < fixnum(y)) {
    vm->stack[vm->pos-1] = True;
  } else {
    vm->stack[vm->pos-1] = False;
  }
}

void
primMul(struct VM *vm) {
  Obj x = vm->stack[vm->pos-1];
  Obj y = vm->stack[vm->pos-2];
  vm->stack[vm->pos-2] = makeNumber(fixnum(x) * fixnum(y));
  vm->pos--;
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
  return eq(x, y) ? True : False;
}

void
primEQ(struct VM *vm) {
  Obj x = vm->stack[vm->pos-1];
  Obj y = vm->stack[vm->pos-2];
  vm->stack[vm->pos-2] = __inline_eq(x, y);
  vm->pos--;
}

void
opReserveLocals(struct VM *vm, int nlocals) {
  // The top level let differs from the let inside a lambda.
  // There is no [fn arg1 arg2 ...], need to fill [fn] to make the offset correct.
  if (vm->base == vm->pos) {
    vm->pos++;
  }
  vm->pos += nlocals;
}

void
opPrimitive(struct VM *vm, Obj prim) {
  if (prim == makeSymbol("+")) {
    primAdd(vm);
  } else if (prim == makeSymbol("-")) {
    primSub(vm);
  } else if (prim == makeSymbol("=")) {
    primEQ(vm);
  } else if (prim == makeSymbol("set")) {
    primSet(vm);
  } else if (prim == makeSymbol("string?")) {
    primIsString(vm);
  } else if (prim == makeSymbol("car")) {
    primCar(vm);
  } else if (prim == makeSymbol("cdr")) {
    primCdr(vm);
  } else if (prim == makeSymbol("cons")) {
    primCons(vm);
  } else if (prim == makeSymbol("cons?")) {
    primIsCons(vm);
  } else if (prim == makeSymbol("gensym")) {
    primGenSym(vm);
  } else if (prim == makeSymbol("integer?")) {
    primIsInteger(vm);
  } else if (prim == makeSymbol("symbol?")) {
    primIsSymbol(vm);
  } else if (prim == makeSymbol("not")) {
    primNot(vm);
  } else if (prim == makeSymbol(">")) {
    primGT(vm);
  } else if (prim == makeSymbol("<")) {
    primLT(vm);
  } else if (prim == makeSymbol("*")) {
    primMul(vm);
  } 
}

static void
dispatch(struct VM *vm) {
  Obj inst = car((Obj)vm->data);
  Obj sym = car(inst);
  if (sym == symConst) {
    opConst(vm, cadr(inst));
  } else if (sym == symLocalRef) {
    opLocalRef(vm, fixnum(cadr(inst)));
  } else if (sym == symLocalSet) {
    opLocalSet(vm, fixnum(cadr(inst)));
  } else if (sym == symClosureRef) {
    opClosureRef(vm, fixnum(cadr(inst)));
  } else if (sym == symGlobalRef) {
    opGlobalRef(vm, cadr(inst));
  } else if (sym == symIf) {
    opIf(vm, cadr(inst), caddr(inst));  return;
  } else if (sym == symMakeClosure) {
    int required = fixnum(cadr(inst));
    int nfrees = fixnum(caddr(inst));
    Obj body = caddr(cdr(inst));
    opMakeClosure(vm, required, nfrees, body);
  } else if (sym == symTailCall) {
    opTailCall(vm, fixnum(cadr(inst))); return;
  } else if (sym == symCall) {
    opCall(vm, fixnum(cadr(inst))); return;
    /* } else if (sym == symPush) { */
  } else if (sym == symPop) {
    opPop(vm);
  } else if (sym == symExit) {
    opExit(vm); return;
  } else if (sym == symReserveLocals) {
    opReserveLocals(vm, fixnum(cadr(inst)));
  } else if (sym == symPrimitive) {
    opPrimitive(vm, cadr(inst));
  } else {
    /* printf("instr not implement: %s\n", symbolStr(car(exp))); */
    printf("instr not implement: ");
    printObj(stdout, inst);
    printf("\n");
  }
  vm->data = (void*)cdr((Obj)vm->data);
}


/* void */
/* builtinApply(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj fn = vmGet(vm, 1); */
/*   Obj args = vmGet(vm, 2); */
/*   pos -= 3; */
/*   vm->stack[pos++] = fn; */
/*   while(args != Nil) { */
/*     Obj tmp = car(args); */
/*     vm->stack[pos++] = tmp; */
/*     args = cdr(args); */
/*   } */
/*   makeTheCall(NULL, Nil, vm, pos); */
/* } */

/* void */
/* builtinTryCatch(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj chunk = vm->stack[vm->base + 1]; */

/*   // Save the old cont. */
/*   // This save can make the chunk and handler available to the recovering process. */
/*   // When the chunk return to this try block, the next operator would be opExit. */
/*   opcode* x = malloc(sizeof(opcode)); */
/*   *x = opExit; */
/*   saveStack(&vm->callstack, x, vm->base, pos, vm->stack); */

/*   // Prepare a new stack for the chunk to run. */
/*   vm->stack = (Obj*)malloc(sizeof(Obj)*INIT_STACK_SIZE); */
/*   vm->base = 0; */
/*   pos = 0; */

/*   // Call the chunk. */
/*   vm->stack[pos++] = chunk; */
/*   makeTheCall(NULL, Nil, vm, pos); */
/* } */

/* static void */
/* continuationAsClosure(void *pc, Obj val, struct VM *vm, int pos) { */
/*   // Replace the current stack with the delimited continuation. */
/*   Obj self = vm->stack[vm->base]; */
/*   struct callStack *delimited = mustClosure(self)->closed; */
/*   for (int i=0; i< delimited->len; i++) { */
/*     struct returnAddr *addr = &delimited->data[i]; */
/*     saveStack(&vm->callstack, addr->pc, addr->base, addr->pos, addr->stack); */
/*   } */
/*   val = vm->stack[vm->base + 1]; */
/*   opExit(vm); */
/* } */

/* static opcode continuationAsClosureOP[1] = {continuationAsClosure}; */

/* void */
/* builtinThrow(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj v = vm->stack[vm->base + 1]; */

/*   // Delimited to the previous try-catch */
/*   int p = vm->callstack.len - 1; */
/*   while(p >=0) { */
/*     struct returnAddr* addr = &vm->callstack.data[p]; */
/*     if (addr->stack != vm->stack) { */
/*       break; */
/*     } */
/*     p--; */
/*   } */
/*   if (p < 0) { */
/*     // TODO: panic, not in any try-catch block! */
/*     assert(false); */
/*   } */

/*   struct callStack *delimited = malloc(sizeof(struct callStack)); */
/*   int offset = vm->callstack.len - p; */
/*   delimited->cap = offset > 0 ? offset : 1; */
/*   delimited->data = malloc(sizeof(struct returnAddr) * delimited->cap); */
/*   delimited->len = 0; */

/*   // Now p point to the try-saved stack. */
/*   // p+1 is the new stack. */
/*   for (int i=p; i<vm->callstack.len; i++) { */
/*     struct returnAddr *cs = &vm->callstack.data[i]; */
/*     saveStack(delimited, cs->pc, cs->base, cs->pos, cs->stack); */
/*   } */

/*   // Now that we get the current continuation, disguise as a closure. */
/*   Obj cc = makeClosure(vm, pos, 1, 1, delimited, &continuationAsClosureOP, 0); */

/*   // Reset the stack, go back to (try ... catch) */
/*   vm->callstack.len = p; */
/*   struct returnAddr* c = &vm->callstack.data[p]; */
/*   pc = c->pc; */
/*   pos = c->pos; */
/*   vm->stack = c->stack; */
/*   vm->base = c->base; */

/*   // Find the handler, invoke it, passing the continuation. */
/*   Obj handler = vm->stack[vm->base + 2]; */
/*   int newBase = pos; */
/*   vm->stack[pos++] = handler; */
/*   vm->stack[pos++] = v; */
/*   vm->stack[pos++] = cc; */
/*   saveStack(&vm->callstack, pc, newBase, pos, vm->stack); */
/*   vm->base = newBase; */
/*   makeTheCall(pc, val, vm, pos); */
/* } */

void
coraInit(struct VM *vm) {
  g = gcInit();

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
  symPop = makeSymbol("pop");
  symPush = makeSymbol("push");
  symExit = makeSymbol("exit");
  symPrimitive = makeSymbol("primitive");
  symReserveLocals = makeSymbol("reserve-locals");
  symLocalSet = makeSymbol("local-set");

  /* symbolSet(makeSymbol("symbol->string"), makePrimitive(vm, 0, builtinSymbolToString, 1)); */
  symbolSet(makeSymbol("load"), makePrimitive(vm, builtinLoad, 2));
  /* symbolSet(makeSymbol("vector"), makePrimitive(vm, 0, builtinMakeVector, 1)); */
  /* symbolSet(makeSymbol("vector?"), makePrimitive(vm, 0, builtinIsVector, 1)); */
  /* symbolSet(makeSymbol("vector-set!"), makePrimitive(vm, 0, builtinVectorSet, 3)); */
  /* symbolSet(makeSymbol("vector-ref"), makePrimitive(vm, 0, builtinVectorRef, 2)); */
  symbolSet(makeSymbol("import"), makePrimitive(vm, builtinImport, 1));
  /* symbolSet(makeSymbol("intern"), makePrimitive(vm, 0, builtinIntern, 1)); */
  /* symbolSet(makeSymbol("number?"), makePrimitive(vm, 0, builtinIsNumber, 1)); */
  /* symbolSet(makeSymbol("try"), makePrimitive(vm, 0, builtinTryCatch, 2)); */
  /* symbolSet(makeSymbol("throw"), makePrimitive(vm, 0, builtinThrow, 1)); */

  /* symbolSet(makeSymbol("cora/lib/compile.c-make-program"), makePrimitive(vm, 0, builtinMakeProgram, 0)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-prog-append-op"), makePrimitive(vm, 0, builtinProgAppendOP, 2)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-prog-append-obj"), makePrimitive(vm, 0, builtinProgAppendObj, 2)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-prog-append-int32"), makePrimitive(vm, 0, builtinProgAppendInt32, 2)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-prog-append-prim"), makePrimitive(vm, 0, builtinProgAppendPrim, 2)); */

  /* symbolSet(makeSymbol("cora/lib/compile.c-prog-prepare-size"), makePrimitive(vm, 0, builtinProgPrepareSize, 1)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-prog-write-back-size"), makePrimitive(vm, 0, builtinProgWriteBackSize, 2)); */

  /* symbolSet(makeSymbol("cora/lib/compile.c-prog-run"), makePrimitive(vm, 0, builtinProgRun, 1)); */

  /* symbolSet(makeSymbol("cora/lib/compile.c-opConst"), makeNumber(0)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opLocalRef"), makeNumber(1)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opLocalSet"), makeNumber(2)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opGlobalRef"), makeNumber(3)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opTailCall"), makeNumber(4)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opClosureRef"), makeNumber(5)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opExit"), makeNumber(6)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPush"), makeNumber(7)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opIf"), makeNumber(8)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opCall"), makeNumber(9)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opMakeClosure"), makeNumber(10)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimSet"), makeNumber(11)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimSub"), makeNumber(12)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimAdd"), makeNumber(13)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimIsString"), makeNumber(14)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimCar"), makeNumber(15)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimCdr"), makeNumber(16)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimCons"), makeNumber(17)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimIsCons"), makeNumber(18)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimGenSym"), makeNumber(19)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimIsInteger"), makeNumber(20)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimIsSymbol"), makeNumber(21)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimNot"), makeNumber(22)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimGT"), makeNumber(23)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimLT"), makeNumber(24)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimMul"), makeNumber(25)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opPrimEQ"), makeNumber(26)); */
  /* symbolSet(makeSymbol("cora/lib/compile.c-opReserveLocals"), makeNumber(27)); */

  /* symbolSet(makeSymbol(".open-output-file"), makePrimitive(vm, 0, builtinOpenOutputFile, 1)); */
  /* symbolSet(makeSymbol(".close-output-file"), makePrimitive(vm, 0, builtinCloseOutputFile, 1)); */
  /* symbolSet(makeSymbol(".generate-str"), makePrimitive(vm, 0, builtinGenerateStr, 2)); */
  /* symbolSet(makeSymbol(".generate-sym"), makePrimitive(vm, 0, builtinGenerateSym, 2)); */
  /* symbolSet(makeSymbol(".generate-num"), makePrimitive(vm, 0, builtinGenerateNum, 2)); */
  /* symbolSet(makeSymbol("read-file-as-sexp"), makePrimitive(vm, 0, builtinReadFileAsSexp, 2)); */

  /* symbolSet(makeSymbol("string-append"), makePrimitive(vm, 0, builtinStringAppend, 2)); */
  /* symbolSet(makeSymbol("string-length"), makePrimitive(vm, 0, builtinStringLength, 1)); */
  /* symbolSet(makeSymbol("value"), makePrimitive(vm, 0, builtinValue, 1)); */
  /* symbolSet(makeSymbol("apply"), makePrimitive(vm, 0, builtinApply, 2)); */
  /* symbolSet(makeSymbol("display"), makePrimitive(vm, 0, builtinDisplay, 1)); */
  /* symbolSet(makeSymbol("read-sexp"), makePrimitive(vm, 0, builtinReadSexp, 0)); */
}

static bool inited = false;

struct VM*
newVM() {
  struct VM *vm = malloc(sizeof(struct VM));
  if (!inited) {
    coraInit(vm);
    inited = true;
  }
  vm->base = 0;
  vm->stack = malloc(INIT_STACK_SIZE * sizeof(Obj));
  vm->callstack.data = malloc(64*sizeof(struct returnAddr));
  vm->callstack.len = 0;
  vm->callstack.cap = 64;
  return vm;
}

Obj
run(struct VM *vm, Obj exp) {
  /* int before = vm->pos; */
  vm->data = (void*)exp;
  trampoline(vm, dispatch);
  /* printf("before run and after ==%d %d\n", before, vm->pos); */
  return vm->stack[--vm->pos];
}

Obj
vmGet(struct VM *vm, int idx) {
  return vm->stack[vm->base + idx];
}

void
vmReturn(struct VM *vm, Obj val) {
  opExit(vm);
}

void
vmPush(struct VM *vm, Obj val) {
  vm->stack[vm->pos++] = val;
  return;
}

Obj
vmCall(struct VM *vm, int n) {
  // Stack before the call:
  // ...   <--vm->base
  // ...
  // fn    <-- first arg
  // arg1
  // arg2
  // argn  <--pos
  int newBase = vm->pos-n;
  saveStack(&vm->callstack, NULL, NULL, vm->base, newBase, vm->stack);
  vm->base = newBase;
  vm->pc = makeTheCall;
  while(vm->pc != NULL) {
    vm->pc(vm);
  }

  return vm->stack[--vm->pos];
}

extern void gcGlobal(struct GC *gc);

void
gcVM(struct GC *gc, struct VM *vm, int pos) {
  // Current stack
  for (int i=vm->base; i<pos; i++) {
    gcMark(gc, getScmHead(vm->stack[i]));
  }

  // The call stacks
  for (int i=vm->callstack.len-1; i>=0; i--) {
    struct returnAddr *addr = &vm->callstack.data[i];
    for (int j=addr->base; j<addr->pos; j++) {
      gcMark(gc, getScmHead(addr->stack[j]));
    }
  }

  // Global symbol table
  gcGlobal(gc);
}
