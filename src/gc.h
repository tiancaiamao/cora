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


struct GC* gcInit(void *allocator,
		  void* (*allocFn)(void*, int),
		  void (*recycleFn)(void*, void*));

void gcField(struct GC *gc, scmHead *field);
typedef void (*gcFunc)(struct GC* gc, void *obj);
bool gcRegistForType(struct GC *gc, uint8_t type, gcFunc fn);

bool gcIng(struct GC *gc);

scmHead* gcAlloc(struct GC *gc, int sz);
void gcMarkRoot(struct GC *gc, scmHead *obj);
bool gcStep(struct GC *gc, int n);

#endif
