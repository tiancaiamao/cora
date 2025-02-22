include.so: md4c.c wrap.c md4c.h
	gcc -shared -o $@ -g -fPIC wrap.c md4c.c -lcora  -I. -I../../src -L ../../src

a.out: md4c.c wrap.c md4c.h
	gcc -o $@ -DDEBUG -g wrap.c md4c.c -lcora  -I. -I../../src -L ../../src
