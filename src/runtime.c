#include <sys/types.h>
#include <unistd.h>
#include <pwd.h>
#include <errno.h>
#include <dlfcn.h>
#include <stdio.h>
#include <sys/stat.h>
#include <inttypes.h>
#include "runtime.h"
#include "str.h"
#include "gc.h"
#include "trace.h"

const int INIT_STACK_SIZE = 254;

void
pushContRaw(char* file, int line, struct Cora *co, int label, basicBlock cb, int nstack, ...) {
	struct callStack *cs = &co->callstack;
	if (unlikely(cs->len >= cs->cap)) {
		growCallStack(cs);
	}

	struct frame *addr = &cs->data[cs->len];
	addr->frees = co->ctx.frees;
	addr->pc.func = cb;
	addr->pc.label = label;
	addr->debugFile = file;
	addr->debugLine = line;

	// Use segment stack
	if (unlikely(co->ctx.stk.pos + nstack >= INIT_STACK_SIZE)) {
		co->ctx.stk.stack = makeBytes(sizeof(Obj) * INIT_STACK_SIZE);
		co->ctx.stk.base = 0;
		co->ctx.stk.pos = 0;
	}

	addr->stk.stack = co->ctx.stk.stack;
	addr->stk.base = co->ctx.stk.base;
	addr->stk.pos = co->ctx.stk.base + nstack;
	cs->len++;

	if (nstack > 0) {
		Obj *p = (Obj *) bytesData(addr->stk.stack);
		va_list ap;
		va_start(ap, nstack);
		for (int i = 0; i < nstack; i++) {
			p[addr->stk.base + i] = va_arg(ap, Obj);
		}
		va_end(ap);
	}
	co->ctx.stk.base = addr->stk.pos;
	co->ctx.stk.pos = addr->stk.pos;
}

static inline void
popStack(struct Cora *co) {
	co->ctx = co->callstack.data[--co->callstack.len];
	return;
}

static void
callCurry(struct Cora *co) {
	TRACE_SCOPE("callCurry");
	Obj fn = co->args[0];
	int captured = nativeCaptured(fn);
	memmove(co->args + captured, co->args + 1,
		(co->nargs - 1) * sizeof(Obj));
	memcpy(co->args, nativeData(fn), captured * sizeof(Obj));
	co->nargs = co->nargs + captured - 1;
	co->ctx.pc.func = coraDispatch;
}

Obj
makeCurry(int required, int captured, Obj * data) {
	TRACE_SCOPE("makeCurry");
	int sz = sizeof(struct scmNative) + captured * sizeof(Obj);
	struct scmNative *clo = newObj(scmHeadNative, sz);
	clo->code.func = callCurry;
	clo->required = required;
	clo->captured = captured;
	memcpy(clo->data, data, captured * sizeof(Obj));
	return ((Obj) (&clo->head) | TAG_PTR);
}

void
coraDispatch(struct Cora *co) {
	Obj fn = co->args[0];
	int required = nativeRequired(co->args[0]);
	if (co->nargs == required + 1) {
		co->ctx.pc = *nativeFuncPtr(fn);
		co->ctx.frees = fn;
	} else if (co->nargs < required + 1) {
		Obj ret = makeCurry(required + 1 - co->nargs, co->nargs,
				    co->args);
		coraReturn(co, ret);
	} else {
		// save the extra args.
		int cnt = co->nargs - (required + 1);
		int sz = sizeof(Obj) * cnt;
		Obj *save = alloca(sz);
		memcpy(save, co->args + required + 1, sz);
		// eval the first call and get the result;
		co->nargs = required + 1;
		trampoline(co, co->ctx.pc.label, co->ctx.pc.func);
		// recover args and make the next call.
		co->args[0] = co->args[1];
		memcpy(co->args + 1, save, sz);
		co->nargs = cnt + 1;
		co->ctx.pc.func = coraDispatch;
	}
	return;
}

void
coraReturn(struct Cora *co, Obj val) {
	co->nargs = 2;
	co->args[1] = val;
	popStack(co);
}

