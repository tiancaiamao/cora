#include "runtime.h"
#include <stdio.h>

static void clofun12482 (struct VM* m);
static void clofun12129 (struct VM* m);

static void
clofun12482 (struct VM* m) {
  Obj reg12546 = makeClosure(clofun12129, 0);
  Obj reg12615 = intern("fact-tail");
  Obj reg12640 = symbolSet(reg12615, reg12546);
  m->stack[0] = reg12640;
  m->pc = NULL;
  return;
}
static void
clofun12129 (struct VM* m) {
  Obj reg12716 = m->stack[0];
  Obj reg12720 = m->stack[1];
  Obj reg12724 = m->stack[2];
  Obj reg12728 = m->stack[3];
  Obj reg12813 = 0;
  Obj reg12814 = PrimEqual(reg12728, reg12813);
  if (reg12814 == True) {
    m->pc = closureFn(reg12720);
    m->stack[0] = reg12720;
    m->stack[1] = reg12724;
    return;
  } else {
    Obj reg13151 = primNumberMultiply(reg12728, reg12724);
    Obj reg13256 = 2;
    Obj reg13257 = reg12728 - reg13256;
    Obj reg13326 = symbolGet(intern("fact-tail"));
    m->pc = closureFn(reg13326);
    Obj reg13348 = symbolGet(intern("fact-tail"));
    m->stack[0] = reg13348;
    m->stack[1] = reg12720;
    m->stack[2] = reg13151;
    m->stack[3] = reg13257;
    return;
  }
}
