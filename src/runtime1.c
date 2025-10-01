#include "vector.h"
#include "gc.h"
#include "types.h"
#include "reader.h"
#include "trace.h"
#include "runtime1.h"
#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>

const int INIT_STACK_SIZE = 256;

static void
segmentStackAlloc(struct segmentStack *alloc) {
	Obj *fixSized = (Obj*)malloc(sizeof(Obj) * INIT_STACK_SIZE);
	vecAppend(&alloc->data, fixSized);
	alloc->begin = fixSized;
	alloc->end = fixSized + INIT_STACK_SIZE;
}

static void
segmentStackInit(struct segmentStack *alloc) {
	vecInit(&alloc->data, 8);
	segmentStackAlloc(alloc);
}

Obj*
stackAllocSlowPath(struct Cora *co, int n) {
	assert(n < INIT_STACK_SIZE);
	segmentStackAlloc(&co->stk);
	co->ctx.bp = co->stk.begin;
	co->ctx.sp = co->stk.begin + n;
	return co->ctx.bp;
}

extern __thread struct trieNode *gRoot;
 __thread struct Cora *gCo;

static struct Cora *
coraNew() {
	struct Cora *co = malloc(sizeof(struct Cora));
	vecInit(&co->callstack, 64);
	segmentStackInit(&co->stk);
	co->ctx.sp = co->stk.begin;
	vecInit(&co->trystack, 4);

	gCo = co;
	return co;
}

void
trampoline(struct Cora *co) {
	while(co->ctx.fn != NULL) {
		co->ctx.fn(co, co->ctx.label, co->ctx.bp);
	}
}

static void coraDispatch(struct Cora *co, Obj fn, int nargs, va_list ap);

static void
coraCallv(struct Cora *co, Obj fn, int nargs, va_list ap) {
	struct scmNative1* f = mustNative1(fn);
	if (f->required != nargs) {
		// spy or partial, goto dispatch function
		coraDispatch(co, fn, nargs, ap);
		return;
	}
	int nframe = f->nframe;
	assert(nframe >= nargs);
	// prepare for callee's frame
	Obj *frame = stackAlloc(co, nframe);
	// prepare for callee's arguments
	frame[0] = fn;
	if (nargs > 0) {
		for (int i = 1; i <= nargs; i++) {
			frame[i] = va_arg(ap, Obj);
		}
	}
	// set the new ctx
	co->ctx.fn = f->fn;
	co->ctx.label = 0;
	return;
}

void
coraCall(struct Cora *co, Obj fn, int nargs, ...) {
	va_list ap;
	va_start(ap, nargs);
	coraCallv(co, fn, nargs, ap);
	va_end(ap);
}

static void
callCurry(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("callCurry");
	Obj fn = R[0];
	int captured = native1Captured(fn);
	int nargs = native1Required(fn);
	memmove(R + captured, R + 1, nargs * sizeof(Obj));
	memcpy(R, native1Data(fn), captured * sizeof(Obj));
	co->ctx.fn = native1Fn(R[0]);
	co->ctx.label = 0;
}

Obj
makeCurry(Obj fn, int nargs, va_list ap) {
	int sz = sizeof(struct scmNative1) + (nargs + 1) * sizeof(Obj);
	struct scmNative1 *clo = newObj(scmHeadNative1, sz);
	clo->fn = callCurry;
	struct scmNative1* f = mustNative1(fn);
	assert(f->required > nargs);
	clo->nframe = f->nframe;
	clo->required = f->required - nargs;
	clo->captured = nargs + 1;
	// fn + args
	clo->data[0] = fn;
	for (int i = 0; i < nargs; i++) {
		clo->data[i+1] = va_arg(ap, Obj);
	}
	return ((Obj) (&clo->head) | TAG_PTR);
}

