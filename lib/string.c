#include <stdio.h>
#include <string.h>
#include "runtime.h"

static void
stringSlice(struct controlFlow *ctx) {
  Obj str = ctxGet(ctx, 1);
  Obj pos = fixnum(ctxGet(ctx, 2));
  Obj ret;
  int len = stringLen(str);
  if (pos >= len) {
    ret = makeString("", 0);
  } else {
    char *s = stringStr(str);
    ret = makeString(s+pos, len-pos);
  }
  ctxReturn(ctx, ret);
}

static void
stringHasPrefix(struct controlFlow *ctx) {
  Obj str = ctxGet(ctx, 1);
  Obj prefix = ctxGet(ctx, 2);

  char *str1 = stringStr(str);
  char *prefix1 = stringStr(prefix);

  int lPrefix = stringLen(prefix);
  if (lPrefix > stringLen(str)) {
    ctxReturn(ctx, False);
  }

  for(int i=0; i<lPrefix; i++) {
    if (prefix1[i] != str1[i]) {
      ctxReturn(ctx, False);
    }
  }

  ctxReturn(ctx, True);
}

static void
stringLength(struct controlFlow *ctx) {
  Obj o = ctxGet(ctx, 1);
  int l = stringLen(o);
  ctxReturn(ctx, makeNumber(l));
}

struct registModule stringModule = {
  NULL,
  {
    {"string/slice", stringSlice, 2},
    {"string/has-prefix?", stringHasPrefix, 2},
    {"string/length", stringLength, 1},
    {NULL, NULL, 0}
  }
};
