#include "types.h"
#include "str.h"
#include "runtime.h"
#include "reader.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

static void
stringSlice(struct Cora *co) {
  Obj str1 = co->args[1];
  Obj pos = fixnum(co->args[2]);
  Obj ret;
  int len = bytesLen(str1);
  if (pos >= len) {
    ret = makeString("", 0);
  } else {
    str s = stringStr(str1);
    ret = makeString(s.str+pos, len-pos);
  }
  coraReturn(co, ret);
}

static void
stringHasPrefix(struct Cora *co) {
  char* str1 = bytesData(co->args[1]);
  char* prefix1 = bytesData(co->args[2]);

  int lPrefix = bytesLen(co->args[2]);
  if (lPrefix > bytesLen(co->args[1])) {
    coraReturn(co, False);
    return;
  }

  for(int i=0; i<lPrefix; i++) {
    if (prefix1[i] != str1[i]) {
      coraReturn(co, False);
      return;
    }
  }

  coraReturn(co, True);
}

static void
bytesLength(struct Cora *co) {
  Obj o = co->args[1];
  int l = bytesLen(o);

  coraReturn(co, makeNumber(l));
}

static void
stringIndex(struct Cora *co) {
  Obj x = co->args[1];
  Obj y = co->args[2];

  char* str = bytesData(x);
  int idx = fixnum(y);
  Obj ret =  makeString(str+idx, 1);
  coraReturn(co, ret);
}

static void
stringCompare(struct Cora *co) {
  Obj x = co->args[1];
  Obj y = co->args[2];

  str x1 = stringStr(x);
  str y1 = stringStr(y);
  int ret = strCmp(x1, y1);
  coraReturn(co, makeNumber(ret));
}

static void
numberToString(struct Cora *co) {
  Obj n = co->args[1];
  assert(isfixnum(n));

  char tmp[32];
  int l = snprintf(tmp, 32, "%ld", fixnum(n));
  coraReturn(co, makeString(tmp, l));
}

static void
stringReplace(struct Cora *co) {
  Obj arg1 = co->args[1];
  Obj arg2 = co->args[2];
  Obj arg3 = co->args[3];

  str raw = stringStr(arg1);
  str from = stringStr(arg2);
  str to = stringStr(arg3);

  int pos = strStr(raw, from);
  if (pos < 0) {
    coraReturn(co, arg1);
    return;
  }

  int cap = strLen(raw) + strLen(to) - strLen(from) + 1;
  strBuf buf = strNew(cap);
  buf = strCpy(buf, strSub(raw, 0, pos));
  buf = strCat(buf, to);
  buf = strCat(buf, strSub(raw, pos+strLen(from), strLen(raw)));
  str s = toStr(buf);
  Obj res = makeString(s.str, s.len);
  coraReturn(co, res);
}

static void
stringContain(struct Cora *co) {
		Obj arg1 = co->args[1];
		Obj arg2 = co->args[2];

		str raw = stringStr(arg1);
		str from = stringStr(arg2);

		int pos = strStr(raw, from);
		if (pos < 0) {
				coraReturn(co, False);
				return;
		}
		coraReturn(co, True);
		return;
}

static void
stringSplit(struct Cora *co) {
  Obj arg1 = co->args[1];
  Obj arg2 = co->args[2];
  str from = stringStr(arg1);
  str split = stringStr(arg2);

  Obj res = Nil;
  str s = from;
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
  coraReturn(co, reverse(res));
}

void
stringAppend(struct Cora *co) {
	Obj str1 = co->args[1];
	Obj str2 = co->args[2];
	str x = stringStr(str1);
	str y = stringStr(str2);
	strBuf tmp = strNew(x.len + y.len);
	tmp = strCpy(tmp, x);
	tmp = strCat(tmp, y);
    str s = toStr(tmp);
	Obj val = makeString(s.str, s.len);
	coraReturn(co, val);
}

static struct registerModule stringModule = {
  NULL,
  {
    {"slice", stringSlice, 2},
    {"has-prefix?", stringHasPrefix, 2},
    {"length", bytesLength, 1},
    {"index", stringIndex, 2},
    {"compare", stringCompare, 2},
    {"number->string", numberToString, 1},
    {"replace", stringReplace, 3},
    {"split", stringSplit, 2},
				{"append", stringAppend, 2},
				{"contain?", stringContain, 2},
    /* {NULL, NULL, 0} */
  }
};

void
entry(struct Cora *co) {
  Obj pkg = co->args[2];
  registerAPI(co, &stringModule, stringStr(pkg));
  coraReturn(co, intern("string"));
}


// (@import "cora/lib/string")
// (str.index "sdfds" 3)
// (str.length "sdfsd")
// (str.has-prefix? "sdfsdf" "sdf")
// (str.slice "sdfsd" 1 3)
// (str.compare "sdfsd" "abc"))
