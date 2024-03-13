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
builtinOpenOutputFile(struct VM *vm) {
  Obj arg1 = vmGet(vm, 1);
  strBuf filePath = stringStr(arg1);
  FILE* f = fopen(toCStr(filePath), "w");
  vmReturn(vm, makeCObj(f));
}

static void
builtinCloseOutputFile(struct VM *vm) {
  Obj arg1 = vmGet(vm, 1);
  FILE *f = mustCObj(arg1);
  int errno = fclose(f);
  vmReturn(vm, makeNumber(errno));
}

static void
builtinDisplay(struct VM *vm) {
  Obj arg = vmGet(vm, 1);
  sexpWrite(stdout, arg);
  vmReturn(vm, Nil);
}

static struct registerModule codeGenModule = {
  NULL,
  {
    {"display", builtinDisplay, 1},
    {"open-output-file", builtinOpenOutputFile, 1},
    {"close-output-file", builtinCloseOutputFile, 1},
    {"generate-str", builtinGenerateStr, 2},
    {"generate-sym", builtinGenerateSym, 2},
    {"generate-num", builtinGenerateNum, 2},
    {NULL, NULL, 0}
  }
};

void
__entry(struct VM *vm) {
  Obj pkg = vmGet(vm, 2);
  registerAPI(&codeGenModule, toStr(stringStr(pkg)));
  return vmReturn(vm, intern("toc"));
}
