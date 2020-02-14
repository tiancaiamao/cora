#ifndef _builtin_h_
#define _builtin_h_

void builtinAdd(struct controlFlow* ctx);
void builtinSub(struct controlFlow* ctx);
void builtinSub1(struct controlFlow* ctx);
void builtinMul(struct controlFlow* ctx);
void builtinMul1(struct controlFlow* ctx);
void builtinDiv(struct controlFlow* ctx);
void builtinEqual(struct controlFlow* ctx);
void builtinEqual1(struct controlFlow* ctx);
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
void builtinIsString(struct controlFlow* ctx);
void builtinIsNumber(struct controlFlow* ctx);
void builtinLoad(struct controlFlow *ctx);

// In file codegen.c
void builtinGenerateC(struct controlFlow* ctx);
void builtinReadFileAsSexp(struct controlFlow* ctx);
#endif
