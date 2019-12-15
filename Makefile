all: cora

cora: libcora.a main.c
	gcc -Iruntime main.c -Lruntime -lcora -o $@

libcora.a:
	make -C runtime
