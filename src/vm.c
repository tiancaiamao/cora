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
saveStack(struct callStack *cs, void *pc, int base, int pos, Obj *stack) {
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
  addr->stack = stack;
  cs->len++;
  return;
}

static void
popStack(struct callStack *cs, void **pc, int *base, int *pos, Obj **stack) {
  cs->len--;
  struct returnAddr *addr = &cs->data[cs->len];
  *pc = addr->pc;
  *base = addr->base;
  *pos = addr->pos;
  *stack = addr->stack;
  return;
}

struct VM {
  Obj *stack;
  int base;
  struct callStack callstack;
  Obj result;
};

void
opConst(void* pc, Obj val, struct VM *vm, int pos) {
  pc = (void*)((char*)pc+sizeof(opcode));
  val = *((Obj*)pc);
  pc = (void*)((char*)pc + sizeof(Obj));
  (*((opcode*)pc))(pc, val, vm, pos);
}

void
opLocalRef(void* pc, Obj val, struct VM *vm, int pos) {
  pc = (char*)pc + sizeof(opcode*);
  uint32_t idx = *((uint32_t*)pc);
  pc = (char*)pc + sizeof(uint32_t);
  val = vm->stack[vm->base+idx+1];
  (*((opcode*)pc))(pc, val, vm, pos);
}

void
opLocalSet(void* pc, Obj val, struct VM *vm, int pos) {
  pc = (char*)pc + sizeof(opcode*);
  uint32_t idx = *((uint32_t*)pc);
  pc = (char*)pc + sizeof(uint32_t);
  vm->stack[vm->base+idx+1] = val;
  (*((opcode*)pc))(pc, val, vm, pos);
}

void
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

static void makeTheCall(void *pc, Obj val, struct VM *vm, int pos);
void opExit(void* pc, Obj val, struct VM *vm, int pos);

const int INIT_STACK_SIZE = 4096;

void
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
    saveStack(&vm->callstack, NULL, vm->base, newBase, vm->stack);
    vm->base = newBase;
    pos += required;
    makeTheCall(pc, val, vm, pos);
    vm->stack[vm->base] = vm->result;
    memmove(vm->stack+vm->base+1, vm->stack+vm->base+required, (provided-required)*sizeof(Obj));
    pos = newBase-(required-1);
    makeTheCall(pc, val, vm, pos);
  }
}

void
opTailCall(void *pc, Obj val, struct VM *vm, int pos) {
  pc = (void*)((char*)pc+sizeof(opcode));
  uint32_t nargs = *((int32_t*)pc);
  for (int i=0; i<nargs; i++) {
    vm->stack[vm->base+i] = vm->stack[pos - nargs + i];
  }
  pos = vm->base+nargs;
  makeTheCall(pc, val, vm, pos);
}

void
opClosureRef(void* pc, Obj val, struct VM *vm, int pos) {
  pc = (char*)pc + sizeof(opcode*);
  uint32_t idx = *((uint32_t*)pc);
  pc = (char*)pc + sizeof(uint32_t);
  Obj clo = vm->stack[vm->base];
  val = closureSlot(clo, idx);
  (*((opcode*)pc))(pc, val, vm, pos);
}

void
opExit(void* pc, Obj val, struct VM *vm, int pos) {
  popStack(&vm->callstack, &pc, &vm->base, &pos, &vm->stack);
  if (pc == NULL) {
    vm->result = val;
  } else {
    (*((opcode*)pc))(pc, val, vm, pos);
  }
}

