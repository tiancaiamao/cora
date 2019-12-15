#include "runtime.h"

static Obj
macroExpand(Obj exp) {
  Obj expand = symbolGet(symMacroExpand);
  if (expand == Undef) {
    return exp;
  }

  // TODO:
  return Nil;

  /* Obj res = Call(expand, exp); */

  /* printf("after expand = "); */
  /* sexpWrite(NULL, res); */
  /* printf("\n"); */


  /* return res; */
}

static int
repl() {
  while(1) {
    printf("#> ");
    Obj exp = sexpRead(stdin);
    Obj exp1 = macroExpand(exp);
    Obj res = Eval(exp1, Nil);
    sexpWrite(stdout, res);
    printf("\n");
  }
  return 0;
}

int main(int argc, char *argv[]) {
  coraInit();
  return repl();
}
