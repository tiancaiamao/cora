#ifndef _CORA_H_
#define _CORA_H_


#include "types.h"
#include "reader.h"
#include "vm.h"
#include "instr.h"

Obj eval(struct VM *vm, Obj exp);
Obj macroExpand(struct VM *vm, Obj exp);


#endif
