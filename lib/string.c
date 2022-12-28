#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "cora.h"
#include "types.h"
#include "str.h"

static void
stringSlice(struct VM *ctx) {
  Obj str = vmGet(ctx, 1);
  Obj pos = fixnum(vmGet(ctx, 2));
  Obj ret;
  int len = stringLen(str);
  if (pos >= len) {
    ret = makeString("", 0);
  } else {
    strBuf s = stringStr(str);
    ret = makeString(toCStr(s)+pos, len-pos);
  }
  vmReturn(ctx, ret);
}

static void
stringHasPrefix(struct VM *ctx) {
  Obj str = vmGet(ctx, 1);
  Obj prefix = vmGet(ctx, 2);

  strBuf str1 = stringStr(str);
  strBuf prefix1 = stringStr(prefix);

  int lPrefix = stringLen(prefix);
  if (lPrefix > stringLen(str)) {
    return vmReturn(ctx, False);
  }

  for(int i=0; i<lPrefix; i++) {
    if (toCStr(prefix1)[i] != toCStr(str1)[i]) {
      return vmReturn(ctx, False);
    }
  }

  return vmReturn(ctx, True);
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

  strBuf str = stringStr(x);
  int idx = fixnum(y);
  vmReturn(ctx, makeString(toCStr(str)+idx, 1));
}

static void
stringCompare(struct VM *ctx) {
  Obj x = vmGet(ctx, 1);
  Obj y = vmGet(ctx, 2);

  strBuf x1 = stringStr(x);
  strBuf y1 = stringStr(y);
  int ret = strCmp(toStr(x1), toStr(y1));
  vmReturn(ctx, makeNumber(ret));
}

static void
numberToString(struct VM *ctx) {
	Obj n = vmGet(ctx, 1);
	assert(isfixnum(n));

	char tmp[32];
	int l = snprintf(tmp, 32, "%ld", fixnum(n));
 	vmReturn(ctx, makeString(tmp, l));
	return;
}

/* void */
/* builtinStringAppend(struct VM *ctx) { */
/* 	Obj x = vmGet(ctx, 1); */
/* 	Obj y = vmGet(ctx, 2); */
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
    {"cora/lib/string.slice", stringSlice, 2},
    {"cora/lib/string.has-prefix?", stringHasPrefix, 2},
    {"cora/lib/string.length", stringLength, 1},
    {"cora/lib/string.index", stringIndex, 2},
    {"cora/lib/string.compare", stringCompare, 2},
    {"cora/lib/string.number->string", numberToString, 1},
    {NULL, NULL, 0}
  }
};



void
__entry(struct VM *vm) {
  registAPI(&stringModule);
  return vmReturn(vm, intern("string"));
}


// (@import "cora/lib/string")
// (str.index "sdfds" 3)
// (str.length "sdfsd")
// (str.has-prefix? "sdfsdf" "sdf")
// (str.slice "sdfsd" 1 3)
// (str.compare "sdfsd" "abc"))
