#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "gc.h"
#include "types.h"

Obj symQuote, symIf, symLambda, symDo, symMacroExpand, symDebugEval,
	symBackQuote, symUnQuote;

const Obj True = ((1 << (TAG_SHIFT + 1)) | TAG_BOOLEAN);
const Obj False = ((2 << (TAG_SHIFT + 1)) | TAG_BOOLEAN);
const Obj Nil = ((666 << (TAG_SHIFT + 1)) | TAG_IMMEDIATE_CONST);
const Obj Undef = ((42 << TAG_SHIFT) | TAG_IMMEDIATE_CONST);

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
	scmHead* p = malloc(sz);
	/* scmHead *p = gcAlloc(getGC(), sz); */
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

static void
consGCFunc(struct GC *gc, void *f) {
	struct scmCons *from = f;
	version_t minv = from->head.version;
	gcMark(gc, from->car, minv);
	gcMark(gc, from->cdr, minv);
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

__thread struct trieNode *gRoot;
extern  __thread struct Cora *gCo;

Obj
makeSymbol(const char *s) {
	const char *old = s;
	struct trieNode *p = gRoot;
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
	} else {
		if (p->value != Undef) {
			assert(p->owner == gCo);
		}
	}

	return (Obj) (p) | TAG_SYMBOL;
}

Obj
symbolGet(Obj sym) {
	assert(issymbol(sym));
	if (tag(sym) == TAG_SYMBOL) {
		struct trieNode *s = ptr(sym);
		return s->value;
	}

	if (tag(sym) == TAG_PTR &&
	    ((scmHead *) ptr(sym))->type == scmHeadSymbol) {
		struct scmSymbol *s = ptr(sym);
		return s->value;
	}
	assert(false);
}

int
symbolStr(Obj sym, char *dest, size_t sz) {
	assert(issymbol(sym));
	if (tag(sym) == TAG_SYMBOL) {
		struct trieNode *s = ptr(sym);
		int l = strlen(s->sym) + 1;
		assert(l < sz);
		memcpy(dest, s->sym, l);
		return 0;
	} else if (tag(sym) == TAG_PTR &&
		   ((scmHead *) ptr(sym))->type == scmHeadSymbol) {
#ifdef _BOOTSTRAP_TEST_
		struct scmSymbol* s = ptr(sym);
		snprintf(dest, sz, "#%d%%", s->unique);
#else		
		snprintf(dest, sz, "x%ld", sym);
#endif
		return 0;
	}
	assert(false);
}

Obj
makeNative1(int nframe, basicBlock1 fn, int required, int captured, ...) {
	int sz = sizeof(struct scmNative1) + captured * sizeof(Obj);
	struct scmNative1 *clo = newObj(scmHeadNative1, sz);
	clo->nframe = nframe;
	clo->fn = fn;
	clo->required = required;
	clo->captured = captured;
	if (captured > 0) {
		va_list ap;
		va_start(ap, captured);
		for (int i = 0; i < captured; i++) {
			clo->data[i] = va_arg(ap, Obj);
		}
		va_end(ap);
	}

	return ((Obj) (&clo->head) | TAG_PTR);
}

struct scmNative1 *
mustNative1(Obj o) {
	struct scmNative1 *native = ptr(o);
	assert(native->head.type == scmHeadNative1);
	return native;
}

static void
native1GCFunc(struct GC *gc, void *f) {
	struct scmNative1 *from = f;
	version_t minv = from->head.version;
	for (int i = 0; i < from->captured; i++) {
		gcMark(gc, from->data[i], minv);
	}
}

Obj *
native1Data(Obj o) {
	struct scmNative1 *native = ptr(o);
	assert(native->head.type == scmHeadNative1);
	if (native->captured == 0) {
		return NULL;
	}
	return native->data;
}

int
native1Captured(Obj o) {
	struct scmNative1 *native = ptr(o);
	assert(native->head.type == scmHeadNative1);
	return native->captured;
}

basicBlock1
native1Fn(Obj o) {
	struct scmNative1 *native = ptr(o);
	assert(native->head.type == scmHeadNative1);
	return native->fn;
}

int
native1Required(Obj o) {
	struct scmNative1 *native = ptr(o);
	assert(native->head.type == scmHeadNative1);
	return native->required;
}

