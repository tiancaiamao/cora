#ifndef _builtin_h_
#define _builtin_h_

void builtinAdd(struct controlFlow* ctx);
void builtinSub(struct controlFlow* ctx);
void builtinMul(struct controlFlow* ctx);
void builtinDiv(struct controlFlow* ctx);
void builtinMod(struct controlFlow *ctx);
void builtinEqual(struct controlFlow* ctx);
void builtinSet(struct controlFlow* ctx);
void builtinCons(struct controlFlow* ctx);
void builtinCar(struct controlFlow* ctx);
void builtinCdr(struct controlFlow* ctx);
void builtinIsCons(struct controlFlow* ctx);
void builtinGensym(struct controlFlow* ctx);
void builtinGT(struct controlFlow* ctx);
void builtinLT(struct controlFlow* ctx);
void builtinNot(struct controlFlow* ctx);
void builtinIsSymbol(struct controlFlow* ctx);
void builtinSymbolToString(struct controlFlow* ctx);
void builtinIsString(struct controlFlow* ctx);
void builtinIsNumber(struct controlFlow* ctx);
void builtinLoad(struct controlFlow *ctx);
void builtinMakeVector(struct controlFlow *ctx);
void builtinVectorSet(struct controlFlow *ctx);
void builtinVectorRef(struct controlFlow *ctx);
void builtinIsVector(struct controlFlow *ctx);

void builtinLoadSo(struct controlFlow *ctx);
void builtinStringAppend(struct controlFlow *ctx);
void builtinNumberToString(struct controlFlow *ctx);
void builtinIntern(struct controlFlow *ctx);
void builtinValue(struct controlFlow* ctx);

#endif
