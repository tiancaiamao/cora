#include "reader.h"
#include "gc.h"
#include "types.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

extern Obj primSet(struct Cora *co, Obj key, Obj val);

static bool
isIdentifierChar(int c) {
	switch (c) {
	case '(':
	case ')':
	case '"':
	case '\'':
	case '`':
	case ',':
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
readCons(struct SexpReader *r, FILE *in, int *errCode) {
	int c = getc(in);
	if (c == ')') {
		// read the empty list
		return Nil;
	}

	ungetc(c, in);
	Obj hd = sexpRead(r, in, errCode);

	c = peekFirstChar(in);
	ungetc(c, in);

	/* read list */
	Obj tl = readCons(r, in, errCode);
	return cons(hd, tl);
}

Obj
reverse(Obj o) {
	Obj ret = Nil;
	while (o != Nil) {
		ret = cons(car(o), ret);
		o = cdr(o);
	}
	return ret;
}

static Obj
readListMacro(struct SexpReader *r, FILE *in, int *errCode) {
	Obj hd = intern("list");
	Obj ret = Nil;
	char b = peekFirstChar(in);
	while (b != EOF && b != ']') {
		if (b == '.') {
			hd = intern("list-rest");
		} else {
			ungetc(b, in);
			Obj o = sexpRead(r, in, errCode);
			ret = cons(o, ret);
		}
		b = peekFirstChar(in);
	}
	return cons(hd, reverse(ret));
}

static Obj
readNumber(FILE *in) {
	char buf[30];
	memset(buf, 0, 30);
	int i = 0;
	char c = getc(in);
	while (c != EOF && isdigit(c)) {
		buf[i] = c;
		c = getc(in);
		i++;
	}
	buf[i] = '\0';
	if (c != EOF) {
		ungetc(c, in);
	}
	Obj ret = makeNumber(atoi(buf));
	return ret;
}

Obj
sexpRead(struct SexpReader *r, FILE *in, int *errCode) {
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
		Obj o = sexpRead(r, in, errCode);
		return cons(symQuote, cons(o, Nil));
	}
	// read the empty list or pair
	if (c == '(') {
		return readCons(r, in, errCode);
	}
	// read list macro
	if (c == '[') {
		return readListMacro(r, in, errCode);
	}
	// read backquote macro
	if (c == '`') {
		Obj o = sexpRead(r, in, errCode);
		return cons(symBackQuote, cons(o, Nil));
	}
	// read unquote macro
	if (c == ',') {
		Obj o = sexpRead(r, in, errCode);
		return cons(symUnQuote, cons(o, Nil));
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
				fprintf(stderr,
					"non-terminated string literal\n");
				exit(1);
			}
			/* subtract 1 to save space for '\0' terminator */
			if (i < 1000 - 1) {
				buffer[i++] = c;
			} else {
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
		/* int firstDot = -1; */
		i = 0;
		while (isIdentifierChar(c)) {
			buffer[i] = c;
			if (c == '.') {
				/* firstDot = i; */
			}
			i++;
			c = getc(in);
		}
		/* if (c != EOF) { */
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
				if (!isdigit((int) buffer[p])) {
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

void printObj(FILE *to, Obj o) {
  if (isNumber(o)) {
    if (isfixnum(o)) {
      fprintf(to, "%lld", (int64_t)(*(double *)&o));
    } else {
      fprintf(to, "%f", *(double *)&o);
    }
    return;
  }
  if (tag(o) == TAG_IMMED) {
    if (o == Nil) {
      fprintf(to, "null");
    } else if (o == True) {
      fprintf(to, "true");
    } else if (o == False) {
      fprintf(to, "false");
    } else if (o == Undef) {
      fprintf(to, "Undef");
    } else {
      fprintf(to, "ptr unknown immed type = %ld\n", o);
    }
    return;
  }

  switch (tag(o)) {
  case TAG_COBJ:
    fprintf(to, "cobj");
    break;
  case TAG_SYMBOL: {
    char dest[256];
    symbolStr(o, dest, 256);
    fprintf(to, "%s", dest);
    break;
  }
  case TAG_BYTES:
    fprintf(to, "\"%s\"", stringStr(o).str);
    break;
  case TAG_CONS:
    printCons(to, o, true);
    break;
  case TAG_NATIVE:
    fprintf(to, "native");
    break;
  case TAG_PTR: {
    scmHead *h = ptr(o);
    switch (h->type) {
    case scmHeadVector:
      fprintf(to, "vector");
      break;
    }
  }
  default:
    fprintf(to, "unknown type = %ld\n", o);
  }
}

void
sexpWrite(FILE *out, Obj o) {
	printObj(stdout, o);
}
