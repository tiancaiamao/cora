#include "reader.h"
#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

static void printObj(Obj o);

static char
is_delimiter(int c) {
	return isspace(c) || c == EOF ||
		c == '('   || c == ')' ||
		c == '"'   || c == ';';
}

static char
is_identifier(int c) {
	return isalnum(c) || c == '!' || c == '$' || c == '%' ||
		c == '&' || c == '*' || c == '+' || c == '-' ||
		c == '.' || c == '/' || c == ':' || c == '<' ||
		c == '=' || c == '>' || c == '?' || c == '@' ||
		c == '^' || c == '_' || c == '~';
}

static int
peek(FILE *in) {
  int c;
  c = getc(in);
  ungetc(c, in);
  return c;
}

static void
eat_whitespace(FILE *in) {
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

static void
eat_expected_string(FILE *in, char *str) {
	int c;
	while (*str != '\0') {
		c = getc(in);
		if (c != *str) {
			fprintf(stderr, "unexpected character '%c'\n", c);
			exit(1);
		}
		str++;
	}
}

static void
peek_expected_delimiter(FILE *in) {
	if (!is_delimiter(peek(in))) {
		fprintf(stderr, "character not followed by delimiter\n");
		exit(1);
	}
}

static char
peekFirstRune(FILE *in) {
  eat_whitespace(in);
  return peek(in);
}

static char
peekFirstChar(FILE *in) {
  eat_whitespace(in);
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
  /* printf("read car = ..."); */
  /* printObj(car); */
  /* printf("\n"); */

  c = peekFirstChar(in);
  /* if (c == '.') { */
  /*   // read improper list */
  /*   c = peek(in); */
  /*   if (!is_delimiter(c)) { */
  /*     fprintf(stderr, "dot not followed by delimiter\n"); */
  /*     exit(1); */
  /*   } */
  /*   cdr_obj = sexpRead(in); */
  /*   eat_whitespace(in); */
  /*   c = getc(in); */
  /*   if (c != ')') { */
  /*     fprintf(stderr, */
  /*             "where was the trailing right paren?\n"); */
  /*     exit(1); */
  /*   } */
  /*   ret = cons(car_obj, cdr_obj); */
  /*   return ret; */
  /* } */
  ungetc(c, in);

  /* read list */
  Obj cdr = readCons(in);

  /* printf("read cdr"); */
  /* printObj(cdr); */
  /* printf("\n"); */

  return cons(car, cdr);
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
  Obj tmp;

  eat_whitespace(in);
  c = getc(in);

  /* printf("sexpRead start with char:::::%c\n", c); */

  // read a number
  if (isdigit(c)) {
    ungetc(c, in);
    return readNumber(in);
  }

  // read a symbol
  if (is_identifier(c)) {
    i = 0;
    while (is_identifier(c)) {
      buffer[i] = c;
      i++;
      c = getc(in);
    }
    if (is_delimiter(c)) {
      buffer[i] = '\0';
      ungetc(c, in);
      if (strcmp(buffer, "true") == 0) {
        return True;
      }
      if (strcmp(buffer, "false") == 0) {
        return False;
      }
      return makeSymbol(buffer);
    }
    fprintf(stderr, "symbol not followed by delimiter. "
            "Found '%c'\n", c);
    exit(1);
  }

  // read quote
  if (c == '\'') {
    Obj o = sexpRead(in);
    return cons(symQuote, cons(o, Nil));
  }

  // read the empty list or pair
  if (c == '(')	{
    Obj ret = readCons(in);
    return ret;
  }

  if (c == EOF) {
    fprintf(stderr, "read get EOF, what the fuck?");
    return Nil;
  }

  /* read a string */
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
    struct scmSymbol* sym = ptr(o);
    printf("%s", sym->str);
  } else if (isboolean(o)) {
    if (o == True) {
      printf("true");
    } else if (o == False) {
      printf("false");
    }
  } else if (o == Nil) {
    printf("nil");
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
      printf("string");
      break;
    case scmHeadSymbol:
      printf("symbol");
      break;
    case scmHeadBoolean:
      printf("boolean");
      break;
    case scmHeadClosure:
      printf("closure");
      break;
    case scmHeadStream:
      printf("stream");
      break;
    case scmHeadBuiltin:
      printf("builtin");
      break;
    case scmHeadError:
      printf("error");
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
