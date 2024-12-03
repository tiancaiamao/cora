.PHONY: libcora lib fmt

CC = gcc
CFLAGS = -g -Wall -fPIC
LD_FLAG	:=  -lcora -ldl
ifeq ("${ENABLE_ASAN}", "1")
	LD_FLAG = -lasan -lcora -ldl
endif

all: cora.bin lib

libcora:
	make -C src

lib:
	make -C lib

.c.o:
	$(CC) $(CFLAGS) -c $< -I src

main.o: main.c

cora.bin: libcora main.o init.so toc.so
	# $(CC) main.o -Wl,-rpath src -Lsrc -lcora -ldl -o $@
	# $(CC) main.o -Lsrc -l:libcora.a -ldl -o $@
	# $(CC) main.o -Lsrc -l:libcora.a lib/lib.a -ldl -o $@
	$(CC) main.o -Lsrc $(LD_FLAG) -o $@

clean:
	rm -f *.o *.so *.bin
	make clean -C src
	make clean -C lib

toc.so: toc.c libcora
	gcc -shared -o toc.so -g -fPIC toc.c -Isrc -I. -Lsrc -lcora

init.so: init.c libcora
	gcc -shared -o init.so -g -fPIC init.c -Isrc -I. -Lsrc -lcora

fmt:
	cd src; indent -npcs -bap -br -ce -brf -ut -i8 *.c
