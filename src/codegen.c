#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "runtime.h"

static int genIfExpr(FILE *w, Obj a, Obj b, Obj c);

static int
listLen(Obj l) {
  int count = 0;
  while(l != Nil) {
    count++;
    l = cdr(l);
  }
  return count;
}

static void
listToSlice(Obj* res, int size, Obj l) {
  for (int i=0; i<size; i++) {
    res[i] = car(l);
    l = cdr(l);
  }
  assert(l == Nil);
  return;
}

static const char*
symbolString(Obj sym) {
 const char *str = symbolStr(sym);
 if (str[0] == '#') {
   return str+1;
 }
 return str;
}

static Obj symLet, symConst, symClosure, symReturn, symBuiltin, symCall, symClosureRef, symTailCall, symGlobal;

static void
init() {
  symLet = intern("let");
  symConst = intern("%const");
  symClosureRef = intern("%closure-ref");
  symClosure = intern("%closure");
  symBuiltin = intern("%builtin");
  symGlobal = intern("%global");
  symReturn = intern("%return");
  symCall = intern("%call");
  symTailCall = intern("%tailcall");
}

static int
genConst(FILE *w, Obj inst) {
  // (const Number)
  // (const ())
  // (cons "xxx")
  Obj c = cadr(inst);
  if  (isfixnum(c)) {
    fprintf(w, "makeNumber(%ld)", fixnum(cadr(inst)));
  } else if (isstring(c)) {
    char *str = stringStr(c);
    fprintf(w, "makeString(\"%s\", %ld)", str, strlen(str));
  } else if (issymbol(c)) {
    fprintf(w, "intern(\"%s\")", symbolString(c));
  } else if (c == Nil) {
    fprintf(w, "Nil");
  } else if (c == True) {
    fprintf(w, "True");
  } else if (c == False) {
    fprintf(w, "False");
  } else {
    fprintf(w, "unknown const");
    return -1;
  }
  return 0;
}

static int
genCall(FILE *w, Obj inst, bool tail) {
  // (%tailcall x y z ...)
  if (tail) {
    fprintf(w, "return ctxTailCall(");
  } else {
    fprintf(w, "call(");
  }

  bool first = true;
  for (Obj o = cdr(inst); o != Nil; o = cdr(o)) {
    if (first) { first = false; } else { fprintf(w, ", "); }
    fprintf(w, "%s", symbolString(car(o)));
  }
  fprintf(w, ")");

  if (tail) {
    fprintf(w, ";\n");
  }
  return 0;
}

static int
genInst(FILE *w, Obj inst) {
  Obj kind = car(inst);
  if (kind == symConst) {
    return genConst(w, inst);
  } else if (kind == symClosureRef) {
    // (%closure-ref #clo282 0)
    Obj clo = cadr(inst);
    Obj idx = cadr(cdr(inst));
    fprintf(w, "closureRef(%s, %ld)", symbolString(clo), fixnum(idx));
  } else if (kind == symClosure) {
    // (%closure FuncName Required FV0 FV1 ...)
    int len = listLen(cdr(inst));
    Obj tmp[len];
    listToSlice(tmp, len, cdr(inst));
    Obj funcName = tmp[0];
    Obj required = tmp[1];
    /* Obj* captured = tmp+2; */
    char buf[256];
    sprintf(buf, "%s , %ld, %d", symbolString(funcName),
                       fixnum(required),
                       len-2);
    /* for (int i = 0; i < len-3; i++) { */
    /* args += ", "; */
    /* args = args + symbolString(captured[i]); */
    /* } */
    fprintf(w, "makeNative(%s)", buf);
  } else if (kind == symBuiltin) {
    // (%builtin OP)
    fprintf(w, "symbolGet(intern(%s))", symbolString(cadr(inst)));
  } else if (kind == symGlobal) {
    // (%global OP)
    fprintf(w, "symbolGet(intern(%s))", symbolString(cadr(inst)));
  } else if (kind == symCall) {
    // (%call x y z ...)
    return genCall(w, inst, false);
  } else if (kind == symTailCall) {
    // (%tailcall x y z ...)
    return genCall(w, inst, true);
  } else if (kind == symIf) {
    // (if a b c)
    Obj a = cadr(inst);
    Obj b = caddr(inst);
    Obj c = car(cdr(cdr(cdr(inst))));
    return genIfExpr(w, a, b, c);
  } else if (kind == symReturn) {
    // (%return xx)
    fprintf(w, "return ctxReturn(ctx, %s);\n", symbolString(cadr(inst)));
  } else {
    printf("unknown instruct: %s\n", symbolStr(kind));
    return -1;
  }
  return 0;
}

