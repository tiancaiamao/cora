#include "reader.h"
#include "runtime.h"
#include "str.h"
#include <stdio.h>
#include <sys/errno.h>

static void
builtinDisplay(struct Cora *co, int label, Obj *R) {
	Obj arg = R[1];
	sexpWrite(stdout, arg);
	coraReturn(co, Nil);
}

static void
builtinOpenOutputFile(struct Cora *co, int label, Obj *R) {
	Obj arg1 = R[1];
	str filePath = stringStr(arg1);
	FILE *f = fopen(filePath.str, "w");
	if (f == NULL) {
		fprintf(stderr, "Failed to open file '%s', err: %s\n", filePath.str, strerror(errno));
	}
	coraReturn(co, makeCObj(f));
	return;
}

static void
builtinCloseOutputFile(Cora *co, int label, Obj *R) {
	Obj arg1 = R[1];
	FILE *f = mustCObj(arg1);
	int ret = fclose(f);
	if (ret != 0) {
		fprintf(stderr, "Failed to close file, err: %s\n", strerror(errno));
	}
	coraReturn(co, makeNumber(ret));
}

static void
ioReadAll(struct Cora *co, int label, Obj *R) {
	Obj arg1 = R[1];
	FILE *f = mustCObj(arg1);

	const int BATCH_SIZE = 64;
	strBuf dest = strNew(128);
	char buf[BATCH_SIZE];
	while (!feof(f)) {
		size_t sz = fread(buf, 1, BATCH_SIZE, f);
		str x = {buf, sz};
		dest = strCat(dest, x);
		if (sz < BATCH_SIZE) {
			break;
		}
	}
	Obj ret = makeString(co->gc, toCStr(dest), strLen(toStr(dest)));
	strFree(dest);
	coraReturn(co, ret);
}

static void
ioCopy(struct Cora *co, int label, Obj *R) {
	Obj from1 = R[1];
	Obj to1 = R[2];
	FILE *from = mustCObj(from1);
	FILE *to = mustCObj(to1);

	const int BATCH_SIZE = 64;
	char buf[BATCH_SIZE];
	while (!feof(from)) {
		size_t sz = fread(buf, 1, BATCH_SIZE, from);
		size_t done = fwrite(buf, 1, sz, to);
		if (sz < BATCH_SIZE) {
			break;
		}
	}
	coraReturn(co, feof(from));
}

static void
ioWrite(struct Cora *co, int label, Obj *R) {
	FILE *to = mustCObj(R[1]);
	Obj from = R[2];
	char *data = bytesData(from);
	int len = bytesLen(from);
	size_t off = 0;
	while (off < len) {
		size_t sz = fwrite(data + off, 1, len - off, to);
		if (sz < 0) {
			coraReturn(co, makeNumber(sz));
			return;
		}
		off += sz;
	}
	coraReturn(co, makeNumber(len));
}

void
entry(struct Cora *co, int label, Obj *R) {
	Obj pkg = R[2];
	char *module = bytesData(pkg);
	coraRegisterAPI(co, module, "display", builtinDisplay, 1);
	coraRegisterAPI(co, module, "open-output-file", builtinOpenOutputFile, 1);
	coraRegisterAPI(co, module, "close-output-file", builtinCloseOutputFile, 1);
	coraRegisterAPI(co, module, "read-all", ioReadAll, 1);
	coraRegisterAPI(co, module, "copy", ioCopy, 2);
	coraRegisterAPI(co, module, "write-bytes", ioWrite, 2);
	coraReturn(co, intern("io"));
}
