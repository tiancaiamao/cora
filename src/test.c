#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"

struct VM {
  Obj *stack;
  int base;
};

typedef void (*opcode)(void *pc, Obj val, struct VM *vm, int pos);

#define NEXT pc++; ((opcode)(pc))(pc, val, vm, pos)

static void
opConst(void* pc, Obj val, struct VM *vm, int pos) {
  pc = (void*)((char*)pc+sizeof(opcode));
  val = *((Obj*)pc);
  pc = (void*)((char*)pc + sizeof(Obj));
  (*((opcode*)pc))(pc, val, vm, pos);
}

static void
opLocalRef(void* pc, Obj val, struct VM *vm, int pos) {
  pc = (char*)pc + sizeof(opcode*);
  uint32_t idx = *((uint32_t*)pc);
  pc = (char*)pc + sizeof(uint32_t);
  val = vm->stack[idx+1];
  (*((opcode*)pc))(pc, val, vm, pos);
}

static void
opGlobalRef(void *pc, Obj val, struct VM *vm, int pos) {
  pc = (void*)((char*)pc+sizeof(opcode));
  Obj sym = *((Obj*)pc);
  val = symbolGet(sym);
  pc = (void*)((char*)pc + sizeof(uint64_t));
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
makeTheCall(void *pc, Obj val, struct VM *vm, int pos) {
  Obj fn = vm->stack[vm->base];
  int required = closureRequired(fn) + 1;
  int provided = pos - vm->base;
  if (provided == required) {
    pc = closureCode(fn);
    (*((opcode*)pc))(pc, val, vm, pos);
  } else if (provided < required) {
  } else {
  }
}

static void
opTailCall(void *pc, Obj val, struct VM *vm, int pos) {
  pc = (void*)((char*)pc+sizeof(opcode));
  uint32_t nargs = *((int32_t*)pc);
  for (int i=0; i<nargs; i++) {
    vm->stack[vm->base+i] = vm->stack[pos - nargs + i];
  }
  pos = vm->base+nargs;
  makeTheCall(pc, val, vm, pos);
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
opExit(void* pc, Obj val, struct VM *vm, int pos) {
  printf("val == %ld\n", val);
}

static void
opPush(void* pc, Obj val, struct VM *vm, int pos) {
  vm->stack[pos] = val;
  pos++;
  pc = (void*)((char*)pc + sizeof(uint64_t));
  (*((opcode*)(pc)))(pc, val, vm, pos);
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
  pc = (void*)((char*)pc + sizeof(opcode*));
  uint32_t required = *((uint32_t*)pc);
  pc = (void*)((char*)pc + sizeof(uint32_t));
  uint32_t nfrees = *((uint32_t*)pc);
  pc = (void*)((char*)pc + sizeof(uint32_t));

  uint32_t sz = *((uint32_t*)pc);
  pc = (void*)((char*)pc + sizeof(uint32_t));
  val = makeClosure(required, nfrees, pc, sz);
  pc = (void*)((char*)pc + sz);

  /* pc = (void*)((char*)pc + sizeof(opcode*)); */
  (*((opcode*)(pc)))(pc, val, vm, pos);
}

static void
opPrimAdd(void *pc, Obj val, struct VM *vm, int pos) {
  val = makeNumber(fixnum(vm->stack[pos-1]) + fixnum(vm->stack[pos-2]));
  pos -= 2;
  pc = (void*)((char*)pc + sizeof(opcode*));
  (*((opcode*)(pc)))(pc, val, vm, pos);
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
  idPrimitive,
};

struct program {
  char *code;
  int len1;
  int cap1;

  /* Obj *data; */
  /* int len2; */
  /* int cap2; */
};

static void
ensureSize(char **data, int *len, int *cap, int sz) {
  if (*len + sz >= *cap) {
    *cap = *cap * 2;
    void *newData = malloc(*cap);
    memcpy(newData, *data, *len);
    free(*data);
    *data = newData;
  }
}

static void
progAppendOP(struct program *p, opcode op) {
  ensureSize(&p->code, &p->len1, &p->cap1, sizeof(op));
  memcpy(p->code+p->len1, &op, sizeof(op));
  p->len1 += sizeof(op);
}

static void
progAppendObj(struct program *p, Obj obj) {
  ensureSize(&p->code, &p->len1, &p->cap1, sizeof(obj));
  memcpy(p->code+p->len1, &obj, sizeof(obj));
  p->len1 += sizeof(obj);
}

static void
progAppendInt32(struct program *p, int32_t v) {
  ensureSize(&p->code, &p->len1, &p->cap1, sizeof(int32_t));
  memcpy(p->code+p->len1, &v, sizeof(int32_t));
  p->len1 += sizeof(int32_t);
}

static void
progAppendBytes(struct program *p, char *s, int len) {
  ensureSize(&p->code, &p->len1, &p->cap1, len);
  memcpy(p->code+p->len1, s, len);
  p->len1 += len;
}

enum {
  tpInteger = 1,
  tpFloat64,
  tpBoolean,
  tpString,
  tpSymbol,
  tpCons,
};


static char *
unmarshalObj(char *ptr, Obj *ret) {
  switch (*ptr++) {
  case tpInteger:
    {
      int64_t v =  *((int64_t*)(ptr));
      /* printf("unmarshal int == %ld\n", v); */
      *ret = makeNumber(v);
      ptr += 8;
    }
    break;
  case tpFloat64:
    break;
  case tpBoolean:
    break;
  case tpString:
    break;
  case tpSymbol:
    {
      uint32_t v = *((uint32_t*)(ptr));
      ptr += 4;
      strBuf s = fromBlk(ptr, v);
      Obj sym = makeSymbol(toCStr(s));
      strFree(s);
      *ret = sym;
      ptr += v;
    }
    break;
  case tpCons:
    break;
  }
  return ptr;
}

static char*
unmarshalPrimitive(char *bytecode, struct program *p) {
  switch (*bytecode++) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    progAppendOP(p, opPrimAdd);
    break;
  case 9:
  default:
    printf("unknown primitive %d\n", *(bytecode-1));
  }
  return bytecode;
}


static void unmarshal(char* bytecode, int size, struct program *p);

static char*
unmarshalOneOP(char* bytecode, struct program *p) {
  switch (*bytecode++) {
  case idConst:
    {
      progAppendOP(p, opConst);
      Obj tmp;
      bytecode = unmarshalObj(bytecode, &tmp);
      /* printf("unmarshal const obj==%ld\n", tmp); */
      progAppendObj(p, tmp);
      return bytecode;
    }
  case idLocalRef:
    progAppendOP(p, opLocalRef);
    progAppendInt32(p, *((uint32_t*)bytecode));
    bytecode += 4;
    return bytecode;
  case idClosureRef:
    progAppendOP(p, opClosureRef);
    progAppendInt32(p, *((uint32_t*)bytecode));
    bytecode += 4;
    return bytecode;
  case idGlobalRef:
    {
      progAppendOP(p, opGlobalRef);
      Obj tmp;
      bytecode = unmarshalObj(bytecode, &tmp);
      progAppendObj(p, tmp);
      return bytecode;
    }
  case idIf:
    return bytecode;
  case idMakeClosure:
    {
      progAppendOP(p, opMakeClosure);
      // required
      progAppendInt32(p, *((uint32_t*)bytecode));
      bytecode += sizeof(uint32_t);
      // nfrees
      progAppendInt32(p, *((uint32_t*)bytecode));
      bytecode += sizeof(uint32_t);
      // size of body
      uint32_t sz = *((uint32_t*)bytecode);
      bytecode += sizeof(uint32_t);
      // unmarshal body
      struct program p1;
      unmarshal(bytecode, sz, &p1);
      bytecode += sz;
      
      progAppendInt32(p, p1.len1);
      progAppendBytes(p, p1.code, p1.len1);
      break;
    }
  case idLocalSet:
    return bytecode;
  case idTailCall:
    progAppendOP(p, opTailCall);
    progAppendInt32(p, *bytecode);
    return bytecode + 4;
  case idCall:
    return bytecode;
  case idPush:
    progAppendOP(p, opPush);
    return bytecode;
  case idExit:
    progAppendOP(p, opExit);
    return bytecode;
  /* case idArityCheck: */
  /*   break; */
  case idPrimitive:
    bytecode = unmarshalPrimitive(bytecode, p);
    break;
  default:
    printf("unknown byte code %d\n", *(bytecode-1));
  }
  return bytecode;
}

static void
unmarshal(char* bytecode, int size, struct program *p) {
  p->cap1 = 64;
  p->len1 = 0;
  p->code = malloc(p->cap1);

  /* p->cap2 = 64; */
  /* p->len2 = 0; */
  /* p->data = malloc(p->cap2); */
  
  char *end = bytecode + size;
  while (bytecode < end) {
    bytecode = unmarshalOneOP(bytecode, p);
  }
}

void
run(char *bytecode, int size) {
  struct program p;
  unmarshal(bytecode, size, &p);

  void *pc = p.code;
  struct VM vm;
  vm.base = 0;
  vm.stack = malloc(4096);

  Obj val;
  int pos = 0;
  (*(opcode*)(pc))(pc, val, &vm, pos); 
}

int main(int argc, char *argv[]) {
  /* char bytecode[] = {1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 10, 1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 10, 13, 8, 11}; */
  char bytecode[] = {6, 1, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 10, 2, 0, 0, 0, 0, 10, 13, 8, 11, 10, 1, 1, 2, 0, 0, 0, 0, 0, 0, 0, 10, 8, 2, 0, 0, 0};
  run(bytecode, sizeof(bytecode));
}


