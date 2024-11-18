#ifndef _reader_h_
#define _reader_h_

#include "types.h"
#include <stdio.h>

struct SexpReader {
		char *selfPath;
		struct Cora *co;
};

struct VM;
Obj sexpRead(struct SexpReader *r, FILE *in, int *errCode);
void sexpWrite(FILE *out, Obj obj);

void printObj(FILE* f, Obj o);
Obj reverse(Obj o);

#endif
