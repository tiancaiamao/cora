#include <sys/types.h>
#include <unistd.h>
#include <pwd.h>
#include <dlfcn.h>
#include <stdio.h>
#include "runtime.h"
#include "str.h"
#include "gc.h"

static void
saveToStack(struct callStack *cs, basicBlock pc, int base, int pos, Obj frees, Obj *stack) {
  if (cs->len + 1 >= cs->cap) {
    cs->cap = cs->cap * 2;
    void *newData = malloc(cs->cap*sizeof(struct returnAddr));
    memcpy(newData, cs->data, cs->len*sizeof(struct returnAddr));
    free(cs->data);
    cs->data = newData;
  }
  
  struct returnAddr *addr = &cs->data[cs->len];
  addr->pc = pc;
  addr->stk.stack = stack;
  addr->stk.base = base;
  addr->stk.pos = pos;
  addr->frees = frees;
  cs->len++;
  return;
}

void
coraCall(struct Cora *co, int nargs, ...) {
  co->nargs = nargs;
  va_list ap;
  va_start(ap, nargs);
  for (int i=0; i<nargs; i++) {
    co->args[i] = va_arg(ap, Obj);
  }
  va_end(ap);

  if (nativeRequired(co->args[0]) +1 == nargs) {
    co->pc = nativeFuncPtr(co->args[0]);
    co->frees = co->args[0];
  } else {
    co->pc = coraDispatch;
  }
}

void
pushCont(struct Cora *co, basicBlock cb, int nstack, ...) {
  saveToStack(&co->callstack, cb, co->stk.base, co->stk.base + nstack, co->frees, co->stk.stack);
  if (nstack > 0) {
    va_list ap;
    va_start(ap, nstack);
    for (int i=0; i<nstack; i++) {
      co->stk.stack[co->stk.base + i] = va_arg(ap, Obj);
    }
    if (co->stk.base + nstack > co->stk.pos) {
      co->stk.pos = co->stk.base + nstack;
    }
    va_end(ap);
  }

  assert(co->stk.pos >= co->stk.base);
  co->stk.base = co->stk.pos;
}

static void
popStack(struct Cora *co) {
  struct callStack *cs = &co->callstack;
  cs->len--;
  struct returnAddr *addr = &cs->data[cs->len];
  co->pc = addr->pc;
  co->stk = addr->stk;
  co->frees = addr->frees;
  return;
}

void callCurry(struct Cora *co) {
  Obj fn = co->args[0];
  int captured = nativeCaptured(fn);
  memmove(co->args+captured, co->args+1, (co->nargs-1) * sizeof(Obj));
  memcpy(co->args, nativeData(fn), captured*sizeof(Obj));
  co->nargs = co->nargs + captured - 1;
  co->pc = coraDispatch;
}

Obj
makeCurry1(int required, int captured, Obj *data) {
  int sz = sizeof(struct scmNative) + captured*sizeof(Obj);
  struct scmNative* clo = newObj(scmHeadNative, sz);
  clo->fn = callCurry;
  clo->required = required;
  clo->captured = captured;
  memcpy(clo->data, data, captured*sizeof(Obj));
  return ((Obj)(&clo->head) | TAG_PTR);
}

void
coraDispatch(struct Cora *co) {
  Obj fn = co->args[0];
  int required = nativeRequired(co->args[0]);
  if (co->nargs == required + 1) {
    co->pc = nativeFuncPtr(fn);
    co->frees = fn;
  } else if (co->nargs < required + 1) {
    Obj ret = makeCurry1(required+1-co->nargs, co->nargs, co->args);
    coraReturn(co, ret);
  } else {
    // save the extra args.
    int cnt = co->nargs - (required+1);
    int sz = sizeof(Obj) * cnt;
    Obj* save = alloca(sz);
    memcpy(save, co->args+required+1, sz);
    // eval the first call and get the result;
    co->nargs = required + 1;
    trampoline(co, co->pc);
    // recover args and make the next call.
    co->args[0] = co->args[1];
    memcpy(co->args+1, save, sz);
    co->nargs = cnt + 1;
    co->pc = coraDispatch;
  }
  return;
}

void
coraReturn(struct Cora *co, Obj val) {
  co->nargs = 2;
  co->args[1] = val;
  popStack(co);
}

