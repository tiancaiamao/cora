#include "types.h"
#include "runtime1.h"

static void clofun0(struct Cora* co, int label, Obj *R);


static __thread Obj* __symbolTable;

void entry(struct Cora *co, int label, Obj *R) {
__symbolTable = (Obj*)malloc(sizeof(Obj) * 1);
__symbolTable[0] = intern("cora/lib/toc1#compile-to-c");
co->ctx.fn = clofun0;
co->ctx.label = 0;
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall2(co, globalRef(__symbolTable[0]), makeCString("lib/eval.cora"), makeCString("test1.c"));
return;
}
}
}

