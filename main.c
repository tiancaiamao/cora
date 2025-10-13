#include "runtime.h"

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

static void
shebang(struct Cora *co, int argc, char *argv[]) {
	FILE *f = fopen(argv[1], "r");
	if (f == NULL) {
		// TODO: what the fuck?
		exit(-1);
	}

	// Ignore the shebang line:
	// #!/usr/bin/env cora
	//
	// (followed by cora script ...)
	//
	char buf[256];
	while(true) {
		char *line = fgets(buf, 256, f);
		if (line == NULL) {
			exit(-1);
		}
		// The length of the first line is more than 255 bytes.
		if (buf[254] != '\n') {
			break;
		}
	}

	Obj args = Nil;
	for (int i=1; i<argc; i++) {
		Obj arg = makeString(argv[i], strlen(argv[i]));
		args = cons(arg, args);
	}
	args = reverse(args);
	primSet(co, intern("*command-line-args*"), args);

	repl(co, f);
}

/* extern void entry(struct Cora *co, int label, Obj *R); */

int main(int argc, char *argv[]) {
	uintptr_t dummy;
	struct Cora * co = coraInit(&dummy);

	Obj fn = globalRef(intern("import"));
	Obj arg1 = makeCString("cora/init");
	coraCall1(co, fn, arg1);
	coraRun(co);

	arg1 = makeCString("cora/lib/toc");
	coraCall1(co, fn, arg1);
	coraRun(co);

	arg1 = makeCString("cora/lib/eval");
	coraCall1(co, fn, arg1);
	coraRun(co);


	if (argc == 1) {
		repl(co, stdin);
	} else {
		shebang(co, argc, argv);
	}

	/* entry(co, 0, NULL); */
	/* coraRun(co); */
	/* printf("check macroexpand result:\n"); */
	/* printObj(stderr, co->res); */
}
