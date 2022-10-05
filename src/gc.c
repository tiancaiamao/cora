#include "gc.h"
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>

#define GC_REGISTRY_MAX 256

struct GC {
  void *allocator;
  void* (*allocFn)(void* allocator, int sz);
  void (*recycleFn)(void* allocator, void *ptr);

  // color is the color of ecru list.
  uint8_t color;

  // state change:
  /* |                   | gray     | black    | white    | ecru     | */
  /* |-------------------|----------|----------|----------|----------| */
  /* | GCing             | Not NULL |          |          |          | */
  /* | GC finish         | NULL     | Not NULL |          |          | */
  /* | Before next round | NULL     | Not NULL | NULL     |          | */
  /* | Post GC           | NULL     | NULL     | Not NULL | Not NULL | */
  scmHead white;
  scmHead ecru;
  scmHead gray;
  scmHead black;

  gcFunc registry[GC_REGISTRY_MAX];
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

  /* printf("advance: gray -> black: %p\n", obj); */
}

static void
postGC(struct GC *gc) {
  assert(gc->white.next == NULL);

  // After GC, the ecru list become the new white list.
  gc->white.next = gc->ecru.next;
  if (gc->white.next != NULL) {
    gc->white.next->prev = &gc->white;
  }

  // And black become the ecru.
  gc->ecru.next = gc->black.next;
  if (gc->ecru.next != NULL) {
    gc->ecru.next->prev = &gc->ecru;
  }

  gc->black.prev = NULL;
  gc->black.next = NULL;

  // And also turn the ecru color
  gc->color = ~gc->color;
}

static void printGC(struct GC *gc);

// ----- exposed API ---------- //
scmHead*
gcAlloc(struct GC *gc, int sz) {
  if (gc->white.next == NULL) {
    // After consuming all the white obj
    if (gc->gray.next == NULL && gc->black.next != NULL) {
      // After a round of GC, there are only ecru and black, switch them.
      postGC(gc);

      assert(gc->white.next != NULL);
      /* printGC(gc); */
    } else {
      // Not enough white obj? refill one.
      scmHead* tmp = gc->allocFn(gc->allocator, sz);
      tmp->size = sz;
      link(tmp, &gc->white);
    }
  }

  // Assume gc->white not null now.
  scmHead *tmp = gc->white.next;
  unlink(tmp);

  if (tmp->size != sz) {
    // GC only manage the lifecycle, the memory alloc/free is the work of the allocator.
    // The allocator can reuse the memory by, for example, object pools.
    gc->recycleFn(gc->allocator, tmp);
    /* printf("gc recycle object:%p\n", tmp); */

    tmp = gc->allocFn(gc->allocator, sz);
    tmp->size = sz;
  }
  
  if (gc->gray.next == NULL && gc->black.next == NULL) {
    // No GC related things, just put the obj to ecru list.
    tmp->color = gc->color;
    link(tmp, &gc->ecru);
  } else {
    // Maybe GC-ing, the black list will become the next ecru list eventually.
    // If the color of an object is ecru, it's move to gray and then black.
    // So the new allocated is black directly.
    tmp->color = ~gc->color;
    link(tmp, &gc->black);
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
    field->color = ~field->color;

    link(field, &gc->gray);
    /* printf("gcField, ecru obj -> gray: %p\n", field); */
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

  memset(gc->registry, 0, GC_REGISTRY_MAX*sizeof(gcFunc));

  return gc;
}

void
gcMarkRoot(struct GC *gc, scmHead *rootObj) {
  // rootObj should be in the ecru list, before GC.
  /* assert(ecru(gc, rootObj)); */

  if (ecru(gc, rootObj)) {
    /* printf("markroot %p %d\n", rootObj, rootObj->color); */
    unlink(rootObj);
    rootObj->color = ~rootObj->color;
    link(rootObj, &gc->gray);
  }
}


bool
gcIng(struct GC *gc) {
  return gc->gray.next != NULL;
}

static void
printGC(struct GC *gc) {
  printf("printGC ... begin\n");
  if (gc->gray.next == NULL) {
    printf("no gray objects\n");
  } else {
    for (scmHead *p = gc->gray.next; p != NULL; p=p->next) {
      printf("gray object: %p\n", p);
    }
  }

  if (gc->ecru.next == NULL) {
    printf("no ecru objects\n");
  } else {
    for (scmHead *p = gc->ecru.next; p != NULL; p=p->next) {
      printf("ecru object: %p\n", p);
    }
  }

  if (gc->white.next == NULL) {
    printf("no white objects\n");
  } else {
    for (scmHead *p = gc->white.next; p != NULL; p=p->next) {
      printf("white object: %p\n", p);
    }
  }

  if (gc->black.next == NULL) {
    printf("no black objects\n");
  } else {
    for (scmHead *p = gc->black.next; p != NULL; p=p->next) {
      printf("black object: %p\n", p);
    }
  }
  printf("printGC ... end\n");
}

void
gcFull(struct GC *gc) {
  /* printf("before full gc =========\n"); */
  /* printGC(gc); */

  while(!gcStep(gc, 10)) {}

  /* printf("after full gc =========\n"); */
  /* printGC(gc); */
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


int
main(int argc, char *argv[]) {
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
  gcMarkRoot(g, x3);
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
  gcMarkRoot(g, x4);
  while(!gcStep(g, 7)) {}
}

#endif
