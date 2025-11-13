#include "cora.h"
#include "reader.h"
#include <stdlib.h>
#include <string.h>

static void
repl(Cora* co, FILE* stream) {
	int errCode = 0;

	for (int i = 0;; i++) {
		if (stream == stdin) {
			printf("%d #> ", i);
		}

		Obj exp = sexpRead(coraGetGC(co), stream, &errCode);
		if (errCode != 0) {
			break;
		}

		/* printf("before macro expand =="); */
		/* sexpWrite(stdout, exp); */
		/* printf("\n"); */

		Obj fn = coraSymbolGet(co, intern("macroexpand"));
		Obj args[1] = {exp};
		coraCall(co, fn, 1, args);
		coraRun(co);
		exp = coraGetResult(co);

		/* printf("after macro expand =="); */
		/* sexpWrite(stdout, exp); */
		/* printf(" --- %d %d\n", co->base, co->pos); */
		/* printf("\n"); */

		fn = coraSymbolGet(co, intern("cora/lib/eval#eval"));
		Obj _args[2] = {exp, Nil};
		coraCall(co, fn, 2, _args);
		coraRun(co);

		if (stream == stdin) {
			sexpWrite(stdout, coraGetResult(co));
			printf("\n");
		}
	}
}

static void
shebang(Cora* co, int argc, char* argv[]) {
	FILE* f = fopen(argv[1], "r");
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
	while (true) {
		char* line = fgets(buf, 256, f);
		if (line == NULL) {
			exit(-1);
		}
		// The length of the first line is more than 255 bytes.
		if (buf[254] != '\n') {
			break;
		}
	}

	Obj args = Nil;
	for (int i = 1; i < argc; i++) {
		Obj arg = coraMakeString(co, argv[i], strlen(argv[i]));
		args = coraMakeCons(co, arg, args);
	}
	args = reverse(coraGetGC(co), args);
	coraPrimSet(co, intern("*command-line-args*"), args);

	repl(co, f);
}

/* extern void entry(struct Cora *co, int label, Obj *R); */

int
main(int argc, char* argv[]) {
	Cora* co = coraInit();

	/* entry(co, 0, NULL); */
	/* coraRun(co); */
	/* printf("check result:\n"); */
	/* printObj(stderr, coraGetResult(co)); */
	/* return 0; */

	Obj fn = coraSymbolGet(co, intern("import"));
	Obj arg1 = makeCString(coraGetGC(co), "cora/init");
	Obj args[1] = {arg1};
	coraCall(co, fn, 1, args);
	coraRun(co);

	arg1 = makeCString(coraGetGC(co), "cora/lib/toc");
	Obj _args[1] = {arg1};
	coraCall(co, fn, 1, _args);
	coraRun(co);

	arg1 = makeCString(coraGetGC(co), "cora/lib/eval");
	Obj __args[1] = {arg1};
	coraCall(co, fn, 1, __args);
	coraRun(co);

	if (argc == 1) {
		repl(co, stdin);
	} else {
		shebang(co, argc, argv);
	}
}
