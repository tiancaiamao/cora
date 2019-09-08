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


static void clofun20861 (struct VM* m);
static void clofun20773 (struct VM* m);
static void clofun20495 (struct VM* m);

static void
clofun20861 (struct VM* m) {
  Obj reg20925 = makeClosure(clofun20773, 0);
  Obj reg20994 = 6;
  Obj reg21013 = Nil;
  Obj reg21014 = cons(reg20994, reg21013);
  Obj reg21083 = 4;
  Obj reg21114 = cons(reg21083, reg21014);
  Obj reg21183 = 2;
  Obj reg21214 = cons(reg21183, reg21114);
  Obj reg21283 = symbolGet(intern("map"));
  m->pc = closureFn(reg21283);
  Obj reg21305 = symbolGet(intern("map"));
  Obj reg21330 = makeClosure(clofun20495, 0);
  m->stack[0] = reg21305;
  m->stack[1] = reg21330;
  m->stack[2] = reg20925;
  m->stack[3] = reg21214;
  return;
}
static void
clofun20773 (struct VM* m) {
  Obj reg21443 = m->stack[0];
  Obj reg21447 = m->stack[1];
  Obj reg21451 = m->stack[2];
  m->pc = closureFn(reg21447);
  Obj reg21620 = 2;
  Obj reg21621 = reg21451 + reg21620;
  m->stack[0] = reg21447;
  m->stack[1] = reg21621;
  return;
}
static void
clofun20495 (struct VM* m) {
  Obj reg21656 = m->stack[0];
  Obj reg21660 = m->stack[1];
  m->stack[0] = reg21660;
  m->pc = NULL;
  return;
}


void clofun_map (struct VM* m);

int main(int argc, char *argv[]) {
  struct VM* m = newVM();
  /* init(); */
	m->pc = clofun_map ;
  trampoline(m);
  Obj res = m->stack[0];

  m->pc = clofun20861;
  trampoline(m);
  res = m->stack[0];

  printf("... %ld\n", car(res));
  printf("... %ld\n", car(cdr(res)));
  printf("... %ld\n", car(cdr(cdr(res))));
  /* printf("... %ld\n", car(cdr(cdr(cdr(res))))); */
}