static void
coraDispatch(struct Cora *co, Obj fn, int nargs, va_list ap) {
	struct scmNative1 *f = mustNative1(fn);
	int required = f->required;
	if (nargs == required) {
		// TODO?
		assert(false);
	} else if (nargs < required) {
		Obj ret = makeCurry(fn, nargs, ap);
		coraReturn(co, ret);
	} else {
		// eval the first call and get the result;
		struct frame1 ctx = {.fn = NULL};
		vecAppend(&co->callstack, ctx);
		Obj *R = stackAlloc(co, f->nframe);
		R[0] = fn;
		for (int i=0; i<required; i++) {
			R[i+1] = va_arg(ap, Obj);
		}
		co->ctx.fn = f->fn;
		co->ctx.label = 0;
		trampoline(co);

		// make the next call.
		coraCallv(co, co->res, nargs - required, ap);
	}
	return;
}

Obj
primSet(struct Cora *co, Obj key, Obj val) {
	if (tag(key) == TAG_SYMBOL) {
		struct trieNode *s = ptr(key);
		writeBarrierForIncremental(getGC(), &s->value, val);	// s->value = val;
		if (s->next == NULL) {
			s->next = co->globals;
			s->owner = co;
			co->globals = s;
		} else {
			assert(s->owner == co);
		}
	} else if (tag(key) == TAG_PTR &&
		   ((scmHead *) ptr(key))->type == scmHeadSymbol) {
		struct scmSymbol *s = ptr(key);
		writeBarrierForIncremental(getGC(), &s->value, val);
		writeBarrierForGeneration(getGC(), &s->head, val);
	} else {
		assert(false);
	}
	return val;
}

void
builtinBytes(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("builtinBytes");
	int n = fixnum(R[1]);
	Obj val = makeBytes(n);
	coraReturn(co, val);
}

/* static void */
/* builtinBytesLength(struct Cora *co, int label, Obj *R) { */
/* 	Obj o = R[1]; */
/* 	int res = bytesLen(o); */
/* 	coraReturn(co, makeNumber(res)); */
/* } */

void
builtinIntern(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("builtinIntern");
	Obj x = R[1];
	assert(isBytes(x));
	Obj val = intern(stringStr(x).str);
	coraReturn(co, val);
}

void
builtinIsNumber(struct Cora *co, int label, Obj *R) {
	Obj x = R[1];
	if (isfixnum(x)) {
		coraReturn(co, True);
		return;
	}
	if (tag(x) == TAG_PTR) {
		scmHead *h = ptr(x);
		if (h->type == scmHeadNumber) {
			coraReturn(co, True);
			return;
		}
	}
	coraReturn(co, False);
}

void
builtinValue(struct Cora *co, int label, Obj *R) {
	Obj sym = R[1];
	Obj ret;
	if (tag(sym) == TAG_SYMBOL) {
		struct trieNode *s = ptr(sym);
		ret = s->value;
		if (ret == Undef) {
			printf("undefined value: %s\n", s->sym);
			assert(false);
		}
	} else if (tag(sym) == TAG_PTR &&
		   ((scmHead *) ptr(sym))->type == scmHeadSymbol) {
		struct scmSymbol *s = ptr(sym);
		ret = s->value;
		assert(ret != Undef);
	} else {
		assert(false);
	}
	coraReturn(co, ret);
}

void
builtinValueOr(struct Cora *co, int label, Obj *R) {
	Obj sym = R[1];
	Obj ret;
	if (tag(sym) == TAG_SYMBOL) {
		struct trieNode *s = ptr(sym);
		ret = s->value;
	} else if (tag(sym) == TAG_PTR &&
		   ((scmHead *) ptr(sym))->type == scmHeadSymbol) {
		struct scmSymbol *s = ptr(sym);
		ret = s->value;
	} else {
		assert(false);
	}

	if (ret == Undef) {
		coraReturn(co, R[2]);
		return;
	}
	coraReturn(co, ret);
}

/* void */
/* builtinApply(struct Cora *co, int label, Obj *R) { */
/* 	TRACE_SCOPE("builtinApply"); */
/* 	Obj fn = R[1]; */
/* 	Obj args = R[2]; */

