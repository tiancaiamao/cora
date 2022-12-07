#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>
#include "cora.h"
#include "builtin.h"

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
builtinGenerateC(struct VM* vm) {
  Obj dst = vmGet(vm, 1);
  assert(isstring(dst));
  char* outFileName = stringStr(dst);
  FILE* outFile = fopen(outFileName, "w");
  if (outFile == NULL) {
    printf("open output file %s failed", outFileName);
    goto exit0;
  }

  Obj sexp = vmGet(vm, 2);
  Instr code = compileAPI(sexp);

  char *ptr;
  size_t sizeloc;
  FILE *to = open_memstream(&ptr, &sizeloc);
  struct CodeGen cg = {};
  codeGen(&cg, code, to);

  fprintf(outFile, "#include \"types.h\" \n\
#include \"vm.h\" \n\
#include \"builtin.h\" \n\
#include \"instr.h\" \n\
#include <stdio.h>\n");

  for (int i=0; i<cg.pos; i++) {
    if (fseek(cg.globals[i], 0, SEEK_SET) < 0) {
      perror("fseek fail");
    };
    copyStream(outFile, cg.globals[i]);
    fprintf(outFile, "\n");
  }

  fprintf(outFile, "void\n__entry(struct VM *vm) {\n");
  fprintf(outFile, "Obj *bp, *sp, val, r0, r1, r2, r3;\n");
  fprintf(outFile, "bp = vm->data + vm->base;\n");
  fprintf(outFile, "sp = vm->data + vm->pos;\n");
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
builtinReadFileAsSexp(struct VM *vm) {
  Obj arg = vmGet(vm, 1);
  assert(isstring(arg));
  char* fileName = stringStr(arg);
  FILE* f = fopen(fileName, "r");
  if (f == NULL) {
    printf("open file fail %s\n", fileName);
    goto exit0;
  }

  /* char* selfPath = stripFileExtension(fileName); */
  struct SexpReader r = {.pkgMapping = Nil, .selfPath = NULL};
  int err = 0;
  Obj result = Nil;
  int count = 0;
  while(true) {
    Obj ast = sexpRead(&r, f, &err);
    if (err != 0) {
      break;
    }
    result = cons(ast, result);
    count++;
  }
  if (count > 1) {
    result = reverse(result);
    result = cons(makeSymbol("begin"), result);
  } else {
    result = car(result);
  }
  fclose(f);

exit0:
  vmReturn(vm, result);
}


static void
builtinGCCCompileToSo(struct VM* ctx) {
  Obj from = vmGet(ctx, 1);
  Obj to = vmGet(ctx, 2);
  assert(isstring(from));
  assert(isstring(to));

  char cmd[512];
  int ret = snprintf(cmd, 512, "gcc -shared -o %s -Isrc -fPIC -g %s", stringStr(to), stringStr(from));
  if (ret == 0) {
    vmReturn(ctx, Nil);
  }

  ret = system(cmd);
  vmReturn(ctx, makeNumber(ret));
}

static void
builtinImport(struct VM *ctx) {
  Obj pkg = vmGet(ctx, 1);
  char *pkgStr = stringStr(pkg);
  Obj sym = intern("*imported*");
  Obj imported = symbolGet(sym);
  // Avoid repeated load.
  for (Obj p = imported; p != Nil; p = cdr(p)) {
    Obj elem = car(p);
    if (eq(car(elem), pkg)) {
      vmReturn(ctx, sym);
      return;
    }
  }

  // CORA PATH
  char tmp[512];
  char* coraPath = getenv("CORAPATH");
  if (coraPath == NULL) {
    struct passwd* pw = getpwuid(getuid());
    const char* homeDir = pw->pw_dir;
    strcpy(tmp, homeDir);
    strcat(tmp, "/.corapath/");
  } else {
    strcpy(tmp, coraPath);
    if (tmp[strlen(tmp)-1] != '/') {
      strcat(tmp, "/");
    }
  }

  // TODO: also consider the .so file
  strcat(tmp, pkgStr);
  strcat(tmp, ".cora");
  primLoad(ctx, tmp, pkgStr);

  // Set the *imported* variable to avlid repeated load.
  symbolSet(sym, cons(cons(pkg, Nil), imported));
}

struct registModule codeGenModule = {
  NULL,
  {
   {"read-file-as-sexp", builtinReadFileAsSexp, 1},
   {"generate-c", builtinGenerateC, 2},
   {"gcc-compile-to-so", builtinGCCCompileToSo, 2},
   {"import", builtinImport, 1},
   {NULL, NULL, 0}
  }
};
