#include <stdio.h>
#include <string.h>
#include "cora.h"

static void
stringSlice(struct VM *ctx) {
  Obj str = vmGet(ctx, 1);
  Obj pos = fixnum(vmGet(ctx, 2));
  Obj ret;
  int len = stringLen(str);
  if (pos >= len) {
    ret = makeString("", 0);
  } else {
    char *s = stringStr(str);
    ret = makeString(s+pos, len-pos);
  }
  vmReturn(ctx, ret);
}

static void
stringHasPrefix(struct VM *ctx) {
  Obj str = vmGet(ctx, 1);
  Obj prefix = vmGet(ctx, 2);

  char *str1 = stringStr(str);
  char *prefix1 = stringStr(prefix);

  int lPrefix = stringLen(prefix);
  if (lPrefix > stringLen(str)) {
    vmReturn(ctx, False);
  }

  for(int i=0; i<lPrefix; i++) {
    if (prefix1[i] != str1[i]) {
      vmReturn(ctx, False);
    }
  }

  vmReturn(ctx, True);
}

static void
stringLength(struct VM *ctx) {
  Obj o = vmGet(ctx, 1);
  int l = stringLen(o);
  vmReturn(ctx, makeNumber(l));
}

static void
stringIndex(struct VM *ctx) {
  Obj x = vmGet(ctx, 1);
  Obj y = vmGet(ctx, 2);

  char *str = stringStr(x);
  int idx = fixnum(y);
  vmReturn(ctx, makeString(str+idx, 1));
}

/* void */
/* builtinNumberToString(struct VM *ctx) { */
/* 	Obj n = ctxGet(ctx, 1); */
/* 	assert(isfixnum(n)); */

/* 	char tmp[32]; */
/* 	int l = snprintf(tmp, 32, "%ld", fixnum(n)); */
/*  	ctxReturn(ctx, makeString(tmp, l)); */
/* } */

/* void */
/* builtinStringAppend(struct VM *ctx) { */
/* 	Obj x = ctxGet(ctx, 1); */
/* 	Obj y = ctxGet(ctx, 2); */
/* 	assert(isstring(x)); */
/* 	assert(isstring(y)); */
/* 	char *x1 = stringStr(x); */
/* 	char *y1 = stringStr(y); */
/* 	int len = strlen(x1) + strlen(y1); */
/* 	char *dest = alloca(len + 1); */
/* 	strcpy(dest, x1); */
/* 	strcat(dest, y1); */
/* 	ctxReturn(ctx, makeString(dest, len)); */
/* } */

struct registModule stringModule = {
  NULL,
  {
    {"string/slice", stringSlice, 2},
    {"string/has-prefix?", stringHasPrefix, 2},
    {"string/length", stringLength, 1},
    {"string/index", stringIndex, 2},
    {NULL, NULL, 0}
  }
};
