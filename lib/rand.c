#include "runtime.h"
#include <stdlib.h>

static void
builtinN(struct Cora *co, int label, Obj *R) {
	Obj n = R[1];
	int val = rand();
	coraReturn(co, makeNumber(val % fixnum(n)));
}

void
entry(struct Cora *co, int label, Obj *R) {
	Obj pkg = R[2];
	str module = stringStr(pkg);
	coraRegisterAPI(co, module.str, "randN", builtinN, 1);
	coraReturn(co, intern("rand"));
}
