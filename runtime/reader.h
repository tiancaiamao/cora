#ifndef _reader_h_
#include "types.h"
#include <stdio.h>

Obj sexpRead(FILE *in);
void sexpWrite(FILE *out, Obj obj);

#endif
