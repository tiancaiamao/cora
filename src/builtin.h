#ifndef _builtin_h_
#define _builtin_h_

void builtinAdd(struct VM* ctx);
void builtinSub(struct VM* ctx);
void builtinMul(struct VM* ctx);
void builtinDiv(struct VM* ctx);
void builtinMod(struct VM *ctx);
void builtinEqual(struct VM* ctx);
void builtinSet(struct VM* ctx);
void builtinCons(struct VM* ctx);
void builtinCar(struct VM* ctx);
void builtinCdr(struct VM* ctx);
void builtinIsCons(struct VM* ctx);
void builtinGensym(struct VM* ctx);
void builtinGT(struct VM* ctx);
void builtinLT(struct VM* ctx);
void builtinNot(struct VM* ctx);
void builtinIsSymbol(struct VM* ctx);
void builtinSymbolToString(struct VM* ctx);
void builtinIsString(struct VM* ctx);
void builtinIsNumber(struct VM* ctx);
void builtinLoad(struct VM *ctx);
void builtinMakeVector(struct VM *ctx);
void builtinVectorSet(struct VM *ctx);
void builtinVectorRef(struct VM *ctx);
void builtinIsVector(struct VM *ctx);

void builtinLoadSo(struct VM *ctx);
void builtinStringAppend(struct VM *ctx);
void builtinNumberToString(struct VM *ctx);
void builtinIntern(struct VM *ctx);
void builtinImport(struct VM *ctx);

void builtinThrow(struct VM *vm);
void builtinTryCatch(struct VM *vm);



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


void primLoad(struct VM *vm, char *path, char *pkg);

#endif