void push(struct Cora *co, Obj v) {
  co->stk.stack[co->stk.pos] = v;
  co->stk.pos++;
}

Obj
coraGet(struct Cora *co, int idx) {
  return co->args[idx];
}

const int INIT_STACK_SIZE = 5000;


extern struct trieNode gRoot;
struct Cora *gCo;

struct Cora*
coraNew() {
  struct Cora *co = malloc(sizeof(struct Cora));
  co->stk.stack = malloc(sizeof(Obj) * INIT_STACK_SIZE);
  co->stk.base = 0;
  co->stk.pos = 0;

  co->callstack.data = malloc(64*sizeof(struct returnAddr));
  co->callstack.len = 0;
  co->callstack.cap = 64;

  gCo = co;

  return co;
}

static void
coraGCFunc(struct GC *gc, struct Cora *co) {
  // The stack.
  for (int i=0; i<co->stk.pos; i++) {
    gcMark(gc, co->stk.stack[i]);
  }
  // The args.
  for (int i=0; i<co->nargs; i++) {
    gcMark(gc, co->args[i]);
  }
  // Closure register.
  /* Obj save = co->frees; */
  gcMark(gc, co->frees);
  /* printf("coraGC frees = %p -> %p\n", save, co->frees); */
  // Return addr
  gcMarkCallStack(gc, &co->callstack);
}

void
gcGlobal(struct GC *gc) {
  trieNodeGCFunc(gc, &gRoot);
  coraGCFunc(gc, gCo);
}

void
trampoline(struct Cora *co, basicBlock pc) {
  pushCont(co, NULL, 0);
  co->pc = pc;
  while(co->pc != NULL) {
    co->pc(co);
  }
}

Obj
closureRef(struct Cora *co, int idx) {
  Obj* frees = nativeData(co->frees);
  return frees[idx];
}

Obj globalRef(Obj sym) {
  struct trieNode* s = ptr(sym);
  Obj val = s->value;
  if (val == Undef) {
    printf("undefined global symbol: %s\n", s->sym);
    assert(false);
  }
  return val;
}

Obj primEQ(Obj x, Obj y) {
  return eq(x, y) ? True : False;
}

Obj primGT(Obj x, Obj y) {
  assert(isfixnum(x));
  assert(isfixnum(y));
  return fixnum(x) > fixnum(y) ? True : False;
}

Obj primLT(Obj x, Obj y) {
  assert(isfixnum(x));
  assert(isfixnum(y));
  return fixnum(x) < fixnum(y) ? True : False;
}

Obj primDiv(Obj x, Obj y) {
  if (isfixnum(x) && isfixnum(y)) {
    return makeNumber(x / y);
  } else {
    // TODO
    assert(false);
  }
}

Obj primAdd(Obj x, Obj y) {
  if (isfixnum(x) && isfixnum(y)) {
    return x + y;
  } else {
    // TODO
    assert(false);
  }
}

Obj primCons(Obj x, Obj y) {
  return cons(x, y);
}

Obj primNot(Obj x) {
  if (x == True) {
    return False;
  } else if (x == False) {
    return True;
  } else {
    assert(false);
  }
}

Obj primCar(Obj x) {
  return car(x);
}

Obj primCdr(Obj x) {
  assert(iscons(x));
  return cdr(x);
}

Obj primIsCons(Obj x) {
  if (iscons(x)) {
    return True;
  } else {
    return False;
  }
}

Obj primSet(Obj key, Obj val) {
  struct trieNode* s = ptr(key);
  s->value = val;
  return key;
}

Obj primSub(Obj x, Obj y) {
  if (isfixnum(x) && isfixnum(y)) {
    return x - y;
  } else {
    // TODO
    assert(false);
  }
}

Obj primMul(Obj x, Obj y) {
  if (isfixnum(x) && isfixnum(y)) {
    return makeNumber(fixnum(x) * fixnum(y));
  } else {
    // TODO
    assert(false);
  }
}

static uint64_t genIdx = 0;

Obj primGenSym(Obj arg) {
  assert(issymbol(arg));
  char tmp[200];
  snprintf(tmp, 100, "#%s%lu", symbolStr(arg), genIdx);
  genIdx++;
  return makeSymbol(tmp);
}

Obj primIsSymbol(Obj x) {
  if (issymbol(x)) {
    return True;
  } else {
    return False;
  }
}

