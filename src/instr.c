#include "gc.h"
#include "types.h"
#include "vm.h"
#include "builtin.h"
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void instrGCFunc(struct GC *gc, void *obj);

struct InstrConst {
  instrHead head;
  Obj val;
  Instr next;
};

static void
instrConstExec(struct VM *vm) {
  printf("instr const exec\n");

  struct InstrConst *c = vm->pcData;
  vm->val = c->val;
  vm->pc = c->next->fn;
  vm->pcData = c->next;
}

static void
instrConstGCFunc(struct GC *gc, void *obj) {
  struct InstrConst *p = obj;
  gcField(gc, getScmHead(p->val));
  gcField(gc, &p->next->head);
}

Instr
makeInstrConst(Obj val, Instr next) {
  struct InstrConst *data = newObj(scmHeadInstr, sizeof(struct InstrConst));
  data->head.fn = instrConstExec;
  data->val = val;
  data->next = next;
  return &data->head;
}

struct InstrIf {
  instrHead head;
  Instr br1;
  Instr br2;
};

static void
instrIfExec(struct VM *vm) {
  printf("instr if exec\n");

  struct InstrIf *i = vm->pcData;
  if (vm->val == True) {
    vm->pc = i->br1->fn;
    vm->pcData = i->br1;
  } else if (vm->val == False) {
    vm->pc = i->br2->fn;
    vm->pcData = i->br2;
  } else {
    // TODO?
    assert(false);
  }
}

static void
instrIFGCFunc(struct GC *gc, void *obj) {
  struct InstrIf *x = obj;
  gcField(gc, &x->br1->head);
  gcField(gc, &x->br2->head);
}

Instr
makeInstrIf(Instr br1, Instr br2) {
  struct InstrIf *data = newObj(scmHeadInstr, sizeof(struct InstrIf));
  data->head.fn = instrIfExec;
  data->br1 = br1;
  data->br2 = br2;
  return &data->head;
}

struct InstrNOP {
  instrHead head;
  Instr next;
};

static void
instrNOPExec(struct VM *vm) {
  printf("instr nop exec\n");

  struct InstrNOP *i = vm->pcData;
  vm->pc = i->next->fn;
  vm->pcData = i->next;
}

static void
instrNOPGCFunc(struct GC *gc, void *obj) {
  struct InstrNOP *x = obj;
  gcField(gc, &x->next->head);
}

Instr
makeInstrNOP(Instr next) {
  struct InstrNOP *data = newObj(scmHeadInstr, sizeof(struct InstrNOP));
  data->head.fn = instrNOPExec;
  data->next = next;
  return &data->head;
}

struct InstrPush {
  instrHead head;
  Instr next;
};

extern void gcGlobal(struct GC *gc);
extern struct GC *gc;
extern void gcFull(struct GC *gc);

static bool
maybeTriggerGC(struct VM *vm, struct GC *gc) {
  vm->gcTicker++;
  if (vm->gcTicker != 256) {
    return false;
  }
  vm->gcTicker = 0;

  if (gcIng(gc)) {
    return false;
  }

  // Maybe trigger a new round of GC, if not currently GC-ing.
  for (int i=vm->base; i<vm->pos; i++) {
    scmHead *p = getScmHead(vm->data[i]);
    if (p != NULL) {
      gcMarkRoot(gc, p);
    }
  }

  scmHead *p = getScmHead(vm->val);
  if (p != NULL) {
    gcMarkRoot(gc, p);
  }

  gcMarkRoot(gc, vm->pcData);

  if (vm->gcSave != NULL) {
    gcMarkRoot(gc, vm->gcSave);
  }

  gcGlobal(gc);
  return true;
}

static void
instrPushExec(struct VM *vm) {
  printf("instr push exec\n");
  bool succ = maybeTriggerGC(vm, gc);
  if (succ) {
    gcFull(gc);
  }

  struct InstrPush *i = vm->pcData;
  push(vm, vm->val);
  vm->pc = i->next->fn;
  vm->pcData = i->next;
}

static void
instrPushGCFunc(struct GC *gc, void *obj) {
  struct InstrPush *p = obj;
  gcField(gc, &p->next->head);
}

