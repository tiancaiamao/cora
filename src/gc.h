#ifndef _GC_H
#define _GC_H

#include <stdbool.h>
#include <stdint.h>

struct GC;

typedef uint8_t scmHeadType;

typedef struct _scmHead {
  scmHeadType type;
  uint16_t size;
  uint8_t color;
  struct _scmHead* prev;
  struct _scmHead* next;
} scmHead;

struct GC;

typedef void (*gcFunc)(struct GC* gc, void *obj);

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
  /* | Post GC flip      | NULL     | NULL     | Not NULL | Not NULL | */
  scmHead white;
  scmHead ecru;
  scmHead gray;
  scmHead black;

  gcFunc registry[GC_REGISTRY_MAX];

  bool disable;
};

struct GC* gcInit(void *allocator,
		  void* (*allocFn)(void*, int),
		  void (*recycleFn)(void*, void*));

void gcField(struct GC *gc, scmHead *field);
bool gcRegistForType(struct GC *gc, uint8_t type, gcFunc fn);

bool gcIng(struct GC *gc);

scmHead* gcAlloc(struct GC *gc, int sz);
void gcMarkRoot(struct GC *gc, scmHead *obj);
bool gcStep(struct GC *gc, int n);

void gcDisable(struct GC *gc);
void gcEnable(struct GC *gc);

#endif
