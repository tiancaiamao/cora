#ifndef _INSTR_H
#define _INSTR_H


void opConst(struct VM *vm, Obj val);
void opPush(struct VM *vm);
void opLocalRef(struct VM *vm, int idx);
void opClosureRef(struct VM *vm, int up, int idx);
void opGlobalRef(struct VM *vm, Obj sym);
void opExit(struct VM *vm);
void opMakeClosure(struct VM *vm, int required, InstrFunc fn, void* codeData, int *closed, int nclosed);
void opPreCall(struct VM *vm);
void opCall(struct VM *vm, int argc, InstrFunc next);
void opPrimitive(struct VM *vm, int size, Obj prim);

Obj cgMakeClosure(struct VM *vm, int required, InstrFunc fn, void* codeData, int *closed, int nclosed);

#endif
