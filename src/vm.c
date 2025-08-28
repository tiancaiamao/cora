#include "runtime.h"
#include "vector.h"

static void exec(struct Cora *co);

static void
callClosure(struct Cora *co) {
	struct scmNative* clo = mustNative(co->R[0]);
	assert(clo->captured == 1);
	/* Obj b = clo->data[0]; */
	/* Opcode *code = (Opcode *)bytesData(b); */
	// TODO?
	co->ctx.pc = clo->code;
	exec(co);
}

static Obj
makeClosure(int nargs, Opcode *code, int len, constantTable tbl) {
	/* int sz = len * sizeof(Opcode); */
	/* Obj b = makeCObj(code); */
	/* Obj b = makeBytes(sz); */
	/* memcpy(bytesData(b), code, sz); */
	Obj ret = makeNative(0, callClosure, nargs, 0);
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
	// C occupies bits [16..31]
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
	/* ensureCap(buf, 1); */
	/* buf->code[buf->len] = op; */
	/* return buf->len++; // return index where it was placed */
}


static inline int
emitU32(codeBuf *buf, uint32_t v) {
	int ret = vecLen(buf);
	vecAppend(buf, (Opcode)v);
	/* ensureCap(buf, 1); */
	/* buf->code[buf->len] = (Opcode)v; */
	/* return buf->len++; */
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
			// Encode an OP_IF_ELSE with skip = size(of then_list in opwords).
			// Layout: [IF k] [then...] [else...]
			// exec(): if True → fall-through to then; if False → pc += k → else.
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
	constantTable constant = vm->ctx.pc.data.v.constant;
	Obj *R = vm->stack + vm->ctx.stk.pos;

	static void* jumptable[] = {
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
		R[tos] = vecGet(&constant, idx);
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
		R[tos] = globalRef(vecGet(&constant, idx));
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
		R[tos] = makeClosure(nargs, pc, sz, vm->ctx.pc.data.v.constant);
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
		// TODO: support calling protocol
		struct scmNative *fn = mustNative(R[0]);
		pc = fn->code.data.v.opcode;
		constant = fn->code.data.v.constant;
		goto *jumptable[OP_CODE(*pc)];
	}

 op_call:
	{
		// save cont (pc + stack)
		struct callStack *cs = &vm->callstack;
		if (unlikely(cs->len >= cs->cap)) {
			growCallStack(cs);
		}
		struct frame *addr = &cs->data[cs->len++];
		/* addr->frees = co->ctx.frees; */
		addr->pc.func = exec;
		/* addr->pc.label = label; */
		addr->pc.data.v.opcode = pc + 1;
		/* addr->stk.stack = &vm->stack[0]; */
		addr->stk.base = 0;
		addr->stk.pos = R - vm->stack;
		/* addr->debugFile = file; */
		/* addr->debugLine = line; */

		// then goto the callee
		uint8_t base = OP_A(*pc);
		uint16_t nargs = OP_B(*pc);
		/* if (base > 0) { */
		/* 	memcpy(R, R+base, sizeof(Obj) * nargs); */
		/* } */
		// TODO: support calling protocol
		struct scmNative *fn = mustNative(R[base]);
		R = R + base;
		pc = fn->code.data.v.opcode;
		goto *jumptable[OP_CODE(*pc)];
	}

 op_exit:
	{
		uint8_t tos = OP_A(*pc);
		R[0] = R[tos];
		vm->ctx = vm->callstack.data[--vm->callstack.len];
		vm->R = R;
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
		R[tos] = makeNumber(fixnum(R[tos]) * fixnum(R[tos+1]));
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

int main() {
	uintptr_t dummy;
	struct Cora* co = coraInit(&dummy);
	co->R = &co->stack[0];
	co->nargs = 0;

	struct SexpReader r = { .co = co};
	int errCode = 0;


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

		sexpWrite(stdout, co->R[0]);
		printf("\n");
	}
}

