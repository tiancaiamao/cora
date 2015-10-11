;;;;;;;;;;;;;;;;;;;;; normalize-context ;;;;;;;;;;;;;;;;;;;;;
;; box, unbox, set-box! added

#|
(normalize-context
 '(letrec ()
    (let ([x.1 ’1] [y.2 ’2] [a.3 ’3] [b.4 ’4] [p.5 (cons ’#f ’#t)])
      (begin
        (* (begin (set-car! p.5 ’#t) x.1) y.2)
        (if (if (car p.5) (if (< x.1 y.2) ’#f ’#t) ’17)
            (if (= a.3 b.4) ’#f ’#t) (<= y.2 x.1))))))
=>
(letrec ()
  (let ([x.1 ’1] [y.2 ’2] [a.3 ’3] [b.4 ’4] [p.5 (cons ’#f ’#t)])
    (begin
      (set-car! p.5 ’#t)
      (if (if
           (if (if
                (if (eq? (car p.5) ’#f) (false) (true)) (if (< x.1 y.2) (false) (true))
                (true))
               (= a.3 b.4) ’#f ’#t)
           (<= y.2 x.1) ’#t ’#f)))))
|#
(define normalize-context
  (lambda (x)
    (define make-nopless-begin
      (lambda (x*)
        (let ([x* (remove '(nop) x*)])
          (if (null? x*)
              '(nop)
              (make-begin x*)))))
    (define norm
      (lambda (ct)
        (lambda (x)
          (match x
            [(letrec ([,label (lambda (,uvar* ...) ,[(norm 'v) -> expr*])] ...)
               ,[(norm 'v) -> expr])
             `(letrec ([,label (lambda (,uvar* ...) ,expr*)] ...) ,expr)]
            [(begin ,[(norm 'e) -> e*] ... ,[(norm ct) -> t])
             `(begin ,e* ... ,t)]
            [(if ,[(norm 'p) -> t] ,[(norm ct) -> c] ,[(norm ct) -> a])
             `(if ,t ,c ,a)]
            [(let ([,uvar ,[(norm 'v) -> e*]] ...) ,[(norm ct) -> e])
             `(let ([,uvar ,e*] ...) ,e)]

            [(quote ,x)
             (case ct
               [e `(nop)]
               [p (if (eq? x #f) `(false) `(true))]
               [v `(quote ,x)])]
            [(,f! ,[(norm 'v) ->  x*] ...)
             (guard (memq f! '(set-car! set-cdr! set-box!
                                        vector-set! procedure-set!)))
             (case ct
               [e `(,f! ,x* ...)]
               [p `(begin (,f! ,x* ...) (true))]
               [v `(begin (,f! ,x* ...) (void))])]
            [(,f? ,x* ...)
             (guard (memq f? '(eq? pair? box? null? boolean?
                                   fixnum? vector? procedure?
                               < <= >= > =)))
             (case ct
               [e (make-nopless-begin `(,@(map (norm 'e) `(,x* ...)) (nop)))]
               [p `(,f? ,@(map (norm 'v) `(,x* ...)))]
               [v `(if (,f? ,@(map (norm 'v) `(,x* ...))) '#t '#f)])]
            [(,f ,x* ...)
             (guard (memq f '(+ - * logand logor sra cons car cdr void
                                make-vector vector-ref vector-length
                                make-procedure procedure-ref procedure-code
                                box unbox)))
             (case ct
               [e (make-nopless-begin `(,@(map (norm 'e) `(,x* ...)) (nop)))]
               [p `(if (eq? (,f ,@(map (norm 'v) `(,x* ...))) '#f) (false) (true))]
               [v `(,f ,@(map (norm 'v) `(,x* ...)))])]
            [,x (guard (uvar? x))
             (case ct
               [e `(nop)]
               [p `(if (eq? ,x '#f) (false) (true))]
               [v x])]
            [(,[(norm 'v) -> f] ,[(norm 'v) -> x*] ...)
             (case ct
               [e `(,f ,x* ...)]
               [p `(if (eq? (,f ,x* ...) '#f) (false) (true))]
               [v `(,f ,x* ...)])]
            [,x x]))))
    ((norm 'v) x)))