Obj
coraGet(struct Cora *co, int idx) {
	return co->args[idx];
}

extern __thread struct trieNode *gRoot;
 __thread struct Cora *gCo;

static struct Cora *
coraNew() {
	struct Cora *co = malloc(sizeof(struct Cora));
	co->ctx.stk.stack = makeBytes(sizeof(Obj) * INIT_STACK_SIZE);
	co->ctx.stk.base = 0;

	co->callstack.data = malloc(64 * sizeof(struct frame));
	co->callstack.len = 0;
	co->callstack.cap = 64;

	co->globals = gRoot;

	gCo = co;

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
	gcMark(gc, co->ctx.stk.stack, 0);
	Obj *p = (Obj *) bytesData(co->ctx.stk.stack);
	for (int i = co->ctx.stk.base; i < co->ctx.stk.pos; i++) {
		gcMark(gc, p[i], 0);
	}
	// The args.
	for (int i = 0; i < co->nargs; i++) {
		gcMark(gc, co->args[i], 0);
	}

	// Closure register.
	gcMark(gc, co->ctx.frees, 0);

	// All call stack frames.
	gcMarkCallStack(gc, &co->callstack, 0);
}

void
gcGlobal(struct GC *gc) {
	TRACE_SCOPE("gcGlobal");
	coraGCFunc(gc, gCo);
}

void
trampoline(struct Cora *co, int label, basicBlock pc) {
	pushCont(co, label, NULL, 0);
	co->ctx.pc.func = pc;
	co->ctx.pc.label = label;
	while (co->ctx.pc.func != NULL) {
		co->ctx.pc.func(co);
	}
}

Obj
closureRef(struct Cora *co, int idx) {
	struct scmNative *ntv = mustNative(co->ctx.frees);
	assert(ntv->captured > idx);
	return ntv->data[idx];
}

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

#ifdef _BOOTSTRAP_TEST_
static int uniqueIdx = 0;
#endif

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

