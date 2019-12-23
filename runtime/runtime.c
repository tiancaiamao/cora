#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdbool.h>
#include <assert.h>
#include "types.h"
#include "builtin.h"
#include "reader.h"
#include "gc.h"
#include "runtime.h"

typedef enum {
  controlFlowReturn = 1,
  controlFlowEval,
  controlFlowApply,
} controlFlowKind;

#define CONTROL_CACHE_SIZE 8

struct controlFlow {
  // controlFlowReturn: result = data[0]
  // controlFlowEval: exp, env = data[0], data[1]
  // controlFlowApply: fn, args = data[0], data[1], data[2] ...
  controlFlowKind kind;
  Obj cache[CONTROL_CACHE_SIZE];
  // data != &cache[0] means the data is malloced.
  Obj *data;
  int size;
  int cap;
};

void
ctxInit(struct controlFlow *ctx) {
  ctx->data = &ctx->cache[0];
  ctx->size = 0;
  ctx->cap = CONTROL_CACHE_SIZE;
}

Obj
ctxGet(struct controlFlow *ctx, int n) {
  return ctx->data[n];
}

void
ctxSet(struct controlFlow *ctx, int idx, Obj val) {
  assert(ctx->size > idx);
  ctx->data[idx] = val;
}

static void
ctxReCap(struct controlFlow *ctx, int cap) {
  void* buf = malloc(cap * sizeof(Obj));
  memcpy(buf, ctx->data, ctx->size * sizeof(Obj));
  if (ctx->data != ctx->cache) {
    free(ctx->data);
  }
  ctx->cap = cap;
  ctx->data = buf;
}

void
ctxAppend(struct controlFlow *ctx, Obj o) {
  if (ctx->size >= ctx->cap) {
    ctxReCap(ctx, 2 * ctx->cap);
  }
  ctx->data[ctx->size] = o;
  ctx->size = ctx->size + 1;
}

void
ctxResize(struct controlFlow *ctx, int size) {
  if (ctx->cap < size) {
    ctxReCap(ctx, size);
  }
  ctx->size = size;
}

void
ctxReturn(struct controlFlow *ctx, Obj val) {
  ctx->kind = controlFlowReturn;
  ctx->size = 1;
  ctxSet(ctx, 0, val);
}

static void
ctxTailApply(struct controlFlow *ctx) {
  ctx->kind = controlFlowApply;
}

static void
ctxTailEval(struct controlFlow *ctx, Obj exp, Obj env) {
  ctx->kind = controlFlowEval;
  ctx->size = 2;
  ctxSet(ctx, 0, exp);
  ctxSet(ctx, 1, env);
}

static Obj trampoline(struct controlFlow *ctx);

static Obj
envGet(Obj env, Obj exp) {
  for (; env != Nil; env = cdr(env)) {
    Obj pair = car(env);
    if (car(pair) == exp) {
      return pair;
    }
  }
  return Nil;
}

static Obj
envExtend(Obj env, Obj *params, struct controlFlow *ctx, int *pos) {
  *pos = 1;
  while ((*params) != Nil && ((*pos) < ctx->size)) {
    Obj pair = cons(car(*params), ctx->data[(*pos)]);
    env = cons(pair, env);
    (*params) = cdr(*params);
    (*pos) = (*pos) + 1;
  }
  return env;
}

Obj
Eval(Obj exp, Obj env) {
  struct controlFlow ctx1;
  ctxInit(&ctx1);
  ctx1.kind = controlFlowEval;
  ctx1.size = 2;
  ctxSet(&ctx1, 0, exp);
  ctxSet(&ctx1, 1, env);
  return trampoline(&ctx1);
}

Obj
Call(Obj sym, int nargs, ...) {
  Obj fn = symbolGet(sym);
  struct controlFlow ctx;
  ctxInit(&ctx);
  ctx.kind = controlFlowApply;
  ctxResize(&ctx, nargs+1);
  ctxSet(&ctx, 0, fn);
  va_list ap;
  va_start(ap, nargs);
  for (int i=0; i<nargs; i++) {
    ctxSet(&ctx, i+1, va_arg(ap, Obj));
  }
  va_end(ap);

  return trampoline(&ctx);
}

