#ifndef _reader_h_
#define _reader_h_

#include "types.h"
#include <stdio.h>

Obj sexpRead(FILE *in, int *errCode);
void sexpWrite(FILE *out, Obj obj);

void printObj(FILE* f, Obj o);
Obj reverse(Obj o);

#endif
