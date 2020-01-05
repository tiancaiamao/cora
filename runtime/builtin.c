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
  return ctxReturn(ctx, ret);
}

void
builtinEqual(struct controlFlow *ctx) {
  Obj a = ctxGet(ctx, 1);
  Obj b = ctxGet(ctx, 2);

  if (eq(a, b)) {
    return ctxReturn(ctx, True);
  }
  return ctxReturn(ctx, False);
}

void
builtinMul(struct controlFlow *ctx) {
  Obj x = ctxGet(ctx, 1);
  Obj y = ctxGet(ctx, 2);
  Obj ret =  (x * y) >> 1;
  return ctxReturn(ctx, ret);
}

void
builtinSub(struct controlFlow *ctx) {
  Obj x = ctxGet(ctx, 1);
  Obj y = ctxGet(ctx, 2);
  assert(isfixnum(x));
  assert(isfixnum(y));
  Obj ret = makeNumber(fixnum(x) - (fixnum(y)));
  return ctxReturn(ctx, ret);
}

void
builtinDiv(struct controlFlow *ctx) {
  Obj x = ctxGet(ctx, 1);
  Obj y = ctxGet(ctx, 2);
  assert(isfixnum(x));
  assert(isfixnum(y));
  Obj ret = makeNumber(fixnum(x) / (fixnum(y)));
  return ctxReturn(ctx, ret);
}

void
builtinGT(struct controlFlow *ctx) {
  Obj x = ctxGet(ctx, 1);
  Obj y = ctxGet(ctx, 2);
  assert(isfixnum(x));
  assert(isfixnum(y));
  if (fixnum(x) > fixnum(y)) {
    return ctxReturn(ctx, True);
  }
  return ctxReturn(ctx, False);
}

void
builtinLT(struct controlFlow *ctx) {
  Obj x = ctxGet(ctx, 1);
  Obj y = ctxGet(ctx, 2);
  assert(isfixnum(x));
  assert(isfixnum(y));
  if (fixnum(x) < fixnum(y)) {
    return ctxReturn(ctx, True);
  }
  return ctxReturn(ctx, False);
}

void
builtinSet(struct controlFlow *ctx) {
  Obj sym = ctxGet(ctx, 1);
  Obj val = ctxGet(ctx, 2);
  assert(issymbol(sym));
  return ctxReturn(ctx, symbolSet(sym, val));
}

void
builtinCons(struct controlFlow *ctx) {
  Obj x = ctxGet(ctx, 1);
  Obj y = ctxGet(ctx, 2);
  return ctxReturn(ctx, cons(x, y));
}

void
builtinCar(struct controlFlow *ctx) {
  assert(iscons(ctxGet(ctx, 1)));
  return ctxReturn(ctx, car(ctxGet(ctx, 1)));
}

void
builtinCdr(struct controlFlow *ctx) {
  assert(iscons(ctxGet(ctx, 1)));
  return ctxReturn(ctx, cdr(ctxGet(ctx, 1)));
}

void
builtinIsCons(struct controlFlow *ctx) {
  if (iscons(ctxGet(ctx, 1))) {
    return ctxReturn(ctx, True);
  }
  return ctxReturn(ctx, False);
}

static uint64_t genIdx = 0;

void
builtinGensym(struct controlFlow *ctx) {
  Obj arg = ctxGet(ctx, 1);
  assert(issymbol(arg));
  char tmp[200];
  snprintf(tmp, 100, "#%s%ld", symbolStr(arg), genIdx);
  genIdx++;
  return ctxReturn(ctx, intern(tmp));
}

void
builtinNot(struct controlFlow *ctx) {
  assert(isboolean(ctxGet(ctx, 1)));
  if (ctxGet(ctx, 1) == True) {
    return ctxReturn(ctx, False);
  }
  return ctxReturn(ctx, True);
}

void
builtinIsSymbol(struct controlFlow *ctx) {
  if (issymbol(ctxGet(ctx, 1))) {
    return ctxReturn(ctx, True);
  }
  return ctxReturn(ctx, False);
}

void
builtinIsString(struct controlFlow *ctx) {
  Obj o = ctxGet(ctx, 1);
  if (tag(o) == TAG_PTR) {
    if (((scmHead*)ptr(o))->type == scmHeadString) {
      return ctxReturn(ctx, True);
    }
  }
  return ctxReturn(ctx, False);
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
  return ctxReturn(ctx, path);
}

void
builtinIsNumber(struct controlFlow* ctx) {
  Obj x = ctxGet(ctx, 1);
  if (isfixnum(x)) {
    return ctxReturn(ctx, True);
  }
  if (tag(x) == TAG_PTR) {
    scmHead* h = ptr(x);
    if (h->type == scmHeadNumber) {
      return ctxReturn(ctx, True);
    }
  }
  return ctxReturn(ctx, False);
}
