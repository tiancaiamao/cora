.PHONY: libcora lib

CC = gcc
CFLAGS = -g -Wall -fPIC

all: cora

libcora:
	make -C src

lib:
	make -C lib

.c.o:
	$(CC) $(CFLAGS) -c $< -I src

main.o: main.c

cora: libcora lib main.o
	# $(CC) main.o -Wl,-rpath src -Lsrc -lcora lib/lib.a -ldl -o $@
	$(CC) main.o -Lsrc -l:libcora.a lib/lib.a -ldl -o $@

clean:
	rm -rf cora *.o
	make clean -C src
	make clean -C lib
