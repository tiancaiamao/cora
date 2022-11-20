#ifndef _VM_H
#define _VM_H

struct VM;
typedef void (*InstrFunc)(struct VM *vm);

struct contStack {
  struct continuation *data;
  int size;
  int cap;
};

struct VM {
  InstrFunc pc;
  // In bytecode mode, this field is used.
  // pc + pcData = closure, using closure for code generation.
  void *pcData; 

  // Value register.
  Obj val;

  // The value stack.
  Obj *data;
  int base;
  int pos;

  // Continuation stack.
  struct contStack contStack;

  int gcTicker;
  scmHead* gcSave[2];
};

struct VM* newVM();

void push(struct VM *vm, Obj v);
Obj pop(struct VM* vm);
/* void instrCall(struct VM *vm, int argc, InstrFunc next); */
Obj vmGet(struct VM* vm, int idx);
Obj ctxGet(struct VM* vm, int idx);
void vmSet(struct VM* vm, int idx, Obj v);
void vmResize(struct VM* vm, int sz);
void vmSaveCont(struct VM *vm, int end, InstrFunc code, Instr codeData);
void nextInstr(struct VM *vm, InstrFunc code, void *data);
void vmReturn(struct VM *vm, Obj x);
void run(struct VM* vm, InstrFunc code);
void coraInit();


#endif
