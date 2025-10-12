#include "runtime1.h"

static void
repl(struct Cora *co, FILE* stream) {
	struct SexpReader r = { .co = co};
	int errCode = 0;

	for (int i=0; ; i++) {
		if (stream == stdin) {
			printf("%d #> ", i);
		}

		Obj exp = sexpRead(&r, stream, &errCode);
		if (errCode != 0) {
			break;
		}

		/* printf("before macro expand =="); */
		/* sexpWrite(stdout, exp); */
		/* printf("\n"); */

		Obj fn = globalRef(intern("macroexpand"));
		coraCall1(co, fn, exp);
		coraRun(co);
		exp = co->res;

		/* printf("after macro expand =="); */
		/* sexpWrite(stdout, exp); */
		/* printf(" --- %d %d\n", co->base, co->pos); */
		/* printf("\n"); */

		fn = globalRef(intern("cora/lib/eval#eval"));
		coraCall2(co, fn, exp, Nil);
		coraRun(co);

		if (stream == stdin) {
			sexpWrite(stdout, co->res);
			printf("\n");
		}
	}
}


extern void entry(struct Cora *co, int label, Obj *R);


int main() {
	uintptr_t dummy;
	struct Cora * co = coraInit(&dummy);

	Obj fn = globalRef(intern("import"));
	Obj arg1 = makeCString("cora/init");
	coraCall1(co, fn, arg1);
	coraRun(co);

	arg1 = makeCString("cora/lib/toc1");
	coraCall1(co, fn, arg1);
	coraRun(co);

	arg1 = makeCString("cora/lib/eval");
	coraCall1(co, fn, arg1);
	coraRun(co);

	repl(co, stdin);
	return 0;

	/* entry(co, 0, NULL); */
	/* coraRun(co); */
	/* printf("check macroexpand result:\n"); */
	/* printObj(stderr, co->res); */
}
