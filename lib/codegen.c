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

static char
escapeChar(char c) {
  switch (c) {
  case '_':
    return '_';
  case '-':
    return '0';
  case '?':
    return '1';
  case '$':
    return '2';
  case '.':
    return '3';
  case '<':
    return '4';
  case '>':
    return '5';
  case '+':
    return '6';
  case '@':
    return '7';
  case '=':
    return '8';
  case '!':
    return '9';
  case '/':
    return 'a';
  case '*':
    return 'b';
  case '&':
    return 'c';
  case '%':
    return 'd';
  case '^':
    return 'e';
  case ':':
    return 'f';
  case '{':
    return 'g';
  case '}':
    return 'h';
  case ';':
    return 'i';
  case ',':
    return 'j';
  case '#':
    return 'k';
  }
  return 0;
}

static const char*
symbolString(Obj sym) {
  const char *str = symbolStr(sym);
  int len = strlen(str);
  int count = 0;
  for (int i=0; i<len; i++) {
    if (escapeChar(str[i]) != 0) {
      count++;
    }
  }
  if (count == 0) {
    return str;
  }
 
  Obj tmp = makeString("", len+count);
  char *dst = stringStr(tmp);
  int i = 0;
  int j = 0;
  while(i<len) {
    char c = escapeChar(str[i]);
    if (c != 0) {
      dst[j] = '_';
      j++;
      dst[j] = c;
    } else {
      dst[j] = str[i];
    }
    j++;
    i++;
  }
  return dst;
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
    fprintf(w, "intern(\"%s\")", symbolStr(c));
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
genTailCall(FILE *w, Obj inst) {
  // (%tailcall x y z ...)
  inst = cdr(inst);
  int len = listLen(inst);
  fprintf(w, "ctxResize(ctx, %d);\n", len);
  for (int i=0; i<len; i++) {
    fprintf(w, "ctxSet(ctx, %d, %s);\n", i, symbolString(car(inst)));
    inst = cdr(inst);
  }
  fprintf(w, "ctxTailApply(ctx);\n");
  fprintf(w, "return;\n");
  return 0;
}

static int
genCall(FILE *w, Obj inst) {
  fprintf(w, "Call(%d", listLen(cdr(inst)));
  for (Obj o = cdr(inst); o != Nil; o = cdr(o)) {
    fprintf(w, ", ");
    fprintf(w, "%s", symbolString(car(o)));
  }
  fprintf(w, ")");
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
    fprintf(w, "nativeRef(%s, %ld)", symbolString(clo), fixnum(idx));
  } else if (kind == symClosure) {
    // (%closure FuncName Required (FV0 FV1 ...))
    inst = cdr(inst);
    Obj funcName = car(inst);
    Obj required = cadr(inst);
    Obj captured = caddr(inst);
    fprintf(w, "makeNative(%s , %ld, %d", symbolString(funcName),
            fixnum(required),
            listLen(captured));
    for (; captured != Nil; captured = cdr(captured)) {
      fprintf(w, ", %s", symbolString(car(captured)));
    }
    fprintf(w, ")");
  } else if (kind == symBuiltin) {
    // (%builtin OP)
    fprintf(w, "symbolGet(intern(\"%s\"))", symbolStr(cadr(inst)));
  } else if (kind == symGlobal) {
    // (%global OP)
    fprintf(w, "symbolGet(intern(\"%s\"))", symbolStr(cadr(inst)));
  } else if (kind == symCall) {
    // (%call x y z ...)
    return genCall(w, inst);
  } else if (kind == symTailCall) {
    // (%tailcall x y z ...)
    return genTailCall(w, inst);
  } else if (kind == symIf) {
    // (if a b c)
    Obj a = cadr(inst);
    Obj b = caddr(inst);
    Obj c = car(cdr(cdr(cdr(inst))));
    return genIfExpr(w, a, b, c);
  } else if (kind == symReturn) {
    // (%return xx)
    fprintf(w, "ctxReturn(ctx, %s);\n", symbolString(cadr(inst)));
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
  fprintf(w, "Obj %s = ", symbolString(var));
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
genFuncDeclare(FILE *w, Obj sexp, bool export) {
  if (car(sexp) != intern("label")) {
    printf("invalid input:\n");
    sexpWrite(w, sexp);
    return -1;
  }
  // (label FuncName (Args ...) Body)
  const char *funcName = symbolString(cadr(sexp));
  if (export) {
    fprintf(w, "void %s(struct controlFlow *ctx);\n", funcName);
  } else {
    fprintf(w, "static void %s(struct controlFlow *ctx);\n", funcName);
  }
  return 0;
}

static int
genFunc(FILE *w, Obj sexp, bool export) {
  if (car(sexp) != intern("label")) {
    printf("invalid input:\n");
    sexpWrite(w, sexp);
    return -1;
  }
  // (label FuncName (Args ...) Body)
  const char *funcName = symbolString(cadr(sexp));
  if (export) {
    fprintf(w, "void %s(struct controlFlow *ctx) {\n", funcName);
  } else {
    fprintf(w, "static void %s(struct controlFlow *ctx) {\n", funcName);
  }

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

static void
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

  fprintf(outFile, "#include \"runtime.h\"\n\n");

  for (int i=0; i<len; i++) {
    Obj label = tmp[i];
    int err = genFuncDeclare(outFile, label, i==0);
    if (err != 0) {
      break;
    }
  }

  fprintf(outFile, "\n\n");

  for (int i=0; i<len; i++) {
    Obj label = tmp[i];
    int err = genFunc(outFile, label, i==0);
    if (err != 0) {
      break;
    }
  }

  free(tmp);
exit1:
  fclose(outFile);
exit0:
  ctxReturn(ctx, dst);
}

static void
builtinReadFileAsSexp(struct controlFlow* ctx) {
  Obj arg = ctxGet(ctx, 1);
  assert(isstring(arg));
  Obj result = Nil;
  char* fileName = stringStr(arg);
  FILE* f = fopen(fileName, "r");
  if (f == NULL) {
    printf("open file fail %s\n", fileName);
    goto exit0;
  }
  Obj ast = sexpRead(f);
  while (ast != Nil) {
    result = cons(ast, result);
    ast = sexpRead(f);
  }
  if (iscons(result) && cdr(result) != Nil) {
    result = reverse(result);
    result = cons(makeSymbol("begin"), result);
  }
  fclose(f);

exit0:
  ctxReturn(ctx, result);
}


static void
builtinGCCCompileToSo(struct controlFlow* ctx) {
  Obj from = ctxGet(ctx, 1);
  Obj to = ctxGet(ctx, 2);
  assert(isstring(from));
  assert(isstring(to));

  char cmd[512];
  int ret = snprintf(cmd, 512, "gcc -shared -o %s -Isrc -fPIC -g %s", stringStr(to), stringStr(from));
  if (ret == 0) {
    ctxReturn(ctx, Nil);
  }

  ret = system(cmd);
  ctxReturn(ctx, makeNumber(ret));
}

struct registModule codeGenModule = {
  NULL,
  {
   {"read-file-as-sexp", builtinReadFileAsSexp, 1},
   {"generate-c", builtinGenerateC, 2},
   {"gcc-compile-to-so", builtinGCCCompileToSo, 2},
   {NULL, NULL, 0}
  }
};

#ifdef _CODE_GEN_TEST_

int main(int argc, char *argv) {
  coraInit();
  const char *x = symbolString(makeSymbol("literal?"));
  printf("%s\n", x);
  return 0;
}

#endif
