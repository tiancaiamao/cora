#ifndef _RUNTIME_H
#define _RUNTIME_H

#include "vector.h"
#include "types.h"

typedef void (*basicBlock1) (struct Cora *co, int label, Obj *R);

struct frame1 {
	// fn + label = pc register
	basicBlock1 fn;
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

struct Cora {
	struct frame1 ctx;
	vector(struct frame1) callstack;
	struct segmentStack stk;

	Obj res;
	struct trieNode *globals;
	vector(struct tryMark) trystack;
};

Obj* stackAllocSlowPath(struct Cora *co, int n);

static inline Obj*
stackAlloc(struct Cora *co, int n) {
	// fast path
	if (co->ctx.sp + n <= co->stk.end) {
		co->ctx.bp = co->ctx.sp;
		co->ctx.sp += n;
		return co->ctx.bp;
	}
	return stackAllocSlowPath(co, n);
}

static inline void
coraReturn(struct Cora *co, Obj val) {
	// set return value
	co->res = val;
	// recover continuation
	co->ctx = vecPop(&co->callstack);
	return;
}

void coraCall(struct Cora *co, Obj fn, int nargs, ...);

static inline void
coraCall0(struct Cora *co, Obj fn) {
	struct scmNative1 *f = ptr(fn);
	assert(f->head.type == scmHeadNative1);
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
	struct scmNative1 *f = ptr(fn);
	assert(f->head.type == scmHeadNative1);
	if (f->required != 1) {
		return coraCall(co, fn, 1, arg1);
	}
	Obj *frame = stackAlloc(co, f->nframe);
	co->ctx.fn = f->fn;
	co->ctx.label = 0;
	frame[0] = fn;
	frame[1] = arg1;
}

static inline void
coraCall2(struct Cora *co, Obj fn, Obj arg1, Obj arg2) {
	struct scmNative1 *f = ptr(fn);
	assert(f->head.type == scmHeadNative1);
	if (f->required != 2) {
		return coraCall(co, fn, 2, arg1, arg2);
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
	struct scmNative1 *f = ptr(fn);
	assert(f->head.type == scmHeadNative1);
	if (f->required != 3) {
		return coraCall(co, fn, 3, arg1, arg2, arg3);
	}
	Obj *frame = stackAlloc(co, f->nframe);
	co->ctx.fn = f->fn;
	co->ctx.label = 0;
	frame[0] = fn;
	frame[1] = arg1;
	frame[2] = arg2;
	frame[3] = arg3;
}

Obj primSet(struct Cora *co, Obj key, Obj val);

static inline Obj
closureRef(Obj clo, int idx) {
#ifndef NDEBUG
	struct scmNative1 *ntv = mustNative1(clo);
	assert(ntv->captured > idx);
#endif
	return OBJ_FIELD(clo, scmNative1, data)[idx];
}

#endif