Obj
primIsNumber(Obj x) {
	if (isNumber(x)) {
		return True;
	} else {
		return False;
	}
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
symbolToString(struct Cora *co) {
	Obj sym = co->args[1];
	char dest[256];
	symbolStr(sym, dest, 256);
	Obj val = makeCString(dest);
	coraReturn(co, val);
}

void
builtinBytes(struct Cora *co) {
	TRACE_SCOPE("builtinBytes");
	int n = fixnum(co->args[1]);
	Obj val = makeBytes(n);
	coraReturn(co, val);
}

static void
builtinBytesLength(struct Cora *co) {
	Obj o = co->args[1];
	int res = bytesLen(o);
	coraReturn(co, makeNumber(res));
}

static void
tryStackMark(struct Cora *co) {
	popStack(co);
}

// (try (lambda () (+ (throw 42) 1))
//      (lambda (v resume) (resume (+ v 66))))
void
builtinTryCatch(struct Cora *co) {
	TRACE_SCOPE("builtinTryCatch");
	Obj chunk = co->args[1];
	Obj handler = co->args[2];

	// Conceptually, (try chunk handler), thunk belongs to the try block, while handler does not.
	// In chunk, we can throw twice, they will be handled by the same try, so chunk belongs to the try.
	//     (try (lambda () (begin (throw 1) (throw 2))) (lambda (v k) (k 42)))
	// If we throw in handler however, it's panic in panic and cannot be catch by this try.
	//     (try (lambda () (throw 1)) (lambda (v k) (throw 2)))

	// Prepare a new stack for the chunk to run, segment stack!
	co->ctx.stk.stack = makeBytes(sizeof(Obj) * INIT_STACK_SIZE);
	co->ctx.stk.base = 0;

	// Save the old cont.
	// This save can make the chunk and handler available to the recovering process.
	// Use a call protocol instead of tail call protocol.
	pushCont(co, 0, tryStackMark, 1, handler);

	// Call the chunk.
	co->nargs = 1;
	co->args[0] = chunk;
	co->ctx.pc.func = coraDispatch;
}

static int
findTryMark(struct Cora *co) {
	int p = co->callstack.len - 1;
	for (; p >= 0; p--) {
		struct frame *addr = &co->callstack.data[p];
		if (addr->pc.func == tryStackMark) {
			break;
		}
	}
	if (p < 0) {
		// TODO: panic, not in any try-catch block!
		printf("panic, not in any try-catch block!\n");
		assert(false);
	}
	return p;
}

static void
continuationAsClosure(struct Cora *co) {
	Obj this = co->args[0];
	Obj cont = nativeData(this)[0];

	// Replace the current stack with the delimited continuation.
	struct callStack *to = &co->callstack;
	struct callStack cs = contCallStack(cont);
	for (int i = 0; i < cs.len; i++) {
		if (to->len + 1 >= to->cap) {
			growCallStack(to);
		}
		to->data[to->len++] = cs.data[i];
	}
	Obj val = co->args[1];
	coraReturn(co, val);
}

void
builtinThrow(struct Cora *co) {
	TRACE_SCOPE("builtinThrow");
	int p = findTryMark(co);
	Obj v = co->args[1];

	// Now p point to the try-marked stack.
	struct frame *try = &co->callstack.data[p];
	assert(try->stk.base == 0);

	// Capture the call stack as continuation.
	Obj cont = makeContinuation(&co->callstack.data[p],
				    co->callstack.len - p);

	// Now that we get the current continuation, disguise as a closure.
	Obj clo = makeNative(0, continuationAsClosure, 1, 1, cont);

	// Reset to the stack before try.
	co->callstack.len = p;
	struct frame *addr = &co->callstack.data[p - 1];
	co->ctx.stk = addr->stk;

	// Find the handler, invoke it, passing the continuation.
	Obj *stk = (Obj *) bytesData(try->stk.stack);
	Obj handler = stk[try->stk.base];

	co->nargs = 3;
	co->args[0] = handler;
	co->args[1] = v;
	co->args[2] = clo;
	co->ctx.pc.func = coraDispatch;
}

void
builtinIntern(struct Cora *co) {
	TRACE_SCOPE("builtinIntern");
	Obj x = co->args[1];
	assert(isBytes(x));
	Obj val = intern(stringStr(x).str);
	coraReturn(co, val);
}

void
builtinIsNumber(struct Cora *co) {
	Obj x = co->args[1];
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
builtinValue(struct Cora *co) {
	Obj sym = co->args[1];
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
builtinValueOr(struct Cora *co) {
	Obj sym = co->args[1];
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
		coraReturn(co, co->args[2]);
		return;
	}
	coraReturn(co, ret);
}

void
builtinApply(struct Cora *co) {
	TRACE_SCOPE("builtinApply");
	Obj fn = co->args[1];
	Obj args = co->args[2];

	co->args[0] = fn;
	int p = 1;
	while (args != Nil) {
		Obj tmp = car(args);
		co->args[p++] = tmp;
		args = cdr(args);
	}
	co->nargs = p;
	co->ctx.pc.func = coraDispatch;
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

void
builtinLoadSo(struct Cora *co) {
	TRACE_SCOPE("builtinLoadSo");
	// (load-so "file-path.so" "package-path")
	Obj filePath = co->args[1];
	str str = stringStr(filePath);
	char *path = str.str;
	void *handle = dlopen(path, RTLD_LAZY);
	if (!handle) {
		fprintf(stderr, "%s\n", dlerror());
		coraReturn(co, makeNumber(-1));
		return;
	}

	basicBlock entry = dlsym(handle, "entry");
	char *error = dlerror();
	if (error != NULL) {
		// TODO
		coraReturn(co, makeString(error, strlen(error)));
		return;
	}

	trampoline(co, 0, entry);

	popStack(co);
	return;
}

static int unique = 1;

void
builtinLoad(struct Cora *co) {
	TRACE_SCOPE("builtinLoad");
	// (load "file-path.cora")
	Obj filePath = co->args[1];
	co->nargs = 3;
	co->args[0] = globalRef(intern("cora/lib/toc#compile-to-c"));
	co->args[1] = filePath;

	const int BUFSIZE = 512;
	char buf[BUFSIZE];
	int cfileidx = unique;
	unique++;
	snprintf(buf, BUFSIZE, "/tmp/cora-xxx-%d.c", cfileidx);
	str tmpCFile = cstr(buf);
	co->args[2] = makeString(tmpCFile.str, tmpCFile.len);
	trampoline(co, 0, coraDispatch);
	// TODO: check res?
	// Obj res = co->args[1];

	str filePathStr = stringStr(filePath);
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

	co->nargs = 3;
	co->args[1] = makeCString(toCStr(tmp));
	co->args[2] = makeCString("");
	co->ctx.pc.func = builtinLoadSo;
	strFree(tmp);
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
builtinImport(struct Cora *co) {
	TRACE_SCOPE("builtinImport");
	Obj pkg = co->args[1];
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
		// primLoadSo is a bit special, it requires the current stack of VM is
		// (load-so "file-path.so" "package-path")
		co->nargs = 3;
		co->args[0] = makeNative(0, builtinLoadSo, 2, 0);
		co->args[1] = makeString(toCStr(tmp), strLen(toStr(tmp)));
		co->args[2] = pkg;
		trampoline(co, 0, coraDispatch);
		strFree(tmp);
		coraReturn(co, pkg);
		return;
	}

	// otherwise call (load "$CORAPATH/file.cora")
	tmp = strShrink(tmp, 3);
	tmp = strCat(tmp, S(".cora"));
	str tmp1 = toStr(tmp);
	co->nargs = 3;
	co->args[0] = makeNative(0, builtinLoad, 2, 0);
	co->args[1] = makeString(tmp1.str, tmp1.len);
	co->args[2] = pkg;
	trampoline(co, 0, coraDispatch);
	strFree(tmp);
	coraReturn(co, pkg);
}

static void
builtinIsVector(struct Cora *co) {
	TRACE_SCOPE("builtinIsVector");
	Obj o = co->args[1];
	if (isvector(o)) {
		coraReturn(co, True);
	} else {
		coraReturn(co, False);
	}
}

static void
builtinVector(struct Cora *co) {
	TRACE_SCOPE("builtinVector");
	Obj o = co->args[1];
	int n = fixnum(o);
	Obj res = makeVector(n, n);
	coraReturn(co, res);
}

static void
builtinVectorRef(struct Cora *co) {
	Obj v = co->args[1];
	Obj idx = co->args[2];
	coraReturn(co, vectorRef(v, fixnum(idx)));
}

static void
builtinVectorSet(struct Cora *co) {
	TRACE_SCOPE("builtinVectorSet");
	Obj v = co->args[1];
	Obj idx = co->args[2];
	Obj o = co->args[3];
	coraReturn(co, vectorSet(v, fixnum(idx), o));
}

static void
builtinVectorLength(struct Cora *co) {
	Obj o = co->args[1];
	int res = vectorLength(o);
	coraReturn(co, makeNumber(res));
}

void
builtinReadFileAsSexp(struct Cora *co) {
	Obj arg = co->args[1];
	assert(isBytes(arg));
	Obj result = Nil;
	char *fileName = stringStr(arg).str;
	FILE *f = fopen(fileName, "r");
	if (f == NULL) {
		printf("open file fail %s\n", fileName);
		goto exit0;
	}

	struct SexpReader r = {.co = co };
	int err = 0;
	int count = 0;
	while (true) {
		Obj ast = sexpRead(&r, f, &err);
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
builtinStringAppend(struct Cora *co) {
	TRACE_SCOPE("builtinStringAppend");
	Obj str1 = co->args[1];
	Obj str2 = co->args[2];
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
builtinSymbolCooked(struct Cora *co) {
	Obj sym = co->args[1];
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

static void
applyClosureForEval(struct Cora *co) {
	Obj self = co->args[0];
	Obj *data = nativeData(self);
	Obj params = data[0];
	Obj body = data[1];
	Obj env = data[2];
	for (int i = 1; params != Nil; i++) {
		Obj var = car(params);
		Obj val = co->args[i];
		env = cons(cons(var, val), env);
		params = cdr(params);
	}
	co->nargs = 3;
	co->args[0] = globalRef(intern("cora/lib/eval#eval"));
	co->args[1] = body;
	co->args[2] = env;
	co->ctx.pc.func = coraDispatch;
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
makeClosureForEval(struct Cora *co) {
	Obj params = co->args[1];
	Obj body = co->args[2];
	Obj env = co->args[3];
	int len = listLen(params);
	Obj ret =
		makeNative(0, applyClosureForEval, len, 3, params, body, env);
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
vmSymbolForTLS(struct Cora *co) {
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
		primSet(co, sym, makeNative(0, entry.func, entry.args, 0));
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
	symQuote = intern("quote");
	symBackQuote = intern("backquote");
	symUnQuote = intern("unquote");
	struct Cora *co = coraNew();
	primSet(co, intern("symbol->string"),
		makeNative(0, symbolToString, 1, 0));
	primSet(co, intern("intern"),
		makeNative(0, builtinIntern, 1, 0));
	primSet(co, intern("number?"),
		makeNative(0, builtinIsNumber, 1, 0));
	primSet(co, intern("read-file-as-sexp"),
		makeNative(0, builtinReadFileAsSexp, 1, 0));
	primSet(co, intern("string-append"),
		makeNative(0, builtinStringAppend, 2, 0));
	primSet(co, intern("value"),
		makeNative(0, builtinValue, 1, 0));
	primSet(co, intern("value-or"),
		makeNative(0, builtinValueOr, 2, 0));
	primSet(co, intern("apply"),
		makeNative(0, builtinApply, 2, 0));
	primSet(co, intern("load-so"),
		makeNative(0, builtinLoadSo, 2, 0));
	primSet(co, intern("import"),
		makeNative(0, builtinImport, 1, 0));
	primSet(co, intern("load"),
		makeNative(0, builtinLoad, 1, 0));
	primSet(co, intern("vector"),
		makeNative(0, builtinVector, 1, 0));
	primSet(co, intern("vector?"),
		makeNative(0, builtinIsVector, 1, 0));
	primSet(co, intern("vector-set!"),
		makeNative(0, builtinVectorSet, 3, 0));
	primSet(co, intern("vector-ref"),
		makeNative(0, builtinVectorRef, 2, 0));
	primSet(co, intern("vector-length"),
		makeNative(0, builtinVectorLength, 1, 0));
	primSet(co, intern("bytes"),
		makeNative(0, builtinBytes, 1, 0));
	primSet(co, intern("bytes-length"),
		makeNative(0, builtinBytesLength, 1, 0));
	primSet(co, intern("try"),
		makeNative(0, builtinTryCatch, 2, 0));
	primSet(co, intern("throw"),
		makeNative(0, builtinThrow, 1, 0));
	primSet(co, intern("cora/init#*imported*"), Nil);
	primSet(co, intern("symbol-cooked?"),
		makeNative(0, builtinSymbolCooked, 1, 0));
	primSet(co, intern("cora/lib/eval#make-closure-for-eval"),
		makeNative(0, makeClosureForEval, 3, 0));
	primSet(co, intern("cora/lib/sys#vm-symbol-for-tls"),
		makeNative(0, vmSymbolForTLS, 0, 0));
	primSet(co, primVMSymbolForTLS(co), Nil);
	return co;
}

void
coraExit(struct Cora *co) {
	// TODO
	// release GC
	// release event loop
	// release scheduler
	// release packages
	// release symbol table

	// release cora struct
	free(co);
}

#ifdef ForTest

extern void entry(struct Cora *co);

int
main(int argc, char *argv[]) {
	uintptr_t dummy;
	struct Cora *co = coraInit(&dummy);
	trampoline(co, 0, entry);
	printObj(stdout, co->args[1]);
	return 0;
}

#endif
