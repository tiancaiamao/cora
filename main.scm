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
   liveness-analysis
   assign-registers
   finalize-locations
   |#
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
 '(program
  ([f$1 (code ()
              (begin
                (if rbx
                    (if rcx (set! rdx 3) (set! rax rdx))
                    (set! rbx 5))
                (set! rcx 6)))])
  (f$1)))
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
