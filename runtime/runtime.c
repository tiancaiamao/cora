#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "types.h"
#include "builtin.h"
#include "reader.h"


typedef enum {
  controlFlowReturn = 1,
  controlFlowEval,
  controlFlowApply,
} controlFlowKind;

struct slice {
  Obj *data;
  int size;
  int cap;
  bool borrow;
};


void
sliceInit(struct slice *s, int size, int cap) {
  if (cap > 0) {
    s->data = malloc(sizeof(cap) * sizeof(Obj));
  } else {
    s->data = 0;
  }
  s->size = size;
  s->cap = cap;
  s->borrow = false;
}

void
sliceBorrowInit(struct slice *s, Obj *data, int cap) {
  s->data = data;
  s->cap = cap;
  s->size = 0;
  s->borrow = true;
}

void
sliceAppend(struct slice *s, Obj o) {
  if (s->size == s->cap) {
    if (s->cap == 0) {
      s->cap == 8;
    } else {
      s->cap = s->cap * 2;
    }
    void* buf = malloc(s->cap * sizeof(Obj));
    memcpy(buf, s->data, s->size * sizeof(Obj));
    if (!s->borrow) {
      free(s->data);
    }
    s->data = buf;
    s->borrow = false;
  }

  s->data[s->size] = o;
  s->size = s->size + 1;
}

void
sliceReset(struct slice *s) {
  s->size = 0;
}

#define CONTROL_CACHE_SIZE 8

struct controlFlow {
  controlFlowKind kind;
  Obj fn;
  Obj result;
  Obj exp;
  Obj env;
  Obj cache[CONTROL_CACHE_SIZE];
  struct slice args;
};

static void
ctxReturn(struct controlFlow *ctx, Obj val) {
  ctx->kind = controlFlowReturn;
  ctx->result = val;
}

static void
ctxTailApply(struct controlFlow *ctx, Obj fn) {
  ctx->kind = controlFlowApply;
  ctx->fn = fn;
}

static void
ctxTailEval(struct controlFlow *ctx, Obj exp, Obj env) {
  ctx->kind = controlFlowEval;
  ctx->exp = exp;
  ctx->env = env;
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
envExtend(Obj env, Obj *params, struct slice *args, int *pos) {
  *pos = 0;
  while ((*params) != Nil && ((*pos) < args->size)) {
    Obj pair = cons(car(*params), args->data[(*pos)]);
    env = cons(pair, env);
    (*params) = cdr(*params);
    (*pos) = (*pos) + 1;
  }
  return env;
}

Obj
Eval(Obj exp, Obj env) {
  struct controlFlow ctx1;
  sliceBorrowInit(&ctx1.args, ctx1.cache, CONTROL_CACHE_SIZE);
  ctx1.kind = controlFlowEval;
  ctx1.exp = exp;
  ctx1.env = env;
  return trampoline(&ctx1);
}

static void
evalArgList(Obj args, Obj env, struct slice *s) {
  sliceReset(s);
  for (Obj ptr = args; ptr != Nil; ptr = cdr(ptr)) {
    Obj tmp = Eval(car(ptr), env);
    sliceAppend(s, tmp);
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
  Obj exp = ctx->exp;
  Obj env = ctx->env;

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
    if (val == Nil) {
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
  evalArgList(exp, env, &ctx->args);
  return ctxTailApply(ctx, fn);
}

static void
apply(struct controlFlow *ctx) {
  Obj f = ctx->fn;
  struct slice* args = &ctx->args;

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
      int used;
      env = envExtend(env, &params, args, &used);
      if (params != Nil) {
        // auto curry
        Obj clo = makeClosure(params, body, env);
        return ctxReturn(ctx, clo);
      }
      if (used < args->size) {
        // partial apply
        Obj fn = Eval(body, env);
        for (int i = used; i < args->size; i++) {
          args->data[i-used] = args->data[i];
        }
        args->size = args->size - used;
        return ctxTailApply(ctx, fn);
      }
      return ctxTailEval(ctx, body, env);
    }
  case scmHeadNative:
    printf("fuck native TODO");
    break;
  case scmHeadBuiltin:
    {
      struct scmBuiltin* builtin = ptr(f);
      if (args->size == builtin->required) {
        Obj res = builtin->fn(args->data);
        return ctxReturn(ctx, res);
      }
      if (args->size < builtin->required) {
        // TODO makeNative
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
  return ctx->result;
}

static void
init() {
  symQuote = makeSymbol("quote");
  symIf = makeSymbol("if");
  symLambda = makeSymbol("lambda");
  symDo = makeSymbol("do");

  symbolSet(makeSymbol("+"), makeBuiltin(builtinAdd, 2));
  symbolSet(makeSymbol("-"), makeBuiltin(builtinSub, 2));
  symbolSet(makeSymbol("*"), makeBuiltin(builtinMul, 2));
  symbolSet(makeSymbol("/"), makeBuiltin(builtinDiv, 2));
  symbolSet(makeSymbol("="), makeBuiltin(builtinEqual, 2));
  symbolSet(makeSymbol("set"), makeBuiltin(builtinSet, 2));
  symbolSet(makeSymbol("cons"), makeBuiltin(builtinCons, 2));
}

int coraMain(int argc, char *argv[]) {
  struct VM* m = newVM();
  Obj env = Nil;

  while(1) {
    printf("#> ");
    Obj exp = sexpRead(stdin);
    Obj res = Eval(exp, env);
    sexpWrite(stdout, res);
    printf("\n");
  }
  return 0;
}

int main(int argc, char *argv[]) {
  init();
  return coraMain(argc, argv);
}
