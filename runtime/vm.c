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
  printf("addr of vm is %p\n", vm);
  return vm;
}

void
run(struct VM* vm, InstrFunc code) {
  struct stack save;
  save.data = vm->data;
  save.base = vm->base;
  save.pos = vm->pos;
  Obj cont = makeContinuation(save, NULL, NULL);
  vm->base = vm->pos;
  push(vm, cont);

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
  Obj cc = vmGet(vm, 0);
  struct stack s = contStack(cc);
  vm->data = s.data;
  vm->base = s.base;
  vm->pos = s.pos;

  vm->val = x;
  Instr i = contCode(cc);
  nextInstr(vm, i.fn, i.data);
}

void
push(struct VM *vm, Obj v) {
  vm->data[vm->pos++] = v;
}

Obj
pop(struct VM* vm) {
  vm->pos--;
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
  
  // Save the old continuation.
  Obj cont = makeContinuation(save, next, NULL);
  vm->base = newBase;
  vmSet(vm, 0, cont);

  // Change the PC register.
  nextInstr(vm, code.fn, code.data);
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
    /* {"%", builtinMod, 2}, */
    {"=", builtinEqual, 2},
    {"set", builtinSet, 2},
    /* {"value", builtinValue, 1}, */
    /* {"cons", builtinCons, 2}, */
    /* {"car", builtinCar, 1}, */
    /* {"cdr", builtinCdr, 1}, */
    /* {"cons?", builtinIsCons, 1}, */
    /* {"gensym", builtinGensym, 1}, */
    /* {">",builtinGT, 2}, */
    /* {"<",builtinLT, 2}, */
    /* {"not",builtinNot, 1}, */
    /* {"symbol?",builtinIsSymbol, 1}, */
    /* {"string?",builtinIsString, 1}, */
    /* {"number?",builtinIsNumber, 1}, */
    /* {"vector",builtinMakeVector, 1}, */
    /* {"vector-set!",builtinVectorSet, 3}, */
    /* {"vector-ref",builtinVectorRef, 2}, */
    /* {"vector?",builtinIsVector, 1}, */
    /* {"intern",builtinIntern, 1}, */
    /* {"load",builtinLoad, 1}, */
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

    symbolSet(intern(entry.name), makePrimitive(entry.func, entry.args));
  }
}

void
coraInit() {
  /* gcInit(&gc); */
  /* typesInit(); */
  symQuote = intern("quote");
  symIf = intern("if");
  symLambda = intern("lambda");
  symDo = intern("do");
  symMacroExpand = intern("macroexpand");
  symDebugEval = intern("*debug-eval*");


  registAPI(&builtinModule);
  /* registAPI(&stringModule); */
}
