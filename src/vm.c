#include "types.h"
#include "vm.h"
#include "builtin.h"
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

struct VM*
newVM() {
  struct VM* vm = (struct VM*)malloc(sizeof(struct VM));
  vm->pc = NULL;
  vm->data = (Obj*)malloc(sizeof(Obj)*2048);
  vm->base = 0;
  vm->pos = 0;

  vm->gcTicker = 0;
  return vm;
}

void
saveCC(struct VM *vm) {
  struct stack save;
  save.data = vm->data;
  save.base = vm->base;
  save.pos = vm->pos;
  Obj cont = makeContinuation(save, NULL, NULL);
  vm->base = vm->pos;
  push(vm, cont);
}

void
run(struct VM* vm, InstrFunc code) {
  saveCC(vm);
  vm->pc = code;
  while(vm->pc != NULL) {
    vm->pc(vm);
  }
}

void
nextInstr(struct VM *vm, InstrFunc code, void *codeData) {
  vm->pc = code;
  vm->pcData = codeData;
}

void
vmReturn(struct VM *vm, Obj x) {
  assert(vm->pos >= 0);
  assert(vm->pos >= vm->base);

  Obj cc = vmGet(vm, 0);
  struct stack s = contStack(cc);

  assert(s.base <= vm->base);
  assert(s.pos <= vm->pos);

  vm->data = s.data;
  vm->base = s.base;
  vm->pos = s.pos;

  vm->val = x;
  InstrFunc fn = contCode(cc);
  InstrFunc data = contCodeData(cc);
  nextInstr(vm, fn, data);
}

void
push(struct VM *vm, Obj v) {
  assert(vm->pos >= 0);
  assert(vm->pos >= vm->base);

  vm->data[vm->pos++] = v;
}

Obj
pop(struct VM* vm) {
  vm->pos--;

  assert(vm->pos >= 0);
  assert(vm->pos >= vm->base);

  return vm->data[vm->pos];
}

Obj
vmGet(struct VM* vm, int idx) {
  if (idx >= 0) {
    return vm->data[vm->base + idx];
  } else {
    return vm->data[vm->pos + idx];
  }
}

Obj
ctxGet(struct VM*vm, int idx) {
  assert(idx >=0);
  return vmGet(vm, idx+1);
}

void
vmSet(struct VM* vm, int idx, Obj v) {
  vm->data[vm->base + idx] = v;
}

void
vmResize(struct VM* vm, int sz) {
  assert(vm->pos >= 0);
  assert(vm->pos >= vm->base);

  vm->pos = vm->base + sz;
}

void
instrCall(struct VM *vm, int argc, InstrFunc next) {
  Obj fn = vmGet(vm, -argc);
  Instr code = closureCode(fn);

  int newBase = vm->pos - argc - 1;
  struct stack save;
  save.data = vm->data;
  save.base = vm->base;
  save.pos = newBase;

  printf("instr call save stack == %d %d\n", save.base, save.pos);
  
  // Save the old continuation.
  Obj cont = makeContinuation(save, next, NULL);
  vm->base = newBase;
  vmSet(vm, 0, cont);

  // Change the PC register.
  nextInstr(vm, code->fn, code);
}

struct registEntry {
  char *name;
  InstrFunc func;
  int args;
};

struct registModule {
  void (*init)();
  struct registEntry entries[];
};

static struct registModule builtinModule = {
  NULL,
  {
    {"+", builtinAdd, 2},
    {"-", builtinSub, 2},
    {"*", builtinMul, 2},
    {"/", builtinDiv, 2},
    {"%", builtinMod, 2},
    {"=", builtinEqual, 2},
    {"set", builtinSet, 2},
    {"value", builtinValue, 1},
    {"cons", builtinCons, 2},
    {"car", builtinCar, 1},
    {"cdr", builtinCdr, 1},
    {"cons?", builtinIsCons, 1},
    {"gensym", builtinGensym, 1},
    {">",builtinGT, 2},
    {"<",builtinLT, 2},
    {"not",builtinNot, 1},
    {"symbol?",builtinIsSymbol, 1},
    {"string?",builtinIsString, 1},
    {"number?",builtinIsNumber, 1},
    {"vector",builtinMakeVector, 1},
    {"vector-set!",builtinVectorSet, 3},
    {"vector-ref",builtinVectorRef, 2},
    {"vector?",builtinIsVector, 1},
    {"intern",builtinIntern, 1},
    {"load",builtinLoad, 1},
    /* {"load-so",builtinLoadSo, 1}, */
    {NULL, NULL, 0}
  }
};

void
registAPI(struct registModule* m) {
  if (m->init != NULL) {
    m->init();
  }

  for (int i=0; ; i++) {
    struct registEntry entry = m->entries[i];
    if (entry.func == NULL) {
      break;
    }

    // printf("registAPI: %s\n", entry.name);
    Obj prim = makePrimitive(entry.func, entry.args, entry.name);

    symbolSet(intern(entry.name), prim);
  }
}

struct GC *gc;

static void*
allocFn(void *allocator, int sz) {
  void *p = malloc(sz);
  assert(p != NULL);
  /* printf("alloc ---%p\n", p); */
  return p;
}

static char *typeName[] = {
  "bool",
  "null",
  "number",
  "cons",
  "curry",
  "string",
  "vector",
  "closure",
  "continuation",
  "primitive",
  "instr",
};

static void
recycleFn(void *allocator, void *ptr) {
  scmHead* xx = ptr;
  /* printf("recycle ---%p %s\n", ptr, typeName[xx->type]); */
  /* if (xx->type == 7) { */
  /*   return; */
  /* } */
  return free(ptr);
}

void
coraInit() {
  gc = gcInit(NULL, allocFn, recycleFn);
  typesInit(gc);
  symQuote = intern("quote");
  symIf = intern("if");
  symLambda = intern("lambda");
  symDo = intern("do");
  symMacroExpand = intern("macroexpand");
  symDebugEval = intern("*debug-eval*");


  registAPI(&builtinModule);
  /* registAPI(&stringModule); */
}
