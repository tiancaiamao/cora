#ifndef _reader_h_
#define _reader_h_

#include "types.h"
#include <stdio.h>

struct SexpReader {
  // associate list ((pkg . path1) (pkg2 . path2) ...)
  Obj pkgMapping;
  char *selfPath;
};

struct VM;
Obj sexpRead(struct VM *vm, int pos, struct SexpReader *r, FILE *in, int *errCode);
void sexpWrite(FILE *out, Obj obj);

void printObj(FILE* f, Obj o);
Obj reverse(struct VM *vm, int pos, Obj o);

#endif
