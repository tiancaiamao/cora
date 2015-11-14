(define closure-convert
  (lambda (x)

    (define (free-vars exp)
      (match exp
             [,x (guard (or (primitive? x) (constant? x))) '()]
             [,x (guard (symbol? x)) (list x)]
             [(lambda (,u* ...) ,[body])
              (difference body u*)]
             [(if ,[t] ,[c] ,[a]) (union t c a)]
             [(begin ,[es*] ...) (apply union es*)]
             [(set! ,[n] ,[v]) (union n v)]
             [(,[f] ,[x*] ...) (union f (apply union x*))]))

    (define labels '())

    (define convert
      (lambda (x)
        (match x
               [,x (guard (or (primitive? x) (constant? x))) x]
               [,x (guard (symbol? x)) x]
               [(lambda (,u* ...) ,body)
                (let* ([body1 (convert body)]
                       [fv (difference (free-vars body) u*)]
                       [label (unique-label 'f)])
                  (set! labels (cons
                                `[,label (code (,fv ...) (,u* ...) ,body1)]
                                labels))
                  `(closure ,label ,@fv))]
               [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
               [(set! ,n ,[v]) `(set! ,n ,v)]
               [(,[f] ,[x*] ...) `(,f ,x* ...)])))

    (let ([x1 (convert x)])
      `(program ,labels
             ,(convert x1)))))(define closure-convert
  (lambda (x)

    (define (free-vars exp)
      (match exp
             [,x (guard (or (primitive? x) (constant? x))) '()]
             [,x (guard (symbol? x)) (list x)]
             [(lambda (,u* ...) ,[body])
              (difference body u*)]
             [(if ,[t] ,[c] ,[a]) (union t c a)]
             [(begin ,[es*] ...) (apply union es*)]
             [(set! ,[n] ,[v]) (union n v)]
             [(,[f] ,[x*] ...) (union f (apply union x*))]))

    (define labels '())

    (define convert
      (lambda (x)
        (match x
               [,x (guard (or (primitive? x) (constant? x))) x]
               [,x (guard (symbol? x)) x]
               [(lambda (,u* ...) ,body)
                (let* ([body1 (convert body)]
                       [fv (difference (free-vars body) u*)]
                       [label (unique-label 'f)])
                  (set! labels (cons
                                `[,label (code (,fv ...) (,u* ...) ,body1)]
                                labels))
                  `(closure ,label ,@fv))]
               [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
               [(set! ,n ,[v]) `(set! ,n ,v)]
               [(,[f] ,[x*] ...) `(,f ,x* ...)])))

    (let ([x1 (convert x)])
      `(program ,labels
             ,(convert x1)))))
