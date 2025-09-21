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

void pushContRaw(char* file, int line, struct Cora *co, int label, basicBlock cb, int nstack, ...);

#define pushCont(co, label, cb, nstack, ...) \
	pushContRaw(__FILE__, __LINE__, (co), (label), (cb), (nstack), ##__VA_ARGS__)

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
void coraExit(struct Cora *co);

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
    __addr->debugFile = __FILE__;			\
    __addr->debugLine = __LINE__;			\
  } while (0)



#define JUMP_WITH_ARGS_1(clofun, x0) do {					\
		__nargs = 1;						\
		__arg0 = (x0);						\
		co->ctx.frees = __arg0;					\
		struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);	\
		if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; }; \
		if (ps.func != (clofun)) { co->ctx.pc = ps; goto fail; };	\
		goto *jumpTable[ps.label];				\
	} while (0)

#define JUMP_WITH_ARGS_2(clofun, x0, x1) do {				\
		__nargs = 2;						\
		__arg0 = (x0);						\
		__arg1 = (x1);						\
		co->ctx.frees = __arg0;					\
		struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);	\
		if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; }; \
		if (ps.func != (clofun)) { co->ctx.pc = ps; goto fail; };	\
		goto *jumpTable[ps.label];				\
	} while (0)

#define JUMP_WITH_ARGS_3(clofun, x0, x1, x2) do {			\
		__nargs = 3;						\
		__arg0 = (x0);						\
		__arg1 = (x1);						\
		__arg2 = (x2);						\
		co->ctx.frees = __arg0;					\
		struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);	\
		if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; }; \
		if (ps.func != (clofun)) { co->ctx.pc = ps; goto fail; }; \
		goto *jumpTable[ps.label];				\
	} while (0)

#define JUMP_WITH_ARGS_4(clofun, x0, x1, x2, x3) do {			\
		__nargs = 4;						\
		__arg0 = (x0);						\
		__arg1 = (x1);						\
		__arg2 = (x2);						\
		__arg3 = (x3);						\
		co->ctx.frees = __arg0;					\
		struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);	\
		if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; }; \
		if (ps.func != (clofun)) { co->ctx.pc = ps; goto fail; }; \
		goto *jumpTable[ps.label];				\
	} while (0)

#define JUMP_RETURN(clofun, val) do {					\
		__nargs = 2;						\
		__arg1 = (val);						\
		co->ctx = co->callstack.data[--co->callstack.len];	\
		if (co->ctx.pc.func != (clofun)) { goto fail; }		\
		goto *jumpTable[co->ctx.pc.label];			\
	} while (0)

#endif
