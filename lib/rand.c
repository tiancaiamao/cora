#include "runtime.h"
#include <stdlib.h>

static void
builtinN(struct Cora *co) {
  Obj n = co->args[1];
  int val = rand();
  coraReturn(co, makeNumber(val % fixnum(n)));
}

struct registerModule ioModule = {
  NULL,
  {
    {"N", builtinN, 1},
    /* {NULL, NULL, 0} */
  }
};

void
entry(struct Cora *co) {
  Obj pkg = co->args[2];
  registerAPI(co, &ioModule, stringStr(pkg));
  coraReturn(co, intern("rand"));
}
