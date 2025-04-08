/* Lightweight C trace utilities compatible with Perfetto/Chrome Trace */
#ifndef TRACE_H
#define TRACE_H

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <pthread.h>

typedef enum {
	PH_B = 'B', PH_E = 'E', PH_b = 'b', PH_e = 'e',
	PH_s = 's', PH_f = 'f'
} tracePhaseType;

typedef struct __attribute__((packed)) {
	uint8_t  ph;
	uint8_t  name_len;
	uint16_t tid;
	uint32_t id;
	uint64_t ts;
	// char name[] follows
} trace_event_t;

extern FILE* trace_file;
extern size_t  trace_offset;
#define TRACE_BUFFER_SIZE (1 << 20) // 1MB
extern uint8_t trace_buffer[TRACE_BUFFER_SIZE];

static inline uint64_t
traceNow() {
	struct timespec ts;
	clock_gettime(CLOCK_MONOTONIC, &ts);
	return (uint64_t)ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
}

static inline void
traceFlush() {
	if (trace_file && trace_offset > 0) {
		fwrite(trace_buffer, 1, trace_offset, trace_file);
		trace_offset = 0;
	}
}

static inline void
traceEmitEvent(tracePhaseType ph, const char* name, uint16_t tid, uint32_t id) {
	if (!trace_file) return;

	size_t name_len = strlen(name);
	size_t total_size = sizeof(trace_event_t) + name_len;
	if (trace_offset + total_size >= TRACE_BUFFER_SIZE) {
		traceFlush();
	}

	trace_event_t* evt = (trace_event_t*)(trace_buffer + trace_offset);
	evt->ph = ph;
	evt->name_len = name_len;
	evt->tid = tid;
	evt->id = id;
	evt->ts = traceNow();

	memcpy((char*)evt + sizeof(trace_event_t), name, name_len);
	trace_offset += total_size;
}


void traceClose();
void traceInit(const char* path);

#ifdef __GNUC__
#define TRACE_CLEANUP(func) __attribute__((cleanup(func)))
#else
#error "Only GCC/Clang supported for cleanup attribute"
#endif

static inline int traceTID() {
	return (int)(uintptr_t)pthread_self();
}

// Basic BEGIN/END trace macros
#define TRACE_BEGIN(name) traceEmitEvent('B', name, traceTID(), 0)
#define TRACE_END(name)   traceEmitEvent('E', name, traceTID(), 0)

// FLOW trace macros
/* #define TRACE_FLOW_START(flow_id) trace_emit_flow('s', flow_id, traceTID()) */
/* #define TRACE_FLOW_END(flow_id)   trace_emit_flow('f', flow_id, traceTID()) */

// Scoped tracing with cleanup attribute
typedef struct {
	const char* name;
	int tid;
} TraceScope;

static inline void traceScopeEnd(TraceScope* scope) {
	traceEmitEvent('E', scope->name, scope->tid, 0);
}

static inline TraceScope traceScopeBegin(const char* name) {
	int tid = traceTID();
	traceEmitEvent('B', name, tid, 0);
	return (TraceScope){ .name = name, .tid = tid };
}

#define TRACE_SCOPE(name) \
TRACE_CLEANUP(traceScopeEnd) TraceScope __trace_scope = traceScopeBegin(name)


#endif
