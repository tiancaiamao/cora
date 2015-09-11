#|
(letrec ([fact.0 (lambda (n.3 k.4)
                   (if (eq? n.3 '0) 
                       (k.4 '1)
                       (fact.0 (- n.3 '1) 
                               (letrec ([anon.5 (lambda (v.6)
                                                  (k.4 (* n.3 v.6)))])
                                 anon.5))))]
         [anon.1 (lambda (v.2) v.2)])
  (fact.0 '5 anon.1))
=>
(letrec ([fact.0 (lambda (n.3 k.4)
                   (free
                    (fact.0)
                    (if (eq? n.3 '0)
                        (k.4 '1)
                        (fact.0
                         (- n.3 '1)
                         (letrec ([anon.5 (lambda (v.6)
                                            (free
                                             (k.4 n.3)
                                             (k.4 (* n.3 v.6))))])
                           anon.5)))))]
         [anon.1 (lambda (v.2) (free () v.2))])
  (fact.0 '5 anon.1))
|#
(define uncover-free
  (lambda (x)
    (define primitives
      '(+ - * <= < = >= > procedure? boolean? car cdr cons eq? fixnum? make-vector null? pair? set-car! set-cdr! vector? vector-length vector-ref vector-set! void ))
    (define uncover
      (lambda (x)
        (match x
               [(letrec ((,uvar* ,[uncover -> free* lam*]) ...) ,[uncover -> free2* expr])
                (values (difference (union (apply union free*) free2*) uvar*)
                        `(letrec ([,uvar* ,lam*] ...) ,expr))]
               [(lambda (,uvar* ...) ,expr)
                (let-values ([(free* expr^) (uncover expr)])
                  (let ([free^ (difference free* uvar*)])
                    (values free^ `(lambda (,uvar* ...) (free ,free^ ,expr^)))))]
               [(begin ,[uncover -> free* expr*] ...)
                (values (apply union free*) `(begin ,expr* ...))]
               [(if ,[uncover -> tf te]
                    ,[uncover -> cf ce]
                    ,[uncover -> af ae])
                (values (union tf cf af) `(if ,te ,ce ,ae))]
               [(let ([,uvar* ,[uncover -> free1* expr*]] ...) ,[uncover -> free2* expr])
                (values (union (apply union free1*) (difference free2* uvar*))
                        `(let ([,uvar* ,expr*] ...) ,expr))]
               [(quote ,imm)
                (values '() `(quote ,imm))]
               [(,prim ,[uncover -> free* a*] ...) (prim? prim)
                (values (apply union free*) `(,prim ,a* ...))]
               [(,[uncover -> ff f] ,[uncover -> free* a*] ...)
                (values (apply union `(,ff ,free* ...)) `(,f ,a* ...))]
               [,x (values `(,x) x)])))
    (let-values ([(free* x*) (uncover x)]) x*)))
