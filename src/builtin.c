#include "types.h"
#include "builtin.h"
#include "reader.h"
#include "vm.h"
#include <string.h>
#include <stdio.h>
#include <dlfcn.h>
#include <alloca.h>
#include <stdlib.h>
#include <pwd.h>
#include <unistd.h>

void
builtinMod(struct VM *vm) {
  Obj x = vmGet(vm, 1);
  Obj y = vmGet(vm, 2);
  assert(isfixnum(x));
  assert(isfixnum(y));
  vmReturn(vm, makeNumber(fixnum(x) % (fixnum(y))));
}

void
builtinSymbolToString(struct VM *vm) {
  Obj sym = vmGet(vm, 1);
  const char* str = symbolStr(sym);
  Obj val = makeString(str, strlen(str));
  vmReturn(vm, val);
}

void
builtinStringLength(struct VM *vm) {
  Obj str = vmGet(vm, 1);
  int l = stringLen(str);
  vmReturn(vm, makeNumber(l));
}

void
builtinStringAppend(struct VM *vm) {
  Obj str1 = vmGet(vm, 1);
  Obj str2 = vmGet(vm, 2);
  strBuf x = stringStr(str1);
  strBuf y = stringStr(str2);
  strBuf tmp = strNew(strLen(toStr(x)) + strLen(toStr(y)));
  tmp = strCpy(tmp, toStr(x));
  tmp = strCat(tmp, toStr(y));
  Obj val = makeString(toCStr(tmp), strLen(toStr(tmp)));
  vmReturn(vm, val);
}

/* void */
/* builtinValue(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj sym = vmGet(vm, 1); */
/*   struct trieNode* s = ptr(sym); */
/*   Obj ret = s->value; */
/*   if (ret == Undef) { */
/*     printf("undefined value: %s\n", s->sym); */
/*     assert(false); */
/*   } */
/*   vmReturn(vm, ret); */
/* } */

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
builtinLoad(struct VM *vm) {
  Obj path = vmGet(vm, 1);
  Obj pkg = vmGet(vm, 2);
  primLoad(vm, toStr(stringStr(path)), toStr(stringStr(pkg)));
  vmReturn(vm, path);
}


void
primLoadSo(struct VM *vm, char* path) {
  // primLoadSo is a bit special, it requires the current stack of VM is
  // (load-so "file-path.so" "package-path")
  void *handle = dlopen(path, RTLD_LAZY);
  if (!handle) {
    fprintf(stderr, "%s\n", dlerror());
    vmReturn(vm, makeNumber(-1));
    return;
  }

  nativeFn* entry = dlsym(handle, "__entry");
  char *error = dlerror();
  if (error != NULL) {
    // TODO
    vmReturn(vm, makeString(error, strlen(error)));
    return;
  }

  /* Call(1, makeNative(entry, 1, 0)); */
  /* ctxReturn(ctx, path); */
  trampoline(vm, entry);
}

void
builtinLoadSo(struct VM *vm) {
  Obj path = vmGet(vm, 1);
  strBuf str = stringStr(path);
  primLoadSo(vm, toCStr(str));
}

void
builtinIsNumber(struct VM *vm) {
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
builtinMakeVector(struct VM *vm) {
  Obj x = vmGet(vm, 1);
  assert(isfixnum(x));
  Obj val = makeVector(fixnum(x));
  vmReturn(vm, val);
}

void
builtinVectorSet(struct VM *vm) {
  Obj vec = vmGet(vm, 1);
  Obj idx = vmGet(vm, 2);
  Obj v = vmGet(vm, 3);
  assert(isfixnum(idx));
  Obj ret = vectorSet(vec, fixnum(idx), v);
  vmReturn(vm, ret);
}

void
builtinVectorRef(struct VM *vm) {
  Obj vec = vmGet(vm, 1);
  Obj idx = vmGet(vm, 2);
  assert(isfixnum(idx));
  Obj val = vectorRef(vec, fixnum(idx));
  vmReturn(vm, val);
}

void builtinIsVector(struct VM *vm) {
  Obj o = vmGet(vm, 1);
  if (isvector(o)) {
    vmReturn(vm, True);
  } else {
    vmReturn(vm, False);
  }
}

void
builtinIntern(struct VM *vm) {
  Obj x = vmGet(vm, 1);
  assert(isstring(x));
  Obj val = intern(toCStr(stringStr(x)));
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
builtinImport(struct VM *vm) {
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

  tmp = strCat(tmp, pkgStr);
  tmp = strCat(tmp, cstr(".so"));
  if (0 == access(toCStr(tmp), R_OK)) {
    // primLoadSo is a bit special, it requires the current stack of VM is
    // (load-so "file-path.so" "package-path")
    vm->stack[vm->base+2] = pkg;
    primLoadSo(vm, toCStr(tmp));
    return;
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

int
loadByteCode(struct VM *vm, str path) {
  FILE *in = fopen(path.str, "r");
  if (in == NULL) {
    assert("wrong path");
  }
  struct SexpReader r = {.pkgMapping = Nil, .selfPath = ""};
  int err = 0;
  Obj ast = sexpRead(&r, in, &err);
  while(ast != Nil) {
    /* printf("========================================= read == \n"); */
    Obj code = car(ast);
    run(vm, code);
    ast = cdr(ast);
  }
  return 0;
}

Obj
eval(struct VM *vm, Obj exp) {
  // call (cora/lib/compile.cc exp) to generate the bytecode
  Obj compile = symbolGet(makeSymbol("cora/lib/compile.cc"));
  vmPush(vm, compile);
  vmPush(vm, exp);
  Obj res = vmCall(vm, 2);
  return run(vm, res);
}

Obj
macroExpand(struct VM *vm, Obj exp) {
  Obj val = symbolGet(symMacroExpand);
  if (val == Nil || val == Undef) {
    return exp;
  }
  vmPush(vm, val);
  vmPush(vm, exp);
  return vmCall(vm, 2);
}

void
builtinReadFileAsSexp(struct VM *vm) {
  Obj arg = vmGet(vm, 1);
  assert(isstring(arg));
  char* fileName = toCStr(stringStr(arg));
  FILE* f = fopen(fileName, "r");
  if (f == NULL) {
    printf("open file fail %s\n", fileName);
    goto exit0;
  }

  Obj pkg = vmGet(vm, 2);
  char *selfPath = toCStr(stringStr(pkg));
  struct SexpReader r = {.pkgMapping = Nil, .selfPath = selfPath};
  int err = 0;
  Obj result = Nil;
  int count = 0;
  while(true) {
    Obj ast = sexpRead(&r, f, &err);
    if (err != 0) {
      break;
    }
    result = cons(ast, result);
    count++;
  }
  if (count > 1) {
    result = reverse(result);
    result = cons(makeSymbol("begin"), result);
  } else {
    result = car(result);
  }
  fclose(f);

 exit0:
  vmReturn(vm, result);
}

void writeSexpToFile(struct VM *vm) {
  Obj path = vmGet(vm, 1);
  Obj exp = vmGet(vm, 2);
  strBuf pathStr = stringStr(path);
  FILE* f = fopen(toCStr(pathStr), "w");
  /* printObj(stdout, exp); */
  printObj(f, exp);
  fclose(f);
  vmReturn(vm, Nil);
}

/* void */
/* builtinReadSexp(void *pc, Obj val, struct VM *vm, int pos) { */
/*   struct SexpReader r; */
/*   int errCode; */
/*   Obj x = sexpRead(&r, stdin, &errCode); */
/*   vmReturn(vm, x); */
/* } */
