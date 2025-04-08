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

struct registerModule ioModule = {
  NULL,
  {
    {"trace-enable", traceEnable, 1},
    {"trace-disable", traceDisable, 0},
    {NULL, NULL, 0},
  }
};

void
entry(struct Cora *co) {
  Obj pkg = co->args[2];
  registerAPI(co, &ioModule, stringStr(pkg));
  coraReturn(co, intern("trace"));
}
