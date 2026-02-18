# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## Project Overview

Cora is a Lisp-1 programming language implemented in C, inspired by Scheme, Shen, and FemtoLisp. It features a minimal kernel (only 4 special forms: `quote`, `lambda`, `if`, `do`), proper tail call optimization, partial function application, pattern matching, and a hygienic macro system.

## Build and Development Commands

```bash
# Build the project (creates ./cora executable)
make

# Clean all build artifacts
make clean

# Run full test suite (core + poller + parallel/spawn-vm integration)
make test

# Run core tests only (legacy behavior of `make test`)
make test-core

# Run poller integration tests only
make test-poller

# Run parallel integration tests only (includes spawn-vm focused tests)
make test-parallel

# Run integration tests only (poller + parallel)
make test-integration

# Bootstrap test (regenerates init.c and lib/toc.c from .cora sources)
make bootstrap

# Format C code (uses indent with specific options)
make fmt

# Install locally (symlinks to ~/.local/share/cora/pkg/cora)
make install-local

# Build with AddressSanitizer (for memory debugging)
ENABLE_ASAN=1 make

# Build with ThreadSanitizer (for concurrency debugging)
ENABLE_TSAN=1 make
```

## Test Matrix and Intent

### Core language and runtime (`make test-core`)

- Runs `src` C tests (`reader.test`, `gc.test`, `eval.test`)
- Runs `test/script.cora` (loads core language test bundles)
- Scope:
  - parser/reader behavior
  - GC correctness
  - evaluator semantics
  - macro/stdlib baseline behavior

### Poller integration (`make test-poller`)

- Runs `./test/poller/run-tests-simple.sh`
- Scope:
  - poller module import and lifecycle smoke
  - low-level mailbox creation smoke
  - low-level net-listen and EventHandle wiring smoke
  - vm-runtime + poller init compatibility

### Parallel + spawn-vm integration (`make test-parallel`)

- Runs `./test/parallel/run-tests-simple.sh`
- Scope:
  - `spawn-vm` basic startup and ID validity
  - multi-VM scheduling with per-VM coroutine fan-out
  - cross-VM mailbox request/response (RPC-style)
  - existing cross-vm mailbox, mixed workload, and parallel net e2e coverage

### Full pipeline (`make test`)

- Ordered composition:
  - `test-core`
  - `test-integration` (`test-poller` + `test-parallel`)

## Concurrency Model Notes (Important for Test Design)

- `spawn` creates a coroutine inside the current VM.
- `spawn-vm` creates a new VM (scheduled in parallel by worker threads).
- VM-to-VM execution is concurrent.
- Coroutine scheduling inside one VM is cooperative and queue-driven.
- Same-VM coroutines share VM-local memory/state.
- Cross-VM communication must use mailbox (`cora/lib/parallel/mailbox`).
- Channel (`cora/lib/chan`) is intended for same-VM coroutine communication.
- `cml-entry` is primarily single-VM coroutine execution.
- `parallel-entry` initializes runtime and drives multi-VM/multi-core execution.

## Project Architecture

### Execution Model

Cora uses a unique compilation pipeline:
1. **Reader** (`src/reader.c`): Parses S-expressions into AST
2. **Macro Expansion** (`init.cora`): Expands macros via `macroexpand` function
3. **Evaluator** (`lib/eval2.cora`): Interprets/compiles Cora code to C
4. **Code Generation**: Compiles generated C to shared objects (.so files)
5. **Runtime** (`src/runtime.c`): Stack-based VM with tagged value system

### Key Components

- **Runtime System** (`src/runtime.c`): Function dispatch, continuation handling, core primitives
- **Type System** (`src/types.c`): NaN-tagged doubles for unified type representation (numbers, cons cells, symbols, strings, vectors, closures)
- **Garbage Collection** (`src/gc.c`): Generational and incremental GC with precise collection
- **Module System**: Dynamic loading of .so files via dlopen, with namespace support via `package` macro
- **Concurrency** (`lib/cml.cora`, `lib/chan.cora`): Concurrent ML-style concurrency with channels and events

