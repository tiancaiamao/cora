#ifndef _RUNTIME_H_
#define _RUNTIME_H_

#include "types.h"
#include "reader.h"

Obj ctxGet(struct controlFlow *ctx, int n);
Obj ctxSet(struct controlFlow *ctx, int n, Obj x);
Obj ctxResize(struct controlFlow *ctx, int n);
void ctxAppend(struct controlFlow *ctx, Obj o);
void ctxReturn(struct controlFlow *ctx, Obj val);
Obj Call(Obj f, Obj arg);

#endif
