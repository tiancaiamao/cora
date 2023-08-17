#ifndef _VM_H
#define _VM_H

#include "reader.h"
#include "str.h"

struct VM;

struct VM* newVM();

// Basic APIs.
Obj vmGet(struct VM *vm, int idx);
void vmReturn(struct VM *vm, Obj val);

// Essentially, the VM only provide this.
Obj run(struct VM *vm, char *pc);

// High level APIs, which can be implemented using previous APIs.
Obj macroExpand(struct VM *vm, Obj exp);
Obj eval(struct VM *vm, Obj exp);
int loadByteCode(struct VM *vm, str path);

#endif
