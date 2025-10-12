#include "runtime.h"

extern void builtinImport(struct Cora *co);

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

		co->args[0] = globalRef(intern("macroexpand"));
		co->args[1] = exp;
		co->nargs = 2;
		trampoline(co, 0, coraDispatch);
		exp = co->args[1];

		/* printf("after macro expand =="); */
		/* sexpWrite(stdout, exp); */
		/* printf(" --- %d %d\n", co->base, co->pos); */
		/* printf("\n"); */

		co->args[0] = globalRef(intern("cora/lib/eval#eval"));
		co->args[1] = exp;
		co->args[2] = Nil;
		co->nargs = 3;
		trampoline(co, 0, coraDispatch);

		if (stream == stdin) {
			sexpWrite(stdout, co->args[1]);
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

int main(int argc, char *argv[]) {
	uintptr_t dummy;
	struct Cora* co = coraInit(&dummy);
	co->nargs = 2;
	co->args[1] = makeCString("cora/init");
	trampoline(co, 0, builtinImport);
  
	co->nargs = 2;
	co->args[1] = makeCString("cora/lib/toc1");
	trampoline(co, 0, builtinImport);

	co->nargs = 2;
	co->args[1] = makeCString("cora/lib/eval");
	trampoline(co, 0, builtinImport);

	if (argc == 1) {
		repl(co, stdin);
	} else {
		shebang(co, argc, argv);
	}
}

