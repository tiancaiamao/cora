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

/* void */
/* builtinSymbolToString(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj sym = vmGet(vm, 1); */
/*   const char* str = symbolStr(sym); */
/*   val = makeString(vm, pos, str, strlen(str)); */
/*   vmReturn(vm, val); */
/* } */

/* void */
/* builtinStringLength(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj str = vmGet(vm, 1); */
/*   int l = stringLen(str); */
/*   vmReturn(vm, makeNumber(l)); */
/* } */

/* void */
/* builtinStringAppend(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj str1 = vmGet(vm, 1); */
/*   Obj str2 = vmGet(vm, 2); */
/*   strBuf x = stringStr(str1); */
/*   strBuf y = stringStr(str2); */
/*   strBuf tmp = strNew(strLen(toStr(x)) + strLen(toStr(y))); */
/*   tmp = strCpy(tmp, toStr(x)); */
/*   tmp = strCat(tmp, toStr(y)); */
/*   val = makeString(vm, pos, toCStr(tmp), strLen(toStr(tmp))); */
/*   vmReturn(vm, val); */
/* } */

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
  Obj path = vmPop(vm);
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

/* void */
/* builtinMakeVector(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj x = vmGet(vm, 1); */
/*   assert(isfixnum(x)); */
/*   val = makeVector(vm, pos, fixnum(x)); */
/*   vmReturn(vm, val); */
/* } */

/* void */
/* builtinVectorSet(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj vec = vmGet(vm, 1); */
/*   Obj idx = vmGet(vm, 2); */
/*   Obj v = vmGet(vm, 3); */
/*   assert(isfixnum(idx)); */
/*   Obj ret = vectorSet(vec, fixnum(idx), v); */
/*   vmReturn(vm, ret); */
/* } */

/* void */
/* builtinVectorRef(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj vec = vmGet(vm, 1); */
/*   Obj idx = vmGet(vm, 2); */
/*   assert(isfixnum(idx)); */
/*   val = vectorRef(vec, fixnum(idx)); */
/*   vmReturn(vm, val); */
/* } */

/* void builtinIsVector(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj o = vmGet(vm, 1); */
/*   if (isvector(o)) { */
/*     vmReturn(vm, True); */
/*   } else { */
/*     vmReturn(vm, False); */
/*   } */
/* } */

/* void */
/* builtinIntern(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj x = vmGet(vm, 1); */
/*   assert(isstring(x)); */
/*   val = intern(toCStr(stringStr(x))); */
/*   vmReturn(vm, val); */
/* } */

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

/* void */
/* builtinGenerateStr(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj to = vmGet(vm, 1); */
/*   FILE* out = mustCObj(to); */
/*   Obj exp = vmGet(vm, 2); */
/*   strBuf s = stringStr(exp); */
/*   fprintf(out, "%s", toCStr(s)); */
/*   vmReturn(vm, Nil); */
/* } */

/* void */
/* builtinGenerateSym(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj to = vmGet(vm, 1); */
/*   FILE* out = mustCObj(to); */
/*   Obj exp = vmGet(vm, 2); */
/*   const char* s = symbolStr(exp); */
/*   for (const char *p = s; *p != 0; p++) { */
/*     if ((*p >= 'a' && *p <= 'z') || */
/* 	(*p >= 'A' && *p <= 'Z') || */
/* 	(*p >= '0' && *p <= '9')) { */
/*       fprintf(out, "%c", *p); */
/*     } else if (*p == '_') { */
/*       fprintf(out, "__"); */
/*     } else { */
/*       fprintf(out, "_%d", *p); */
/*     } */
/*   } */
/*   vmReturn(vm, Nil); */
/* } */

/* void */
/* builtinGenerateNum(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj to = vmGet(vm, 1); */
/*   FILE* out = mustCObj(to); */
/*   Obj exp = vmGet(vm, 2); */
/*   fprintf(out, "%ld", fixnum(exp)); */
/*   vmReturn(vm, Nil); */
/* } */

/* void */
/* builtinOpenOutputFile(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj arg1 = vmGet(vm, 1); */
/*   strBuf filePath = stringStr(arg1); */
/*   FILE* f = fopen(toCStr(filePath), "w"); */
/*   vmReturn(vm, makeCObj(f)); */
/* } */

/* void */
/* builtinCloseOutputFile(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj arg1 = vmGet(vm, 1); */
/*   FILE *f = mustCObj(arg1); */
/*   int errno = fclose(f); */
/*   vmReturn(vm, makeNumber(errno)); */
/* } */

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
/* builtinDisplay(void *pc, Obj val, struct VM *vm, int pos) { */
/*   Obj arg = vmGet(vm, 1); */
/*   sexpWrite(stdout, arg); */
/*   vmReturn(vm, Nil); */
/* } */

/* void */
/* builtinReadSexp(void *pc, Obj val, struct VM *vm, int pos) { */
/*   struct SexpReader r; */
/*   int errCode; */
/*   Obj x = sexpRead(&r, stdin, &errCode); */
/*   vmReturn(vm, x); */
/* } */