Obj primIsNumber(Obj x) {
  if (isNumber(x)) {
    return True;
  } else {
    return False;
  }
}

Obj primIsString(Obj x) {
  if (isstring(x)) {
    return True;
  } else {
    return False;
  }
}

void
symbolToString(struct Cora *co) {
  Obj sym = co->args[1];
  char* str = symbolStr(sym);
  Obj val = makeString1(str);
  coraReturn(co, val);
}

void
stringAppend(struct Cora *co) {
  Obj str1 = co->args[1];
  Obj str2 = co->args[2];
  strBuf x = stringStr(str1);
  strBuf y = stringStr(str2);
  strBuf tmp = strNew(strLen(toStr(x)) + strLen(toStr(y)));
  tmp = strCpy(tmp, toStr(x));
  tmp = strCat(tmp, toStr(y));
  Obj val = makeString1(toCStr(tmp));
  coraReturn(co, val);
}


static void
tryStackMark(struct Cora *co) {
  popStack(co);
}

// (try (lambda () (+ (throw 42) 1))
//      (lambda (v resume) (resume (+ v 66))))
void
builtinTryCatch(struct Cora *co) {
  Obj chunk = co->args[1];
  Obj handler = co->args[2];

  // Conceptually, (try chunk handler), thunk belongs to the try block, while handler does not.
  // In chunk, we can throw twice, they will be handled by the same try, so chunk belongs to the try.
  //     (try (lambda () (begin (throw 1) (throw 2))) (lambda (v k) (k 42)))
  // If we throw in handler however, it's panic in panic and cannot be catch by this try.
  //     (try (lambda () (throw 1)) (lambda (v k) (throw 2)))

  // Prepare a new stack for the chunk to run, segment stack!
  co->stk.stack = (Obj*)malloc(sizeof(Obj) * INIT_STACK_SIZE);
  co->stk.base = 0;
  co->stk.pos = 0;

  // Save the old cont.
  // This save can make the chunk and handler available to the recovering process.
  // Use a call protocol instead of tail call protocol.
  pushCont(co, tryStackMark, 1, handler);

  // Call the chunk.
  co->nargs = 1;
  co->args[0] = chunk;
  co->pc = coraDispatch;
}

static int
findTryMark(struct Cora *co) {
  int p = co->callstack.len - 1;
  for (; p >= 0; p--) {
    struct returnAddr *addr = &co->callstack.data[p];
    if (addr->pc == tryStackMark) {
      break;
    }
  }
  if (p < 0) {
    // TODO: panic, not in any try-catch block!
    assert(false);
  }
  return p;
}

static void
continuationAsClosure(struct Cora *co) {
  Obj this = co->args[0];
  Obj cont = nativeData(this)[0];

  // Replace the current stack with the delimited continuation.
  struct callStack* cs = contCallStack(cont);
  Obj val = co->args[1];
  for (int i=0; i< cs->len; i++) {
    struct returnAddr *addr = &cs->data[i];
    saveToStack(&co->callstack, addr->pc, addr->stk.base, addr->stk.pos, addr->frees, addr->stk.stack);
  }
  coraReturn(co, val);
}

void
builtinThrow(struct Cora *co) {
  int p = findTryMark(co);
  Obj v = co->args[1];

  // Now p point to the try-marked stack.
  struct returnAddr *try = &co->callstack.data[p];
  assert(try->stk.base == 0);
  assert(try->stk.pos == 1);

  // Capture the call stack as continuation.
  Obj cont = makeContinuation();
  struct callStack* stack = contCallStack(cont);
  for (int i=p; i<co->callstack.len; i++) {
    struct returnAddr *addr = &co->callstack.data[i];
    saveToStack(stack, addr->pc, addr->stk.base, addr->stk.pos, addr->frees, addr->stk.stack);
  }

  // Now that we get the current continuation, disguise as a closure.
  Obj clo = makeNative(continuationAsClosure, 1, 1, cont);

  // Reset to the stack before try.
  co->callstack.len = p;
  struct returnAddr *addr = &co->callstack.data[p-1];
  co->stk = addr->stk;

  // Find the handler, invoke it, passing the continuation.
  Obj handler = try->stk.stack[try->stk.base];
  co->stk.base = co->stk.pos;

  co->nargs = 3;
  co->args[0] = handler;
  co->args[1] =  v;
  co->args[2] = clo;
  co->pc = coraDispatch;
}

