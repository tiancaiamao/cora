#ifndef _VM_H
#define _VM_H

#include "reader.h"
#include "str.h"

struct VM;

struct VM* newVM();

// Basic APIs.
Obj vmGet(struct VM *vm, int idx);
void vmReturn(struct VM *vm, Obj val);

void vmPush(struct VM *vm, int pos, Obj val);
Obj vmCall(struct VM *vm, int pos, int n);

// Essentially, the VM only provide this.
Obj run(struct VM *vm, Obj exp);

// High level APIs, which can be implemented using previous APIs.
Obj macroExpand(struct VM *vm, int pos, Obj exp);
Obj eval(struct VM *vm, int pos, Obj exp);
int loadByteCode(struct VM *vm, int pos, str path);

#endif
