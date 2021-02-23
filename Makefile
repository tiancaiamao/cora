.PHONY: libcora lib

CC = gcc

all: cora

libcora:
	make -C src

lib:
	make -C lib

.c.o:
	$(CC) $(CFLAGS) -c $< -I src

main.o: main.c

cora: libcora lib main.o
	$(CC) main.o src/libcora.a lib/lib.a -o $@

clean:
	rm -rf cora *.o
	make clean -C src
	make clean -C lib
