#ifndef _VM_H
#define _VM_H

#include "reader.h"
#include "str.h"

struct VM;

struct VM* newVM();
int loadByteCode(struct VM *vm, str path);
Obj run(struct VM *vm, char *pc);
Obj macroExpand(struct VM *vm, Obj exp);
Obj eval(struct VM *vm, Obj exp);

#endif
