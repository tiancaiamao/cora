#include "reader.h"
#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

static void printObj(Obj o);

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
readCons(FILE *in) {
  int c = getc(in);
  if (c == ')') {
    // read the empty list
    return Nil;
  }

  ungetc(c, in);
  Obj car = sexpRead(in);

  c = peekFirstChar(in);
  ungetc(c, in);

  /* read list */
  Obj cdr = readCons(in);

  /* printf("read cdr"); */
  /* printObj(cdr); */
  /* printf("\n"); */

  return cons(car, cdr);
}

static Obj
reverse(Obj o) {
  Obj ret = Nil;
  while (o != Nil) {
    ret = cons(car(o), ret);
    o = cdr(o);
  }
  return ret;
}

static Obj
readListMacro(FILE *in) {
  Obj hd = intern("list");
  Obj ret = Nil;
  char b = peekFirstChar(in);
  while (b != EOF && b != ']') {
    if (b == '.') {
      hd = intern("list-rest");
    } else {
      ungetc(b, in);
      Obj o = sexpRead(in);
      ret = cons(o, ret);
    }
    b = peekFirstChar(in);
  }
  return cons(hd, reverse(ret));
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
sexpRead(FILE *in) {
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
    Obj o = sexpRead(in);
    return cons(symQuote, cons(o, Nil));
  }

  // read the empty list or pair
  if (c == '(')	{
    return readCons(in);
  }

  // read list macro
  if (c == '[') {
    return readListMacro(in);
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
    i = 0;
    while (isIdentifierChar(c)) {
      buffer[i] = c;
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
      return makeSymbol(buffer);
    }
    fprintf(stderr, "symbol not followed by delimiter. "
            "Found '%c'\n", c);
    exit(1);
  }

  if (c == EOF) {
    return Nil;
  }

  fprintf(stderr, "read illegal state\n");
  exit(1);
}

static void
printCons(Obj o, bool start) {
  if (start) {
    printf("(");
    printObj(car(o));
  } else {
    printf(" ");
    printObj(car(o));
  }

  Obj tl = cdr(o);
  if (tl == Nil) {
    printf(")");
  } else if (iscons(tl)) {
    printCons(tl, false);
  } else {
    printf(" . ");
    printObj(tl);
    printf(")");
  }
}

static void
printObj(Obj o) {
  if (isfixnum(o)) {
    printf("%ld", fixnum(o));
  } else if (iscons(o)) {
    printCons(o, true);
  } else if (issymbol(o)) {
    printf("%s", symbolStr(o));
  } else if (isboolean(o)) {
    if (o == True) {
      printf("true");
    } else if (o == False) {
      printf("false");
    }
  } else if (o == Nil) {
    printf("()");
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
      printf("\"%s\"", stringStr(o));
      break;
    case scmHeadBoolean:
      printf("boolean");
      break;
    case scmHeadClosure:
      printf("closure");
      break;
    case scmHeadNative:
      printf("native");
      break;
    case scmHeadCurry:
        printf("curry");
        break;
    default:
      printf("ptr unknown type = %d\n", h->type);
    };
  } else {
    printf("unknown %ld", o);
  }
}

void
sexpWrite(FILE *out, Obj o) {
  printObj(o);
}


#ifdef _READER_TEST_

#include "reader.h"
#include <stdio.h>
#include <assert.h>
#include <string.h>


static void
TestReadSexp() {
  /* char buffer[] = "(a b c)"; */
  char buffer[] = "(a)";
  FILE *stream = fmemopen(buffer, strlen(buffer), "r");

  Obj o = sexpRead(stream);

  Obj r = cons(intern("a"), cons(intern("b"), cons(intern("c"), Nil)));
  Obj z = cons(intern("a"), cons(intern("b"), cons(intern("c"), Nil)));

  assert(iscons(o));
  printf("here res =  %ld \n", o);
  printf("cdr res = ");
  printObj(cdr(o));
  printf("\n");
  printf("=== %ld \n", cdr(o));
  printObj(cdr(o));
  printf("%ld \n", Nil);
  assert(eq(o, cons(intern("a"), Nil)));
  /* assert(eq(z, r)); */
  /* assert(eq(o, z)); */

  fclose(stream);
}

int main(int argc, char *argv) {
  TestReadSexp();
}

#endif
