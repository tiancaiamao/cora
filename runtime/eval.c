#include "types.h"
#include "vm.h"
#include <stdlib.h>

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

extern Instr identity;

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
  Instr code = compile(body, env, identity, &pa1);

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

Obj
eval(struct VM *vm, Obj exp) {
  struct posArray pa = {.ptr = NULL, .size = 0, .cap = 0};
  Instr code = compile(exp, Nil, identity, &pa);
  vm->pcData = code.data;
  run(vm, code.fn);
  return vm->val;
}
