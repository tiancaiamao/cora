#ifndef _GC_H_
#define _GC_H_

struct scmHead;
struct GC;

extern struct GC *gc;
struct GC* gcNew();

void* gcCopy(scmHead* head, struct GC *gc);

#endif
