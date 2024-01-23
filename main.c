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
  struct SexpReader r = {.pkgMapping = Nil};
  int errCode = 0;

  for (int i=0; ; i++) {
    if (stream == stdin) {
      printf("%d #> ", i);
    }

    Obj exp = sexpRead(vm, 0, &r, stream, &errCode);
    if (errCode != 0) {
      break;
    }

    /* printf("before macro expand ==%d", vmPos(vm)); */
    /* sexpWrite(stdout, exp); */
    /* printf("\n"); */

    exp = macroExpand(vm, exp);

    /* printf("after macro expand ==%d", vmPos(vm)); */
    /* sexpWrite(stdout, exp); */
    /* printf("\n"); */

    Obj res = eval(vm, exp);

    if (stream == stdin) {
      sexpWrite(stdout, res);
      printf("\n");
    }
  }
}

static void
replBytecode(struct VM *vm, FILE* stream) {
  struct SexpReader r = {.pkgMapping = Nil};
  int errCode;

  for (int i=0; ; i++) {
    printf("%d #> ", i);

    int err = 0;
    Obj exp = sexpRead(vm, 0, &r, stdin, &errCode);
    if (err != 0) {
      break;
    }

    Obj res = run(vm, exp);

    sexpWrite(stdout, res);
    printf("\n");
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

  /* replBytecode(vm, stdin); */
}
