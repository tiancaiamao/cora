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


jmp_buf coraREPL;

void
ctxInit(struct controlFlow *ctx) {
  ctx->data = &ctx->cache[0];
  ctx->size = 0;
  ctx->cap = CONTROL_CACHE_SIZE;
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
Call(int nargs, ...) {
  struct controlFlow ctx;
  ctxInit(&ctx);
  ctx.kind = controlFlowApply;
  ctxResize(&ctx, nargs);
  va_list ap;
  va_start(ap, nargs);
  for (int i=0; i<nargs; i++) {
    ctxSet(&ctx, i, va_arg(ap, Obj));
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

  Obj res = Call(2, expand, exp);

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

  if (symbolGet(symDebugEval) == True)  {
    printf("eval:");
    sexpWrite(NULL, exp);
    printf("\tenv:");
    sexpWrite(NULL, env);
    printf("\n");
  }

  if (tag(exp) != TAG_SYMBOL && tag(exp) != TAG_CONS) {
    ctxReturn(ctx, exp);
  }

  if (issymbol(exp)) {
    Obj bind = envGet(env, exp);
    if (bind != Nil) {
      ctxReturn(ctx, cdr(bind));
    }
    Obj val = symbolGet(exp);
    if (val == Undef) {
      printf("symbol not bind: %s\n", symbolStr(exp));
      longjmp(coraREPL, 1);
    }
    ctxReturn(ctx, val);
  }

  Obj hd = car(exp);
  exp = cdr(exp);
  if (issymbol(hd)) {
    if (hd == symQuote) { // (quote x)
      ctxReturn(ctx, car(exp));
    } else if (hd == symIf) { // (if a b c)
      return evalIf(ctx, car(exp), cadr(exp), caddr(exp), env);
    } else if (hd == symLambda) { // (lambda (args) body)
      ctxReturn(ctx, makeClosure(car(exp), cadr(exp), env));
    } else if (hd == symDo) { // (do x y)
      Eval(car(exp), env);
      return ctxTailEval(ctx, cadr(exp), env);
    }
  }

  Obj fn = Eval(hd, env);
  ctxResize(ctx, 0);
  ctxAppend(ctx, fn);
  evalArgList(exp, env, ctx);
  ctxTailApply(ctx);
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
  ctxTailApply(ctx);
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

  if ((iscons(f)) && (car(f) == symLambda)) {
    // (lambda (params) body . env)
    Obj params = cadr(f);
    Obj body = caddr(f);
    Obj env = cdddr(f);
    int pos;
    env = envExtend(env, &params, ctx, &pos);
    if (params != Nil) {
      // auto curry
      Obj clo = makeClosure(params, body, env);
      ctxReturn(ctx, clo);
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
      ctxTailApply(ctx);
    }
    return ctxTailEval(ctx, body, env);
  }

  switch (((scmHead*)(ptr(f)))->type) {
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
          ctxReturn(ctx, f);
        }
        required = required - ctx->size + 1; // +1 to include itself as the first argument.
        Obj curry = makeCurry(required, ctx->size);
        memcpy(curryData(curry), ctx->data, sizeof(Obj) * ctx->size);
        ctxReturn(ctx, curry);
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
        ctxTailApply(ctx);
      }

      if (ctx->size < crequire) {
        int required = crequire - (ctx->size - 1);
        int captured = ccapture + (ctx->size - 1);
        Obj newCurry = makeCurry(required, captured);
        memcpy(curryData(newCurry), curryData(f), sizeof(Obj) * ccapture);
        memcpy(&curryData(newCurry)[ccapture], &ctx->data[1], sizeof(Obj) * (ctx->size -1));
        ctxReturn(ctx, newCurry);
      }

      return partialApply(ctx, crequire);
    }
  }

  printf("fuck unknown TODO\n");
  sexpWrite(NULL, f);
  ctxReturn(ctx, Nil);
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
registAPI(struct registModule* m) {
  if (m->init != NULL) {
    m->init();
  }

  for (int i=0; ; i++) {
    struct registEntry entry = m->entries[i];
    if (entry.func == NULL) {
      break;
    }

    symbolSet(intern(entry.name), makeBuiltin(entry.func, entry.args));
  }
}


static struct registModule builtinModule = {
					 NULL,
					 {
					  {"+",builtinAdd, 2},
					  {"-",builtinSub, 2},
					  {"*",builtinMul, 2},
					  {"/",builtinDiv, 2},
					  {"=",builtinEqual, 2},
					  {"set",builtinSet, 2},
					  {"cons",builtinCons, 2},
					  {"car",builtinCar, 1},
					  {"cdr",builtinCdr, 1},
					  {"cons?",builtinIsCons, 1},
					  {"gensym",builtinGensym, 1},
					  {">",builtinGT, 2},
					  {"<",builtinLT, 2},
					  {"not",builtinNot, 1},
					  {"symbol?",builtinIsSymbol, 1},
					  {"string?",builtinIsString, 1},
					  {"number?",builtinIsNumber, 1},
					  {"vector",builtinMakeVector, 1},
					  {"vector-set!",builtinVectorSet, 3},
					  {"vector-ref",builtinVectorRef, 2},
					  {"vector?",builtinIsVector, 1},
					  {"intern",builtinIntern, 1},
					  {"load",builtinLoad, 1},
					  {NULL, NULL, 0}
					 }
};

static struct registModule stringModule = {
					  NULL,
					  {
					   {"number->string", builtinNumberToString, 1},
					   {"string-append", builtinStringAppend, 2},
					   {NULL, NULL, 0}
					  }
};

void
coraInit() {
  gcInit(&gc);
  typesInit();
  symQuote = intern("quote");
  symIf = intern("if");
  symLambda = intern("lambda");
  symDo = intern("do");
  symMacroExpand = intern("macroexpand");
  symDebugEval = intern("*debug-eval*");


  registAPI(&builtinModule);
  registAPI(&stringModule);
}
