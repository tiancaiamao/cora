#include <stdio.h>
#include "vm.h"
#include "str.h"

static void
builtinDisplay(struct VM *vm) {
  Obj arg = vmGet(vm, 1);
  sexpWrite(stdout, arg);
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
ioReadAll(struct VM *vm) {
  Obj arg1 = vmGet(vm, 1);
  FILE *f = mustCObj(arg1);

  const int BATCH_SIZE = 64;
  strBuf dest = strNew(128);
  char buf[BATCH_SIZE];
  while(!feof(f)) {
    size_t sz = fread(buf, 1, BATCH_SIZE, f);
    str x = {buf, sz};
    dest = strCat(dest, x);
    if (sz < BATCH_SIZE) {
      break;
    }
  }
  vmReturn(vm, makeString(toCStr(dest), strLen(toStr(dest))));
}

static void
ioCopy(struct VM *vm) {
  Obj from1 = vmGet(vm, 1);
  Obj to1 = vmGet(vm, 2);
  FILE *from = mustCObj(from1);
  FILE *to = mustCObj(to1);

  const int BATCH_SIZE = 64;
  char buf[BATCH_SIZE];
  while(!feof(from)) {
    size_t sz = fread(buf, 1, BATCH_SIZE, from);
    size_t done = fwrite(buf, 1, sz, to);
    if (sz < BATCH_SIZE) {
      break;
    }
  }
  vmReturn(vm, feof(from));
}

struct registerModule ioModule = {
  NULL,
  {
    {"display", builtinDisplay, 1},
    {"open-output-file", builtinOpenOutputFile, 1},
    {"close-output-file", builtinCloseOutputFile, 1},
    {"read-all", ioReadAll, 1},
    {"copy", ioCopy, 2},
    /* {NULL, NULL, 0} */
  }
};

void
__entry(struct VM *vm) {
  Obj pkg = vmGet(vm, 2);
  registerAPI(&ioModule, toStr(stringStr(pkg)));
  return vmReturn(vm, intern("io"));
}
