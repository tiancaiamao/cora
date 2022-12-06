#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <getopt.h>
#include "cora.h"
#include "lib/lib.h"

static struct option opts[] = {
  {"help", no_argument, NULL, 'h'},
  {"boot", required_argument, NULL, 'b'},
  {"eval", required_argument, NULL, 'e'},
  {"file", required_argument, NULL, 'f'},
  {NULL, no_argument, NULL, 0},
};

const char *optstr = "hb:i:e:f:";

static void
help() {
  printf("cora [--boot init.cora]\n\
or:	cora [-e <expr>]\n\
or:	cora [-f <path>]\n\
\n\
Evaluation:\n\
-e, --eval <expr>\n\
-f, --file <path>\n");
}


/* static void shebang(int argc, char *argv[]); */
static void repl(struct VM *vm, FILE* stream);

/* static Obj */
/* set(Obj k, Obj v) { */
/*   Obj fn = Eval(makeSymbol("set"), Nil); */
/*   return Call(3, fn, k, v); */
/* } */

int
main(int argc, char *argv[]) {
  char *bootFile = "src/init.cora";
  char *expr = NULL;
  char *oneLiner = NULL;
  char *path = NULL;
  int opt = getopt_long(argc, argv, optstr, opts, NULL);
  while (opt != -1) {
    switch (opt) {
    case 'h':
      help();
      return 0;
    case 'b':
      bootFile = optarg;
    case 'e':
      expr = optarg;
      break;
    case 'f':
      path = optarg;
      break;
    case 'i':
      oneLiner = optarg;
      break;
    default:
      break;
    }
    opt = getopt_long(argc, argv, optstr, opts, NULL);
  }

  coraInit();
  registAPI(&codeGenModule);

  struct VM *vm = newVM();

  if (bootFile != NULL && bootFile[0] != '\0') {
    Obj str = makeString(bootFile, strlen(bootFile));
    Obj loadFile = cons(intern("load"), cons(str, Nil));
    eval(vm, loadFile);
  }

  /* memset(&coraREPL, 0, sizeof(jmp_buf)); */
  /* setjmp(coraREPL); */

  if (oneLiner != NULL) {
  /*   // Without the nonblock flag, fgets would block forever when the stdin data is unavailable. */
  /*   int flags = fcntl(0, F_GETFL, 0); */
  /*   fcntl(0, F_SETFL, flags | O_NONBLOCK); */

  /*   Obj res = Nil; */
  /*   char buf[256]; */
  /*   char *line = fgets(buf, 256, stdin); */
  /*   while(line != NULL) { */
  /*     // strip the last '\n' */
  /*     Obj str = makeString(line, strlen(line)-1); */
  /*     res = cons(str, res); */
  /*     line = fgets(buf, 256, stdin); */
  /*   } */
  /*   res = reverse(res); */
  /*   set(makeSymbol("*input*"), res); */
  /*   expr = oneLiner; */
  }

  FILE *stream;
  if (expr != NULL) {
    stream = fmemopen(expr, strlen(expr), "r");
  } else if (path != NULL) {
    stream = fopen(path, "r");
  } else {
    stream = stdin;
  }

  if (argc == 1 || path != NULL || expr != NULL) {
    repl(vm, stream);
  } else {
    /* shebang(argc, argv); */
  }
}

/* static void */
/* shebang(int argc, char *argv[]) { */
/*   FILE *f = fopen(argv[1], "r"); */
/*   if (f == NULL) { */
/*     // TODO: what the fuck? */
/*     exit(-1); */
/*   } */

/*   // Ignore the shebang line: */
/*   // #!/usr/bin/env cora */
/*   // */
/*   // (followed by cora script ...) */
/*   // */
/*   char buf[256]; */
/*   while(true) { */
/*     char *line = fgets(buf, 256, f); */
/*     if (line == NULL) { */
/*       exit(-1); */
/*     } */
/*     // The length of the first line is more than 255 bytes. */
/*     if (buf[254] != '\n') { */
/*       break; */
/*     } */
/*   } */

/*   Obj args = Nil; */
/*   for (int i=1; i<argc; i++) { */
/*     Obj arg = makeString(argv[i], strlen(argv[i])); */
/*     args = cons(arg, args); */
/*   } */
/*   args = reverse(args); */
/*   set(makeSymbol("*command-line-args*"), args); */

/*   repl(f); */
/* } */

/* static void */
/* repl(FILE* stream) { */
/*   Obj res; */
/*   for (int i=0; ; i++) { */
/*     if (stream == stdin) { */
/*       printf("%d #> ", i); */
/*     } */

/*     int err = 0; */
/*     Obj exp = sexpRead(stream, &err); */
/*     if (err != 0) { */
/*       break; */
/*     } */

/*     Obj exp1 = MacroExpand(exp); */
/*     res = Eval(exp1, Nil); */

/*     if (stream == stdin) { */
/*       sexpWrite(stdout, res); */
/*       printf("\n"); */
/*     } */
/*   } */

/*   if (stream != stdin) { */
/*     sexpWrite(stdout, res); */
/*     printf("\n"); */
/*   } */
/* } */

static void
repl(struct VM *vm, FILE* stream) {
  for (int i=0; ; i++) {
    if (stream == stdin) {
      printf("%d #> ", i);
    }

    int err = 0;
    Obj exp = sexpRead(&vm->r, stream, &err);
    if (err != 0) {
      break;
    }

    /* printf("before macro expand =="); */
    /* sexpWrite(stdout, exp); */

    exp = macroExpand(vm, exp);

    /* printf("after macro expand =="); */
    /* sexpWrite(stdout, exp); */
    /* printf("\n"); */

    Obj res = eval(vm, exp);

    if (stream == stdin) {
      sexpWrite(stdout, res);
      printf("\n");
    }
  }

  /* if (stream != stdin) { */
  /*   sexpWrite(stdout, res); */
  /*   printf("\n"); */
  /* } */
}
