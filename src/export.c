// This file is not necessary, it's purpose is to expose cora as a library for non-C languages
// For C using internal API, just include runtime.h

#include "cora.h"
#define CORA_IMPLEMENTATION
#include "runtime.h"

Obj coraGetResult(Cora *co) {
	return co->res;
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
coraSymbolGet(Obj sym) {
	return symbolGet(sym);
}

Obj
coraPrimSet(Cora *co, Obj key, Obj val) {
	return primSet(co, key, val);
}

Obj coraMakeCons(Obj car, Obj cdr) {
	return cons(car, cdr);
}

Obj coraMakeString(char *s, int len) {
	return makeString(s, len);
}

Obj coraMakeCString(char *s) {
	return makeCString(s);
}

Obj coraMakeSymbol(const char *s) {
	return makeSymbol(s);
}

char *coraBytesData(Obj o) {
	return bytesData(o);
}

Obj coraMakeNumber(int v) {
	return makeNumber(v);
}

int coraFixnum(Obj o) {
	return fixnum(o);
}
