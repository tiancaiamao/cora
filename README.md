# The cora programming language

Inspired by scheme, shen, femtolisp and many more...

## closure can be printed readably

`(lambda (a) 3 (b . 5) (c . 7))` as femtolisp

## kernel lambda

Minimal special forms:

- quote
- lambda
- if
- do

`set` is a function rather than special form.

`let` is a macro.

(let a 3 b 5 ...)

## proper tail call

proper tail call, as scheme does.

## partial apply

## pattern match

```lisp
(match (cons 1 2)
    (cons a b) a)
```

## The `func` macro

```lisp
(func map
  f [] => []
  f [x . y] => [x . (map f y)])
```

Nowadays any cats and dogs write their own programming languages, mostly sucks. Many of them are too small to be even a **finished** toy, many lack features, worsely, many choose the wrong features.

However, it's still an important practice for a true lisp hacker to keep inventing his own one, adapting the language to his own taste.

Among the most important features, lisp1, of course. Then comes proper tail call and partial apply, for functional programming goodness. Keep the kernel language miminal is also important, I think.
