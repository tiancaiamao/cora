#include "runtime.h"

static int
hashForString(const char *str) {
	int sum = 0;
	for (; *str != 0; str++) {
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
	case TAG_SYMBOL: {
		char str[256];
		symbolStr(key, str, 256);
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
		} else if (isBytes(key)) {
			char *s = bytesData(key);
			int sum = 7671 + hashForString(s);
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
hashToNumber(struct Cora *ctx, int label, Obj *R) {
	// See types.h for tags definitions
	Obj key = R[1];
	Obj ret = hashToNumberHelp(key);
	coraReturn(ctx, ret);
}

void
builtinMod(struct Cora *co, int label, Obj *R) {
	Obj x = R[1];
	Obj y = R[2];
	Obj ret = makeNumber(fixnum(x) % fixnum(y));
	coraReturn(co, ret);
}

struct registerModule hashModule = {
	NULL,
	{{"mod", builtinMod, 2},
		{"hash-to-number", hashToNumber, 1},
		{NULL, NULL, 0}}};

void
entry(struct Cora *co, int label, Obj *R) {
	Obj pkg = R[2];
	registerAPI(co, &hashModule, stringStr(pkg));
	coraReturn(co, intern("hash"));
}
