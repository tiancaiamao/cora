#include "types.h"
#include "str.h"
#include "vm.h"
#include "reader.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

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

static void
stringReplace(struct VM *vm) {
  Obj arg1 = vmGet(vm, 1);
  Obj arg2 = vmGet(vm, 2);
  Obj arg3 = vmGet(vm, 3);

  strBuf raw = stringStr(arg1);
  strBuf from = stringStr(arg2);
  strBuf to = stringStr(arg3);

  int pos = strStr(toStr(raw), toStr(from));
  if (pos < 0) {
    vmReturn(vm, arg1);
    return;
  }

  int cap = strLen(toStr(raw)) + strLen(toStr(to)) - strLen(toStr(from)) + 1;
  strBuf buf = strNew(cap);
  buf = strCpy(buf, strSub(toStr(raw), 0, pos));
  buf = strCat(buf, toStr(to));
  buf = strCat(buf, strSub(toStr(raw), pos+strLen(toStr(from)), strLen(toStr(raw))));
  str s = toStr(buf);
  Obj res = makeString(s.str, s.len);
  vmReturn(vm, res);
  return;
}

static void
stringSplit(struct VM *vm) {
  Obj arg1 = vmGet(vm, 1);
  Obj arg2 = vmGet(vm, 2);
  strBuf from = stringStr(arg1);
  strBuf tmp = stringStr(arg2);

  Obj res = Nil;
  str s = toStr(from);
  str split = toStr(tmp);
  while (1) {
    int pos = strStr(s, split);
    if (pos > 0) {
      str find = strSub(s, 0, pos);
      res = cons(makeString(find.str, strLen(find)), res);
      s = strSub(s, pos+strLen(split), strLen(s));
      continue;
    }
    res = cons(makeString(s.str, strLen(s)), res);
    break;
  }
  vmReturn(vm, reverse(res));
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

static struct registerModule stringModule = {
  NULL,
  {
    {"slice", stringSlice, 2},
    {"has-prefix?", stringHasPrefix, 2},
    {"length", stringLength, 1},
    {"index", stringIndex, 2},
    {"compare", stringCompare, 2},
    {"number->string", numberToString, 1},
    {"replace", stringReplace, 3},
    {"split", stringSplit, 2},
    /* {NULL, NULL, 0} */
  }
};

void
__entry(struct VM *vm) {
  Obj pkg = vmGet(vm, 2);
  registerAPI(&stringModule, toStr(stringStr(pkg)));
  return vmReturn(vm, intern("string"));
}


// (@import "cora/lib/string")
// (str.index "sdfds" 3)
// (str.length "sdfsd")
// (str.has-prefix? "sdfsdf" "sdf")
// (str.slice "sdfsd" 1 3)
// (str.compare "sdfsd" "abc"))
