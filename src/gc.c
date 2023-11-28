#include "gc.h"
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <setjmp.h>
#include <string.h>

struct GC *g;

const int PAGE_SIZE = 4<<10;

struct Allocator {
  void** pages;
  int len;
  int cap;

  void* curr;
};


static void
newPage(struct Allocator *alloc) {
  void *page = malloc(PAGE_SIZE);
  alloc->pages[alloc->len] = page;
  alloc->len++;
  alloc->curr = page;
}

static void
expandPages(struct Allocator *alloc) {
  if (alloc->len == 0) {
    alloc->pages = malloc(sizeof(void*) * 16);
    alloc->cap = 16;
    newPage(alloc);
  } else {
    alloc->pages = realloc(alloc->pages, sizeof(void*) * alloc->cap * 2);
    alloc->cap *= 2;
  }
  return;
}

#define alignto(p, bits)      (((p) >> bits) << bits)
#define aligntonext(p, bits)  alignto(((p) + (1 << bits) - 1), bits)

void*
allocFn(struct Allocator *alloc, int sz) {
  if (alloc->len >= alloc->cap) {
    expandPages(alloc);
  }

  void *page = alloc->pages[alloc->len-1];
  if (alloc->curr + sz >= page + PAGE_SIZE) {
    newPage(alloc);
  }

  void *ret = alloc->curr;
  alloc->curr += sz;
  alloc->curr = (void*)aligntonext((uintptr_t)(alloc->curr), 3);
  /* printf("alloc fn return %p sz=%d new_curr= %p\n", ret, sz, alloc->curr); */
  return ret;
}

void
recycleFn(struct Allocator *alloc, void *ptr) {
}

bool
managed(struct Allocator *alloc, void *ptr) {
  for (int i=0; i<alloc->len; i++) {
    void *page = alloc->pages[i];
    if (ptr >= page && ptr < page+PAGE_SIZE) {
      return true;
    }
  }
  return false;
}

/* void gcDisable(struct GC *gc) { */
/*   gc->disable = true; */
/* } */

/* void gcEnable(struct GC *gc) { */
/*   gc->disable = false; */
/* } */