Obj
MacroExpand(Obj exp) {
  Obj expand = symbolGet(symMacroExpand);
  if (expand == Undef || expand == Nil) {
    return exp;
  }

  Obj res = Call(symMacroExpand, 1, exp);

  /* printf("after expand = "); */
  /* sexpWrite(NULL, res); */
  /* printf("\n"); */

  return res;
}

static void
evalArgList(Obj args, Obj env, struct controlFlow *ctx) {
  for (Obj ptr = args; ptr != Nil; ptr = cdr(ptr)) {
    Obj tmp = Eval(car(ptr), env);
    ctxAppend(ctx, tmp);
  }
}

static void
evalIf(struct controlFlow* ctx, Obj a, Obj b, Obj c, Obj env) {
  Obj v = Eval(a, env);
  if (v == True) {
    return ctxTailEval(ctx, b, env);
  } else if (v == False){
    return ctxTailEval(ctx, c, env);
  } else {
    // TODO
  }
}

static void
eval(struct controlFlow* ctx) {
  Obj exp = ctxGet(ctx, 0);
  Obj env = ctxGet(ctx, 1);

  /* printf("eval:"); */
  /* sexpWrite(NULL, exp); */
  /* printf("\tenv:"); */
  /* sexpWrite(NULL, env); */
  /* printf("\n"); */

  if (tag(exp) != TAG_SYMBOL && tag(exp) != TAG_CONS) {
    return ctxReturn(ctx, exp);
  }

  if (issymbol(exp)) {
    Obj bind = envGet(env, exp);
    if (bind != Nil) {
      return ctxReturn(ctx, cdr(bind));
    }
    Obj val = symbolGet(exp);
    if (val == Undef) {
      char buf[100];
      int n = snprintf(buf, 100, "symbol not bind:%s", symbolStr(exp));
      perror(buf);
    }
    return ctxReturn(ctx, val);
  }

  Obj hd = car(exp);
  exp = cdr(exp);
  if (issymbol(hd)) {
    if (hd == symQuote) { // (quote x)
      return ctxReturn(ctx, car(exp));
    } else if (hd == symIf) { // (if a b c)
      return evalIf(ctx, car(exp), cadr(exp), caddr(exp), env);
    } else if (hd == symLambda) { // (lambda (args) body)
      return ctxReturn(ctx, makeClosure(car(exp), cadr(exp), env));
    } else if (hd == symDo) { // (do x y)
      Eval(car(exp), env);
      return ctxTailEval(ctx, cadr(exp), env);
    }
  }

  Obj fn = Eval(hd, env);
  ctxResize(ctx, 0);
  ctxAppend(ctx, fn);
  evalArgList(exp, env, ctx);
  return ctxTailApply(ctx);
}

static void
partialApply(struct controlFlow *ctx, int required) {
  struct controlFlow ctx1;
  ctxInit(&ctx1);
  for (int i=0; i<required; i++) {
    ctxAppend(&ctx1, ctxGet(ctx, i));
  }
  ctx1.kind = controlFlowApply;
  Obj fn = trampoline(&ctx1);
  ctx->data[0] = fn;
  int dst = 1;
  for (int i=required; i<ctx->size; i++) {
    ctx->data[dst] = ctx->data[i];
    dst++;
  }
  ctxResize(ctx, dst);
  return ctxTailApply(ctx);
}

