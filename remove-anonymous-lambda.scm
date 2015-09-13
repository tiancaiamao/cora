#|
(let ([f.3 (lambda (x.1)
             (lambda (y.2)
               (+ x.1 y.2)))])
  ((f.3 '3) '8))
=>
(let ([f.3 (lambda (x.1)
             (letrec ([anon.4 (lambda (y.2) (+ x.1 y.2))])
               anon.4))])
  ((f.3 '3) '8))
|#
(define remove-anonymous-lambda
  (lambda (x)
    (define rem-bd
      (lambda (bd*)
        (let loop ([bd* bd*] [bd^ '()])
          (cond
           [(null? bd*) (reverse bd^)]
           [else
            (match (car bd*)
              [(,lab (lambda (,fml* ...) ,body))
               (loop (cdr bd*) (cons `(,lab (lambda (,fml* ...) ,(rem body))) bd^))]
              [,x (loop (cdr bd*) (cons (rem x) bd^))])]))))
    (define rem
      (lambda (x)
        (match x
          [(let ,bd* ,[e])
           `(let ,(rem-bd bd*) ,e)]
          [(letrec ([,uvar* (lambda (,fml** ...) ,[x*])] ...) ,[e])
           `(letrec ([,uvar* (lambda (,fml** ...) ,x*)] ...) ,e)]
          [(lambda (,fml* ...) ,[body])
           (let ([lab (unique-name 'anon)])
             `(letrec ([,lab (lambda (,fml* ...) ,body)]) ,lab))]
          [(if ,[t] ,[c] ,[a])
           `(if ,t ,c ,a)]
          [(begin ,[ef*] ...)
           `(begin ,ef* ...)]
          [(quote ,imm)
           `(quote ,imm)]
          [(,[f] ,[x*] ...)
           `(,f ,x* ...)]
          [,x x])))
    (rem x)))
