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

void
builtinAdd(struct VM *vm) {
  Obj x = pop(vm);
  Obj y = pop(vm);
  assert(isfixnum(x));
  assert(isfixnum(y));
  vm->val = makeNumber(fixnum(x) + fixnum(y));
}

Obj primAdd(Obj x, Obj y) {
  assert(isfixnum(x));
  assert(isfixnum(y));
  return makeNumber(fixnum(x) + fixnum(y));
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
  vm->val = primEqual(a, b);
}

Obj
primEqual(Obj a, Obj b) {
  if (eq(a, b)) {
    return True;
  } else {
    return False;
  }
}

void
builtinMul(struct VM *vm) {
  Obj x = pop(vm);
  Obj y = pop(vm);
  vm->val = primMul(x, y);
}

Obj
primMul(Obj x, Obj y) {
  assert(isfixnum(x));
  assert(isfixnum(y));
  return makeNumber(fixnum(x) * fixnum(y));
}

void
builtinSub(struct VM *vm) {
  Obj x = pop(vm);
  Obj y = pop(vm);
  vm->val = primSub(y, x);
}

Obj
primSub(Obj x, Obj y) {
  assert(isfixnum(x));
  assert(isfixnum(y));
  return makeNumber(fixnum(x) - (fixnum(y)));
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
builtinCons(struct VM *vm) {
  Obj y = pop(vm);
  Obj x = pop(vm);
  vm->val = cons(x, y);
}

Obj
primCons(Obj x, Obj y) {
  return cons(x, y);
}

void
builtinCar(struct VM *vm) {
  Obj tmp = pop(vm);
  assert(iscons(tmp));
  vm->val = car(tmp);
}

Obj
primCar(Obj o) {
  assert(iscons(o));
  return car(o);
}

void
builtinCdr(struct VM *vm) {
  Obj tmp = pop(vm);
  assert(iscons(tmp));
  vm->val = cdr(tmp);
}

Obj
primCdr(Obj o) {
  assert(iscons(o));
  return cdr(o);
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

Obj primIsCons(Obj x) {
  if (iscons(x)) {
    return True;
  } else {
    return False;
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

Obj
primGensym(Obj sym) {
  assert(issymbol(sym));
  char tmp[200];
  snprintf(tmp, 100, "#%s%ld", symbolStr(sym), genIdx);
  genIdx++;
  return intern(tmp);
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

Obj
primNot(Obj x) {
  if (x == True) {
    return False;
  } else {
    return True;
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

Obj
primIsSymbol(Obj tmp) {
  if (issymbol(tmp)) {
    return True;
  } else {
    return False;
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

/* static char* */
/* stripFileExtension(char *str) { */
/*   int len = strlen(str); */
/*   int pos = len; */
/*   while (pos>0) { */
/*     if (str[pos] == '.') { */
/*       break; */
/*     } */
/*     pos--; */
/*   } */
/*   if (pos == 0) { */
/*     return ""; */
/*   } */

/*   char *ret = malloc(pos); */
/*   pos--; */
/*   ret[pos] = '\0'; */
/*   while(pos >= 0) { */
/*     ret[pos] = str[pos]; */
/*     pos--; */
/*   } */
/*   return ret; */
/* } */

void
primLoad(struct VM *vm, char *path, char *pkg) {
  FILE *in = fopen(path, "r");
  if (in == NULL) {
    // TODO: exception?
    assert("wrong path");
  }

  /* char* selfPath = stripFileExtension(str); */
  struct SexpReader r = {.pkgMapping = Nil, .selfPath = pkg};
  int err = 0;
  Obj ast = sexpRead(&r, in, &err);
  while(err == 0) {
    /* printf("========================================= read == \n"); */
    /* sexpWrite(stdout, ast); */
    /* printf("\n"); */
    Obj exp = macroExpand(vm, ast);

    vm->gcSave[1] = getScmHead(exp);
    /* vm->gcSave = vm->pcData; */

    eval(vm, exp);
    ast = sexpRead(&r, in, &err);
  }
  fclose(in);
}

void
builtinLoad(struct VM *vm) {
  Obj pkg = pop(vm);
  Obj path = pop(vm);
  strBuf str = stringStr(path);
  vm->gcSave[0] = vm->pcData;

  primLoad(vm, toCStr(str), toCStr(stringStr(pkg)));

  vm->val = path;
  vm->gcSave[0] = NULL;
  vm->gcSave[1] = NULL;
}

void
builtinLoadSo(struct VM *vm) {
  Obj path = pop(vm);
  strBuf str = stringStr(path);
  primLoadSo(vm, toCStr(str));
}

void
primLoadSo(struct VM *vm, char* path) {
  void *handle = dlopen(path, RTLD_LAZY);
  if (!handle) {
    fprintf(stderr, "%s\n", dlerror());
    vmReturn(vm, makeNumber(-1));
    return;
  }

  InstrFunc entry = dlsym(handle, "__entry");
  char *error = dlerror();
  if (error != NULL) {
    // TODO
    vmReturn(vm, makeString(error, strlen(error)));
    return;
  }

  /* Call(1, makeNative(entry, 1, 0)); */
  /* ctxReturn(ctx, path); */
  run(vm, entry);
}

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

void
builtinIntern(struct VM *vm) {
  Obj x = pop(vm);
  assert(isstring(x));
  vm->val = intern(toCStr(stringStr(x)));
}

extern void instrExitExec(struct VM *vm);
extern void opCall(struct VM *vm, int size, InstrFunc next, void* codeData);

void
builtinTryCatch(struct VM *vm) {
  Obj chunk = vmGet(vm, -2);

  // Save the old cont.
  // This save can make the chunk and handler available to the recovering process.
  vmSaveCont(vm, vm->pos, instrExitExec, NULL);

  // Prepare a new stack for the chunk to run.
  vm->data = (Obj*)malloc(sizeof(Obj)*2048);
  vm->base = 0;
  vm->pos = 0;

  // Call the chunk.
  push(vm, chunk);
  opCall(vm, 1, instrExitExec, NULL);
}

static void
continuationAsClosure(struct VM *vm) {
  // Replace the current stack with the delimited continuation.
  struct contStack* delimitedCC = vm->pcData;
  Obj val = vmGet(vm, 1);
  for (int i=0; i< delimitedCC->size; i++) {
    struct continuation cont = delimitedCC->data[i];
    contStackPush(&vm->contStack, cont);
  }
  vmReturn(vm, val);
}

void opExit(struct VM *vm);

void
builtinThrow(struct VM *vm) {
  Obj v = vmGet(vm, -1);

  // Delimited to the previous try-catch
  int p = vm->contStack.size - 1;
  while(p >=0) {
    struct continuation* cont = &vm->contStack.data[p];
    if (cont->s.data != vm->data) {
      break;
    }
    p--;
  }
  if (p < 0) {
    // TODO: panic, not in any try-catch block!
    assert(false);
  }

  struct contStack *delimitedCC = malloc(sizeof(struct contStack));
  delimitedCC->data = NULL;
  delimitedCC->size = 0;
  delimitedCC->cap = 0;
  
  // Now p point to the try-saved stack.
  // p+1 is the new stack.
  for (int i=p; i<vm->contStack.size; i++) {
    contStackPush(delimitedCC, vm->contStack.data[i]);
  }

  // Now that we get the current continuation, disguise as a closure.
  struct hashForObj h;
  Obj clo = makeClosure(1, continuationAsClosure, delimitedCC, Nil, h);

  // Reset the stack
  vm->contStack.size = p;
  struct continuation c = vm->contStack.data[p];
  vm->data = c.s.data;
  vm->base = c.s.base;
  vm->pos = c.s.pos;

  // Find the handler, invoke it, passing the continuation.
  Obj handler = vmGet(vm, -1);
  push(vm, handler);
  push(vm, v);
  push(vm, clo);
  opCall(vm, 3, opExit, NULL);
}

Obj
primSet(Obj x, Obj y) {
  symbolSet(x, y);
  return y;
}

void
builtinImport(struct VM *ctx) {
  Obj pkg = vmGet(ctx, 1);
  char *pkgStr = toCStr(stringStr(pkg));
  Obj sym = intern("*imported*");
  Obj imported = symbolGet(sym);
  // Avoid repeated load.
  for (Obj p = imported; p != Nil; p = cdr(p)) {
    Obj elem = car(p);
    if (eq(car(elem), pkg)) {
      vmReturn(ctx, sym);
      return;
    }
  }

  // CORA PATH
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

  // TODO: also consider the .so file
  tmp = strCat(tmp, cstr(pkgStr));
  tmp = strCat(tmp, cstr(".so"));
  if (0 == access(toCStr(tmp), R_OK)) {
    primLoadSo(ctx, toCStr(tmp));
  } else {
    tmp = strShrink(tmp, 3);
    tmp = strCat(tmp, cstr(".cora"));
    primLoad(ctx, toCStr(tmp), pkgStr);
  }
  strFree(tmp);

  // Set the *imported* variable to avlid repeated load.
  symbolSet(sym, cons(cons(pkg, Nil), imported));
  vmReturn(ctx, pkg);
}
