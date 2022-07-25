#include "types.h"
#include "builtin.h"
#include "vm.h"
#include <string.h>
#include <stdio.h>
#include <assert.h>
#include <dlfcn.h>
#include <alloca.h>
#include <assert.h>

void
builtinAdd(struct VM *vm) {
  Obj x = pop(vm);
  Obj y = pop(vm);
  assert(isfixnum(x));
  assert(isfixnum(y));
  vm->val = makeNumber(fixnum(x) + fixnum(y));
}

/* void */
/* builtinMod(struct VM *ctx) { */
/*   Obj x = ctxGet(ctx, 1); */
/*   Obj y = ctxGet(ctx, 2); */
/*   assert(isfixnum(x)); */
/*   assert(isfixnum(y)); */
/*   Obj ret = makeNumber(fixnum(x) % fixnum(y)); */
/*   ctxReturn(ctx, ret); */
/* } */

void
builtinEqual(struct VM *vm) {
  Obj a = pop(vm);
  Obj b = pop(vm);

  if (eq(a, b)) {
    vm->val = True;
  } else {
    vm->val = False;
  }
}

void
builtinMul(struct VM *vm) {
  Obj x = pop(vm);
  Obj y = pop(vm);
  assert(isfixnum(x));
  assert(isfixnum(y));
  vm->val = makeNumber(fixnum(x) * fixnum(y));
}

void
builtinSub(struct VM *vm) {
  Obj x = pop(vm);
  Obj y = pop(vm);
  assert(isfixnum(x));
  assert(isfixnum(y));
  Obj ret = makeNumber(fixnum(y) - (fixnum(x)));
  vm->val = ret;
}

void
builtinDiv(struct VM *vm) {
  Obj x = pop(vm);
  Obj y = pop(vm);
  assert(isfixnum(x));
  assert(isfixnum(y));
  Obj ret = makeNumber(fixnum(x) / (fixnum(y)));
  vm->val = ret;
}

/* void */
/* builtinGT(struct VM *ctx) { */
/*   Obj x = ctxGet(ctx, 1); */
/*   Obj y = ctxGet(ctx, 2); */
/*   assert(isfixnum(x)); */
/*   assert(isfixnum(y)); */
/*   if (fixnum(x) > fixnum(y)) { */
/*     ctxReturn(ctx, True); */
/*   } */
/*   ctxReturn(ctx, False); */
/* } */

/* void */
/* builtinLT(struct VM *ctx) { */
/*   Obj x = ctxGet(ctx, 1); */
/*   Obj y = ctxGet(ctx, 2); */
/*   assert(isfixnum(x)); */
/*   assert(isfixnum(y)); */
/*   if (fixnum(x) < fixnum(y)) { */
/*     ctxReturn(ctx, True); */
/*   } */
/*   ctxReturn(ctx, False); */
/* } */

void
builtinSet(struct VM *vm) {
  Obj val = pop(vm);
  Obj sym = pop(vm);
  assert(issymbol(sym));
  symbolSet(sym, val);
  vm->val = val;
}

/* void */
/* builtinValue(struct VM *ctx) { */
/*   Obj sym = ctxGet(ctx, 1); */
/*   assert(issymbol(sym)); */
/*   Obj val = symbolGet(sym); */
/*   if (val == Undef) { */
/*     /\* longjmp(coraREPL, 1); *\/ */
/*     // TODO: panic? */
/*   } */
/*   ctxReturn(ctx, val); */
/* } */

/* void */
/* builtinCons(struct VM *ctx) { */
/*   Obj x = ctxGet(ctx, 1); */
/*   Obj y = ctxGet(ctx, 2); */
/*   ctxReturn(ctx, cons(x, y)); */
/* } */

/* void */
/* builtinCar(struct VM *ctx) { */
/*   assert(iscons(ctxGet(ctx, 1))); */
/*   ctxReturn(ctx, car(ctxGet(ctx, 1))); */
/* } */

/* void */
/* builtinCdr(struct VM *ctx) { */
/*   assert(iscons(ctxGet(ctx, 1))); */
/*   ctxReturn(ctx, cdr(ctxGet(ctx, 1))); */
/* } */

/* void */
/* builtinIsCons(struct VM *ctx) { */
/*   if (iscons(ctxGet(ctx, 1))) { */
/*     ctxReturn(ctx, True); */
/*   } */
/*   ctxReturn(ctx, False); */
/* } */

/* static uint64_t genIdx = 0; */

/* void */
/* builtinGensym(struct VM *ctx) { */
/*   Obj arg = ctxGet(ctx, 1); */
/*   assert(issymbol(arg)); */
/*   char tmp[200]; */
/*   snprintf(tmp, 100, "#%s%ld", symbolStr(arg), genIdx); */
/*   genIdx++; */
/*   ctxReturn(ctx, intern(tmp)); */
/* } */

/* void */
/* builtinNot(struct VM *ctx) { */
/*   assert(isboolean(ctxGet(ctx, 1))); */
/*   if (ctxGet(ctx, 1) == True) { */
/*     ctxReturn(ctx, False); */
/*   } */
/*   ctxReturn(ctx, True); */
/* } */

/* void */
/* builtinIsSymbol(struct VM *ctx) { */
/*   if (issymbol(ctxGet(ctx, 1))) { */
/*     ctxReturn(ctx, True); */
/*   } */
/*   ctxReturn(ctx, False); */
/* } */

