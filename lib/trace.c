#include <stdio.h>
#include "runtime.h"
#include "str.h"
#include "trace.h"

static void
traceEnable(struct Cora *co) {
	str filePath = stringStr(co->args[1]);
	traceInit(filePath.str);
	coraReturn(co, True);
}

static void
traceDisable(struct Cora *co) {
	traceClose();
	coraReturn(co, True);
}

static void
traceWrap(struct Cora *co) {
	assert(nativeCaptured(co->args[0]) == 2);
	Obj* data = nativeData(co->args[0]);
	Obj origin = data[0];
	Obj sym = data[1];
	assert(isNative(origin));
	co->args[0] = origin;

	char name[256];
	symbolStr(sym, name, 256);
	TRACE_BEGIN(name);
	trampoline(co, coraDispatch);
	TRACE_END(name);
	coraReturn(co, co->args[1]);
}

static void
builtinTrace(struct Cora *co) {
	Obj sym = co->args[1];
	Obj fn = symbolGet(sym);
	struct scmNative *old = mustNative(fn);
	Obj wrap = makeNative(0, traceWrap, old->required, 2, fn, sym);
	Obj ret = primSet(co, sym, wrap);
	coraReturn(co, ret);
}

static void
builtinUntrace(struct Cora *co) {
	Obj sym = co->args[1];
	Obj fn = symbolGet(sym);
	struct scmNative *n = mustNative(fn);
	if (n->captured == 2 && n->code.func == traceWrap && n->data[1] == sym) {
		Obj ret = primSet(co, sym, n->data[0]);
		coraReturn(co, ret);
		return;
	}
	coraReturn(co, Nil);
}

struct registerModule ioModule = {
  NULL,
  {
    {"trace-enable", traceEnable, 1},
    {"trace-disable", traceDisable, 0},
    {"trace", builtinTrace, 1},
    {"untrace", builtinUntrace, 1},
    {NULL, NULL, 0},
  }
};

void
entry(struct Cora *co) {
  Obj pkg = co->args[2];
  registerAPI(co, &ioModule, stringStr(pkg));
  coraReturn(co, intern("trace"));
}
