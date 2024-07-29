#include <sys/types.h>
#include <unistd.h>
#include <pwd.h>
#include <dlfcn.h>
#include <stdio.h>
#include "runtime.h"
#include "str.h"

void
/* saveStack(struct callStack *cs, basicBlock pc, int base, int pos, Obj *stack, Obj *frees) { */
saveStack(struct callStack *cs, basicBlock pc, int base, int pos, Obj *frees) {
  if (cs->len + 1 >= cs->cap) {
    cs->cap = cs->cap * 2;
    void *newData = malloc(cs->cap*sizeof(struct returnAddr));
    memcpy(newData, cs->data, cs->len*sizeof(struct returnAddr));
    free(cs->data);
    cs->data = newData;
  }
  
  struct returnAddr *addr = &cs->data[cs->len];
  addr->pc = pc;
  addr->base = base;
  addr->pos = pos;
  /* addr->stack = stack; */
  addr->frees = frees;
  cs->len++;
  return;
}

void pushCont(struct Cora *co, basicBlock cb, int nstack, ...) {
  /* saveStack(&co->callstack, cb, co->pos, co->pos, co->stack, co->frees); */
  /* saveStack(&co->callstack, cb, co->stack, co->frees); */
  /* saveStack(&co->callstack, cb, co->pos, co->pos + nstack, co->frees); */
  saveStack(&co->callstack, cb, co->base, co->base + nstack, co->frees);
  if (nstack > 0) {
    va_list ap;
    va_start(ap, nstack);
    for (int i=0; i<nstack; i++) {
      co->stack[co->base + i] = va_arg(ap, Obj);
    }
    if (co->base + nstack > co->pos) {
      co->pos = co->base + nstack;
    }
    va_end(ap);
  }

  assert(co->pos >= co->base);
  co->base = co->pos;
}

void
/* popStack(struct callStack *cs, basicBlock *pc, int *base, int *pos, Obj **stack, Obj **frees) { */
popStack(struct callStack *cs, basicBlock *pc, int *base, int *pos, Obj **stack, Obj **frees) {
/* popStack(struct callStack *cs, basicBlock *pc, int *base, Obj **frees) { */
  cs->len--;
  struct returnAddr *addr = &cs->data[cs->len];
  *pc = addr->pc;
  *base = addr->base;
  *pos = addr->pos;
  /* *stack = addr->stack; */
  *frees = addr->frees;
  return;
}

Obj
makeNative(basicBlock fn, int required, int captured, ...) {
  int sz = sizeof(struct scmNative) + captured*sizeof(Obj);
  struct scmNative* clo = newObj(scmHeadNative, sz);
  clo->fn = fn;
  clo->required = required;
  clo->captured = captured;
  if (captured > 0) {
    va_list ap;
    va_start(ap, captured);
    for (int i=0; i<captured; i++) {
      clo->data[i] = va_arg(ap, Obj);
    }
    va_end(ap);
  }

  return ((Obj)(&clo->head) | TAG_PTR);
}

