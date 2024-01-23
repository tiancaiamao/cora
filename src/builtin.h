#ifndef _builtin_h_
#define _builtin_h_

strBuf getCoraPath();
void builtinSymbolToString(void *pc, Obj val, struct VM *vm, int pos);
void builtinLoad(void *pc, Obj val, struct VM *vm, int pos);
void builtinMakeVector(void *pc, Obj val, struct VM *vm, int pos);
void builtinVectorSet(void *pc, Obj val, struct VM *vm, int pos);
void builtinVectorRef(void *pc, Obj val, struct VM *vm, int pos);
void builtinIsVector(void *pc, Obj val, struct VM *vm, int pos);
void builtinImport(void *pc, Obj val, struct VM *vm, int pos);
void builtinIntern(void *pc, Obj val, struct VM *vm, int pos);
void builtinIsNumber(void *pc, Obj val, struct VM *vm, int pos);

    void builtinDiv(struct VM* ctx);
    void builtinMod(struct VM *ctx);



/* void builtinLoadSo(struct VM *ctx); */
/* void builtinStringAppend(struct VM *ctx); */
void builtinNumberToString(struct VM *ctx);

/* void builtinThrow(struct VM *vm); */
/* void builtinTryCatch(struct VM *vm); */



Obj primSet(Obj x, Obj y);
Obj primMul(Obj x, Obj y);
Obj primSub(Obj x, Obj y);
Obj primAdd(Obj x, Obj y);
Obj primEqual(Obj a, Obj b);
Obj primCar(Obj o);
Obj primCdr(Obj o);
Obj primCons(Obj x, Obj y);
Obj primIsCons(Obj x);
Obj primGensym(Obj sym);
Obj primIsSymbol(Obj tmp);
Obj primNot(Obj x);

void primLoad(struct VM *vm, int pos, str path, str pkg);
/* void primLoadSo(struct VM *vm, char *path); */

void builtinMakeProgram(void *pc, Obj val, struct VM *vm, int pos);
void builtinProgAppendOP(void *pc, Obj val, struct VM *vm, int pos);
void builtinProgAppendObj(void *pc, Obj val, struct VM *vm, int pos);
void builtinProgAppendInt32(void *pc, Obj val, struct VM *vm, int pos);
void builtinProgPrepareSize(void *pc, Obj val, struct VM *vm, int ignore);
void builtinProgWriteBackSize(void *pc, Obj val, struct VM *vm, int ignore);
void builtinProgAppendPrim(void *pc, Obj val, struct VM *vm, int pos);

void builtinProgRun(void *pc, Obj val, struct VM *vm, int pos);


void builtinOpenOutputFile(void *pc, Obj val, struct VM *vm, int pos);
void builtinCloseOutputFile(void *pc, Obj val, struct VM *vm, int pos);
void builtinGenerateStr(void *pc, Obj val, struct VM *vm, int pos);
void builtinGenerateSym(void *pc, Obj val, struct VM *vm, int pos);
void builtinGenerateNum(void *pc, Obj val, struct VM *vm, int pos);

void builtinReadFileAsSexp(void *pc, Obj val, struct VM *vm, int pos);

void readFileAsSexp(void *pc, Obj val, struct VM *vm, int pos);
void writeSexpToFile(void *pc, Obj val, struct VM *vm, int pos);

void builtinStringAppend(void *pc, Obj val, struct VM *vm, int pos);
void builtinStringLength(void *pc, Obj val, struct VM *vm, int pos);
void builtinValue(void *pc, Obj val, struct VM *vm, int pos);
void builtinDisplay(void *pc, Obj val, struct VM *vm, int pos);
void builtinReadSexp(void *pc, Obj val, struct VM *vm, int pos);

#endif
