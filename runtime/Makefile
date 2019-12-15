cora: libcora.a main.o
	gcc main.o -L. -lcora -o $@

libcora.a: types.o reader.o builtin.o runtime.o
	ar -rc $@ $^