/* 	R[0] = fn; */
/* 	int p = 1; */
/* 	while (args != Nil) { */
/* 		Obj tmp = car(args); */
/* 		co->args[p++] = tmp; */
/* 		args = cdr(args); */
/* 	} */
/* 	co->nargs = p; */
/* 	co->ctx.pc.func = coraDispatch; */
/* } */


/* void */
/* builtinLoadSo(struct Cora *co) { */
/* 	TRACE_SCOPE("builtinLoadSo"); */
/* 	// (load-so "file-path.so" "package-path") */
/* 	Obj filePath = co->args[1]; */
/* 	str str = stringStr(filePath); */
/* 	char *path = str.str; */
/* 	void *handle = dlopen(path, RTLD_LAZY); */
/* 	if (!handle) { */
/* 		fprintf(stderr, "%s\n", dlerror()); */
/* 		coraReturn(co, makeNumber(-1)); */
/* 		return; */
/* 	} */
/* 	// printf("builtin load so ... dlopen for path %s return handle=%p\n", path, handle); */

/* 	basicBlock entry = dlsym(handle, "entry"); */
/* 	char *error = dlerror(); */
/* 	if (error != NULL) { */
/* 		// TODO */
/* 		coraReturn(co, makeString(error, strlen(error))); */
/* 		return; */
/* 	} */

/* 	trampoline(co, 0, entry); */

/* 	popStack(co); */
/* 	return; */
/* } */

/* static int unique = 1; */

/* void */
/* builtinLoad(struct Cora *co) { */
/* 	TRACE_SCOPE("builtinLoad"); */
/* 	// (load "file-path.cora") */
/* 	Obj filePath = co->args[1]; */
/* 	co->nargs = 3; */
/* 	co->args[0] = globalRef(intern("cora/lib/toc#compile-to-c")); */
/* 	co->args[1] = filePath; */

/* 	const int BUFSIZE = 512; */
/* 	char buf[BUFSIZE]; */
/* 	int cfileidx = unique; */
/* 	unique++; */
/* 	snprintf(buf, BUFSIZE, "/tmp/cora-xxx-%d.c", cfileidx); */
/* 	str tmpCFile = cstr(buf); */
/* 	co->args[2] = makeString(tmpCFile.str, tmpCFile.len); */
/* 	trampoline(co, 0, coraDispatch); */
/* 	// TODO: check res? */
/* 	// Obj res = co->args[1]; */

/* 	str filePathStr = stringStr(filePath); */
/* 	strBuf tmp; */
/* 	strBuf path = getCoraPath(); */
/* 	if (strCmp(filePathStr, toStr(path)) > 0) { */
/* 		// The cora file is in $CORAPATH, it might be a import package */
/* 		tmp = strNew(filePathStr.len - 5 + 3); */
/* 		tmp = strCat(tmp, strSub(filePathStr, 0, strLen(filePathStr) - 5)); */
/* 		tmp = strCat(tmp, S(".so")); */
/* 	} else { */
/* 		tmp = strNew(30); */
/* 		snprintf(toCStr(tmp), 30, "/tmp/cora-xxx-%d.so", cfileidx); */
/* 	} */

/* 	snprintf(buf, BUFSIZE, */
/* 		 "gcc -shared -I%scora/src -I%scora/. -g -fPIC /tmp/cora-xxx-%d.c -o %s -ldl -L%scora/src -lcora", */
/* 		 toCStr(path), toCStr(path), cfileidx, toCStr(tmp), */
/* 		 toCStr(path)); */
/* 	strFree(path); */
/* 	int exitCode = system(buf); */
/* 	if (exitCode != 0) { */
/* 		coraReturn(co, makeNumber(exitCode)); */
/* 		return; */
/* 	} */

