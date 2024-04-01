.PHONY: libcora lib

CC = gcc
CFLAGS = -g -Wall -fPIC

all: cora.bin lib

libcora:
	make -C src

lib:
	make -C lib

.c.o:
	$(CC) $(CFLAGS) -c $< -I src

main.o: main.c

cora.bin: libcora main.o
	# $(CC) main.o -Wl,-rpath src -Lsrc -lcora -ldl -o $@
	# $(CC) main.o -Lsrc -l:libcora.a -ldl -o $@
	# $(CC) main.o -Lsrc -l:libcora.a lib/lib.a -ldl -o $@
	$(CC) main.o -Lsrc -lcora -ldl -o $@

clean:
	rm -rf *.o
	make clean -C src
	make clean -C lib

a.out: init.so eval0.so libxx.so
	gcc -o a.out -g xx.c $^ -I./lib/toc/ -I. -ldl

toc.so:
	gcc -shared -o toc.so -g -fPIC toc.c -Ilib/toc -I.

eval0.so:
	gcc -shared -o eval0.so -g -fPIC eval0.c -Ilib/toc -I.

init.so: init.c
	gcc -shared -o init.so -g -fPIC init.c -Ilib/toc -I.

libxx.so: lib/toc/runtime.c src/reader.c src/str.c src/types.c
	gcc -shared -o libxx.so -g -fPIC lib/toc/runtime.c src/reader.c src/str.c src/types.c -I./lib/toc/ -I. -ldl
