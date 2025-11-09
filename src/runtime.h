#ifndef _RUNTIME_H
#define _RUNTIME_H

#include "vector.h"
#include "types.h"
#include "reader.h"

typedef void (*basicBlock) (struct Cora *co, int label, Obj *R);

typedef struct Frame Frame;

struct Frame {
	// fn + label = pc register
	basicBlock fn;
	int label;
	// ebp and esp register
	Obj *bp;
	Obj *sp;
};

struct segmentStack {
	// [begin ... sp ... end)
	Obj *begin;
	Obj *end;
	vector(Obj*) data;
};

struct tryMark {
	int callstackPos;
	int segmentStackPos;
};

typedef struct Cora Cora;

struct Cora {
	Frame ctx;
	vector(Frame) callstack;
	struct segmentStack stk;

	Obj res;
	struct trieNode *globals;
	vector(struct tryMark) trystack;
	GC *gc;
};

Obj* stackAllocSlowPath(struct Cora *co, int n);
void coraReturnSlowPath(struct Cora *co);

static inline Obj*
stackAlloc(struct Cora *co, int n) {
	// fast path
	assert(n > 0);
	if (co->ctx.sp + n < co->stk.end) {
		co->ctx.bp = co->ctx.sp;
		co->ctx.sp += n;
		return co->ctx.bp;
	}
	return stackAllocSlowPath(co, n);
}

#ifndef CORA_IMPLEMENTATION
static inline void
coraReturn(struct Cora *co, Obj val) {
	// set return value
	co->res = val;
	// recover continuation
	co->ctx = vecPop(&co->callstack);
	if (co->ctx.sp < co->stk.begin || co->ctx.sp >= co->stk.end) {
		coraReturnSlowPath(co);
	}
	return;
}
#else
void coraReturn(struct Cora *co, Obj val);
#endif

void coraCall(struct Cora *co, Obj fn, int nargs, Obj *args);

static inline void
coraCall0(struct Cora *co, Obj fn) {
	struct scmNative *f = ptr(fn);
	assert(f->head.type == scmHeadNative);
	if (f->required != 0) {
		coraReturn(co, fn);
		return;
	}
	Obj *frame = stackAlloc(co, f->nframe);
	co->ctx.fn = f->fn;
	co->ctx.label = 0;
	frame[0] = fn;
}

static inline void
coraCall1(struct Cora *co, Obj fn, Obj arg1) {
	struct scmNative *f = ptr(fn);
	assert(f->head.type == scmHeadNative);
	if (f->required != 1) {
		Obj args[1] = {arg1};
		return coraCall(co, fn, 1, args);
	}
	Obj *frame = stackAlloc(co, f->nframe);
	co->ctx.fn = f->fn;
	co->ctx.label = 0;
	frame[0] = fn;
	frame[1] = arg1;
}

static inline void
coraCall2(struct Cora *co, Obj fn, Obj arg1, Obj arg2) {
	struct scmNative *f = ptr(fn);
	assert(f->head.type == scmHeadNative);
	if (f->required != 2) {
		Obj args[2] = {arg1, arg2};
		return coraCall(co, fn, 2, args);
	}
	Obj* frame = stackAlloc(co, f->nframe);
	co->ctx.fn = f->fn;
	co->ctx.label = 0;
	frame[0] = fn;
	frame[1] = arg1;
	frame[2] = arg2;
}

static inline void
coraCall3(struct Cora *co, Obj fn, Obj arg1, Obj arg2, Obj arg3) {
	struct scmNative *f = ptr(fn);
	assert(f->head.type == scmHeadNative);
	if (f->required != 3) {
		Obj args[3] = {arg1, arg2, arg3};
		return coraCall(co, fn, 3, args);
	}
	Obj *frame = stackAlloc(co, f->nframe);
	co->ctx.fn = f->fn;
	co->ctx.label = 0;
	frame[0] = fn;
	frame[1] = arg1;
	frame[2] = arg2;
	frame[3] = arg3;
}

// x86-64 sysv ABI has 6 registers (RDI, RSI, RDX, RCX, R8, R9) available
// x86-64 Win has 4 registers (RCX, RDX, R8, R9) available
// ARM64 has even more registers
// Anyway, static inline should not care about parameter count.
static inline void
coraCall4(struct Cora *co, Obj fn, Obj arg1, Obj arg2, Obj arg3, Obj arg4) {
	struct scmNative *f = ptr(fn);
	assert(f->head.type == scmHeadNative);
	if (f->required != 4) {
		Obj args[4] = {arg1, arg2, arg3, arg4};
		return coraCall(co, fn, 4, args);
	}
	Obj *frame = stackAlloc(co, f->nframe);
	co->ctx.fn = f->fn;
	co->ctx.label = 0;
	frame[0] = fn;
	frame[1] = arg1;
	frame[2] = arg2;
	frame[3] = arg3;
	frame[4] = arg4;
}

static inline void
saveCont(struct Cora *co, basicBlock fn, int label, Obj *bp) {
	Frame __curr = {
		.fn = fn,
		.label = label,
		.bp = bp,
		.sp = co->ctx.sp,
	};
	vecAppend(&co->callstack, __curr);
}

void coraRun(struct Cora *co);

static inline Obj
closureRef(Obj clo, int idx) {
#ifndef NDEBUG
	struct scmNative *ntv = mustNative(clo);
	assert(ntv->captured > idx);
#endif
	return OBJ_FIELD(clo, scmNative, data)[idx];
}

Obj primEQ(Obj x, Obj y);
Obj primLT(Obj x, Obj y);
Obj primGT(Obj x, Obj y);
Obj primAdd(Obj x, Obj y);
Obj primCons(Cora *co, Obj x, Obj y);
Obj primNot(Obj x);
Obj primCar(Obj x);
Obj primCdr(Obj x);
Obj primIsCons(Obj x);
Obj primSet(Cora *co, Obj key, Obj val);
Obj primSub(Obj x, Obj y);
Obj primMul(Obj x, Obj y);
Obj primDiv(Obj x, Obj y);
Obj primGenSym(Cora *co);
Obj primIsSymbol(Obj x);
Obj primIsString(Obj x);
Obj primIsNumber(Obj x);

struct Cora * coraInit();
void coraExit(struct Cora *co);

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
void coraRegisterAPI(struct Cora *co, char* pkg, char *name, basicBlock func, int argc);

#endif
