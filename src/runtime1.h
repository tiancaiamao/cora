#ifndef _RUNTIME_H
#define _RUNTIME_H

#include "vector.h"
#include "types.h"

typedef void (*basicBlock1) (struct Cora *co, int label, Obj *R);

struct frame1 {
	basicBlock1 fn;
	int label;
	Obj *frame;
};

struct stackAllocator {
	// cache fields for fast allocation path.
	Obj *base;
	int start;
	int end;

	int pos;
	vector(Obj*) data;
};

struct objStack {
	struct stackAllocator alloc;
	vector(int) history;
};

Obj* stackAllocSlowPath(struct stackAllocator *sa, int n);

static inline Obj*
stackAlloc(struct objStack *os, int n) {
	vecAppend(&os->history, os->alloc.pos);
	// fast path
	if (os->alloc.pos + n < os->alloc.end) {
		Obj *ret = &os->alloc.base[os->alloc.pos - os->alloc.start];
		os->alloc.pos += n;
		return ret;
	}
	return stackAllocSlowPath(&os->alloc, n);
}

static inline void
stackUndo(struct objStack *os) {
	int pos = vecPop(&os->history);
	if (pos >= os->alloc.start) {
		os->alloc.pos = pos;
		return;
	}
	// slow path stackAllocUndo?
	assert(false);
}

struct Cora {
	vector(struct frame1) callstack;
	struct frame1 ctx;
	struct objStack stk;
	Obj res;
	struct trieNode *globals;
};


void coraCall(struct Cora *co, Obj fn, int nargs, ...);

static inline void
coraReturn(struct Cora *co, Obj val) {
	// pop stack
	stackUndo(&co->stk);
	// set return value
	co->res = val;
	// recover continuation
	co->ctx = vecPop(&co->callstack);
	return;
}

Obj primSet(struct Cora *co, Obj key, Obj val);

#endif
