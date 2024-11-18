#ifndef _RUNTIME_H
#define _RUNTIME_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "types.h"
#include "reader.h"

struct Cora {
		struct returnAddr ctx;
		struct callStack callstack;
		struct trieNode *globals;

		Obj args[32];
		int nargs;
};

void trampoline(struct Cora *co, int label, basicBlock pc);
void coraDispatch(struct Cora *co);
void coraReturn(struct Cora *co, Obj val);
Obj coraGet(struct Cora *co, int i);
void coraCall(struct Cora *co, int nargs, ...);

void pushCont(struct Cora *co, int label, basicBlock cb, int nstack, ...);
Obj globalRef(Obj sym);
Obj closureRef(struct Cora *co, int idx);

Obj primEQ(Obj x, Obj y);
Obj primLT(Obj x, Obj y);
Obj primGT(Obj x, Obj y);
Obj primAdd(Obj x, Obj y);
Obj primCons(Obj x, Obj y);
Obj primNot(Obj x);
Obj primCar(Obj x);
Obj primCdr(Obj x);
Obj primIsCons(Obj x);
Obj primSet(struct Cora *co, Obj key, Obj val);
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

void registerAPI(struct Cora *co, struct registerModule* m, str pkg);


struct Cora* coraNew();
void coraInit(struct Cora *co, uintptr_t *mark);

#endif
