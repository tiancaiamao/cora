// This file is not necessary, it's purpose is to expose cora as a library for non-C languages
// For C using internal API, just include runtime.h

#include "cora.h"
#define CORA_IMPLEMENTATION
#include "runtime.h"

Obj coraGetResult(Cora *co) {
	return co->res;
}

GC* coraGetGC(Cora *co) {
	return co->gc;
}

void
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

Obj
coraSymbolGet(Cora *co, Obj sym) {
	Binding bind = bindSymbol(co, sym);
	return globalRef(co, bind);
}

Obj
coraPrimSet(Cora *co, Obj key, Obj val) {
	Binding bind = bindSymbol(co, key);
	return primSet(co, bind, val);
}

Obj coraMakeCons(Cora *co, Obj car, Obj cdr) {
	return makeCons(co->gc, car, cdr);
}

Obj coraMakeString(Cora *co, char *s, int len) {
	return makeString(co->gc, s, len);
}

Obj coraMakeCString(Cora *co, char *s) {
	return makeCString(co->gc, s);
}

// Obj coraMakeSymbol(const char *s) {
// 	return makeSymbol(s);
// }

char *coraBytesData(Obj o) {
	return bytesData(o);
}

Obj coraMakeNumber(int v) {
	return makeNumber(v);
}

int coraFixnum(Obj o) {
	return fixnum(o);
}
