#include "types.h"
#include "vm.h"
#include "builtin.h"
#include <stdio.h>
#include <stdlib.h>

struct InstrConst {
  Obj val;
  Instr next;
};

static void
instrConstExec(struct VM *vm) {
  struct InstrConst *c = vm->pcData;
  vm->val = c->val;
  vm->pc = c->next.fn;
  vm->pcData = c->next.data;
}

Instr
makeInstrConst(Obj val, Instr next) {
  struct InstrConst *data = (struct InstrConst*)malloc(sizeof(struct InstrConst));
  data->val = val;
  data->next = next;
  Instr ret = {.fn = instrConstExec, .data = data};
  return ret;
}

struct InstrIf {
  Instr br1;
  Instr br2;
};

static void
instrIfExec(struct VM *vm) {
  struct InstrIf *i = vm->pcData;
  if (vm->val == True) {
    vm->pc = i->br1.fn;
    vm->pcData = i->br1.data;
  } else if (vm->val == False) {
    vm->pc = i->br2.fn;
    vm->pcData = i->br2.data;
  } else {
    // TODO?
  }
}

Instr
makeInstrIf(Instr br1, Instr br2) {
  struct InstrIf *data = (struct InstrIf*)malloc(sizeof(struct InstrIf));
  data->br1 = br1;
  data->br2 = br2;
  Instr ret = {.fn = instrIfExec, .data = data};
  return ret;
}

struct InstrNOP {
  Instr next;
};

static void
instrNOPExec(struct VM *vm) {
  struct InstrNOP *i = vm->pcData;
  vm->pc = i->next.fn;
  vm->pcData = i->next.data;
}

Instr
makeInstrNOP(Instr next) {
  struct InstrNOP *data = (struct InstrNOP*)malloc(sizeof(struct InstrNOP));
  data->next = next;
  Instr ret = {.fn = instrNOPExec, .data = data};
  return ret;
}

struct InstrPush {
  Instr next;
};

static void
instrPushExec(struct VM *vm) {
  struct InstrPush *i = vm->pcData;
  push(vm, vm->val);
  vm->pc = i->next.fn;
  vm->pcData = i->next.data;
}

Instr
makeInstrPush(Instr next) {
  struct InstrPush *data = (struct InstrPush*)malloc(sizeof(struct InstrPush));
  data->next = next;
  Instr ret = {.fn = instrPushExec, .data = data};
  return ret;
}

struct InstrLocalRef {
  int idx;
  Instr next;
};

static void
instrLocalRefExec(struct VM *vm) {
  struct InstrLocalRef *i = vm->pcData;
  Obj v = vmGet(vm, i->idx + 2);
  vm->val = v;
  vm->pc = i->next.fn;
  vm->pcData = i->next.data;
}

Instr
makeInstrLocalRef(int idx, Instr next) {
  struct InstrLocalRef *data = (struct InstrLocalRef*)malloc(sizeof(struct InstrLocalRef));
  data->idx = idx;
  data->next = next;
  
  Instr ret = {.fn = instrLocalRefExec, .data = data};
  return ret;
}

struct InstrClosureRef {
  int up;
  int idx;
  Instr next;
};

static void
instrClosureRefExec(struct VM *vm) {
  struct InstrClosureRef *instr = vm->pcData;
  Obj tmp = vmGet(vm, 1);
  for (int i=instr->up; i>0; i--) {
    tmp = closureParent(tmp);
  }
  vm->val = closureSlot(tmp, instr->idx);
  vm->pc = instr->next.fn;
  vm->pcData = instr->next.data;
}

Instr
makeInstrClosureRef(int up, int idx, Instr next) {
  struct InstrClosureRef *data = (struct InstrClosureRef*)malloc(sizeof(struct InstrClosureRef));
  data->up = up;
  data->idx = idx;
  data->next = next;
  
  Instr ret = {.fn = instrClosureRefExec, .data = data};
  return ret;
}

struct InstrGlobalRef {
  Obj sym;
  Instr next;
};

static void
instrGlobalRefExec(struct VM *vm) {
  struct InstrGlobalRef *i = vm->pcData;
  Obj val = symbolGet(i->sym);
  if (val == 0) {
    // TODO: panic("undefined symbol")
    *((int*)42) = 42;
  }

  vm->val = val;
  vm->pc = i->next.fn;
  vm->pcData = i->next.data;
}

Instr
makeInstrGlobalRef(Obj sym, Instr next) {
  struct InstrGlobalRef *data = (struct InstrGlobalRef*)malloc(sizeof(struct InstrGlobalRef));
  data->sym = sym;
  data->next = next;
  
  Instr ret = {.fn = instrGlobalRefExec, .data = data};
  return ret;
}

struct InstrPrimitive {
  int size;
  Obj prim;
  Instr next;
};

extern InstrFunc primitiveFn(Obj o);

