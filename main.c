#include <stdio.h>
#include <stdlib.h>
#include <pwd.h>
#include <unistd.h>
#include <sys/types.h>
#include "vm.h"
#include "str.h"
#include "builtin.h"

static void
repl(struct VM *vm, FILE* stream) {
  for (int i=0; ; i++) {
    if (stream == stdin) {
      printf("%d #> ", i);
    }

    struct SexpReader r = {.pkgMapping = Nil};
    int errCode = 0;
    Obj exp = sexpRead(&r, stream, &errCode);
    if (errCode != 0) {
      break;
    }

    /* printf("before macro expand =="); */
    /* sexpWrite(stdout, exp); */

    exp = macroExpand(vm, exp);

    /* printf("after macro expand =="); */
    /* sexpWrite(stdout, exp); */
    /* printf("\n"); */

    Obj res = eval(vm, exp);

    if (stream == stdin) {
      sexpWrite(stdout, res);
      printf("\n");
    }
  }
}


int main(int argc, char *argv[]) {
  struct VM* vm = newVM();

  // CORA PATH
  strBuf tmp = getCoraPath();
  strBuf tmp1 = strDup(toStr(tmp));
  loadByteCode(vm, toStr(strCat(tmp, cstr("cora/init.bc"))));
  loadByteCode(vm, toStr(strCat(tmp1, cstr("cora/compile.bc"))));
  repl(vm, stdin);
}

/* static void */
/* replBytecode(struct VM *vm, FILE* stream) { */
/*   for (int i=0; ; i++) { */
/*     printf("%d #> ", i); */

/*     int err = 0; */
/*     struct SexpReader r = {.pkgMapping = Nil}; */
/*     int errCode; */
/*     Obj exp = sexpRead(&r, stdin, &errCode); */
/*     if (err != 0) { */
/*       break; */
/*     } */

/*     char *exec = bytecodeToExec(exp); */
/*     Obj res = run(&vm, exec); */

/*     sexpWrite(stdout, res); */
/*     printf("\n"); */
/*   } */
/* } */