void callCurry(struct Cora *co) {
  Obj fn = co->args[0];
  int captured = nativeCaptured(fn);
  memmove(co->args+captured, co->args+1, (co->nargs-1) * sizeof(Obj));
  memcpy(co->args, nativeData(fn), captured*sizeof(Obj));
  co->nargs = co->nargs + captured - 1;
  co->pc = coraCall;
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

bool
isNative(Obj c) {
  if ((c & TAG_MASK) != TAG_PTR) {
    return false;
  }
  scmHead *h = ptr(c);
  return h->type == scmHeadNative;
}

Obj*
nativeData(Obj o) {
  struct scmNative* native = ptr(o);
  assert(native->head.type == scmHeadNative);
  if (native->captured == 0) {
    return NULL;
  }
  return native->data;
}

int
nativeCaptured(Obj o) {
  struct scmNative* native = ptr(o);
  assert(native->head.type == scmHeadNative);
  return native->captured;
}

basicBlock
nativeFuncPtr(Obj o) {
  struct scmNative* native = ptr(o);
  assert(native->head.type == scmHeadNative);
  return native->fn;
}

int
nativeRequired(Obj o) {
  struct scmNative* native = ptr(o);
  assert(native->head.type == scmHeadNative);
  return native->required;
}

void coraCall(struct Cora *co) {
  Obj fn = co->args[0];
  int required = nativeRequired(co->args[0]);
  if (co->nargs == required + 1) {
    co->pc = nativeFuncPtr(fn);
    co->frees = nativeData(fn);
  } else if (co->nargs < required + 1) {
    Obj ret = makeCurry1(required+1-co->nargs, co->nargs, co->args);
    co->nargs = 0;
    co->args[1] = ret;
    popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
    /* popStack(&co->callstack, &co->pc, &co->base, &co->stack, &co->frees); */
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
    co->pc = coraCall;
  }
  return;
}

Obj makeString1(char *x) {
  return makeString(x, strlen(x));
}

void push(struct Cora *co, Obj v) {
  co->stack[co->pos] = v;
  co->pos++;
}

Obj stackRef(struct Cora *co, int idx) {
  return co->stack[co->base + idx];
}

const int INIT_STACK_SIZE = 5000;

struct Cora*
coraNew() {
  struct Cora *co = malloc(sizeof(struct Cora));
  co->stack = malloc(sizeof(Obj) * INIT_STACK_SIZE);
  co->base = 0;
  co->pos = 0;

  co->callstack.data = malloc(64*sizeof(struct returnAddr));
  co->callstack.len = 0;
  co->callstack.cap = 64;

  /* co->trystack.data = malloc(4 * sizeof(struct tryRecord)); */
  /* co->trystack.len = 0; */
  /* co->trystack.cap = 4; */
  return co;
}

void
trampoline(struct Cora *co, basicBlock pc) {
  int mark;
  saveStack(&co->callstack, NULL, co->base, co->pos, co->frees); 
  co->pc = pc;
  while(co->pc != NULL) {
    co->pc(co);
  }
}

Obj
closureRef(struct Cora *co, int idx) {
  return co->frees[idx];
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
  snprintf(tmp, 100, "#%s%llu", symbolStr(arg), genIdx);
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

void symbolToString(struct Cora *co) {
  Obj sym = co->args[1];
  char* str = symbolStr(sym);
  Obj val = makeString1(str);
  co->args[1] = val;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
  return;
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
  co->args[1] = val;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
  return;
}


/* static void */
/* saveTry(struct tryStack *ts, int pos, Obj handler) { */
/*   if (ts->len + 1 >= ts->cap) { */
/*     ts->cap = ts->cap * 2; */
/*     void *newData = malloc(ts->cap*sizeof(struct tryRecord)); */
/*     memcpy(newData, ts->data, ts->len*sizeof(struct tryRecord)); */
/*     free(ts->data); */
/*     ts->data = newData; */
/*   } */
  
/*   struct tryRecord *rec = &ts->data[ts->len]; */
/*   rec->pos = pos; */
/*   rec->handler = handler; */
/*   ts->len++; */
/*   return; */
/* } */

// (try (lambda () (+ (throw 42) 1))
//      (lambda (v resume) (resume (+ v 66))))
/* void */
/* builtinTryCatch(struct Cora *co) { */
/*   Obj chunk = co->args[1]; */
/*   Obj handler = co->args[2]; */

/*   // Save the old cont. */
/*   // This save can make the chunk and handler available to the recovering process. */
/*   saveTry(&co->trystack, co->callstack.len, handler); */

/*   // Call the chunk. */
/*   co->args[0] = chunk; */
/*   co->nargs = 1; */
/*   co->pc = coraCall; */
/* } */

struct contStack {
  struct returnAddr *data;
  int size;

  Obj *stack;
  int len2;
};

/* static void */
/* continuationAsClosure(struct Cora *co) { */
/*   // Replace the current stack with the delimited continuation. */
/*   Obj k = co->args[0]; */
/*   struct scmNative* native = ptr(k); */
/*   struct contStack* delimitedCC = ptr(native->data[0]); */
/*   Obj val = co->args[1]; */
/*   for (int i=0; i< delimitedCC->size; i++) { */
/*     struct returnAddr *addr = &delimitedCC->data[i]; */
/*     co->callstack.data[co->callstack.len] = *addr; */
/*     co->callstack.len++; */
/*     if (co->callstack.len + 1 >= co->callstack.cap) { */
/*       assert(false); // TODO? */
/*     } */
/*   } */
/*   popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees); */
/* } */

/* void */
/* builtinThrow(struct Cora *co) { */
/*   Obj v = co->args[1]; */

/*   if (co->trystack.len == 0) { */
/*     // TODO: panic, not in any try-catch block! */
/*     assert(false); */
/*   } */

/*   // Capture the stack as continuation. */
/*   struct tryRecord *rec = &co->trystack.data[co->trystack.len-1]; */

/*   struct returnAddr *addr = &co->callstack.data[rec->pos-1]; */
/*   struct contStack *stacks = malloc(sizeof(struct contStack)); */
/*   stacks->size = co->callstack.len - rec->pos; */
/*   if (stacks->size > 0) { */
/*     stacks->data = malloc(stacks->size * sizeof(struct returnAddr)); */
/*   } */
/*   for (int i=rec->pos; i<co->callstack.len; i++) { */
/*     stacks->data[i-rec->pos] = co->callstack.data[i]; */
/*   } */
/*   /\* memcpy(delimitedCC->stack, co->stack, 100); *\/ */
/*   Obj clo = makeNative(continuationAsClosure, 1, 1, stacks); */

/*   // Reset the stack */
/*   co->callstack.len = rec->pos; */
/*   /\* co->base = xxx; *\/ */
/*   /\* co->pos = xxx; *\/ */

/*   // Find the handler, invoke it, passing the continuation. */
/*   Obj handler = rec->handler; */
/*   co->args[0] = handler; */
/*   co->args[1] =  v; */
/*   co->args[2] = clo; */
/*   co->nargs = 3; */
/*   co->pc = coraCall; */
/* } */

void
builtinIntern(struct Cora *co) {
  Obj x = co->args[1];
  assert(isstring(x));
  Obj val = intern(toCStr(stringStr(x)));
  co->args[1] = val;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
}

void
builtinIsNumber(struct Cora *co) {
  Obj x = co->args[1];
  if (isfixnum(x)) {
    co->args[1] = True;
    popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
    return;
  }
  if (tag(x) == TAG_PTR) {
    scmHead* h = ptr(x);
    if (h->type == scmHeadNumber) {
      co->args[1] = True;
      popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
      return;
    }
  }
  co->args[1] = False;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
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
  co->args[1] = ret;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
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
  co->pc = coraCall;
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
    co->args[1] = makeNumber(-1);
    popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
    return;
  }

  basicBlock entry = dlsym(handle, "entry");
  char *error = dlerror();
  if (error != NULL) {
    // TODO
    co->args[1] = makeString(error, strlen(error));
    popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
    return;
  }

  /* Call(1, makeNative(entry, 1, 0)); */
  /* ctxReturn(ctx, path); */
  trampoline(co, entry);

  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
  return;
}

static int unique = 1;

void
builtinLoad(struct Cora *co) {
  // (load "file-path.cora" "package-path")
  Obj filePath = co->args[1];
  Obj pkg = co->args[2];

  co->args[0] = globalRef(intern("cora/lib/toc/include.compile-to-c"));
  co->args[1] = filePath;

  const int BUFSIZE = 512;
  char buf[BUFSIZE];
  snprintf(buf, BUFSIZE, "/tmp/cora-xxx-%d.c", unique);
  str tmpCFile = cstr(buf);
  co->args[2] = makeString(tmpCFile.str, tmpCFile.len);
  co->args[3] = pkg;
  co->nargs = 4;
  trampoline(co, coraCall);
  Obj res = co->args[1];
  // TODO: check res?

  snprintf(buf, BUFSIZE, "gcc -shared -Isrc -I. -g -fPIC /tmp/cora-xxx-%d.c -o /tmp/cora-xxx-%d.so -ldl -Lsrc -lcora", unique, unique);
  int exitCode = system(buf);
  if (exitCode == 0) {
    /* co->args[0] = globalRef(intern("load-so"));  */
    snprintf(buf, BUFSIZE, "/tmp/cora-xxx-%d.so", unique);
    unique++;
    str tmpSoFile = cstr(buf);
    co->args[1] = makeString(tmpSoFile.str, tmpSoFile.len);
    co->args[2] = pkg;
    co->nargs = 3;
    co->pc = builtinLoadSo;
    return;
  }

  unique++;
  co->args[1] = makeNumber(exitCode);
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
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
      co->args[1] = sym;
      popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
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
    co->args[1] = makeString(toCStr(tmp), strLen(toStr(tmp)));
    co->args[2] = pkg;
    co->nargs = 3;
    co->pc = builtinLoadSo;
    return;
  } else {
    tmp = strShrink(tmp, 3);
    tmp = strCat(tmp, cstr(".cora"));
    co->args[0] = makeNative(builtinLoad, 2, 0);
    co->args[1] = makeString1(toCStr(tmp));
    co->args[2] = pkg;
    co->nargs = 3;
    trampoline(co, coraCall);
  }
  strFree(tmp);

  // Set the *imported* variable to avlid repeated load.
  symbolSet(sym, cons(pkg, imported));

  co->args[1] = pkg;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
}