/* 	co->nargs = 3; */
/* 	co->args[1] = makeCString(toCStr(tmp)); */
/* 	co->args[2] = makeCString(""); */
/* 	co->ctx.pc.func = builtinLoadSo; */
/* 	strFree(tmp); */
/* 	return; */
/* } */

// import do more things than load:
// 1. avoid repeated import for imported libraries
// 2. convert from library path to .cora or .so file
// 3. call load or load-so for the actual work
/* void */
/* builtinImport(struct Cora *co) { */
/* 	TRACE_SCOPE("builtinImport"); */
/* 	Obj pkg = co->args[1]; */
/* 	str pkgStr = stringStr(pkg); */
/* 	Obj sym = intern("cora/init#*imported*"); */
/* 	Obj imported = symbolGet(sym); */

/* 	// Avoid repeated load. */
/* 	for (Obj p = imported; p != Nil; p = cdr(p)) { */
/* 		Obj elem = car(p); */
/* 		if (eq(elem, pkg)) { */
/* 			coraReturn(co, sym); */
/* 			return; */
/* 		} */
/* 	} */

/* 	// Set the *imported* variable to avoid repeated load. */
/* 	primSet(co, sym, cons(pkg, imported)); */

/* 	// CORA PATH */
/* 	strBuf tmp = getCoraPath(); */
/* 	tmp = strCat(tmp, pkgStr); */
/* 	tmp = strCat(tmp, S(".so")); */

/* 	// if the .so file exists, call (load-so "$CORAPATH/file-path.so" "package-path") */
/* 	if (safeToUseSo(tmp)) { */
/* 		// primLoadSo is a bit special, it requires the spent stack of VM is */
/* 		// (load-so "file-path.so" "package-path") */
/* 		co->nargs = 3; */
/* 		co->args[0] = makeNative(0, builtinLoadSo, 2, 0); */
/* 		co->args[1] = makeString(toCStr(tmp), strLen(toStr(tmp))); */
/* 		co->args[2] = pkg; */
/* 		trampoline(co, 0, coraDispatch); */
/* 		strFree(tmp); */
/* 		coraReturn(co, pkg); */
/* 		return; */
/* 	} */

/* 	// otherwise call (load "$CORAPATH/file.cora") */
/* 	tmp = strShrink(tmp, 3); */
/* 	tmp = strCat(tmp, S(".cora")); */
/* 	str tmp1 = toStr(tmp); */
/* 	co->nargs = 3; */
/* 	co->args[0] = makeNative(0, builtinLoad, 2, 0); */
/* 	co->args[1] = makeString(tmp1.str, tmp1.len); */
/* 	co->args[2] = pkg; */
/* 	trampoline(co, 0, coraDispatch); */
/* 	strFree(tmp); */
/* 	coraReturn(co, pkg); */
/* } */

/* static void */
/* builtinIsVector(struct Cora *co) { */
/* 	TRACE_SCOPE("builtinIsVector"); */
/* 	Obj o = co->args[1]; */
/* 	if (isvector(o)) { */
/* 		coraReturn(co, True); */
/* 	} else { */
/* 		coraReturn(co, False); */
/* 	} */
/* } */

/* static void */
/* builtinVector(struct Cora *co) { */
/* 	TRACE_SCOPE("builtinVector"); */
/* 	Obj o = co->args[1]; */
/* 	int n = fixnum(o); */
/* 	Obj res = makeVector(n, n); */
/* 	coraReturn(co, res); */
/* } */

/* static void */
/* builtinVectorRef(struct Cora *co) { */
/* 	Obj v = co->args[1]; */
/* 	Obj idx = co->args[2]; */
/* 	coraReturn(co, vectorRef(v, fixnum(idx))); */
/* } */

/* static void */
/* builtinVectorSet(struct Cora *co) { */
/* 	TRACE_SCOPE("builtinVectorSet"); */
/* 	Obj v = co->args[1]; */
/* 	Obj idx = co->args[2]; */
/* 	Obj o = co->args[3]; */
/* 	coraReturn(co, vectorSet(v, fixnum(idx), o)); */
/* } */

