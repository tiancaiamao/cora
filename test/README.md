# Cora Test Suite

This directory contains all test files for the Cora language.

---

## Quick Start

```bash
# Run all basic tests
./cora test/script.cora

# Run basic functionality tests
./cora test/run-basic-test.cora

# Run individual test files
./cora test/macro-test.cora

# Run Poller integration tests
./test/poller/run-tests-simple.sh
```

---

## Directory Structure

### `/t/` - Core Runtime Tests

Tests core functionality and correctness of the Cora VM. These are the foundation of the test system.

**Test Coverage:**
- Basic syntax: `basic-if`, `basic-lambda`, `basic-do`, `basic-set`, `basic-throw`
- Function calls: `basic-func-call`, `basic-primitive`
- Closures: `closure-value`, `closure-ref`
- Partial application: `curry`, `curry-partial`, `curry-lambda`, `curry-as-arg`, `partial-primitive`
- Exception handling: `throw-in-handler`, `throw-in-closure-call`, `throw-in-deep-stack`
- Continuations: `resume`, `resume-in-closure-call`, `resume-in-primitive-call`
- Tail call optimization: `proper-tail-call`, `fact-tail`
- Other features: `map`, `reverse`, `iterate-list`, `let-variable-shadow`, `issue_25`

**How to run:** Automatically executed by `run-basic-test.cora`

---

### `/r/` - Test Results Directory

Stores expected output results for each test in `/t/`.

---

### `/benchmark/` - Performance Benchmarks

Tests Cora performance and correctness.

**Test Files:**
- `fib40.cora` - 40th Fibonacci number
- `ack.cora` - Ackermann function
- `tak.cora` / `takl.cora` - Tak function
- `coroutine1m.cora` - Create 1 million coroutines
- `array1.cora` - Array operations
- `stackoverflow.cora` - Stack overflow test

---

### `/parallel/` - Parallel Mode Tests

Tests the concurrent model of M threads driving N VMs.

**Test Files:**
- `main.cora` - Main entry point test
- `worker.cora` - Worker thread test
- `base.so` - Basic parallel runtime
- `recv.cora` - Receive operation test
- `parallel-net-e2e.cora` - End-to-end network test (server + client)

---

### `/poller/` - Poller Integration Tests

Tests integration of Poller with Parallel mode (I/O event detection).

**Test Files:**
- `poller-test-01-import.cora` - Module import test
- `poller-test-02-mailbox.cora` - Mailbox functionality test
- `poller-test-03-net-listen-direct.cora` - Direct net-listen call
- `poller-test-04-net-listen-let.cora` - let binding + net-listen
- `poller-test-05-let-number.cora` - let binding with number
- `poller-test-06-vm-init.cora` - vm-runtime-init test
- `poller-test-07-poller-init.cora` - poller-init test
- `poller-test-08-eventhandle-new.cora` - EventHandle creation test

**How to run:**
```bash
./test/poller/run-tests-simple.sh
```

---

### `/archive/` - Archived Files

Contains obsolete AI-generated test files and debug files.

**Subdirectories:**
- `poller-old/` - Old Poller tests (replaced by new tests in `poller/` directory)
- `debug/` - AI-generated debug test files
- `docs/` - Obsolete documentation

---

## Core Test Files

### `script.cora`
Main test runner that executes all tests in `/t/` and verifies results.

### `run-basic-test.cora`
Basic functionality test suite testing core language features.

### `bootstrap.cora`
Bootstrap test verifying compiler self-hosting capability.

---

## User-Authored Feature Tests

### Concurrency and Message Passing
- **`mailbox-test.cora`** - Complete Mailbox functionality test
- **`mailbox-simple.cora`** - Simplified Mailbox test

### Language Features
- **`macro-test.cora`** - Macro system test
- **`define-record-test.cora`** - define-record syntax test

### Algorithms and Data Structures
- **`man-or-boy.cora`** - Man or Boy test (closure semantics)
- **`peg-test.cora`** - PEG (Parsing Expression Grammar) test
- **`sxml-test.cora`** - SXML (Lisp representation of XML) test
- **`ukanren-test.cora`** - uKanren (logic programming) test

