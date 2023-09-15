#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "reader.h"
#include <assert.h>
#include "vm.h"

struct testCase {
  char *name;
  char *input;
  char *output;
};

extern void printObj(FILE *to, Obj o);

static void
TestEvalBasic() {
  struct testCase cases[] = {
    {
      "let-variable-shadow",
      "(do (set (quote f) (lambda (a b) (let a 3 a))) (f 4 5))",
      "3",
    },
    {
      "let variable shadow",
      "(let Result 123 \
	(let Result 456 \
		  (if (= Result 456) \
		      true \
		      Result)))",
      "true",
    },
    {
      "curry as arg",
      "((lambda (f) (f 42)) (+ 1))",
      "43",
    },

    {
      "curry",
      "(do (set (quote f) (lambda (x y z) y)) ((f 1 2) 3))",
      "2",
    },

    {
      "curry-partial",
      "((lambda (x) (lambda (y) (lambda (z) (+ x z)))) 1 2 3)",
      "4",
    },
    {
      "curry1",
      "(do (set (quote f) (lambda (x) \
			      (do (set (quote ignore) (lambda (z w) \
						       (lambda (y) \
							z))) (ignore)))) \
		(((f 1) 2 3) 4))",
      "2",
    },

    {
      "fib10",
      "(do (set (quote fib) (lambda (i) \
	(if (= i 0) \
	    1 \
	    (if (= i 1) \
		1 \
		(+ (fib (- i 1)) (fib (- i 2))))))) \
	(fib 10))",
      "89",
    },

    {
      "proper tail call",
      "(do (set (quote sum) (lambda (r i) \
	  (if (= i 0) \
	      r \
	      (sum (+ r 1) (- i 1))))) \
	(sum 0 5000000))",
      "5000000",
    },

    {
      "do in args",
      "(+ (do 1 (do 2 3)) 4)",
      "7",
    },

    {
      "partial primitive",
      "(+ (+ (+ 1 2) 3) 4)",
      "10",
    },

    {
      "do in tail call",
      "(do (set (quote f) (lambda (x y z) (do 1 (do 2 z)))) (f 1 2 3))",
      "3",
    },

    {
      "closure value",
      "((((lambda (x) (lambda (y) (lambda (z) (+ x z)))) 1) 2) 3)",
      "4",
    },

    {
      "basic func call",
      "(do (set (quote id) (lambda (x) x)) (id (do 1 (do 2 42))))",
      "42",
    },

    {
      "identify function",
      "(do (set (quote id) (lambda (x) x)) (id 42))",
      "42",
    },

    {
      "basic set",
      "(do (set (quote x) 42) x)",
      "42",
    },

    {
      "basic if",
      "(if true 1 2)",
      "1",
    },

    {
      "curry lambda",
      "((lambda (x) (lambda (y) (lambda (z) z))) 1 2 3)",
      "3",
    },

    {
      "basic lambda",
      "(((lambda (x y) (lambda (z) y)) 1 2) 3)",
      "2",
    },

    {
      "basic do",
      "(do 1 2)",
      "2",
    },

    {
      "basic primitive",
      "(+ 3 7)",
      "10",
    },

    {
      "constant",
      "42",
      "42",
    },

    {
      "partial primitive1",
      "((+ 1) 2)",
      "3",
    },

    {
      "partial primitive2",
      "(((+) 1) 2)",
      "3",
    },

  };

  struct VM *vm= newVM();
  int pos = 0;
  loadByteCode(vm, pos, cstr("../init.bc"));
  loadByteCode(vm, pos, cstr("../compile.bc"));
  for (int i=0; i<sizeof(cases)/sizeof(struct testCase); i++) {
    struct testCase *c = &cases[i];

    printf("testing case %s ", c->name);

    struct SexpReader r = {.pkgMapping = Nil};
    FILE* f = fmemopen(c->input, strlen(c->input), "r");
    int errCode;
    Obj s = sexpRead(vm, pos, &r, f, &errCode);
    int ref = pos++;
    vmSet(vm, ref, s);
    Obj res = eval(vm, pos, ref);

    char output[512];
    memset(output, 0, 512);
    FILE *to = fmemopen(output, 512, "w");
    printObj(to, res);
    fclose(to);

    int v = strcmp(output, c->output);
    if (v != 0) {
      printf("run test case: %s fail\n", c->name);
      printf("expected: %s\n", c->output);
      printf("actual: %s\n", output);
    }
    assert(v == 0);

    printf("... ok\n");
  }
}

