#include <stdlib.h>
#include <stdio.h>
#include "types.h"

void trampoline(struct VM* m) {
  while (m->pc != NULL) {
    m->pc(m);
  }
}

Obj PrimEqual(Obj a, Obj b) {
  if (a == b) {
    return True;
  }
  return False;
}

Obj primNumberMultiply(Obj x, Obj y) {
  return (x * y) >> 1;
}

static int idx = 0;

void entry0 (struct VM* m);

static
void ctx0 (struct VM* m) {
  switch (idx) {
  case 0:
    m->pc = entry0;
    idx = 1;
    return;
  case 1:
    printf("run === first finish\n");
    m->pc = NULL;
    idx = 2;
    return;
  }
  return;
}

static
void printObj(Obj o) {
  if (isfixnum(o)) {
    printf("%d\n", fixnum(o));
  } else if (iscons(o)) {
    printf("cons = ");
    printObj(car(o));
    printObj(cdr(o));
  } else if (issymbol(o)) {
    printf("symbol");
  } else if (isboolean(o)) {
    if (o == True) {
      printf("true");
    } else if (o == False) {
      printf("false");
    }
  } else if (o == Nil) {
    printf("nil");
  } else if (tag(o) == TAG_PTR) {
    scmHead* h = ptr(o);
    switch (h->type) {
    case scmHeadNumber:
      printf("ptr number");
      break;
    case scmHeadCons:
      printf("cons");
      break;
    case scmHeadVector:
      printf("vector");
      break;
    case scmHeadNull:
      printf("null");
      break;
    case scmHeadString:
      printf("string");
      break;
    case scmHeadSymbol:
      printf("symbol");
      break;
    case scmHeadBoolean:
      printf("boolean");
      break;
    case scmHeadClosure:
      printf("closure");
      break;
    case scmHeadStream:
      printf("stream");
      break;
    case scmHeadPrimitive:
      printf("primitive");
      break;
    case scmHeadError:
      printf("error");
      break;
    default:
      printf("ptr unknown type = %d\n", h->type);
    };
  } else {
    printf("unknown %ld", o);
  }
}

int main(int argc, char *argv[]) {
  struct VM* m = newVM();
  /* init(); */

  symbolSet(intern("%ctx0"), makeClosure(ctx0, 0));

	/* m->pc = entry1; */

  ctx0(m);

  trampoline(m);

  // stack[0] is the ctx0 closure itself, according to the calling conversion.
  Obj res = m->stack[1];

  /* m->pc = clo_xxx; */
  /* trampoline(m); */
  /* res = m->stack[0]; */

  printObj(res);

  /* printf("... %ld\n", res); */
  /* printf("... %ld\n", car(res)); */
  /* printf("... %ld\n", car(cdr(res))); */
  /* printf("... %ld\n", car(cdr(cdr(res)))); */
  /* printf("... %ld\n", car(cdr(cdr(cdr(res))))); */
}
