#ifndef _reader_h_
#define _reader_h_

#include "types.h"
#include <stdio.h>

Obj sexpRead(GC *gc, FILE *in, int *errCode);
void sexpWrite(FILE *out, Obj obj);

void printObj(FILE* f, Obj o);
Obj reverse(GC *gc, Obj o);

#endif
