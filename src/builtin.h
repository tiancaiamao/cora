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

void primLoad(struct VM *vm, str path, str pkg);
/* void primLoadSo(struct VM *vm, char *path); */

#endif
