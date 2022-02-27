#ifndef _reader_h_
#include "types.h"
#include <stdio.h>

Obj sexpRead(FILE *in, int *errCode);
void sexpWrite(FILE *out, Obj obj);
Obj reverse(Obj o);

#endif