### Initialization Flow

When `./cora` starts, `main.c` loads modules in this order:
1. `cora/init` - Core macros, pattern matching, namespace system (from `init.so`)
2. `cora/lib/toc` - Standard library functions (from `lib/toc.so`)
3. `cora/lib/eval2` - Evaluator/compiler (from `lib/eval2.so` compiled from `lib/eval2.cora`)

The REPL then:
- Reads S-expressions
- Macro-expands via `macroexpand`
- Evaluates via `cora/lib/eval2#eval`

### The Bootstrap Process

`make bootstrap` verifies self-hosting:
1. Regenerates `init.c` from `init.cora`
2. Regenerates `lib/toc.c` from `lib/toc.cora`
3. Compares generated files with existing versions
4. Fails if any differences found

This ensures the compiler can correctly compile its own standard library.

## Code Organization

### C Source (`src/`)
- **runtime.c/h**: Core VM, function calls, continuations, primitives
- **types.c/h**: Tagged value system (NaN tagging), type predicates
- **gc.c/h**: Garbage collector (generational, incremental)
- **reader.c/h**: S-expression parser and printer
- **str.c/h**: String utilities
- **trace.c**: Debugging/tracing support
- **export.c**: C API for embedding

### Standard Library (`lib/`)
- **toc.c**: Core library (compiled from `toc.cora`)
- **eval2.cora**: Evaluator/compiler implementation
- **cml.cora**: Concurrent ML primitives
- **chan.cora**: Channel operations
- **async.cora**: Async/await helpers
- Other modules: string, io, os, net, hash, rand, json, markdown

