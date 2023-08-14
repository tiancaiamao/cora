#ifndef _reader_h_
#define _reader_h_

#include "types.h"
#include <stdio.h>

struct SexpReader {
  // associate list ((pkg . path1) (pkg2 . path2) ...)
  Obj pkgMapping;
  char *selfPath;
};

Obj sexpRead(struct SexpReader *r, FILE *in, int *errCode);
void sexpWrite(FILE *out, Obj obj);

Obj reverse(Obj o);

void printObj(FILE* f, Obj o);

#endif
