#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "reader.h"
#include "types.h"

struct VM {
  Obj *stack;
  int base;
};

typedef void (*opcode)(void *pc, Obj val, struct VM *vm, int pos);


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
  val = vm->stack[idx+1];
  (*((opcode*)pc))(pc, val, vm, pos);
}

static void
opGlobalRef(void *pc, Obj val, struct VM *vm, int pos) {
  pc = (void*)((char*)pc+sizeof(opcode));
  Obj sym = *((Obj*)pc);
  val = symbolGet(sym);
  pc = (void*)((char*)pc + sizeof(uint64_t));
  (*((opcode*)(pc)))(pc, val, vm, pos);
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
  } else {
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
  printf("opClosureRef is not implemented");
  /* uint64_t idx = *((uint64_t*)pc); */
  /* pc = (char*)pc + sizeof(uint64_t); */
  /* Obj closure = vm->stack[vm->base]; */
  /* val = closureRef(closure, idx);    TODO!!!!  */
  /* NEXT; */
}

static void
opExit(void* pc, Obj val, struct VM *vm, int pos) {
  printf("val == %ld\n", val);
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
  printf("opcall not implemented");
}

static void
opMakeClosure(void *pc, Obj val, struct VM *vm, int pos) {
  pc = (void*)((char*)pc + sizeof(opcode*));
  uint32_t required = *((uint32_t*)pc);
  pc = (void*)((char*)pc + sizeof(uint32_t));
  uint32_t nfrees = *((uint32_t*)pc);
  pc = (void*)((char*)pc + sizeof(uint32_t));

  uint32_t sz = *((uint32_t*)pc);
  pc = (void*)((char*)pc + sizeof(uint32_t));
  val = makeClosure(required, nfrees, pc, sz);
  pc = (void*)((char*)pc + sz);

  /* pc = (void*)((char*)pc + sizeof(opcode*)); */
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimSet(void *pc, Obj val, struct VM *vm, int pos) {
  val = vm->stack[pos-1];
  Obj key = vm->stack[pos-2];
  symbolSet(key, val);
  pos -= 2;
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimSub(void *pc, Obj val, struct VM *vm, int pos) {
  val = makeNumber(fixnum(vm->stack[pos-2]) - fixnum(vm->stack[pos-1]));
  pos -= 2;
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimAdd(void *pc, Obj val, struct VM *vm, int pos) {
  val = makeNumber(fixnum(vm->stack[pos-1]) + fixnum(vm->stack[pos-2]));
  pos -= 2;
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimMul(void *pc, Obj val, struct VM *vm, int pos) {
  val = makeNumber(fixnum(vm->stack[pos-1]) * fixnum(vm->stack[pos-2]));
  pos -= 2;
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimEQ(void *pc, Obj val, struct VM *vm, int pos) {
  if (eq(vm->stack[pos-1], vm->stack[pos-2])) {
    val = True;
  } else {
    val = False;
  }
  pos -= 2;
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

struct program {
  char *code;
  int len1;
  int cap1;
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

Obj symConst,symLocalRef,symClosureRef,symGlobalRef,symIf,symMakeClosure,symTailCall,symPush,symExit,symPrimitive;

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
  } else if (sym == symPush) {
    progAppendOP(p, opPush);
  } else if (sym == symExit) {
    progAppendOP(p, opExit);
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

void
run(char *pc) {
  struct VM vm;
  vm.base = 0;
  vm.stack = malloc(4096);

  Obj val = Nil;
  int pos = 0;
  (*(opcode*)(pc))(pc, val, &vm, pos); 
}

int main(int argc, char *argv[]) {
  symConst=makeSymbol("const");
  symLocalRef = makeSymbol("local-ref");
  symClosureRef = makeSymbol("closure-ref");
  symGlobalRef = makeSymbol("global-ref");
  symIf = makeSymbol("if");
  symMakeClosure = makeSymbol("make-closure");
  symTailCall = makeSymbol("tailcall");
  symPush = makeSymbol("push");
  symExit = makeSymbol("exit");
  symPrimitive = makeSymbol("primitive");

  char *bc = "((const sum) (push) (make-closure 2 0 ((local-ref 1) (push) (const 0) (push) (primitive =) (if ((local-ref 0) (exit)) ((global-ref sum) (push) (local-ref 0) (push) (const 1) (push) (primitive +) (push) (local-ref 1) (push) (const 1) (push) (primitive -) (push) (tailcall 3)))))(push) (primitive set) (global-ref sum) (push) (const 0) (push) (const 5000000) (push) (tailcall 3))";
  FILE *stream = fmemopen(bc, strlen(bc), "r");
  struct SexpReader r = {.pkgMapping = Nil};
  int errCode;
  Obj code = sexpRead(&r, stream, &errCode);
  char *exec = bytecodeToExec(code);
  run(exec);
}