// ================ utilities for toc ==================

static void
builtinGenerateStr(struct Cora *co) {
  Obj to = co->args[1];
  FILE* out = mustCObj(to);
  Obj exp = co->args[2];
  strBuf s = stringStr(exp);
  fprintf(out, "%s", toCStr(s));
  co->args[1] = Nil;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
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
  co->args[1] = Nil;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
}

static void
builtinGenerateNum(struct Cora *co) {
  Obj to = co->args[1];
  FILE* out = mustCObj(to);
  Obj exp = co->args[2];
  fprintf(out, "%ld", fixnum(exp));
  co->args[1] = Nil;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
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
  co->args[1] = makeString(toCStr(dst), strLen(toStr(dst)));
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
}

static void
builtinOpenOutputFile(struct Cora *co) {
  Obj arg1 = co->args[1];
  strBuf filePath = stringStr(arg1);
  FILE* f = fopen(toCStr(filePath), "w");
  co->args[1] = makeCObj(f);
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
}

static void
builtinCloseOutputFile(struct Cora *co) {
  Obj arg1 = co->args[1];
  FILE *f = mustCObj(arg1);
  int errno = fclose(f);
  co->args[1] = makeNumber(errno);
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
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
  struct SexpReader r = {.pkgMapping = Nil, .selfPath = selfPath};
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
  co->args[1] = result;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
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
  co->args[1] = makeNumber(exitCode);
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
  return;
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
    } else {
      sym = intern(entry.name);
    }
    symbolSet(sym, makeNative(entry.func, entry.args, 0));
  }
}

