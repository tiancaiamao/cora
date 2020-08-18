.POSIX:
.SUFFIXES:
CC = gcc
CFLAGS = -g -Wall -fPIC

all: cora

main.o: main.c

cora: libcora.a main.o
	$(CC) main.o -L. libcora.a -o $@

OFILES = gc.o types.o reader.o builtin.o runtime.o codegen.o generator.o
libcora.a: $(OFILES)
	ar -rc $@ $^

libcora.so: $(OFILES)
	gcc -shared -o $@ $^ -ldl

gc.o: gc.c gc.h
types.o: types.c types.h gc.h
builtin.o: builtin.c builtin.h
reader.o: reader.c reader.h types.h
runtime.o: runtime.c types.h builtin.h
codegen.o: codegen.c
generator.o: generator.c runtime.h

clean:
	rm -rf *.o libcora.a libcora.so cora

.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) -c $<
