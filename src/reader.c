#include "reader.h"
#include "types.h"
#include "vm.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#include <assert.h>

static void
addPkgMapping(struct SexpReader *r, Obj sym, Obj path) {
  r->pkgMapping = cons(cons(sym, path), r->pkgMapping);
}

static bool
isIdentifierChar(int c) {
  switch (c) {
  case '(':
  case ')':
  case '"':
  case '\'':
  case ';':
  case '[':
  case ']':
    return false;
  }
  if (isspace(c) || c == EOF) {
    return false;
  }
  return true;
}

static void
eatWhitespace(FILE *in) {
  int c;
  while ((c = getc(in)) != EOF) {
    if (isspace(c)) {
      continue;
    }
    if (c == ';') {
      // comments are also whitespace
      while (((c = getc(in)) != EOF) && (c != '\n'));
      continue;
    }
    ungetc(c, in);
    break;
  }
}

static char
peekFirstChar(FILE *in) {
  eatWhitespace(in);
  return getc(in);
}

static Obj
readCons(struct VM *vm, int pos, struct SexpReader *r, FILE *in, int *errCode) {
  int c = getc(in);
  if (c == ')') {
    // read the empty list
    return Nil;
  }

  ungetc(c, in);
  Obj hd = sexpRead(vm, pos, r, in, errCode);

  c = peekFirstChar(in);
  ungetc(c, in);

  /* read list */
  Obj tl = readCons(vm, pos, r, in, errCode);

  /* printf("read cdr"); */
  /* printObj(cdr); */
  /* printf("\n"); */

  if (issymbol(hd) && strcmp(symbolStr(hd), "@import") == 0) {
    // Handle the @import reader macro
    // (@import "path/to/file" sym)
    hd = intern("import");
    if (iscons(tl)) {
      Obj path = car(tl);
      if (isstring(path)) {
	if (iscons(cdr(tl))) {
	  Obj sym = cadr(tl);
	  if (issymbol(sym)) {
	    addPkgMapping(r, sym, path);
	    return cons(hd, cons(path, Nil));
	  }
	}
      }
    }
  }

  return cons(hd, tl);
}

Obj
reverse(struct VM *vm, int pos, int O) {
  const int RET = pos++;
  const int TMP = pos++;
  vmSet(vm, RET, Nil);
  while(vmRef(vm, O) != Nil) {
    vmSet(vm, TMP, vmCar(vm, O));
    vmSet(vm, RET, vmCons(vm, TMP, RET));
    vmSet(vm, O, vmCdr(vm, O));
  }
  return vmRef(vm, RET);
}

static Obj
readListMacro(struct VM *vm, int pos, struct SexpReader *r, FILE *in, int *errCode) {
  const int hd = pos;
  vmPush(vm, pos++, intern("list"));
  const int ret = pos;
  vmPush(vm, pos++, Nil);
  const int o = pos++;
  char b = peekFirstChar(in);
  while (b != EOF && b != ']') {
    if (b == '.') {
      vmSet(vm, hd, intern("list-rest"));
    } else {
      ungetc(b, in);
      vmSet(vm, o, sexpRead(vm, pos, r, in, errCode));
      vmSet(vm, ret, vmCons(vm, o, ret));
    }
    b = peekFirstChar(in);
  }
  vmSet(vm, ret, reverse(vm, pos, ret));
  return vmCons(vm, hd, ret);
}

static Obj
readNumber(FILE *in) {
  char buf[30];
  memset(buf,0,30);
  int i = 0;
  char c = getc(in);
  while(c != EOF && isdigit(c)) {
    buf[i] = c;
    c = getc(in);
    i++;
  }
  buf[i] = '\0';
  if (c != EOF) {
    ungetc(c,in);
  }
  Obj ret = makeNumber(atoi(buf));
  return ret;
}

