;; ---------utils-----------
(load "match.scm")
(load "helpers.scm")
;; --------pass combinator------
(load "nanopass.scm")
;; --------passes-----------
(load "generate-x86-64.scm")
(load "flatten-program.scm")
(load "expose-frame-var.scm")
(load "expose-basic-blocks.scm")
(load "finalize-locations.scm")
(load "liveness-analysis.scm")
(load "assign-registers.scm")
(load "convert-closures.scm")
(load "canonicalize-expression.scm")
(load "remove-complex-opera.scm")
(load "impose-calling-conventions.scm")

(define compile
  (nanopass
;;   expand-syntax
   canonicalize-expression

   convert-closures

   remove-complex-opera
   flatten-set
   impose-calling-conventions
   liveness-analysis
   assign-registers
   finalize-locations
   expose-frame-var
   expose-basic-blocks
   flatten-program
   generate-x86-64
   ))
