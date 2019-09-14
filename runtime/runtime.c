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


void clofun_recur (struct VM* m);
void clo_xxx (struct VM* m);

int main(int argc, char *argv[]) {
  struct VM* m = newVM();
  /* init(); */
	m->pc = clofun_recur ;
  trampoline(m);
  Obj res = m->stack[0];

  m->pc = clo_xxx;
  trampoline(m);
  res = m->stack[0];

  printf("... %ld\n", res);
  /* printf("... %ld\n", car(res)); */
  /* printf("... %ld\n", car(cdr(res))); */
  /* printf("... %ld\n", car(cdr(cdr(res)))); */
  /* printf("... %ld\n", car(cdr(cdr(cdr(res))))); */
}
