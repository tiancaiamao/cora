#include <stdio.h>
#include <stdint.h>
#include "runtime.h"


int main() {
  /* intptr_t x = -1; */
  /* intptr_t y = x << 1; */
  /* intptr_t z = y >> 1; */
  /* printf("%ld, %ld, %ld\n", x, y, z); */
  /* printf("%lx, %lx, %lx\n", x, y, z); */

  Obj x = makeNumber(-1);
  Obj y = makeNumber(1);
  intptr_t x1 = fixnum(x);
  intptr_t y1 = fixnum(y);
  intptr_t z1 = x1 - y1;
  Obj z = makeNumber(z1);

  printf("%ld, %ld, %ld, %ld\n", x, y, z, z1);
  printf("%lx, %lx, %lx, %lx\n", x, y, z, z1);

  printf("%lx", tag(z));
  printf("%lx", TAG_SYMBOL);
  printf("%lx", TAG_CONS);

  return 0;
}
