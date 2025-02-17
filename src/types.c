#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "types.h"
#include "gc.h"

const Obj True = ((1 << (TAG_SHIFT + 1)) | TAG_BOOLEAN);
const Obj False = ((2 << (TAG_SHIFT + 1)) | TAG_BOOLEAN);
const Obj Nil = ((666 << (TAG_SHIFT + 1)) | TAG_IMMEDIATE_CONST);
const Obj Undef = ((42 << TAG_SHIFT) | TAG_IMMEDIATE_CONST);

struct scmBytes {
	scmHead head;
	int len;
	char data[];
	// strBuf str;
};

const char *typeNameX[8] = {
	"unused",
	"boolean",
	"null",
	"number",
	"cons",
	"string",
	"vector",
	"native",
};

void *
newObj(scmHeadType tp, int sz) {
	/* scmHead* p = malloc(sz); */
	scmHead *p = gcAlloc(getGC(), sz);
	assert(((Obj) p & TAG_PTR) == 0);
	p->type = tp;
	/* printf("alloc object -- %p %s\n", p, typeNameX[tp]); */
	return (void *) p;
}

scmHead *
getScmHead(Obj o) {
	if (tag(o) == TAG_PTR) {
		return ptr(o);
	}
	return NULL;
}

Obj
makeCObj(void *ptr) {
	// The pointer must be aligned to be used as c object.
	assert(((Obj) ptr & TAG_PTR) == 0);
	return ((Obj) (ptr) | TAG_COBJ);
}

void *
mustCObj(Obj o) {
	assert(tag(o) == TAG_COBJ);
	return ptr(o);
}

Obj
makeCons(Obj car, Obj cdr) {
	struct scmCons *p = newObj(scmHeadCons, sizeof(struct scmCons));
	p->car = car;
	p->cdr = cdr;
	return ((Obj) (&p->head) | TAG_PTR);
}

bool
iscons(Obj o) {
	if ((o & TAG_MASK) != TAG_PTR) {
		return false;
	}
	scmHead *h = ptr(o);
	return h->type == scmHeadCons;
}

static void
consGCFunc(struct GC *gc, void *f) {
	struct scmCons *from = f;
	int minv = from->head.version;
	gcMarkAndEnsure(gc, from->car, minv);
	gcMarkAndEnsure(gc, from->cdr, minv);
}

Obj
consp(Obj x) {
	if (iscons(x)) {
		return True;
	}
	return False;
}

Obj
cadr(Obj x) {
	return car(cdr(x));
}

Obj
caddr(Obj x) {
	return car(cdr(cdr(x)));
}

Obj
cdddr(Obj x) {
	return cdr(cdr(cdr(x)));
}

Obj
makeNumber(int v) {
	if (v < 99999999) {
		// The type of a fixnum is actually intptr_t, although stored as uintptr.
		// Be careful with the sign digit.
		Obj res = (Obj) (((intptr_t) (v) << 1));
		assert((res & 1) == 0);
		return res;
	}
	// TODO
	return (Obj) (99999999);
}

bool
isNumber(Obj o) {
	if (tag(o) == TAG_FIXNUM) {
		return true;
	}
	if (tag(o) == TAG_PTR) {
		if (((scmHead *) ptr(o))->type == scmHeadNumber) {
			return true;
		}
	}
	return false;
}

Obj
makeBytes(int len) {
	// sz is the actural length but we malloc a extra byte to be compatible with C.
	int alloc = len + sizeof(struct scmBytes) + 1;
	struct scmBytes *str = newObj(scmHeadBytes, alloc);
	str->len = len;
	return ((Obj) (&str->head) | TAG_PTR);
}

char *
bytesData(Obj o) {
	struct scmBytes *s = ptr(o);
	assert(s->head.type == scmHeadBytes);
	return s->data;
}

int
bytesLen(Obj o) {
	struct scmBytes *s = ptr(o);
	assert(s->head.type == scmHeadBytes);
	return s->len;
}

bool
isBytes(Obj o) {
	if (tag(o) == TAG_PTR) {
		if (((scmHead *) ptr(o))->type == scmHeadBytes) {
			return true;
		}
	}
	return false;
}