### Parallel Mode
- **`parallel-basic.cora`** - Parallel mode basic test
- **`parallel-api-demo.cora`** - Parallel API demonstration
- **`parallel-runtime-test.cora`** - Runtime test
- **`parallel-net-basic.cora`** - Networking basic test
- **`parallel-net-minimal.cora`** - Minimal network test
- **`parallel-net-simple.cora`** - Simple network test

---

## Test File Summary

| Test File | Description | Priority |
|-----------|-------------|----------|
| `script.cora` | Runtime test suite | ⭐⭐⭐ |
| `run-basic-test.cora` | Basic functionality tests | ⭐⭐⭐ |
| `bootstrap.cora` | Self-hosting test | ⭐⭐⭐ |
| `mailbox-test.cora` | Message passing | ⭐⭐⭐ |
| `mailbox-simple.cora` | Simple message passing | ⭐⭐ |
| `macro-test.cora` | Macro system | ⭐⭐⭐ |
| `define-record-test.cora` | Record types | ⭐⭐ |
| `man-or-boy.cora` | Closure semantics | ⭐⭐ |
| `peg-test.cora` | Parser combinators | ⭐⭐ |
| `sxml-test.cora` | XML processing | ⭐ |
| `ukanren-test.cora` | Logic programming | ⭐⭐ |
| `parallel-basic.cora` | Concurrency basics | ⭐⭐⭐ |
| `parallel-api-demo.cora` | Concurrency API | ⭐⭐ |
| `parallel-runtime-test.cora` | Runtime | ⭐⭐⭐ |
| `parallel-net-*.cora` | Networking features | ⭐⭐ |

---

## Test Classification

### By Type

1. **Unit Tests** (`/t/`): Test individual language features
2. **Integration Tests** (`parallel/`, `poller/`): Test multiple components working together
3. **Performance Tests** (`/benchmark/`): Test performance and scalability
4. **Regression Tests**: Prevent previously fixed bugs from reappearing

### By Priority

1. **Critical Tests** (must pass):
   - `script.cora`
   - `run-basic-test.cora`
   - `bootstrap.cora`
   - All tests in `/t/`

2. **Important Tests** (should pass):
   - `mailbox-test.cora`
   - `macro-test.cora`
   - `parallel-basic.cora`
   - `parallel-runtime-test.cora`

3. **Optional Tests** (nice to have):
   - `benchmark/*`
   - `peg-test.cora`
   - `sxml-test.cora`

---

## Build Artifacts

The test directory may contain the following build artifacts (`.so` files and `.dSYM` directories):
- `*.so` - Compiled shared libraries
- `*.so.dSYM` - Debug symbols

These files are automatically generated when running tests and can be safely deleted (will be regenerated when running tests).

```bash
# Clean all build artifacts
find test -name '*.so' -delete
find test -name '*.dSYM' -type d -exec rm -rf {} +
```

---

## Development Guide

### Adding New Tests

1. Unit tests: Add `.cora` and corresponding `.result` files to `/t/` directory
2. Feature tests: Add `.cora` files to `test/` root directory
3. Poller tests: Add `poller-test-XX-*.cora` files to `/poller/` directory

### Test Naming Conventions

- Unit tests: Use kebab-case, e.g., `basic-lambda.cora`
- Feature tests: Use kebab-case, e.g., `mailbox-test.cora`
- Poller tests: Use `poller-test-NN-description.cora` format

---

## Troubleshooting

### Test Failures

1. Check if build succeeded: `make`
2. Clean build artifacts: `make clean && make`
3. Run failing test individually for detailed output
4. Check for memory errors: `ENABLE_ASAN=1 make test`

### Memory Leak Detection

```bash
# Using AddressSanitizer
ENABLE_ASAN=1 make
./cora test/script.cora

# Using Valgrind
valgrind --leak-check=full ./cora test/script.cora
```

### Thread Error Detection

```bash
# Using ThreadSanitizer
ENABLE_TSAN=1 make
./cora test/parallel-basic.cora
```

---

## Related Documentation

- `../CLAUDE.md` - Project development guidelines
- `../lib/parallel/IMPLEMENTATION_SUMMARY.md` - Parallel mode implementation docs
- `poller/README.md` - Poller test documentation
