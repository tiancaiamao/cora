#ifndef _RUNTIME_H_
#define _RUNTIME_H_

#include "types.h"
#include "reader.h"

Obj ctxGet(struct controlFlow *ctx, int n);
Obj ctxSet(struct controlFlow *ctx, int n, Obj x);

void ctxReturn(struct controlFlow *ctx, Obj val);
Obj Call(Obj f, Obj arg);

struct slice;
void sliceReset(struct slice *s);
void sliceAppend(struct slice *s, Obj o);

#endif
