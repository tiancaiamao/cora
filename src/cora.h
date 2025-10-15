#ifndef CORA_H
#define CORA_H

// This is the external API, for other language calling C as a library.
// It should be used when cora is used as a embedded library.
// Or when writing .so module for cora in other languages.
// The exposed API name should be coraXXX, to avoid conflict with internal API in runtime.h

#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

	typedef struct Cora Cora;
	typedef uintptr_t Obj;

	// Types API
	extern const Obj True;
	extern const Obj False;
	extern const Obj Nil;
	extern const Obj Undef;

	typedef void (*CoraFunc) (Cora *co, int label, Obj *R);

	void* coraMustCObj(Obj o);

	Obj coraMakeNumber(int v);
	bool coraIsNumber(Obj o);

	Obj coraMakeBytes(int len);
	char *coraBytesData(Obj o);
	int coraBytesLen(Obj o);

	Obj coraMakeString(char *s, int len);
	Obj coraMakeCString(char *s);

	Obj coraMakeCons(Obj car, Obj cdr);
	Obj coraCar(Obj o);
	Obj coraCdr(Obj o);

	Obj coraMakeVector(int size, int cap);
	Obj coraVectorRef(Obj vec, int idx);
	Obj coraVectorSet(Obj vec, int idx, Obj val);
	Obj coraVectorAppend(Obj vec, Obj val);
	bool coraIsVector(Obj o);
	int coraVectorLength(Obj vec);

	Obj coraMakeSymbol(const char *s);
	Obj coraSymbolGet(Obj sym);


	// Cora Runtime API
	Cora* coraInit(uintptr_t * mark);

	void coraCall(Cora *co, Obj fn, int nargs, Obj *args);
	void coraReturn(Cora *co, Obj val);
	Obj coraGetResult(Cora *co);

	void coraRun(Cora *co);

	void coraRegisterAPI(Cora *co, char* module, char *name, CoraFunc func, int argc);

	Obj coraPrimSet(Cora *co, Obj key, Obj val);

#ifdef __cplusplus
}
#endif

#endif