// ============ end utilities for toc =================

void
coraInit() {
  symQuote = intern("quote");
  symBackQuote = intern("backquote");
  symUnQuote = intern("unquote");
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
  /* primSet(intern("try"), makeNative(builtinTryCatch, 2, 0)); */
  /* primSet(intern("throw"), makeNative(builtinThrow, 1, 0)); */

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
  symQuote = intern("quote");
  primSet(intern("symbol->string"), makeNative(symbolToString, 1, 0));
  primSet(intern("string-append"), makeNative(stringAppend, 2, 0));
  primSet(intern("intern"), makeNative(builtinIntern, 1, 0));
  primSet(intern("number?"), makeNative(builtinIsNumber, 1, 0));
  primSet(intern("read-file-as-sexp"), makeNative(builtinReadFileAsSexp, 2, 0));
  primSet(intern("value"), makeNative(builtinValue, 1, 0));
  primSet(intern("apply"), makeNative(builtinApply, 2, 0));
  primSet(intern("load-so"), makeNative(builtinLoadSo, 2, 0));
  primSet(intern("import"), makeNative(builtinImport, 1, 0));
  /* primSet(intern("try"), makeNative(builtinTryCatch, 2, 0)); */
  /* primSet(intern("throw"), makeNative(builtinThrow, 1, 0)); */
    
  struct Cora* co = coraNew();
  trampoline(co, entry);
  printObj(stdout, co->args[1]);

  return 0;
}

#endif
