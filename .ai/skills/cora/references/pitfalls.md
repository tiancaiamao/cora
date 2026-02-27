# Common Pitfalls

Most Cora errors come from syntax confusion with other Lisps.

## Critical Syntax Errors

### 1. `let` syntax (MOST COMMON!)

```lisp
;; CORRECT - body in same form
(let x 1
  (display x))

;; CORRECT - multi binding (sequential)
(let a 3
  b (+ a 1)
  (+ a b))

;; WRONG - extra parens (Common Lisp style)
(let ((a 3) (b 5)) (+ a b))

;; WRONG - extra ) closes let, body outside!
(let data (json-load-file "f.json"))
  (display data))  ;; data undefined!
```

### 2. `defun` has no docstrings

```lisp
;; WRONG - string is function body
(defun foo (x) "docs" (+ x 1))

;; CORRECT
(defun foo (x) (+ x 1))
```

### 3. `match` vs `func` arrows

```lisp
;; func - uses =>
(func len
  () => 0
  [_ . xs] => (+ 1 (len xs)))

;; match - NO =>
(match lst
  [] 0
  [x . y] (f x y))
```

### 4. `load-so` vs `import`

```lisp
;; WRONG - top-level not executed
(load-so "core.so")
(display INDEX)  ;; undefined!

;; CORRECT
(import "myapp/core")
```

### 5. Unexported variables cause segfault

```lisp
;; In package A (INDEX not exported)
(package "A"
  (def INDEX [1 2 3])
  (export foo))

;; WRONG - segfault, not friendly error
(display A#INDEX)
```

### 6. Dotted pairs need brackets

```lisp
;; CORRECT
[x . y]

;; WRONG
(x . y)
```

### 7. Quote ONLY for symbols

```lisp
;; CORRECT
'foo        ;; symbol
[a b c]     ;; list literal

;; WRONG
'(a b c)    ;; don't quote lists
```

### 8. Symbol constants in match need quote

```lisp
;; CORRECT
(match x
  'foo 1    ;; symbol constant
  _ 0)

;; WRONG - foo is variable binding
(match x
  foo 1)
```

### 9. `if` requires strict booleans

```lisp
;; WRONG
(if lst 'yes 'no)  ;; () not false!

;; CORRECT
(if (null? lst) 'yes 'no)
```

### 10. Operators are binary

```lisp
;; WRONG
(+ 1 2 3)

;; CORRECT
(+ (+ 1 2) 3)
```

### 11. `display` requires `cora/lib/io`

```lisp
;; WRONG
(display "hello")  ;; may crash as undefined symbol/value

;; CORRECT
(import "cora/lib/io")
(display "hello")
```

### 12. `[]` in source is `(list ...)` in AST

```lisp
;; source
[a b c]

;; reader output shape (before evaluation)
(list a b c)
```

When writing static passes (type checker, resolver, macro transforms), do not
assume bracket lists arrive as nested `cons` trees.

### 13. `do` is fixed-arity (exactly 2)

```lisp
;; CORRECT
(do a b)

;; CORRECT (3+ expressions)
(begin a b c)

;; WRONG
(do a b c)
```

### 14. Don't mix resolver errors into type checker

```lisp
;; WRONG mental model
;; "type checker should reject all module visibility / symbol resolution /
;; structural protocol issues"

;; CORRECT layering
;; - type checker: type consistency on core forms
;; - resolver/lowering/runtime: visibility, module closure, non-type structure checks
```

### 15. Resolver now owns some literal structural guards

```lisp
;; These are resolver-phase errors (not type-check errors):
;; - try handler literal lambda arity must be 2
;; - cora/lib/cml#perform literal op must be a 3-slot tuple
;; - cora/lib/cml#wrap literal mapper lambda arity must be 1
;;
;; Keep checks "definite only":
;; literal mismatch => reject early
;; dynamic expression => allow (defer to later phase/runtime)
```

### 16. Resolver in REPL/script is per-form, not whole-module

```lisp
;; If resolver is applied expression-by-expression, it cannot infer
;; cross-form import context reliably.
;;
;; Prefer resolver checks in module/compile pipeline (whole source unit),
;; not per-form REPL interception.
```

### 17. Avoid top-level helper name `check` in scripts

```lisp
;; Fragile in some source-compile paths:
(defun check (exp typ) ...)

;; Safer:
(defun tc-check (exp typ) ...)
```

`check` can collide with existing global symbols in mixed import/source-compile
contexts and cause "attempt to call a non-function object" at runtime.

