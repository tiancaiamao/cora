#include "vector.h"
#include "gc.h"
#include "types.h"
#include "reader.h"
#include "trace.h"
#include "runtime.h"
#include "str.h"
#include <unistd.h>
#include <errno.h>
#include <pwd.h>
#include <stdarg.h>
#include <stdint.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <sys/stat.h>

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

void
coraReturnSlowPath(struct Cora *co) {
	assert(vecGet(&co->stk.data, vecLen(&co->stk.data)-1) == co->stk.begin);
	free(co->stk.begin);
	vecSet(&co->stk.data, vecLen(&co->stk.data)-1, NULL);
	co->stk.data.v.len--;

	co->stk.begin = vecGet(&co->stk.data, vecLen(&co->stk.data)-1);
	co->stk.end = co->stk.begin + INIT_STACK_SIZE;

	/* printf("coraReturn after = [%p, %p) sp=%p\n", */
	/*        co->stk.begin, co->stk.end, co->ctx.sp); */

	assert(co->ctx.sp >= co->stk.begin && co->ctx.sp < co->stk.end);
}

extern __thread struct trieNode *gRoot;
 __thread struct Cora *gCo;

static struct Cora *
coraNew() {
	struct Cora *co = malloc(sizeof(struct Cora));
	vecInit(&co->callstack, 64);
	segmentStackInit(&co->stk);
	co->ctx.bp = co->stk.begin;
	co->ctx.sp = co->stk.begin;
	vecInit(&co->trystack, 4);

	co->globals = gRoot;
	gCo = co;
	return co;
}

void
trampoline(struct Cora *co) {
	while(co->ctx.fn != NULL) {
		co->ctx.fn(co, co->ctx.label, co->ctx.bp);
	}
}

void
coraRun(struct Cora *co) {
	struct frame exit = {
		.fn = NULL,
		.label = 0,
		.bp = co->ctx.bp,
		.sp = co->ctx.sp,
	};
	vecAppend(&co->callstack, exit);
	trampoline(co);
}

static void coraDispatch(struct Cora *co, Obj fn, int nargs, Obj* args);

// Usage:
//     Obj args[3] = {arg1, arg2, arg3};
//     coraCall(co, fn, 3, args);
// This funcation will copy args twice, once on C stack for temparary array
// and once after stackAlloc() copy the the frame.
void
coraCall(struct Cora *co, Obj fn, int nargs, Obj *args) {
	struct scmNative* f = mustNative(fn);
	if (f->required != nargs) {
		// curry or partial, goto dispatch function
		coraDispatch(co, fn, nargs, args);
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
			frame[i] = args[i-1];
		}
	}
	// set the new ctx
	co->ctx.fn = f->fn;
	co->ctx.label = 0;
	return;
}

static void
callCurry(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("callCurry");
	Obj fn = R[0];
	int captured = nativeCaptured(fn);
	int nargs = nativeRequired(fn);
	memmove(R + captured, R + 1, nargs * sizeof(Obj));
	memcpy(R, nativeData(fn), captured * sizeof(Obj));
	co->ctx.fn = nativeFn(R[0]);
	co->ctx.label = 0;
}

Obj
makeCurry(Obj fn, int nargs, Obj *args) {
	int sz = sizeof(struct scmNative) + (nargs + 1) * sizeof(Obj);
	struct scmNative *clo = newObj(scmHeadNative, sz);
	clo->fn = callCurry;
	struct scmNative* f = mustNative(fn);
	assert(f->required > nargs);
	clo->nframe = f->nframe;
	clo->required = f->required - nargs;
	clo->captured = nargs + 1;
	// fn + args
	clo->data[0] = fn;
	for (int i = 0; i < nargs; i++) {
		clo->data[i+1] = args[i];
	}
	return ((Obj) (&clo->head) | TAG_PTR);
}

