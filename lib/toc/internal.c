#include <stdio.h>
#include "runtime.h"
#include "str.h"

static void
builtinGenerateStr(struct Cora *co) {
	Obj to = co->args[1];
	FILE *out = mustCObj(to);
	Obj exp = co->args[2];
	str s = stringStr(exp);
	fprintf(out, "%s", s.str);
	coraReturn(co, Nil);
}

static void
builtinGenerateSym(struct Cora *co) {
	Obj to = co->args[1];
	FILE *out = mustCObj(to);
	Obj exp = co->args[2];
	char s[256];
	symbolStr(exp, s, 256);
	if (s[0] >= '0' && s[0] <= '9') {
		fprintf(out, "v");
	}
	for (const char *p = s; *p != 0; p++) {
		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z') ||
		    (*p >= '0' && *p <= '9')) {
			fprintf(out, "%c", *p);
		} else if (*p == '_') {
			fprintf(out, "__");
		} else {
			fprintf(out, "_%d", *p);
		}
	}
	coraReturn(co, Nil);
}

static void
builtinGenerateNum(struct Cora *co) {
	Obj to = co->args[1];
	FILE *out = mustCObj(to);
	Obj exp = co->args[2];
	fprintf(out, "%ld", fixnum(exp));
	coraReturn(co, Nil);
}

static void
builtinEscapeStr(struct Cora *co) {
	Obj s = co->args[1];
	str str = stringStr(s);
	if (strLen(str) == 0) {
		coraReturn(co, s);
		return;
	}

	strBuf dst = strNew(strLen(str));

	for (int i = 0; i < strLen(str); i++) {
		char c = str.str[i];
		switch (c) {
		case '"':
			dst = strAppend(dst, '\\');
			dst = strAppend(dst, '"');
			break;
		case '\n':
			dst = strAppend(dst, '\\');
			dst = strAppend(dst, 'n');
			break;
		case '\t':
			dst = strAppend(dst, '\\');
			dst = strAppend(dst, 't');
			break;
		default:
			dst = strAppend(dst, c);
		};
	}
	Obj ret = makeString(toCStr(dst), strLen(toStr(dst)));
	strFree(dst);
	coraReturn(co, ret);
}

static struct registerModule module = {
  NULL,
  {
    {"generate-str", builtinGenerateStr, 2},
    {"generate-sym", builtinGenerateSym, 2},
    {"generate-num", builtinGenerateNum, 2},
    {"escape-str", builtinEscapeStr, 1},
    {NULL, NULL, 0},
  }
};

void
entry(struct Cora *co) {
  Obj pkg = co->args[2];
  registerAPI(co, &module, stringStr(pkg));
  coraReturn(co, intern("internal"));
}