### 18. `tc` is compile-unit scoped (do not assume import inheritance)

```lisp
;; A.cora
(import "cora/lib/infer")
(tc true)
(load "B.cora")

;; B.cora (no tc directive)
;; => default tc OFF for B
```

Type-check enablement is decided per source unit during compile.
A unit without explicit `(tc true|false)` does not inherit caller/importer setting.

### 19. In `(package ...)`, keep `import`/`export` before other forms

```lisp
;; BAD: `tc` before export breaks package parsing shape
(package "cora/lib/x"
  (import "cora/lib/infer")
  (tc true)
  (export f)
  ...)

;; GOOD
(package "cora/lib/x"
  (import "cora/lib/infer")
  (export f)
  (tc true)
  ...)
```

`package` parsing only consumes leading `import`/`export` forms.
If other forms appear first, later `export` is treated as normal code and may fail.

### 20. `define-record` expansion is not yet tc-clean under module-wide `tc true`

```lisp
(package "cora/lib/x"
  (import "cora/lib/define-record")
  (export ...)
  (tc true)   ;; may trigger false-positive type failures in expanded low-level forms
  (define-record <x> ...)
  ...)
```

For now, keep declarations in such modules, but enable module-wide `tc true` only after
macro expansion typing/lowering rules are aligned.

### 21. `(:declare ...)` currently depends on unit `tc` enablement

```lisp
;; If tc is OFF for this compilation unit,
;; :declare forms are not injected by current split/generate pipeline.

(:declare 'f `(int -> int))
```

Use `(:declare ...)` in units already on `(tc true)`.
For units not yet tc-clean (e.g. macro-heavy modules), keep runtime `declare` calls
so downstream modules can still consume their exported type signatures.

### 22. `(tc true|false)` should be compile directive inside modules, not runtime side effect

```lisp
;; In package/body compilation, strip tc directive forms from emitted runtime code.
;; Otherwise module init mutates global *typecheck* and leaks into unrelated modules.
```

Use tc to control compile-unit checking only. Do not let imported module init change
another module's compile mode.

### 23. Keep standalone `(tc true|false)` executable in REPL/script mode

```lisp
;; REPL/script reads one form at a time.
;; If split pass strips standalone `(tc true)` to empty begin, tc never flips on.
```

When preprocessing single toplevel form, preserve literal tc directive as expression.
For package/begin body compilation, still strip directive from emitted runtime code.

### 24. Editing `lib/toc.cora` requires syncing `lib/toc.c` immediately

```lisp
;; If toc.cora is newer than toc.so, import may fallback to toc.cora source compile.
;; But compiling toc.cora itself needs `cora/lib/toc#compile-to-c` already loaded.
;; This can deadlock bootstrap.
```

After changing `lib/toc.cora`, regenerate `lib/toc.c` and rebuild `lib/toc.so` in one step.
Also invalidate stale generated `.so` files for affected cora modules if compiler semantics changed.

### 25. Prefer `func ... where` over `match ... where`

```lisp
;; BETTER
(func f
  x => ... where (number? x)
  _ => ...)

;; AVOID in checker/hot paths
(match x
  y where (number? y) ...
  _ ...)
```

Some source-compile paths currently handle guarded `match` clauses poorly and can
fail during expansion with low-signal runtime errors.

### 26. Extend type checker with `deftype`, not core unifier hacks

```lisp
;; BETTER
(deftype 'op type-check-for-op)

;; AVOID
;; adding ad-hoc 'op branches directly in unify/occur?/apply-subst
```

Keep the core HM machinery generic. Domain types should be expressed as pluggable
rules so new features do not destabilize baseline inference/checking behavior.

### 27. For bootstrap function bindings, use symbol values (not zero-arg calls)

```lisp
;; GOOD
(set 'car car)

;; BAD
(set 'car (car))
```

With module-level `(tc true)`, zero-arg call form is typed as a partial-application
shape `(-> (A -> B))`, while bootstrap binding usually expects direct function value
`(A -> B)`.

Use direct symbol values for these bindings (`car`, `cdr`, `+`, `symbol?`, etc.).

### 28. Keep `sys.so` newer than `sys.cora` during bootstrap experiments

```lisp
;; If sys.cora mtime > sys.so, loader may recompile sys from source.
;; In unstable tc experiments this can pull in broken bootstrap states.
```

After any temporary `sys.cora` experiment, either:
1. rebuild/sync `sys.so` immediately, or
2. update `sys.so` mtime so loader uses the known-good shared object path.