static void
coraDispatch(struct Cora *co, Obj fn, int nargs, Obj* args) {
	struct scmNative *f = mustNative(fn);
	int required = f->required;
	assert(nargs != required);
	if (nargs < required) {
		Obj ret = makeCurry(fn, nargs, args);
		coraReturn(co, ret);
	} else {
		// eval the first call and get the result;
		struct frame ctx = {
			.fn = NULL,
			.bp = co->ctx.bp,
			.sp = co->ctx.sp,
		};
		vecAppend(&co->callstack, ctx);
		Obj *R = stackAlloc(co, f->nframe);
		R[0] = fn;
		for (int i=0; i<required; i++) {
			R[i+1] = args[i];
		}
		co->ctx.fn = f->fn;
		co->ctx.label = 0;
		trampoline(co);

		// make the next call.
		coraCall(co, co->res, nargs - required, args + required);
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

Obj
primIsString(Obj x) {
	if (isBytes(x)) {
		return True;
	} else {
		return False;
	}
}

void
symbolToString(struct Cora *co, int lable, Obj *R) {
	Obj sym = R[1];
	char dest[256];
	symbolStr(sym, dest, 256);
	Obj val = makeCString(dest);
	coraReturn(co, val);
}

void
builtinBytes(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("builtinBytes");
	int n = fixnum(R[1]);
	Obj val = makeBytes(n);
	coraReturn(co, val);
}

static void
builtinBytesLength(struct Cora *co, int label, Obj *R) {
	Obj o = R[1];
	int res = bytesLen(o);
	coraReturn(co, makeNumber(res));
}

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

void
builtinLoadSo(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("builtinLoadSo");
	// (load-so "file-path.so" "package-path")
	Obj filePath = R[1];
	str str = stringStr(filePath);
	char *path = str.str;
	void *handle = dlopen(path, RTLD_LAZY);
	if (!handle) {
		fprintf(stderr, "%s\n", dlerror());
		coraReturn(co, makeNumber(-1));
		return;
	}
	// printf("builtin load so ... dlopen for path %s return handle=%p\n", path, handle);

	basicBlock entry = dlsym(handle, "entry");
	char *error = dlerror();
	if (error != NULL) {
		// TODO
		coraReturn(co, makeString(error, strlen(error)));
		return;
	}
	struct frame exit = {
		.fn = NULL,
		.label = 0,
		.bp = co->ctx.bp,
		.sp = co->ctx.sp,
	};
	vecAppend(&co->callstack, exit);
	entry(co, 0, R);
	trampoline(co);

	coraReturn(co, co->res);
	return;
}

static int
listLen(Obj l) {
	int c = 0;
	while (iscons(l) && l != Nil) {
		c++;
		l = cdr(l);
	}
	return c;
}

static void
builtinApply(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("builtinApply");
	Obj fn = R[1];
	Obj args = R[2];
	int nargs = listLen(args);

	struct scmNative *f = ptr(fn);
	assert(f->head.type == scmHeadNative);
	if (f->required != nargs) {
		// TODO
		assert(false);
	}

	Obj *frame = stackAlloc(co, f->nframe);
	frame[0] = fn;
	int p = 1;
	while (args != Nil) {
		Obj tmp = car(args);
		frame[p++] = tmp;
		args = cdr(args);
	}
	co->ctx.fn = f->fn;
	co->ctx.label = 0;
}

strBuf
getCoraPath() {
	strBuf tmp = strNew(512);
	char *coraPath = getenv("CORAPATH");
	if (coraPath == NULL) {
		struct passwd *pw = getpwuid(getuid());
		char *homeDir = pw->pw_dir;
		tmp = strCpy(tmp, cstr(homeDir));
		tmp = strCat(tmp, S("/.corapath/"));
	} else {
		tmp = strCpy(tmp, cstr(coraPath));
		if (toCStr(tmp)[strLen(toStr(tmp)) - 1] != '/') {
			tmp = strCat(tmp, S("/"));
		}
	}
	return tmp;
}

static int unique = 1;

static void
builtinLoad(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("builtinLoad");
	// (load "file-path.cora")
	Obj filePath = R[1];
	Obj arg1 = filePath;
	str filePathStr = stringStr(filePath);
	const int BUFSIZE = 512;
	char buf[BUFSIZE];
	int cfileidx = unique;
	unique++;
	snprintf(buf, BUFSIZE, "/tmp/cora-xxx-%d.c", cfileidx);
	str tmpCFile = cstr(buf);
	Obj arg2 = makeString(tmpCFile.str, tmpCFile.len);
	Obj fn = globalRef(intern("cora/lib/toc#compile-to-c"));
	coraCall2(co, fn, arg1, arg2);
	coraRun(co);
	// TODO: check res?
	// Obj res = co->args[1];

	strBuf tmp;
	strBuf path = getCoraPath();
	if (strCmp(filePathStr, toStr(path)) > 0) {
		// The cora file is in $CORAPATH, it might be a import package
		tmp = strNew(filePathStr.len - 5 + 3);
		tmp = strCat(tmp, strSub(filePathStr, 0, strLen(filePathStr) - 5));
		tmp = strCat(tmp, S(".so"));
	} else {
		tmp = strNew(30);
		snprintf(toCStr(tmp), 30, "/tmp/cora-xxx-%d.so", cfileidx);
	}

	snprintf(buf, BUFSIZE,
		 "gcc -shared -I%scora/src -I%scora/. -g -fPIC /tmp/cora-xxx-%d.c -o %s -ldl -L%scora/src -lcora",
		 toCStr(path), toCStr(path), cfileidx, toCStr(tmp),
		 toCStr(path));
	strFree(path);
	int exitCode = system(buf);
	if (exitCode != 0) {
		coraReturn(co, makeNumber(exitCode));
		return;
	}

	arg1 = makeCString(toCStr(tmp));
	strFree(tmp);
	arg2 = makeCString("");
	fn = globalRef(intern("load-so"));
	co->ctx.sp = R;
	coraCall2(co, fn, arg1, arg2);
	return;
}

static bool
safeToUseSo(strBuf soFilePath) {
	if (0 != access(toCStr(soFilePath), R_OK)) {
		// .so file not exist?
		return false;
	}

	bool res = true;
	strBuf tmp = strNew(strLen(toStr(soFilePath)) + 3);
	tmp = strCpy(tmp, toStr(soFilePath));
	tmp = strShrink(tmp, 3);
	tmp = strCat(tmp, S(".cora"));
	if (0 != access(toCStr(tmp), R_OK)) {
		// .so file exist and .cora not exist
		goto exit;
	}

	// both .so and .cora file exist, is .so newer than .cora?
	struct stat soFileStat, coraFileStat;
	if (stat(toCStr(tmp), &coraFileStat) < 0) {
		printf("failed to get %s file stats: %s\n", toCStr(tmp), strerror(errno));
		goto exit;
	}
	if (stat(toCStr(soFilePath), &soFileStat) < 0) {
		printf("failed to get %s file stats: %s\n", toCStr(soFilePath), strerror(errno));
		goto exit;
	}
	if (coraFileStat.st_mtime > soFileStat.st_mtime) {
		res = false;
	}
exit:
	strFree(tmp);
	return res;
}

// import do more things than load:
// 1. avoid repeated import for imported libraries
// 2. convert from library path to .cora or .so file
// 3. call load or load-so for the actual work
void
builtinImport(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("builtinImport");
	Obj pkg = R[1];
	str pkgStr = stringStr(pkg);
	Obj sym = intern("cora/init#*imported*");
	Obj imported = symbolGet(sym);

	// Avoid repeated load.
	for (Obj p = imported; p != Nil; p = cdr(p)) {
		Obj elem = car(p);
		if (eq(elem, pkg)) {
			coraReturn(co, sym);
			return;
		}
	}

	// Set the *imported* variable to avoid repeated load.
	primSet(co, sym, cons(pkg, imported));

	// CORA PATH
	strBuf tmp = getCoraPath();
	tmp = strCat(tmp, pkgStr);
	tmp = strCat(tmp, S(".so"));

	// if the .so file exists, call (load-so "$CORAPATH/file-path.so" "package-path")
	if (safeToUseSo(tmp)) {
		// builtinLoadSo is a bit special, it requires the spent stack of VM is
		// (load-so "file-path.so" "package-path")
		Obj arg0 = makeNative(3, builtinLoadSo, 2, 0);
		Obj arg1 = makeString(toCStr(tmp), strLen(toStr(tmp)));
		Obj arg2 = pkg;
		coraCall2(co, arg0, arg1, arg2);
		coraRun(co);
		strFree(tmp);
		coraReturn(co, pkg);
		return;
	}

	// otherwise call (load "$CORAPATH/file.cora")
	tmp = strShrink(tmp, 3);
	tmp = strCat(tmp, S(".cora"));
	str tmp1 = toStr(tmp);

	coraCall2(co, makeNative(3, builtinLoad, 2, 0), makeString(tmp1.str, tmp1.len), pkg);
	strFree(tmp);
}

static void
builtinIsVector(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("builtinIsVector");
	Obj o = R[1];
	if (isvector(o)) {
		coraReturn(co, True);
	} else {
		coraReturn(co, False);
	}
}

static void
builtinVector(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("builtinVector");
	Obj o = R[1];
	int n = fixnum(o);
	Obj res = makeVector(n, n);
	coraReturn(co, res);
}

static void
builtinVectorRef(struct Cora *co, int label, Obj *R) {
	Obj v = R[1];
	Obj idx = R[2];
	coraReturn(co, vectorRef(v, fixnum(idx)));
}

static void
builtinVectorSet(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("builtinVectorSet");
	Obj v = R[1];
	Obj idx = R[2];
	Obj o = R[3];
	coraReturn(co, vectorSet(v, fixnum(idx), o));
}

static void
builtinVectorLength(struct Cora *co, int label, Obj *R) {
	Obj o = R[1];
	int res = vectorLength(o);
	coraReturn(co, makeNumber(res));
}

void
builtinReadFileAsSexp(struct Cora *co, int label, Obj *R) {
	Obj arg = R[1];
	assert(isBytes(arg));
	Obj result = Nil;
	char *fileName = stringStr(arg).str;
	FILE *f = fopen(fileName, "r");
	if (f == NULL) {
		printf("open file fail %s\n", fileName);
		goto exit0;
	}

	int err = 0;
	int count = 0;
	while (true) {
		Obj ast = sexpRead(f, &err);
		if (err != 0) {
			break;
		}
		result = cons(ast, result);
		count++;
	}
	if (count > 1) {
		result = reverse(result);
		result = cons(makeSymbol("begin"), result);
	} else {
		result = car(result);
	}
	fclose(f);

      exit0:
	coraReturn(co, result);
}

static void
builtinStringAppend(struct Cora *co, int label, Obj *R) {
	TRACE_SCOPE("builtinStringAppend");
	Obj str1 = R[1];
	Obj str2 = R[2];
	str x = stringStr(str1);
	str y = stringStr(str2);
	strBuf tmp = strNew(x.len + y.len);
	tmp = strCpy(tmp, x);
	tmp = strCat(tmp, y);
	str s = toStr(tmp);
	Obj val = makeString(s.str, s.len);
	strFree(tmp);
	coraReturn(co, val);
}

static void
builtinSymbolCooked(struct Cora *co, int label, Obj *R) {
	Obj sym = R[1];
	char dst[256];
	symbolStr(sym, dst, 256);
	for (char *s = dst; *s != 0; s++) {
		if (*s == '#') {
			coraReturn(co, True);
			return;
		}
	}
	coraReturn(co, False);
}

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
			struct frame cont = {
				.fn = builtinTryCatch,
				.label = 1,
				.bp = co->ctx.bp,
				.sp = co->ctx.sp,
			};

			struct tryMark mark = {
				.callstackPos = vecLen(&co->callstack),
				.segmentStackPos = vecLen(&co->stk.data) - 1,
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
			co->trystack.v.len--;
			coraReturn(co, co->res);
			return;
		}
	}
}

