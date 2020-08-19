#ifndef _RUNTIME_H_
#define _RUNTIME_H_

#include <assert.h>
#include <setjmp.h>
#include "types.h"
#include "reader.h"

typedef enum {
  controlFlowReturn = 1,
  controlFlowEval,
  controlFlowApply,
} controlFlowKind;

#define CONTROL_CACHE_SIZE 8

// Expose struct controlFlow details in the head file is a not good practice.
// I do it because I want the ctxGet/ctxSet macros for the sake of performance.

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

#define ctxGet(ctx, n) (ctx->data[n])
#define ctxSet(ctx, idx, val) \
  do {assert((ctx)->size > idx); (ctx)->data[idx] = (val);} while (0)
#define ctxTailApply(ctx) \
  do {(ctx)->kind = controlFlowApply; return;} while (0)
#define ctxReturn(ctx, val) \
  do {(ctx)->kind=controlFlowReturn; (ctx)->size=1; (ctx)->data[0]=(val); return;} while (0)

void ctxResize(struct controlFlow *ctx, int n);
void ctxAppend(struct controlFlow *ctx, Obj o);

Obj Call(int nargs, ...);
Obj Eval(Obj exp, Obj env);
Obj MacroExpand(Obj exp);

void coraInit();

extern jmp_buf coraREPL;

struct registEntry {
  char *name;
  void (*func)(struct controlFlow *);
  int args;
};

struct registModule {
  void (*init)();
  struct registEntry entries[];
};

void registAPI(struct registModule *m);

#endif
