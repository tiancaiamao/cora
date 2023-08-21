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
#include <stdlib.h>
#include <pwd.h>
#include <unistd.h>

/* void */
/* builtinMod(struct VM *vm) { */
/*   Obj y = pop(vm); */
/*   Obj x = pop(vm); */
/*   assert(isfixnum(x)); */
/*   assert(isfixnum(y)); */
/*   vm->val = makeNumber(fixnum(x) % fixnum(y)); */
/* } */

/* void */
/* builtinDiv(struct VM *vm) { */
/*   Obj x = pop(vm); */
/*   Obj y = pop(vm); */
/*   assert(isfixnum(x)); */
/*   assert(isfixnum(y)); */
/*   Obj ret = makeNumber(fixnum(x) / (fixnum(y))); */
/*   vm->val = ret; */
/* } */

void
builtinSymbolToString(void *pc, Obj val, struct VM *vm, int pos) {
  Obj sym = vmGet(vm, 1);
  const char* str = symbolStr(sym);
  val = makeString(str, strlen(str)+1);
  vmReturn(vm, val);
}

void
primLoad(struct VM *vm, str path, str pkg) {
  FILE *in = fopen(path.str, "r");
  if (in == NULL) {
    // TODO: exception?
    assert("wrong path");
  }

  struct SexpReader r = {.pkgMapping = Nil, .selfPath = pkg.str};
  int err = 0;
  Obj ast = sexpRead(&r, in, &err);
  while(err == 0) {
    /* printf("========================================= read == \n"); */
    /* sexpWrite(stdout, ast); */
    /* printf("\n"); */
    Obj exp = macroExpand(vm, ast);

    /* printObj(stdout, exp); */
    /* printf("\n"); */

    eval(vm, exp);
    ast = sexpRead(&r, in, &err);
  }
  fclose(in);
}

void
builtinLoad(void *pc, Obj val, struct VM *vm, int pos) {
  Obj path = vmGet(vm, 1);
  Obj pkg = vmGet(vm, 2);
  primLoad(vm, toStr(stringStr(path)), toStr(stringStr(pkg)));
  vmReturn(vm, path);
}

/* void */
/* builtinLoadSo(struct VM *vm) { */
/*   Obj path = pop(vm); */
/*   strBuf str = stringStr(path); */
/*   primLoadSo(vm, toCStr(str)); */
/* } */

/* void */
/* primLoadSo(struct VM *vm, char* path) { */
/*   void *handle = dlopen(path, RTLD_LAZY); */
/*   if (!handle) { */
/*     fprintf(stderr, "%s\n", dlerror()); */
/*     vmReturn(vm, makeNumber(-1)); */
/*     return; */
/*   } */

/*   InstrFunc entry = dlsym(handle, "__entry"); */
/*   char *error = dlerror(); */
/*   if (error != NULL) { */
/*     // TODO */
/*     vmReturn(vm, makeString(error, strlen(error))); */
/*     return; */
/*   } */

/*   /\* Call(1, makeNative(entry, 1, 0)); *\/ */
/*   /\* ctxReturn(ctx, path); *\/ */
/*   run(vm, entry); */
/* } */

void
builtinIsNumber(void *pc, Obj val, struct VM *vm, int pos) {
  Obj x = vmGet(vm, 1);
  if (isfixnum(x)) {
    vmReturn(vm, True);
    return;
  }
  if (tag(x) == TAG_PTR) {
    scmHead* h = ptr(x);
    if (h->type == scmHeadNumber) {
      vmReturn(vm, True);
      return;
    }
  }
  vmReturn(vm, False);
}


void
builtinMakeVector(void *pc, Obj val, struct VM *vm, int pos) {
  Obj x = vmGet(vm, 1);
  assert(isfixnum(x));
  val = makeVector(fixnum(x));
  vmReturn(vm, val);
}

void
builtinVectorSet(void *pc, Obj val, struct VM *vm, int pos) {
  Obj vec = vmGet(vm, 1);
  Obj idx = vmGet(vm, 2);
  Obj v = vmGet(vm, 3);
  assert(isfixnum(idx));
  Obj ret = vectorSet(vec, fixnum(idx), v);
  vmReturn(vm, ret);
}

void
builtinVectorRef(void *pc, Obj val, struct VM *vm, int pos) {
  Obj vec = vmGet(vm, 1);
  Obj idx = vmGet(vm, 2);
  assert(isfixnum(idx));
  val = vectorRef(vec, fixnum(idx));
  vmReturn(vm, val);
}

void builtinIsVector(void *pc, Obj val, struct VM *vm, int pos) {
  Obj o = vmGet(vm, 1);
  if (isvector(o)) {
    vmReturn(vm, True);
  } else {
    vmReturn(vm, False);
  }
}

void
builtinIntern(void *pc, Obj val, struct VM *vm, int pos) {
  Obj x = vmGet(vm, 1);
  assert(isstring(x));
  val = intern(toCStr(stringStr(x)));
  vmReturn(vm, val);
}

strBuf
getCoraPath() {
  strBuf tmp = strNew(512);
  char* coraPath = getenv("CORAPATH");
  if (coraPath == NULL) {
    struct passwd* pw = getpwuid(getuid());
    const char* homeDir = pw->pw_dir;
    tmp = strCpy(tmp, cstr(homeDir));
    tmp = strCat(tmp, cstr("/.corapath/"));
  } else {
    tmp = strCpy(tmp, cstr(coraPath));
    if (toCStr(tmp)[strLen(toStr(tmp))-1] != '/') {
      tmp = strCat(tmp, cstr("/"));
    }
  }
  return tmp;
}

void
builtinImport(void *pc, Obj val, struct VM *vm, int pos) {
  Obj pkg = vmGet(vm, 1);
  str pkgStr = toStr(stringStr(pkg));
  Obj sym = intern("*imported*");
  Obj imported = symbolGet(sym);
  // Avoid repeated load.
  for (Obj p = imported; p != Nil; p = cdr(p)) {
    Obj elem = car(p);
    if (eq(car(elem), pkg)) {
      vmReturn(vm, sym);
      return;
    }
  }

  // CORA PATH
  strBuf tmp = getCoraPath();

  // TODO: also consider the .so file
  tmp = strCat(tmp, pkgStr);
  tmp = strCat(tmp, cstr(".so"));
  if (0 == access(toCStr(tmp), R_OK)) {
    /* primLoadSo(ctx, toCStr(tmp)); */
    assert(false);
  } else {
    tmp = strShrink(tmp, 3);
    tmp = strCat(tmp, cstr(".cora"));
    primLoad(vm, toStr(tmp), pkgStr);
  }
  strFree(tmp);

  // Set the *imported* variable to avlid repeated load.
  symbolSet(sym, cons(cons(pkg, Nil), imported));
  vmReturn(vm, pkg);
}