void
builtinIntern(struct Cora *co) {
  Obj x = co->args[1];
  assert(isstring(x));
  Obj val = intern(toCStr(stringStr(x)));
  coraReturn(co, val);
}

void
builtinIsNumber(struct Cora *co) {
  Obj x = co->args[1];
  if (isfixnum(x)) {
    coraReturn(co, True);
    return;
  }
  if (tag(x) == TAG_PTR) {
    scmHead* h = ptr(x);
    if (h->type == scmHeadNumber) {
      coraReturn(co, True);
      return;
    }
  }
  coraReturn(co, False);
}

void
builtinValue(struct Cora *co) {
  Obj sym = co->args[1];
  struct trieNode* s = ptr(sym);
  Obj ret = s->value;
  if (ret == Undef) {
    printf("undefined value: %s\n", s->sym);
    assert(false);
  }
  coraReturn(co, ret);
}

void
builtinApply(struct Cora *co) {
  Obj fn = co->args[1];
  Obj args = co->args[2];

  co->args[0] = fn;
  int pos = 1;
  while(args != Nil) {
    Obj tmp = car(args);
    co->args[pos++] = tmp;
    args = cdr(args);
  }
  co->nargs = pos;
  co->pc = coraDispatch;
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
builtinLoadSo(struct Cora *co) {
  // (load-so "file-path.so" "package-path")
  Obj filePath = co->args[1];
  strBuf str = stringStr(filePath);
  char *path = toCStr(str);
  void *handle = dlopen(path, RTLD_LAZY);
  if (!handle) {
    fprintf(stderr, "%s\n", dlerror());
    coraReturn(co, makeNumber(-1)); 
    return;
  }

  basicBlock entry = dlsym(handle, "entry");
  char *error = dlerror();
  if (error != NULL) {
    // TODO
    coraReturn(co, makeString(error, strlen(error)));
    return;
  }

  /* Call(1, makeNative(entry, 1, 0)); */
  /* ctxReturn(ctx, path); */
  trampoline(co, entry);

  popStack(co);
  return;
}

static int unique = 1;

void
builtinLoad(struct Cora *co) {
  // (load "file-path.cora" "package-path")
  Obj filePath = co->args[1];
  Obj pkg = co->args[2];

  co->nargs = 4;
  co->args[0] = globalRef(intern("cora/lib/toc.compile-to-c"));
  co->args[1] = filePath;

  const int BUFSIZE = 512;
  char buf[BUFSIZE];
  snprintf(buf, BUFSIZE, "/tmp/cora-xxx-%d.c", unique);
  str tmpCFile = cstr(buf);
  co->args[2] = makeString(tmpCFile.str, tmpCFile.len);
  co->args[3] = pkg;
  trampoline(co, coraDispatch);
  Obj res = co->args[1];
  // TODO: check res?

  snprintf(buf, BUFSIZE, "gcc -shared -Isrc -I. -g -fPIC /tmp/cora-xxx-%d.c -o /tmp/cora-xxx-%d.so -ldl -Lsrc -lcora", unique, unique);
  int exitCode = system(buf);
  if (exitCode == 0) {
    /* co->args[0] = globalRef(intern("load-so"));  */
    snprintf(buf, BUFSIZE, "/tmp/cora-xxx-%d.so", unique);
    unique++;
    str tmpSoFile = cstr(buf);
    co->nargs = 3;
    co->args[1] = makeString(tmpSoFile.str, tmpSoFile.len);
    co->args[2] = pkg;
    co->pc = builtinLoadSo;
    return;
  }

  unique++;
  coraReturn(co, makeNumber(exitCode));
}

void
builtinImport(struct Cora *co) {
  Obj pkg = co->args[1];
  str pkgStr = toStr(stringStr(pkg));
  Obj sym = intern("*imported*");
  Obj imported = symbolGet(sym);

  // Avoid repeated load.
  for (Obj p = imported; p != Nil; p = cdr(p)) {
    Obj elem = car(p);
    if (eq(elem, pkg)) {
      coraReturn(co, sym);
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
    co->nargs = 3;
    co->args[1] = makeString(toCStr(tmp), strLen(toStr(tmp)));
    co->args[2] = pkg;
    co->pc = builtinLoadSo;
    strFree(tmp);
    return;
  }

  tmp = strShrink(tmp, 3);
  tmp = strCat(tmp, cstr(".cora"));
  co->nargs = 3;
  co->args[0] = makeNative(builtinLoad, 2, 0);
  co->args[1] = makeString1(toCStr(tmp));
  co->args[2] = pkg;
  trampoline(co, coraDispatch);
  strFree(tmp);

  // Set the *imported* variable to avlid repeated load.
  symbolSet(sym, cons(pkg, imported));

  coraReturn(co, pkg);
}

// ================ utilities for toc ==================

static void
builtinGenerateStr(struct Cora *co) {
  Obj to = co->args[1];
  FILE* out = mustCObj(to);
  Obj exp = co->args[2];
  strBuf s = stringStr(exp);
  fprintf(out, "%s", toCStr(s));
  coraReturn(co, Nil);
}

static void
builtinGenerateSym(struct Cora *co) {
  Obj to = co->args[1];
  FILE* out = mustCObj(to);
  Obj exp = co->args[2];
  const char* s = symbolStr(exp);
  for (const char *p = s; *p != 0; p++) {
    if ((*p >= 'a' && *p <= 'z') ||
	(*p >= 'A' && *p <= 'Z') ||
	(*p >= '0' && *p <= '9')) {
      fprintf(out, "%c", *p);
    } else if (*p == '_') {
      fprintf(out, "__");
    } else {
      fprintf(out, "_%d", *p);
    }
  }
  coraReturn(co, Nil);
}

static void
builtinVector(struct Cora *co) {
  Obj o = co->args[1];
  int n = fixnum(o);
  Obj res = makeVector(n);
  co->nargs = 2;
  co->args[1] = res;
  popStack(co);
}

static void
builtinVectorRef(struct Cora *co) {
  Obj v = co->args[1];
  Obj idx = co->args[2];
  co->nargs = 2;
  co->args[1] = vectorRef(v, fixnum(idx));
  popStack(co);
}

static void
builtinVectorSet(struct Cora *co) {
  Obj v = co->args[1];
  Obj idx = co->args[2];
  Obj o = co->args[3];

  co->nargs = 2;
  co->args[1] = vectorSet(v, fixnum(idx), o);
  popStack(co);
}

static void
builtinVectorLength(struct Cora *co) {
  Obj o = co->args[1];
  int res = vectorLength(o);
  co->nargs = 2;
  co->args[1] = makeNumber(res);
  popStack(co);
}

static void
builtinGenerateNum(struct Cora *co) {
  Obj to = co->args[1];
  FILE* out = mustCObj(to);
  Obj exp = co->args[2];
  fprintf(out, "%ld", fixnum(exp));
  coraReturn(co, Nil);
}

static void
builtinEscapeStr(struct Cora *co) {
  Obj s = co->args[1];
  strBuf buf = stringStr(s);
  str str = toStr(buf);
  strBuf dst = strNew(strLen(str));
  
  for (int i=0; i<strLen(str); i++) {
    char c = str.str[i];
    switch (c) {
    case '"':
      dst = strAppend(dst, '\\');
      dst = strAppend(dst, '"');
      break;
    case '\n':
      dst = strAppend(dst, '\\');
      dst = strAppend(dst, 'n');
      break;
    case '\t':
      dst = strAppend(dst, '\\');
      dst = strAppend(dst, 't');
      break;
    default:
      dst = strAppend(dst, c);
    };
  }
  coraReturn(co, makeString(toCStr(dst), strLen(toStr(dst)))); 
}

static void
builtinOpenOutputFile(struct Cora *co) {
  Obj arg1 = co->args[1];
  strBuf filePath = stringStr(arg1);
  FILE* f = fopen(toCStr(filePath), "w");
  coraReturn(co, makeCObj(f));
}

static void
builtinCloseOutputFile(struct Cora *co) {
  Obj arg1 = co->args[1];
  FILE *f = mustCObj(arg1);
  int errno = fclose(f);
  coraReturn(co, makeNumber(errno));
}

void
builtinReadFileAsSexp(struct Cora *co) {
  Obj arg = co->args[1];
  assert(isstring(arg));
  Obj result = Nil;
  char* fileName = toCStr(stringStr(arg));
  FILE* f = fopen(fileName, "r");
  if (f == NULL) {
    printf("open file fail %s\n", fileName);
    goto exit0;
  }

  Obj pkg = co->args[2];
  char *selfPath = toCStr(stringStr(pkg));
  struct SexpReader r = {.selfPath = selfPath};
  int err = 0;
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
  coraReturn(co, result);
}

static strBuf
cmdListStr(Obj args) {
  strBuf cmd = strNew(64);
  while(args != Nil) {
    Obj tmp = car(args);
    strBuf s = stringStr(tmp);
    cmd = strCat(cmd, toStr(s));
    cmd = strCat(cmd, cstr(" "));
    args = cdr(args);
  }
  return cmd;
}

static void
builtinOSExec(struct Cora *co) {
  Obj args = co->args[1];
  strBuf cmd = cmdListStr(args);
  int exitCode = system(toCStr(cmd));
  coraReturn(co, makeNumber(exitCode));
}

void
registerAPI(struct registerModule* m, str pkg) {
  if (m->init != NULL) {
    m->init();
  }

  for (int i=0; ; i++) {
    struct registerEntry entry = m->entries[i];
    if (entry.func == NULL) {
      break;
    }

    Obj sym;
    if (strLen(pkg) > 0) {
      strBuf tmp = strDup(pkg);
      tmp = strAppend(tmp, '.');
      tmp = strCat(tmp, cstr(entry.name));
      sym = intern(toCStr(tmp));
      strFree(tmp);
    } else {
      sym = intern(entry.name);
    }
    symbolSet(sym, makeNative(entry.func, entry.args, 0));
  }
}

// ============ end utilities for toc =================

void
coraInit(uintptr_t *mark) {
  gcInit(&gc, mark);
  typesInit();
  symQuote = intern("quote");
  symBackQuote = intern("backquote");
  symUnQuote = intern("unquote");
  primSet(intern("*imported*"), Nil);
  primSet(intern("*package-mapping*"), Nil);
  primSet(intern("symbol->string"), makeNative(symbolToString, 1, 0));
  primSet(intern("string-append"), makeNative(stringAppend, 2, 0));
  primSet(intern("intern"), makeNative(builtinIntern, 1, 0));
  primSet(intern("number?"), makeNative(builtinIsNumber, 1, 0));
  primSet(intern("read-file-as-sexp"), makeNative(builtinReadFileAsSexp, 2, 0));
  primSet(intern("value"), makeNative(builtinValue, 1, 0));
  primSet(intern("apply"), makeNative(builtinApply, 2, 0));
  primSet(intern("load-so"), makeNative(builtinLoadSo, 2, 0));
  primSet(intern("import"), makeNative(builtinImport, 1, 0));
  primSet(intern("load"), makeNative(builtinLoad, 2, 0));

  primSet(intern("vector"), makeNative(builtinVector, 1, 0));
  primSet(intern("vector-set!"), makeNative(builtinVectorSet, 3, 0));
  primSet(intern("vector-ref"), makeNative(builtinVectorRef, 2, 0));
  primSet(intern("vector-length"), makeNative(builtinVectorLength, 1, 0));
  primSet(intern("try"), makeNative(builtinTryCatch, 2, 0));
  primSet(intern("throw"), makeNative(builtinThrow, 1, 0));

  primSet(intern("cora/lib/toc/internal.generate-str"), makeNative(builtinGenerateStr, 2, 0));
  primSet(intern("cora/lib/toc/internal.generate-sym"), makeNative(builtinGenerateSym, 2, 0));
  primSet(intern("cora/lib/toc/internal.generate-num"), makeNative(builtinGenerateNum, 2, 0));
  primSet(intern("cora/lib/toc/internal.escape-str"), makeNative(builtinEscapeStr, 1, 0));

  primSet(intern("cora/lib/io.open-output-file"), makeNative(builtinOpenOutputFile, 1, 0));
  primSet(intern("cora/lib/io.close-output-file"), makeNative(builtinCloseOutputFile, 1, 0));

  primSet(intern("cora/lib/os.exec"), makeNative(builtinOSExec, 1, 0));
}

#ifdef ForTest

extern void entry(struct Cora* co);

int main(int argc, char *argv[]) {
  uintptr_t dummy;
  coraInit(&dummy);
  struct Cora* co = coraNew();
  trampoline(co, entry);
  printObj(stdout, co->args[1]);
  return 0;
}

#endif
