#include "runtime.h"
#include <assert.h>

int main() {
  coraInit();

  Obj p = makeNumber(42);
  assert(gcAlloced(&gc, p) == false);
  assert(gcAlloced(&gc, Nil) == false);
  assert(gcAlloced(&gc, Undef) == false);
  assert(gcAlloced(&gc, True) == false);
  assert(gcAlloced(&gc, False) == false);

  p = makeCons(p, Nil);
  assert(gcAlloced(&gc, p) == true);
  assert(gcAlloced(&gc, intern("sss")) == true);
  assert(gcAlloced(&gc, makeString("xx", 2)) == true);

  int dummy;
  assert(gcAlloced(&gc, &dummy) == false);

  Obj f = makeCons(intern("l"), Nil);
  Obj g = makeCons(intern("f"), f);

  p = gcCopy(&gc, ptr(g));
  printf("from = %p, to = %p\n", g, p);
}