static void
apply(struct controlFlow *ctx) {
  Obj f = ctxGet(ctx, 0);

  /* printf("apply:"); */
  /* sexpWrite(NULL, f); */
  /* printf("\n"); */
  /* for (int i=0; i<ctx->size; i++) { */
  /*   printf("args %d = ", i); */
  /*   sexpWrite(NULL, ctx->data[i]); */
  /*   printf("\n"); */
  /* } */
  /* printf("\n"); */

  switch (((scmHead*)(ptr(f)))->type) {
  case scmHeadClosure:
    {
      Obj params = closureParams(f);
      Obj body = closureBody(f);
      Obj env = closureEnv(f);
      int pos;
      env = envExtend(env, &params, ctx, &pos);
      if (params != Nil) {
        // auto curry
        Obj clo = makeClosure(params, body, env);
        return ctxReturn(ctx, clo);
      }
      if (pos < ctx->size) {
        Obj fn = Eval(body, env);
        ctx->data[0] = fn;
        int j = 1;
        for (int i = pos; i < ctx->size; i++) {
          ctx->data[j] = ctx->data[i];
          j++;
        }
        ctx->size = j;
        return ctxTailApply(ctx);
      }
      return ctxTailEval(ctx, body, env);
    }
  case scmHeadNative:
    {
      int required = nativeRequired(f);
      if (ctx->size == required) {
        nativeFuncPtr fun = nativeFn(f);
        fun(ctx);
        return;
      }

      if (ctx->size < required) {
        if (ctx->size == 1) {
          // size = 1 means no arguments, ctx->data[0] is actually the fn itself
          // Not need to make a curry object for this special case: (f) = f
          return ctxReturn(ctx, f);
        }
        required = required - ctx->size + 1; // +1 to include itself as the first argument.
        Obj curry = makeCurry(required, ctx->size);
        memcpy(curryData(curry), ctx->data, sizeof(Obj) * ctx->size);
        return ctxReturn(ctx, curry);
      }

      return partialApply(ctx, required);
    }
  case scmHeadCurry:
    {
      int crequire = curryRequired(f);
      int ccapture = curryCaptured(f);
      Obj fn = curryData(f)[0];
      if (ctx->size == crequire) {
        int nr = nativeRequired(fn);
        assert(crequire + ccapture == nr + 1);
        ctxResize(ctx, nr);
        // Move call passed arguments to the right place.
        // ignore data[0] because it's the curry object itself. */
        memmove(&ctx->data[ccapture], &ctx->data[1], sizeof(Obj) * (ctx->size-1));
        // Move curry captured arguments to the right place.
        memcpy(ctx->data, curryData(f), sizeof(Obj) * ccapture);
        return ctxTailApply(ctx);
      }

      if (ctx->size < crequire) {
        int required = crequire - (ctx->size - 1);
        int captured = ccapture + (ctx->size - 1);
        Obj newCurry = makeCurry(required, captured);
        memcpy(curryData(newCurry), curryData(f), sizeof(Obj) * ccapture);
        memcpy(&curryData(newCurry)[ccapture], &ctx->data[1], sizeof(Obj) * (ctx->size -1));
        return ctxReturn(ctx, newCurry);
      }

      return partialApply(ctx, crequire);
    }
  default:
    printf("fuck unknown TODO\n");
    sexpWrite(NULL, f);
  }
}

static Obj
trampoline(struct controlFlow *ctx) {
  while(ctx->kind != controlFlowReturn) {
    if (ctx->kind  == controlFlowEval) {
      eval(ctx);
    } else if (ctx->kind == controlFlowApply) {
      apply(ctx);
    }
  }
  return ctxGet(ctx, 0);
}

void
coraInit() {
  typesInit();
  gc = gcNew();
  symQuote = intern("quote");
  symIf = intern("if");
  symLambda = intern("lambda");
  symDo = intern("do");
  symMacroExpand = intern("macroexpand");

  symbolSet(intern("+"), makeBuiltin(builtinAdd, 2));
  symbolSet(intern("-"), makeBuiltin(builtinSub, 2));
  symbolSet(intern("*"), makeBuiltin(builtinMul, 2));
  symbolSet(intern("/"), makeBuiltin(builtinDiv, 2));
  symbolSet(intern("="), makeBuiltin(builtinEqual, 2));
  symbolSet(intern("set"), makeBuiltin(builtinSet, 2));
  symbolSet(intern("cons"), makeBuiltin(builtinCons, 2));
  symbolSet(intern("car"), makeBuiltin(builtinCar, 1));
  symbolSet(intern("cdr"), makeBuiltin(builtinCdr, 1));
  symbolSet(intern("cons?"), makeBuiltin(builtinIsCons, 1));
  symbolSet(intern("gensym"), makeBuiltin(builtinGensym, 1));
  symbolSet(intern(">"), makeBuiltin(builtinGT, 2));
  symbolSet(intern("<"), makeBuiltin(builtinLT, 2));
  symbolSet(intern("not"), makeBuiltin(builtinNot, 1));
  symbolSet(intern("symbol?"), makeBuiltin(builtinIsSymbol, 1));
  symbolSet(intern("string?"), makeBuiltin(builtinIsString, 1));
  symbolSet(intern("load"), makeBuiltin(builtinLoad, 1));
}
