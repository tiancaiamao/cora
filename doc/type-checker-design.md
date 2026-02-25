# Cora 0.6 Type Checker Design

## 1. Context

Cora `v0.5.0` has been released with a working concurrency runtime. The `0.6` focus is the type system MVP.

Cora already has an HM-style engine in `lib/infer.cora`, but the current behavior is still closer to ad-hoc inference than a production type-checking pipeline. The next step is to build a checker-first system: predictable, annotation-driven, and able to reject invalid programs before runtime.

This document summarizes:

- ideas from the blog post <https://tiancaiamao.github.io/type-checker.md/>
- current repository behavior (`infer`, `toc`, runtime `try/throw`, CML/async libraries)
- the target design for `0.6`

## 2. Design Position: Type Check First, Not Full Inference

The 0.6 target is **type checking**, not maximal automatic inference.

Rationale:

- Cora needs stable and early error interception in real code, especially with directives (`:declare`, `:type`) and library APIs.
- Runtime control effects (`try/catch/throw`, continuation resume, CML operations) are difficult to model with plain HM inference alone.
- Annotation-driven checking produces better diagnostics and lower implementation risk for 0.6.

We still keep limited local synthesis (infer) where useful, but inference is a supporting mechanism inside a checker, not the product goal.

### 2.1 0.6 Architecture Freeze (No Redesign Later)

For 0.6, "freeze" means freezing the checker architecture, not changing surface language syntax.

- `try/chunk/handler/resume` surface semantics stay stable.
- CML surface APIs stay stable.
- The checker core-form layer is frozen early and reused for the rest of 0.6.
- The checker state schema and error schema are frozen early.
- Later work in 0.6 should be additive (more rules, more coverage, better diagnostics), not redesign.

## 3. Key Ideas from the Blog (Adapted to Cora)

The blog motivates a practical checker with two judgments:

- `infer`: synthesize a type from an expression when possible
- `check`: validate an expression against an expected type

Useful takeaways for Cora:

- Split checking and inference explicitly instead of forcing one-directional inference.
- Keep checker state explicit (`env`, substitutions/constraints, error context).
- Prefer checking with expected types at boundaries (function bodies, annotated declarations, API calls).
- Build diagnostics from structured checking context, not only from final unify failure.

This aligns with Cora's current need: controllable, annotation-aware checking with good failure locality.

## 4. Current State Snapshot

### 4.1 `lib/infer.cora`

Current capabilities:

- unification (`unify`), type variables (`tvar`), substitution application
- declaration environment (`declare`, `*type-env*`)
- custom rules via `deftype` / `*type-rule*`
- top-level `check-type!`

Current limitations for 0.6 goals:

- `check-type!` throws a generic error string without structured context.
- unbound symbols may be silently skipped (`"skip check"` path), reducing safety.
- no dedicated typing rule for `try`/`throw` continuation semantics.
- no model for CML operation protocol (`perform`, `yield`, wrapped ops).

### 4.2 `lib/toc.cora`

Current behavior:

- supports `:type` and `:declare` splitting/injection.
- injects `cora/lib/infer#check-type!` around expressions when type check is enabled.

Gaps:

- checking is injected expression-by-expression with fresh type vars, not yet a full module-level typed pass.
- limited source-aware diagnostics.

### 4.3 `src/runtime.c`

Runtime already defines continuation-based exception control:

- `try` captures delimited continuation segment
- `throw` transfers control to handler
- handler receives thrown value and a resume continuation
- unhandled `throw` exits immediately

Type system currently does not encode this contract.

### 4.4 `lib/cml.cora` and `lib/async.cora`

CML uses `throw` as a scheduling/effect transport mechanism (`yield`, `perform`, operation tuples). Async APIs depend on this protocol.

The old inference path does not model these control/effect contracts, so errors may survive until runtime.

## 5. Scope for 0.6

### In Scope

- checker-first core for language forms (`lambda`, `if`, `do`, `let`, calls, declarations)
- stable semantics for `:declare` / `:type`
- explicit type rules for `try/catch/throw`
- explicit type signatures for CML/async exported APIs at typed boundaries
- test coverage under `test/type/` as a dedicated suite

### Out of Scope (for initial 0.6)

- full principal type inference for arbitrary unannotated programs
- full subtyping/effect-row polymorphism
- complete FFI type model

## 6. Proposed Architecture

### 6.1 Pipeline

1. Parse source.
2. Normalize to a checker core-form layer (virtual typed IR for checking only).
3. Collect `:declare`/`:type` directives and build a module type context.
4. Check top-level forms against declared or synthesized expectations.
5. Run effect/control checks (`try/throw`, CML op protocol).
6. Emit structured diagnostics (expression + expected + actual + phase + location when available).

Note: this core-form layer is a checker-internal model and does not require user-visible syntax changes.

### 6.2 Core Form Layer (Checker-Internal)

Initial frozen core forms for 0.6:

- literals and symbols
- `quote`
- `lambda`
- `call`
- `if`
- `do`
- `let`
- `set`
- `try`
- `throw`

This follows the Shen-style idea: type-check against a stable intermediate layer, then continue to lower runtime/compile pipeline separately.

### 6.3 Core Engine Shape

- `infer(expr, env, state) -> Type | Error`
- `check(expr, expected, env, state) -> State | Error`

`state` carries:

- substitutions (`subst`)
- lexical type environment (`env`)
- module declaration environment (`decl_env`)
- control stack (`try`/resume metadata for control-aware checks)
- expected return stack (for continuation-aware checks)
- current checking path (for diagnostics)
- source mapping (if available)
- strictness flags (for unbound-symbol policy, directive policy)

