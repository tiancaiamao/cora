#include "runtime.h"
#include <stdlib.h>

static void clofun5995 (struct VM* m);
static void clofun5557 (struct VM* m);
static void clofun5724 (struct VM* m);

static void
clofun5995 (struct VM* m) {
  Obj reg6059 = makeClosure(clofun5557, 0);
  Obj reg6128 = intern("fact");
  Obj reg6153 = symbolSet(reg6128, reg6059);
  m->stack[0] = reg6153;
  m->pc = NULL;
  return;
}
static void
clofun5557 (struct VM* m) {
  Obj reg6229 = m->stack[0];
  Obj reg6233 = m->stack[1];
  Obj reg6237 = m->stack[2];
  Obj reg6322 = 0;
  Obj reg6323 = PrimEqual(reg6237, reg6322);
  if (reg6323 == True) {
    m->pc = closureFn(reg6233);
    Obj reg6512 = 2;
    m->stack[0] = reg6233;
    m->stack[1] = reg6512;
    return;
  } else {
    Obj reg6613 = 2;
    Obj reg6614 = reg6237 - reg6613;
    Obj reg6683 = symbolGet(intern("fact"));
    m->pc = closureFn(reg6683);
    Obj reg6705 = symbolGet(intern("fact"));
    Obj reg6814 = makeClosure(clofun5724, 2, reg6233, reg6237);
    m->stack[0] = reg6705;
    m->stack[1] = reg6814;
    m->stack[2] = reg6614;
    return;
  }
}
static void
clofun5724 (struct VM* m) {
  Obj reg6880 = m->stack[0];
  Obj reg6884 = m->stack[1];
  Obj reg6975 = closureRef(reg6880, 0);
  m->pc = closureFn(reg6975);
  Obj reg7027 = closureRef(reg6880, 0);
  Obj reg7097 = closureRef(reg6880, 1);
  Obj reg7122 = primNumberMultiply(reg7097, reg6884);
  m->stack[0] = reg7027;
  m->stack[1] = reg7122;
  return;
}
