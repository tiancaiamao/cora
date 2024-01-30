#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include "vm.h"
#include "builtin.h"

const int NREG = 5;

struct tosc {
  int state;
  int cur;
};

struct CodeGen {
  // top-of-stack-caching
  struct tosc *state;

  int label;
  FILE** globals;
  int pos;
  int cap;
};

static int
cgGetLabel(struct CodeGen *cg) {
  return cg->label++;
}

static void
cgAddGlobal(struct CodeGen *cg, FILE *f) {
  if (cg->pos >= cg->cap) {
    cg->cap *= 2;
    FILE ** globals = malloc(sizeof(FILE*) * cg->cap);
    memcpy(globals, cg->globals, sizeof(FILE*)*cg->pos);
    free(globals);
    cg->globals = globals;
  }

  cg->globals[cg->pos++] = f;
  return;
}

extern Obj symConst,symLocalRef,symClosureRef,symGlobalRef,symIf,symMakeClosure,symTailCall,symCall,symExit,symPrimitive,symReserveLocals,symLocalSet, symPop;

static void codeGen(struct CodeGen *cg, FILE *to, Obj bytecode);

int
putTOS(struct tosc *cg, FILE *to) {
  int ret;
  if (cg->state < NREG) {
    cg->state++;
  } else {
    fprintf(to, "*sp++ = r%d\n", cg->cur); // spill
  }
  ret = cg->cur;
  cg->cur = (cg->cur + 1) % NREG;
  return ret;
}

int
getTOS(struct tosc *cg) {
  assert(cg->state > 0);
  return (cg->cur + NREG - 1) % NREG;
}

void
popTOS(struct tosc *cg) {
  assert(cg->state > 0);
  cg->cur = (cg->cur + NREG - 1) % NREG;
  cg->state--;
}

static void
instrConstCodeGen(struct CodeGen *cg, FILE *to, Obj val) {
  int reg = putTOS(cg->state, to);
  if (val == Nil) {
    fprintf(to, "r%d = Nil;\n", reg);
  } else if (isboolean(val)) {
    if (val == True) {
      fprintf(to, "r%d = True;\n", reg);
    } else {
      fprintf(to, "r%d = False;\n", reg);
    }
  } else if (isfixnum(val)) {
    fprintf(to, "r%d = makeNumber(%ld);\n", reg, fixnum(val));
  } else if (isstring(val)) {
    strBuf s = stringStr(val);
    fprintf(to, "r%d = makeString(\"%s\");\n", reg, toCStr(s));
  } else if (issymbol(val)) {
    fprintf(to, "r%d = makeSymbol(\"%s\");\n", reg, symbolStr(val));
  } else {
    fprintf(to, "unknown instr const type;\n");
  }
}

static void
instrIfCodeGen(struct CodeGen *cg, FILE *to, Obj succ, Obj fail) {
  int reg = getTOS(cg->state);
  popTOS(cg->state);
  struct tosc* old = cg->state;
  struct tosc tmp = *old;
  cg->state = &tmp;
  fprintf(to, "if (r%d == True) {\n", reg);
  codeGen(cg, to, succ);
  fprintf(to, "} else if (r%d == False) {\n", reg);
  cg->state = old;
  codeGen(cg, to, fail);
  fprintf(to, "} else {\n");
  fprintf(to, "\tperror(\"if only accept true or false\");\n");
  fprintf(to, "}\n");
}

static void
instrLocalRefCodeGen(struct CodeGen *cg, FILE *to, int idx) {
  int reg = putTOS(cg->state, to);
  fprintf(to, "r%d = bp[%d];\n", reg, idx + 1);
}

static void
instrLocalSetCodeGen(struct CodeGen *cg, FILE *to, int idx) {
  int reg = getTOS(cg->state);
  fprintf(to, "bp[%d+1] = r%d;\n", idx + 1, reg);
}

static void
instrClosureRefCodeGen(struct CodeGen *cg, FILE *to, int idx) {
  int reg = putTOS(cg->state, to);
  fprintf(to, "r%d = opClosureRef(vm, %d);\n", reg, idx);
}

static void
instrGlobalRefCodeGen(struct CodeGen *cg, FILE *to, Obj sym) {
  int reg = putTOS(cg->state, to);
  fprintf(to, "r%d = symbolGet(makeSymbol(\"%s\"));\n", reg, symbolStr(sym));
}

