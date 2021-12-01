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

  case TAG_CONS:
    {
      Obj v1 = hashToNumberHelp(car(key));
      Obj v2 = hashToNumberHelp(cdr(key));
      return makeNumber(fixnum(v1) + fixnum(v2));
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
      int sum = 7671 + hashForString(stringStr(key));
      return makeNumber(sum);
    } else if (isvector(key)) {
    }
  }

  // what the fuck?
  return makeNumber(42);
}

void
hashToNumber(struct controlFlow *ctx) {
  // See types.h for tags definitions
  Obj key = ctxGet(ctx, 1);
  Obj ret = hashToNumberHelp(key);
  ctxReturn(ctx, ret);
}

struct registModule hashModule = {
  NULL,
  {
    {"hash-to-number", hashToNumber, 1},
    {NULL, NULL, 0}
  }
};
