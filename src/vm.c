#include "runtime.h"
#include "vector.h"

static void exec(struct Cora *co);

static Obj
makeClosure(int nargs, Opcode *code, int len, constantTable tbl) {
	Obj ret = makeNative(0, exec, nargs, 0);
	struct scmNative* n = mustNative(ret);
	n->code.data.v.opcode = code;
	n->code.data.v.constant = tbl;
	return ret;
}

enum {
	OP_CONST,
	OP_LOCAL_REF,
	OP_GLOBAL_REF,
	OP_CLOSURE_REF,
	OP_IF_ELSE,
	OP_MAKE_CLOSURE,
	OP_TAIL_CALL,
	OP_EXIT,
	OP_CALL,
	OP_PRIMITIVE_ADD,
	OP_PRIMITIVE_SUB,
	OP_PRIMITIVE_MUL,
	OP_PRIMITIVE_EQ,
	OP_PRIMITIVE_LT,
	OP_PRIMITIVE_SET,
} Opcode_op;

#define OP_CODE(op) (uint8_t)((op) & 0xff)
#define OP_A(op) (uint8_t)(((op) >> 8) & 0xff)
#define OP_B(op) (uint8_t)(((op) >> 16) & 0xff)
#define OP_C(op) (uint16_t)(((op) >> 16) & 0xffff) // C = A + B
#define OP_D(op) (uint8_t)(((op) >> 24) & 0xff)

void (*primitive[20])(struct Cora* vm, int tos);


static inline Opcode
pack4(uint8_t op, uint8_t a, uint8_t b, uint8_t d) {
	return (Opcode)( ((uint32_t)op)
			 | ((uint32_t)a << 8)
			 | ((uint32_t)b << 16)
			 | ((uint32_t)d << 24));
}

static inline Opcode
pack3(uint8_t op, uint8_t a, uint16_t c16) {
	return (Opcode)( ((uint32_t)op)
			 | ((uint32_t)a << 8)
			 | ((uint32_t)c16 << 16));
}

typedef vector(Opcode) codeBuf;

static inline int
emitOp(codeBuf *buf, Opcode op) {
	int ret = vecLen(buf);
	vecAppend(buf, op);
	return ret;
}


static inline int
emitU32(codeBuf *buf, uint32_t v) {
	int ret = vecLen(buf);
	vecAppend(buf, (Opcode)v);
	return ret;
}

// Forward declaration for recursion
static void emitSexpList(codeBuf *buf, Obj sexp, constantTable* tbl);

void
codeToExec(codeBuf *buf, Obj sexp, constantTable *tbl) {
    emitSexpList(buf, sexp, tbl);
}

