#include <stdint.h>

typedef uintptr_t Obj;

struct VM {
  Obj *stack;
  int base;
};

const uintptr_t True = 1232;
const uintptr_t False = 1231;

typedef void (*opcode)(void *pc, Obj val, struct VM *vm, int pos);

#define NEXT pc++; ((opcode)(pc))(pc, val, vm, pos)

static void
opConst(void* pc, Obj val, struct VM *vm, int pos) {
  val = (Obj)pc;
  NEXT;
}

static void
opLocalRef(void* pc, Obj val, struct VM *vm, int pos) {
  uint64_t idx = *((uint64_t*)pc);
  pc = (char*)pc + sizeof(uint64_t);
  val = vm->stack[idx];
  NEXT;
}

static void
opClosureRef(void* pc, Obj val, struct VM *vm, int pos) {
  uint64_t idx = *((uint64_t*)pc);
  pc = (char*)pc + sizeof(uint64_t);
  Obj closure = vm->stack[vm->base];
  /* val = closureRef(closure, idx);    TODO!!!!  */
  NEXT;
}

static void
opPush(void* pc, Obj val, struct VM *vm, int pos) {
  vm->stack[pos] = val;
  pos++;
  NEXT;
}

static void
opIF(void* pc, Obj val, struct VM *vm, int pos) {
  if (val == True) {
    NEXT;
    return;
  }
  if (val == False) {
    uint64_t sz = *((uint64_t*)pc);
    pc = (char*)pc + sz;
    NEXT;
  }
}

static void
opCall(void* pc, Obj val, struct VM *vm, int pos) {

}

static void
opMakeClosure(void *pc, Obj val, struct VM *vm, int pos) {
}


enum {
  idConst = 1,
  idLocalRef,
  idClosureRef,
  idGlobalRef,
  idIf,
  idMakeClosure,
  idLocalSet,
  idTailCall,
  idCall,
  idPush,
  idExit,
  idArityCheck,
};

struct program {
  void *code;
  Obj *data;
  int cap;
  int len;
};

static void
progAppendOP(struct program *p, opcode op) {
  // TODO
}

static void
progAppendObj(struct program *p, Obj obj) {
  // TODO
}

static void
progAppendInt(struct program *p, int v) {
  // TODO
}

enum {
  tpInteger = 1,
  tpFloat64,
  tpBoolean,
  tpString,
  tpSymbol,
  tpCons,
)


static char *
unmarshalObj(char *ptr, Obj *ret) {
  switch (*ptr++) {
  case tpInteger:
    int64_t v =  *((*int64_t)(ptr));
    ptr += 8;
  case tpFloat64:
  case tpBoolean:
  case tpString:
  case tpSymbol:
  case tpCons:
  }
}

static void
unmarshal(char* bytecode, struct program *p) {
  switch (*bytecode) {
  case idConst:
    progAppendOP(p, opConst);
    bytecode++;
    Obj tmp;
    bytecode = unmarshalObj(bytecode, &tmp);
    progAppendObj(p, tmp);
    break;
  case idLocalRef:
    progAppendOP(p, opLocalRef);
    bytecode++;
    progAppendInt(p, *((uint64_t*)bytecode));
    bytecode += 4;
    break;
  case idClosureRef:
    progAppendOP(p, opClosureRef);
    bytecode++;
    progAppendInt(p, *((uint64_t*)bytecode));
    bytecode += 4;
    break;
  case idGlobalRef:
  case idIf:
  case idMakeClosure:
  case idLocalSet:
  case idTailCall:
  case idCall:
  case idPush:
  case idExit:
  case idArityCheck:
    break;
  }
}

int main(int argc, char *argv[]) {
  char bytecode[] = {idCall, idIf, idMakeClosure, idPush, idConst, idLocalRef};
  struct program p;
  unmarshal(bytecode, &p);

  void *pc = p.code;
  struct VM vm;
  Obj val;
  int pos = 0;
  ((opcode)(pc))(pc, val, &vm, pos); 
}
