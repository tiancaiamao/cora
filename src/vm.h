#ifndef _VM_H
#define _VM_H

#include "reader.h"
#include "str.h"

struct VM;

struct VM* newVM();

// Basic APIs.
Obj vmGet(struct VM *vm, int idx);
void vmReturn(struct VM *vm, Obj val);

Obj vmRef(struct VM *vm, int ref);
Obj vmCar(struct VM *vm, int ref);
Obj vmCdr(struct VM *vm, int ref);
Obj vmCons(struct VM *vm, int r1, int r2);
void vmSet(struct VM* vm, int ref, Obj val);
void vmPush(struct VM *vm, int *pos, Obj val);

// Essentially, the VM only provide this.
Obj run(struct VM *vm, char *pc);

// High level APIs, which can be implemented using previous APIs.
Obj macroExpand(struct VM *vm, int pos, int exp);
Obj eval(struct VM *vm, int pos, int exp);
int loadByteCode(struct VM *vm, int pos, str path);

#endif