static void
emitSexpList(codeBuf *buf, Obj sexp, constantTable* tbl) {
	Obj sym_const       = makeSymbol("const");
	Obj sym_local_ref   = makeSymbol("local-ref");
	Obj sym_global_ref  = makeSymbol("global-ref");
	Obj sym_closure_ref = makeSymbol("closure-ref");
	Obj sym_if          = makeSymbol("if");
	Obj sym_make_closure     = makeSymbol("make-closure");
	Obj sym_tail_call   = makeSymbol("tailcall");
	Obj sym_call        = makeSymbol("call");
	Obj sym_primitive   = makeSymbol("primitive");
	Obj sym_exit        = makeSymbol("exit");

	while (sexp != Nil) {
		Obj insn = car(sexp);
		Obj tag  = car(insn);

		if (tag == sym_const) {
			// (const tos idx8)
			int tos = fixnum(cadr(insn));
			int idx = vecLen(tbl);
			vecAppend(tbl, caddr(insn));
			emitOp(buf, pack4(OP_CONST, (uint8_t)tos, (uint8_t)idx, 0));
		} else if (tag == sym_local_ref) {
			// (local-ref tos idx8)
			int tos = fixnum(cadr(insn));
			int idx = fixnum(caddr(insn));
			emitOp(buf, pack4(OP_LOCAL_REF, (uint8_t)tos, (uint8_t)idx, 0));
		} else if (tag == sym_global_ref) {
			// (global-ref tos idx16)
			int tos = fixnum(cadr(insn));
			int idx = vecLen(tbl);
			vecAppend(tbl, caddr(insn));
			emitOp(buf, pack3(OP_GLOBAL_REF, (uint8_t)tos, (uint16_t)idx));
		} else if (tag == sym_closure_ref) {
			// (closure-ref tos idx8)
			int tos = fixnum(cadr(insn));
			int idx = fixnum(caddr(insn));
			emitOp(buf, pack4(OP_CLOSURE_REF, (uint8_t)tos, (uint8_t)idx, 0));
		} else if (tag == sym_if) {
			// (if cond_reg then_list else_list)
			int cond = fixnum(cadr(insn));
			int if_pos = emitOp(buf, pack3(OP_IF_ELSE, (uint8_t)cond, 0 /*placeholder*/));
			int then_start = vecLen(buf);
			emitSexpList(buf, car(cddr(insn)), tbl);     // then_list is the 3rd element
			int then_len = vecLen(buf) - then_start;
			// Patch the skip length (in opwords)
			vecSet(buf, if_pos, pack3(OP_IF_ELSE, (uint8_t)cond, (uint16_t)then_len));
			// else branch follows
			emitSexpList(buf, car(cdddr(insn)), tbl);
		} else if (tag == sym_make_closure) {
			// (make-closure tos nargs nfrees body)
			int tos    = fixnum(cadr(insn));
			int nargs  = fixnum(caddr(insn));
			int nfrees = fixnum(car(cdddr(insn)));
			// Header (with size placeholder to be patched)
			emitOp(buf, pack4(OP_MAKE_CLOSURE, (uint8_t)tos, (uint8_t)nargs, (uint8_t)nfrees));
			int sz_pos = emitU32(buf, 0);
			Obj body = car(cdr(cdddr(insn)));
			int body_start = vecLen(buf);
			emitSexpList(buf, body, tbl); // body is the 5th element
			int body_len = vecLen(buf) - body_start; // number of opwords
			vecSet(buf, sz_pos, (Opcode)body_len); // exec side reads a u32
		} else if (tag == sym_tail_call) {
			// (tail-call base nargs)
			int tos  = fixnum(cadr(insn));
			int nargs = fixnum(caddr(insn));
			emitOp(buf, pack4(OP_TAIL_CALL, (uint8_t)tos, (uint8_t)nargs, 0));
		} else if (tag == sym_call) {
			// (call tos nargs)
			int tos  = fixnum(cadr(insn));
			int nargs = fixnum(caddr(insn));
			emitOp(buf, pack4(OP_CALL, (uint8_t)tos, (uint8_t)nargs, 0));
		} else if (tag == sym_primitive) {
			// (primitive tos sym)
			int tos = fixnum(cadr(insn));
			Obj prim = caddr(insn);
			if (prim == makeSymbol("+")) {
				emitOp(buf, pack4(OP_PRIMITIVE_ADD, (uint8_t)tos, 0, 0));
			} else if (prim == makeSymbol("-")) {
				emitOp(buf, pack4(OP_PRIMITIVE_SUB, (uint8_t)tos, 0, 0));
			} else if (prim == makeSymbol("*")) {
				emitOp(buf, pack4(OP_PRIMITIVE_MUL, (uint8_t)tos, 0, 0));
			} else if (prim == makeSymbol("=")) {
				emitOp(buf, pack4(OP_PRIMITIVE_EQ, (uint8_t)tos, 0, 0));
			} else if (prim == makeSymbol("<")) {
				emitOp(buf, pack4(OP_PRIMITIVE_LT, (uint8_t)tos, 0, 0));
			} else if (prim == makeSymbol("set")) {
				emitOp(buf, pack4(OP_PRIMITIVE_SET, (uint8_t)tos, 0, 0));
			} else {
				printf("unknown primitive type\n");
				assert(false);
			}
		} else if (tag == sym_exit) {
			// (exit tos)
			int tos = fixnum(cadr(insn));
			emitOp(buf, pack4(OP_EXIT, (uint8_t)tos, 0, 0));
		} else {
			fprintf(stderr, "unknown opcode tag in S-expr bytecode");
			assert(0);
        }

        sexp = cdr(sexp);
    }
}

#define NEXT() goto *jumptable[OP_CODE(*(++pc))]