/* static void */
/* builtinVectorLength(struct Cora *co) { */
/* 	Obj o = co->args[1]; */
/* 	int res = vectorLength(o); */
/* 	coraReturn(co, makeNumber(res)); */
/* } */

/* void */
/* builtinReadFileAsSexp(struct Cora *co) { */
/* 	Obj arg = co->args[1]; */
/* 	assert(isBytes(arg)); */
/* 	Obj result = Nil; */
/* 	char *fileName = stringStr(arg).str; */
/* 	FILE *f = fopen(fileName, "r"); */
/* 	if (f == NULL) { */
/* 		printf("open file fail %s\n", fileName); */
/* 		goto exit0; */
/* 	} */

/* 	struct SexpReader r = {.co = co }; */
/* 	int err = 0; */
/* 	int count = 0; */
/* 	while (true) { */
/* 		Obj ast = sexpRead(&r, f, &err); */
/* 		if (err != 0) { */
/* 			break; */
/* 		} */
/* 		result = cons(ast, result); */
/* 		count++; */
/* 	} */
/* 	if (count > 1) { */
/* 		result = reverse(result); */
/* 		result = cons(makeSymbol("begin"), result); */
/* 	} else { */
/* 		result = car(result); */
/* 	} */
/* 	fclose(f); */

/*       exit0: */
/* 	coraReturn(co, result); */
/* } */

/* static void */
/* builtinStringAppend(struct Cora *co) { */
/* 	TRACE_SCOPE("builtinStringAppend"); */
/* 	Obj str1 = co->args[1]; */
/* 	Obj str2 = co->args[2]; */
/* 	str x = stringStr(str1); */
/* 	str y = stringStr(str2); */
/* 	strBuf tmp = strNew(x.len + y.len); */
/* 	tmp = strCpy(tmp, x); */
/* 	tmp = strCat(tmp, y); */
/* 	str s = toStr(tmp); */
/* 	Obj val = makeString(s.str, s.len); */
/* 	strFree(tmp); */
/* 	coraReturn(co, val); */
/* } */

/* static void */
/* builtinSymbolCooked(struct Cora *co) { */
/* 	Obj sym = co->args[1]; */
/* 	char dst[256]; */
/* 	symbolStr(sym, dst, 256); */
/* 	for (char *s = dst; *s != 0; s++) { */
/* 		if (*s == '#') { */
/* 			coraReturn(co, True); */
/* 			return; */
/* 		} */
/* 	} */
/* 	coraReturn(co, False); */
/* } */


// (try (lambda () (+ (throw 42) 1))
//      (lambda (v resume) (resume (+ v 66))))
static void
builtinTryCatch(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("builtinTryCatch");

	switch(label) {
	case 0:
		{
			// Conceptually, (try chunk handler), thunk belongs to the try block, while handler does not.
			// In chunk, we can throw twice, they will be handled by the same try, so chunk belongs to the try.
			//     (try (lambda () (begin (throw 1) (throw 2))) (lambda (v k) (k 42)))
			// If we throw in handler however, it's panic in panic and cannot be catch by this try.
			//     (try (lambda () (throw 1)) (lambda (v k) (throw 2)))


			// Prepare a new stack for the chunk to use, segment stack!
			Obj* frame = stackAllocSlowPath(co, 3);

			// Copy the try's frame to the new segment stack, pretend try is called on the new stack
			frame[0] = R[0];
			frame[1] = R[1];
			frame[2] = R[2];
			R = frame;

			// Save the try cont.
			// This save can make the chunk and handler available to the recovering process.
			// Use a call protocol instead of tail call protocol.
			struct frame1 cont = {
				.fn = builtinTryCatch,
				.label = 1,
				.bp = co->ctx.bp,
				.sp = co->ctx.sp,
			};

			struct tryMark mark = {
				.callstackPos = vecLen(&co->callstack),
				.segmentStackPos = vecLen(&co->stk.data),
			};
			vecAppend(&co->trystack, mark);
			vecAppend(&co->callstack, cont);

			// Call the chunk in the new segment stack.
			Obj chunk = R[1];
			coraCall0(co, chunk);
			return;
		}
	case 1:
		{
			// just like non-tail call thunk and after it return here
			// now try itself return
			vecPop(&co->trystack);
			coraReturn(co, co->res);
			return;
		}
	}
}

