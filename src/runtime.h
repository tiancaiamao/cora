#ifndef _RUNTIME_H
#define _RUNTIME_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "types.h"
#include "reader.h"

struct returnAddr {
  basicBlock pc;
  Obj *frees;
  int base;
  int pos;
  Obj *stack;
};

struct callStack {
  struct returnAddr *data;
  int len;
  int cap;
};


struct Cora {
  Obj *stack;
  int base;
  int pos;

  struct callStack callstack;

  Obj *frees;
  Obj args[32];
  int nargs;
  basicBlock pc;
};

void trampoline(struct Cora *co, basicBlock pc);
void coraCall(struct Cora *co);
void pushCont(struct Cora *co, basicBlock cb, int nstack, ...);
void popStack(struct callStack *cs, basicBlock *pc, int *base, int *pos, Obj **stack, Obj **frees);
Obj globalRef(Obj sym);
Obj closureRef(struct Cora *co, int idx);
Obj stackRef(struct Cora *co, int idx);

Obj primEQ(Obj x, Obj y);
Obj primLT(Obj x, Obj y);
Obj primGT(Obj x, Obj y);
Obj primAdd(Obj x, Obj y);
Obj primCons(Obj x, Obj y);
Obj primNot(Obj x);
Obj primCar(Obj x);
Obj primCdr(Obj x);
Obj primIsCons(Obj x);
Obj primSet(Obj key, Obj val);
Obj primSub(Obj x, Obj y);
Obj primMul(Obj x, Obj y);
Obj primDiv(Obj x, Obj y);
Obj primGenSym(Obj arg);
Obj primIsSymbol(Obj x);
Obj primIsString(Obj x);
Obj primIsNumber(Obj x);

struct registerEntry {
  char *name;
  basicBlock func;
  int args;
};

struct registerModule {
  void (*init)();
  struct registerEntry entries[];
};

void registerAPI(struct registerModule* m, str pkg);


struct Cora* coraNew();
void coraInit(void *mark);

#endif
