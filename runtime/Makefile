all: libcora.a

libcora.a: gc.o types.o reader.o builtin.o runtime.o
	ar -rc $@ $^

clean:
	rm -rf *.o libcora.a
