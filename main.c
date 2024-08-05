#include "runtime.h"


extern void builtinLoadSo(struct Cora *co);

int main(int argc, char *argv[]) {
  void* dummy;
  coraInit(&dummy);
  struct Cora* co = coraNew();
  Obj imported = intern("*imported*");

  co->args[1] = makeString1("init.so");
  co->args[2] = makeString1("cora/init");
  co->nargs = 3;
  trampoline(co, builtinLoadSo);
  symbolSet(imported, cons(makeString1("cora/init"), Nil));

  symbolSet(imported, cons(makeString1("cora/lib/toc/internal"), symbolGet(imported)));
  /* symbolSet(imported, cons(makeString1("cora/lib/io"), symbolGet(imported))); */
  
  co->args[1] = makeString1("toc.so");
  co->args[2] = makeString1("");
  co->nargs = 3;
  trampoline(co, builtinLoadSo);
  symbolSet(imported, cons(makeString1("cora/lib/toc/include"), symbolGet(imported)));
  
  struct SexpReader r = {.pkgMapping = Nil};
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
    trampoline(co, coraCall);
    exp = co->args[1];

    /* printf("after macro expand =="); */
    /* sexpWrite(stdout, exp); */
    /* printf(" --- %d %d\n", co->base, co->pos); */
    /* printf("\n"); */

    co->args[0] = globalRef(intern("cora/lib/toc/include.eval0"));
    co->args[1] = exp;
    co->nargs = 2;
    trampoline(co, coraCall);

    sexpWrite(stdout, co->args[1]);
    printf("\n");
  }
}
