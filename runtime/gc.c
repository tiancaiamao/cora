#include "gc.h"
#include <stdlib.h>
#include <assert.h>

struct GC {
  void *allocator;
  void* (*allocFn)(void* allocator, int sz);
  void (*recycleFn)(void* allocator, void *ptr);

  void (*markRoot)(struct GC *gc);

  uint8_t color;
  scmHead white;
  scmHead ecru;
  scmHead gray;
  scmHead black;

  gcFunc registry[256];
};


static void
unlink(scmHead *h) {
  if (h->prev != NULL) {
    h->prev->next = h->next;
  }
  if (h->next != NULL) {
    h->next->prev = h->prev;
  }
}

static void
link(scmHead *from, scmHead *to) {
  assert(to != NULL);
  from->next = to->next;
  if (to->next != NULL) {
    to->next->prev = from;
  }

  to->next = from;
  from->prev = to;
}

static bool
ecru(struct GC *gc, scmHead *obj) {
  return gc->color == obj->color;
}

// The caller should assume gc->gray is not an empty list.
static void
advance(struct GC *gc) {
  scmHead *obj = gc->gray.next;
  gcFunc fn = gc->registry[obj->type];

  // collect all its fields.
  if (fn != NULL) {
    fn(gc, obj);
  }

  // unlink obj from gray and link to black.
  unlink(obj);
  link(obj, &gc->black);
}

static void
postGC(struct GC *gc) {
      // After GC, the ecru list become the new white list.
      // And black become the ecru.
      gc->white = gc->ecru;
      gc->ecru = gc->black;
      // And also turn the ecru color
      gc->color = ~gc->color;
}

// ----- exposed API ---------- //
scmHead*
gcAlloc(struct GC *gc, int sz) {
  if (gc->white.next == NULL) {
    // After consuming all the white obj
    if (gc->gray.next == NULL && gc->black.next != NULL) {
      // After a round of GC, there are only ecru and black, switch them.
      postGC(gc);
    } else {
      // Not enough white obj? refill one.
      scmHead* tmp = gc->allocFn(gc->allocator, sz);
      tmp->size = sz;
      link(tmp, &gc->white);
    }
  }

  // Assume gc->white not null now.
  scmHead *tmp = gc->white.next;
  unlink(gc->white.next);

  if (tmp->size != sz) {
    // GC only manage the lifecycle, the memory alloc/free is the work of the allocator.
    // The allocator can reuse the memory by, for example, object pools.
    gc->recycleFn(gc->allocator, tmp);
    gc->allocFn(gc->allocator, sz);

    tmp->size = sz;
  }
  
  if (gc->gray.next != NULL) {
    // GC-ing, and the black list will become the next ecru list.
    // If the color of an object is ecru, it's move to gray and then black.
    // So the new allocated is black directly.
    tmp->color = ~gc->color;
    link(tmp, &gc->black);
  } else {
    // Not GC-ing, just put the obj to ecru list.
    tmp->color = gc->color;
    link(tmp, &gc->ecru);
  }

  return tmp;
}

bool
gcStep(struct GC *gc, int n) {
  while (gc->gray.next != NULL && n > 0) {
    advance(gc);
    n--;
  }
  return gc->gray.next == NULL;
}

bool
gcRegistForType(struct GC *gc, uint8_t idx, gcFunc fn) {
  if (gc->registry[idx] != NULL) {
    return false;
  }
  gc->registry[idx] = fn;
  return true;
}

void
gcField(struct GC *gc, scmHead *field) {
  if (field == NULL) {
    return;
  }

  if (ecru(gc, field)) {
    unlink(field);
    link(field, &gc->gray);
  }
}

struct GC*
gcInit(void *allocator, void* (*allocFn)(void*, int), void (*recycleFn)(void*, void*)) {
  struct GC *gc = (struct GC*)allocFn(allocator, sizeof(struct GC));
  gc->allocator = allocator;
  gc->allocFn = allocFn;
  gc->recycleFn = recycleFn;

  gc->color = 0;
  gc->white.next = NULL;
  gc->white.prev = NULL;

  gc->ecru.next = NULL;
  gc->ecru.prev = NULL;

  gc->gray.next = NULL;
  gc->gray.prev = NULL;

  gc->black.next = NULL;
  gc->black.prev = NULL;

  return gc;
}

void
markRoot(struct GC *gc, scmHead *rootObj) {
  link(rootObj, &gc->gray);
}


// unit test for the code
// gcc -g -D_GC_TEST gc.c -o a.out

#ifdef _GC_TEST

static struct GC *g;

struct Cons {
  scmHead head;
  struct Cons* car;
  struct Cons* cdr;
};

scmHead*
getCarField(scmHead* p) {
  struct Cons* pair = (struct Cons*)p;
  return (scmHead*)(pair->car);
}

static void
consGCFunc(struct GC* gc, void *obj) {
  struct Cons *p = obj;
  gcField(gc, &p->car->head);
  gcField(gc, &p->cdr->head);
}

scmHead*
readBarrier(struct GC *gc, scmHead* obj, scmHead* (*getField)(scmHead*)) {
  if (ecru(gc, obj)) {
    unlink(obj);
    link(obj, &gc->gray);
  }
  return getField(obj);
}

struct Atom {
  scmHead head;
  int v;
};

void*
newObj(scmHeadType tp, int sz) {
  scmHead* h = gcAlloc(g, sz);
  h->type = tp;
  return h;
}

static scmHead*
cons(scmHead* car, scmHead* cdr) {
  void* p = newObj(0, sizeof(struct Cons));
  struct Cons* ret = p;
  ret->car = (struct Cons*)car;
  ret->cdr = (struct Cons*)cdr;
  return (scmHead*)p;
}

static scmHead*
atom(int x) {
  void *p = newObj(1, sizeof(struct Atom));
  struct Atom* o = p;
  o->v = x;
  return p;
}

void* allocFn(void *allocator, int sz) {
  return malloc(sz);
}

void recycleFn(void *allocator, void *ptr) {
  return free(ptr);
}


int main(int argc, char *argv[]) {
  struct GC *gc = gcInit(NULL, allocFn, recycleFn);
  gcRegistForType(gc, 0, consGCFunc);
  g = gc;

  scmHead* x1 = cons(atom(1), cons(atom(2), atom(3)));
  scmHead* x2 = cons(x1, atom(5));
  scmHead* x3 = cons(atom(1), cons(atom(2), atom(3)));
  scmHead* x4 = cons(x1, x3);
  scmHead* x5 = cons(x1, atom(6));
  scmHead* x6 = cons(x1, cons(x2, cons(x3, cons(x4, cons(x5, x6)))));

  // Try to GC something.
  markRoot(g, x3);
  gcStep(g, 1);
  gcStep(g, 3);
  gcStep(g, 5);
  
  // Test allocating during GC.
  x2 = cons(x1, atom(5));
  x3 = cons(atom(1), cons(atom(2), atom(3)));
  x4 = cons(x1, x3);
  
  // Finish this round of GC
  while(!gcStep(g, 7)) {}

  // Now whitelist is not null, test object reuse.
  x4 = cons(x1, x3);
  x5 = cons(x1, atom(6));
  x6 = cons(x1, cons(x2, cons(x3, cons(x4, cons(x5, x6)))));

  // Cover read barrier.
  if (gc->gray.next != NULL) {
    x4 = readBarrier(g, x5, getCarField);
  }

  // And GC another round.
  markRoot(g, x4);
  while(!gcStep(g, 7)) {}
}

#endif
