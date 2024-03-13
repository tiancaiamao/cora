#ifndef _builtin_h_
#define _builtin_h_

strBuf getCoraPath();
void builtinSymbolToString(struct VM *vm);
void builtinLoad(struct VM *vm);
void builtinImport(struct VM *vm);
void builtinMakeVector(struct VM *vm);
void builtinVectorSet(struct VM *vm);
void builtinVectorRef(struct VM *vm);
void builtinIsVector(struct VM *vm);
void builtinIntern(struct VM *vm);
void builtinIsNumber(struct VM *vm);
void builtinDiv(struct VM* ctx);
void builtinMod(struct VM *ctx);
void builtinLoadSo(struct VM *ctx);
void builtinStringAppend(struct VM *ctx);
void builtinNumberToString(struct VM *ctx);
void builtinStringLength(struct VM *vm);

/* void builtinThrow(struct VM *vm); */
/* void builtinTryCatch(struct VM *vm); */

void builtinReadFileAsSexp(struct VM *vm);
void writeSexpToFile(struct VM *vm);

void builtinValue(void *pc, Obj val, struct VM *vm, int pos);
void builtinReadSexp(void *pc, Obj val, struct VM *vm, int pos);

#endif