static void
instrPrimitiveExec(struct VM *vm) {
  struct InstrPrimitive *c = vm->pcData;
  int required = primitiveRequired(c->prim);
  if (c->size == required) {
    InstrFunc fn = primitiveFn(c->prim);
    fn(vm);
  } else if (c->size < required) {
    // TODO:
    /* vm.val = makeCurry() */
  } else {
    // TODO: panic
  }

  if (c->next.fn == NULL) {
    vmReturn(vm, vm->val);
  } else {
    vm->pc = c->next.fn;
    vm->pcData = c->next.data;
  }
}

struct scmPrimitive;

Instr
makeInstrPrimitive(int size, Obj prim, Instr next) {
  struct InstrPrimitive *data = (struct InstrPrimitive*)malloc(sizeof(struct InstrPrimitive));
  data->size = size;
  data->prim = prim;
  data->next = next;
  Instr ret = {.fn = instrPrimitiveExec, .data = data};
  return ret;
}

struct InstrExit {};

static void
instrExitExec(struct VM *vm) {
  vmReturn(vm, vm->val);
}

Instr identity = {.fn = instrExitExec, .data = NULL};

struct InstrCall {
  int size;
  Instr next;
};

static void
callClosureNormal(struct InstrCall *c, struct VM *vm, Obj clo) {
  if (c->next.fn == NULL) {
    // TODO panic("should never here?")
  }

  if (c->next.fn == instrExitExec) { // Jump
    // Reuse the old stack
    for (int i=0; i<c->size; i++) {
      Obj arg = vmGet(vm, -c->size + i);
      vmSet(vm, i+1, arg);
    }
    vmResize(vm, c->size + 1);
  } else { // Call
    int newStackBase = vm->pos - c->size - 1;

    struct stack old;
    old.data = vm->data;
    old.base = vm->base;
    old.pos = newStackBase;

    Obj cc = makeContinuation(old, c->next.fn, c->next.data);
    vm->base = newStackBase;
    vmSet(vm, 0, cc);
  }

  Instr code = closureCode(clo);
  vm->pc = code.fn;
  vm->pcData = code.data;
}

static void
callClosure(struct InstrCall *c, struct VM *vm, Obj clo) {
  int argc = c->size - 1;
  int required = closureRequired(clo);
  if (argc == required) {
    callClosureNormal(c, vm, clo);
  } else if (argc < required) {
    // TODO: curry
  } else {
  }
}

static void
instrCallExec(struct VM *vm) {
  struct InstrCall *c = vm->pcData;
  Obj fn = vmGet(vm, -c->size);
  if (isclosure(fn)) {
    callClosure(c, vm, fn);
  } else if (iscurry(fn)) {
    // TODO:
  } else {
    // TODO: panic
  }
}

Instr
makeInstrCall(int size, Instr next) {
  struct InstrCall *data = (struct InstrCall*)malloc(sizeof(struct InstrCall));
  data->size = size;
  data->next = next;
  Instr ret = {.fn = instrCallExec, .data = data};
  return ret;
}

struct InstrPrepareCall {
  Instr next;
};

static void
instrPrepareCallExec(struct VM *vm) {
  struct InstrPrepareCall *i = vm->pcData;
  push(vm, Nil);
  vm->pc = i->next.fn;
  vm->pcData = i->next.data;
}

Instr
makeInstrPrepareCall(Instr next) {
  struct InstrPrepareCall *data = (struct InstrPrepareCall*)malloc(sizeof(struct InstrPrepareCall));
  data->next = next;
  Instr ret = {.fn = instrPrepareCallExec, .data = data};
  return ret;
}

struct InstrMakeClosure {
  Instr code;
  int required;
  Instr next;

  int *closed;
  int nclosed;
};

static void
hashInsert(struct hashForObj *h, int key, Obj value) {
  // simple open address hashing
  int pos = key % h->size;
  while(h->ptr[pos].value != 0) {
    pos = (pos + 1) % h->size;
  }

  h->ptr[pos].key = key;
  h->ptr[pos].value = value;
}


static void
instrMakeClosureExec(struct VM *vm) {
  struct InstrMakeClosure *i = vm->pcData;

  struct hashForObj h;
  h.size = i->nclosed * 2;
  h.ptr = calloc(h.size, sizeof(struct hashForObj));

  Obj parent = vmGet(vm, 1);
  for (int idx=0; idx<i->nclosed; idx++) {
    int pos = i->closed[idx];
    Obj val = vmGet(vm, pos+2);

    hashInsert(&h, pos, val);
  }

  vm->val = makeClosure(i->required, i->code.fn, i->code.data, parent, h);
  vm->pc = i->next.fn;
  vm->pcData = i->next.data;
}

Instr
makeInstrMakeClosure(Instr code, int required, Instr next, int *closed, int nclosed) {
  struct InstrMakeClosure *data = (struct InstrMakeClosure*)malloc(sizeof(struct InstrMakeClosure));
  data->code = code;
  data->required = required;
  data->next = next;
  data->closed = closed;
  data->nclosed = nclosed;
  
  Instr ret = {.fn = instrMakeClosureExec, .data = data};
  return ret;
}
