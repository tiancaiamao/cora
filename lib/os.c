#include "runtime.h"
#include "str.h"
#include "types.h"
#include <stdlib.h>
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

void
entry(struct Cora *co, int label, Obj *R) {
	Obj pkg = R[2];
	str module = stringStr(pkg);
	coraRegisterAPI(co, module.str, "exec", exec, 1);
	coraRegisterAPI(co, module.str, "popen", popenFn, 2);
	coraRegisterAPI(co, module.str, "pclose", pcloseFn, 1);
	coraReturn(co, intern("os"));
}
