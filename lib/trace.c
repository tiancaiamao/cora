#include "trace.h"
#include "runtime.h"
#include "str.h"
#include <stdio.h>

static void
traceEnable(struct Cora* co, int label, Obj* R) {
	str filePath = stringStr(R[1]);
	traceInit(filePath.str);
	coraReturn(co, True);
}

static void
traceDisable(struct Cora* co, int label, Obj* R) {
	traceClose();
	coraReturn(co, True);
}

static void
traceWrap(struct Cora* co, int label, Obj* R) {
	assert(nativeCaptured(R[0]) == 2);
	Obj* data = nativeData(R[0]);
	struct scmNative* origin = mustNative(data[0]);
	Obj sym = data[1];
	char dest[256];
	symbolStr(sym, dest, 256);
	TRACE_SCOPE(dest);
	R[0] = data[0];
	origin->fn(co, label, R);
}

static void
builtinTrace(struct Cora* co, int label, Obj* R) {
	Obj sym = R[1];
	Obj fn = globalRef(co, bindSymbol(co, sym));
	struct scmNative* old = mustNative(fn);
	Obj wrap =
		makeNative(co->gc, old->nframe, traceWrap, old->required, 2, fn, sym);
	Obj ret = primSet(co, sym, wrap);
	coraReturn(co, ret);
}

static void
builtinUntrace(struct Cora* co, int label, Obj* R) {
	Obj sym = R[1];
	Binding bind = bindSymbol(co, sym);
	Obj fn = globalRef(co, bind);
	struct scmNative* n = mustNative(fn);
	if (n->captured == 2 && n->fn == traceWrap && n->data[1] == sym) {
		Obj ret = primSet(co, sym, n->data[0]);
		coraReturn(co, ret);
		return;
	}
	coraReturn(co, Nil);
}

void
entry(struct Cora* co, int label, Obj* R) {
	Obj pkg = R[2];
	char* module = bytesData(pkg);
	coraRegisterAPI(co, module, "trace-enable", traceEnable, 1);
	coraRegisterAPI(co, module, "trace-disable", traceDisable, 0);
	coraRegisterAPI(co, module, "trace", builtinTrace, 1);
	coraRegisterAPI(co, module, "untrace", builtinUntrace, 1);
	coraReturn(co, intern("trace"));
}
