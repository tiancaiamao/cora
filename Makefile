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
