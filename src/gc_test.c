#include "runtime.h"
#include <stdlib.h>
#include <time.h>

size_t
generate_logarithmic_random(size_t max_size) {
	double r = (double) rand() / RAND_MAX;	// generate random value [0, 1)
	return (size_t) (1 + (max_size - 1) * r * r);	// use r*r to simulate log
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
testWithSize(struct Cora *co, int maxSize, int count) {
	/* unsigned int seed = (unsigned int) time(NULL); */
	unsigned int seed = 1742627754;
	printf("test using seed %u\n", seed);
	srand(seed);
	for (int i = 0; i < count; i++) {
		size_t sz = generate_mixed_random(maxSize);
		if (sz <= sizeof(scmHead)) {
			continue;
		}
		// printf("generate object size %ld\n", sz);
		newObj(scmHeadBytes, sz);
	}
}

static void
TestSmallObjects(struct Cora *co) {
	testWithSize(co, 4 * 1024, 10000);
}

static void
TestLargeObjects(struct Cora *co) {
	testWithSize(co, 64 * 1024 * 1024, 1000);
}

int
main(int argc, char *argv[]) {
	uintptr_t dummy;
	struct Cora *co = coraNew();
	coraInit(co, &dummy);
	TestSmallObjects(co);
	TestLargeObjects(co);
}