struct scmContinuation1 {
	scmHead head;
	vector(Obj*)segstack;
	int len;
	struct frame1 callstack[];
};

Obj
makeContinuation1(struct frame1 *callstack, int len, Obj** stk, int count) {
	struct scmContinuation1 *cont = newObj(scmHeadContinuation1,
					       sizeof(struct scmContinuation1) +
					       len * sizeof(struct frame1));
	for (int i = 0; i < len; i++) {
		cont->callstack[i] = callstack[i];
	}
	cont->len = len;

	vecInit(&cont->segstack, 1);
	for (int i=0; i<count; i++) {
		vecAppend(&cont->segstack, stk[i]);
	}

	return ((Obj) (&cont->head) | TAG_PTR);
}

static void
continuation1AsClosure(struct Cora *co, int label, Obj *R) {
	Obj this = R[0];
	Obj contObj = native1Data(this)[0];

	// Replace the current stack with the delimited continuation.
	struct scmContinuation1 *cont = (struct scmContinuation1*)ptr(contObj);
	for (int i = 0; i < cont->len; i++) {
		vecAppend(&co->callstack, cont->callstack[i]);
	}
	for (int i=0; i<vecLen(&cont->segstack); i++) {
		vecAppend(&co->stk.data, vecGet(&cont->segstack, i));
	}
	Obj* stack = vecGet(&co->stk.data, vecLen(&co->stk.data) - 1);
	co->stk.begin = stack;
	co->stk.end = stack + INIT_STACK_SIZE;

	Obj val = R[1];
	coraReturn(co, val);
}

static void
builtinThrow(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("builtinThrow");
	/* struct tryMark mark = vecPop(&co->trystack); */
	struct tryMark mark = vecGet(&co->trystack, vecLen(&co->trystack)-1);
	Obj v = R[1];

	// Capture the call stack as continuation.
	Obj cont = makeContinuation1(vecRef(&co->callstack, mark.callstackPos),
				     vecLen(&co->callstack) - mark.callstackPos,
				     vecRef(&co->stk.data, mark.segmentStackPos),
				     vecLen(&co->stk.data) - mark.segmentStackPos);

	// Now that we get the spent continuation, disguise as a closure.
	Obj clo = makeNative1(2, continuation1AsClosure, 1, 1, cont);

	// Reset to the stack before try.
	for (int i=mark.segmentStackPos; i<vecLen(&co->stk.data); i++) {
		vecSet(&co->stk.data, i, NULL);
	}
	co->stk.data.v.len = mark.segmentStackPos;
	struct frame1 try = vecGet(&co->callstack, mark.callstackPos);
	co->ctx.bp = try.bp;
	co->ctx.sp = try.sp;
	co->callstack.v.len = mark.callstackPos;

	// Find the handler from the try stack, invoke it, passing the continuation.
	Obj handler = try.bp[2];
	coraCall2(co, handler, v, clo);
}

