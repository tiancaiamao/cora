#include <stdio.h>
#include <string.h>
#include "runtime.h"
#include "reader.h"


static void
TestReadSexp() {
	char buffer[] = "(a b c)";
	/* char buffer[] = "(a)"; */
	FILE *stream = fmemopen(buffer, strlen(buffer), "r");

	struct SexpReader reader = { };
	int errCode;
	Obj o = sexpRead(&reader, stream, &errCode);

	/* Obj r = cons(intern("a"), cons(intern("b"), cons(intern("c"), Nil))); */
	Obj z = cons(intern("a"), cons(intern("b"), cons(intern("c"), Nil)));

	assert(iscons(o));
	/* printf("here res =  %ld \n", o); */
	/* printf("cdr res = "); */
	/* printObj(stdout, cdr(o)); */
	/* printf("\n"); */
	/* printf("=== %ld \n", cdr(o)); */
	/* printObj(stdout, cdr(o)); */
	/* printf("%ld \n", Nil); */
	/* assert(eq(o, cons(intern("a"), Nil))); */
	/* assert(eq(z, r)); */
	assert(eq(o, z));

	fclose(stream);
}


struct readerMacroTest {
	char *input;
	char *expect;
};

static void
TestReaderMacro(struct Cora *co) {
	struct readerMacroTest cases[] = {
		{"'a", "(quote a)"},
		{"'(a b c)", "(quote (a b c))"},
		{"[1 2 3]", "(list 1 2 3)"},
		{"[1 2 . 3]", "(list-rest 1 2 3)"},
		{"`(1 ,a 2 ,(a b) c)",
		 "(backquote (1 (unquote a) 2 (unquote (a b)) c))"},
	};

	struct SexpReader r = {.co = co };
	int errCode = 0;
	for (int i = 0; i < sizeof(cases) / sizeof(struct readerMacroTest);
	     i++) {
		struct readerMacroTest *c = &cases[i];
		FILE *stream = fmemopen(c->input, strlen(c->input), "r");
		Obj x = sexpRead(&r, stream, &errCode);
		assert(errCode == 0);

		stream = fmemopen(c->expect, strlen(c->expect), "r");
		Obj y = sexpRead(&r, stream, &errCode);
		assert(errCode == 0);

		if (!eq(x, y)) {
			printObj(stderr, x);
			printObj(stderr, y);
			printf("reader macro test case: %s failed\n",
			       c->input);
			assert(false);
		}
	}
}

int
main(int argc, char *argv[]) {
	uintptr_t dummy;
	struct Cora *co = coraInit(&dummy);
	TestReadSexp();
	TestReaderMacro(co);
}
