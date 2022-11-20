#include "types.h"
#include "vm.h"
#include <stdlib.h>
#include <stdarg.h>
#include <assert.h>
#include <stdio.h>

extern Instr makeInstrConst(Obj exp, Instr cont);
extern Instr makeInstrNOP(Instr cont);
extern Instr makeInstrLocalRef(int n, Instr cont);
extern Instr makeInstrClosureRef(int m, int n, Instr cont);
extern Instr makeInstrGlobalRef(Obj exp, Instr cont);
extern Instr makeInstrIf(Instr then, Instr cont);
extern Instr makeInstrMakeClosure(Instr code, int narg, Instr cont, int *closed, int nclosed);
extern Instr makeInstrPrepareCall(Instr code);
extern Instr makeInstrCall(int sz, Instr code);
extern Instr makeInstrPush(Instr remain);
extern Instr makeInstrPrimitive(int size, Obj prim, Instr next);

struct pos {
  int m;
  int n;
};

struct posArray {
  struct pos *ptr;
  int size;
  int cap;
};

static void
appendPosArray(struct posArray *pa, int m, int n) {
  if (pa->cap == 0) {
    pa->cap = 8;
    pa->size = 0;
    pa->ptr = malloc(sizeof(struct pos) * pa->cap);
  }

  if (pa->size >= pa->cap) {
    pa->cap = pa->cap * 2;
    pa->ptr = realloc(pa->ptr, sizeof(struct pos) * pa->cap);
  }

  struct pos * p = pa->ptr + pa->size;
  p->m = m;
  p->n = n;
  pa->size++;
}

static Instr compile(Obj exp, Obj env, Instr cont, struct posArray *pa);
static Instr compileList(Obj exp, Obj env, Instr cont, struct posArray *pa);

static void
findVariable(Obj exp, Obj env, int *m, int *n) {
  int i = 0;
  while(iscons(env)) {
    Obj p = car(env);
    int j = 0;
    while(iscons(p)) {
      if (car(p) == exp) {
	*m = i;
	*n = j;
	return;
      }
      p = cdr(p);
      j++;
    }

    env = cdr(env);
    i++;
  }
  *m = -1;
  return;
}

static Instr
compileSymbol(Obj exp, Obj env, Instr cont, struct posArray *pa) {
  int m, n;
  findVariable(exp, env, &m, &n);
  if (m == 0) {
    return makeInstrLocalRef(n, cont);
  }
  if (m > 0) {
    appendPosArray(pa, m, n);
    return makeInstrClosureRef(m-1, n, cont);
  }
  return makeInstrGlobalRef(exp, cont);
}

static Instr
compileIf(Obj exp, Obj env, Instr cont, struct posArray *pa) {
  Instr thenCont = compile(caddr(exp), env, cont, pa);
  Instr elseCont = compile(caddr(cdr(exp)), env, cont, pa);
  return compile(cadr(exp), env, makeInstrIf(thenCont, elseCont), pa);
}

extern Instr identity();

static int
listLength(Obj l) {
  int count = 0;
  while(l != Nil) {
    count++;
    l = cdr(l);
  }
  return count;
}

static int
closedCount(struct posArray *pa) {
  int n = 0;
  for (int i=0; i<pa->size; i++) {
    if (pa->ptr[i].m == 1) {
      n++;
    }
  }
  return n;
}

static int*
handleClosureVars(struct posArray *pa, struct posArray *to, int *nclosed) {
  if (pa->size == 0) {
    return NULL;
  }

  int *closed = NULL;
  *nclosed = closedCount(pa);
  if (*nclosed > 0) {
    closed = (int*)malloc(sizeof(int) * (*nclosed));
  }

  int idx = 0;
  for (int i=0; i<pa->size; i++) {
    struct pos *p = pa->ptr+i;
    if (p->m == 1) {
      closed[idx++] = p->n;
    } else {
      appendPosArray(to, p->m-1, p->n);
    }
  }

  free(pa->ptr);

  return closed;
}

static Instr
compileLambda(Obj args, Obj body, Obj env, Instr cont, struct posArray *pa) {
  struct posArray pa1 = {.ptr=NULL, .size=0, .cap=0};
  Instr code = compile(body, env, identity(), &pa1);

  int nclosed = 0;
  // handleClosureVars separate the variables as closed by current lambda and by parent lambda.
  int *closed = handleClosureVars(&pa1, pa, &nclosed);

  return makeInstrMakeClosure(code, listLength(args), cont, closed, nclosed);
}

static Instr
compileCall(Obj exp, Obj env, Instr cont, struct posArray *pa) {
  // handle primitives
  Obj first = car(exp);
  if (issymbol(first)) {
    Obj v = symbolGet(first);
    if (v != Undef && isprimitive(v)) {
      Obj args = cdr(exp);
      int nargs = listLength(args);
      return compileList(args, env, makeInstrPrimitive(nargs, v, cont), pa);
    }
  }

  int sz = listLength(exp);
  Instr call = makeInstrCall(sz, cont);
  Instr next = compileList(exp, env, call, pa);
  return makeInstrPrepareCall(next);
}

