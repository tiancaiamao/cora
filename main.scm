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
(load "impose-calling-conventions.scm")
(load "liveness-analysis.scm")
(load "assign-registers.scm")
(load "finalize-locations.scm")
(load "expose-frame-var.scm")
(load "remove-if.scm")
(load "flatten-program.scm")
(load "generate-x86-64.scm")

(compiler-passes
 '(
   #|
   alpha-conversion
   convert-assignment
   closure-convert
   lift-constants
   remove-let
   impose-calling-conversions
   |#
   liveness-analysis
   assign-registers
   finalize-locations
   expose-frame-var
   remove-if
   flatten-program
   ;; generate-x86-64
   ))

(tracer #t)
(trusted-passes #t)

#!eof

(load "main.scm")
(tracer #t)

(test-one
 '(program [(f$1 (code ()
                       (locals (a.1 b.2 c.3)
                               (begin
                                 (set! a.1 r8)
                                 (set! b.2 fv0)
                                 (set! c.3 (+ a.1 2))
                                 (if (< c.3 0) (nop) (set! c.3 (+ c.3 b.2)))
                                 (set! b.2 (+ c.3 1))
                                 (r15 3 b.2)))))]
           (locals () (set! rax 3))))


(test-one '(c-call 'fuck))
(test-one '(procedure? '3))
(test-one "asdf")
