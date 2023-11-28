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
  val = makeString(vm, pos, str, strlen(str)+1);
  vmReturn(vm, val);
}

void
primLoad(struct VM *vm, int pos, str path, str pkg) {
  FILE *in = fopen(path.str, "r");
  if (in == NULL) {
    // TODO: exception?
    assert("wrong path");
  }

  struct SexpReader r = {.pkgMapping = Nil, .selfPath = pkg.str};
  int err = 0;
  Obj ast = sexpRead(vm, pos, &r, in, &err);
  while(err == 0) {
    /* printf("========================================= read == \n"); */
    /* sexpWrite(stdout, ast); */
    /* printf("\n"); */
    Obj exp = macroExpand(vm, pos, ast);

    /* printObj(stdout, exp); */
    /* printf("\n"); */

    eval(vm, pos, exp);
    ast = sexpRead(vm, pos, &r, in, &err);
  }
  fclose(in);
}

void
builtinLoad(void *pc, Obj val, struct VM *vm, int pos) {
  Obj path = vmGet(vm, 1);
  Obj pkg = vmGet(vm, 2);
  primLoad(vm, pos, toStr(stringStr(path)), toStr(stringStr(pkg)));
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
  val = makeVector(vm, pos, fixnum(x));
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
    primLoad(vm, pos, toStr(tmp), pkgStr);
  }
  strFree(tmp);

  // Set the *imported* variable to avlid repeated load.
  symbolSet(sym, cons(vm, pos, cons(vm, pos, pkg, Nil), imported));
  vmReturn(vm, pkg);
}

struct program {
  char *code;
  int len1;
  int cap1;
};

static void toExecMany(Obj exp, struct program *p);

static void
ensureSize(char **data, int *len, int *cap, int sz) {
  if (*len + sz < *cap) {
    return;
  }

  while(*len + sz >= *cap) {
    *cap = *cap * 2;
  }
  void *newData = malloc(*cap);
  memcpy(newData, *data, *len);
  free(*data);
  *data = newData;
}

struct program*
makeProgram() {
  struct program *p = malloc(sizeof(struct program));
  memset(p, 0, sizeof(struct program));
  p->cap1 = 64;
  p->len1 = 0;
  p->code = malloc(p->cap1);
  return p;
}

static void
progAppendOP(struct program *p, opcode op) {
  ensureSize(&p->code, &p->len1, &p->cap1, sizeof(op));
  memcpy(p->code+p->len1, &op, sizeof(op));
  p->len1 += sizeof(op);
}

