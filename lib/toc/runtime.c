#include "runtime.h"

void
/* saveStack(struct callStack *cs, nativeFn pc, int base, int pos, Obj *stack, Obj *frees) { */
saveStack(struct callStack *cs, nativeFn pc, int base, Obj *frees) {
  if (cs->len + 1 >= cs->cap) {
    cs->cap = cs->cap * 2;
    void *newData = malloc(cs->cap*sizeof(struct returnAddr));
    memcpy(newData, cs->data, cs->len*sizeof(struct returnAddr));
    free(cs->data);
    cs->data = newData;
  }
  
  struct returnAddr *addr = &cs->data[cs->len];
  addr->pc = pc;
  addr->base = base;
  /* addr->pos = pos; */
  /* addr->stack = stack; */
  addr->frees = frees;
  cs->len++;
  return;
}

void
/* popStack(struct callStack *cs, nativeFn *pc, int *base, int *pos, Obj **stack, Obj **frees) { */
popStack(struct callStack *cs, nativeFn *pc, int *base, Obj **stack, Obj **frees) {
/* popStack(struct callStack *cs, nativeFn *pc, int *base, Obj **frees) { */
  cs->len--;
  struct returnAddr *addr = &cs->data[cs->len];
  *pc = addr->pc;
  *base = addr->base;
  /* *pos = addr->pos; */
  /* *stack = addr->stack; */
  *frees = addr->frees;
  return;
}

Obj
makeNative(nativeFn fn, int required, int captured, ...) {
  int sz = sizeof(struct scmNative) + captured*sizeof(Obj);
  struct scmNative* clo = newObj(NULL, 0, scmHeadNative, sz);
  clo->fn = fn;
  clo->required = required;
  clo->captured = captured;
  if (captured > 0) {
    va_list ap;
    va_start(ap, captured);
    for (int i=0; i<captured; i++) {
      clo->data[i] = va_arg(ap, Obj);
    }
    va_end(ap);
  }

  return ((Obj)(&clo->head) | TAG_PTR);
}

void callCurry(struct Cora *co) {
  Obj fn = co->args[0];
  int captured = nativeCaptured(fn);
  memmove(co->args+captured, co->args+1, (co->nargs-1) * sizeof(Obj));
  memcpy(co->args, nativeData(fn), captured*sizeof(Obj));
  co->nargs = co->nargs + captured - 1;
  co->pc = coraCall;
}

Obj
makeCurry1(int required, int captured, Obj *data) {
  int sz = sizeof(struct scmNative) + captured*sizeof(Obj);
  struct scmNative* clo = newObj(NULL, 0, scmHeadNative, sz);
  clo->fn = callCurry;
  clo->required = required;
  clo->captured = captured;
  memcpy(clo->data, data, captured*sizeof(Obj));
  return ((Obj)(&clo->head) | TAG_PTR);
}

bool
isNative(Obj c) {
  if ((c & TAG_MASK) != TAG_PTR) {
    return false;
  }
  scmHead *h = ptr(c);
  return h->type == scmHeadNative;
}

Obj*
nativeData(Obj o) {
  struct scmNative* native = ptr(o);
  assert(native->head.type == scmHeadNative);
  if (native->captured == 0) {
    return NULL;
  }
  return native->data;
}

int
nativeCaptured(Obj o) {
  struct scmNative* native = ptr(o);
  assert(native->head.type == scmHeadNative);
  return native->captured;
}

nativeFn
nativeFuncPtr(Obj o) {
  struct scmNative* native = ptr(o);
  assert(native->head.type == scmHeadNative);
  return native->fn;
}

int
nativeRequired(Obj o) {
  struct scmNative* native = ptr(o);
  assert(native->head.type == scmHeadNative);
  return native->required;
}

