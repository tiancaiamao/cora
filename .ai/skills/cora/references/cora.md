# Cora Language Specification (For LLMs)

## Constraints

1. Understand the language only based on provided materials, do not draw analogies to other languages
2. When information is insufficient, explicitly state "uncertain"
3. Answers violating rules are considered incorrect

---

## Language Overview

**Design**: Lisp-1, 4 core special forms, macro system, pattern matching, partial application, strict tail recursion
**Evaluation**: reader → macroexpand → eval2 (compiles to closures), strict evaluation
**Types**: Dynamic, integers/strings/booleans `true/false`/symbols/cons lists/vectors/closures/continuations
**Errors**: `try/throw` + resumable continuations, failures terminate with direct error

---

## Core Syntax

### Basic Forms

| Form | Evaluation Rule | Return Value | Common Errors |
|------|-----------------|--------------|---------------|
| `'x` or `(quote x)` | No evaluation | Returns as-is | Quoting expressions that shouldn't be quoted |
| `(if t a b)` | Evaluate `t` first, only evaluate selected branch | Branch result | `t` is not `true/false` |
| `(do a b)` | Evaluate `a` then `b` | Result of `b` | More than two expressions |
| `(lambda (x) body)` | Returns closure, body not evaluated | Closure | Multiple expressions in body without `begin` |
| `(let x v body)` | Evaluate `v` first, then `body` | Result of `body` | Binding list written in non-pair form |
| `(f a b)` | Evaluate `f` first, left-to-right argument evaluation | Call result or partial application | Argument count/type mismatch |
| `(match v p e ...)` | Evaluate `v` once, rules match sequentially | Result of matched expression | No match → error |
| `(try thunk handler)` | Call `thunk` first | `thunk` return value or handler result | Nested throw in handler doesn't re-enter |
| `(throw v)` | Jump directly to nearest `try` | Determined by handler | No try → immediate crash |
| `(apply f args-list)` | Evaluate `f` first, then `args-list` | Call result | `args-list` is not a list or length mismatch |

### Evaluation Rules (In Plain Terms)

Cora is a strictly evaluated Lisp. Except for 4 special forms (`quote`, `if`, `do`, `lambda`), everything is a function call; evaluate the function position first, then evaluate arguments left-to-right. Insufficient arguments return a partially applied function; excess arguments first call to get a result, then continue applying remaining arguments. `let`/`lambda` form lexical scopes; `set/def` only affect globals. `match` rules are top-to-bottom with `where` guards, all failing causes error. `try/throw` provides resumable exceptions: handler receives value and continuation, calling continuation resumes execution from throw position.

### Key Rules

- **Only `true`/`false` are booleans**, conditions must explicitly return them
- **`let` is sequential binding** (let*), expands to nested lets
- **Insufficient args → partial application, excess args → continue application**
- **Unquoted symbols in match are variable bindings**, matching constants must write `'sym`
- **`backquote` only supports `,`**, does not support `,@`
- **Only 4 special forms**: `quote`, `if`, `do`, `lambda`. Others (`def`, `defun`, `let`, `func`, `begin`, `and`/`or`/`cond`) are macros

---

## Syntactic Sugar and Literals

```
[]           → (list)
[x y z]      → (list x y z)
[x . rest]   → (list-rest x rest)
`(...)`      → (backquote ...)
`,x`         → (unquote x)
```

**Critical**: `[a . b]` ≠ `(a . b)`. Dotted pairs in parentheses are not supported, only use brackets.
**Literals**: Integers (including negative sign), strings, `true/false`, `()`

---

## `func` vs `match` (Core Difference)

### `func` - Pattern-Matching Function Definition
```lisp
(func name
  pattern1 pattern2 => body-expr
  pattern1 pattern2 => body-expr)
```

### `match` - Expression Matching
```lisp
(match value
  pattern1 expr1
  pattern2 expr2)
```

**Difference**: `func` uses `=>`, `match` does not use `=>`.

**Comparison Example**:
```lisp
;; Using defun + match
(defun length (lst)
  (match lst
    () 0
    [_ . xs] (+ 1 (length xs))))

;; Using func (recommended)
(func length
  () => 0
  [_ . xs] => (+ 1 (length xs)))
```

---

## Pattern Syntax

**Patterns are a separate sub-language**, only use these forms:

### Basic Patterns
```lisp
()          ;; Empty list
[]          ;; Empty list literal
[x y z]     ;; Three-element list
[x . xs]    ;; Head + tail
_           ;; Any value (conventional symbol, not special syntax)
'foo        ;; Symbol constant
sym         ;; Variable binding (unquoted symbol)
```

