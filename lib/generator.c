#include <ucontext.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "runtime.h"

ucontext_t uctx;
Obj retval;

static Obj stateSpawn, statePending, stateDead;

struct Generator {
  scmHead head;
  ucontext_t ctx;
  void* stack;
  Obj fn;
  Obj state; // A symbol of spawn | pending | dead
};

struct Generator *g;

/* (set 'f (generator/new */
/* 	 (lambda () */
/* 	  (begin */
/* 		(yield 1) */
/* 		(yield 2) */
/* 		(yield 3) */
/* 	   (yield 4))))) */

/* (resume f) */
/* (resume f) */
/* (resume f) */
/* (resume f) */

static void
generatorFunc() {
  struct Generator* gen = g;
  gen->state = stateSpawn;
  Obj ret = Call(1, gen->fn);

  retval = ret;
  gen->state = stateDead;
  swapcontext(&gen->ctx, &uctx);
  // Should never come here.
}

static void
builtinGeneratorNew(struct controlFlow *ctx) {
  Obj fn = ctxGet(ctx, 1);
  // newObj???
  struct Generator* ret = malloc(sizeof(struct Generator));
  memset(ret, 0, sizeof(struct Generator));
  const int sz4M = 4<<20;
  ret->head.type = 66; // TODO?
  ret->fn = fn;
  ret->stack = malloc(sz4M);
  if (getcontext(&ret->ctx) == -1) {
    // TODO: panic
  }
  ret->ctx.uc_stack.ss_sp = ret->stack;
  ret->ctx.uc_stack.ss_size = sz4M;
  ret->ctx.uc_link = &uctx;
  // ret->ctx.uc_link = ??

  g = ret;
  makecontext(&ret->ctx, generatorFunc, 0);
  ret->state = stateSpawn;
  ctxReturn(ctx, ((Obj)(&ret->head) | TAG_PTR));
}

static void
builtinResume(struct controlFlow *ctx) {
  Obj tmp = ctxGet(ctx, 1);
  // TODO: check the argument to be a generator.
  struct Generator* gen = ptr(tmp);
  if (gen->state == stateSpawn) {
    g = gen;
    swapcontext(&uctx, &gen->ctx);
    ctxReturn(ctx, retval);
  } else if (gen->state == statePending) {
    g = gen;
    swapcontext(&uctx, &gen->ctx);
    ctxReturn(ctx, retval);
  } else if (gen->state == stateDead) {
    // Return error if the statue is 
    g = gen;
    ctxReturn(ctx, Undef);
  }
}

static void
builtinYield(struct controlFlow *ctx) {
  retval = ctxGet(ctx, 1);
  struct Generator *gen = g;
  gen->state = statePending;
  swapcontext(&gen->ctx, &uctx);
  ctxReturn(ctx, Nil);
}

static void
builtinGeneratorStatus(struct controlFlow *ctx) {
  Obj tmp = ctxGet(ctx, 1);
  struct Generator *gen = ptr(tmp);
  ctxReturn(ctx, gen->state);
}

static void
initGenerator() {
  stateSpawn = makeSymbol("spawn");
  statePending = makeSymbol("pending");
  stateDead = makeSymbol("dead");
}

struct registModule generatorModule = {
				       initGenerator,
				       {
					{"generator-new", builtinGeneratorNew, 1},
					{"resume", builtinResume, 1},
					{"yield", builtinYield, 1},
					{"generator-status", builtinGeneratorStatus, 1},
					{NULL, NULL, 0}
				       }
};
