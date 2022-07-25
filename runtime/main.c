#include "types.h"
#include "vm.h"
#include "builtin.h"
#include "reader.h"
#include <assert.h>
#include <unistd.h>
#include <stdio.h>

void entry(struct VM *vm);
void fn_xx(struct VM *vm);
void fn_yy(struct VM *vm);


void fn_label_0(struct VM *vm) {
  vm->val = vmGet(vm, 2);
  if (vm->val == True) {
    vm->val = makeNumber(4);
    push(vm, vm->val);
    vm->val = makeNumber(7);
    push(vm, vm->val);
    builtinAdd(vm);
    vmReturn(vm, vm->val);
  } else if (vm->val == False) {
    vm->val = makeNumber(42);
    vmReturn(vm, vm->val);
  } else {
    perror("if only accept true or false");
  }
}

void fn_label_1(struct VM *vm) {
  vmReturn(vm, vm->val);
}

void entry(struct VM *vm) {
  push(vm, Nil);
  vm->val = makeClosure(1, fn_label_0, NULL, NULL);
  push(vm, vm->val);
  vm->val = True;
  push(vm, vm->val);
  instrCall(vm, 2, fn_label_1);
}

extern Obj eval(struct VM *vm, Obj exp);

static void
repl(struct VM *vm, FILE* stream) {
  Obj res;
  for (int i=0; ; i++) {
    if (stream == stdin) {
      printf("%d #> ", i);
    }

    int err = 0;
    Obj exp = sexpRead(stream, &err);
    if (err != 0) {
      break;
    }

    /* Obj exp1 = MacroExpand(exp); */
    /* res = Eval(exp1, Nil); */

    Obj res = eval(vm, exp);

    if (stream == stdin) {
      sexpWrite(stdout, res);
      printf("\n");
    }
  }

  if (stream != stdin) {
    sexpWrite(stdout, res);
    printf("\n");
  }
}

int main(int argc, char *argv[]) {
  coraInit();
  struct VM *vm = newVM();
  /* run(vm, entry); */
  /* Obj ret = pop(vm); */
  /* printf("result == %ld\n", ret); */

  repl(vm, stdin);

  return 0;
}

