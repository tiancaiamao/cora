#include <stdio.h>
#include "runtime.h"
#include "str.h"

static void
builtinDisplay(struct Cora *co) {
  Obj arg = co->args[1];
  sexpWrite(stdout, arg);
  co->args[1] = Nil;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
}

static void
builtinOpenOutputFile(struct Cora *co) {
  Obj arg1 = co->args[1];
  strBuf filePath = stringStr(arg1);
  FILE* f = fopen(toCStr(filePath), "w");

  co->args[1] = makeCObj(f);
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
}

static void
builtinCloseOutputFile(struct Cora *co) {
  Obj arg1 = co->args[1];
  FILE *f = mustCObj(arg1);
  int errno = fclose(f);

  co->args[1] = makeNumber(errno);
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
}

static void
ioReadAll(struct Cora *co) {
  Obj arg1 = co->args[1];
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
  Obj ret = makeString(toCStr(dest), strLen(toStr(dest)));
  co->args[1] = ret;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
}

static void
ioCopy(struct Cora *co) {
  Obj from1 = co->args[1];
  Obj to1 = co->args[2];
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
  co->args[1] = feof(from);
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
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
entry(struct Cora *co) {
  Obj pkg = co->args[2];
  registerAPI(&ioModule, toStr(stringStr(pkg)));
  co->args[1] = intern("io");
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
}
