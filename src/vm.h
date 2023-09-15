#ifndef _VM_H
#define _VM_H

#include "reader.h"
#include "str.h"

struct VM;

struct VM* newVM();

typedef int Ref;

// Basic APIs.
Obj vmGet(struct VM *vm, int idx);
void vmReturn(struct VM *vm, Obj val);

Obj vmRef(struct VM *vm, Ref ref);
Obj vmCar(struct VM *vm, Ref ref);
Obj vmCdr(struct VM *vm, Ref ref);
Obj vmCons(struct VM *vm, Ref r1, Ref r2);
void vmSet(struct VM* vm, Ref ref, Obj val);
void vmPush(struct VM *vm, int *pos, Obj val);
Obj vmCall(struct VM *vm, int pos, int n);

// Essentially, the VM only provide this.
Obj run(struct VM *vm, char *pc, int pos);

// High level APIs, which can be implemented using previous APIs.
Obj macroExpand(struct VM *vm, int pos, Ref exp);
Obj eval(struct VM *vm, int pos, Ref exp);
int loadByteCode(struct VM *vm, int pos, str path);

#endif