static Instr
compile(Obj exp, Obj env, Instr cont, struct posArray *pa) {
  // atom type
  if (!iscons(exp)) {
    if (issymbol(exp)) {
      return compileSymbol(exp, env, cont, pa);
    }
    return makeInstrConst(exp, cont);
  }

  // Special form
  Obj hd = car(exp);
  if (hd == symQuote) {
    return makeInstrConst(cadr(exp), cont);
  } else if (hd == symIf) {
    return compileIf(exp, env, cont, pa);
  } else if (hd == symDo) {
    Instr next = compile(caddr(exp), env, cont, pa);
    return compile(cadr(exp), env, makeInstrNOP(next), pa);
  } else if (hd == symLambda) {
    Obj args = cadr(exp);
    Obj body = caddr(exp);
    Obj nenv = cons(args, env);
    return compileLambda(args, body, nenv, cont, pa);
  }

  return compileCall(exp, env, cont, pa);
}

static Instr
compileList(Obj exp, Obj env, Instr cont, struct posArray *pa) {
  if (exp == Nil) {
    return cont;
  }

  Instr remain = compileList(cdr(exp), env, cont, pa);
  Instr push = makeInstrPush(remain);
  return compile(car(exp), env, push, pa);
}

extern struct GC *gc;
extern InstrFunc getInstrFunc(Instr i);

Instr
compileAPI(Obj exp) {
  struct posArray pa = {.ptr = NULL, .size = 0, .cap = 0};

  // Don't GC during compile.
  gcDisable(gc);
  Instr code = compile(exp, Nil, identity(), &pa);
  gcEnable(gc);
  return code;
}

Obj
eval(struct VM *vm, Obj exp) {
  struct posArray pa = {.ptr = NULL, .size = 0, .cap = 0};

  // Don't GC during compile.
  gcDisable(gc);
  Instr code = compile(exp, Nil, identity(), &pa);
  gcEnable(gc);

  vm->pcData = code;
  /* assert(vm->pos == 0); */
  run(vm, getInstrFunc(code));
  return vm->val;
}


static Obj
call(struct VM *vm, int nargs, ...) {
  vmSaveCont(vm, vm->pos, NULL, NULL);

  /* printf("before call...%d %d\n", vm->base, vm->pos); */

  va_list ap;
  va_start(ap, nargs);
  for (int i=0; i<nargs; i++) {
    push(vm, va_arg(ap, Obj));
  }
  va_end(ap);

  /* struct InstrCall data = {nargs, identity()}; */
  /* vm->pc = instrCallExec; */
  /* vm->pcData = &data; */
  Instr instr = makeInstrCall(nargs, identity()); // mem leak?
  vm->pc = getInstrFunc(instr);
  vm->pcData = instr;

  while(vm->pc != NULL) {
    vm->pc(vm);
  }

  /* printf("after call...%d %d\n", vm->base, vm->pos); */

  return vm->val;
}

Obj
macroExpand(struct VM *vm, Obj exp) {
  Obj expand = symbolGet(symMacroExpand);
  if (expand == Undef || expand == Nil) {
    return exp;
  }
  Obj res = call(vm, 2, expand, exp);
  return res;
}


#ifdef _EVAL_TEST_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "reader.h"
#include <assert.h>

struct testCase {
  char *name;
  char *input;
  char *output;
};


struct testCase cases[] = {
  {
    "curry as arg",
    "((lambda (f) (f 42)) (+ 1))",
    "43",
  },

  /* { */
  /*   "let-variable-shadow", */
  /*   "(do (set (quote f) (lambda (a b) \ */
  /* 			      (let a 3 a)) (f 4 5)))", */
  /*   "3", */
  /* }, */

  /* { */
  /*   "let variable shadow", */
  /*   "(let Result 123 \ */
  /* 	(let Result 456 \ */
  /* 		  (if (= Result 456) \ */
  /* 		      true \ */
  /* 		      Result)))", */
  /*   "true", */
  /* }, */

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

  /* { */
  /*   "trap-let", */
  /*   "(trap-error (let X 666 42) (lambda E (cons --> (cons A ()))))", */
  /*   "42", */
  /* }, */

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


extern void printObj(FILE *to, Obj o);

static void
TestEvalBasic() {
  struct VM *vm= newVM();
  for (int i=0; i<sizeof(cases)/sizeof(struct testCase); i++) {
    struct testCase *c = &cases[i];

    printf("testing case %s ", c->name);

    FILE* f = fmemopen(c->input, strlen(c->input), "r");
    int errCode;
    Obj s = sexpRead(f, &errCode);
    Obj res = eval(vm, s);

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
  coraInit();
  TestEvalBasic();
}

#endif
