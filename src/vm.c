#include "runtime.h"

extern Obj makeClosure(int nargs, int nfrees, Opcode *code, int len);
extern void makeTheCall(struct Cora *vm);

// |--------------|---------|---------|---------|----|
// | OP: 8bit     | A: 8bit | B: 8bit | D: 8bit |    |
// | iconst       | tos     | idx     | idx     |    |
// | local_ref    | tos     | idx     |         |    |
// | global_ref   | tos     | idx     | idx     |    |
// | closure_ref  |         |         |         |    |
// | if_else      | tos     | idx     | idx     |    |
// | make_closure | tos     | nargs   | nfrees  | sz |
// | tail_call    | nargs   | base    | base    |    |
// | exit         | tos     | idx     |         |    |
// | call         |         |         |         |    |
// | primitive    | tos     | idx     |         |    |

enum {
	OP_ICONST,
	OP_LOCAL_REF,
	OP_GLOBAL_REF,
	OP_CLOSURE_REF,
	OP_IF_ELSE,
	OP_MAKE_CLOSURE,
	OP_TAIL_CALL,
	OP_EXIT,
	OP_CALL,
	OP_PRIMITIVE,
} Opcode_op;

#define OP_CODE(op) (uint8_t)((op) & 0xff)
#define OP_A(op) (uint8_t)(((op) >> 8) & 0xff)
#define OP_B(op) (uint8_t)(((op) >> 16) & 0xff)
#define OP_C(op) (uint16_t)(((op) >> 16) & 0xffff) // C = A + B
#define OP_D(op) (uint8_t)(((op) >> 24) & 0xff)

void (*primitive[20])(struct Cora* vm, int tos);

struct codeBuf {
	Opcode *code;
	int len;
	int cap;
};

void
codeToExec(struct codeBuf *buf, Obj sexp) {
	while(sexp != Nil) {
		Obj hd = car(sexp);
		if (makeSymbol("const") == car(hd)) {
			// (const tos idx)
			Obj tos = cadr(hd);
			Obj idx = caddr(hd);
			Opcode op = uint8_t(OP_ICONST) | (8<<fixnum(tos)) | (16<<fixnum(idx));
			buf->code[buf->len++] = op;
		} else if (makeSymbol("exit") == car(hd)) {
			// (const tos idx)
			Obj tos = cadr(hd);
			Obj idx = caddr(hd);
			Opcode op =  uint8_t(OP_EXIT) | (8<<fixnum(tos)) | (16<<fixnum(idx));
			buf->code[buf->len++] = op;
		} else if (makeSymbol("exit") == car(hd)) {
			// (exit tos pc)
			Obj tos = cadr(hd);
			Obj pc = caddr(hd);
			Opcode op =  uint8_t(OP_EXIT) | (8<<fixnum(tos)) | (16<<fixnum(pc));
			buf->code[buf->len++] = op;
		}

		sexp = cdr(sexp);
	}
}

#define DISPATCH() goto *jumptable[OP_CODE(*(++pc))]

Obj* constant;

static void
exec(struct Cora *vm, Opcode *code) {
	static void* jumptable[] = {
		&&op_iconst,
		&&op_local_ref,
		&&op_global_ref,
		&&op_closure_ref,
		&&op_if_else,
		&&op_make_closure,
		&&op_tail_call,
		&&op_exit,
		&&op_call,
		&&op_primitive,
	};

	Opcode *pc = code;
	Obj* R = vm->R;

	DISPATCH();

 op_iconst:
	{
		uint8_t tos = OP_A(*pc);
		uint8_t idx = OP_B(*pc);
		R[tos] = constant[idx];
		DISPATCH();
	}

 op_local_ref:
	{
		uint8_t tos = OP_A(*pc);
		uint8_t idx = OP_B(*pc);
		R[tos] = R[idx];
		DISPATCH();
	}

 op_global_ref:
	{
		uint8_t tos = OP_A(*pc);
		uint16_t idx = OP_C(*pc);
		R[tos] = globalRef(constant[idx]);
		DISPATCH();
	}

 op_closure_ref:
	{

	}

 op_if_else:
	{
		uint8_t tos = OP_A(*pc);
		uint16_t idx = OP_C(*pc);
		if (R[tos] == True) {
			DISPATCH();
		} else if(R[tos] == False) {
			pc += idx;
			DISPATCH();
		} else {
			printf("if condition must be a boolean");
			assert(false);
		}
	}

 op_make_closure:
	{
		uint8_t tos = OP_A(*pc);
		uint8_t nargs = OP_B(*pc);
		uint8_t nfrees = OP_D(*pc);
		pc++;
		uint32_t sz = *((uint32_t*)pc);
		R[tos] = makeClosure(nargs, nfrees, code, 0);
		DISPATCH();
	}

 op_tail_call:
	{
		uint8_t base = OP_A(*pc);
		uint16_t nargs = OP_B(*pc);
		pc += sizeof(uint32_t);
		if (base > 0) {
			memcpy(R, R+base, sizeof(Obj) * nargs);
		}
		makeTheCall(vm);
	}

 op_call:
	{
		/* append(&vm->callstack, struct frame{ */
		/* 		/\* .pc =  *\/ */
		/* 		.base = R, */
		/* 	}); */
		/* makeTheCall(vm); */
	}

 op_primitive:
	{
		uint8_t tos = OP_A(*pc);
		uint8_t idx = OP_B(*pc);
		primitive[idx](vm, tos);
	}

 op_exit:
	{
		uint8_t tos = OP_A(*pc);
		uint16_t idx = OP_C(*pc);
		R[0] = R[tos];
		/* struct frame addr = popstack(vm->callstack); */
		/* vm.R = addr.base; */
		/* vm.next = addr.pc; */
		return;
	}
}

static void
evalByteCode(struct Cora *co) {
	exec(co, co->pc);
}

int main() {
	uintptr_t dummy;
	struct Cora* co = coraInit(&dummy);

	struct SexpReader r = { .co = co};
	int errCode = 0;

	struct codeBuf buf;
	for (int i=0; ; i++) {
		printf("%d #> ", i);

		Obj exp = sexpRead(&r, stdin, &errCode);
		if (errCode != 0) {
			break;
		}

		codeToExec(&buf, exp);
		co->pc = buf.code;
		trampoline(co, 0, evalByteCode);

		sexpWrite(stdout, co->args[1]);
		printf("\n");
	}
}