void coraCall(struct Cora *co) {
  Obj fn = co->args[0];
  int required = nativeRequired(co->args[0]);
  if (co->nargs == required + 1) {
    co->pc = nativeFuncPtr(fn);
    co->frees = nativeData(fn);
  } else if (co->nargs < required + 1) {
    Obj ret = makeCurry1(required+1-co->nargs, co->nargs, co->args);
    co->nargs = 0;
    co->args[1] = ret;
    popStack(&co->callstack, &co->pc, &co->base, &co->pos, &co->stack, &co->frees);
    /* popStack(&co->callstack, &co->pc, &co->base, &co->frees); */
  } else {
    // save the extra args.
    int cnt = co->nargs - (required+1);
    int sz = sizeof(Obj) * cnt;
    Obj* save = alloca(sz);
    memcpy(save, co->args+required+1, sz);
    // eval the first call and get the result;
    co->nargs = required + 1;
    trampoline(co, co->pc);
    // recover args and make the next call.
    co->args[0] = co->args[1];
    memcpy(co->args+1, save, sz);
    co->nargs = cnt + 1;
    co->pc = coraCall;
  }
  return;
}

Obj makeString1(char *x) {
  return makeString(NULL, 0, x, strlen(x));
}

void push(struct Cora *co, Obj v) {
  co->stack[co->pos] = v;
  co->pos++;
}

Obj stackRef(struct Cora *co, int idx) {
  return co->stack[co->base + idx];
}

const int INIT_STACK_SIZE = 1000;

struct Cora* coraNew() {
  struct Cora *co = malloc(sizeof(struct Cora));
  co->stack = malloc(sizeof(Obj) * INIT_STACK_SIZE);
  co->base = 0;
  co->pos = 0;

  co->callstack.data = malloc(64*sizeof(struct returnAddr));
  co->callstack.len = 0;
  co->callstack.cap = 64;

  co->trystack.data = malloc(4 * sizeof(struct tryRecord));
  co->trystack.len = 0;
  co->trystack.cap = 4;
}

void id(struct Cora *co) {
  co->pc = NULL;
  printObj(stdout, co->args[1]);
}

void
trampoline(struct Cora *co, nativeFn pc) {
  saveStack(&co->callstack, id, co->pos, co->frees); 
  co->pc = pc;
  while(co->pc != NULL) {
    co->pc(co);
  }
}

Obj
closureRef(struct Cora *co, int idx) {
  return co->frees[idx];
}

Obj globalRef(Obj sym) {
  struct trieNode* s = ptr(sym);
  Obj val = s->value;
  if (val == Undef) {
    printf("undefined global symbol: %s\n", s->sym);
    assert(false);
  }
  return val;
}

Obj primEQ(Obj x, Obj y) {
  return eq(x, y) ? True : False;
}

Obj primAdd(Obj x, Obj y) {
  if (isfixnum(x) && isfixnum(y)) {
    return x + y;
  } else {
    // TODO
    assert(false);
  }
}

Obj primCons(Obj x, Obj y) {
  return cons(NULL, 0, x, y);
}

Obj primNot(Obj x) {
  if (x == True) {
    return False;
  } else if (x == False) {
    return True;
  } else {
    assert(false);
  }
}

Obj primCar(Obj x) {
  return car(x);
}

Obj primCdr(Obj x) {
  return cdr(x);
}

Obj primIsCons(Obj x) {
  if (iscons(x)) {
    return True;
  } else {
    return False;
  }
}

Obj primSet(Obj key, Obj val) {
  struct trieNode* s = ptr(key);
  s->value = val;
}

Obj primSub(Obj x, Obj y) {
  if (isfixnum(x) && isfixnum(y)) {
    return x - y;
  } else {
    // TODO
    assert(false);
  }
}

Obj primMul(Obj x, Obj y) {
  if (isfixnum(x) && isfixnum(y)) {
    return makeNumber(fixnum(x) * fixnum(y));
  } else {
    // TODO
    assert(false);
  }
}

static uint64_t genIdx = 0;

Obj primGenSym(Obj arg) {
  assert(issymbol(arg));
  char tmp[200];
  snprintf(tmp, 100, "#%s%ld", symbolStr(arg), genIdx);
  genIdx++;
  return makeSymbol(tmp);
}

