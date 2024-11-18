#include "runtime.h"


extern void builtinLoadSo(struct Cora *co);

int main(int argc, char *argv[]) {
  uintptr_t dummy;
  struct Cora* co = coraNew();
  coraInit(co, &dummy);
  Obj imported = intern("*imported*");

  co->args[1] = makeString1("init.so");
  co->args[2] = makeString1("cora/init");
  co->nargs = 3;
  trampoline(co, 0, builtinLoadSo);
  primSet(co, imported, cons(makeString1("cora/init"), Nil));
  primSet(co, imported, cons(makeString1("cora/lib/toc/internal"), symbolGet(imported)));
  
  co->args[1] = makeString1("toc.so");
  co->args[2] = makeString1("");
  co->nargs = 3;
  trampoline(co, 0, builtinLoadSo);
  primSet(co, imported, cons(makeString1("cora/lib/toc"), symbolGet(imported)));
  
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

    co->args[0] = globalRef(intern("cora/lib/toc.eval0"));
    co->args[1] = exp;
    co->nargs = 2;
    trampoline(co, 0, coraDispatch);

    sexpWrite(stdout, co->args[1]);
    printf("\n");
  }
}