/* void */
/* builtinSymbolToString(struct VM* ctx) { */
/*   Obj sym = ctxGet(ctx, 1); */
/*   const char* str = symbolStr(sym); */
/*   ctxReturn(ctx, makeString(str, strlen(str)+1)); */
/* } */

/* void */
/* builtinIsString(struct VM *ctx) { */
/*   Obj o = ctxGet(ctx, 1); */
/*   if (isstring(o)) { */
/*     ctxReturn(ctx, True); */
/*   } */
/*   ctxReturn(ctx, False); */
/* } */

/* void */
/* builtinLoad(struct VM *ctx) { */
/*   Obj path = ctxGet(ctx, 1); */
/*   char *str = stringStr(path); */
/*   FILE *in = fopen(str, "r"); */
/*   if (in == NULL) { */
/*     // TODO: exception? */
/*     ctxReturn(ctx, intern("error")); */
/*   } */
/*   int err = 0; */
/*   Obj ast = sexpRead(in, &err); */
/*   while(err == 0) { */
/*     /\* printf("read == \n"); *\/ */
/*     /\* sexpWrite(stdout, ast); *\/ */
/*     /\* printf("\n"); *\/ */
/*     Obj exp = MacroExpand(ast); */
/*     Eval(exp, Nil); */
/*     ast = sexpRead(in, &err); */
/*   } */
/*   fclose(in); */
/*   ctxReturn(ctx, path); */
/* } */

/* void */
/* builtinLoadSo(struct VM *ctx) { */
/*   Obj path = ctxGet(ctx, 1); */
/*   char *str = stringStr(path); */
/*   void *handle = dlopen(str, RTLD_LAZY); */
/*   if (!handle) { */
/*     fprintf(stderr, "%s\n", dlerror()); */
/*     ctxReturn(ctx, makeNumber(-1)); */
/*   } */

/*   nativeFuncPtr entry = dlsym(handle, "entry"); */
/*   char *error = dlerror(); */
/*   if (error != NULL) { */
/*     // TODO */
/*     ctxReturn(ctx, makeString(error, strlen(error))); */
/*   } */

/*   Call(1, makeNative(entry, 1, 0)); */
/*   ctxReturn(ctx, path); */
/* } */

/* void */
/* builtinIsNumber(struct VM* ctx) { */
/*   Obj x = ctxGet(ctx, 1); */
/*   if (isfixnum(x)) { */
/*     ctxReturn(ctx, True); */
/*   } */
/*   if (tag(x) == TAG_PTR) { */
/*     scmHead* h = ptr(x); */
/*     if (h->type == scmHeadNumber) { */
/*       ctxReturn(ctx, True); */
/*     } */
/*   } */
/*   ctxReturn(ctx, False); */
/* } */


/* void */
/* builtinMakeVector(struct VM *ctx) { */
/*   Obj x = ctxGet(ctx, 1); */
/*   assert(isfixnum(x)); */
/*   ctxReturn(ctx, makeVector(fixnum(x))); */
/* } */

/* void */
/* builtinVectorSet(struct VM *ctx) { */
/*   Obj vec = ctxGet(ctx, 1); */
/*   Obj idx = ctxGet(ctx, 2); */
/*   Obj val = ctxGet(ctx, 3); */
/*   assert(isfixnum(idx)); */
/*   Obj ret = vectorSet(vec, fixnum(idx), val); */
/*   ctxReturn(ctx, ret); */
/* } */

/* void */
/* builtinVectorRef(struct VM *ctx) { */
/*   Obj vec = ctxGet(ctx, 1); */
/*   Obj idx = ctxGet(ctx, 2); */
/*   assert(isfixnum(idx)); */
/*   ctxReturn(ctx, vectorRef(vec, fixnum(idx))); */
/* } */

/* void */
/* builtinIsVector(struct VM *ctx) { */
/*   Obj o = ctxGet(ctx, 1); */
/*   if (isvector(o)) { */
/*     ctxReturn(ctx, True); */
/*   } */
/*   ctxReturn(ctx, False); */
/* } */

/* void */
/* builtinNumberToString(struct VM *ctx) { */
/* 	Obj n = ctxGet(ctx, 1); */
/* 	assert(isfixnum(n)); */

/* 	char tmp[32]; */
/* 	int l = snprintf(tmp, 32, "%ld", fixnum(n)); */
/*  	ctxReturn(ctx, makeString(tmp, l)); */
/* } */

/* void */
/* builtinStringAppend(struct VM *ctx) { */
/* 	Obj x = ctxGet(ctx, 1); */
/* 	Obj y = ctxGet(ctx, 2); */
/* 	assert(isstring(x)); */
/* 	assert(isstring(y)); */
/* 	char *x1 = stringStr(x); */
/* 	char *y1 = stringStr(y); */
/* 	int len = strlen(x1) + strlen(y1); */
/* 	char *dest = alloca(len + 1); */
/* 	strcpy(dest, x1); */
/* 	strcat(dest, y1); */
/* 	ctxReturn(ctx, makeString(dest, len)); */
/* } */

/* void */
/* builtinIntern(struct VM *ctx) { */
/* 	Obj x = ctxGet(ctx, 1); */
/* 	assert(isstring(x)); */
/* 	ctxReturn(ctx, intern(stringStr(x))); */
/* } */
