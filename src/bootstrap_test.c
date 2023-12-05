#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "reader.h"
#include "vm.h"

extern Obj reverse(struct VM *vm, int pos, Obj o);

void readFileAsSexp(void *pc, Obj val, struct VM *vm, int pos) {
  Obj path = vmGet(vm, 1);
  Obj pkg = vmGet(vm, 2);
  struct SexpReader r = {.pkgMapping = Nil, .selfPath = toCStr(stringStr(pkg))};
  strBuf pathStr = stringStr(path);
  FILE* f = fopen(toCStr(pathStr), "r");
  int errCode = 0;
  Obj ret = Nil;
  while(errCode == 0) {
    Obj v = sexpRead(NULL, 0, &r, f, &errCode);
    ret = cons(NULL, 0, v, ret);
  }
  fclose(f);
  ret = reverse(NULL, 0, ret);
  vmReturn(vm, ret);
}

void writeSexpToFile(void *pc, Obj val, struct VM *vm, int pos) {
  Obj path = vmGet(vm, 1);
  Obj exp = vmGet(vm, 2);
  strBuf pathStr = stringStr(path);
  FILE* f = fopen(toCStr(pathStr), "w");
  /* printObj(stdout, exp); */
  printObj(f, exp);
  fclose(f);
  vmReturn(vm, Nil);
}

int main(int argc, char *argv[]) {
  struct VM *vm = newVM();
  int pos = 0;
  loadByteCode(vm, pos, cstr("../init.bc"));
  loadByteCode(vm, pos, cstr("../compile.bc"));

  symbolSet(makeSymbol("read-file-as-sexp"), makePrimitive(NULL, 0, readFileAsSexp, 2));
  symbolSet(makeSymbol("write-sexp-to-file"), makePrimitive(NULL, 0, writeSexpToFile, 2));

  // (load "lib/bootstrap.cora" "")  to generate the new init.bc and compile.bc
  char *s = "../lib/bootstrap.cora";
  eval(vm, pos, cons(NULL, 0, intern("load"), cons(NULL, 0, makeString(NULL, 0, s, strlen(s)), cons(NULL, 0, makeString(NULL, 0, "", 0), Nil))));

  // Check the new generated bytecode can be load successfully
  loadByteCode(vm, pos, cstr("./init.bc"));
  loadByteCode(vm, pos, cstr("./compile.bc"));
}