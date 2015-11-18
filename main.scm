;; ---------utils-----------
(load "match.ss")
(load "helpers.ss")
(load "driver.ss")

(load "util.scm")

;; --------passes-----------
(load "alpha-conversion.scm")
(load "convert-assignments.scm")
(load "closure-convert.scm")
(load "lift-constants.scm")
(load "remove-let.scm")
(load "impose-calling-convertions.scm")
(load "liveness-analysis.scm")
(load "assign-registers.scm")
(load "finalize-locations.scm")
(load "expose-frame-var.scm")
(load "remove-if.scm")
(load "flatten-program.scm")
(load "generate-x86-64.scm")

(compiler-passes
 '(
   alpha-conversion
   ;convert-assignment
   closure-convert
   ;lift-constants
   remove-let
   impose-calling-convertions
   #|
   liveness-analysis
   assign-registers
   finalize-locations
   expose-frame-var
   remove-if
   flatten-program
   |#
   ;; generate-x86-64
   ))

(tracer #t)
(trusted-passes #t)

#!eof

(load "main.scm")
(tracer #t)

(test-one
 '(let ([fact '()])
    (lambda (n)
      (if (= n 0)
          1
          (* n (fact (- n 1)))))))


(test-one '(c-call 'fuck))
(test-one '(procedure? '3))
(test-one "asdf")
