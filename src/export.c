// This file is not necessary, it's purpose is to expose cora as a library for
// non-C languages For C using internal API, just include runtime.h

#include "cora.h"
#include "reader.h"
#include "types.h"
#define CORA_IMPLEMENTATION
#include "runtime.h"

Obj
coraGetResult(Cora *co) {
	return co->res;
}

GC *
coraGetGC(Cora *co) {
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
	return symbolGet(co, sym);
}

Obj
coraPrimSet(Cora *co, Obj key, Obj val) {
	return primSet(co, key, val);
}

Obj
coraMakeCons(Cora *co, Obj car, Obj cdr) {
	return makeCons(co->gc, car, cdr);
}

Obj
coraMakeString(Cora *co, char *s, int len) {
	return makeString(co->gc, s, len);
}

Obj
coraMakeCString(Cora *co, char *s) {
	return makeCString(co->gc, s);
}

Obj
coraMakeSymbol(char *s) {
	return intern(s);
}

char *
coraBytesData(Obj o) {
	return bytesData(o);
}

Obj
coraMakeNumber(int v) {
	return makeNumber(v);
}

Obj
coraMakeVector(Cora *co, int size, int cap) {
	return makeVector(co->gc, size, cap);
}

Obj
coraVectorRef(Obj vec, int idx) {
	return vectorRef(vec, idx);
}

Obj
coraVectorSet(Cora *co, Obj vec, int idx, Obj val) {
	return vectorSet(co->gc, vec, idx, val);
}

Obj
coraReverse(Cora *co, Obj o) {
	return reverse(co->gc, o);
}

int
coraFixnum(Obj o) {
	return fixnum(o);
}

Obj
coraPrimGenSym(Cora *co) {
	return primGenSym(co);
}
