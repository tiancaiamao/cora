#include <stdlib.h>
#include <unistd.h>
#include "types.h"
#include "str.h"
#include "runtime.h"

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
exec(struct Cora *co) {
  Obj args = co->args[1];
  strBuf cmd = cmdListStr(args);
  int exitCode = system(toCStr(cmd));
  co->nargs = 2;
  co->args[1] = makeNumber(exitCode);
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
  return;
}

static void
popenFn(struct Cora *co) {
  Obj cmd = co->args[1];
  Obj mode = co->args[2];
  char* type = symbolStr(mode);

  strBuf cmdStr = cmdListStr(cmd);
  FILE* f = popen(toCStr(cmdStr), type);

  co->nargs = 2;
  co->args[1] = makeCObj(f);
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
  return;
}

static void
pcloseFn(struct Cora *co) {
  Obj arg = co->args[1];
  FILE *f = mustCObj(arg);
  int res = pclose(f);
  co->nargs = 2;
  co->args[1] = res;
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
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
entry(struct Cora *co) {
  Obj pkg = co->args[2];
  registerAPI(&osModule, toStr(stringStr(pkg)));
  co->nargs = 2;
  co->args[1] = intern("os");
  popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
  return;
}
