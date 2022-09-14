#include "types.h"
#include "builtin.h"
#include "vm.h"
#include "reader.h"
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

void
builtinMod(struct VM *vm) {
  Obj y = pop(vm);
  Obj x = pop(vm);
  assert(isfixnum(x));
  assert(isfixnum(y));
  vm->val = makeNumber(fixnum(x) % fixnum(y));
}

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

void
builtinGT(struct VM *vm) {
  Obj y = pop(vm);
  Obj x = pop(vm);
  assert(isfixnum(x));
  assert(isfixnum(y));
  if (fixnum(x) > fixnum(y)) {
    vm->val = True;
  } else {
    vm->val = False;
  }
}

void
builtinLT(struct VM *vm) {
  Obj y = pop(vm);
  Obj x = pop(vm);
  assert(isfixnum(x));
  assert(isfixnum(y));
  if (fixnum(x) < fixnum(y)) {
    vm->val = True;
  } else {
    vm->val = False;
  }
}

void
builtinSet(struct VM *vm) {
  Obj val = pop(vm);
  Obj sym = pop(vm);
  assert(issymbol(sym));
  symbolSet(sym, val);
  vm->val = val;
}

void
builtinValue(struct VM *vm) {
  Obj sym = pop(vm);
  Obj val = symbolGet(sym);
  if (val == Undef) {
    /* longjmp(coraREPL, 1); */
    // TODO: panic?
    assert(false);
  }
  vm->val = val;
}

void
builtinCons(struct VM *vm) {
  Obj y = pop(vm);
  Obj x = pop(vm);
  vm->val = cons(x, y);
}

void
builtinCar(struct VM *vm) {
  Obj tmp = pop(vm);
  assert(iscons(tmp));
  vm->val = car(tmp);
}

void
builtinCdr(struct VM *vm) {
  Obj tmp = pop(vm);
  assert(iscons(tmp));
  vm->val = cdr(tmp);
}

void
builtinIsCons(struct VM *vm) {
  Obj tmp = pop(vm);
  if (iscons(tmp)) {
    vm->val = True;
  } else {
    vm->val = False;
  }
}

static uint64_t genIdx = 0;

void
builtinGensym(struct VM *vm) {
  Obj arg = pop(vm);
  assert(issymbol(arg));
  char tmp[200];
  snprintf(tmp, 100, "#%s%ld", symbolStr(arg), genIdx);
  genIdx++;
  vm->val = intern(tmp);
}

void
builtinNot(struct VM *vm) {
  Obj tmp = pop(vm);
  assert(isboolean(tmp));
  if (tmp == True) {
    vm->val = False;
  } else {
    vm->val =  True;
  }
}

void
builtinIsSymbol(struct VM *vm) {
  Obj tmp = pop(vm);
  if (issymbol(tmp)) {
    vm->val = True;
  } else {
    vm->val = False;
  }
}

void
builtinSymbolToString(struct VM* vm) {
  Obj sym = pop(vm);
  const char* str = symbolStr(sym);
  vm->val = makeString(str, strlen(str)+1);
}

void
builtinIsString(struct VM *vm) {
  Obj o = pop(vm);
  if (isstring(o)) {
    vm->val = True;
  } else {
    vm->val = False;
  }
}


Obj macroExpand(struct VM *vm, Obj exp);
Obj eval(struct VM *vm, Obj exp);

void
builtinLoad(struct VM *vm) {
  Obj path = pop(vm);
  char *str = stringStr(path);
  FILE *in = fopen(str, "r");
  if (in == NULL) {
    // TODO: exception?
    assert("wrong path");
  }

  vm->gcSave = vm->pcData;

  int err = 0;
  Obj ast = sexpRead(in, &err);
  while(err == 0) {
    printf("========================================= read == \n");
    sexpWrite(stdout, ast);
    printf("\n");
    Obj exp = macroExpand(vm, ast);
    eval(vm, exp);
    ast = sexpRead(in, &err);
  }
  fclose(in);
  vm->val = path;

  vm->gcSave = NULL;
}

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

void
builtinIsNumber(struct VM* vm) {
  Obj x = pop(vm);
  if (isfixnum(x)) {
    vm->val = True;
    return;
  }
  if (tag(x) == TAG_PTR) {
    scmHead* h = ptr(x);
    if (h->type == scmHeadNumber) {
      vm->val = True;
      return;
    }
  }
  vm->val = False;
}


void
builtinMakeVector(struct VM *vm) {
  Obj x = pop(vm);
  assert(isfixnum(x));
  vm->val = makeVector(fixnum(x));
}

void
builtinVectorSet(struct VM *vm) {
  Obj val = pop(vm);
  Obj idx = pop(vm);
  Obj vec = pop(vm);
  assert(isfixnum(idx));
  Obj ret = vectorSet(vec, fixnum(idx), val);
  vm->val = ret;
}

void
builtinVectorRef(struct VM *vm) {
  Obj idx = pop(vm);
  Obj vec = pop(vm);
  assert(isfixnum(idx));
  vm->val = vectorRef(vec, fixnum(idx));
}

void
builtinIsVector(struct VM *vm) {
  Obj o = pop(vm);
  if (isvector(o)) {
    vm->val = True;
  } else {
    vm->val = False;
  }
}

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

void
builtinIntern(struct VM *vm) {
  Obj x = pop(vm);
  assert(isstring(x));
  vm->val = intern(stringStr(x));
}