Instr
makeInstrPush(Instr next) {
  struct InstrPush *data = newObj(scmHeadInstr, sizeof(struct InstrPush));
  data->head.fn = instrPushExec;
  data->next = next;
  return &data->head;
}

struct InstrLocalRef {
  instrHead head;
  int idx;
  Instr next;
};

static void
instrLocalRefExec(struct VM *vm) {
  printf("instr local ref exec\n");

  struct InstrLocalRef *i = vm->pcData;
  Obj v = vmGet(vm, i->idx + 2);
  vm->val = v;
  vm->pc = i->next->fn;
  vm->pcData = i->next;
}

static void
instrLocalRefGCFunc(struct GC *gc, void *obj) {
  struct InstrLocalRef *i = obj;
  gcField(gc, &i->next->head);
}

Instr
makeInstrLocalRef(int idx, Instr next) {
  struct InstrLocalRef *data = newObj(scmHeadInstr, sizeof(struct InstrLocalRef));
  data->head.fn = instrLocalRefExec;
  data->idx = idx;
  data->next = next;
  return &data->head;
}

struct InstrClosureRef {
  instrHead head;
  int up;
  int idx;
  Instr next;
};

static void
instrClosureRefExec(struct VM *vm) {
  printf("instr closure ref exec\n");

  struct InstrClosureRef *instr = vm->pcData;
  Obj tmp = vmGet(vm, 1);
  for (int i=instr->up; i>0; i--) {
    tmp = closureParent(tmp);
  }
  vm->val = closureSlot(tmp, instr->idx);
  vm->pc = instr->next->fn;
  vm->pcData = instr->next;
}

static void
instrClosureRefGCFunc(struct GC *gc, void *obj) {
  struct InstrClosureRef *p = obj;
  gcField(gc, &p->next->head);
}

Instr
makeInstrClosureRef(int up, int idx, Instr next) {
  struct InstrClosureRef *data = newObj(scmHeadInstr, sizeof(struct InstrClosureRef));
  data->head.fn = instrClosureRefExec;
  data->up = up;
  data->idx = idx;
  data->next = next;
  return &data->head;
}

struct InstrGlobalRef {
  instrHead head;
  Obj sym;
  Instr next;
};

static void
instrGlobalRefExec(struct VM *vm) {
  printf("instr global ref exec\n");

  struct InstrGlobalRef *i = vm->pcData;
  Obj val = symbolGet(i->sym);
  if (val == 0) {
    // TODO: panic("undefined symbol")
    assert(false);
  }

  vm->val = val;
  vm->pc = i->next->fn;
  vm->pcData = i->next;
}

static void
instrGlobalRefGCFunc(struct GC *gc, void *obj) {
  struct InstrGlobalRef *p = obj;
  // TODO: handle the symbol?
  gcField(gc, &p->next->head);
}

Instr
makeInstrGlobalRef(Obj sym, Instr next) {
  struct InstrGlobalRef *data = newObj(scmHeadInstr, sizeof(struct InstrGlobalRef));
  data->head.fn = instrGlobalRefExec;
  data->sym = sym;
  data->next = next;
  return &data->head;
}

struct InstrPrimitive {
  instrHead head;
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
    printf("before instr primitive(%s) exec %p \n", primitiveName(c->prim), fn);
    fn(vm);
    printf("after instr primitive(%s) exec %p \n", primitiveName(c->prim), fn);
  } else if (c->size < required) {
    Obj *array = (Obj*)malloc(c->size * sizeof(Obj));
    memcpy(array, vm->data+vm->pos-c->size, c->size*sizeof(Obj));
    vm->val = makeCurry(required - c->size, c->size, array, c->prim);
    vm->pos = vm->pos - c->size;
  } else {
    // TODO: panic
    assert(false);
  }

  if (c->next->fn == NULL) {
    vmReturn(vm, vm->val);
  } else {
    vm->pc = c->next->fn;
    vm->pcData = c->next;
  }
}

static void
instrPrimitiveGCFunc(struct GC *gc, void *obj) {
  struct InstrPrimitive *p = obj;
  gcField(gc, getScmHead(p->prim));
  gcField(gc, &p->next->head);
}

struct scmPrimitive;

