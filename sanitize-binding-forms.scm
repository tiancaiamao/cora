;;;;;;;;;;;;;;;;;;;;;; sanitize-binding-forms ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;; separate bindings in lets. make the lambdas be bound by a letrec and
;; others by a let.

#|
(let ([x.4 '0] [f.2 (lambda (x.1) x.1)] [y.3 '1])
  (+ x.4 (f.2 y.3)))
=>
(letrec ([f.2 (lambda (x.1) x.1)])
  (let ([y.3 '1] [x.4 '0]) (+ x.4 (f.2 y.3))))
|#

(define sanitize-binding-forms
  (lambda (x)
    (define sanitize
      (lambda (bd* body)
        (let loop ([bd* bd*] [letrec^ '()] [let^ '()])
          (cond
           [(null? bd*)
            (let ([lets (if (null? let^) body `(let ,let^ ,body))])
              (if (null? letrec^) lets `(letrec ,letrec^ ,lets)))]
           [else
            (match (car bd*)
                   [(,lab (lambda (,x* ...) ,e))
                    (loop (cdr bd*) (cons `(,lab (lambda (,x* ...) ,e)) letrec^) let^)]
                   [,bd
                    (loop (cdr bd*) letrec^ (cons bd let^))])]))))
    (match x
           [(quote ,imm)
            `(quote ,imm)]
           [(if ,[t] ,[c] ,[a])
            `(if ,t ,c ,a)]
           [(begin ,[ef*] ...)
            `(begin ,ef* ...)]
           [(let ([,x* ,[v*]] ...) ,[e])
            (sanitize `([,x* ,v*] ...) e)]
           [(letrec ([,uvar* (lambda (,fml** ...) ,[x*])] ...) ,[e])
            `(letrec ([,uvar* (lambda (,fml** ...) ,x*)] ...) ,e)]
           [(,[f] ,[x*] ...)
            `(,f ,x* ...)]
           [,x x])))