### Nested Patterns
```lisp
[[a b] [c d]]     ;; Nested lists
[car . cdr]       ;; cons cell
```

### Forms Equivalent to Syntactic Sugar
```lisp
(list x y z)       ;; Equivalent to [x y z]
(list-rest x y z)  ;; Equivalent to [x y . z]
(cons x xs)        ;; Equivalent to [x . xs]
```

**Constraint**: Use `[x . y]` in patterns, not `(x . y)`. Don't write function calls or custom macros in pattern positions. Unless you are absolutely certain the macro expands to the above legal patterns, it's considered invalid.

---

## `where` Guards

```lisp
(func filter
  _ [] => []
  pred [x . xs] => [x . (filter pred xs)] where (pred x)
  pred [_ . xs] => (filter pred xs))
```

**Format**: `pattern => expr where condition`, where clause at the end.
**Constraint**: `where` only belongs to `func`, `match` does not support `where`.

---

## Partial Application

Insufficient arguments return partial application, excess arguments continue application:

```lisp
((+ 1) 2)           ; => 3
(((+) 1) 2)         ; => 3

((lambda (x) (lambda (y) (lambda (z) z))) 1 2 3)  ; => 3
```

**Error Example**:
```lisp
(+ 1 2 3)           ; Wrong: + is binary, excess args treat result as function call
```

**Using `apply`**:
```lisp
(apply + [1 2])     ; => 3
```

---

## `try` / `throw` (Resumable Exceptions)

### Basic Usage
```lisp
(try (lambda () (throw 42))
     (lambda (v resume) v))         ; => 42
```

### Resume
```lisp
(try (lambda () (+ (throw 1) 2))
     (lambda (v resume)
       (resume (+ v 10))))          ; => 13
```

### Rules
- `(try thunk handler)` - `thunk` is a nullary function, `handler` has form `(lambda (v resume) ...)`
- `throw` jumps to the nearest `try`
- `resume` returns to throw position to continue execution, resumed execution still within that try's thunk
- Nested `throw` in handler won't be caught by the same `try`

---

## Global Symbols and Modules

### `set` (Global Symbols)
```lisp
;; Correct
(set 'x 42)
(set (gensym) 1)

;; Wrong
(set x 42)      ; x will be evaluated, set needs a symbol
```

### Reading Globals
```lisp
(value 'x)          ; => 42
(value-or 'y 0)     ; => 0 (if y is undefined)
```

### `def` / `defun` / `set` Differences
- `def` is a special form, defines global variables
- `defun` is a macro, expands to `def + lambda`
- `set` is a function, only sets global symbols, must be explicitly quoted

Prefer `func` over `defun` when pattern match is used on parameters.

### Namespaces and `package`
```lisp
;; Define module
(package "demo/math"
  (export add1)
  (defun add1 (x) (+ x 1)))

;; Import module
(import "demo/math")
(add1 41)           ; => 42

;; Explicit namespace usage
(cora/lib/io#display "hello")
```

### Rules
- `package` rewrites unbound symbols to `pkg#name`
- `import` resolves symbols to corresponding modules based on export table
- You can explicitly write `cora/lib/io#display` to bypass automatic resolution

---

## List Operations

```lisp
(cons x xs)        → (x . xs)
(car (x . y))      → x
(cdr (x . y))      → y
(cons? x)          → true/false
(list x y z)       → (x y z)
(list-rest x y z)  → (x y . z)
(apply f [x y])    → (f x y)
```

### Examples
```lisp
(cons 1 (cons 2 ()))          ; => (1 2)
(car (cons 1 2))              ; => 1
(cdr (cons 1 2))              ; => 2
(cons? (cons 1 2))            ; => true

(list 1 2 3)                  ; => (1 2 3)
(list-rest 1 2 3)             ; => (1 2 . 3)
```

---

## Macros

### Defining Macros
`defmacro` accepts complete syntax tree `exp`, must return new syntax tree.

```lisp
(defmacro unless (exp)
  (let cond (cadr exp)
       body (caddr exp)
       ['if cond false body]))

(unless false 42)  ; => 42
```

### Backquote and Comma
```lisp
(defmacro my-let (exp)
  (let var (cadr exp)
       val (caddr exp)
       body (cadddr exp)
       `(let ,var ,val ,body)))