Obj
makeString(const char *s, int len) {
	Obj ret = makeBytes(len);
	char *data = bytesData(ret);
	memcpy(data, s, len);
	data[len] = 0;
	return ret;
}

Obj
makeCString(const char *s) {
	return makeString(s, strlen(s));
}

str
stringStr(Obj o) {
	struct scmBytes *s = ptr(o);
	assert(s->head.type == scmHeadBytes);
	str ret;
	ret.str = s->data;
	ret.len = s->len;
	return ret;
}

static void
bytesGCFunc(struct GC *gc, void *f) {
}


struct trieNode gRoot = { };

Obj
makeSymbol(const char *s) {
	const char *old = s;
	struct trieNode *p = &gRoot;
	for (; *s; s++) {
		int offset = *s;
		if (p->child[offset] == NULL) {
			struct trieNode *n = malloc(sizeof(struct trieNode));
			memset(n, 0, sizeof(struct trieNode));
			p->child[offset] = n;
		}
		p = p->child[offset];
	}
	/* printf("making symbol ...%p\n", p); */
	if (p->sym == NULL) {
		char *tmp = malloc(strlen(old) + 1);
		strcpy(tmp, old);
		p->sym = tmp;
		p->value = Undef;
	}

	return (Obj) (p) | TAG_SYMBOL;
}

Obj
symbolGet(Obj sym) {
	assert(issymbol(sym));
	struct trieNode *s = ptr(sym);
	return s->value;
}

char *
symbolStr(Obj sym) {
	assert(issymbol(sym));
	struct trieNode *s = ptr(sym);
	return s->sym;
}

Obj
makeNative(int label, basicBlock fn, int required, int captured, ...) {
	int sz = sizeof(struct scmNative) + captured * sizeof(Obj);
	struct scmNative *clo = newObj(scmHeadNative, sz);
	clo->code.func = fn;
	clo->code.label = label;
	clo->required = required;
	clo->captured = captured;
	if (captured > 0) {
		va_list ap;
		va_start(ap, captured);
		for (int i = 0; i < captured; i++) {
			clo->data[i] = va_arg(ap, Obj);
			scmHead* h = getScmHead(clo->data[i]);
			if (h != NULL) {
			  /* assert(versionCmp(clo->head.version, h->version) >=0); */
			}
		}
		va_end(ap);
	}

	return ((Obj) (&clo->head) | TAG_PTR);
}

static void
nativeGCFunc(struct GC *gc, void *f) {
	struct scmNative *from = f;
	int minv = from->head.version;
	for (int i = 0; i < from->captured; i++) {
	  gcMarkAndEnsure(gc, from->data[i], minv);
	}
}

bool
isNative(Obj c) {
	if ((c & TAG_MASK) != TAG_PTR) {
		return false;
	}
	scmHead *h = ptr(c);
	return h->type == scmHeadNative;
}

Obj *
nativeData(Obj o) {
	struct scmNative *native = ptr(o);
	assert(native->head.type == scmHeadNative);
	if (native->captured == 0) {
		return NULL;
	}
	return native->data;
}

int
nativeCaptured(Obj o) {
	struct scmNative *native = ptr(o);
	assert(native->head.type == scmHeadNative);
	return native->captured;
}

struct pcState *
nativeFuncPtr(Obj o) {
	struct scmNative *native = ptr(o);
	assert(native->head.type == scmHeadNative);
	return &native->code;
}

int
nativeRequired(Obj o) {
	struct scmNative *native = ptr(o);
	assert(native->head.type == scmHeadNative);
	return native->required;
}

struct scmVector {
	scmHead head;
	int size;
	Obj data[];
};

Obj
makeVector(int size) {
	struct scmVector *vec = newObj(scmHeadVector,
				       sizeof(struct scmVector) +
				       sizeof(Obj) * size);
	vec->size = size;
	for (int i = 0; i < vec->size; i++) {
		vec->data[i] = Undef;
	}
	return ((Obj) (&vec->head) | TAG_PTR);
}

