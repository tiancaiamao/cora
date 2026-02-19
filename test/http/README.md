# HTTP Library Tests

This directory contains tests for the Cora HTTP library.

## Running Tests

### Run all HTTP tests
```bash
make test-http
```

### Run tests manually
```bash
./test/http/run-tests.sh
```

### Run individual tests
```bash
DYLD_LIBRARY_PATH=./src ./cora test/http/test-parser-comprehensive.cora
DYLD_LIBRARY_PATH=./src ./cora test/http/test-response-builder.cora
./test/http/test-net-http-integration.sh
```

## Test Files

### Core Tests
- **test-parser-comprehensive.cora** - HTTP request parser tests (4 test cases)
- **test-response-builder.cora** - HTTP response builder tests (3 test cases)
- **test-net-http-integration.sh** - `cora/lib/net/http` end-to-end server tests (basic + mux)

### Debug/Development Tests
The following test files were created during development and are kept for reference:
- test-*.cora (various debugging tests)

These can be safely ignored when running the main test suite.
