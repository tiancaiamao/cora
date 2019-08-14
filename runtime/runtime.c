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

Obj globalSymbolFact;

void clofun17042(struct VM* m) {
	Obj reg19610 = m->stack[0];
	Obj reg19614 = m->stack[1];
	Obj reg19705 = closureRef(reg19610, 0);
	m->pc = closureFn(reg19705);
	Obj reg19757 = closureRef(reg19610, 0);
	Obj reg19827 = closureRef(reg19610, 1);
	Obj reg19852 = (reg19827 * reg19614) >> 1;
	m->stack[0] = reg19757;
	m->stack[1] = reg19852;
	return;
}

void clofun16875(struct VM* m) {
	Obj reg18959 = m->stack[0];
	Obj reg18963 = m->stack[1];
	Obj reg18967 = m->stack[2];
	Obj reg19052 = 0;
	Obj reg19053 = PrimEqual(reg18967, reg19052);
	if (reg19053 == True) {
		m->pc = closureFn(reg18963);
		Obj reg19242 = 2;
		m->stack[0] = reg18963;
		m->stack[1] = reg19242;
		return;
	} else {
		Obj reg19343 = 2;
		Obj reg19344 = reg18967 - reg19343;
    Obj reg19413 = GetSymbolValue(globalSymbolFact);
		m->pc = closureFn(reg19413);
		Obj reg19435 = GetSymbolValue(globalSymbolFact);
		Obj reg19544 = makeClosure(clofun17042, 2, reg18963, reg18967);
		m->stack[0] = reg19435;
		m->stack[1] = reg19544;
		m->stack[2] = reg19344;
		return;
	}
}

void clofun16732(struct VM* m) {
	Obj reg19887 = m->stack[0];
	Obj reg19891 = m->stack[1];
	m->stack[0] = reg19891;
  m->pc = NULL;
	return;
}

void clofun17313(struct VM* m) {
	Obj reg18689 = makeClosure(clofun16875, 0);
	Obj reg18758 = globalSymbolFact;
	Obj reg18783 = funSet(reg18758, reg18689);
  Obj reg18852 = GetSymbolValue(globalSymbolFact);
	m->pc = closureFn(reg18852);
	Obj reg18874 = GetSymbolValue(globalSymbolFact);
	Obj reg18899 = makeClosure(clofun16732, 0);
	Obj reg18921 = 10;
	m->stack[0] = reg18874;
	m->stack[1] = reg18899;
	m->stack[2] = reg18921;
	return;
}

void init() {
  globalSymbolFact = intern("fact");
}

int main(int argc, char *argv[]) {
  struct VM* m = newVM();
  init();
	m->pc = clofun17313;
  trampoline(m);
  printf("... %ld\n", m->stack[0]);
}