void
opPush(void* pc, Obj val, struct VM *vm, int pos) {
  vm->stack[pos] = val;
  pos++;
  pc = (void*)((char*)pc + sizeof(uint64_t));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

void
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

void
opCall(void* pc, Obj val, struct VM *vm, int pos) {
  pc = (void*)((char*)pc+sizeof(opcode));
  uint32_t nargs = *((uint32_t*)pc);
  pc = (void*)((char*)pc + sizeof(uint32_t));
  int newBase = pos - nargs;
  saveStack(&vm->callstack, pc, vm->base, newBase, vm->stack);
  vm->base = newBase;
  makeTheCall(pc, val, vm, pos);
}

void
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

void
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

void
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

void
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

void
opPrimIsString(void *pc, Obj val, struct VM *vm, int pos) {
  if (isstring(vm->stack[--pos])) {
    val = True;
  } else {
    val = False;
  }
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

void
opPrimCar(void *pc, Obj val, struct VM *vm, int pos) {
  val = car(vm->stack[--pos]);
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

void
opPrimCdr(void *pc, Obj val, struct VM *vm, int pos) {
  val = cdr(vm->stack[--pos]);
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

void
opPrimCons(void *pc, Obj val, struct VM *vm, int pos) {
  Obj y = vm->stack[--pos];
  Obj x = vm->stack[--pos];
  val = cons(x, y);
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

void
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

void
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

void
opPrimIsInteger(void *pc, Obj val, struct VM *vm, int pos) {
  if (isfixnum(vm->stack[--pos])) {
    val = True;
  } else {
    val = False;
  }
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

void
opPrimIsSymbol(void *pc, Obj val, struct VM *vm, int pos) {
  if (issymbol(vm->stack[--pos])) {
    val = True;
  } else {
    val = False;
  }
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

void
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

void
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

void
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

void
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
  return eq(x, y) ? True : False;
}

void
opPrimEQ(void *pc, Obj val, struct VM *vm, int pos) {
  Obj x = vm->stack[pos-1];
  Obj y = vm->stack[pos-2];
  val = __inline_eq(x, y);
  pos -= 2;
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

void
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

void
builtinTryCatch(void *pc, Obj val, struct VM *vm, int pos) {
  Obj chunk = vm->stack[vm->base + 1];

  // Save the old cont.
  // This save can make the chunk and handler available to the recovering process.
  // When the chunk return to this try block, the next operator would be opExit.
  opcode* x = malloc(sizeof(opcode));
  *x = opExit;
  saveStack(&vm->callstack, x, vm->base, pos, vm->stack);

  // Prepare a new stack for the chunk to run.
  vm->stack = (Obj*)malloc(sizeof(Obj)*INIT_STACK_SIZE);
  vm->base = 0;
  pos = 0;

  // Call the chunk.
  vm->stack[pos++] = chunk;
  makeTheCall(NULL, Nil, vm, pos);
}

static void
continuationAsClosure(void *pc, Obj val, struct VM *vm, int pos) {
  // Replace the current stack with the delimited continuation.
  Obj self = vm->stack[vm->base];
  struct callStack *delimited = mustClosure(self)->closed;
  for (int i=0; i< delimited->len; i++) {
    struct returnAddr *addr = &delimited->data[i];
    saveStack(&vm->callstack, addr->pc, addr->base, addr->pos, addr->stack);
  }
  val = vm->stack[vm->base + 1];
  opExit(NULL, val, vm, 0);
}

static opcode continuationAsClosureOP[1] = {continuationAsClosure};

void
builtinThrow(void *pc, Obj val, struct VM *vm, int pos) {
  Obj v = vm->stack[vm->base + 1];

  // Delimited to the previous try-catch
  int p = vm->callstack.len - 1;
  while(p >=0) {
    struct returnAddr* addr = &vm->callstack.data[p];
    if (addr->stack != vm->stack) {
      break;
    }
    p--;
  }
  if (p < 0) {
    // TODO: panic, not in any try-catch block!
    assert(false);
  }

  struct callStack *delimited = malloc(sizeof(struct callStack));
  int offset = vm->callstack.len - p;
  delimited->cap = offset > 0 ? offset : 1;
  delimited->data = malloc(sizeof(struct returnAddr) * delimited->cap);
  delimited->len = 0;

  // Now p point to the try-saved stack.
  // p+1 is the new stack.
  for (int i=p; i<vm->callstack.len; i++) {
    struct returnAddr *cs = &vm->callstack.data[i];
    saveStack(delimited, cs->pc, cs->base, cs->pos, cs->stack);
  }

  // Now that we get the current continuation, disguise as a closure.
  Obj cc = makeClosure(1, 1, delimited, &continuationAsClosureOP, 0);

  // Reset the stack, go back to (try ... catch)
  vm->callstack.len = p;
  struct returnAddr* c = &vm->callstack.data[p];
  pc = c->pc;
  pos = c->pos;
  vm->stack = c->stack;
  vm->base = c->base;

  // Find the handler, invoke it, passing the continuation.
  Obj handler = vm->stack[vm->base + 2];
  int newBase = pos;
  vm->stack[pos++] = handler;
  vm->stack[pos++] = v;
  vm->stack[pos++] = cc;
  saveStack(&vm->callstack, pc, newBase, pos, vm->stack);
  vm->base = newBase;
  makeTheCall(pc, val, vm, pos);
}

Obj symConst,symLocalRef,symClosureRef,symGlobalRef,symIf,symMakeClosure,symTailCall,symCall,symPush,symExit,symPrimitive,symReserveLocals,symLocalSet;

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
  symbolSet(makeSymbol("try"), makePrimitive(builtinTryCatch, 2));
  symbolSet(makeSymbol("throw"), makePrimitive(builtinThrow, 1));

  symbolSet(makeSymbol("cora/lib/compile.c-make-program"), makePrimitive(builtinMakeProgram, 0));
  symbolSet(makeSymbol("cora/lib/compile.c-prog-append-op"), makePrimitive(builtinProgAppendOP, 2));
  symbolSet(makeSymbol("cora/lib/compile.c-prog-append-obj"), makePrimitive(builtinProgAppendObj, 2));
  symbolSet(makeSymbol("cora/lib/compile.c-prog-append-int32"), makePrimitive(builtinProgAppendInt32, 2));
  symbolSet(makeSymbol("cora/lib/compile.c-prog-append-prim"), makePrimitive(builtinProgAppendPrim, 2));

  symbolSet(makeSymbol("cora/lib/compile.c-prog-prepare-size"), makePrimitive(builtinProgPrepareSize, 1));
  symbolSet(makeSymbol("cora/lib/compile.c-prog-write-back-size"), makePrimitive(builtinProgWriteBackSize, 2));

  symbolSet(makeSymbol("cora/lib/compile.c-prog-run"), makePrimitive(builtinProgRun, 1));

  symbolSet(makeSymbol("cora/lib/compile.c-opConst"), makeNumber(0));
  symbolSet(makeSymbol("cora/lib/compile.c-opLocalRef"), makeNumber(1));
  symbolSet(makeSymbol("cora/lib/compile.c-opLocalSet"), makeNumber(2));
  symbolSet(makeSymbol("cora/lib/compile.c-opGlobalRef"), makeNumber(3));
  symbolSet(makeSymbol("cora/lib/compile.c-opTailCall"), makeNumber(4));
  symbolSet(makeSymbol("cora/lib/compile.c-opClosureRef"), makeNumber(5));
  symbolSet(makeSymbol("cora/lib/compile.c-opExit"), makeNumber(6));
  symbolSet(makeSymbol("cora/lib/compile.c-opPush"), makeNumber(7));
  symbolSet(makeSymbol("cora/lib/compile.c-opIf"), makeNumber(8));
  symbolSet(makeSymbol("cora/lib/compile.c-opCall"), makeNumber(9));
  symbolSet(makeSymbol("cora/lib/compile.c-opMakeClosure"), makeNumber(10));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimSet"), makeNumber(11));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimSub"), makeNumber(12));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimAdd"), makeNumber(13));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimIsString"), makeNumber(14));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimCar"), makeNumber(15));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimCdr"), makeNumber(16));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimCons"), makeNumber(17));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimIsCons"), makeNumber(18));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimGenSym"), makeNumber(19));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimIsInteger"), makeNumber(20));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimIsSymbol"), makeNumber(21));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimNot"), makeNumber(22));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimGT"), makeNumber(23));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimLT"), makeNumber(24));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimMul"), makeNumber(25));
  symbolSet(makeSymbol("cora/lib/compile.c-opPrimEQ"), makeNumber(26));
  symbolSet(makeSymbol("cora/lib/compile.c-opReserveLocals"), makeNumber(27));
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
run(struct VM *vm, char *pc, int pos) {
  saveStack(&vm->callstack, NULL, vm->base, pos, vm->stack);
  (*(opcode*)(pc))(pc, Nil, vm, pos); 
  return vm->result;
}

Obj
vmGet(struct VM *vm, int idx) {
  return vm->stack[vm->base + idx];
}

void
vmReturn(struct VM *vm, Obj val) {
  opExit(NULL, val, vm, 0);
}

void
vmPush(struct VM *vm, int pos, Obj val) {
  vm->stack[pos] = val;
  return;
}

Obj
vmCall(struct VM *vm, int pos, int n) {
  // Stack before the call:
  // ...   <--vm->base
  // ...
  // fn    <-- first arg
  // arg1
  // arg2
  // argn  <--pos
  int newBase = pos-n;
  saveStack(&vm->callstack, NULL, vm->base, newBase, vm->stack);
  vm->base = newBase;
  makeTheCall(NULL, Nil, vm, pos);
  return vm->result;
}
