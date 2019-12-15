#ifndef _RUNTIME_H_
#define _RUNTIME_H_

#include "types.h"
#include "reader.h"

Obj ctxGet(struct controlFlow *ctx, int n);
void ctxSet(struct controlFlow *ctx, int n, Obj x);
void ctxResize(struct controlFlow *ctx, int n);
void ctxAppend(struct controlFlow *ctx, Obj o);
void ctxReturn(struct controlFlow *ctx, Obj val);

Obj Call(Obj sym, int nargs, ...);
Obj Eval(Obj exp, Obj env);

void coraInit();

#endif
