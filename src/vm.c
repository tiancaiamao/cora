#include "types.h"
#include "vm.h"
#include "gc.h"
#include "builtin.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>

struct VM*
newVM() {
  struct VM* vm = (struct VM*)malloc(sizeof(struct VM));
  vm->pc = NULL;
  vm->data = (Obj*)malloc(sizeof(Obj)*2048);
  vm->base = 0;
  vm->pos = 0;

  vm->contStack.size = 0;
  vm->contStack.cap = 16;
  int sz = sizeof(struct continuation) * vm->contStack.cap;
  vm->contStack.data = malloc(sz);
  memset(vm->contStack.data, 0, sz);

  vm->gcTicker = 0;
  vm->r = (struct SexpReader){.pkgMapping = Nil};
  return vm;
}

void
run(struct VM* vm, InstrFunc code) {
  vmSaveCont(vm, vm->pos, NULL, NULL);
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

  struct continuation* cc = &vm->contStack.data[vm->contStack.size-1];
  vm->contStack.size--;
  assert(vm->contStack.size >= 0);
  struct stack s = cc->s;

  if (vm->data == s.data) {
    assert(s.base <= vm->base);
    assert(s.pos <= vm->pos);
  }

  vm->data = s.data;
  vm->base = s.base;
  vm->pos = s.pos;
  vm->val = x;

  nextInstr(vm, cc->code, cc->codeData);
}

extern struct GC *gc;

/* static char *typeName[] = { */
/*   "bool", */
/*   "null", */
/*   "number", */
/*   "cons", */
/*   "curry", */
/*   "string", */
/*   "vector", */
/*   "closure", */
/*   "continuation", */
/*   "primitive", */
/*   "instr", */
/* }; */

void
push(struct VM *vm, Obj v) {
  assert(vm->pos >= 0);
  assert(vm->pos >= vm->base);

  vm->data[vm->pos++] = v;

  /*   // read barrier */
  /* if (gcIng(gc)) { */
  /*   scmHead *tmp = getScmHead(v); */
  /*   if (tmp != NULL) { */
  /*     if (ecru(gc, tmp)) { */
  /* 	/\* unlink(v); *\/ */
  /* 	/\* link(v, &gc->gray); *\/ */
  /* 	printf("!!!!!!!!!!!!!!! %p %s\n", v, typeName[tmp->type]); */
  /*     } */
  /*   } */
  /* } */
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

void
contStackPush(struct contStack *s, struct continuation cont) {
  if (s->size >= s->cap) {
    if (s->cap == 0) {
      s->cap = 16;
    }
    s->cap = s->cap * 2;
    s->data = realloc(s->data, sizeof(struct continuation) * s->cap);
  }

  s->data[s->size] = cont;
  s->size++;
}

void
vmSaveCont(struct VM *vm, int end, InstrFunc code, Instr codeData) {
  contStackPush(&vm->contStack, (struct continuation){
      .s = (struct stack){
	.data = vm->data,
	.base = vm->base,
	.pos = end,
      },
      .code = code,
      .codeData = codeData});
}

void
vmSet(struct VM* vm, int idx, Obj v) {
  vm->data[vm->base + idx] = v;

  /*   // read barrier */
  /* if (gcIng(gc)) { */
  /*   scmHead *tmp = getScmHead(v); */
  /*   if (tmp != NULL) { */
  /*     if (ecru(gc, tmp)) { */
  /* 	/\* unlink(v); *\/ */
  /* 	/\* link(v, &gc->gray); *\/ */
  /* 	printf("3333 !!!!!! %p %s\n", v, typeName[tmp->type]); */
  /*     } */
  /*   } */
  /* } */
}

void
vmResize(struct VM* vm, int sz) {
  assert(vm->pos >= 0);
  assert(vm->pos >= vm->base);

  vm->pos = vm->base + sz;
}

static struct registModule builtinPrimitives = {
  NULL,
  {
    {"+", builtinAdd, 2, "Add"},
    {"-", builtinSub, 2, "Sub"},
    {"*", builtinMul, 2, "Mul"},
    {"/", builtinDiv, 2, "Div"},
    {"%", builtinMod, 2, "Mod"},
    {"=", builtinEqual, 2, "Equal"},
    {"set", builtinSet, 2, "Set"},
    {"cons", builtinCons, 2, "Cons"},
    {"car", builtinCar, 1, "Car"},
    {"cdr", builtinCdr, 1, "Cdr"},
    {"cons?", builtinIsCons, 1, "IsCons"},
    {"gensym", builtinGensym, 1, "Gensym"},
    {">", builtinGT, 2, "GT"},
    {"<", builtinLT, 2, "LT"},
    {"not", builtinNot, 1, "Not"},
    {"symbol?", builtinIsSymbol, 1, "IsSymbol"},
    {"string?", builtinIsString, 1, "IsString"},
    {"number?", builtinIsNumber, 1, "IsNumber"},
    {"vector", builtinMakeVector, 1, "MakeVector"},
    {"vector-set!", builtinVectorSet, 3, "VectorSet"},
    {"vector-ref", builtinVectorRef, 2, "VectorRef"},
    {"vector?", builtinIsVector, 1, "IsVector"},
    {"intern", builtinIntern, 1, "Intern"},
    {"load", builtinLoad, 2, "Load"},
    {"load-so", builtinLoadSo, 1, "LoadSo"},
    {NULL, NULL, 0}
  }
};

static struct registModule builtinClosures = {
  NULL,
  {
    {"try", builtinTryCatch, 2, ""},
    {"throw", builtinThrow, 1, ""},
    {"import", builtinImport, 1, ""},
    {NULL, NULL, 0}
  }
};

static void
registAPIHelp(struct registModule* m, bool isPrimitive) {
  if (m->init != NULL) {
    m->init();
  }

  for (int i=0; ; i++) {
    struct registEntry entry = m->entries[i];
    if (entry.func == NULL) {
      break;
    }

    // printf("registAPI: %s\n", entry.name);
    Obj prim;
    if (isPrimitive) {
      prim = makePrimitive(entry.func, entry.args, entry.name, entry.fname);
    } else {
      struct hashForObj h;
      prim = makeClosure(entry.args, entry.func, NULL, Nil, h);
    }

    symbolSet(intern(entry.name), prim);
  }
}

void
registAPI(struct registModule* m) {
  return registAPIHelp(m, false);
}

struct GC *gc;

static void*
allocFn(void *allocator, int sz) {
  void *p = malloc(sz);
  assert(p != NULL);
  /* printf("alloc ---%p\n", p); */
  return p;
}

static void
recycleFn(void *allocator, void *ptr) {
  /* scmHead* xx = ptr; */
  /* printf("recycle ---%p %s\n", ptr, typeName[xx->type]); */
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

  symbolSet(intern("*imported*"), Nil);

  registAPIHelp(&builtinPrimitives, true);
  registAPIHelp(&builtinClosures, false);
}
