#include "cora.h"
#include "reader.h"

extern void entry(Cora *co, int label, Obj *R);

int
main(int argc, char *argv[]) {
	Cora *co = coraInit();
	entry(co, 0, NULL);
	coraRun(co);
	printObj(stdout, coraGetResult(co));
	return 0;
}
