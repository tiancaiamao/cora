#include "runtime.h"
#include <stdlib.h>


static void clofun6942 (struct VM* m);
static void clofun6576 (struct VM* m);
static void clofun6391 (struct VM* m);

static void
clofun6942 (struct VM* m) {
  Obj reg7006 = makeClosure(clofun6576, 0);
  Obj reg7075 = intern("reverse0");
  Obj reg7100 = symbolSet(reg7075, reg7006);
  Obj reg7154 = makeClosure(clofun6391, 0);
  Obj reg7223 = intern("reverse");
  Obj reg7248 = symbolSet(reg7223, reg7154);
  m->stack[0] = reg7248;
  m->pc = NULL;
  return;
}
static void
clofun6576 (struct VM* m) {
  Obj reg7324 = m->stack[0];
  Obj reg7328 = m->stack[1];
  Obj reg7332 = m->stack[2];
  Obj reg7336 = m->stack[3];
  Obj reg7397 = Nil;
  Obj reg7428 = PrimEqual(reg7397, reg7336);
  if (reg7428 == True) {
    m->pc = closureFn(reg7328);
    m->stack[0] = reg7328;
    m->stack[1] = reg7332;
    return;
  } else {
    Obj reg7729 = car(reg7336);
    Obj reg7846 = cons(reg7729, reg7332);
    Obj reg7939 = cdr(reg7336);
    Obj reg8008 = symbolGet(intern("reverse0"));
    m->pc = closureFn(reg8008);
    Obj reg8030 = symbolGet(intern("reverse0"));
    m->stack[0] = reg8030;
    m->stack[1] = reg7328;
    m->stack[2] = reg7846;
    m->stack[3] = reg7939;
    return;
  }
}
static void
clofun6391 (struct VM* m) {
  Obj reg8195 = m->stack[0];
  Obj reg8199 = m->stack[1];
  Obj reg8203 = m->stack[2];
  Obj reg8264 = symbolGet(intern("reverse0"));
  m->pc = closureFn(reg8264);
  Obj reg8286 = symbolGet(intern("reverse0"));
  Obj reg8341 = Nil;
  m->stack[0] = reg8286;
  m->stack[1] = reg8199;
  m->stack[2] = reg8341;
  m->stack[3] = reg8203;
  return;
}


void clofun_reverse (struct VM* m) {
  clofun6942(m);
};
