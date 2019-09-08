#include "runtime.h"
#include <stdlib.h>

static void clofun17063 (struct VM* m);
static void clofun16478 (struct VM* m);
static void clofun16629 (struct VM* m);
static void clofun16702 (struct VM* m);

static void
clofun17063 (struct VM* m) {
  Obj reg17127 = makeClosure(clofun16478, 0);
  Obj reg17196 = intern("map");
  Obj reg17221 = symbolSet(reg17196, reg17127);
  m->stack[0] = reg17221;
  m->pc = NULL;
  return;
}
static void
clofun16478 (struct VM* m) {
  Obj reg17297 = m->stack[0];
  Obj reg17301 = m->stack[1];
  Obj reg17305 = m->stack[2];
  Obj reg17309 = m->stack[3];
  Obj reg17394 = Nil;
  Obj reg17395 = PrimEqual(reg17309, reg17394);
  if (reg17395 == True) {
    m->pc = closureFn(reg17301);
    Obj reg17596 = Nil;
    m->stack[0] = reg17301;
    m->stack[1] = reg17596;
    return;
  } else {
    Obj reg17679 = car(reg17309);
    m->pc = closureFn(reg17305);
    Obj reg17976 = makeClosure(clofun16629, 3, reg17301, reg17305, reg17309);
    m->stack[0] = reg17305;
    m->stack[1] = reg17976;
    m->stack[2] = reg17679;
    return;
  }
}
static void
clofun16629 (struct VM* m) {
  Obj reg18042 = m->stack[0];
  Obj reg18046 = m->stack[1];
  Obj reg18137 = closureRef(reg18042, 2);
  Obj reg18138 = cdr(reg18137);
  Obj reg18207 = symbolGet(intern("map"));
  m->pc = closureFn(reg18207);
  Obj reg18229 = symbolGet(intern("map"));
  Obj reg18308 = closureRef(reg18042, 0);
  Obj reg18345 = makeClosure(clofun16702, 2, reg18308, reg18046);
  Obj reg18403 = closureRef(reg18042, 1);
  m->stack[0] = reg18229;
  m->stack[1] = reg18345;
  m->stack[2] = reg18403;
  m->stack[3] = reg18138;
  return;
}
static void
clofun16702 (struct VM* m) {
  Obj reg18471 = m->stack[0];
  Obj reg18475 = m->stack[1];
  Obj reg18566 = closureRef(reg18471, 0);
  m->pc = closureFn(reg18566);
  Obj reg18618 = closureRef(reg18471, 0);
  Obj reg18688 = closureRef(reg18471, 1);
  Obj reg18713 = cons(reg18688, reg18475);
  m->stack[0] = reg18618;
  m->stack[1] = reg18713;
  return;
}

void clofun_map (struct VM* m) {
  clofun17063(m);
};
