#include "runtime.h"
#include "str.h"
#include "types.h"
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

static strBuf
cmdListStr(Obj args) {
	strBuf cmd = strNew(64);
	while (args != Nil) {
		Obj tmp = car(args);
		str s = stringStr(tmp);
		cmd = strCat(cmd, s);
		cmd = strCat(cmd, cstr(" "));
		args = cdr(args);
	}
	return cmd;
}

static void
exec(struct Cora *co, int label, Obj *R) {
	Obj args = R[1];
	strBuf cmd = cmdListStr(args);
	int exitCode = system(toCStr(cmd));
	strFree(cmd);
	coraReturn(co, makeNumber(exitCode));
}

static void
popenFn(struct Cora *co, int label, Obj *R) {
	Obj cmd = R[1];
	Obj mode = R[2];
	char type[256];
	symbolStr(mode, type, 256);

	strBuf cmdStr = cmdListStr(cmd);
	FILE *f = popen(toCStr(cmdStr), type);
	strFree(cmdStr);
	coraReturn(co, makeCObj(f));
	return;
}

static void
pcloseFn(struct Cora *co, int label, Obj *R) {
	Obj arg = R[1];
	FILE *f = mustCObj(arg);
	int res = pclose(f);
	coraReturn(co, res);
}

// File system operations

static void
fileExists(struct Cora *co, int label, Obj *R) {
	Obj path = R[1];
	str filePath = stringStr(path);
	struct stat st;
	int exists = (stat(filePath.str, &st) == 0);
	coraReturn(co, exists ? True : False);
}

static void
fileIsDirectory(struct Cora *co, int label, Obj *R) {
	Obj path = R[1];
	str filePath = stringStr(path);
	struct stat st;
	if (stat(filePath.str, &st) != 0) {
		coraReturn(co, False);
		return;
	}
	coraReturn(co, S_ISDIR(st.st_mode) ? True : False);
}

static void
fileReadAll(struct Cora *co, int label, Obj *R) {
	Obj path = R[1];
	str filePath = stringStr(path);

	FILE *f = fopen(filePath.str, "rb");
	if (f == NULL) {
		coraReturn(co, makeString(co->gc, "", 0));
		return;
	}

	// Get file size
	fseek(f, 0, SEEK_END);
	long size = ftell(f);
	fseek(f, 0, SEEK_SET);

	// Read entire file
	char *buf = malloc(size + 1);
	if (buf == NULL) {
		fclose(f);
		coraReturn(co, makeString(co->gc, "", 0));
		return;
	}

	size_t read = fread(buf, 1, size, f);
	fclose(f);

	Obj result = makeString(co->gc, buf, read);
	free(buf);
	coraReturn(co, result);
}

static void
fileWriteAll(struct Cora *co, int label, Obj *R) {
	Obj path = R[1];
	Obj content = R[2];
	str filePath = stringStr(path);
	char *data = bytesData(content);
	int len = bytesLen(content);

	FILE *f = fopen(filePath.str, "wb");
	if (f == NULL) {
		coraReturn(co, makeNumber(-1));
		return;
	}

	size_t written = fwrite(data, 1, len, f);
	fclose(f);

	coraReturn(co, makeNumber(written));
}

static void
deleteFile(struct Cora *co, int label, Obj *R) {
	Obj path = R[1];
	str filePath = stringStr(path);
	int result = unlink(filePath.str);
	coraReturn(co, makeNumber(result));
}

static void
createDirectory(struct Cora *co, int label, Obj *R) {
	Obj path = R[1];
	str filePath = stringStr(path);
	int result = mkdir(filePath.str, 0755);
	coraReturn(co, makeNumber(result));
}

static void
listDirectory(struct Cora *co, int label, Obj *R) {
	Obj path = R[1];
	str filePath = stringStr(path);

	DIR *dir = opendir(filePath.str);
	if (dir == NULL) {
		coraReturn(co, Nil);
		return;
	}

	Obj result = Nil;
	struct dirent *entry;
	while ((entry = readdir(dir)) != NULL) {
		// Skip . and ..
		if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
			continue;
		}
		Obj name = makeString(co->gc, entry->d_name, strlen(entry->d_name));
		result = makeCons(co->gc, name, result);
	}
	closedir(dir);

	// Reverse to maintain order
	result = reverse(co->gc, result);
	coraReturn(co, result);
}

void
entry(struct Cora *co, int label, Obj *R) {
	Obj pkg = R[2];
	str module = stringStr(pkg);
	coraRegisterAPI(co, module.str, "exec", exec, 1);
	coraRegisterAPI(co, module.str, "popen", popenFn, 2);
	coraRegisterAPI(co, module.str, "pclose", pcloseFn, 1);
	// File system operations
	coraRegisterAPI(co, module.str, "file-exists?", fileExists, 1);
	coraRegisterAPI(co, module.str, "file-is-directory?", fileIsDirectory, 1);
	coraRegisterAPI(co, module.str, "file-read-all", fileReadAll, 1);
	coraRegisterAPI(co, module.str, "file-write-all", fileWriteAll, 2);
	coraRegisterAPI(co, module.str, "delete-file", deleteFile, 1);
	coraRegisterAPI(co, module.str, "create-directory", createDirectory, 1);
	coraRegisterAPI(co, module.str, "list-directory", listDirectory, 1);
	coraReturn(co, intern("os"));
}
