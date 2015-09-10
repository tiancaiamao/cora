(define convert-complex-datum
  (lambda (x)
    (define constants '())
    (define convert-const
      (lambda (x)
        (match x
               [() (quote '())]
               [(,[a] . ,[d]) `(cons ,a ,d)]
               [#(,[x*] ...)
                (let* ([tmp (unique-name 'tmp)]
                       [len (length `(,x* ...))]
                       [sets (let loop ([ls `(,x* ...)] [n 0])
                               (cond
                                [(null? ls) '()]
                                [else (cons `(vector-set! ,tmp (quote ,n) ,(car ls))
                                            (loop (cdr ls) (add1 n)))]))])
                  `(let ([,tmp (make-vector (quote ,len))])
                     (begin ,@sets ,tmp)))]
               [,x `(quote ,x)])))
    (define convert
      (lambda (x)
        (match x
               [(,let/rec ([,u* ,[v*]] ...) ,[expr])
                (guard (memq let/rec '(letrec let)))
                `(,let/rec ([,u* ,v*] ...) ,expr)]
               [(lambda (,uvar* ...) ,[body])
                `(lambda (,uvar* ...) ,body)]
               [(begin ,[ef*] ...)
                `(begin ,ef* ...)]
               [(if ,[t] ,[c] ,[a])
                `(if ,t ,c ,a)]
               [(set! ,x ,[v])
                `(set! ,x ,v)]
               [(quote ,imm) (guard (or (number? imm) (boolean? imm) (null? imm)))
                `(quote ,imm)]
               [(quote ,imm)
                (let ([tmp (unique-name 'tmp)]
                      [const (convert-const imm)])
                  (set! constants (cons `(,tmp ,const) constants))
                  tmp)]
               [(,[f] ,[x*] ...)
                `(,f ,x* ...)]
               [,x x])))
    (let ([x* (convert x)])
      (if (null? constants) x* `(let ,constants ,x*)))))
