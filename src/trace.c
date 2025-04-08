#include <stdio.h>
#include <assert.h>
#include <stdint.h>
#include "trace.h"

FILE* trace_file = NULL;
size_t  trace_offset = 0;

void
trace_close() {
	trace_flush();
	if (trace_file) fclose(trace_file);
	trace_file = NULL;
}

void
trace_init(const char* path) {
	trace_file = fopen(path, "wb");
	trace_offset = 0;
	atexit(trace_close);
}

