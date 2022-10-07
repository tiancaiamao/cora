#ifndef _VM_H
#define _VM_H

struct VM;
typedef void (*InstrFunc)(struct VM *vm);

struct VM {
  InstrFunc pc;
  // In bytecode mode, this field is used.
  // pc + pcData = closure, using closure for code generation.
  void *pcData; 

  Obj val;

  Obj *data;
  int base;
  int pos;

  int gcTicker;
  scmHead* gcSave[2];
};

struct VM* newVM();

void push(struct VM *vm, Obj v);
Obj pop(struct VM* vm);
void instrCall(struct VM *vm, int argc, InstrFunc next);
Obj vmGet(struct VM* vm, int idx);
Obj ctxGet(struct VM* vm, int idx);
void vmSet(struct VM* vm, int idx, Obj v);
void vmResize(struct VM* vm, int sz);
void nextInstr(struct VM *vm, InstrFunc code, void *data);
void vmReturn(struct VM *vm, Obj x);
void run(struct VM* vm, InstrFunc code);
void coraInit();


#endif
