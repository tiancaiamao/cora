#include "runtime.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <dlfcn.h>

void
builtinAdd(struct controlFlow *ctx) {
  Obj x = ctxGet(ctx, 1);
  Obj y = ctxGet(ctx, 2);
  assert(isfixnum(x));
  assert(isfixnum(y));
  Obj ret = makeNumber(fixnum(x) + fixnum(y));
  ctxReturn(ctx, ret);
}

void
builtinEqual(struct controlFlow *ctx) {
  Obj a = ctxGet(ctx, 1);
  Obj b = ctxGet(ctx, 2);

  if (eq(a, b)) {
    ctxReturn(ctx, True);
  }
  ctxReturn(ctx, False);
}

void
builtinMul(struct controlFlow *ctx) {
  Obj x = ctxGet(ctx, 1);
  Obj y = ctxGet(ctx, 2);
  Obj ret =  (x * y) >> 1;
  ctxReturn(ctx, ret);
}

void
builtinSub(struct controlFlow *ctx) {
  Obj x = ctxGet(ctx, 1);
  Obj y = ctxGet(ctx, 2);
  assert(isfixnum(x));
  assert(isfixnum(y));
  Obj ret = makeNumber(fixnum(x) - (fixnum(y)));
  ctxReturn(ctx, ret);
}

void
builtinDiv(struct controlFlow *ctx) {
  Obj x = ctxGet(ctx, 1);
  Obj y = ctxGet(ctx, 2);
  assert(isfixnum(x));
  assert(isfixnum(y));
  Obj ret = makeNumber(fixnum(x) / (fixnum(y)));
  ctxReturn(ctx, ret);
}

void
builtinGT(struct controlFlow *ctx) {
  Obj x = ctxGet(ctx, 1);
  Obj y = ctxGet(ctx, 2);
  assert(isfixnum(x));
  assert(isfixnum(y));
  if (fixnum(x) > fixnum(y)) {
    ctxReturn(ctx, True);
  }
  ctxReturn(ctx, False);
}

void
builtinLT(struct controlFlow *ctx) {
  Obj x = ctxGet(ctx, 1);
  Obj y = ctxGet(ctx, 2);
  assert(isfixnum(x));
  assert(isfixnum(y));
  if (fixnum(x) < fixnum(y)) {
    ctxReturn(ctx, True);
  }
  ctxReturn(ctx, False);
}

void
builtinSet(struct controlFlow *ctx) {
  Obj sym = ctxGet(ctx, 1);
  Obj val = ctxGet(ctx, 2);
  assert(issymbol(sym));
  ctxReturn(ctx, symbolSet(sym, val));
}

void
builtinCons(struct controlFlow *ctx) {
  Obj x = ctxGet(ctx, 1);
  Obj y = ctxGet(ctx, 2);
  ctxReturn(ctx, cons(x, y));
}

void
builtinCar(struct controlFlow *ctx) {
  assert(iscons(ctxGet(ctx, 1)));
  ctxReturn(ctx, car(ctxGet(ctx, 1)));
}

void
builtinCdr(struct controlFlow *ctx) {
  assert(iscons(ctxGet(ctx, 1)));
  ctxReturn(ctx, cdr(ctxGet(ctx, 1)));
}

void
builtinIsCons(struct controlFlow *ctx) {
  if (iscons(ctxGet(ctx, 1))) {
    ctxReturn(ctx, True);
  }
  ctxReturn(ctx, False);
}

static uint64_t genIdx = 0;

void
builtinGensym(struct controlFlow *ctx) {
  Obj arg = ctxGet(ctx, 1);
  assert(issymbol(arg));
  char tmp[200];
  snprintf(tmp, 100, "#%s%ld", symbolStr(arg), genIdx);
  genIdx++;
  ctxReturn(ctx, intern(tmp));
}

void
builtinNot(struct controlFlow *ctx) {
  assert(isboolean(ctxGet(ctx, 1)));
  if (ctxGet(ctx, 1) == True) {
    ctxReturn(ctx, False);
  }
  ctxReturn(ctx, True);
}

void
builtinIsSymbol(struct controlFlow *ctx) {
  if (issymbol(ctxGet(ctx, 1))) {
    ctxReturn(ctx, True);
  }
  ctxReturn(ctx, False);
}

void
builtinIsString(struct controlFlow *ctx) {
  Obj o = ctxGet(ctx, 1);
  if (isstring(o)) {
    ctxReturn(ctx, True);
  }
  ctxReturn(ctx, False);
}

void
builtinLoad(struct controlFlow *ctx) {
  Obj path = ctxGet(ctx, 1);
  char *str = stringStr(path);
  FILE *in = fopen(str, "r");
  Obj ast = sexpRead(in);
  while(ast != Nil) {
    /* printf("read == \n"); */
    /* sexpWrite(stdout, ast); */
    /* printf("\n"); */
    Obj exp = MacroExpand(ast);
    Eval(exp, Nil);
    ast = sexpRead(in);
  }
  fclose(in);
  ctxReturn(ctx, path);
}

void
builtinLoadSo(struct controlFlow *ctx) {
  Obj path = ctxGet(ctx, 1);
  char *str = stringStr(path);
  void *handle = dlopen(str, RTLD_LAZY);
  if (!handle) {
    fprintf(stderr, "%s\n", dlerror());
    ctxReturn(ctx, makeNumber(-1));
  }

  nativeFuncPtr entry = dlsym(handle, "entry");
  char *error = dlerror();
  if (error != NULL) {
    // TODO
    ctxReturn(ctx, makeString(error, strlen(error)));
  }

  Call(1, makeNative(entry, 1, 0));
  ctxReturn(ctx, path);
}

void
builtinIsNumber(struct controlFlow* ctx) {
  Obj x = ctxGet(ctx, 1);
  if (isfixnum(x)) {
    ctxReturn(ctx, True);
  }
  if (tag(x) == TAG_PTR) {
    scmHead* h = ptr(x);
    if (h->type == scmHeadNumber) {
      ctxReturn(ctx, True);
    }
  }
  ctxReturn(ctx, False);
}
