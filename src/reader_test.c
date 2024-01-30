#include <stdio.h>
#include <string.h>
#include "vm.h"


static void
TestReadSexp() {
  char buffer[] = "(a b c)";
  /* char buffer[] = "(a)"; */
  FILE *stream = fmemopen(buffer, strlen(buffer), "r");

  struct SexpReader reader = {.pkgMapping = Nil};
  int errCode;
  Obj o = sexpRead(NULL, 0, &reader, stream, &errCode);

  /* Obj r = cons(intern("a"), cons(intern("b"), cons(intern("c"), Nil))); */
  Obj z = cons(NULL, 0, intern("a"), cons(NULL, 0, intern("b"), cons(NULL, 0, intern("c"), Nil)));

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

  struct SexpReader r = {.pkgMapping = Nil};
  int errCode;
  Obj o = sexpRead(NULL, 0, &r, stream, &errCode);
  Obj pathStr = makeString(NULL, 0, "std/cora/basic", 14);
  Obj s = cons(NULL, 0, intern("import"), cons(NULL, 0, pathStr, Nil));
  assert(eq(o, s));
  /* printObj(stdout, r.pkgMapping); */
  /* printf("\n"); */
  assert(eq(r.pkgMapping, cons(NULL, 0, cons(NULL, 0, intern("xxx"), pathStr), Nil)));

  Obj x = sexpRead(NULL, 0, &r, stream, &errCode);
  /* printObj(stdout, x); */
  /* printf("\n"); */
  assert(eq(car(x), intern("std/cora/basic.yyy")));

  fclose(stream);
}

int main(int argc, char *argv[]) {
  TestReadSexp();
  TestImport();
}
