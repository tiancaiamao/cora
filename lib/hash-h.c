#include "runtime.h"

static int
hashForString(const char *str) {
    int sum = 0;
    for(;*str != 0; str++) {
      sum += *str;
    }
    return sum;
}

static Obj
hashToNumberHelp(Obj key) {
  if (isfixnum(key)) {
    return key;
  }

  switch (tag(key)) {
  case TAG_SYMBOL:
    {
      const char* str = symbolStr(key);
      int sum = hashForString(str);
      return makeNumber(sum);
    }

  case TAG_IMMEDIATE_CONST:
    if (key == True) {
      return makeNumber(17);
    } else if (key == False) {
      return makeNumber(37);
    } else if (key == Nil) {
      return makeNumber(41);
    } else if (key == Undef) {
      return makeNumber(47);
    }

  case TAG_PTR:
    if (isNumber(key)) {
      return key;
    } else if (isstring(key)) {
      strBuf s = stringStr(key);
      int sum = 7671 + hashForString(toCStr(s));
      return makeNumber(sum);
    } else if (isvector(key)) {
    } else if (iscons(key)) {
      Obj v1 = hashToNumberHelp(car(key));
      Obj v2 = hashToNumberHelp(cdr(key));
      return makeNumber(fixnum(v1) + fixnum(v2));
    }
  }

  // what the fuck?
  return makeNumber(42);
}

void
hashToNumber(struct Cora *ctx) {
  // See types.h for tags definitions
  Obj key = coraGet(ctx, 1);
  Obj ret = hashToNumberHelp(key);
  coraReturn(ctx, ret);
}

void
builtinMod(struct Cora *co) {
  Obj x = co->args[1];
  Obj y = co->args[2];
  Obj ret = makeNumber(fixnum(x) % fixnum(y));
  coraReturn(co, ret);
}

struct registerModule hashModule = {
  NULL,
  {
    {"mod", builtinMod, 2},
    {"hash-to-number", hashToNumber, 1},
    {NULL, NULL, 0}
  }
};

void
entry(struct Cora *co) {
  Obj pkg = co->args[2];
  registerAPI(co, &hashModule, toStr(stringStr(pkg)));
  coraReturn(co, intern("hash"));
}
