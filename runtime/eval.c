#include "types.h"
#include "vm.h"

extern Instr makeInstrConst(Obj exp, Instr cont);
extern Instr makeInstrNOP(Instr cont);
extern Instr makeInstrLocalRef(int n, Instr cont);
extern Instr makeInstrClosureRef(int m, int n, Instr cont);
extern Instr makeInstrGlobalRef(Obj exp, Instr cont);
extern Instr makeInstrIf(Instr then, Instr cont);
extern Instr makeInstrMakeClosure(Instr code, int narg, Instr cont);
extern Instr makeInstrPrepareCall(Instr code);
extern Instr makeInstrCall(int sz, Instr code);
extern Instr makeInstrPush(Instr remain);
extern Instr makeInstrPrimitive(int size, Obj prim, Instr next);

struct Compiler {
};

static Instr compile(Obj exp, Obj env, Instr cont);
static Instr compileList(Obj exp, Obj env, Instr cont);

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
compileSymbol(Obj exp, Obj env, Instr cont) {
  int m, n;
  findVariable(exp, env, &m, &n);
  if (m == 0) {
    return makeInstrLocalRef(n, cont);
  }
  if (m > 0) {
    // TODO: add closed to compiler??
    
    return makeInstrClosureRef(m, n, cont);
  }
  return makeInstrGlobalRef(exp, cont);
}

static Instr
compileIf(Obj exp, Obj env, Instr cont) {
  Instr thenCont = compile(caddr(exp), env, cont);
  Instr elseCont = compile(caddr(cdr(exp)), env, cont);
  return compile(cadr(exp), env, makeInstrIf(thenCont, elseCont));
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

static Instr
compileLambda(Obj args, Obj body, Obj env, Instr cont) {
  Instr code = compile(body, env, identity);
  // TODO: handle closed
  return makeInstrMakeClosure(code, listLength(args), cont);
}

static Instr
compileCall(Obj exp, Obj env, Instr cont) {
  // handle primitives
  Obj first = car(exp);
  if (issymbol(first)) {
    Obj v = symbolGet(first);
    if (v != Undef && isprimitive(v)) {
      Obj args = cdr(exp);
      int nargs = listLength(args);
      return compileList(args, env, makeInstrPrimitive(nargs, v, cont));
    }
  }

  int sz = listLength(exp);
  Instr call = makeInstrCall(sz, cont);
  Instr next = compileList(exp, env, call);
  return makeInstrPrepareCall(next);
}

static Instr
compile(Obj exp, Obj env, Instr cont) {
  // atom type
  if (!iscons(exp)) {
    if (issymbol(exp)) {
      return compileSymbol(exp, env, cont);
    }
    return makeInstrConst(exp, cont);
  }

  // Special form
  Obj hd = car(exp);
  if (hd == symQuote) {
    return makeInstrConst(cadr(exp), cont);
  } else if (hd == symIf) {
    return compileIf(exp, env, cont);
  } else if (hd == symDo) {
    Instr next = compile(caddr(exp), env, cont);
    return compile(cadr(exp), env, makeInstrNOP(next));
  } else if (hd == symLambda) {
    Obj args = cadr(exp);
    Obj body = caddr(exp);
    Obj nenv = cons(args, env);
    return compileLambda(args, body, nenv, cont);
  }

  return compileCall(exp, env, cont);
}

static Instr
compileList(Obj exp, Obj env, Instr cont) {
  if (exp == Nil) {
    return cont;
  }

  Instr remain = compileList(cdr(exp), env, cont);
  Instr push = makeInstrPush(remain);
  return compile(car(exp), env, push);
}

Obj
eval(struct VM *vm, Obj exp) {
  Instr code = compile(exp, Nil, identity);
  vm->pcData = code.data;
  run(vm, code.fn);
  return vm->val;
}
