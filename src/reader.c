#include "reader.h"
#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

static void
addPkgMapping(struct VM *vm, int pos, struct SexpReader *r, Obj sym, Obj path) {
  r->pkgMapping = cons(vm, pos, cons(vm, pos, sym, path), r->pkgMapping);
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
	    addPkgMapping(vm, pos, r, sym, path);
	    return cons(vm, pos, hd, cons(vm, pos, path, Nil));
	  }
	}
      }
    }
  }

  return cons(vm, pos, hd, tl);
}

Obj
reverse(struct VM *vm, int pos, Obj o) {
  Obj ret = Nil;
  while (o != Nil) {
    ret = cons(vm, pos, car(o), ret);
    o = cdr(o);
  }
  return ret;
}

static Obj
readListMacro(struct VM *vm, int pos, struct SexpReader *r, FILE *in, int *errCode) {
  Obj hd = intern("list");
  Obj ret = Nil;
  char b = peekFirstChar(in);
  while (b != EOF && b != ']') {
    if (b == '.') {
      hd = intern("list-rest");
    } else {
      ungetc(b, in);
      Obj o = sexpRead(vm, pos, r, in, errCode);
      ret = cons(vm, pos, o, ret);
    }
    b = peekFirstChar(in);
  }
  return cons(vm, pos, hd, reverse(vm, pos, ret));
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
    return cons(vm, pos, symQuote, cons(vm, pos, o, Nil));
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
    return makeString(vm, pos, buffer, i);
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
    case scmHeadNative:
      fprintf(to, "native");
      break;
    /* case scmHeadCurry: */
    /*   fprintf(to, "curry"); */
    /*   break; */
    case scmHeadClosure:
      fprintf(to, "closure");
      break;
    /* case scmHeadContinuation: */
    /*   fprintf(to, "continuation"); */
    /*   break; */
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


