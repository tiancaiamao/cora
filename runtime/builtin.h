#ifndef _primitive_h_
#define _primitive_h_

Obj builtinAdd(Obj args[]);
Obj builtinSub(Obj args[]);
Obj builtinMul(Obj args[]);
Obj builtinDiv(Obj args[]);
Obj builtinEqual(Obj args[]);
Obj builtinSet(Obj args[]);
Obj builtinCons(Obj args[]);
Obj builtinCar(Obj args[]);
Obj builtinCdr(Obj args[]);
Obj builtinIsCons(Obj args[]);
Obj builtinGensym(Obj args[]);
Obj builtinGT(Obj args[]);
Obj builtinLT(Obj args[]);
Obj builtinNot(Obj args[]);
Obj builtinIsSymbol(Obj args[]);
Obj builtinIsString(Obj args[]);

#endif
