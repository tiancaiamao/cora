#include "runtime.h"
#include <stdlib.h>

static void clofun225 (struct VM* m);
static void clofun222 (struct VM* m);
static void clofun223 (struct VM* m);
static void clofun224 (struct VM* m);


static void
clofun225 (struct VM* m) {
Obj reg226 = makeClosure(clofun222, 0);
Obj reg227 = intern("recur");
Obj reg228 = symbolSet(reg227, reg226);
m->stack[0] = reg228;
m->pc = NULL;
return;
}
static void
clofun222 (struct VM* m) {
Obj reg230 = m->stack[0];
Obj reg231 = m->stack[1];
Obj reg232 = m->stack[2];
Obj reg233 = m->stack[3];
Obj reg234 = makeClosure(clofun223, 2, reg233, reg232);
Obj reg235 = 0;
Obj reg236 = PrimEqual(reg235, reg233);
if (reg236 == True) {
m->pc = closureFn(reg231);
m->stack[0] = reg231;
m->stack[1] = reg232;
return;
} else {
m->pc = closureFn(reg234);
m->stack[0] = reg234;
m->stack[1] = reg231;
return;
}
}
static void
clofun223 (struct VM* m) {
Obj reg240 = m->stack[0];
Obj reg241 = m->stack[1];
Obj reg242 = makeClosure(clofun224, 0);
Obj reg243 = closureRef(reg240, 1);
Obj reg244 = 2;
Obj reg245 = reg243 + reg244;
Obj reg246 = closureRef(reg240, 0);
Obj reg247 = 2;
Obj reg248 = reg246 - reg247;
Obj reg249 = symbolGet(intern("recur"));
m->pc = closureFn(reg249);
Obj reg250 = symbolGet(intern("recur"));
m->stack[0] = reg250;
m->stack[1] = reg241;
m->stack[2] = reg245;
m->stack[3] = reg248;
return;
}
static void
clofun224 (struct VM* m) {
Obj reg252 = m->stack[0];
Obj reg253 = m->stack[1];
Obj reg254 = symbolGet(intern("error"));
m->pc = closureFn(reg254);
Obj reg255 = symbolGet(intern("error"));
Obj reg256 = makeString("no match-help found!", 20);
m->stack[0] = reg255;
m->stack[1] = reg253;
m->stack[2] = reg256;
return;
}

void
clofun_recur (struct VM* m) {
  clofun225 (m);
}