static Obj
genLet(FILE *w, Obj inst) {
  Obj var = cadr(inst);
  Obj val = caddr(inst);
  Obj remain = caddr(cdr(inst));
  fprintf(w, "%s = ", symbolString(var));
  int res = genInst(w, val);
  if (res != 0) {
    return Undef;
  }
  fprintf(w, ";\n");
  return remain;
}

static int
genInsts(FILE* w, Obj sexp) {
  while(sexp != Undef) {
    if (car(sexp) != symLet) {
      return genInst(w, sexp);
    }
    sexp = genLet(w, sexp);
  }
  printf("something wrong");
  sexpWrite(NULL, sexp);
  printf("\n");
  return -1;
}

static int
genIfExpr(FILE *w, Obj a, Obj b, Obj c) {
	fprintf(w, "if (%s == True) {\n", symbolString(a));
	int err = genInsts(w, b);
  if (err != 0) {
    return err;
  }
	fprintf(w, "} else {\n");
	err = genInsts(w, c);
  if (err != 0) {
		return err;
	}
	fprintf(w, "}\n");
	return 0;
}

static int
genFunc(FILE *w, Obj sexp) {
  if (car(sexp) != intern("label")) {
    printf("invalid input:\n");
    sexpWrite(w, sexp);
    return -1;
  }
  // (label FuncName (Args ...) Body)
  const char *funcName = symbolString(cadr(sexp));
  fprintf(w, "static void %s(struct controlFlow *ctx) {\n", funcName);

  int len = listLen(cadr(cdr(sexp)));
  Obj args[len];
  listToSlice(args, len, cadr(cdr(sexp)));
  for (int i=0; i<len; i++) {
    Obj arg = args[i];
    fprintf(w, "Obj %s = ctxGet(ctx, %d);\n", symbolString(arg), i);
  }

  int err = genInsts(w, car(cdr(cdr(cdr(sexp)))));
  if (err != 0) {
    return err;
  }
  fprintf(w, "}\n\n");
  return 0;
}

void
builtinGenerateC(struct controlFlow* ctx) {
  Obj dst = ctxGet(ctx, 1);
  Obj bc = ctxGet(ctx, 2);
  assert(isstring(dst));
  char* outFileName = stringStr(dst);
  FILE* outFile = fopen(outFileName, "w");
  if (outFile == NULL) {
    printf("open output file %s failed", outFileName);
    goto exit0;
  }

  if (symLet == 0) {
    init();
  }

  int len = listLen(bc);
  Obj* tmp = malloc(len * sizeof(Obj));
  if (tmp == NULL) {
    goto exit1;
  }

  listToSlice(tmp, len, bc);

  for (int i=0; i<len; i++) {
    Obj label = tmp[i];
    int err = genFunc(outFile, label);
    if (err != 0) {
      break;
    }
  }

  free(tmp);
exit1:
  fclose(outFile);
exit0:
  return ctxReturn(ctx, dst);
}

void
builtinReadFileAsSexp(struct controlFlow* ctx) {
  Obj arg = ctxGet(ctx, 1);
  assert(isstring(arg));
  char* fileName = stringStr(arg);
  FILE* f = fopen(fileName, "r");
  if (f == NULL) {
    printf("open file fail %s\n", fileName);
    goto exit0;
  }
  Obj ast = sexpRead(f);
  fclose(f);
  ctxReturn(ctx, ast);

exit0:
  return;
}

int
main() {
  char *input = "fact.bc";
  char *output = "gen.c";

  coraInit();

  Obj bc = Call(intern("read-file-as-sexp"), 1, makeString(input, strlen(input)));
  Obj res = Call(intern("generate-c"), 2, makeString(output, strlen(output)), bc);
  return 0;
}