Instr
makeInstrPrimitive(int size, Obj prim, Instr next) {
  struct InstrPrimitive *data = newObj(scmHeadInstr, sizeof(struct InstrPrimitive));
  data->head.fn = instrPrimitiveExec;
  data->size = size;
  data->prim = prim;
  data->next = next;
  return &data->head;
}

struct InstrExit {
  instrHead head;
};

static void
instrExitExec(struct VM *vm) {
  printf("instr exit exec (%d %d)\n", vm->base, vm->pos);
  if (vm->base == 43 && vm->pos == 46) {
    // ??
    printf("lalal--");
  }
  vmReturn(vm, vm->val);
}

struct InstrExit identityData = {
  .head.fn = instrExitExec,
};

Instr
identity() {
  return &identityData.head;
}

struct InstrCall {
  instrHead head;
  int size;
  Instr next;
};

static void
callClosureNormal(struct InstrCall *c, struct VM *vm, Obj clo) {
  if (c->next->fn == NULL) {
    // TODO panic("should never here?")
    assert(false);
  }

  if (c->next->fn == instrExitExec) { // Jump
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

    printf("call closure old stack == %d %d vm->base:%d\n", old.base, old.pos, vm->base);
    if (old.base == 33 && old.pos == 38) {
      printf("111");
    }

    Obj cc = makeContinuation(old, c->next->fn, c->next);
    vm->base = newStackBase;
    vmSet(vm, 0, cc);
  }

  Instr code = closureCode(clo);
  vm->pc = code->fn;
  vm->pcData = code;
}

static void instrCallExec(struct VM *vm);
Instr makeInstrCall(int size, Instr next);

static void
callClosurePartial(struct InstrCall *c, struct VM *vm, Obj clo) {
  struct stack old;
  old.data = vm->data;
  old.base = vm->base;
  old.pos = vm->pos;
  int newBase = vm->pos;

  // Prepare a new stack for call.
  Obj cc = makeContinuation(old, NULL, NULL);
  int required = closureRequired(clo);
  push(vm, cc);
  for(int i=0; i<required+1; i++) {
    Obj tmp = vmGet(vm, i+2);
    push(vm, tmp);
  }
  vm->base = newBase;

  // Call partial.
  Instr code = closureCode(clo);
  vm->pc = code->fn;
  vm->pcData = code;
  while(vm->pc != NULL) {
    vm->pc(vm);
  }

  // Handle the remain call.
  vmSet(vm, 2, vm->val);
  for (int i=0; i<c->size-1-required; i++) {
    Obj tmp = vmGet(vm, i+3+required);
    vmSet(vm, i+3, tmp);
  }
  vmResize(vm, c->size-required+2);

  Instr instr = makeInstrCall(c->size - required, c->next); // mem leak?
  vm->pc = instr->fn;
  vm->pcData = instr;
}

static void
callCurry(struct InstrCall *c, struct VM *vm, Obj curry) {
  int sz = curryCaptured(curry);
  Obj *data = curryData(curry);
  Obj prim = curryPrim(curry);

  // TODO check range and realloc?

  Instr instr;
  Obj *base = vm->data + vm->pos - c->size;
  if (prim != Nil) {
    memcpy(base+sz-1, base+1, (c->size-1)*sizeof(Obj));
    memcpy(base-1, data, sz*sizeof(Obj));
    vm->pos = vm->pos + sz - 2;
    instr = makeInstrPrimitive(c->size+sz-1, prim, c->next);
  } else {
    memcpy(base+sz, base+1, (c->size-1)*sizeof(Obj));
    memcpy(base, data, sz*sizeof(Obj));
    vm->pos = vm->pos + sz - 1;
    instr = makeInstrCall(c->size+sz-1, c->next);
  }

  vm->pc = instr->fn;
  vm->pcData = instr;
}

static void
callClosure(struct InstrCall *c, struct VM *vm, Obj clo) {
  int argc = c->size - 1;
  int required = closureRequired(clo);
  if (argc == required) {
    callClosureNormal(c, vm, clo);
  } else if (argc < required) {
    Obj *array = calloc(c->size, sizeof(Obj));
    memcpy(array, vm->data+vm->pos - c->size, c->size * sizeof(Obj));

    Obj curry = makeCurry(required - argc, c->size, array, Nil);
    vm->val = curry;
    vm->pos = vm->pos - c->size - 1;

    vm->pc = c->next->fn;
    vm->pcData = c->next;
  } else {
    // partial apply
    callClosurePartial(c, vm, clo);
  }
}