Obj
sexpRead(struct VM *vm, int pos, struct SexpReader* r, FILE *in, int *errCode) {
  int c;
  int i;
  char buffer[512];

  eatWhitespace(in);
  c = getc(in);

  // read a number
  if (isdigit(c)) {
    ungetc(c, in);
    return readNumber(in);
  }

  // read quote
  if (c == '\'') {
    Obj o = sexpRead(vm, pos, r, in, errCode);
    return cons(symQuote, cons(o, Nil));
  }

  // read the empty list or pair
  if (c == '(')	{
    return readCons(vm, pos, r, in, errCode);
  }

  // read list macro
  if (c == '[') {
    return readListMacro(vm, pos, r, in, errCode);
  }

  // read a string
  if (c == '"') {
    i = 0;
    while ((c = getc(in)) != '"') {
      if (c == '\\') {
        c = getc(in);
        if (c == 'n') {
          c = '\n';
        }
      }
      if (c == EOF) {
        fprintf(stderr, "non-terminated string literal\n");
        exit(1);
      }
      /* subtract 1 to save space for '\0' terminator */
      if (i < 1000 - 1) {
        buffer[i++] = c;
      }
      else {
        fprintf(stderr,
                "string too long. Maximum length is %d\n",
                1000);
        exit(1);
      }
    }
    buffer[i] = '\0';
    return makeString(buffer, i);
  }

  // read a symbol
  if (isIdentifierChar(c)) {
    int firstDot = -1;
    i = 0;
    while (isIdentifierChar(c)) {
      buffer[i] = c;
      if (c == '.') {
	firstDot = i;
      }
      i++;
      c = getc(in);
    }
    if (c != EOF) {
      buffer[i] = '\0';
      ungetc(c, in);
      if (strcmp(buffer, "true") == 0) {
        return True;
      }
      if (strcmp(buffer, "false") == 0) {
        return False;
      }
      if (buffer[0] == '-' && i > 1) {
        bool allDigit = true;
        for (int p = 1; p < i; p++) {
          if (!isdigit((int)buffer[p])) {
            allDigit = false;
          }
        }
        if (allDigit) {
          Obj num = makeNumber(atoi(buffer));
          return num;
        }
      }
      if (firstDot >= 0) {
	char *pkgPath = NULL;
	if (firstDot == 0) {
	  pkgPath = r->selfPath;
	} else if (firstDot > 0) {
	  char saveByte = buffer[firstDot];
	  buffer[firstDot] = 0;
	  Obj pkg = makeSymbol(buffer);

	  Obj p = r->pkgMapping;
	  for (; p != Nil; p = cdr(p)) {
	    Obj item = car(p);
	    if (car(item) == pkg) {
	      pkgPath = toCStr(stringStr(cdr(item)));
	      break;
	    }
	  }
	  if (p == Nil) {
	    buffer[firstDot] = saveByte ;
	  }
	}

	if (pkgPath != NULL) {
	  char tmp[512];
	  int len1 = strlen(pkgPath);
	  memcpy(tmp, pkgPath, len1);
	  tmp[len1] = '.';
	  int len2 = strlen(buffer+firstDot+1);
	  memcpy(tmp+len1+1, buffer+firstDot+1, len2);
	  tmp[len1 + 1 + len2] = '\0';
	  return makeSymbol(tmp);
	}
      }
      return makeSymbol(buffer);
    }
    fprintf(stderr, "symbol not followed by delimiter. "
            "Found '%c'\n", c);
    exit(1);
  }

  if (c == EOF) {
    *errCode = 1;
    return Nil;
  }

  fprintf(stderr, "read illegal state\n");
  exit(1);
}

static void
printCons(FILE *to, Obj o, bool start) {
  if (start) {
    fprintf(to, "(");
    printObj(to, car(o));
  } else {
    fprintf(to, " ");
    printObj(to, car(o));
  }

  Obj tl = cdr(o);
  if (tl == Nil) {
    fprintf(to, ")");
  } else if (iscons(tl)) {
    printCons(to, tl, false);
  } else {
    fprintf(to, " . ");
    printObj(to, tl);
    fprintf(to, ")");
  }
}

