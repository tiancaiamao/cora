#include "runtime.h"


extern void builtinLoadSo(struct Cora *co);
extern void builtinImport(struct Cora *co);

int main(int argc, char *argv[]) {
  uintptr_t dummy;
  struct Cora* co = coraNew();
  coraInit(co, &dummy);
  co->args[1] = makeCString("cora/init");
  co->nargs = 2;
  trampoline(co, 0, builtinImport);
  
  co->args[1] = makeCString("cora/lib/toc");
  co->nargs = 2;
  trampoline(co, 0, builtinImport);
  
  struct SexpReader r = {co: co};
  int errCode = 0;

  for (int i=0; ; i++) {
    printf("%d #> ", i);

    Obj exp = sexpRead(&r, stdin, &errCode);
    if (errCode != 0) {
      break;
    }

    /* printf("before macro expand =="); */
    /* sexpWrite(stdout, exp); */
    /* printf("\n"); */

    co->args[0] = globalRef(intern("macroexpand"));
    co->args[1] = exp;
    co->nargs = 2;
    trampoline(co, 0, coraDispatch);
    exp = co->args[1];

    /* printf("after macro expand =="); */
    /* sexpWrite(stdout, exp); */
    /* printf(" --- %d %d\n", co->base, co->pos); */
    /* printf("\n"); */

    co->args[0] = globalRef(intern("cora/lib/toc#eval0"));
    co->args[1] = exp;
    co->nargs = 2;
    trampoline(co, 0, coraDispatch);

    sexpWrite(stdout, co->args[1]);
    printf("\n");
  }
}
