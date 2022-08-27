all: cora

cora:
	gcc -g *.c -o cora

eval.test: eval.c types.c builtin.c vm.c instr.c reader.c
	gcc -g -D_EVAL_TEST_ $^ -o eval.test

eval_test: eval.test
	./eval.test
