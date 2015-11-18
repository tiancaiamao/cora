(define alpha-conversion
  (lambda (x)
    (define transform
      (lambda (x env)
        (match x
               [,x (guard (constant? x)) x]
               [,x (guard (symbol? x))
                   (cond
                    [(primitive? x) x]
                    [(assoc x env) => cdr]
                    [else (error 'alpha-conversion (format "undefined variable ~a" x))])]
               [(quote ,imm) x]
               [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
               [(begin ,[e*] ...) (if (null? e*) '(void) `(begin ,e* ...))]
               [(set! ,n ,[v])
                (cond
                 [(not (symbol? n))
                  (error 'alpha-conversion (format "should set! a symbol ~a" v))]
                 [(assoc n env) => (lambda (p) `(set! ,(cdr p) ,v))]
                 [else (error 'alpha-conversion (format "undefined variable ~a" n))])]
               [(lambda (,u* ...) ,e1 ,e2* ...)
                (let* ([w* (map unique-name u*)]
                       [bd (map cons u* w*)]
                       [body (if (null? e2*) e1 `(begin ,e1 ,e2* ...))]
                       [env1 (append bd env)])
                  `(lambda (,w* ...) ,(transform body env1)))]
               [(let ([,n* ,v*] ...) ,e1 ,e2* ...)
                (let* ([n1* (map unique-name n*)]
                       [body (if (null? e2*) e1 `(begin ,e1 ,e2* ...))]
                       [env1 (append (map cons n* n1*) env)]
                       [body1 (transform body env1)])
                  `(let ([,n1* ,v*] ...) ,body1))]
               [(,[f] ,[x*] ...)
                `(,f ,x* ...)]
               [,x (error 'alpha-conversion (format "wrong input: ~a" x))])))
    (transform x '())))

#!eof

(alpha-conversion
 '(let ([fact '()])
    (lambda (n)
      (if (= n 0)
          1
          (* n (fact (- n 1)))))))
