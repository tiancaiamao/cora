;; ---------utils-----------
(load "match.ss")
(load "helpers.ss")
(load "driver.ss")

(load "util.scm")

;; --------passes-----------
(load "parse-scheme.scm")
(load "convert-complex-datum.scm")
(load "uncover-assigned.scm")
(load "purify-letrec.scm")
(load "convert-assignments.scm")
(load "remove-anonymous-lambda.scm")
(load "sanitize-binding-forms.scm")
(load "convert-closures.scm")
(load "introduce-procedure-primitives.scm")
(load "lift-letrec.scm")
(load "normalize-context.scm")
(load "specify-representation.scm")
(load "uncover-locals.scm")
(load "remove-let.scm")
(load "verify-uil.scm")
(load "remove-complex-opera.scm")
(load "flatten-set.scm")
(load "impose-calling-conventions.scm")
(load "old.scm")
(load "generate-x86-64.scm")
(load "flatten-program.scm")
(load "expose-basic-blocks.scm")
(load "expose-frame-var.scm")
(load "finalize-locations.scm")
(load "liveness-analysis.scm")
(load "assign-registers.scm")

(compiler-passes
 '(
   alpha-conversion
   convert-assignment
   closure-conversion
   lift-constants
   remove-let
   impose-calling-conversions
   liveness-analysis
   assign-registers
   finalize-locations ;; remove variable
   expose-frame-var
   remove-if
   flatten-program
   ))

(tracer #t)
(trusted-passes #t)

#!eof

(load "main.scm")
(tracer #t)
(test-one
 '(let ((a 3)
        (b 5))
    (let ((f (lambda (x) (+ x a)))
          (g (lambda (x) (- a b))))
      (set! a 7)
      (+ (f 5) (g 4)))))

(test-one '(c-call 'fuck)) 
(test-one '(procedure? '3))
(test-one "asdf")
