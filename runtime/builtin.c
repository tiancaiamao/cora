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
builtinGT(Obj args[]) {
  Obj x = args[0];
  Obj y = args[1];
  assert(isfixnum(x));
  assert(isfixnum(y));
  if (fixnum(x) > fixnum(y)) {
    return True;
  }
  return False;
}

Obj
builtinLT(Obj args[]) {
  Obj x = args[0];
  Obj y = args[1];
  assert(isfixnum(x));
  assert(isfixnum(y));
  if (fixnum(x) < fixnum(y)) {
    return True;
  }
  return False;
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

Obj
builtinCar(Obj args[]) {
  assert(iscons(args[0]));
  return car(args[0]);
}

Obj
builtinCdr(Obj args[]) {
  assert(iscons(args[0]));
  return cdr(args[0]);
}

Obj
builtinIsCons(Obj args[]) {
  if (iscons(args[0])) {
    return True;
  }
  return False;
}

static uint64_t genIdx = 0;

Obj
builtinGensym(Obj args[]) {
  assert(issymbol(args[0]));
  struct scmSymbol *sym = ptr(args[0]);
  char tmp[200];
  snprintf(tmp, 100, "#%s%ld", sym->str, genIdx);
  genIdx++;
  return intern(tmp);
}

Obj
builtinNot(Obj args[]) {
  assert(isboolean(args[0]));
  if (args[0] == True) {
    return False;
  }
  return True;
}

Obj
builtinIsSymbol(Obj args[]) {
  if (issymbol(args[0])) {
    return True;
  }
  return False;
}

Obj
builtinIsString(Obj args[]) {
  Obj o = args[0];
  if (tag(o) == TAG_PTR) {
    if (((scmHead*)ptr(o))->type == scmHeadString) {
      return True;
    }
  }
  return False;
}