// scmContinuation is much too implementation dependent, put it here rather than type.c
struct scmContinuation {
	scmHead head;
	vector(Obj*)segstack;
	int len;
	struct frame callstack[];
};

Obj
makeContinuation(struct frame *callstack, int len, Obj** stk, int count) {
	struct scmContinuation *cont = newObj(scmHeadContinuation,
					       sizeof(struct scmContinuation) +
					       len * sizeof(struct frame));
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
continuationGCFunc(struct GC *gc, void *f) {
	struct scmContinuation *from = f;
	version_t minv = from->head.version;
	for (int i = 0; i < from->len; i++) {
		struct frame *addr = &from->callstack[i];
		for (Obj *p = addr->bp; p < addr->sp; p++) {
			gcMark(gc, *p, minv);
		}
	}
}

static void
continuationAsClosure(struct Cora *co, int label, Obj *R) {
	Obj this = R[0];
	Obj contObj = nativeData(this)[0];

	// Don't forget the try mark.
	struct tryMark mark = {
		.callstackPos = vecLen(&co->callstack),
		.segmentStackPos = vecLen(&co->stk.data),
	};
	vecAppend(&co->trystack, mark);

	// Replace the current stack with the delimited continuation.
	struct scmContinuation *cont = (struct scmContinuation*)ptr(contObj);
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
	struct tryMark mark = vecPop(&co->trystack);
	Obj v = R[1];

	// Capture the call stack as continuation.
	Obj cont = makeContinuation(vecRef(&co->callstack, mark.callstackPos),
				     vecLen(&co->callstack) - mark.callstackPos,
				     vecRef(&co->stk.data, mark.segmentStackPos),
				     vecLen(&co->stk.data) - mark.segmentStackPos);

	// Now that we get the spent continuation, disguise as a closure.
	Obj clo = makeNative(2, continuationAsClosure, 1, 1, cont);

	// Find the handler from the try stack, invoke it, passing the continuation.
	struct frame try = vecGet(&co->callstack, mark.callstackPos);
	Obj handler = try.bp[2];

	// Reset to the stack before try.
	for (int i=mark.segmentStackPos; i<vecLen(&co->stk.data); i++) {
		vecSet(&co->stk.data, i, NULL);
	}
	co->stk.data.v.len = mark.segmentStackPos;
	co->stk.begin = vecGet(&co->stk.data, vecLen(&co->stk.data) - 1);
	co->stk.end = co->stk.begin + INIT_STACK_SIZE;
	co->callstack.v.len = mark.callstackPos;

	struct frame beforeTry = vecGet(&co->callstack, vecLen(&co->callstack) - 1);
	co->ctx.bp = beforeTry.bp;
	co->ctx.sp = beforeTry.sp;
	coraCall2(co, handler, v, clo);
}

#ifdef _BOOTSTRAP_TEST_
static int uniqueIdx = 0;
#endif

Obj
primEQ(Obj x, Obj y) {
	return eq(x, y) ? True : False;
}

Obj
primGT(Obj x, Obj y) {
	assert(isfixnum(x));
	assert(isfixnum(y));
	return fixnum(x) > fixnum(y) ? True : False;
}

Obj
primLT(Obj x, Obj y) {
	assert(isfixnum(x));
	assert(isfixnum(y));
	return fixnum(x) < fixnum(y) ? True : False;
}

Obj
primDiv(Obj x, Obj y) {
	if (isfixnum(x) && isfixnum(y)) {
		return makeNumber(x / y);
	} else {
		// TODO
		assert(false);
	}
}

Obj
primAdd(Obj x, Obj y) {
	if (isfixnum(x) && isfixnum(y)) {
		return x + y;
	} else {
		// TODO
		assert(false);
	}
}

Obj
primCons(Obj x, Obj y) {
	return cons(x, y);
}

Obj
primNot(Obj x) {
	if (x == True) {
		return False;
	} else if (x == False) {
		return True;
	} else {
		assert(false);
	}
}

Obj
primCar(Obj x) {
	return car(x);
}

Obj
primCdr(Obj x) {
	assert(iscons(x));
	return cdr(x);
}

Obj
primIsCons(Obj x) {
	if (iscons(x)) {
		return True;
	} else {
		return False;
	}
}

Obj
primSub(Obj x, Obj y) {
	if (isfixnum(x) && isfixnum(y)) {
		return x - y;
	} else {
		// TODO
		assert(false);
	}
}

Obj
primMul(Obj x, Obj y) {
	if (isfixnum(x) && isfixnum(y)) {
		return makeNumber(fixnum(x) * fixnum(y));
	} else {
		// TODO
		assert(false);
	}
}

Obj
primGenSym() {
	// The pointer is uniqueness and can be used as symbol->string
	struct scmSymbol *p = newObj(scmHeadSymbol, sizeof(struct scmSymbol));
	p->head.rset = NULL;
	p->head.inRSet = false;
	p->value = Nil;
#ifdef _BOOTSTRAP_TEST_
	p->unique = uniqueIdx;
	uniqueIdx++;
#endif
	return ((Obj) (&p->head) | TAG_PTR);
}

Obj
primIsSymbol(Obj x) {
	if (issymbol(x)) {
		return True;
	} else {
		return False;
	}
}

static void
applyClosureForEval(struct Cora *co, int label, Obj *R) {
	Obj self = R[0];
	Obj *data = nativeData(self);
	Obj params = data[0];
	Obj body = data[1];
	Obj env = data[2];
	for (int i = 1; params != Nil; i++) {
		Obj var = car(params);
		Obj val = R[i];
		env = cons(cons(var, val), env);
		params = cdr(params);
	}
	co->ctx.sp = R;
	coraCall2(co, globalRef(intern("cora/lib/eval#eval")), body, env);
}

static void
makeClosureForEval(struct Cora *co, int label, Obj *R) {
	Obj params = R[1];
	Obj body = R[2];
	Obj env = R[3];
	int len = listLen(params);
	Obj ret = makeNative(4, applyClosureForEval, len, 3, params, body, env);
	coraReturn(co, ret);
}

static Obj
primVMSymbolForTLS(struct Cora *co) {
	char dest[20];
	int sz = sprintf(dest, "%p", co);
	assert(sz < 20);
	return intern(dest);
}

static void
vmSymbolForTLS(struct Cora *co, int label, Obj *R) {
	Obj ret = primVMSymbolForTLS(co);
	coraReturn(co, ret);
}

void
registerAPI(struct Cora *co, struct registerModule *m, str pkg) {
	if (m->init != NULL) {
		m->init();
	}

	Obj exports = Nil;
	for (int i = 0;; i++) {
		struct registerEntry entry = m->entries[i];
		if (entry.func == NULL) {
			break;
		}

		Obj sym;
		if (strLen(pkg) > 0) {
			strBuf tmp = strDup(pkg);
			tmp = strAppend(tmp, '#');
			tmp = strCat(tmp, cstr(entry.name));
			sym = intern(toCStr(tmp));
			strFree(tmp);
		} else {
			sym = intern(entry.name);
		}
		primSet(co, sym, makeNative(entry.args + 1, entry.func, entry.args, 0));
		exports = cons(intern(entry.name), exports);
	}
	if (strLen(pkg) > 0) {
		strBuf tmp = strDup(pkg);
		tmp = strCat(tmp, S("#*ns-export*"));
		Obj sym = intern(toCStr(tmp));
		strFree(tmp);
		primSet(co, sym, exports);
	}
}

struct Cora *
coraInit(uintptr_t * mark) {
	gcInit(mark);
	typesInit();
	gcRegistForType(scmHeadContinuation, continuationGCFunc);
	symQuote = intern("quote");
	symBackQuote = intern("backquote");
	symUnQuote = intern("unquote");
	struct Cora *co = coraNew();
	primSet(co, intern("symbol->string"),
		makeNative(2, symbolToString, 1, 0));
	primSet(co, intern("intern"),
		makeNative(2, builtinIntern, 1, 0));
	primSet(co, intern("number?"),
		makeNative(2, builtinIsNumber, 1, 0));
	primSet(co, intern("read-file-as-sexp"),
		makeNative(2, builtinReadFileAsSexp, 1, 0));
	primSet(co, intern("string-append"),
		makeNative(3, builtinStringAppend, 2, 0));
	primSet(co, intern("value"),
		makeNative(2, builtinValue, 1, 0));
	primSet(co, intern("value-or"),
		makeNative(3, builtinValueOr, 2, 0));
	primSet(co, intern("apply"),
		makeNative(3, builtinApply, 2, 0));
	primSet(co, intern("load-so"),
		makeNative(3, builtinLoadSo, 2, 0));
	primSet(co, intern("import"),
		makeNative(2, builtinImport, 1, 0));
	primSet(co, intern("load"),
		makeNative(2, builtinLoad, 1, 0));
	primSet(co, intern("vector"),
		makeNative(2, builtinVector, 1, 0));
	primSet(co, intern("vector?"),
		makeNative(2, builtinIsVector, 1, 0));
	primSet(co, intern("vector-set!"),
		makeNative(4, builtinVectorSet, 3, 0));
	primSet(co, intern("vector-ref"),
		makeNative(3, builtinVectorRef, 2, 0));
	primSet(co, intern("vector-length"),
		makeNative(2, builtinVectorLength, 1, 0));
	primSet(co, intern("bytes"),
		makeNative(2, builtinBytes, 1, 0));
	primSet(co, intern("bytes-length"),
		makeNative(2, builtinBytesLength, 1, 0));
	primSet(co, intern("try"),
		makeNative(3, builtinTryCatch, 2, 0));
	primSet(co, intern("throw"),
		makeNative(2, builtinThrow, 1, 0));
	primSet(co, intern("cora/init#*imported*"), Nil);
	primSet(co, intern("symbol-cooked?"),
		makeNative(2, builtinSymbolCooked, 1, 0));
	primSet(co, intern("cora/lib/eval#make-closure-for-eval"),
		makeNative(0, makeClosureForEval, 3, 0));
	primSet(co, intern("cora/lib/sys#vm-symbol-for-tls"),
		makeNative(1, vmSymbolForTLS, 0, 0));
	primSet(co, primVMSymbolForTLS(co), Nil);
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

	// The current frame.
	for (Obj *p = co->ctx.bp; p < co->ctx.sp; p++) {
		gcMark(gc, *p, 0);
	}

	// The res register.
	gcMark(gc, co->res, 0);

	// All call stack frames.
	for (int i = 0; i < vecLen(&co->callstack); i++) {
		struct frame *addr = vecRef(&co->callstack, i);
		for (Obj *p = addr->bp; p < addr->sp; p++) {
			gcMark(gc, *p, 0);
		}
	}
}

void
gcGlobal(struct GC *gc) {
	TRACE_SCOPE("gcGlobal");
	coraGCFunc(gc, gCo);
}


#ifdef ForTest

extern void entry(struct Cora *co, int label, Obj *R);

int
main(int argc, char *argv[]) {
	uintptr_t dummy;
	struct Cora *co = coraInit(&dummy);

	entry(co, 0, NULL);
	coraRun(co);
	printObj(stdout, co->res);
	return 0;
}

#endif
