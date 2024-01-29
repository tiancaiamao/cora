#ifndef _VM_H
#define _VM_H

#include "reader.h"
#include "str.h"

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

struct VM {
  Obj *stack;
  int base;
  int pos;

  struct callStack callstack;

  // pc + data = closure!
  nativeFn *pc;
  void *data;
};

struct VM* newVM();

// Basic APIs.
Obj vmGet(struct VM *vm, int idx);
void vmReturn(struct VM *vm, Obj val);

void vmPush(struct VM *vm, Obj val);
Obj vmPop(struct VM *vm);
Obj vmCall(struct VM *vm, int n);



// Essentially, the VM only provide this.
void trampoline(struct VM *vm, nativeFn pc);
Obj run(struct VM *vm, Obj exp);

// High level APIs, which can be implemented using previous APIs.
Obj macroExpand(struct VM *vm, Obj exp);
Obj eval(struct VM *vm, Obj exp);
int loadByteCode(struct VM *vm, str path);

void opCall(struct VM *vm, int nargs, nativeFn pc, void* data);
void opTailCall(struct VM *vm, int nargs);
Obj primSet(Obj x, Obj y);
Obj primEQ(Obj x, Obj y);
Obj primSub(Obj x, Obj y);
Obj primAdd(Obj x, Obj y);
Obj primMul(Obj x, Obj y);
void popStack(struct callStack *cs, nativeFn **pc, void **data, int *base, int *pos, Obj **stack);

#endif