struct Cora *
coraInit(uintptr_t * mark) {
	gcInit(mark);
	typesInit();
	symQuote = intern("quote");
	symBackQuote = intern("backquote");
	symUnQuote = intern("unquote");
	struct Cora *co = coraNew();
	/* primSet(co, intern("symbol->string"), */
	/* 	makeNative1(0, symbolToString, 1, 0)); */
	/* primSet(co, intern("intern"), */
	/* 	makeNative1(0, builtinIntern, 1, 0)); */
	/* primSet(co, intern("number?"), */
	/* 	makeNative1(0, builtinIsNumber, 1, 0)); */
	/* primSet(co, intern("read-file-as-sexp"), */
	/* 	makeNative1(0, builtinReadFileAsSexp, 1, 0)); */
	/* primSet(co, intern("string-append"), */
	/* 	makeNative(0, builtinStringAppend, 2, 0)); */
	/* primSet(co, intern("value"), */
	/* 	makeNative(0, builtinValue, 1, 0)); */
	/* primSet(co, intern("value-or"), */
	/* 	makeNative(0, builtinValueOr, 2, 0)); */
	/* primSet(co, intern("apply"), */
	/* 	makeNative(0, builtinApply, 2, 0)); */
	/* primSet(co, intern("load-so"), */
	/* 	makeNative(0, builtinLoadSo, 2, 0)); */
	/* primSet(co, intern("import"), */
	/* 	makeNative(0, builtinImport, 1, 0)); */
	/* primSet(co, intern("load"), */
	/* 	makeNative(0, builtinLoad, 1, 0)); */
	/* primSet(co, intern("vector"), */
	/* 	makeNative(0, builtinVector, 1, 0)); */
	/* primSet(co, intern("vector?"), */
	/* 	makeNative(0, builtinIsVector, 1, 0)); */
	/* primSet(co, intern("vector-set!"), */
	/* 	makeNative(0, builtinVectorSet, 3, 0)); */
	/* primSet(co, intern("vector-ref"), */
	/* 	makeNative(0, builtinVectorRef, 2, 0)); */
	/* primSet(co, intern("vector-length"), */
	/* 	makeNative(0, builtinVectorLength, 1, 0)); */
	/* primSet(co, intern("bytes"), */
	/* 	makeNative(0, builtinBytes, 1, 0)); */
	/* primSet(co, intern("bytes-length"), */
	/* 	makeNative(0, builtinBytesLength, 1, 0)); */
	primSet(co, intern("try"),
		makeNative1(3, builtinTryCatch, 2, 0));
	primSet(co, intern("throw"),
		makeNative1(2, builtinThrow, 1, 0));
	/* primSet(co, intern("cora/init#*imported*"), Nil); */
	/* primSet(co, intern("symbol-cooked?"), */
	/* 	makeNative(0, builtinSymbolCooked, 1, 0)); */
	/* primSet(co, intern("cora/lib/eval#make-closure-for-eval"), */
	/* 	makeNative(0, makeClosureForEval, 3, 0)); */
	/* primSet(co, intern("cora/lib/sys#vm-symbol-for-tls"), */
	/* 	makeNative(0, vmSymbolForTLS, 0, 0)); */
	/* primSet(co, primVMSymbolForTLS(co), Nil); */
	return co;
}

static void
coraGCFunc(struct GC *gc, struct Cora *co) {
	TRACE_SCOPE("coraGCFunc");
	// The globals
	for (struct trieNode * p = co->globals; p != gRoot; p = p->next) {
		assert(p->owner == co);
		gcMark(gc, p->value, 0);
	}

	// The stack.
	/* gcMark(gc, co->ctx.stk.stack, 0); */
	/* Obj *p = (Obj *) bytesData(co->ctx.stk.stack); */
	/* for (int i = co->ctx.stk.base; i < co->ctx.stk.pos; i++) { */
	/* 	gcMark(gc, p[i], 0); */
	/* } */

	// The res register.
	gcMark(gc, co->res, 0);

	// All call stack frames.
	/* gcMarkCallStack(gc, &co->callstack, 0); */
}

void
gcGlobal(struct GC *gc) {
	TRACE_SCOPE("gcGlobal");
	coraGCFunc(gc, gCo);
}

extern void entry(struct Cora *co);

int main() {
	uintptr_t dummy;
	struct Cora * co = coraInit(&dummy);

	struct frame1 sp = {.fn = NULL};
	vecAppend(&co->callstack, sp);
	entry(co);
	trampoline(co);

	sexpWrite(stdout, co->res);
	printf("\n");
	return 0;
}
