;; ---------utils-----------
(load "match.ss")
(load "helpers.ss")
;; --------pass combinator------
(load "nanopass.scm")
;; --------passes-----------
(load "parse-scheme.scm")
(load "convert-complex-datum.scm")
(load "uncover-assigned.scm")
(load "purify-letrec.scm")
(load "convert-assignments.scm")
(load "remove-anonymous-lambda.scm")
(load "sanitize-binding-forms.scm")
(load "uncover-free.scm")
(load "convert-closures.scm")
(load "introduce-procedure-primitives.scm")
(load "lift-letrec.scm")

;(load "generate-x86-64.scm")
;(load "flatten-program.scm")
;(load "expose-frame-var.scm")
;(load "expose-basic-blocks.scm")
;(load "finalize-locations.scm")
;(load "liveness-analysis.scm")
;(load "assign-registers.scm")
;(load "convert-closures.scm")
;(load "canonicalize-expression.scm")
;(load "remove-complex-opera.scm")
;(load "impose-calling-conventions.scm")

(define compile
  (nanopass
   parse-scheme
   convert-complex-datum
   uncover-assigned
   purify-letrec
   convert-assignments

   remove-anonymous-lambda
   sanitize-binding-forms

   uncover-free
   convert-closures
   introduce-procedure-primitives

   lift-letrec
                                        ;   normalize-context
                                        ;   specify-representation
                                        ;   uncover-locals
                                        ;   remove-let
                                        ;   verify-uil


   ;;   expand-syntax
   ;;   canonicalize-expression
   ;;   convert-closures

                                        ;   remove-complex-opera
                                        ;   flatten-set!
                                        ;   impose-calling-conventions

   ;;   uncover-frame-conflict

   #|
   liveness-analysis
   assign-registers
   finalize-locations
   expose-frame-var
   expose-basic-blocks
   flatten-program
   generate-x86-64
   |#
   ))