void
printObj(FILE *to, Obj o) {
  if (isfixnum(o)) {
    fprintf(to, "%ld", fixnum(o));
  } else if (iscobj(o)) {
    fprintf(to, "cobj");
  } else if (iscons(o)) {
    printCons(to, o, true);
  } else if (issymbol(o)) {
    fprintf(to, "%s", symbolStr(o));
  } else if (isboolean(o)) {
    if (o == True) {
      fprintf(to, "true");
    } else if (o == False) {
      fprintf(to, "false");
    }
  } else if (o == Nil) {
    fprintf(to, "()");
  } else if (tag(o) == TAG_PTR) {
    scmHead* h = ptr(o);
    switch (h->type) {
    case scmHeadNumber:
      fprintf(to, "ptr number");
      break;
    case scmHeadCons:
      fprintf(to, "cons");
      break;
    case scmHeadVector:
      fprintf(to, "vector");
      break;
    case scmHeadNull:
      fprintf(to, "null");
      break;
    case scmHeadString:
      fprintf(to, "\"%s\"", toCStr(stringStr(o)));
      break;
    case scmHeadBoolean:
      fprintf(to, "boolean");
      break;
    /* case scmHeadNative: */
    /*   fprintf(to, "native"); */
    /*   break; */
    case scmHeadCurry:
      fprintf(to, "curry");
      break;
    case scmHeadClosure:
      fprintf(to, "closure");
      break;
    case scmHeadContinuation:
      fprintf(to, "continuation");
      break;
    case scmHeadPrimitive:
      fprintf(to, "primitive");
      break;
    default:
      fprintf(to, "ptr unknown type = %d\n", h->type);
    };
  } else {
    fprintf(to, "unknown %ld", o);
  }
}

void
sexpWrite(FILE *out, Obj o) {
  printObj(stdout, o);
}


#ifdef _READER_TEST_

#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "vm.h"


static void
TestReadSexp() {
  struct VM *vm = newVM();
  int pos = 0;
  char buffer[] = "(a b c)";
  /* char buffer[] = "(a)"; */
  FILE *stream = fmemopen(buffer, strlen(buffer), "r");

  struct SexpReader reader = {.pkgMapping = Nil};
  int errCode;
  Obj o = sexpRead(vm, pos, &reader, stream, &errCode);

  /* Obj r = cons(intern("a"), cons(intern("b"), cons(intern("c"), Nil))); */
  Obj z = cons(intern("a"), cons(intern("b"), cons(intern("c"), Nil)));

  assert(iscons(o));
  /* printf("here res =  %ld \n", o); */
  /* printf("cdr res = "); */
  /* printObj(stdout, cdr(o)); */
  /* printf("\n"); */
  /* printf("=== %ld \n", cdr(o)); */
  /* printObj(stdout, cdr(o)); */
  /* printf("%ld \n", Nil); */
  /* assert(eq(o, cons(intern("a"), Nil))); */
  /* assert(eq(z, r)); */
  assert(eq(o, z));

  fclose(stream);
}

static void
TestImport() {
  char buffer[] = "(@import \"std/cora/basic\" xxx)\n(xxx.yyy 42)";
  FILE *stream = fmemopen(buffer, strlen(buffer), "r");

  struct VM *vm = newVM();
  int pos = 0;
  struct SexpReader r = {.pkgMapping = Nil};
  int errCode;
  Obj o = sexpRead(vm, pos, &r, stream, &errCode);
  Obj pathStr = makeString("std/cora/basic", 14);
  Obj s = cons(intern("import"), cons(pathStr, Nil));
  assert(eq(o, s));
  /* printObj(stdout, r.pkgMapping); */
  /* printf("\n"); */
  assert(eq(r.pkgMapping, cons(cons(intern("xxx"), pathStr), Nil)));

  Obj x = sexpRead(vm, pos, &r, stream, &errCode);
  /* printObj(stdout, x); */
  /* printf("\n"); */
  assert(eq(car(x), intern("std/cora/basic.yyy")));

  fclose(stream);
}

int main(int argc, char *argv) {
  TestReadSexp();
  TestImport();
}

#endif
