#include "runtime.h"
#include <stdlib.h>

static void
builtinN(struct Cora *co, int label, Obj *R) {
	Obj n = R[1];
	int val = rand();
	coraReturn(co, makeNumber(val % fixnum(n)));
}

struct registerModule ioModule = {
	NULL,
	{{"randN", builtinN, 1},
		{NULL, NULL, 0}}};

void
entry(struct Cora *co, int label, Obj *R) {
	Obj pkg = R[2];
	registerAPI(co, &ioModule, stringStr(pkg));
	coraReturn(co, intern("rand"));
}
