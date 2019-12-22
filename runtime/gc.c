#include <stdlib.h>
#include <string.h>
#include "types.h"

const int MEM_BLOCK_SIZE = 4*1024*1024;

struct GC {
  int offset;
  char data[];
};

static void*
gcAlloc(struct GC* gc, int size) {
  if (gc->offset + size > MEM_BLOCK_SIZE) {
    return NULL;
  }
  void *ret = &gc->data[gc->offset];
  gc->offset += size;
  return ret;
}

typedef void (*gcCopyFunc)(void* from, void* to, struct GC *gc);

extern void symbolGCFunc(void* from, void* to, struct GC *gc);
extern void consGCFunc(void* from, void* to, struct GC *gc);
extern void closureGCFunc(void* from, void* to, struct GC *gc);
extern void curryGCFunc(void* from, void* to, struct GC *gc);
extern void stringGCFunc(void* from, void* to, struct GC *gc);
extern void vectorGCFunc(void* from, void* to, struct GC *gc);

static struct gcCopyObj {
  scmHeadType type;
  gcCopyFunc fn;
} registry[] = {
	{scmHeadSymbol, symbolGCFunc},
	{scmHeadCons, consGCFunc},
	{scmHeadClosure, closureGCFunc},
  {scmHeadNative, vectorGCFunc},
	{scmHeadCurry, curryGCFunc},
	{scmHeadString, stringGCFunc},
	{scmHeadVector, vectorGCFunc},
};

static gcCopyFunc
getGCFunc(scmHeadType type) {
  return registry[type].fn;
}

void*
gcCopy(scmHead* head, struct GC *gc) {
  // Copy the data of itself to the new place.
  void* to = gcAlloc(gc, head->size);
  memcpy(to, head, head->size);

  // Copy the children to the new place.
  // And update the reference of the new object.
  gcCopyFunc gcCopyChildren = getGCFunc(head->type);
  if (gcCopyChildren != NULL) {
    gcCopyChildren(head, to, gc);
  }

  // Update the forwarding and leave it as a tombstone.
  head->forwarding = to;
  head->visited = true;
  return to;
}