### Test Structure (`test/`)
- **script.cora**: Main test runner (executed by `make test-core`, and as part of `make test`)
- Individual test files for specific features
- **benchmark/**: Performance tests
- Tests can be run individually: `./cora test/foo.cora`

## Language Features

### Minimal Special Forms
Only 4 special forms in the kernel:
- `quote` - Data literals
- `lambda` - Function creation
- `if` - Conditional branching
- `do` - Sequential evaluation

Everything else (`let`, `cond`, `match`, `func`, `defmacro`, etc.) is implemented as macros in `init.cora`.

### Pattern Matching
```lisp
(match (cons 1 2)
    (cons a b) a)
```

The `match` form expands to nested `if` expressions with proper symbol binding.

### Partial Application
```lisp
((+ 3) 4)  ; Returns 7 - (+ 3) returns a function waiting for the second argument
```

### The `func` Macro
Pattern-based function definition:
```lisp
(func map
  f [] => []
  f [x . y] => [(f x) . (map f y)])
```

Expands to a `lambda` with `match` in the body.

### Module System
```lisp
(package cora/lib/my-module
  (import "cora/lib/string")
  (export foo bar baz)
  ; code here
)
```

Modules are compiled to .so files and loaded dynamically via `import`.

## Working with the Codebase

### Adding New Primitives
1. Add primitive function to `src/runtime.c`
2. Add to `cora/init#*builtin-prims*` list in `init.cora`
3. Rebuild with `make`

### Adding Standard Library Functions
- Add to appropriate `.cora` file in `lib/`
- Recompile module: `make -C lib`
- For `toc.cora`, regenerate `toc.c` via bootstrap process

### Debugging Memory Issues
- Build with `ENABLE_ASAN=1 make` for AddressSanitizer
- Build with `ENABLE_TSAN=1 make` for ThreadSanitizer
- Check `src/gc.c` for GC-related issues
- Use conservative root scanning when adding new stack references

### Debugging Playbook (Used in Practice)

For flaky parallel/poller/network issues, use this order:

1. Reproduce with time-bounded loops
   - Example:
   - `for i in $(seq 1 30); do timeout 30 ./cora test/parallel/parallel-net-e2e.cora || break; done`
2. Capture crash stack with lldb
   - `lldb --batch -o 'run' -o 'bt' -o 'thread backtrace all' -- ./cora <test-file>`
3. Correlate generated C with source module
   - inspect `/tmp/cora-xxx-*.c`
   - search symbol table strings (`cora/lib/...#...`) to identify the failing `.cora` package
4. Avoid false negatives from compile-cache contention
   - do not run multiple `./cora` compile-heavy tests concurrently
   - parallel `./cora` processes can race on temporary/generated artifacts
5. Validate fixes with soak runs
   - rerun the same test repeatedly (20-100 runs) before concluding stability
6. Prefer defensive checks on wakeup/handle boundaries
   - stale wakeups should return safe no-op values, not assert or segfault

### Import/Build Cache Caveat

- Module loading can prefer `.so` over `.cora` depending on freshness checks.
- If a `.cora` fix is not taking effect, ensure stale `.so` artifacts are not shadowing the source.
- Keep regression runs serialized when diagnosing module-load issues.

### Understanding Tagged Values
The type system uses NaN-tagged doubles:
- Numbers: untagged doubles
- Other types: encoded as NaN values with tag bits
- See `src/types.c` for `PRIM_ISCONS`, `PRIM_ISSYMBOL`, etc.

### Common Patterns

**Reading S-expressions:**
```c
Obj exp = sexpRead(coraGetGC(co), stream, &errCode);
```

**Calling Cora functions from C:**
```c
Obj fn = coraSymbolGet(co, intern("function-name"));
Obj args[1] = {arg};
coraCall(co, fn, 1, args);
coraRun(co);
Obj result = coraGetResult(co);
```

**Creating values from C:**
```c
Obj num = coraMakeNumber(co, 42.0);
Obj str = makeCString(coraGetGC(co), "hello");
Obj cons = coraMakeCons(co, car, cdr);
```

## Important Constraints

- **Lisp-1**: Functions and variables share the same namespace
- **Proper Tail Calls**: Must use TCE (tail call elimination) in recursive loops
- **Continuation-based**: Control flow uses explicit continuations (see `runtime.c`)
- **Module namespaces**: Uses `package#name` convention for qualified symbols
- **Bootstrap invariant**: Changes to `init.cora` or `lib/toc.cora` must allow `make bootstrap` to pass

## Coding Conventions

### Language Policy
- **All code, comments, and documentation MUST be in English**
  - This includes: C source files, Cora source files, documentation files (README.md, etc.), and commit messages
  - Variable names, function names, and all identifiers should be in English
  - Comments should be written in clear, concise English
  - Exception: User-facing content may be localized as needed

This ensures international collaboration and code maintainability.

## LLM-Debuggability Improvements (Recommended Backlog)

These changes significantly improve automated debugging quality and speed:

1. Structured reader/parser errors
   - return explicit error objects with:
     - error code/category
     - file/module
     - line/column
     - nearby source snippet
     - expected token/form and actual token
   - avoid process-level abort for normal syntax errors

2. Stable, machine-readable diagnostics
   - add optional JSON-line error output mode (env flag)
   - include module + phase tags: `reader`, `macroexpand`, `eval`, `codegen`, `runtime`

3. Runtime assert policy hardening
   - replace internal `assert` on user-triggerable paths with recoverable error returns
   - reserve hard aborts for invariants that cannot be recovered safely

4. Crash context retention
   - keep generated `/tmp/cora-xxx-*.c` files on failure by flag
   - print mapping between generated unit and source module automatically

5. Deterministic debug knobs
   - introduce env-controlled tracing categories (e.g. import/scheduler/poller/mailbox)
   - make logs grep-friendly and one-event-per-line

6. Concurrency diagnostics
   - add optional checks for:
     - duplicate VM run detection
     - stale/invalid wakeup-handle usage
     - mailbox misuse across VM boundaries

7. Test harness ergonomics
   - standardize shell test scripts with:
     - timeout
     - clear PASS/FAIL summary
     - deterministic exit codes
     - optional stress mode (`N` loops)
