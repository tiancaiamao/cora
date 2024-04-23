#include "types.h"
#include "str.h"
#include "runtime.h"
#include "reader.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

static void
stringSlice(struct Cora *co) {
  Obj str = co->args[1];
  Obj pos = fixnum(co->args[2]);
  Obj ret;
  int len = stringLen(str);
  if (pos >= len) {
    ret = makeString("", 0);
  } else {
    strBuf s = stringStr(str);
    ret = makeString(toCStr(s)+pos, len-pos);
  }
  co->args[1] = ret;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
}

static void
stringHasPrefix(struct Cora *co) {
  Obj str = co->args[1];
  Obj prefix = co->args[2];

  strBuf str1 = stringStr(str);
  strBuf prefix1 = stringStr(prefix);

  int lPrefix = stringLen(prefix);
  if (lPrefix > stringLen(str)) {
    co->args[1] = False;
    popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
    return;
  }

  for(int i=0; i<lPrefix; i++) {
    if (toCStr(prefix1)[i] != toCStr(str1)[i]) {
      co->args[1] = False;
      popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
      return;
    }
  }

  co->args[1] = True;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
  return;
}

static void
stringLength(struct Cora *co) {
  Obj o = co->args[1];
  int l = stringLen(o);

  co->args[1] = makeNumber(l);
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
  return;
}

static void
stringIndex(struct Cora *co) {
  Obj x = co->args[1];
  Obj y = co->args[2];

  strBuf str = stringStr(x);
  int idx = fixnum(y);
  Obj ret =  makeString(toCStr(str)+idx, 1);
  co->args[1] = ret;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
  return;
}

static void
stringCompare(struct Cora *co) {
  Obj x = co->args[1];
  Obj y = co->args[2];

  strBuf x1 = stringStr(x);
  strBuf y1 = stringStr(y);
  int ret = strCmp(toStr(x1), toStr(y1));
  co->args[1] = makeNumber(ret);
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
  return;
}

static void
numberToString(struct Cora *co) {
  Obj n = co->args[1];
  assert(isfixnum(n));

  char tmp[32];
  int l = snprintf(tmp, 32, "%ld", fixnum(n));
  co->args[1] = makeString(tmp, l);
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
  return;
}

static void
stringReplace(struct Cora *co) {
  Obj arg1 = co->args[1];
  Obj arg2 = co->args[2];
  Obj arg3 = co->args[3];

  strBuf raw = stringStr(arg1);
  strBuf from = stringStr(arg2);
  strBuf to = stringStr(arg3);

  int pos = strStr(toStr(raw), toStr(from));
  if (pos < 0) {
    co->args[1] = arg1;
    popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
    return;
  }

  int cap = strLen(toStr(raw)) + strLen(toStr(to)) - strLen(toStr(from)) + 1;
  strBuf buf = strNew(cap);
  buf = strCpy(buf, strSub(toStr(raw), 0, pos));
  buf = strCat(buf, toStr(to));
  buf = strCat(buf, strSub(toStr(raw), pos+strLen(toStr(from)), strLen(toStr(raw))));
  str s = toStr(buf);
  Obj res = makeString(s.str, s.len);
  co->args[1] = res;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
  return;
}

static void
stringSplit(struct Cora *co) {
  Obj arg1 = co->args[1];
  Obj arg2 = co->args[2];
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

  co->args[1] = reverse(res);
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
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
entry(struct Cora *co) {
  Obj pkg = co->args[2];
  registerAPI(&stringModule, toStr(stringStr(pkg)));
  co->args[1] = intern("string");
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
}


// (@import "cora/lib/string")
// (str.index "sdfds" 3)
// (str.length "sdfsd")
// (str.has-prefix? "sdfsdf" "sdf")
// (str.slice "sdfsd" 1 3)
// (str.compare "sdfsd" "abc"))
