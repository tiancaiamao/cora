all: lib.a

OFILES = generator.o codegen.o setjump.o

lib.a: $(OFILES)
	ar -rc $@ $^

.c.o:
	$(CC) $(CFLAGS) -I../src -c $<

clean:
	rm -rf *.o lib.a
