#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "runtime.h"



static int generateCIfExpr(FILE *w, Obj a, Obj b, Obj c);
static void generateCBuiltinCall(FILE* w, Obj op, Obj args, Obj dst);

/* func GenerateC(args ...Obj) Obj { */
/*  filePath := mustString(args[0]) */
/*     bc := ListToSlice(args[1]) */

/*     out, err := os.Create(filePath) */
/*     if err != nil { */
/*         return MakeError(fmt.Sprintf("open file fail %s", err)) */
/*       } */
/* 	defer out.Close() */

/*     // Generate "#include ..." */
/*     fmt.Fprintf(out, "#include \"runtime.h\"\n") */
/*     fmt.Fprintf(out, "#include <stdlib.h>\n\n") */

/*     labelSym := MakeSymbol("label") */
/*     // Generate declare... */
/*     for _, fn := range bc { */
/*         if car(fn) == labelSym { */
/*             fmt.Fprintf(out, "static void %s (struct controlFlow *ctx);\n", symbolString(cadr(fn))) */
/*           } else { */
/*           fmt.Println("???  = ", ObjString(car(fn))) */
/*         } */
/*       } */
/* 	fmt.Fprintf(out, "nativeFuncPtr export = %s;\n", symbolString(cadr(bc[0]))) */

/*     fmt.Fprintf(out, "\n\n") */

/*     // Generate each function... */
/*     for _, fn := range bc { */
/*         if err := generateFunc(out, fn); err != nil { */
/*           fmt.Println("err =", err) */
/*             return MakeError(err.Error()) */
/*             } */
/*       } */
/* 	return True */
/*     } */

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
listToSlice(Obj* res, Obj l) {
  int count = 0;
  for (int i=0; i<count; i++) {
    res[i] = car(l);
    l = cdr(l);
  }
  assert(l == Nil);
  return;
}

const static char*
symbolString(Obj sym) {
 char *str = symbolStr(sym);
 if (str[0] == '#') {
   return str+1;
 }
 return str;
}

static Obj symMov, symConst, symClosure, symCloseRef, symReturn, symBuiltin, symCallDef,symClosureRef ;

static void init() {
  symMov = intern("mov");
  symConst = intern("%const");
  symClosureRef = intern("%closure-ref");
  symClosure = intern("%closure");
  symBuiltin = intern("%builtin");
  symReturn = intern("%return");
  symCallDef = intern("%call-def");
}