static void
exec(struct Cora *vm) {
	Opcode *pc = vm->ctx.pc.data.v.opcode;
	constantTable *constant = &vm->ctx.pc.data.v.constant;
	Obj *R = vm->stack + vm->ctx.stk.pos;

	static const void* jumptable[] = {
		&&op_const,
		&&op_local_ref,
		&&op_global_ref,
		&&op_closure_ref,
		&&op_if_else,
		&&op_make_closure,
		&&op_tail_call,
		&&op_exit,
		&&op_call,
		&&op_primitive_add,
		&&op_primitive_sub,
		&&op_primitive_mul,
		&&op_primitive_eq,
		&&op_primitive_lt,
		&&op_primitive_set,
	};

	goto *jumptable[OP_CODE(*pc)];

 op_const:
	{
		uint8_t tos = OP_A(*pc);
		uint8_t idx = OP_B(*pc);
		R[tos] = vecGet(constant, idx);
		NEXT();
	}

 op_local_ref:
	{
		uint8_t tos = OP_A(*pc);
		uint8_t idx = OP_B(*pc);
		R[tos] = R[idx];
		NEXT();
	}

 op_global_ref:
	{
		uint8_t tos = OP_A(*pc);
		uint16_t idx = OP_C(*pc);
		R[tos] = globalRef(vecGet(constant, idx));
		NEXT();
	}

 op_closure_ref:
	{

	}

 op_if_else:
	{
		uint8_t tos = OP_A(*pc);
		uint16_t idx = OP_C(*pc);
		if (R[tos] == True) {
			NEXT();
		} else if(R[tos] == False) {
			pc += idx;
			NEXT();
		} else {
			printf("if condition must be a boolean");
			assert(false);
		}
	}

 op_make_closure:
	{
		uint8_t tos = OP_A(*pc);
		uint8_t nargs = OP_B(*pc);
		/* uint8_t nfrees = OP_D(*pc); */
		pc++;
		uint32_t sz = *((uint32_t*)pc++);
		R[tos] = makeClosure(nargs, pc, sz, *constant);
		assert(sz > 1);
		pc = pc + (sz - 1);
		NEXT();
	}

 op_tail_call:
	{
		uint8_t base = OP_A(*pc);
		uint16_t nargs = OP_B(*pc);
		if (base > 0) {
			memcpy(R, R+base, sizeof(Obj) * nargs);
		}
		struct scmNative *fn = ptr(R[0]);
		assert(fn->head.type == scmHeadNative);
		if (fn->code.func == exec) {
			pc = fn->code.data.v.opcode;
			constant = &fn->code.data.v.constant;
			goto *jumptable[OP_CODE(*pc)];
		}

		vm->ctx.stk.pos = R - vm->stack;
		vm->ctx.pc = fn->code;
		return;
	}

 op_call:
	{
		// save cont (pc + stack)
		struct callStack *cs = &vm->callstack;
		if (unlikely(cs->len >= cs->cap)) {
			growCallStack(cs);
		}
		struct frame *addr = &cs->data[cs->len++];
		addr->pc.func = exec;
		addr->pc.data.v.opcode = pc + 1;
		addr->pc.data.v.constant = *constant;
		/* addr->stk.stack = &vm->stack[0]; */
		addr->stk.base = 0;
		addr->stk.pos = R - vm->stack;

		// then goto the callee
		uint8_t base = OP_A(*pc);
		uint16_t nargs = OP_B(*pc);
		struct scmNative *fn = ptr(R[base]);
		if (fn->code.func == exec) {
			assert(fn->head.type == scmHeadNative);
			R = R + base;
			pc = fn->code.data.v.opcode;
			constant = &fn->code.data.v.constant;
			goto *jumptable[OP_CODE(*pc)];
		}

		printf("TODO: support calling protocol\n");
		assert(false);
	}

 op_exit:
	{
		uint8_t tos = OP_A(*pc);
		R[0] = R[tos];
		vm->ctx = vm->callstack.data[--vm->callstack.len];
		if (vm->ctx.pc.func == exec) {
			// short path without exit the exec function.
			pc = vm->ctx.pc.data.v.opcode;
			constant = &vm->ctx.pc.data.v.constant;
			R = vm->stack + vm->ctx.stk.pos;
			goto *jumptable[OP_CODE(*pc)];
		}
		return;
	}

 op_primitive_add:
	{
		uint8_t tos = OP_A(*pc);
		R[tos] = R[tos+1] + R[tos];
		NEXT();
	}

 op_primitive_sub:
	{
		uint8_t tos = OP_A(*pc);
		R[tos] = R[tos] - R[tos+1];
		NEXT();
	}

 op_primitive_mul:
	{
		uint8_t tos = OP_A(*pc);
		Obj a = R[tos];
		Obj b = R[tos+1];
		R[tos] = (Obj)((fixnum(a) * fixnum(b)) << 1);
		NEXT();
	}

 op_primitive_eq:
	{
		uint8_t tos = OP_A(*pc);
		R[tos] = eq(R[tos], R[tos+1]) ? True: False;
		NEXT();
	}

 op_primitive_lt:
	{
		uint8_t tos = OP_A(*pc);
		R[tos] = (R[tos] < R[tos+1]) ? True: False;
		NEXT();
	}

 op_primitive_set:
	{
		uint8_t tos = OP_A(*pc);
		R[tos] = primSet(vm, R[tos], R[tos+1]);
		NEXT();
	}

}

