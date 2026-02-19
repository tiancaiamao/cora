#include "runtime.h"
#include <errno.h>
#include <limits.h>
#include <stdlib.h>
#include <time.h>

static size_t
read_size_env(const char *name, size_t fallback) {
	const char *raw = getenv(name);
	if (raw == NULL || *raw == '\0') {
		return fallback;
	}

	errno = 0;
	char *end = NULL;
	unsigned long long parsed = strtoull(raw, &end, 10);
	if (errno != 0 || end == raw || *end != '\0') {
		return fallback;
	}
	if (parsed == 0 || parsed > SIZE_MAX) {
		return fallback;
	}
	return (size_t)parsed;
}

static unsigned int
read_seed_env(unsigned int fallback) {
	size_t parsed = read_size_env("CORA_GC_SEED", fallback);
	if (parsed > UINT_MAX) {
		return fallback;
	}
	return (unsigned int)parsed;
}

size_t
generate_logarithmic_random(size_t max_size) {
	double r = (double)rand() / RAND_MAX;	     // generate random value [0, 1)
	return (size_t)(1 + (max_size - 1) * r * r); // use r*r to simulate log
}

size_t
generate_mixed_random(size_t max_size) {
	if (rand() % 2 == 0) {
		return 1 + rand() % max_size;
	} else {
		return generate_logarithmic_random(max_size);
	}
}

static void
testWithSize(struct Cora *co, size_t maxSize, size_t count) {
	for (size_t i = 0; i < count; i++) {
		size_t sz = generate_mixed_random(maxSize);
		if (sz <= sizeof(scmHead)) {
			continue;
		}
		// printf("generate object size %ld\n", sz);
		newObj(co->gc, scmHeadBytes, sz);
	}
}

static void
TestSmallObjects(struct Cora *co, size_t maxSize, size_t count) {
	testWithSize(co, maxSize, count);
}

static void
TestLargeObjects(struct Cora *co, size_t maxSize, size_t count) {
	testWithSize(co, maxSize, count);
}

int
main(int argc, char *argv[]) {
	(void)argc;
	(void)argv;
	uintptr_t dummy;
	struct Cora *co = coraInit(&dummy);
	unsigned int seed = read_seed_env((unsigned int)time(NULL));
	size_t small_max = read_size_env("CORA_GC_SMALL_MAX", 4 * 1024);
	size_t small_count = read_size_env("CORA_GC_SMALL_COUNT", 10000);
	size_t large_max = read_size_env("CORA_GC_LARGE_MAX", 64 * 1024 * 1024);
	size_t large_count = read_size_env("CORA_GC_LARGE_COUNT", 1000);

	printf("gc.test seed=%u small=(count=%zu,max=%zu) large=(count=%zu,max=%zu)\n",
	       seed, small_count, small_max, large_count, large_max);
	srand(seed);
	TestSmallObjects(co, small_max, small_count);
	TestLargeObjects(co, large_max, large_count);
	return 0;
}