static int
generateInst(FILE *w, Obj inst) {
  Obj kind = car(inst);
  if (kind ==  symMov) {
    // (mov SRC DST)
    Obj src = cadr(inst);
    Obj dst = car(cdr(cdr(inst)));
    printf(w, "%s = %s;\n", symbolString(dst), symbolString(src));
  } else if (kind == symConst) {
    // (const Number DST)
    // (const () DST)
    // (cons "xxx" DST)
    Obj dst = car(cdr(cdr(inst)));
    Obj c = cadr(inst);
    if  (isfixnum(c)) {
      printf(w, "Obj %s = makeNumber(%d);\n", symbolString(dst), fixnum(cadr(inst)));
    } else if (isstring(c)) {
      char *str = stringStr(c);
      fprintf(w, "Obj %s = makeString(\"%s\", %d);\n", symbolString(dst), str, strlen(str));
    } else if  (issymbol(c)) {
      printf(w, "Obj %s = intern(\"%s\");\n", symbolString(dst), symbolString(c));
    } else if  (c == Nil) {
      printf(w, "Obj %s = Nil;\n", symbolString(dst));
    } else if (c == True) {
      printf(w, "Obj %s = True;\n", symbolString(dst));
    } else if (c == False) {
      printf(w, "Obj %s = False;\n", symbolString(dst));
    }
  } else if (kind == symClosureRef) {
    Obj dst = cadr(inst);
    Obj clo = cadr(cdr(inst));
    Obj idx = cadr(cdr(cdr(inst)));
    printf(w, "Obj %s = closureRef(%s, %d);\n", symbolString(dst), symbolString(clo), fixnum(idx));
  } else if (kind == symClosure) {
    // (closure DST FuncName Required FV0 FV1 ...)
    int len = listLen(cdr(inst));
    Obj tmp[len];
    listToSlice(tmp, cdr(inst));
    Obj dst = tmp[0];
    Obj funcName = tmp[1];
    Obj required = tmp[2];
    Obj captured = tmp+3;
    char *args = sprintf("%s , %d, %d", symbolString(funcName),
                       fixnum(required),
                       len-3);
    for (int i = 0; i < len-3; i++) {
      /* args += ", "; */
      /* args = args + symbolString(captured[i]); */
    }
    printf(w, "Obj %s = makeNative(%s);\n", symbolString(dst), args);
  } else if (kind == symBuiltin) {
    // (builtin OP (ARG1 ARG2 ...) DST)
    Obj op = cadr(inst);
    Obj args = cadr(cdr(inst));
    Obj dst = car(cdr(cdr(cdr(inst))));
    generateCBuiltinCall(w, op, args, dst);
  } else if (kind == symReturn) {
    printf(w, "return ctxReturn(ctx, %s);\n", symbolString(cadr(inst)));
  } else if (kind == symCallDef) {
    Obj fn = cadr(inst);
    int len = listLen(cadr(cdr(inst)));
    Obj args[len];
    listToSlice(args, cadr(cdr(inst)));
    Obj dst = car(cdr(cdr(cdr(inst))));
    printf(w, "Obj %s = Call(intern(\"%s\"), %d",
           symbolString(dst),
           symbolString(fn),
           len);
    for (int i=0; i<len; i++) {
      Obj arg = args[i];
      printf(w, ", ");
      printf(w, symbolString(arg));
    }
    printf(w, ");\n");
  } else if (kind == symIf) {
    // (if a b c)
    Obj a = cadr(inst);
    Obj b = car(cdr(cdr(inst)));
    Obj c = car(cdr(cdr(cdr(inst))));
    int err = generateCIfExpr(w, a, b, c);
    if (err != 0) {
      return err;
    }
  } else {
    printf("unknown instruct: %s\n", kind);
    return -1;
  }
  return 0;
}

static int
generateInsts(FILE* w, Obj sexp) {
  int len = listLen(sexp);
	Obj insts[len];
  listToSlice(insts, sexp);
	for (int i=0; i<len; i++) {
    Obj inst = insts[i];
		int err = generateInst(w, inst);
    if (err != 0) {
      return err;
    }
	}
	return 0;
}

static int
generateFunc(FILE *w, Obj sexp) {
  if (car(sexp) != intern("label")) {
    printf("invalid input:\n");
    sexpWrite(w, sexp);
    return -1;
  }
  // (label FuncName (Args ...) Body)
  char *funcName = symbolString(cadr(sexp));
  fprintf(w, "static void %s(struct controlFlow *ctx) {\n", funcName);

  int len = listLen(cadr(cdr(sexp)));
  Obj args[len];
  listToSlice(args, cadr(cdr(sexp)));
  for (int i=0; i<len; i++) {
    Obj arg = args[i];
    printf(w, "Obj %s = ctxGet(ctx, %d);\n", symbolString(arg), i);
  }

  int err = generateInsts(w, cdr(cdr(cdr(sexp))));
  if (err != 0) {
    return err;
  }
  fprintf(w, "}\n\n");
  return 0;
}

static int
generateCIfExpr(FILE *w, Obj a, Obj b, Obj c) {
	fprintf(w, "if (%s == True) {\n", symbolString(a));
	int err = generateInsts(w, b);
  if (err != 0) {
    return err;
  }
	fprintf(w, "} else {\n");
	err = generateInsts(w, c);
  if (err != 0) {
		return err;
	}
	fprintf(w, "}\n");
	return 0;
}

static void
generateCBuiltinCall(FILE* w, Obj op, Obj args, Obj dst) {
  int len = listLen(args);
  Obj input[len];
  listToSlice(input, args);
  printf(w, "Obj %s = Call(intern(\"%v\"), %d", symbolString(dst),
         symbolString(op), len);
  for (int i=0; i<len; i++) {
    Obj arg = input[i];
    fprintf(w, ", %s", symbolString(arg));
  }
  fprintf(w, ");\n");
}

int main(int argc, char *argv) {
  
}
