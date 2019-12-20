#include "runtime.h"
#include <stdio.h>
#include <assert.h>

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
    return;
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
  if (tag(o) == TAG_PTR) {
    if (((scmHead*)ptr(o))->type == scmHeadString) {
      ctxReturn(ctx, True);
    }
  }
  ctxReturn(ctx, False);
}