static void
instrCallExec(struct VM *vm) {
  printf("instr call exec\n");

  struct InstrCall *c = vm->pcData;
  Obj fn = vmGet(vm, -c->size);
  if (isclosure(fn)) {
    callClosure(c, vm, fn);
  } else if (iscurry(fn)) {
    callCurry(c, vm, fn);
  } else {
    // TODO: panic
    printf("call non-callable obj:%ld\n", fn);
    assert(false);
  }
}

static void
instrCallGCFunc(struct GC *gc, void *obj) {
  struct InstrCall *c = obj;
  gcField(gc, &c->next->head);
}

Instr
makeInstrCall(int size, Instr next) {
  struct InstrCall *data = newObj(scmHeadInstr, sizeof(struct InstrCall));
  data->head.fn = instrCallExec;
  data->size = size;
  data->next = next;
  return &data->head;
}

struct InstrPrepareCall {
  instrHead head;
  Instr next;
};

static void
instrPrepareCallExec(struct VM *vm) {
  printf("instr prepare call exec\n");

  struct InstrPrepareCall *i = vm->pcData;
  push(vm, Nil);
  vm->pc = i->next->fn;
  vm->pcData = i->next;
}

static void
instrPrepareCallGCFunc(struct GC *gc, void *obj) {
  struct InstrPrepareCall *i = obj;
  gcField(gc, &i->next->head);
}

Instr
makeInstrPrepareCall(Instr next) {
  struct InstrPrepareCall *data = newObj(scmHeadInstr, sizeof(struct InstrPrepareCall));
  data->head.fn = instrPrepareCallExec;
  data->next = next;
  return &data->head;
}

struct InstrMakeClosure {
  instrHead head;
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
  printf("instr make closure exec\n");

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

  vm->val = makeClosure(i->required, i->code, parent, h);
  vm->pc = i->next->fn;
  vm->pcData = i->next;
}

static void
instrMakeClosureGCFunc(struct GC *gc, void *obj) {
  struct InstrMakeClosure *x = obj;

  gcField(gc, &x->code->head);
  gcField(gc, &x->next->head);
}

Instr
makeInstrMakeClosure(Instr code, int required, Instr next, int *closed, int nclosed) {
  struct InstrMakeClosure *data = newObj(scmHeadInstr, sizeof(struct InstrMakeClosure));
  data->head.fn = instrMakeClosureExec;
  data->code = code;
  data->required = required;
  data->next = next;
  data->closed = closed;
  data->nclosed = nclosed;
  return &data->head;
}

void
instrGCFunc(struct GC *gc, void *obj) {
  Instr instr = obj;
  // Can be more efficient by making a dispatch table.
  if (instr->fn == instrConstExec) {
    return instrConstGCFunc(gc, obj);
  } else if (instr->fn == instrIfExec) {
    return instrIFGCFunc(gc, obj);
  } else if (instr->fn == instrNOPExec) {
    return instrNOPGCFunc(gc, instr);
  } else if (instr->fn == instrPushExec) {
    return instrPushGCFunc(gc, obj);
  } else if (instr->fn == instrLocalRefExec) {
    return instrLocalRefGCFunc(gc, obj);
  } else if (instr->fn == instrClosureRefExec) {
    return instrClosureRefGCFunc(gc, obj);
  } else if (instr->fn == instrGlobalRefExec) {
    return instrGlobalRefGCFunc(gc, obj);
  } else if (instr->fn == instrPrimitiveExec) {
    return instrPrimitiveGCFunc(gc, obj);
  } else if (instr->fn == instrExitExec) {
    // Nothing
  } else if (instr->fn == instrCallExec) {
    return instrCallGCFunc(gc, obj);
  } else if (instr->fn == instrPrepareCallExec) {
    return instrPrepareCallGCFunc(gc, obj);
  } else if (instr->fn == instrMakeClosureExec) {
    return instrMakeClosureGCFunc(gc, obj);
  } else {
    printf("something is wrong!!\n");
    assert(false);
  }
}