static Obj symFib;

static void
fib40(struct Cora *co) {
	Obj *R = co->stack + co->ctx.stk.pos;

	static const void* jumptable[] = {&&label0, &&label1, &&label2};
	goto *jumptable[co->ctx.pc.data.label];

 label0:
	{
		R[2] = R[1];
		R[3] = 4;
		R[2] = (R[2] < R[3]) ? True: False;
		if (R[2] == True) {
			R[2] = R[1];
			R[0] = R[2];
			co->ctx = co->callstack.data[--co->callstack.len];
			if (co->ctx.pc.func == fib40) {
				R = co->stack + co->ctx.stk.pos;
				goto *jumptable[co->ctx.pc.data.label];
			}
			return;
		} else {
			R[2] = globalRef(symFib);
			R[3] = R[1];
			R[4] = 2;
			R[3] = R[3] - R[4];

			struct callStack *cs = &co->callstack;
			if (unlikely(cs->len >= cs->cap)) {
				growCallStack(cs);
			}
			struct frame *addr = &cs->data[cs->len++];
			addr->stk.pos = R - co->stack;
			addr->pc.func = fib40;
			addr->pc.data.label = 1;

			// then goto the callee
			struct scmNative* fn = mustNative(R[2]);
			co->ctx.pc = fn->code;
			if (co->ctx.pc.func == fib40) {
				R += 2;
				goto *jumptable[co->ctx.pc.data.label];
			}
			co->ctx.stk.pos = R + 2 - co->stack;
			return;
		}
	}

 label1:
	{
		R[3] = globalRef(symFib);
		R[4] = R[1];
		R[5] = 4;
		R[4] = R[4] - R[5];

		struct callStack *cs = &co->callstack;
		if (unlikely(cs->len >= cs->cap)) {
			growCallStack(cs);
		}
		struct frame *addr = &cs->data[cs->len++];
		addr->stk.pos = R - co->stack;
		addr->pc.func = fib40;
		addr->pc.data.label = 2;

		// then goto the callee
		struct scmNative* fn = mustNative(R[3]);
		co->ctx.pc = fn->code;
		if (co->ctx.pc.func == fib40) {
			R += 3;
			goto *jumptable[co->ctx.pc.data.label];
		}
		co->ctx.stk.pos = R + 3 - co->stack;
		return;
	}

 label2:
	{
		R[2] = R[2] + R[3];
		R[0] = R[2];
		co->ctx = co->callstack.data[--co->callstack.len];
		if (co->ctx.pc.func == fib40) {
			R = co->stack + co->ctx.stk.pos;
			goto *jumptable[co->ctx.pc.data.label];
		}
		return;
	}
}

int main() {
	uintptr_t dummy;
	struct Cora* co = coraInit(&dummy);
	co->nargs = 0;

	struct SexpReader r = { .co = co};
	int errCode = 0;

	symFib = makeSymbol("fib");
	Obj fib = makeNative(0, fib40, 1, 0);
	primSet(co, symFib, fib);


	for (int i=0; ; i++) {
		printf("%d #> ", i);

		Obj exp = sexpRead(&r, stdin, &errCode);
		if (errCode != 0) {
			break;
		}

		codeBuf buf;
		vecInit(&buf, 8);
		constantTable ct;
		vecInit(&ct, 8);

		codeToExec(&buf, exp, &ct);

		co->ctx.pc.data.v.opcode = buf.v.data;
		co->ctx.pc.data.v.constant = ct;
		trampoline(co, exec);

		sexpWrite(stdout, co->stack[0]);
		printf("\n");
	}
}

