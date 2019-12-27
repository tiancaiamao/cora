#include <assert.h>
#include <string.h>
#include <stdio.h>
#include "runtime.h"


int main(int argc, char *argv[]) {
  Obj macro = intern("macro");
  assert(issymbol(macro) == true);

  Obj v = symbolGet(macro);
  assert(v == Undef);

  v = symbolSet(macro, makeNumber(32));
  assert(v == makeNumber(32));

  v = symbolGet(macro);
  assert(v == makeNumber(32));

  printf("%s\n", symbolStr(macro));
  assert(strcmp(symbolStr(macro), "macro") == 0);
}