Obj
makeVector(int size, int cap) {
	assert(size <= cap);
	struct scmVector *vec = newObj(scmHeadVector,
				       sizeof(struct scmVector) +
				       sizeof(Obj) * cap);
	vec->head.rset = NULL;
	vec->head.inRSet = false;
	vec->size = size;
	vec->cap = cap;
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

/* struct scmContinuation { */
/* 	scmHead head; */
/* 	int len; */
/* 	struct frame data[]; */
/* }; */

Obj
vectorSet(Obj vec, int idx, Obj val) {
	struct scmVector *v = ptr(vec);
	assert(v->head.type == scmHeadVector);
	assert(idx >= 0 && idx < v->size);
	writeBarrierForIncremental(getGC(), &v->data[idx], val);
	writeBarrierForGeneration(getGC(), &v->head, val);
	return vec;
}

int
vectorLength(Obj vec) {
	assert(isvector(vec));
	struct scmVector *v = ptr(vec);
	return v->size;
}

int
vectorCapacity(Obj vec) {
	assert(isvector(vec));
	struct scmVector *v = ptr(vec);
	return v->cap;
}

Obj
vectorAppend(Obj vec, Obj val) {
	assert(isvector(vec));
	struct scmVector *v = ptr(vec);
	if (v->size >= v->cap) {
		assert(v->cap > 0);
		int newCap;
		if (v->cap < 1024) {
			newCap = v->cap * 2;
		} else {
			newCap = v->cap + v->cap / 4;
		}
		Obj tmp = makeVector(v->size, newCap);
		struct scmVector *tmpV = ptr(tmp);
		memcpy(tmpV->data, v->data, v->size * sizeof(Obj));
		// writeBarrier!
		writeBarrierForIncremental(getGC(), &vec, tmp);
		// this seems not required, because tmp->version should always >= val->version?
		/* writeBarrierForGeneration(&v->head, val); */
		v = ptr(tmp);
	}
	v->data[v->size] = val;
	v->size++;
	return ((Obj) (&v->head) | TAG_PTR);
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
	version_t minv = from->head.version;
	for (int i = 0; i < from->size; i++) {
		gcMark(gc, from->data[i], minv);
	}
}

/* Obj */
/* makeContinuation(struct frame *data, int len) { */
/* 	struct scmContinuation *cont = newObj(scmHeadContinuation, */
/* 					      sizeof(struct scmContinuation) + */
/* 					      len * sizeof(struct frame)); */
/* 	for (int i = 0; i < len; i++) { */
/* 		cont->data[i] = data[i]; */
/* 	} */
/* 	cont->len = len; */
/* 	return ((Obj) (&cont->head) | TAG_PTR); */
/* } */

/* struct callStack */
/* contCallStack(Obj cont) { */
/* 	struct scmContinuation *v = ptr(cont); */
/* 	assert(v->head.type == scmHeadContinuation); */
/* 	struct callStack cs; */
/* 	cs.data = v->data; */
/* 	cs.len = v->len; */
/* 	cs.cap = v->len; */
/* 	return cs; */
/* } */

/* void */
/* gcMarkCallStack(struct GC *gc, struct callStack *stack, int minv) { */
/* 	for (int i = 0; i < stack->len; i++) { */
/* 		struct frame *addr = &stack->data[i]; */
/* 		gcMark(gc, addr->stk.stack, minv); */
/* 		Obj *p = (Obj *) bytesData(addr->stk.stack); */
/* 		for (int j = addr->stk.base; j < addr->stk.pos; j++) { */
/* 			gcMark(gc, p[j], minv); */
/* 		} */
/* 		// Don't forget this one! */
/* 		gcMark(gc, addr->frees, minv); */
/* 	} */
/* } */

/* static void */
/* continuationGCFunc(struct GC *gc, void *f) { */
/* 	struct scmContinuation *from = f; */
/* 	version_t minv = from->head.version; */
/* 	struct callStack cs = contCallStack((Obj) (&from->head) | TAG_PTR); */
/* 	gcMarkCallStack(gc, &cs, minv); */
/* } */

static void
symbolGCFunc(struct GC *gc, void *f) {
	struct scmSymbol *from = f;
	version_t minv = from->head.version;
	gcMark(gc, from->value, minv);
}

void
typesInit() {
	gRoot = malloc(sizeof(struct trieNode));
	memset(gRoot, 0, sizeof(struct trieNode));
	gcRegistForType(scmHeadCons, consGCFunc);
	gcRegistForType(scmHeadBytes, bytesGCFunc);
	gcRegistForType(scmHeadVector, vectorGCFunc);
	/* gcRegistForType(scmHeadContinuation, continuationGCFunc); */
	gcRegistForType(scmHeadSymbol, symbolGCFunc);
	gcRegistForType(scmHeadNative1, native1GCFunc);
}