Obj primIsSymbol(Obj x) {
  if (issymbol(x)) {
    return True;
  } else {
    return False;
  }
}

Obj primIsString(Obj x) {
  if (isstring(x)) {
    return True;
  } else {
    return False;
  }
}

void symbolToString(struct Cora *co) {
  Obj sym = co->args[1];
  char* str = symbolStr(sym);
  Obj val = makeString1(str);
  co->args[1] = val;
  popStack(&co->callstack, &co->pc, &co->base, &co->frees);
  return;
}

void
stringAppend(struct Cora *co) {
  Obj str1 = co->args[1];
  Obj str2 = co->args[2];
  strBuf x = stringStr(str1);
  strBuf y = stringStr(str2);
  strBuf tmp = strNew(strLen(toStr(x)) + strLen(toStr(y)));
  tmp = strCpy(tmp, toStr(x));
  tmp = strCat(tmp, toStr(y));
  Obj val = makeString1(toCStr(tmp));
  co->args[1] = val;
  popStack(&co->callstack, &co->pc, &co->base, &co->frees);
  return;
}


static void
saveTry(struct tryStack *ts, int pos, Obj handler) {
  if (ts->len + 1 >= ts->cap) {
    ts->cap = ts->cap * 2;
    void *newData = malloc(ts->cap*sizeof(struct tryRecord));
    memcpy(newData, ts->data, ts->len*sizeof(struct tryRecord));
    free(ts->data);
    ts->data = newData;
  }
  
  struct tryRecord *rec = &ts->data[ts->len];
  rec->pos = pos;
  rec->handler = handler;
  ts->len++;
  return;
}

// (try (lambda () (+ (throw 42) 1))
//      (lambda (v resume) (resume (+ v 66))))
/* void */
/* builtinTryCatch(struct Cora *co) { */
/*   Obj chunk = co->args[1]; */
/*   Obj handler = co->args[2]; */

/*   // Save the old cont. */
/*   // This save can make the chunk and handler available to the recovering process. */
/*   saveTry(&co->trystack, co->callstack.len, handler); */

/*   // Call the chunk. */
/*   co->args[0] = chunk; */
/*   co->nargs = 1; */
/*   co->pc = coraCall; */
/* } */

struct contStack {
  struct returnAddr *data;
  int size;

  Obj *stack;
  int len2;
};

static void
continuationAsClosure(struct Cora *co) {
  // Replace the current stack with the delimited continuation.
  Obj k = co->args[0];
  struct scmNative* native = ptr(k);
  struct contStack* delimitedCC = ptr(native->data[0]);
  Obj val = co->args[1];
  for (int i=0; i< delimitedCC->size; i++) {
    struct returnAddr *addr = &delimitedCC->data[i];
    co->callstack.data[co->callstack.len] = *addr;
    co->callstack.len++;
    if (co->callstack.len + 1 >= co->callstack.cap) {
      assert(false); // TODO?
    }
  }
  popStack(&co->callstack, &co->pc, &co->base, &co->frees);
}

/* void */
/* builtinThrow(struct Cora *co) { */
/*   Obj v = co->args[1]; */

/*   if (co->trystack.len == 0) { */
/*     // TODO: panic, not in any try-catch block! */
/*     assert(false); */
/*   } */

/*   // Capture the stack as continuation. */
/*   struct tryRecord *rec = &co->trystack.data[co->trystack.len-1]; */

/*   struct returnAddr *addr = &co->callstack.data[rec->pos-1]; */
/*   struct contStack *stacks = malloc(sizeof(struct contStack)); */
/*   stacks->size = co->callstack.len - rec->pos; */
/*   if (stacks->size > 0) { */
/*     stacks->data = malloc(stacks->size * sizeof(struct returnAddr)); */
/*   } */
/*   for (int i=rec->pos; i<co->callstack.len; i++) { */
/*     stacks->data[i-rec->pos] = co->callstack.data[i]; */
/*   } */
/*   /\* memcpy(delimitedCC->stack, co->stack, 100); *\/ */
/*   Obj clo = makeNative(continuationAsClosure, 1, 1, stacks); */

