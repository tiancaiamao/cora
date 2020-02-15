.POSIX:
.SUFFIXES:
CC = gcc
CFLAGS = -g -Wall

all: cora

cora: libcora.a main.c
	$(CC) $(CFLAGS) main.c libcora.a -o $@

libcora.a: gc.o types.o reader.o builtin.o runtime.o codegen.o
	ar -rc $@ $^

gc.o: gc.c gc.h
types.o: types.c types.h gc.h
builtin.o: builtin.c builtin.h
reader.o: reader.c reader.h types.h
runtime.o: runtime.c types.h builtin.h
codegen.o: codegen.c

clean:
	rm -rf *.o libcora.a cora

.SUFFIXES: .c .o
.c.o:
	$(CC) $(CFLAGS) -c $<