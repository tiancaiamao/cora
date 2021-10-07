#include <stdio.h>
#include "runtime.h"

static void
builtinDisplay(struct controlFlow *ctx) {
  Obj o = ctxGet(ctx, 1);
  sexpWrite(stdout, o);
  printf("\n");
  ctxReturn(ctx, Nil);
}

struct registModule ioModule = {
  NULL,
  {
    {"display", builtinDisplay, 1},
    {NULL, NULL, 0}
  }
};
