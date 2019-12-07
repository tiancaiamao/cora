#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include "types.h"
#include "builtin.h"
#include "reader.h"

typedef enum {
  controlFlowReturn = 1,
  controlFlowEval,
  controlFlowApply,
} controlFlowKind;

#define CONTROL_CACHE_SIZE 8

struct controlFlow {
  // controlFlowReturn: result = data[0]
  // controlFlowEval: exp, env = data[0], data[1]
  // controlFlowApply: fn, args = data[0], data[1] ...
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

void
ctxReset(struct controlFlow *ctx) {
  ctx->size = 0;
}

void
ctxAppend(struct controlFlow *ctx, Obj o) {
  if (ctx->size >= ctx->cap) {
    void* buf = malloc(ctx->cap * sizeof(Obj));
    memcpy(buf, ctx->data, ctx->size * sizeof(Obj));
    if (ctx->data != ctx->cache) {
      free(ctx->data);
    }
    ctx->data = buf;
  }

  ctx->data[ctx->size] = o;
  ctx->size = ctx->size + 1;
}

/* void */
/* ctxReserve(struct controlFlow *ctx, int size) { */
/*   if (size <= ctx->cap) { */
/*     return; */
/*   } */
/*   Obj *tmp = malloc(size * sizeof(Obj)); */
/*   memcpy(tmp, ctx->data, ctx->size * sizeof(Obj)); */
/*   if (ctx->data != ctx->cache) { */
/*     free(ctx->data); */
/*   } */
/*   ctx->data = tmp; */
/*   ctx->cap = size; */
/*   ctx->size = size; */
/* } */

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

/* Obj */
/* Call(Obj f, Obj arg) { */
/*   struct controlFlow ctx; */
/*   ctxInit(&ctx); */
/*   ctx.kind = controlFlowApply; */
/*   ctx.env = Nil; */
/*   ctx.fn = f; */
/*   sliceAppend(&ctx.args, arg); */
/*   return trampoline(&ctx); */
/* } */

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

      /* printf("get symbol from env:"); */
      /* sexpWrite(NULL, exp); */
      /* printf(" => "); */
      /* sexpWrite(NULL, cdr(bind)); */
      /* printf("\n"); */

      return ctxReturn(ctx, cdr(bind));
    }

    /* printf("eval symbol:"); */
    /* sexpWrite(NULL, exp); */
    /* printf(" => "); */
    /* sexpWrite(NULL, symbolGet(exp)); */
    /* printf("\n"); */

    Obj val = symbolGet(exp);
    if (val == Undef) {
      char buf[100];
      int n = snprintf(buf, 100, "symbol not bind:%s", ((struct scmSymbol*)(ptr(exp)))->str);
      perror(buf);
    }
    return ctxReturn(ctx, val);
  }

  if (consp(exp) == False) {
    // TODO
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
    } else if (hd == symDo) {
      Eval(car(exp), env);
      return ctxTailEval(ctx, cadr(exp), env);
    }
  }

  Obj fn = Eval(hd, env);
  ctxReset(ctx);
  ctxAppend(ctx, fn);
  evalArgList(exp, env, ctx);
  return ctxTailApply(ctx);
}

static void
apply(struct controlFlow *ctx) {
  Obj f = ctxGet(ctx, 0);

  /* printf("apply:"); */
  /* sexpWrite(NULL, f); */
  /* printf("\n"); */
  /* for (int i=0; i<args->size; i++) { */
  /*   printf("args %d = ", i); */
  /*   sexpWrite(NULL, args->data[i]); */
  /*   printf("\n"); */
  /* } */
  /* printf("\n"); */

  switch (((scmHead*)(ptr(f)))->type) {
  case scmHeadClosure:
    {
      struct scmClosure* clo = ptr(f);
      Obj params = clo->params;
      Obj body = clo->body;
      Obj env = clo->env;
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
  /* case scmHeadNative: */
  /*   { */
  /*     struct scmNative* native = ptr(f); */
  /*     int provided = native->captured + args->size; */
  /*     if (provided == native->required) { */
  /*       if (native->captured >= 0) { */
  /*         // TODO adjust args position */
  /*       } */
  /*       native->fn(ctx); */
  /*       return; */
  /*     } */
  /*     if (provided < native->required) { */
  /*       // TODO auto curry */
  /*       return ctxReturn(ctx, makeNative(native->fn, native->required, provided)); */
  /*     } */
  /*     // partial apply */
  /*     printf("fuck native TODO"); */
  /*   } */
  case scmHeadNative:
    {
      struct scmNative* native = ptr(f);
      if (ctx->size == native->required) {
        native->fn(ctx);
        return;
      }
      if (ctx->size < native->required) {
        // TODO makePartial
        perror("not enough args for builtin");
        exit(-1);
      }
      // TODO args->size > builtin->required
      perror("provided more args than required in builtin");
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

static Obj symMacroExpand;

void clofun184(struct controlFlow *ctx);

static void
init() {
  symQuote = intern("quote");
  symIf = intern("if");
  symLambda = intern("lambda");
  symDo = intern("do");
  symMacroExpand = intern("macroexpand");

  symbolSet(intern("+"), makeNative(builtinAdd, 3, 0));
  symbolSet(intern("-"), makeNative(builtinSub, 3, 0));
  symbolSet(intern("*"), makeNative(builtinMul, 3, 0));
  symbolSet(intern("/"), makeNative(builtinDiv, 3, 0));
  symbolSet(intern("="), makeNative(builtinEqual, 3, 0));
  symbolSet(intern("set"), makeNative(builtinSet, 3, 0));
  symbolSet(intern("cons"), makeNative(builtinCons, 3, 0));
  symbolSet(intern("car"), makeNative(builtinCar, 2, 0));
  symbolSet(intern("cdr"), makeNative(builtinCdr, 2, 0));
  symbolSet(intern("cons?"), makeNative(builtinIsCons, 2, 0));
  symbolSet(intern("gensym"), makeNative(builtinGensym, 2, 0));
  symbolSet(intern(">"), makeNative(builtinGT, 3, 0));
  symbolSet(intern("<"), makeNative(builtinLT, 3, 0));
  symbolSet(intern("not"), makeNative(builtinNot, 2, 0));
  symbolSet(intern("symbol?"), makeNative(builtinIsSymbol, 2, 0));
  symbolSet(intern("string?"), makeNative(builtinIsString, 2, 0));

  symbolSet(intern("test"), makeNative(clofun184, 2, 0));
}

static Obj
macroExpand(Obj exp) {
  Obj expand = symbolGet(symMacroExpand);
  if (expand == Undef) {
    return exp;
  }

  // TODO:
  return Nil;

  /* Obj res = Call(expand, exp); */

  /* printf("after expand = "); */
  /* sexpWrite(NULL, res); */
  /* printf("\n"); */


  /* return res; */
}

int coraMain(int argc, char *argv[]) {
  struct VM* m = newVM();
  Obj env = Nil;

  while(1) {
    printf("#> ");
    Obj exp = sexpRead(stdin);
    Obj exp1 = macroExpand(exp);
    Obj res = Eval(exp1, env);
    sexpWrite(stdout, res);
    printf("\n");
  }
  return 0;
}

int main(int argc, char *argv[]) {
  init();
  return coraMain(argc, argv);
}
