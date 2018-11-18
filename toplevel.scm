(load "reader.scm")
(load "expander.scm")
(load "pmatch.scm")

(macroexpand
 '(defmacro match
    (lambda (input rename)
      (let ((exp (cadr input)))
        (pmatch exp (split-rules (cddr input)))))))

(macroexpand
 '(defmacro defun
    (lambda (input rename)
      (let* ((fname (cadr input))
             (rules (extract-rules (cddr input)))
             (narg (rule-arg-count (cddr input)))
             (args (generate-args narg '()))
             (tmp (gensym)))
        `(define ,fname
           (lambda ,args
             (let ((,tmp (list ,@args)))
               ,(pmatch tmp rules))))))))

;; (match [3 4] 'x -> 666 [a b] -> a)

(define repl
  (lambda ()
    (newline)
    (display "#> ")
    (let* ((sexp (read (current-input-port)))
           (input (macroexpand sexp))
           (res (eval input)))
      (display res)
      (repl))))