static char*
primitiveFnName(Obj prim) {
  if (prim == makeSymbol("+")) {
    return "Add";
  } else if (prim == makeSymbol("-")) {
    return "Sub";
  } else if (prim == makeSymbol("=")) {
    return "EQ";
  } else if (prim == makeSymbol("set")) {
    return "Set";
  } else if (prim == makeSymbol("string?")) {
    return "IsString";
  } else if (prim == makeSymbol("car")) {
    return "Car";
  } else if (prim == makeSymbol("cdr")) {
    return "Cdr";
  } else if (prim == makeSymbol("cons")) {
    return "Cons";
  } else if (prim == makeSymbol("cons?")) {
    return "IsCons";
  } else if (prim == makeSymbol("gensym")) {
    return "GenSym";
  } else if (prim == makeSymbol("integer?")) {
    return "IsInteger";
  } else if (prim == makeSymbol("symbol?")) {
    return "IsSymbol";
  } else if (prim == makeSymbol("not")) {
    return "Not";
      } else if (prim == makeSymbol(">")) {
    return "GT";
  } else if (prim == makeSymbol("<")) {
    return "LT";
  } else if (prim == makeSymbol("*")) {
    return "Mul";
  }
}

static int
primitiveSize(Obj prim) {
  if (prim == makeSymbol("+")) {
    return 2;
  } else if (prim == makeSymbol("-")) {
    return 2;
  } else if (prim == makeSymbol("=")) {
    return 2;
  } else if (prim == makeSymbol("set")) {
    return 2;
  } else if (prim == makeSymbol("string?")) {
    return 1;
  } else if (prim == makeSymbol("car")) {
    return 1;
  } else if (prim == makeSymbol("cdr")) {
    return 1;
  } else if (prim == makeSymbol("cons")) {
    return 2;
  } else if (prim == makeSymbol("cons?")) {
    return 1;
  } else if (prim == makeSymbol("gensym")) {
    return 1;
  } else if (prim == makeSymbol("integer?")) {
    return 1;
  } else if (prim == makeSymbol("symbol?")) {
    return 1;
  } else if (prim == makeSymbol("not")) {
    return 1;
      } else if (prim == makeSymbol(">")) {
    return 2;
  } else if (prim == makeSymbol("<")) {
    return 2;
  } else if (prim == makeSymbol("*")) {
    return 2;
  }
}

static void
instrReserveLocalsCodeGen(struct CodeGen *cg, FILE *to, int n) {
  // TODO:
}

static void
instrPrimitiveCodeGen(struct CodeGen *cg, FILE *to, Obj prim)  {
  /* fprintf(to, "// before handle prim, state=%d, cur=%d;\n", cg->state->state, cg->state->cur); */
  int size = primitiveSize(prim);
  if (cg->state->state >= size) {
    int dest = (cg->state->cur + NREG - size) % NREG;
    fprintf(to, "r%d = prim%s(", dest, primitiveFnName(prim));
  } else {
    fprintf(to, "r0 = prim%s(", primitiveFnName(prim));
  }
  for (int i=0; i<size; i++) {
    if (i != 0) {
      fprintf(to, ", ");
    }
    // Get the virtual SP[i], when i + cg->state >= argc, SP[i] is in the register,
    // For example, cg->state = 3, argc = 5
    // rN
    // rN-1  <- i
    // rN-2   
    // sp
    // sp-1
    // Otherwise it's in the stack.
    if (i + cg->state->state < size) {
      fprintf(to, "sp[%d]", i+cg->state->state-size);
    } else {
      int distanceToTop = size - i;
      fprintf(to, "r%d", (cg->state->cur + NREG - distanceToTop) % NREG);
    }
  }
  fprintf(to, ");\n");

  // Need to pop stack argc times!
  if (size <= cg->state->state) {
    // All args in the register
    for (int i=size-1; i>0; i--) {
      cg->state->cur = (cg->state->cur - 1 + NREG) % NREG;
      cg->state->state--;
    }
  } else {
    // Some args are in the register and some are in the stack.
    for (int i=0; i<cg->state->state; i++) {
      cg->state->cur = (cg->state->cur - 1 + NREG) % NREG;
      cg->state->state--;
    }
    for (int i=0; i< (size - cg->state->state); i++) {
      // handle arg[i], from top to bottom
      // i < cg->state means the argument is in the stack, otherwise it's in the register.
      if (i < cg->state->state) {
	fprintf(to, "sp--;\n");
      }
    }
    cg->state->state = 1;
    cg->state->cur = 1;
  }
}

static void
instrExitCodeGen(struct CodeGen *cg, FILE *to) {
  fprintf(to, "popStack(&vm->callstack, &vm->pc, &vm->data, &vm->base, &vm->pos, &vm->stack);\n");
  int reg = getTOS(cg->state);
  fprintf(to, "vm->stack[vm->pos++] = r%d;\nreturn;\n", reg);
}


static void
instrTailCallCodeGen(struct CodeGen *cg, FILE *to, int nargs) {
  // Save the registers to stack for the calling protocol.
  for (int i=0; i<cg->state->state; i++) {
    int offToTop = cg->state->state-i;
    int pos = (cg->state->cur - offToTop + NREG) % NREG;
    fprintf(to, "*sp++ = r%d;\n", pos);
  }
  fprintf(to, "vm->pos = sp - vm->stack;\n");
  fprintf(to, "opTailCall(vm, %d);\n", nargs);
}

