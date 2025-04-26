#ifndef _RUNTIME_H
#define _RUNTIME_H

#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "types.h"
#include "reader.h"
#include "trace.h"

struct Cora {
		struct frame ctx;
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
Obj primGenSym();
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


struct Cora* coraInit(uintptr_t *mark);

static inline void
growCallStack(struct callStack *cs) {
	TRACE_SCOPE("growCallStack");
	size_t new_cap = cs->cap * 2;
	struct frame *new_data = malloc(new_cap * sizeof(struct frame));
	memcpy(new_data, cs->data, cs->len * sizeof(struct frame));
	free(cs->data);
	cs->data = new_data;
	cs->cap = new_cap;
}

#ifdef __GNUC__
#define likely(x)    __builtin_expect(!!(x), 1)
#define unlikely(x)  __builtin_expect(!!(x), 0)
#else
#define likely(x)    (x)
#define unlikely(x)  (x)
#endif

#define PUSH_CONT_0(co, lbl, cb) do {			\
    struct callStack *__cs = &(co)->callstack;		\
    if (unlikely(__cs->len >= __cs->cap)) {		\
      growCallStack(__cs);				\
    }							\
    struct frame *__addr = &__cs->data[__cs->len++];	\
    __addr->frees = (co)->ctx.frees;			\
    __addr->pc.func = (cb);				\
    __addr->pc.label = (lbl);				\
    __addr->stk = (co)->ctx.stk;			\
  } while (0)

#define PRIM_CAR(obj) ((Obj)(((struct scmCons*)(ptr(obj)))->car))
#define PRIM_CDR(obj) ((Obj)(((struct scmCons*)(ptr(obj)))->cdr))
#define PRIM_ISCONS(obj) (iscons(obj)? True: False)

#define PRIM_EQ(x, y) (eq(x, y) ? True : False)
#define PRIM_GT(x, y) (fixnum(x) > fixnum(y) ? True : False)
#define PRIM_LT(x, y) (fixnum(x) < fixnum(y) ? True : False)

#define MAKE_NUMBER(v) ((Obj) ((intptr_t) (v) << 1))

// assuming x and y are both fixnum
#define PRIM_ADD(x, y)    ((x) + (y))
#define PRIM_SUB(x, y)    ((x) - (y))
#define PRIM_MUL(x, y)    (MAKE_NUMBER(fixnum(x) * fixnum(y)))

#endif