extern void opConst(void* pc, Obj val, struct VM *vm, int pos);
extern void opLocalRef(void* pc, Obj val, struct VM *vm, int pos);
extern void opLocalSet(void* pc, Obj val, struct VM *vm, int pos);
extern void opGlobalRef(void *pc, Obj val, struct VM *vm, int pos);
extern void opTailCall(void *pc, Obj val, struct VM *vm, int pos);
extern void opClosureRef(void* pc, Obj val, struct VM *vm, int pos);
extern void opExit(void* pc, Obj val, struct VM *vm, int pos);
extern void opPush(void* pc, Obj val, struct VM *vm, int pos);
extern void opIf(void* pc, Obj val, struct VM *vm, int pos);
extern void opCall(void* pc, Obj val, struct VM *vm, int pos);
extern void opMakeClosure(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimSet(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimSub(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimAdd(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimIsString(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimCar(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimCdr(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimCons(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimIsCons(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimGenSym(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimIsInteger(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimIsSymbol(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimNot(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimGT(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimLT(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimMul(void *pc, Obj val, struct VM *vm, int pos);
extern void opPrimEQ(void *pc, Obj val, struct VM *vm, int pos);
extern void opReserveLocals(void* pc, Obj val, struct VM *vm, int pos);


// The order matters!!!
static opcode opcodes[] = {
  opConst,
  opLocalRef,
  opLocalSet,
  opGlobalRef,
  opTailCall,
  opClosureRef,
  opExit,
  opPush,
  opIf,
  opCall,
  opMakeClosure,
  opPrimSet,
  opPrimSub,
  opPrimAdd,
  opPrimIsString,
  opPrimCar,
  opPrimCdr,
  opPrimCons,
  opPrimIsCons,
  opPrimGenSym,
  opPrimIsInteger,
  opPrimIsSymbol,
  opPrimNot,
  opPrimGT,
  opPrimLT,
  opPrimMul,
  opPrimEQ,
  opReserveLocals,
};

void
builtinProgAppendOP(void *pc, Obj val, struct VM *vm, int pos) {
  // (.c-prog-append-op p .c-opConst)
  struct program* p = mustCObj(vmGet(vm, 1));
  int idx = fixnum(vmGet(vm, 2));
  opcode op = opcodes[idx];
  progAppendOP(p, op);
  vmReturn(vm, Nil);
}

static void
progAppendObj(struct program *p, Obj obj) {
  ensureSize(&p->code, &p->len1, &p->cap1, sizeof(obj));
  memcpy(p->code+p->len1, &obj, sizeof(obj));
  p->len1 += sizeof(obj);
}


void
builtinProgAppendObj(void *pc, Obj val, struct VM *vm, int pos) {
  // (.c-prog-append-obj p x)
  struct program* p = mustCObj(vmGet(vm, 1));
  progAppendObj(p, vmGet(vm, 2));
  vmReturn(vm, Nil);
}

static void
progAppendInt32(struct program *p, int32_t v) {
  ensureSize(&p->code, &p->len1, &p->cap1, sizeof(int32_t));
  memcpy(p->code+p->len1, &v, sizeof(int32_t));
  p->len1 += sizeof(int32_t);
}

void
builtinProgAppendInt32(void *pc, Obj val, struct VM *vm, int pos) {
  // (.c-prog-append-int32 p idx)
  struct program* p = mustCObj(vmGet(vm, 1));
  int32_t v = fixnum(vmGet(vm, 2));
  progAppendInt32(p, v);
  vmReturn(vm, Nil);
}

static void
progAppendPrim(struct program *p, Obj prim) {
  if (prim == makeSymbol("=")) {
    progAppendOP(p, opPrimEQ);
  } else if (prim == makeSymbol("set")) {
    progAppendOP(p, opPrimSet);
  } else if (prim == makeSymbol("+")) {
    progAppendOP(p, opPrimAdd);
  } else if (prim == makeSymbol("-")) {
    progAppendOP(p, opPrimSub);
  } else if (prim == makeSymbol("*")) {
    progAppendOP(p, opPrimMul);
  } else if (prim == makeSymbol("<")) {
    progAppendOP(p, opPrimLT);
  } else if (prim == makeSymbol(">")) {
    progAppendOP(p, opPrimGT);
  } else if (prim == makeSymbol("car")) {
    progAppendOP(p, opPrimCar);
  } else if (prim == makeSymbol("cdr")) {
    progAppendOP(p, opPrimCdr);
  } else if (prim == makeSymbol("cons")) {
    progAppendOP(p, opPrimCons);
  } else if (prim == makeSymbol("not")) {
    progAppendOP(p, opPrimNot);
  } else if (prim == makeSymbol("cons?")) {
    progAppendOP(p, opPrimIsCons);
  } else if (prim == makeSymbol("gensym")) {
    progAppendOP(p, opPrimGenSym);
  } else if (prim == makeSymbol("integer?")) {
    progAppendOP(p, opPrimIsInteger);
  } else if (prim == makeSymbol("symbol?")) {
    progAppendOP(p, opPrimIsSymbol);
  } else if (prim == makeSymbol("string?")) {
    progAppendOP(p, opPrimIsString);
  } else {
    printf("primitive not implement: %s\n", symbolStr(prim));
  }
}

void
builtinMakeProgram(void *pc, Obj val, struct VM *vm, int pos) {
  struct program *p = makeProgram();
  val = makeCObj(p);
  vmReturn(vm, val);
}

void
builtinProgAppendPrim(void *pc, Obj val, struct VM *vm, int pos) {
  Obj v1 = vmGet(vm, 1);
  struct program* p = mustCObj(v1);
  Obj x = vmGet(vm, 2);
  progAppendPrim(p, x);
  vmReturn(vm, Nil);
}

void
builtinProgPrepareSize(void *pc, Obj val, struct VM *vm, int ignore) {
  // (.c-prog-prepare-size p)
  struct program *p = mustCObj(vmGet(vm, 1));
  int pos = p->len1;
  ensureSize(&p->code, &p->len1, &p->cap1, sizeof(uint32_t));
  p->len1 += sizeof(uint32_t);
  vmReturn(vm, makeNumber(pos));
}

void
builtinProgWriteBackSize(void *pc, Obj val, struct VM *vm, int ignore) {
  // (.c-prog-write-back-size p pos)
  struct program *p = mustCObj(vmGet(vm, 1));
  int pos = fixnum(vmGet(vm, 2));
  int sz = p->len1 - pos - sizeof(uint32_t);
  *((uint32_t*)(p->code+pos)) = sz;
  vmReturn(vm, Nil);
}

void
builtinProgRun(void *pc, Obj val, struct VM *vm, int pos) {
  // (.c-prog-run p)
  struct program *p = mustCObj(vmGet(vm, 1));
  Obj res = run(vm, p->code, pos);
  vmReturn(vm, res);
}

extern Obj symConst,symLocalRef,symClosureRef,symGlobalRef,symIf,symMakeClosure,symTailCall,symCall,symPush,symExit,symPrimitive,symReserveLocals,symLocalSet;

static void
toExec(Obj exp, struct program *p) {
  Obj sym = car(exp);
  if (sym == symConst) {
    progAppendOP(p, opConst);
    Obj val = cadr(exp);
    if (iscons(val)) {
      /* printObj(stdout, exp); */
      /* printf("invalid bytecode (const (pair ..))\n"); */
      /* assert(false); */
    }
    progAppendObj(p, val);
  } else if (sym == symLocalRef) {
    progAppendOP(p, opLocalRef);
    progAppendInt32(p, fixnum(cadr(exp)));
  } else if (sym == symClosureRef) {
    progAppendOP(p, opClosureRef);
    progAppendInt32(p, fixnum(cadr(exp)));
  } else if (sym == symGlobalRef) {
    progAppendOP(p, opGlobalRef);
    progAppendObj(p, cadr(exp));
  } else if (sym == symIf) {
    progAppendOP(p, opIf);
    int pos = p->len1;
    ensureSize(&p->code, &p->len1, &p->cap1, sizeof(uint32_t));
    p->len1 += sizeof(uint32_t);
    toExecMany(cadr(exp), p);
    int sz = p->len1 - pos - sizeof(uint32_t);
    *((uint32_t*)(p->code+pos)) = sz;
    toExecMany(cadr(cdr(exp)), p);
  } else if (sym == symMakeClosure) {
    progAppendOP(p, opMakeClosure);
    progAppendInt32(p, fixnum(cadr(exp))); // required
    progAppendInt32(p, fixnum(cadr(cdr(exp)))); // nfrees
    int pos = p->len1;
    ensureSize(&p->code, &p->len1, &p->cap1, sizeof(uint32_t));
    p->len1 += sizeof(uint32_t);
    toExecMany(cadr(cdr(cdr(exp))), p);
    int sz = p->len1 - pos - sizeof(uint32_t);
    *(uint32_t*)(p->code+pos) = sz;
  } else if (sym == symTailCall) {
    progAppendOP(p, opTailCall);
    progAppendInt32(p, fixnum(cadr(exp)));
  } else if (sym == symCall) {
    progAppendOP(p, opCall);
    progAppendInt32(p, fixnum(cadr(exp)));
  } else if (sym == symPush) {
    progAppendOP(p, opPush);
  } else if (sym == symExit) {
    progAppendOP(p, opExit);
  } else if (sym == symReserveLocals) {
    progAppendOP(p, opReserveLocals);
    progAppendInt32(p, fixnum(cadr(exp)));
  } else if (sym == symLocalSet) {
    progAppendOP(p, opLocalSet);
    progAppendInt32(p, fixnum(cadr(exp)));
  } else if (sym == symPrimitive) {
    Obj prim = cadr(exp);
    progAppendPrim(p, prim);
  } else {
    /* printf("instr not implement: %s\n", symbolStr(car(exp))); */
    printf("instr not implement: ");
    printObj(stdout, exp);
    printf("\n");
  }
}

static void
toExecMany(Obj exp, struct program *p) {
  for (; exp != Nil; exp = cdr(exp)) {
    toExec(car(exp), p);
  }
}

Obj
bytecodeToExec(Obj bc)  {
  struct program *p = makeProgram();
  toExecMany(bc, p);
  return makeCObj(p);
}

int
loadByteCode(struct VM *vm, int pos, str path) {
  FILE *in = fopen(path.str, "r");
  if (in == NULL) {
    assert("wrong path");
  }
  struct SexpReader r = {.pkgMapping = Nil, .selfPath = ""};
  int err = 0;
  Obj ast = sexpRead(vm, pos, &r, in, &err);
  while(ast != Nil) {
    /* printf("========================================= read == \n"); */
    Obj code = car(ast);
    Obj p = bytecodeToExec(code);

    struct program *prog = mustCObj(p);
    run(vm, prog->code, pos);
    /* printObj(stdout, res); */
    ast = cdr(ast);
  }
  return 0;
}

Obj
eval(struct VM *vm, int pos, Obj exp) {
  // call (cora/lib/compile.cc exp) to generate the bytecode
  Obj compile = symbolGet(makeSymbol("cora/lib/compile.cc"));
  vmPush(vm, pos++, compile);
  vmPush(vm, pos++, exp);
  Obj res = vmCall(vm, pos, 2);

  /* printf("the byte code is ===\n"); */
  /* printObj(stdout, vm->result); */

  /* Obj bytecodeToExec = symbolGet(makeSymbol("cora/lib/compile.bytecode-to-exec")); */
  /* vmPush(vm, pos++, bytecodeToExec); */
  /* vmPush(vm, pos++, res); */
  /* Obj p = vmCall(vm, pos, 2); */
  Obj p = bytecodeToExec(res);

  // run the bytecode
  struct program *prog = mustCObj(p);
  return run(vm, prog->code, pos);
}

Obj
macroExpand(struct VM *vm, int pos, Obj exp) {
  Obj val = symbolGet(symMacroExpand);
  if (val == Nil || val == Undef) {
    return exp;
  }
  vmPush(vm, pos++, val);
  vmPush(vm, pos++, exp);
  return vmCall(vm, pos, 2);
}

void
builtinGenerateStr(void *pc, Obj val, struct VM *vm, int pos) {
  Obj to = vmGet(vm, 1);
  FILE* out = mustCObj(to);
  Obj exp = vmGet(vm, 2);
  strBuf s = stringStr(exp);
  fprintf(out, "%s", toCStr(s));
  vmReturn(vm, Nil);
}

void
builtinGenerateSym(void *pc, Obj val, struct VM *vm, int pos) {
  Obj to = vmGet(vm, 1);
  FILE* out = mustCObj(to);
  Obj exp = vmGet(vm, 2);
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
  vmReturn(vm, Nil);
}

void
builtinGenerateNum(void *pc, Obj val, struct VM *vm, int pos) {
  Obj to = vmGet(vm, 1);
  FILE* out = mustCObj(to);
  Obj exp = vmGet(vm, 2);
  fprintf(out, "%ld", fixnum(exp));
  vmReturn(vm, Nil);
}

void
builtinOpenOutputFile(void *pc, Obj val, struct VM *vm, int pos) {
  Obj arg1 = vmGet(vm, 1);
  strBuf filePath = stringStr(arg1);
  FILE* f = fopen(toCStr(filePath), "w");
  vmReturn(vm, makeCObj(f));
}

void
builtinCloseOutputFile(void *pc, Obj val, struct VM *vm, int pos) {
  Obj arg1 = vmGet(vm, 1);
  FILE *f = mustCObj(arg1);
  int errno = fclose(f);
  vmReturn(vm, makeNumber(errno));
}

void
builtinReadFileAsSexp(void *pc, Obj val, struct VM *vm, int pos) {
  Obj arg = vmGet(vm, 1);
  assert(isstring(arg));
  strBuf fileName = stringStr(arg);
  FILE* f = fopen(toCStr(fileName), "r");
  Obj result = Nil;
  if (f == NULL) {
    printf("open file fail %s\n", toCStr(fileName));
    goto exit0;
  }

  int errCode = 0;
  struct SexpReader r = {.pkgMapping = Nil};
  Obj ast = sexpRead(vm, pos, &r, f, &errCode);
  while (ast != Nil) {
    result = cons(vm, pos, ast, result);
    ast = sexpRead(vm, pos, &r, f, &errCode);
  }
  if (iscons(result) && cdr(result) != Nil) {
    result = reverse(vm, pos, result);
    result = cons(vm, pos, makeSymbol("begin"), result);
  } else {
    result = car(result);
  }
  fclose(f);

 exit0:
  vmReturn(vm, result);
}
