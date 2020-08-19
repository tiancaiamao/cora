CC = gcc

all: cora

src/libcora.a:
	make -C src

lib/lib.a:
	make -C lib

.c.o:
	$(CC) $(CFLAGS) -c $< -I src

main.o: main.c

cora: src/libcora.a lib/lib.a main.o
	$(CC) main.o src/libcora.a lib/lib.a -o $@

clean:
	rm -rf cora *.o
	make clean -C src
	make clean -C lib
