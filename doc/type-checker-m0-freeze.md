# Cora 0.6 Type Checker M0 Architecture Freeze

## 1. Goal

This document freezes the type-checker architecture for Cora `0.6`.

"Freeze" does not mean freezing language syntax. It means freezing the checker's internal contracts so the rest of `0.6` can proceed without redesign.

## 2. Frozen Decisions

### 2.1 Product Scope (0.6)

- `try/catch/throw` must be covered by type checking.
- CML exported function signatures (`perform`, `wrap`, `yield`, `spawn`) must be covered by type checking.
- The checker is annotation-driven and check-first.
- Inference is local support, not the primary product goal.

### 2.2 Checker Layering

`Source -> Checker Core Form -> Typed Validation -> Existing Compile/Runtime Pipeline`

The checker core form is checker-internal and can be virtual. No user-facing syntax change is required.

### 2.3 Frozen Core Forms (for 0.6)

- literals
- symbol
- `quote`
- `lambda`
- `call`
- `if`
- `do`
- `let`
- `set`
- `try`
- `throw`

Any new syntax must be lowered to this layer before type checking.

## 3. Frozen Checker State Schema

Checker state must include at least:

- `subst`: current substitution set.
- `env`: lexical bindings in the current scope.
- `decl_env`: module/global declarations (`:declare`, builtins, stdlib signatures).
- `try_ctx_stack`: stack of try/resume metadata for control-aware checks and diagnostics.
- `ret_ctx_stack`: expected return contracts for continuation-related checks.
- `path`: structured checking path for diagnostics.
- `source_map`: optional location mapping for normalized forms.
- `flags`: strictness policy (`unbound_symbol`, directive policy).

This schema is frozen for `0.6`; fields can be extended but existing meanings should not be repurposed.

## 4. Frozen Error Schema

Checker errors must be structured objects with fields:

- `rule_id`
- `phase`
- `expr`
- `expected`
- `actual`
- `location` (optional)
- `notes` (optional)

`check-type!` can render these into text, but internal error transport must stay structured.

## 5. Frozen Control-Effect Contracts

## 5.1 `try`

For `try(chunk, handler)`:

- check `chunk : T` (normal return path)
- current skeleton keeps `resume` input broad/dynamic; refinement can be added later
- check handler non-resume path as `T`
- result type is `T`

Equivalent uncurried intuition: `handler(value, resume) -> T`.

## 5.2 `throw`

For `throw(v)`:

- no mandatory surrounding `try` requirement in 0.6 static checking
- expression type is compatible with the surrounding expected type
- unhandled throw remains a runtime error

A stricter effect-tracking mode can be layered after 0.6 without changing surface syntax.

## 6. Frozen CML Contracts (0.6 MVP)

### 6.1 Operation Protocol

Introduce a checker-level logical type constructor `Op<T>` (internal model). Runtime may still represent operations as tuples.

Required checker contracts:

- `perform : Op<T> -> T`
- `wrap : Op<A> -> (A -> B) -> Op<B>`
- `yield : unit -> unit` (implemented through control effect, but surface type remains simple)
- `spawn : (() -> unit) -> unit`

### 6.2 Pragmatic Representation Rule

In 0.6, CML ops can stay tuple-backed at runtime. Tuple shape/callability validation belongs to resolver/lowering/runtime validation layers, not type-check phase.

## 7. Policy Freeze

- Symbol/module visibility belongs to resolver pass, not infer.
- Resolver classification is module-local:
  - module import table + `<module>#*ns-export*`
  - builtins come from an implicit runtime module (default-imported)
- `infer` remains intentionally broad and dynamic for unresolved globals.
- Type checking is intentionally broader than full inference: reject only definite errors.
- `:declare` and `:type` are processed before ordinary forms in the same top-level unit.
- New stdlib code added in 0.6 must include usable type declarations.

## 8. Acceptance Criteria for M0 Freeze

M0 is complete when:

1. Core forms, checker state, and error schema are codified in docs and reflected in code-level data structures.
2. `try/throw` and CML signature-level checker contracts are implemented as rule stubs or full rules (no ambiguity).
3. A type test manifest exists with active and pending cases mapped to this contract.

## 9. TDD First Set

The initial test matrix lives at:

- `test/type/m0/spec-manifest.txt`
- `test/type/m0/run-spec.sh`

`active` cases must pass now.

`pending` cases encode required 0.6 behavior and are expected to fail until corresponding rules land.

## 10. References

- `doc/type-checker-design.md`
- `lib/infer.cora`
- `lib/toc.cora`
- `src/runtime.c`
- `lib/cml.cora`
- `lib/async.cora`
- <https://tiancaiamao.github.io/type-checker.md/>