Error object (frozen shape for 0.6):

- rule id
- phase
- expression (normalized form)
- expected type
- actual type
- optional location
- optional notes

### 6.4 Type Forms (0.6 MVP)

- base: `int`, `bool`, `string`, `symbol`, `unit`
- function: `A -> B` (curried style already used in Cora)
- type variable: internal checker vars
- user constructors via `deftype` hooks
- internal bottom-like marker (`never`) for non-returning control paths (checker-internal)

## 7. Typing Rules (Core)

- literals map to base types
- symbol lookup uses a staged policy (see Section 7.1), replacing silent skip behavior
- `if` requires condition `bool`; both branches must check against the same expected type
- `do` checks sequence and threads constraints from earlier expressions into later ones
- `lambda` is checked against expected function type whenever available
- function call checks callee as function and argument compatibility
- `set` must follow declared binding type (or declared-on-first-assignment policy, configurable)

### 7.1 Symbol Visibility Ownership

For 0.6, symbol/module visibility is owned by a resolver pass, not by `infer`.

- resolver checks module closure and namespaced symbol visibility
- resolver uses module-local import table plus `<module>#*ns-export*`
- `infer` treats unresolved globals as dynamic and focuses on type consistency only

Status in current implementation:

- `lib/resolve.cora` provides resolver checks and tests
- `toc` auto-wiring of resolver is staged due bootstrap constraints and should be finalized in follow-up

### 7.2 `Unknown/Dynamic` Policy

The 0.6 checker is allowed to be imprecise and broader than full inference:

- `Unknown/Dynamic` values can pass through checking when no definite contradiction exists
- reject only definite type errors
- avoid over-constraining programs that are valid under runtime dispatch/continuation behavior

This keeps type checking practical while preserving Cora flexibility.

## 8. `try/catch/throw` Type-Checking Model

### 8.1 Runtime Contract to Preserve

From runtime behavior, `try` installs a handler, `throw` jumps to it, and handler gets `(value, resume)`.

### 8.2 Checker Contract

For `try(chunk, handler)`:

- `chunk` is checked to result type `T`
- current 0.6 skeleton treats `resume` input as broad/dynamic (placeholder for later refinement)
- handler overall result is checked as `T` on non-resume paths
- therefore `try(...)` has type `T`

For `throw(v)`:

- no static requirement that a surrounding `try` exists in 0.6
- expression type is treated as compatible with the surrounding expected type (`throw` resumes into the original throw site)

Unhandled `throw` remains a runtime error. A stronger effect-tracking mode can be added after 0.6 if needed.

## 9. CML/Async Type-Checking Model

Old infer does not cover CML control protocol. 0.6 should add explicit signature-level checker contracts.

### 9.1 Operation Protocol

Treat CML operation values as a typed protocol (conceptually `Op<T>`), currently represented by runtime tuples `[try block wrap]`.

Checker responsibilities:

- enforce `perform : Op<T> -> T`
- enforce `wrap : Op<A> -> (A -> B) -> Op<B>` behavior
- enforce `yield : unit -> unit`
- enforce `spawn : (() -> unit) -> unit` at the type-check boundary

### 9.2 Scheduler/Continuation Path

`yield`, `perform`, and async retry paths use `throw` payload callbacks. Checker enforces type signatures at API boundaries.

Pragmatic 0.6 approach:

- start with explicit signatures for core CML exported APIs
- tuple shape/callability and symbol visibility are resolver/lowering/runtime concerns, not type-check errors
- ensure definite type misuse is rejected at type-check phase

## 10. Directive Semantics (`:declare`, `:type`)

- `:declare` introduces stable type signatures for symbols.
- `:type` installs or updates custom type checking rules.
- both must be processed before checking ordinary forms that depend on them.
- directive errors should surface as type-check errors (not runtime failures).

## 11. Diagnostics Requirements (for Implementation Phase)

The checker should return structured errors, at minimum:

- failing expression (or normalized form)
- expected type
- actual/inferred type
- failing rule name (e.g., call-arg mismatch, if-branch mismatch, do-arity)
- optional source location if available from reader/macroexpansion

`check-type!` should translate structured errors into human-friendly output instead of generic `"type-check failed"`.

## 12. Test Strategy

Consolidate and expand type tests under `test/type/` with focused groups:

- `core/`: literals, functions, calls, control forms
- `directive/`: `:declare`, `:type`, ordering, scope
- `control/`: `try/catch/throw`, resume behavior checks
- `cml/`: `perform`, `yield`, op composition
- `stdlib/`: selected typed stdlib entry points
- `regression/`: previously broken examples and bug fixes

The type suite should run in CI as an independent gate.

Coverage rollout is gradual in 0.6:

- start with a typed coverage target set (initially `test/type` and selected `cora/lib/*` modules)
- run `strict` mode only on that target set
- expand the target set incrementally as declarations are added

## 13. Milestone Proposal (Post-Doc)

- M0: architecture lock-in (core forms, checker state, error schema, try/CML contracts)
- M1: checker core stabilization and staged symbol policy (`compat`/`strict`)
- M2: `try/catch/throw` rules + tests
- M3: CML protocol checks + tests
- M4: diagnostics upgrade and stdlib annotation/check expansion

Detailed plan and issue breakdown should be produced after this design doc is reviewed.

The concrete lock-in artifact is tracked in `doc/type-checker-m0-freeze.md`.

## 14. References

- Blog: <https://tiancaiamao.github.io/type-checker.md/>
- Current implementation:
  - `lib/infer.cora`
  - `lib/toc.cora`
  - `src/runtime.c`
  - `lib/cml.cora`
  - `lib/async.cora`