static void
TestTryCatch() {
  struct testCase cases[] = {
    {
      "try-let",
      "(try (lambda () (let X 666 42)) (lambda (E) (cons '--> (cons 'A ()))))",
      "42",
    },

    {
      "no throw",
      "(try (lambda () 42) (lambda (v cc) v))",
      "42",
    },
    {
      "basic throw",
      "(try (lambda () (throw 42)) (lambda (v _) v))",
      "42",
    },
    {
      "resume",
      "(try (lambda () (throw 42)) (lambda (v resume) (resume v)))",
      "42",
    },
    {
      "try in primitive call",
      "(+ (try (lambda () (throw 42)) (lambda (v resume) (resume v))) 1)",
      "43",
    },
    {
      "try in closure call",
      "(do (set 'f (lambda (x) x)) (f (try (lambda () (throw 42)) (lambda (v resume) (resume v)))))",
      "42",
    },
    {
      "throw in primitive call",
      "(try (lambda () (+ (throw 42) 1)) (lambda (v _) v))",
      "42",
    },
    {
      "throw in closure call",
      "(do (set 'f (lambda (a b) b)) (try (lambda () (f (throw 42) 33)) (lambda (v _) v)))",
      "42",
    },
    {
      "resume in primitive call1",
      "(try (lambda () (+ (throw 42) 1)) (lambda (v resume) (resume 66)))",
      "67",
    },
    {
      "resume in primitive call2",
      "(try (lambda () (+ (throw 42) 1)) (lambda (v resume) (resume (+ v 1))))",
      "44",
    },
    {
      "resume in closure call",
      "(do (set 'f (lambda (a b) (+ a b))) (try (lambda () (f (throw 42) 1)) (lambda (v resume) (resume (+ v 1)))))",
      "44",
    },
    {
      "throw in handler",
      "(try (lambda () \
		(try (lambda () \
			(throw \"from body\")) \
		     (lambda (v cc) \
			(throw \"from inner\")))) \
	    (lambda (v1 cc1) \
		v1))",
      "\"from inner\"",
    },
    {
      "try partial curry",
      "((try (lambda () (+ ((throw 4) 7) 5))) (lambda (v cc) (cc (+ v))))",
      "16",
    },
    /* { */
    /*   "curry throw is not supported", */
    /*   "((try (lambda () (throw)) (lambda (v cc) (v))) 666)", */
    /*   "666", */
    /* } */
    {
      "closure ref",
      "((lambda (x y) \
	(try (lambda () \
		(+ x (throw 'ignore))) \
	    (lambda (v resume) (resume y)))) \
	666 1)",
      "667",
    },
    {
      "iterate list",
      "(try (lambda () (map (lambda (x) (throw x)) [1 2 3 4 5])) (lambda (v cc) (cc v)))",
      "(1 2 3 4 5)",
    },
    {
      "throw in deep stack",
      "(do \
 (set 'add (lambda (x y) (+ x y))) \
 (do (set 'f (lambda (n) \
	       (if (= n 0) \
		   (throw 42) \
		 (add (f (- n 1)) 1)))) \
     (try (lambda () \
	    (f 300)) \
      (lambda (v cc) (cc v)))))",
      "342",
    },
    {
      "recover multiple times",
      "(try (lambda () (do (throw 1) (throw 2))) (lambda (v cc) (cc v)))",
      "2",
    },
  };

  struct VM *vm= newVM();
  int pos = 0;
  loadByteCode(vm, pos, cstr("../init.bc"));
  loadByteCode(vm, pos, cstr("../compile.bc"));

  /* char *pkgName = "cora/init"; */
  /* eval(vm, cons(intern("import"), cons(makeString(pkgName, strlen(pkgName)), Nil))); */

  int ref = pos++;
  for (int i=0; i<sizeof(cases)/sizeof(struct testCase); i++) {
    struct testCase *c = &cases[i];

    printf("testing case %s ", c->name);

    struct SexpReader r = {.pkgMapping = Nil};
    FILE* f = fmemopen(c->input, strlen(c->input), "r");
    int errCode;
    Obj s = sexpRead(vm, pos, &r, f, &errCode);
    vmSet(vm, ref, s);
    Obj exp = macroExpand(vm, pos, ref);
    vmSet(vm, ref, exp);
    Obj res = eval(vm, pos, ref);

    char output[512];
    memset(output, 0, 512);
    FILE *to = fmemopen(output, 512, "w");
    printObj(to, res);
    fclose(to);

    int v = strcmp(output, c->output);
    if (v != 0) {
      printf("run test case: %s fail\n", c->name);
      printf("expected: %s\n", c->output);
      printf("actual: %s\n", output);
    }
    assert(v == 0);

    printf("... ok\n");
  }
}

int main() {
  TestEvalBasic();
  TestTryCatch();
}
