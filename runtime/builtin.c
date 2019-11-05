#include "types.h"
#include "reader.h"
#include <stdio.h>
#include <assert.h>

Obj
builtinAdd(Obj x, Obj y) {
  assert(isfixnum(x));
  assert(isfixnum(y));
  return makeNumber(fixnum(x) + fixnum(y));
}

Obj
builtinEqual(Obj a, Obj b) {
  if (eq(a, b)) {
    return True;
  }
  return False;
}

Obj
builtinMul(Obj x, Obj y) {
  return (x * y) >> 1;
}

Obj
builtinSub(Obj x, Obj y) {
  assert(isfixnum(x));
  assert(isfixnum(y));
  return makeNumber(fixnum(x) - (fixnum(y)));
}

Obj
builtinDiv(Obj x, Obj y) {
  assert(isfixnum(x));
  assert(isfixnum(y));
  return makeNumber(fixnum(x) / (fixnum(y)));
}


Obj
builtinSet(Obj sym, Obj val) {
  return symbolSet(sym, val);
}

Obj
builtinCons(Obj x, Obj y) {
  return cons(x, y);
}
