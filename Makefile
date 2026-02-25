.PHONY: libcora lib fmt test test-core test-type test-infer test-poller test-parallel test-http test-gc-stability test-integration test-shebang \
		cmake-configure cmake-build compile-commands

CMAKE_BUILD_DIR ?= build
CMAKE_ENABLE_ASAN := $(if $(filter 1,$(ENABLE_ASAN)),ON,OFF)
CMAKE_ENABLE_TSAN := $(if $(filter 1,$(ENABLE_TSAN)),ON,OFF)
CMAKE_BOOTSTRAP_TEST ?= OFF

all: cora

libcora: cmake-configure
	cmake --build $(CMAKE_BUILD_DIR) --target cora_runtime

lib: cmake-configure
	cmake --build $(CMAKE_BUILD_DIR) --target cora-libs

init.so: cmake-configure
	cmake --build $(CMAKE_BUILD_DIR) --target cora_init

cora: cmake-configure
	cmake --build $(CMAKE_BUILD_DIR) --target cora-all

clean:
	rm -f *.o *.so *.bin cora init.so test/*.so
	rm -f src/*.o src/*.a src/*.so src/*.test
	rm -f lib/*.o lib/*.so
	rm -f lib/toc/*.o lib/toc/*.so
	rm -f lib/net/*.o lib/net/*.so
	rm -f lib/poller/*.o lib/poller/*.so
	rm -f lib/parallel/*.o lib/parallel/*.so
	rm -f lib/md4c/*.o
	rm -rf src/.deps lib/.deps lib/toc/.deps
	rm -rf $(CMAKE_BUILD_DIR)

fmt:
	cd src; indent -npcs -bap -br -ce -brf -ut -i8 -nbbo -nhnl *.c

test-core: cora
	make test -C src
	./cora test/script.cora
	./test/type/run-tests.sh

test-type: cora
	./test/type/run-tests.sh

test-infer: cora
	./test/type/run-tests.sh

test-poller: cora
	./test/poller/run-tests-simple.sh

test-parallel: cora
	./test/parallel/run-tests-simple.sh

test-http: cora
	./test/http/run-tests.sh

test-gc-stability: cora
	$(MAKE) -C src gc.test
	@runs=$${GC_STABILITY_RUNS:-10}; \
	seed_base=$${GC_STABILITY_SEED_BASE:-1800000000}; \
	i=1; \
	while [ $$i -le $$runs ]; do \
	  CORA_GC_SEED=$$((seed_base + i)) \
	  CORA_GC_SMALL_COUNT=$${CORA_GC_SMALL_COUNT:-1000} \
	  CORA_GC_SMALL_MAX=$${CORA_GC_SMALL_MAX:-4096} \
	  CORA_GC_LARGE_COUNT=$${CORA_GC_LARGE_COUNT:-20} \
	  CORA_GC_LARGE_MAX=$${CORA_GC_LARGE_MAX:-1048576} \
	  ./src/gc.test >/dev/null; \
	  i=$$((i + 1)); \
	done; \
	echo "gc stability runs=$$runs passed"

test-integration: test-poller test-parallel test-http

test: test-core test-integration

FAIL_ON_STDOUT := awk '{ print } END { if (NR > 0) { exit 1 } }'

bootstrap:
	@make clean
	@$(MAKE) cora CMAKE_BOOTSTRAP_TEST=ON
	@PATH="$(PWD):$$PATH" ./test/bootstrap.cora;
	@diff init.c init.c.tmp | $(FAIL_ON_STDOUT)
	@diff lib/toc.c lib/toc.c.tmp | $(FAIL_ON_STDOUT)
	rm -f init.c.tmp lib/toc.c.tmp

install-local:
	@mkdir -p ${HOME}/.local/share/cora/pkg/
	@rm -rf ${HOME}/.local/share/cora/pkg/cora
	@ln -s "$$(pwd)" ${HOME}/.local/share/cora/pkg/cora

cmake-configure:
	cmake -S . -B $(CMAKE_BUILD_DIR) \
		-DCMAKE_BUILD_TYPE=Debug \
		-DCMAKE_EXPORT_COMPILE_COMMANDS=ON \
		-DENABLE_ASAN=$(CMAKE_ENABLE_ASAN) \
		-DENABLE_TSAN=$(CMAKE_ENABLE_TSAN) \
		-DBOOTSTRAP_TEST=$(CMAKE_BOOTSTRAP_TEST)
	cp $(CMAKE_BUILD_DIR)/compile_commands.json ./compile_commands.json

cmake-build: cmake-configure
	cmake --build $(CMAKE_BUILD_DIR) --target cora-all

compile-commands: cmake-configure
	@:


test-shebang: cora
	./test/shebang/run-tests.sh
