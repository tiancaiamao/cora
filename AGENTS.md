# AGENTS.md

This file provides guidance for AI agents working on the Cora project.

## Project Overview

Cora is a Lisp-1 programming language inspired by Scheme, Shen, and FemtoLisp. Key features:
- Minimal special forms: quote, lambda, if, do
- Proper tail call optimization
- Partial function application
- Pattern matching via `match` form
- Macro system
- Generational and incremental garbage collection

## Project Structure

```
cora/
├── src/          # Core runtime implementation
│   ├── runtime.c/h   # Function dispatch, core operations
│   ├── types.c/h     # Type system and tagged values
│   ├── gc.c/h        # Garbage collection
│   ├── reader.c/h    # S-expression parser
│   ├── eval.c/h      # Evaluator
│   └── ...
├── lib/          # Standard library modules
│   ├── toc.c         # Core library
│   └── ...           # String, I/O, OS, Net, Hash, Rand, JSON, Markdown modules
├── test/         # Test files
├── doc/          # Documentation
└── main.c        # Entry point
```

## Build Commands

```bash
# Build the project
make

# Clean build artifacts
make clean

# Run tests
make test

# Format C code (uses indent)
make fmt

# Bootstrap test
make bootstrap

# Install locally
make install-local

# Build with AddressSanitizer
ENABLE_ASAN=1 make

# Build with ThreadSanitizer
ENABLE_TSAN=1 make
```

## Code Style

- C code formatting: `make fmt` (uses indent with specific options)
- Follow existing code patterns in src/ directory
- No unnecessary comments (unless explicitly requested)

## Key Components

- **Runtime System** (`src/runtime.c`): Function dispatch, memory management, core functionality
- **Type System** (`src/types.c`): Tagged value representation
- **Garbage Collection** (`src/gc.c`): Generational and incremental GC
- **Reader** (`src/reader.c`): Parses S-expressions
- **Evaluator** (`src/runtime.c`): Executes Cora code
- **Compiler**: Transforms Cora to C code (part of runtime)

## Testing

- Test files in `test/` directory
- Run `make test` to execute tests
- Bootstrap test: `make bootstrap`

## Working on the Project

When making changes:
1. Read relevant source files first
2. Follow existing patterns and conventions
3. Test your changes with `make test`
4. Format code with `make fmt` if needed

## Common Tasks

- Add new language features: Update runtime, types, and evaluator
- Add standard library functions: Edit `lib/toc.c` or create new module files
- Fix memory issues: Check `src/gc.c` and use sanitizers
- Improve compilation: Review compiler pipeline in runtime

## Notes

- This is a Lisp-1 dialect (functions and variables share namespace)
- The project uses a generational, incremental garbage collector
- Modules are implemented as shared objects loaded at runtime
- The compiler generates C code that is compiled to shared objects