static void
unlink(scmHead *h) {
  if (h->prev != NULL) {
    h->prev->next = h->next;
  }
  if (h->next != NULL) {
    h->next->prev = h->prev;
  }
  h->prev = NULL;
  h->next = NULL;
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

bool
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

void
postGCFlip(struct GC *gc) {
  assert(gc->white.next == NULL);

  // After GC, the ecru list become the new white list.
  gc->white.next = gc->ecru.next;
  if (gc->white.next != NULL) {
    gc->white.next->prev = &gc->white;
  }

  for(scmHead* p = gc->white.next; p != NULL; p = p->next) {
    printf("post flip recycle %p\n", p);
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

/* static char *typeName[] = { */
/*   "bool", */
/*   "null", */
/*   "number", */
/*   "cons", */
/*   "curry", */
/*   "string", */
/*   "vector", */
/*   "closure", */
/*   "continuation", */
/* }; */

void gcFull(struct GC *gc, struct VM *vm, int pos);

// ----- exposed API ---------- //
scmHead*
gcAlloc(struct GC *gc, struct VM *vm, int pos, int sz) {
  if (gc->count >= gc->nextGC) {
    /* gcFull(gc, vm, pos); */
    gc->count = 0;
  }
  gc->count++;

  scmHead* tmp = NULL;
  if (gc->white.next != NULL)  {
    tmp = gc->white.next;
    unlink(tmp);
    if (tmp->size != sz) {
      // GC only manage the lifecycle, the memory alloc/free is the work of the allocator.
      // The allocator can reuse the memory by, for example, object pools.
      gc->recycleFn(gc->allocator, tmp);
      printf("gc recycle object:%p\n", tmp);
      tmp = NULL;
    }
  }

  if (tmp == NULL) {
    tmp = gc->allocFn(gc->allocator, sz);
    tmp->size = sz;
  }

  /* if (gc->gray.next == NULL && gc->black.next == NULL) { */
  if (gc->gray.next == NULL) {
    // No GC related things, just put the obj to ecru list.
    tmp->color = gc->color;
    link(tmp, &gc->ecru);
  } else {
    // Maybe GC-ing, the black list will become the next ecru list eventually.
    // If the color of an object is ecru, it's move to gray and then black.
    // So the new allocated is black directly.
    assert(false);  // TODO not now
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
gcMark(struct GC *gc, scmHead *obj) {
  if (obj == NULL) {
    return;
  }

  if (ecru(gc, obj)) {
    unlink(obj);
    obj->color = ~obj->color;
    link(obj, &gc->gray);
    /* printf("gcObj, ecru obj -> gray: %p\n", obj); */
  }
}

struct GC*
gcInit() {
  void* dummy;
  struct Allocator *alloc =  malloc(sizeof(struct Allocator));
  memset(alloc, 0, sizeof(struct Allocator));

  struct GC *gc = (struct GC*)malloc(sizeof(struct GC));
  gc->baseStackAddr = &dummy;

  gc->allocator = alloc;
  gc->allocFn = allocFn;
  gc->recycleFn = recycleFn;
  gc->managed = managed;

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

  /* gc->disable = false; */
  gc->count = 0;
  gc->nextGC = 64;

  return gc;
}

/* void */
/* gcMarkRoot(struct GC *gc, scmHead *rootObj) { */
/*   // rootObj should be in the ecru list, before GC. */
/*   /\* assert(ecru(gc, rootObj)); *\/ */

/*   if (ecru(gc, rootObj)) { */
/*     /\* printf("markroot %p %d\n", rootObj, rootObj->color); *\/ */
/*     unlink(rootObj); */
/*     rootObj->color = ~rootObj->color; */
/*     link(rootObj, &gc->gray); */
/*   } */
/* } */


bool
gcIng(struct GC *gc) {
  return gc->gray.next != NULL;
}

void
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

static int gcIdx = 0;

/* void */
/* checkList(scmHead *p, scmHead *q) { */
/*   while(p->next != NULL) { */
/*     p = p->next; */
/*   } */
/*   while(q->next != NULL) { */
/*     q = q->next; */
/*   } */
/*   assert((p != q) || (p == NULL && q == NULL)); */
/* } */

static int
listCount(scmHead *p) {
  int ret = 0;
  while(p->next != NULL) {
    ret++;
    p = p->next;
  }
  return ret;
}

static void
gcCStack(struct GC* gc, uintptr_t* from, uintptr_t* to) {
  assert(from < to);
  assert(((uintptr_t)from & 0x7) == 0);
  assert(((uintptr_t)to & 0x7) == 0);

  for (uintptr_t *p = from; p<to; p++) {
    uintptr_t stackValue = *p;
    void *stackPtr = ptr(stackValue);
    if (gc->managed(gc->allocator, stackPtr)) {
      gcMark(gc, stackPtr);
    }
  }
}

struct VM;
/* extern void gcVM(struct GC *gc, struct VM *vm, int pos); */

void
gcFull(struct GC *gc, struct VM *vm, int pos) {
  // Dump registers onto stack and scan the stack.
  jmp_buf ctx;
  memset(&ctx, 0, sizeof(jmp_buf));
  setjmp(ctx);
  void* stackAddr = &stackAddr;
  gcCStack(gc, stackAddr, gc->baseStackAddr);
  /* gcVM(gc, vm, pos); */

  printf("==== before full gc %d=========\n", gcIdx++);
  /* if (gcIdx == 177) { */
  /*   printf("before full gc %d=========\n", gcIdx); */
  /*   printGC(gc); */
  /* } */
  /* checkList(&gc->gray, &gc->ecru); */

  while(!gcStep(gc, 10)) {}

  assert (gc->gray.next == NULL && gc->black.next != NULL);
  /* if (gcIdx == 177) { */
  /*   printf("after full gc =========\n"); */
  /*   printGC(gc); */
  /* } */

  while(gc->white.next != NULL) {
    scmHead *tmp = gc->white.next;
    printf("recycle white obj %p\n", tmp);
    unlink(tmp);
    gc->recycleFn(gc->allocator, tmp);
  }
  assert(gc->white.next == NULL);

  /* checkList(&gc->black, &gc->ecru); */

  assert (gc->gray.next == NULL && gc->black.next != NULL && gc->white.next == NULL);
  // After a round of GC, there are only ecru and black, flip then.
  postGCFlip(gc);

  int count = listCount(&gc->ecru);
  gc->nextGC = count;

  /* checkList(&gc->white, &gc->ecru); */
  /* if (gcIdx == 177) { */
  /*   printf("post gc ~~~\n"); */
  /*   printGC(g); */
  /* } */
}


// unit test for the code
// gcc -g -D_GC_TEST gc.c -o a.out

/* #ifdef _GC_TEST */

/* struct Cons { */
/*   scmHead head; */
/*   struct Cons* car; */
/*   struct Cons* cdr; */
/* }; */

/* scmHead* */
/* getCarField(scmHead* p) { */
/*   struct Cons* pair = (struct Cons*)p; */
/*   return (scmHead*)(pair->car); */
/* } */

/* static void */
/* consGCFunc(struct GC* gc, void *obj) { */
/*   struct Cons *p = obj; */
/*   gcMark(gc, &p->car->head); */
/*   gcMark(gc, &p->cdr->head); */
/* } */

/* scmHead* */
/* readBarrier(struct GC *gc, scmHead* obj, scmHead* (*getField)(scmHead*)) { */
/*   if (ecru(gc, obj)) { */
/*     unlink(obj); */
/*     link(obj, &gc->gray); */
/*   } */
/*   return getField(obj); */
/* } */

/* void* */
/* newObj(scmHeadType tp, int sz) { */
/*   scmHead *p = gcAlloc(g, sz); */
/*   p->size = sz; */
/*   p->type = tp; */
/*   return p; */
/* } */

/* struct Atom { */
/*   scmHead head; */
/*   int v; */
/* }; */

/* static scmHead* */
/* cons(scmHead* car, scmHead* cdr) { */
/*   void* p = newObj(0, sizeof(struct Cons)); */
/*   struct Cons* ret = p; */
/*   ret->car = (struct Cons*)car; */
/*   ret->cdr = (struct Cons*)cdr; */
/*   return (scmHead*)p; */
/* } */

/* static scmHead* */
/* atom(int x) { */
/*   void *p = newObj(1, sizeof(struct Atom)); */
/*   struct Atom* o = p; */
/*   o->v = x; */
/*   return p; */
/* } */

/* void* allocFn(void *allocator, int sz) { */
/*   return malloc(sz); */
/* } */

/* void recycleFn(void *allocator, void *ptr) { */
/*   return free(ptr); */
/* } */

/* bool managed(void *allocator, void *ptr) { */
/* } */


/* int */
/* main(int argc, char *argv[]) { */
/*   struct GC *gc = gcInit(NULL, allocFn, recycleFn); */
/*   gcRegistForType(gc, 0, consGCFunc); */
/*   g = gc; */

/*   scmHead* x1 = cons(atom(1), cons(atom(2), atom(3))); */
/*   scmHead* x2 = cons(x1, atom(5)); */
/*   scmHead* x3 = cons(atom(1), cons(atom(2), atom(3))); */
/*   scmHead* x4 = cons(x1, x3); */
/*   scmHead* x5 = cons(x1, atom(6)); */
/*   scmHead* x6 = cons(x1, cons(x2, cons(x3, cons(x4, cons(x5, x6))))); */

/*   // Try to GC something. */
/*   gcMarkRoot(g, x3); */
/*   gcStep(g, 1); */
/*   gcStep(g, 3); */
/*   gcStep(g, 5); */
  
/*   // Test allocating during GC. */
/*   x2 = cons(x1, atom(5)); */
/*   x3 = cons(atom(1), cons(atom(2), atom(3))); */
/*   x4 = cons(x1, x3); */
  
/*   // Finish this round of GC */
/*   while(!gcStep(g, 7)) {} */

/*   // Now whitelist is not null, test object reuse. */
/*   x4 = cons(x1, x3); */
/*   x5 = cons(x1, atom(6)); */
/*   x6 = cons(x1, cons(x2, cons(x3, cons(x4, cons(x5, x6))))); */

/*   // Cover read barrier. */
/*   if (gc->gray.next != NULL) { */
/*     x4 = readBarrier(g, x5, getCarField); */
/*   } */

/*   // And GC another round. */
/*   gcMarkRoot(g, x4); */
/*   while(!gcStep(g, 7)) {} */
/* } */

/* #endif */
