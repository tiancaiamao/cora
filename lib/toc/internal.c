#include "reader.h"
#include "vm.h"

static void
builtinGenerateStr(struct VM *vm) {
  Obj to = vmGet(vm, 1);
  FILE* out = mustCObj(to);
  Obj exp = vmGet(vm, 2);
  strBuf s = stringStr(exp);
  fprintf(out, "%s", toCStr(s));
  vmReturn(vm, Nil);
}

static void
builtinGenerateSym(struct VM *vm) {
  Obj to = vmGet(vm, 1);
  FILE* out = mustCObj(to);
  Obj exp = vmGet(vm, 2);
  const char* s = symbolStr(exp);
  for (const char *p = s; *p != 0; p++) {
    if ((*p >= 'a' && *p <= 'z') ||
	(*p >= 'A' && *p <= 'Z') ||
	(*p >= '0' && *p <= '9')) {
      fprintf(out, "%c", *p);
    } else if (*p == '_') {
      fprintf(out, "__");
    } else {
      fprintf(out, "_%d", *p);
    }
  }
  vmReturn(vm, Nil);
}

static void
builtinGenerateNum(struct VM *vm) {
  Obj to = vmGet(vm, 1);
  FILE* out = mustCObj(to);
  Obj exp = vmGet(vm, 2);
  fprintf(out, "%ld", fixnum(exp));
  vmReturn(vm, Nil);
}

static void
builtinEscapeStr(struct VM *vm) {
  Obj s = vmGet(vm, 1);
  strBuf buf = stringStr(s);
  str str = toStr(buf);
  strBuf dst = strNew(strLen(str));
  
  for (int i=0; i<strLen(str); i++) {
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
  vmReturn(vm, makeString(toCStr(dst), strLen(toStr(dst))));
}

static struct registerModule codeGenModule = {
  NULL,
  {
    {"generate-str", builtinGenerateStr, 2},
    {"generate-sym", builtinGenerateSym, 2},
    {"generate-num", builtinGenerateNum, 2},
    {"escape-str", builtinEscapeStr, 1},
    {NULL, NULL, 0}
  }
};

void
__entry(struct VM *vm) {
  Obj pkg = vmGet(vm, 2);
  registerAPI(&codeGenModule, toStr(stringStr(pkg)));
  return vmReturn(vm, intern("toc"));
}