```

**Rules**:
- Only supports `,` (unquote), does not support `,@` (unquote-splicing)
- Macros are unhygienic, prone to variable capture
- Must use `gensym` to generate fresh variables

### Using `gensym` to Avoid Capture
```lisp
(defmacro with-temp (exp)
  (let tmp (gensym)
       body (cadr exp)
       `(let ,tmp 0 ,body)))
```

---

## I/O

```lisp
(import "cora/lib/io")
(display "hello")    ; Output
(display 123)
```

---

## Common Errors (Must Read)

### Error 1: Using `=>` in `match`
```lisp
;; Wrong
(match lst
  [] => 0
  [x . y] => 1)

;; Correct
(match lst
  [] 0
  [x . y] 1)
```

### Error 2: Parentheses Dotted Pair
```lisp
;; Wrong
(match pair
  (key . value) ...)

;; Correct
(match pair
  [key . value] ...)
```

### Error 3: `set` with Variable
```lisp
;; Wrong
(let x 1
  (set x 2))  ;; x will be evaluated

;; Correct
(let x (gensym)
  (begin
    (set x 1)
    (set x 2)))
```

**Rule**: `set` only accepts symbols, use `quote` or `gensym`.

### Error 4: Wrong Let Form
```
;; Wrong
(let a 3)
(+ a 1)    ;; a is not inside the lexical let form

;; Correct
(let a 3
    (+ a 1))
```

```
;; Wrong
(let ((a 3) (b 5))    ;; wrong let syntax
    (+ a b))

;; Correct
(let a 3
    b (+ a 1)
    (+ a b))
```

```
;; Wrong
(let odd? (lambda (n)
                 (if (zero? n)
                     #f
                     (even? (- n 1))))
     even? (lambda (n) (or (zero? n) (odd? (- n 1))))
  (odd? 10))    ;; no mutual recursion in let, and no letrec form

;; Correct
(defun odd? (n) ...)
(defun even? (n) ...)
(odd? 10)
```

### Error 5: Function Call vs List
```lisp
;; Wrong
(1 2 3)  ;; This calls 1, not a list

;; Correct
[1 2 3]  ;; List literal
```

### Error 6: Symbol Constant Matching
```lisp
;; Wrong
(match 'foo
  x 1      ;; x is a variable, always matches
  y 2)

;; Correct
(match 'foo
  'foo 1   ;; Matching constants must be quoted
  'bar 2)
```

### Error 7: `func` Inconsistent Argument Count
```lisp
;; Wrong
(func bad
  x => x
  x y => y)

;; Correct
(func good
  x () => x
  x y => y)
```

### Error 8: Wrong `where` Position
```lisp
;; Wrong
(func f
  [x] where (> x 0) => x)

;; Correct
(func f
  [x] => x where (> x 0))
```

### Error 9: Variable Argument Function
```lisp
;; Wrong
(+ 1 2 3)  ;; + is binary

;; Correct
(+ (+ 1 2) 3)
```

### Error 10: `where` in `match`
```lisp
;; Wrong
(match lst
  [x] (where (> x 0) x))

;; Correct (use func to use where)
(func f
  [x] => x where (> x 0))
```

### Error 11: Non-Boolean Condition
```lisp
;; Wrong
(if 1 2 3)

;; Correct
(if true 2 3)
```

### Error 12: Quote undefined behavior 

Important note: quote differs from other lisp dialects, it is only used to construct symbol.

```
;; Wrong
'(a b c)    ;; this behavior is undefined, not the list datum (a b c)
'()         ;; ditto, compile error

;; Correct
'symbol     ;; quote is only used to construct symbol
`(a b c)    ;; use backquote macro to get a list ['a 'b 'c]
['a 'b 'c]  ;; the equivalent for a list of symbol
```

---

## Constraints Checklist (Violation Means Error)

- ✓ `match` doesn't use `=>`, `func` uses `=>`
- ✓ Use `[x . y]` in patterns, not `(x . y)`
- ✓ `set` only accepts symbols (quoted or gensym)
- ✓ `if` condition must be `true`/`false`
- ✓ All `func` rules have consistent argument counts
- ✓ `where` at end of rule, only belongs to `func`
- ✓ `+ - * /` have fixed arity, not variadic
- ✓ `()` is not equivalent to `false`
- ✓ Matching symbol constants must write `'sym`
- ✓ `where` does not belong to `match`
- ✓ Only 4 special forms: `quote`, `if`, `do`, `lambda`

---

## Task

- All code must comply with the above rules
- Point out which rules errors violate
- Explicitly state when uncertain
- Don't fill in gaps with common knowledge from other languages
- Prioritize semantics from this repository's materials
