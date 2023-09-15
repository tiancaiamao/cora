#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "vm.h"


static void
TestReadSexp() {
  struct VM *vm = newVM();
  int pos = 0;
  char buffer[] = "(a b c)";
  /* char buffer[] = "(a)"; */
  FILE *stream = fmemopen(buffer, strlen(buffer), "r");

  struct SexpReader reader = {.pkgMapping = Nil};
  int errCode;
  Obj o = sexpRead(vm, pos, &reader, stream, &errCode);

  /* Obj r = cons(intern("a"), cons(intern("b"), cons(intern("c"), Nil))); */
  Obj z = cons(intern("a"), cons(intern("b"), cons(intern("c"), Nil)));

  assert(iscons(o));
  /* printf("here res =  %ld \n", o); */
  /* printf("cdr res = "); */
  /* printObj(stdout, cdr(o)); */
  /* printf("\n"); */
  /* printf("=== %ld \n", cdr(o)); */
  /* printObj(stdout, cdr(o)); */
  /* printf("%ld \n", Nil); */
  /* assert(eq(o, cons(intern("a"), Nil))); */
  /* assert(eq(z, r)); */
  assert(eq(o, z));

  fclose(stream);
}

static void
TestImport() {
  char buffer[] = "(@import \"std/cora/basic\" xxx)\n(xxx.yyy 42)";
  FILE *stream = fmemopen(buffer, strlen(buffer), "r");

  struct VM *vm = newVM();
  int pos = 0;
  struct SexpReader r = {.pkgMapping = Nil};
  int errCode;
  Obj o = sexpRead(vm, pos, &r, stream, &errCode);
  Obj pathStr = makeString("std/cora/basic", 14);
  Obj s = cons(intern("import"), cons(pathStr, Nil));
  assert(eq(o, s));
  /* printObj(stdout, r.pkgMapping); */
  /* printf("\n"); */
  assert(eq(r.pkgMapping, cons(cons(intern("xxx"), pathStr), Nil)));

  Obj x = sexpRead(vm, pos, &r, stream, &errCode);
  /* printObj(stdout, x); */
  /* printf("\n"); */
  assert(eq(car(x), intern("std/cora/basic.yyy")));

  fclose(stream);
}

int main(int argc, char *argv[]) {
  TestReadSexp();
  TestImport();
}
