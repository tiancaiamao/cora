#include "types.h"
#include "reader.h"
#include <stdio.h>
#include <assert.h>

Obj
builtinAdd(Obj args[]) {
  Obj x = args[0];
  Obj y = args[1];
  assert(isfixnum(x));
  assert(isfixnum(y));
  return makeNumber(fixnum(x) + fixnum(y));
}

Obj
builtinEqual(Obj args[]) {
  Obj a = args[0];
  Obj b = args[1];
  if (eq(a, b)) {
    return True;
  }
  return False;
}

Obj
builtinMul(Obj args[]) {
  Obj x = args[0];
  Obj y = args[1];
  return (x * y) >> 1;
}

Obj
builtinSub(Obj args[]) {
  Obj x = args[0];
  Obj y = args[1];
  assert(isfixnum(x));
  assert(isfixnum(y));
  return makeNumber(fixnum(x) - (fixnum(y)));
}

Obj
builtinDiv(Obj args[]) {
  Obj x = args[0];
  Obj y = args[1];
  assert(isfixnum(x));
  assert(isfixnum(y));
  return makeNumber(fixnum(x) / (fixnum(y)));
}


Obj
builtinSet(Obj args[]) {
  Obj sym = args[0];
  Obj val = args[1];
  assert(issymbol(sym));
  return symbolSet(sym, val);
}

Obj
builtinCons(Obj args[]) {
  Obj x = args[0];
  Obj y = args[1];
  return cons(x, y);
}
