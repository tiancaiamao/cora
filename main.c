#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <getopt.h>
#include <setjmp.h>
#include "runtime.h"
#include "lib/lib.h"

static struct option opts[] = {
  {"help", no_argument, NULL, 'h'},
  {"boot", required_argument, NULL, 'b'},
  {NULL, no_argument, NULL, 0},
};

const char *optstr = "hb:";

static void
help() {
  printf("cora [--boot init.cora]");
}

int main(int argc, char *argv[]) {
  char *bootFile = "src/init.cora";
  int opt = getopt_long(argc, argv, optstr, opts, NULL);
  while (opt != -1) {
    switch (opt) {
    case 'h':
      help();
      return 0;
    case 'b':
      bootFile = optarg;
    default:
      break;
    }
    opt = getopt_long(argc, argv, optstr, opts, NULL);
  }

  coraInit();
  registAPI(&coroutineModule);
  registAPI(&exceptionModule);

  if (bootFile != NULL && bootFile[0] != '\0') {
    Obj str = makeString(bootFile, strlen(bootFile));
    Obj loadFile = cons(intern("load"), cons(str, Nil));
    Eval(loadFile, Nil);
  }

  int i = 0;
  memset(&coraREPL, 0, sizeof(jmp_buf));
  setjmp(coraREPL);

  for (; ; i++) {
    printf("%d #> ", i);
    Obj exp = sexpRead(stdin);
    Obj exp1 = MacroExpand(exp);
    Obj res = Eval(exp1, Nil);
    sexpWrite(stdout, res);
    printf("\n");
  }
}