/*   // Reset the stack */
/*   co->callstack.len = rec->pos; */
/*   /\* co->base = xxx; *\/ */
/*   /\* co->pos = xxx; *\/ */

/*   // Find the handler, invoke it, passing the continuation. */
/*   Obj handler = rec->handler; */
/*   co->args[0] = handler; */
/*   co->args[1] =  v; */
/*   co->args[2] = clo; */
/*   co->nargs = 3; */
/*   co->pc = coraCall; */
/* } */

void
builtinIntern(struct Cora *co) {
  Obj x = co->args[1];
  assert(isstring(x));
  Obj val = intern(toCStr(stringStr(x)));
  co->args[1] = val;
  popStack(&co->callstack, &co->pc, &co->base, &co->frees);
}

void
builtinIsNumber(struct Cora *co) {
  Obj x = co->args[1];
  if (isfixnum(x)) {
    co->args[1] = True;
    popStack(&co->callstack, &co->pc, &co->base, &co->frees);
    return;
  }
  if (tag(x) == TAG_PTR) {
    scmHead* h = ptr(x);
    if (h->type == scmHeadNumber) {
      co->args[1] = True;
      popStack(&co->callstack, &co->pc, &co->base, &co->frees);
      return;
    }
  }
  co->args[1] = False;
  popStack(&co->callstack, &co->pc, &co->base, &co->frees);
}

void
builtinValue(struct Cora *co) {
  Obj sym = co->args[1];
  struct trieNode* s = ptr(sym);
  Obj ret = s->value;
  if (ret == Undef) {
    printf("undefined value: %s\n", s->sym);
    assert(false);
  }
  co->args[1] = ret;
  popStack(&co->callstack, &co->pc, &co->base, &co->frees);
}

void
builtinApply(struct Cora *co) {
  Obj fn = co->args[1];
  Obj args = co->args[2];

  co->args[0] = fn;
  int pos = 1;
  while(args != Nil) {
    Obj tmp = car(args);
    co->args[pos++] = tmp;
    args = cdr(args);
  }
  co->nargs = pos;
  co->pc = coraCall;
}

int main(int argc, char *argv) {
  primSet(intern("symbol->string"), makeNative(symbolToString, 1, 0));
  primSet(intern("string-append"), makeNative(stringAppend, 2, 0));
  primSet(intern("intern"), makeNative(builtinIntern, 1, 0));
  primSet(intern("number?"), makeNative(builtinIsNumber, 1, 0));
  primSet(intern("value"), makeNative(builtinValue, 1, 0));
  primSet(intern("apply"), makeNative(builtinApply, 2, 0));
  primSet(intern("try"), makeNative(builtinTryCatch, 2, 0));
  primSet(intern("throw"), makeNative(builtinThrow, 1, 0));
    
  struct Cora* co = coraNew();
  /* trampoline(co, entry_init); */
  /* trampoline(co, entry_let_loop); */
  /* trampoline(co, entry_sys); */
  trampoline(co, entry);

  return 0;


  struct SexpReader r = {.pkgMapping = Nil};
  int errCode = 0;

  for (int i=0; ; i++) {
    printf("%d #> ", i);

    Obj exp = sexpRead(NULL, 0, &r, stdin, &errCode);
    if (errCode != 0) {
      break;
    }

    /* printf("before macro expand =="); */
    /* sexpWrite(stdout, exp); */

    /* exp = macroExpand(vm, pos, exp); */

    /* printf("after macro expand =="); */
    /* sexpWrite(stdout, exp); */
    /* printf("\n"); */

    co->args[0] = globalRef(intern("eval0"));
    co->args[1] = exp;
    co->nargs = 2;
    trampoline(co, coraCall);

    sexpWrite(stdout, co->args[1]);
    printf("\n");
  }
}
