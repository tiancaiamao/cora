# Makefile for parallel runtime

CC = gcc
CFLAGS = -Wall -fPIC -g -I../../src 
LDFLAGS = -shared -pthread -L../../src -lcora

# Source files
SOURCES = vm.c bindings.c
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
bindings.o: bindings.c vm.h

.PHONY: all clean
