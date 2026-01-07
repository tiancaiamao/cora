# Makefile for parallel runtime

CC = gcc
CFLAGS = -Wall -fPIC -g -I../../src 
LDFLAGS = -shared -pthread -L../../src -lcora

# Source files
SOURCES = vm.c scheduler.c mailbox.c bindings.c
OBJECTS = $(SOURCES:.c=.o)
TARGET = internal.so

# Build target
all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Clean
clean:
	rm -f $(OBJECTS) $(TARGET)

# Dependencies
vm.o: vm.c vm.h
scheduler.o: scheduler.c scheduler.h coroutine.h vm.h
mailbox.o: mailbox.c mailbox.h vm.h coroutine.h
bindings.o: bindings.c vm.h mailbox.h scheduler.h

.PHONY: all clean
