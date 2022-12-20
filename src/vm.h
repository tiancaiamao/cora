#ifndef _VM_H
#define _VM_H

#include "reader.h"

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

  struct SexpReader r;
};

struct VM* newVM();

void push(struct VM *vm, Obj v);
Obj pop(struct VM* vm);
Obj vmGet(struct VM* vm, int idx);
void vmSet(struct VM* vm, int idx, Obj v);
void vmResize(struct VM* vm, int sz);
void vmSaveCont(struct VM *vm, int end, InstrFunc code, Instr codeData);
void nextInstr(struct VM *vm, InstrFunc code, void *data);
void vmReturn(struct VM *vm, Obj x);
void run(struct VM* vm, InstrFunc code);
void coraInit();

void contStackPush(struct contStack *s, struct continuation cont);

struct registEntry {
  char *name;
  InstrFunc func;
  int args;
  char *fname;
};
struct registModule {
  void (*init)();
  struct registEntry entries[];
};
void registAPI(struct registModule* m);


#endif
