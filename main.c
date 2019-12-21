#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <getopt.h>
#include "runtime.h"

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
  char *bootFile = "init.cora";
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

  if (bootFile != NULL && bootFile[0] != '\0') {
    Obj str = makeString(bootFile, strlen(bootFile));
    Obj loadFile = cons(intern("load"), cons(str, Nil));
    Eval(loadFile, Nil);
  }

  while(1) {
    printf("#> ");
    Obj exp = sexpRead(stdin);
    Obj exp1 = MacroExpand(exp);
    Obj res = Eval(exp1, Nil);
    sexpWrite(stdout, res);
    printf("\n");
  }
}
