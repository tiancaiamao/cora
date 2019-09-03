#include <stdlib.h>
#include <stdio.h>
#include "types.h"

void trampoline(struct VM* m) {
  while (m->pc != NULL) {
    m->pc(m);
  }
}

Obj PrimEqual(Obj a, Obj b) {
  if (a == b) {
    return True;
  }
  return False;
}

Obj primNumberMultiply(Obj x, Obj y) {
  return (x * y) >> 1;
}

static void clofun8811 (struct VM* m);
static void clofun8458 (struct VM* m);
static void clofun8286 (struct VM* m);


static void
clofun8811 (struct VM* m) {
  Obj reg8875 = makeClosure(clofun8458, 0);
  Obj reg8944 = intern("fact");
  Obj reg8969 = symbolSet(reg8944, reg8875);
  Obj reg9038 = symbolGet(intern("fact"));
  m->pc = closureFn(reg9038);
  Obj reg9060 = symbolGet(intern("fact"));
  Obj reg9085 = makeClosure(clofun8286, 0);
  Obj reg9107 = 2;
  Obj reg9129 = 10;
  m->stack[0] = reg9060;
  m->stack[1] = reg9085;
  m->stack[2] = reg9107;
  m->stack[3] = reg9129;
  return;
}
static void
clofun8458 (struct VM* m) {
  Obj reg9170 = m->stack[0];
  Obj reg9174 = m->stack[1];
  Obj reg9178 = m->stack[2];
  Obj reg9182 = m->stack[3];
  Obj reg9267 = 0;
  Obj reg9268 = PrimEqual(reg9182, reg9267);
  if (reg9268 == True) {
    m->pc = closureFn(reg9174);
    m->stack[0] = reg9174;
    m->stack[1] = reg9178;
    return;
  } else {
    Obj reg9605 = primNumberMultiply(reg9178, reg9182);
    Obj reg9710 = 2;
    Obj reg9711 = reg9182 - reg9710;
    Obj reg9780 = symbolGet(intern("fact"));
    m->pc = closureFn(reg9780);
    Obj reg9802 = symbolGet(intern("fact"));
    m->stack[0] = reg9802;
    m->stack[1] = reg9174;
    m->stack[2] = reg9605;
    m->stack[3] = reg9711;
    return;
  }
}
static void
clofun8286 (struct VM* m) {
  Obj reg9961 = m->stack[0];
  Obj reg9965 = m->stack[1];
  m->stack[0] = reg9965;
  m->pc = NULL;
  return;
}

int main(int argc, char *argv[]) {
  struct VM* m = newVM();
  /* init(); */
	m->pc = clofun8811 ;
  trampoline(m);
  printf("... %ld\n", m->stack[0]);
}
