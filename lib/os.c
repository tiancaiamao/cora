#include <stdlib.h>
#include <unistd.h>
#include "types.h"
#include "str.h"
#include "vm.h"

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
exec(struct VM *vm) {
  Obj args = vmGet(vm, 1);
  strBuf cmd = cmdListStr(args);
  int exitCode = system(toCStr(cmd));
  vmReturn(vm, makeNumber(exitCode));
  return;
}

static void
popenFn(struct VM *vm) {
  Obj cmd = vmGet(vm, 1);
  Obj mode = vmGet(vm, 2);
  char* type = symbolStr(mode);

  strBuf cmdStr = cmdListStr(cmd);
  FILE* f = popen(toCStr(cmdStr), type);

  vmReturn(vm, makeCObj(f));
  return;
}

static void
pcloseFn(struct VM *vm) {
  Obj arg = vmGet(vm, 1);
  FILE *f = mustCObj(arg);
  int res = pclose(f);
  vmReturn(vm, res);
  return;
}

static struct registerModule osModule = {
  NULL,
  {
    {"exec", exec, 1},
    {"popen", popenFn, 2},
    {"pclose", pcloseFn, 1},
  }
};

void
__entry(struct VM *vm) {
  Obj pkg = vmGet(vm, 2);
  registerAPI(&osModule, toStr(stringStr(pkg)));
  return vmReturn(vm, intern("os"));
}