static void
instrCallCodeGen(struct CodeGen *cg, FILE *to, int nargs, Obj cc) {
  int label = cgGetLabel(cg);
  char *ptr;
  size_t sizeloc;
  FILE *global = open_memstream(&ptr, &sizeloc);

  fprintf(global, "static void fn_label_%d(struct VM* vm) {\n", label);
  fprintf(global, "Obj *bp, *sp, r0, r1, r2, r3;\n");
  fprintf(global, "bp = vm->stack + vm->base;\n");
  fprintf(global, "sp = vm->stack + vm->pos;\n");

  struct tosc* old = cg->state;
  struct tosc tmp = *old;
  tmp.state = 0;
  tmp.cur = 0;
  cg->state = &tmp;

  codeGen(cg, global, cc);

  fprintf(global, "}\n");
  cgAddGlobal(cg, global);

  /* fprintf(to, "// after call, state=%d, cur=%d;\n", cg->state->state, cg->state->cur); */

  cg->state = old;
  // Save the registers to stack for the calling protocol.
  for (int i=0; i<cg->state->state; i++) {
    int offToTop = cg->state->state-i;
    int pos = (cg->state->cur - offToTop + NREG) % NREG;
    fprintf(to, "*sp++ = r%d;\n", pos);
  }
  fprintf(to, "vm->pos = sp - vm->stack;\n");
  fprintf(to, "opCall(vm, %d, fn_label_%d, NULL);\nreturn;\n", nargs, label);
}

static void
instrMakeClosureCodeGen(struct CodeGen *cg, FILE *to, int required, int nfrees, Obj body) {
  int label = cgGetLabel(cg);
  char *ptr;
  size_t sizeloc;
  FILE *global = open_memstream(&ptr, &sizeloc);

  fprintf(global, "static void fn_label_%d(struct VM *vm) {\n", label);
  fprintf(global, "Obj *bp, *sp, r0, r1, r2, r3, r4;\n");
  fprintf(global, "bp = vm->stack + vm->base;\n");
  fprintf(global, "sp = vm->stack + vm->pos;\n");
  struct tosc* old = cg->state;
  struct tosc tmp;
  tmp.state = 0;
  tmp.cur = 0;
  cg->state = &tmp;

  codeGen(cg, global, body);
  fprintf(global, "}\n");
  cgAddGlobal(cg, global);

  cg->state = old;
  if (nfrees == 0) {
    fprintf(to, "r%d = makeClosure(vm, %d, 0, NULL, Nil, fn_label_%d);\n", putTOS(cg->state, to), required, label);
  } else {
    fprintf(to, "opMakeClosure(TODO);\n");
  }
}

static void
copyStream(FILE *to, FILE *from) {
  char            buffer[BUFSIZ];
  size_t          n;
  n = fread(buffer, sizeof(char), sizeof(buffer), from);
  while (n > 0) {
    if (fwrite(buffer, sizeof(char), n, to) != n) {
      perror("write failed\n");
    }
    n = fread(buffer, sizeof(char), sizeof(buffer), from);
  }
}

static void
codeGen(struct CodeGen *cg, FILE *f, Obj bc) {
  while(bc != Nil) {
    Obj inst = car(bc);
    Obj sym = car(inst);
    if (sym == symConst) {
      instrConstCodeGen(cg, f, cadr(inst));
    } else if (sym == symLocalRef) {
      instrLocalRefCodeGen(cg, f, fixnum(cadr(inst)));
    } else if (sym == symLocalSet) {
      instrLocalSetCodeGen(cg, f, fixnum(cadr(inst)));
    } else if (sym == symClosureRef) {
      instrClosureRefCodeGen(cg, f, fixnum(cadr(inst)));
    } else if (sym == symGlobalRef) {
      instrGlobalRefCodeGen(cg, f, cadr(inst));
    } else if (sym == symIf) {
      instrIfCodeGen(cg, f, cadr(inst), caddr(inst));  return;
    } else if (sym == symMakeClosure) {
      int required = fixnum(cadr(inst));
      int nfrees = fixnum(caddr(inst));
      Obj body = caddr(cdr(inst));
      instrMakeClosureCodeGen(cg, f, required, nfrees, body);
    } else if (sym == symTailCall) {
      instrTailCallCodeGen(cg, f, fixnum(cadr(inst))); return;
    } else if (sym == symCall) {
      instrCallCodeGen(cg, f, fixnum(cadr(inst)), cdr(bc)); return;
    } else if (sym == symPop) {
      /* cgPop(vm); */
    } else if (sym == symExit) {
      instrExitCodeGen(cg, f); return;
    } else if (sym == symReserveLocals) {
      instrReserveLocalsCodeGen(cg, f, fixnum(cadr(inst)));
    } else if (sym == symPrimitive) {
      instrPrimitiveCodeGen(cg, f, cadr(inst));
    } else {
      /* printf("instr not implement: %s\n", symbolStr(car(exp))); */
      printf("instr not implement: ");
      printObj(stdout, inst);
      printf("\n");
    }
    bc = cdr(bc);
  }
}

