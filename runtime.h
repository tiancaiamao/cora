#include <assert.h>
#include <stdarg.h>
#include <stdint.h>  // for intptr_t

// 001 fixnum
// 000 pointer
// 010 bool
// 100 char
// 110 other

// 1110 void
// 1010 true
// 0010 false

typedef union Value_t* Value;

#define INTERMEDIA_TYPE_MASK	 0x00f00007L
#define CLOSURE			 0x00100000L
#define CONS			 0x00200000L
#define VECTOR			 0x00300000L
#define ENV				 0x00400000L
#define SYMBOL			 0x00500000L

#define FORWARD_BIT 0x10000000L

typedef intptr_t Tag;
typedef void (*Lambda)() ;

struct Closure {
  Tag t ;
  Lambda lam ;
  Value env ;
};

struct Cons {
	Tag t;
	Value car;
	Value cdr;
};

// 其实跟Vector一样的，但是Tag不一样
struct Env {
  Tag t ;
  int size;
  Value *value;
};

struct Vector {
	Tag t;
	int size;
	Value *value;
};

struct Cell {
  Tag t ;
  Value addr ; 
};

union Value_t {
  Tag t ;
  struct Closure clo ;
  struct Vector vec;
  struct Env env ;
  struct Cons cons;
};

extern Value ValueTrue;
extern Value ValueFalse;

Value InitClosure(struct Closure *addr, Lambda lam, Value env);
Value MakeInt(int n);
Value MakeBoolean(unsigned int b);
Value InitVector(struct Vector *addr, int n, ...);
Value InitEnv(struct Env *addr, int n, ...);
Value VectorGet(Value v, int n);
Value VectorRef(Value n, Value e);
Value EnvRef(Value n, Value e);

Value __sub(Value v1, Value v2);
Value __product(Value v1, Value v2);
Value ValueEqual(Value v1, Value v2);

// EntryPoint是整个库的入口点。它的参数是整个计算结果的返回点
void EntryPoint(Value);
int CheckMinorGC();
void MinorGC();
void SaveCall(Lambda lam, int n, ...);

// TopLevel是生成的代码入口点
extern void TopLevel(Value);

extern char *stackTop;
extern char *stackBottom;