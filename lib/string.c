#include "reader.h"
#include "runtime.h"
#include "str.h"
#include "types.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>

static void
stringSlice(struct Cora *co, int label, Obj *R) {
	Obj str1 = R[1];
	int len = bytesLen(str1);
	int beg = fixnum(R[2]);
	if (beg < 0) {
		beg = len + beg;
	}
	int end = fixnum(R[3]);
	if (end < 0) {
		end = len + end;
	}

	Obj ret;
	if (beg < 0 || end > len || end < beg) {
		ret = makeString(co->gc, "", 0);
	} else {
		str s = stringStr(str1);
		ret = makeString(co->gc, s.str + beg, end - beg);
	}
	coraReturn(co, ret);
}

static void
stringHasPrefix(struct Cora *co, int label, Obj *R) {
	char *str1 = bytesData(R[1]);
	char *prefix1 = bytesData(R[2]);

	int lPrefix = bytesLen(R[2]);
	if (lPrefix > bytesLen(R[1])) {
		coraReturn(co, False);
		return;
	}

	for (int i = 0; i < lPrefix; i++) {
		if (prefix1[i] != str1[i]) {
			coraReturn(co, False);
			return;
		}
	}

	coraReturn(co, True);
}

static void
bytesLength(struct Cora *co, int label, Obj *R) {
	Obj o = R[1];
	int l = bytesLen(o);

	coraReturn(co, makeNumber(l));
}

static void
stringIndex(struct Cora *co, int label, Obj *R) {
	Obj x = R[1];
	Obj y = R[2];

	char *str = bytesData(x);
	int idx = fixnum(y);
	Obj ret = makeString(co->gc, str + idx, 1);
	coraReturn(co, ret);
}

static void
stringCompare(struct Cora *co, int label, Obj *R) {
	Obj x = R[1];
	Obj y = R[2];

	str x1 = stringStr(x);
	str y1 = stringStr(y);
	int ret = strCmp(x1, y1);
	coraReturn(co, makeNumber(ret));
}

static void
numberToString(struct Cora *co, int label, Obj *R) {
	Obj n = R[1];
	assert(isfixnum(n));

	char tmp[32];
	int l = snprintf(tmp, 32, "%"PRId64, fixnum(n));
	coraReturn(co, makeString(co->gc, tmp, l));
}

static void
stringReplace(struct Cora *co, int label, Obj *R) {
	Obj arg1 = R[1];
	Obj arg2 = R[2];
	Obj arg3 = R[3];

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
	buf = strCat(buf, strSub(raw, pos + strLen(from), strLen(raw)));
	str s = toStr(buf);
	Obj res = makeString(co->gc, s.str, s.len);
	strFree(buf);
	coraReturn(co, res);
}

static void
stringContain(struct Cora *co, int label, Obj *R) {
	Obj arg1 = R[1];
	Obj arg2 = R[2];

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
stringSplit(struct Cora *co, int label, Obj *R) {
	Obj arg1 = R[1];
	Obj arg2 = R[2];
	str from = stringStr(arg1);
	str split = stringStr(arg2);

	Obj res = Nil;
	str s = from;
	while (1) {
		int pos = strStr(s, split);
		if (pos > 0) {
			str find = strSub(s, 0, pos);
			res = makeCons(co->gc, makeString(co->gc, find.str, strLen(find)), res);
			s = strSub(s, pos + strLen(split), strLen(s));
			continue;
		}
		res = makeCons(co->gc, makeString(co->gc, s.str, strLen(s)), res);
		break;
	}
	coraReturn(co, reverse(co->gc, res));
}

static void
bytesMemCpy(struct Cora *co, int label, Obj *R) {
	Obj to = R[1];
	Obj off1 = R[2];
	Obj from = R[3];
	Obj off2 = R[4];
	Obj size = R[5];

	char *dst = bytesData(to) + fixnum(off1);
	char *src = bytesData(from) + fixnum(off2);
	memcpy(dst, src, fixnum(size));
	coraReturn(co, Nil);
}

static void
bytesRef(struct Cora *co, int label, Obj *R) {
	Obj str = R[1];
	Obj idx = fixnum(R[2]);
	assert(idx < bytesLen(str));
	Obj ret = makeNumber(bytesData(str)[idx]);
	coraReturn(co, ret);
}

static void
stringToList(struct Cora *co, int label, Obj *R) {
	Obj str = R[1];
	char *bs = bytesData(str);
	int len = bytesLen(str);
	Obj res = Nil;
	for (int i = 0; i < len; i++) {
		res = makeCons(co->gc, makeNumber(bs[i]), res);
	}
	coraReturn(co, reverse(co->gc, res));
}

static struct registerModule stringModule = {
	NULL,
	{
		{"string-slice", stringSlice, 3},
		{"has-prefix?", stringHasPrefix, 2},
		{"string-length", bytesLength, 1},
		{"string-index", stringIndex, 2},
		{"compare", stringCompare, 2},
		{"number->string", numberToString, 1},
		{"string-replace", stringReplace, 3},
		{"string-split", stringSplit, 2},
		{"string-contain?", stringContain, 2},
		{"memcpy", bytesMemCpy, 5},
		{"byte-ref", bytesRef, 2},
		{"string->list", stringToList, 1},
		{NULL, NULL, 0},
	}};

void
entry(struct Cora *co, int label, Obj *R) {
	Obj pkg = R[2];
	registerAPI(co, &stringModule, stringStr(pkg));
	coraReturn(co, intern("string"));
}

// (@import "cora/lib/string")
// (str.index "sdfds" 3)
// (str.length "sdfsd")
// (str.has-prefix? "sdfsdf" "sdf")
// (str.slice "sdfsd" 1 3)
// (str.compare "sdfsd" "abc"))