Obj
vectorRef(Obj v, int idx) {
	struct scmVector *vec = ptr(v);
	assert(vec->head.type == scmHeadVector);
	assert(idx >= 0 && idx < vec->size);
	return vec->data[idx];
}

Obj
vectorSet(Obj vec, int idx, Obj val) {
	struct scmVector *v = ptr(vec);
	assert(v->head.type == scmHeadVector);
	assert(idx >= 0 && idx < v->size);
	writeBarrier(getGC(), &v->data[idx], val);
	// barrier for generational GC
	scmHead *h = getScmHead(val);
	if (h != NULL && versionCmp(v->head.version, h->version) > 0) {
	  h->version = v->head.version;
	}
	return vec;
}

int
vectorLength(Obj vec) {
	assert(isvector(vec));
	struct scmVector *v = ptr(vec);
	return v->size;
}

bool
isvector(Obj o) {
	if (tag(o) == TAG_PTR) {
		if (((scmHead *) ptr(o))->type == scmHeadVector) {
			return true;
		}
	}
	return false;
}


static void
vectorGCFunc(struct GC *gc, void *f) {
	struct scmVector *from = f;
	int minv = from->head.version;
	for (int i = 0; i < from->size; i++) {
	  gcMarkAndEnsure(gc, from->data[i], minv);
	}
}

bool
eq(Obj x, Obj y) {
	if (x == y) {
		return true;
	}

	if (iscons(x) && iscons(y)) {
		if (!eq(car(x), car(y))) {
			return false;
		}
		return eq(cdr(x), cdr(y));
	}

	if (isBytes(x) && isBytes(y)) {
		struct scmBytes *x1 = ptr(x);
		struct scmBytes *y1 = ptr(y);
		str s1 = { x1->data, x1->len };
		str s2 = { y1->data, y1->len };
		return strCmp(s1, s2) == 0;
	}

	return false;
}

struct scmContinuation {
	scmHead head;
	struct callStack cs;
};

Obj
makeContinuation() {
	struct scmContinuation *cont =
		newObj(scmHeadContinuation, sizeof(struct scmContinuation));
	struct callStack *stack = &cont->cs;
	stack->data = malloc(64 * sizeof(struct returnAddr));
	stack->len = 0;
	stack->cap = 64;
	return ((Obj) (&cont->head) | TAG_PTR);
}

struct callStack *
contCallStack(Obj cont) {
	struct scmContinuation *v = ptr(cont);
	assert(v->head.type == scmHeadContinuation);
	return &v->cs;
}

void
gcMarkCallStack(struct GC *gc, struct callStack *stack) {
	for (int i = 0; i < stack->len; i++) {
		struct returnAddr *addr = &stack->data[i];
		// TODO: duplicated operation
		for (int j = 0; j < addr->stk.base; j++) {
			gcMark(gc, addr->stk.stack[j]);
		}
		// Don't forget this one!
		gcMark(gc, addr->frees);
	}
}

void
gcMarkCallStackAndEnsure(struct GC *gc, struct callStack *stack, int minv) {
	for (int i = 0; i < stack->len; i++) {
		struct returnAddr *addr = &stack->data[i];
		// TODO: duplicated operation
		for (int j = 0; j < addr->stk.base; j++) {
		  gcMarkAndEnsure(gc, addr->stk.stack[j], minv);
		}
		// Don't forget this one!
		gcMarkAndEnsure(gc, addr->frees, minv);
	}
}

static void
continuationGCFunc(struct GC *gc, void *f) {
	struct scmContinuation *from = f;
	int minv = from->head.version;
	gcMarkCallStackAndEnsure(gc, &from->cs, minv);
}

void
typesInit() {
	gcRegistForType(scmHeadCons, consGCFunc);
	gcRegistForType(scmHeadBytes, bytesGCFunc);
	gcRegistForType(scmHeadVector, vectorGCFunc);
	gcRegistForType(scmHeadNative, nativeGCFunc);
	gcRegistForType(scmHeadContinuation, continuationGCFunc);
}
