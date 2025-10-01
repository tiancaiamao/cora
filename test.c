#include "types.h"
#include "runtime1.h"

static void clofun3(struct Cora* co, int label, Obj *R);
static void clofun2(struct Cora* co, int label, Obj *R);
static void clofun1(struct Cora* co, int label, Obj *R);
static void clofun0(struct Cora* co, int label, Obj *R);


static __thread Obj* __symbolTable;

void entry(struct Cora *co) {
__symbolTable = (Obj*)malloc(sizeof(Obj) * 0);
struct frame1 curr = {
.fn = clofun3,
.label = 0,
.bp = co->ctx.sp,
};
co->ctx = curr;
}

static void clofun3(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
co->ctx.sp = R;
coraCall2(co, makeNative1(0, clofun2, 0, 0), MAKE_NUMBER(2), MAKE_NUMBER(3));
return;
}
}
}

static void clofun2(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
coraReturn(co, makeNative1(1, clofun1, 1, 0));
return;
}
}
}

static void clofun1(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj y = R[1];
coraReturn(co, makeNative1(1, clofun0, 1, 0));
return;
}
}
}

static void clofun0(struct Cora* co, int label, Obj *R) {
 switch (label) {
case 0:
{
Obj z = R[1];
coraReturn(co, z);
return;
}
}
}