static void
builtinGenerateC(struct VM* vm) {
  Obj dst = vmGet(vm, 1);
  assert(isstring(dst));
  char* outFileName = toCStr(stringStr(dst));
  FILE* outFile = fopen(outFileName, "w");
  if (outFile == NULL) {
    printf("open output file %s failed", outFileName);
    goto exit0;
  }

  Obj code = vmGet(vm, 2);

  char *ptr;
  size_t sizeloc;
  FILE *to = open_memstream(&ptr, &sizeloc);
  struct tosc state = {};
  state.state = 0;
  state.cur = 0;
  struct CodeGen cg = {};
  cg.state = &state;
  cg.label = 0;
  cg.pos = 0;
  cg.cap = 8;
  cg.globals = malloc(sizeof(FILE*) * cg.cap);
  codeGen(&cg, to, code);

  fprintf(outFile, "#include \"types.h\" \n\
#include \"vm.h\" \n\
#include \"builtin.h\" \n\
#include <stdio.h>\n\n");

  for (int i=0; i<cg.pos; i++) {
    if (fseek(cg.globals[i], 0, SEEK_SET) < 0) {
      perror("fseek fail");
    };
    copyStream(outFile, cg.globals[i]);
    fprintf(outFile, "\n");
  }

  fprintf(outFile, "void\n__entry(struct VM *vm) {\n");
  fprintf(outFile, "Obj *bp, *sp, r0, r1, r2, r3, r4;\n");
  fprintf(outFile, "bp = vm->stack + vm->base;\n");
  fprintf(outFile, "sp = vm->stack + vm->pos;\n");
  copyStream(outFile, to);
  fprintf(outFile, "}\n\n");

  /*   fprintf(outFile, "int main(int argc, char *argv[]) {\n\ */
  /*   struct VM *vm = newVM();\n\ */
  /*   coraInit();\n\ */
  /*   run(vm, __entry);\n\ */
  /*   printf(\"%%ld\", fixnum(vm->val));\n\ */
  /* }"); */

  fclose(outFile);

 exit0:
  vmReturn(vm, Nil);
}

/* static char* */
/* stripFileExtension(char *str) { */
/*   int len = strlen(str); */
/*   int pos = len; */
/*   while (pos>0) { */
/*     if (str[pos] == '.') { */
/*       break; */
/*     } */
/*     pos--; */
/*   } */
/*   if (pos == 0) { */
/*     return ""; */
/*   } */

/*   char *ret = malloc(pos); */
/*   pos--; */
/*   ret[pos] = '\0'; */
/*   while(pos >= 0) { */
/*     ret[pos] = str[pos]; */
/*     pos--; */
/*   } */
/*   return ret; */
/* } */

static void
builtinGCCCompileToSo(struct VM* ctx) {
  Obj from = vmGet(ctx, 1);
  Obj to = vmGet(ctx, 2);
  assert(isstring(from));
  assert(isstring(to));

  char cmd[512];
  int ret = snprintf(cmd, 512, "gcc -shared -o %s -Isrc -fPIC -g %s", toCStr(stringStr(to)), toCStr(stringStr(from)));
  if (ret == 0) {
    vmReturn(ctx, Nil);
  }

  ret = system(cmd);
  vmReturn(ctx, makeNumber(ret));
}

/* struct registModule codeGenModule = { */
/*   NULL, */
/*   { */
/*    {"cora/lib/codegen/internal.read-file-as-sexp", builtinReadFileAsSexp, 1}, */
/*    {"cora/lib/codegen/internal.generate-c", builtinGenerateC, 2}, */
/*    {"cora/lib/codegen/internal.gcc-compile-to-so", builtinGCCCompileToSo, 2}, */
/*    {NULL, NULL, 0} */
/*   } */
/* }; */

void
__entry(struct VM *vm) {
  /* registAPI(&codeGenModule); */
  symbolSet(makeSymbol("cora/lib/codegen/internal.generate-c"), makePrimitive(vm, builtinGenerateC, 2));
  symbolSet(makeSymbol("cora/lib/codegen/internal.gcc-compile-to-so"), makePrimitive(vm, builtinGCCCompileToSo, 2));
  return vmReturn(vm, intern("codegen"));
}

