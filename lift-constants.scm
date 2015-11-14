(define lift-constants
  (lambda (x)

    (define immediate? (lambda (x) (or (number? x) (null? x) (boolean? x) (symbol? x))))

    (define constants '())
    (define add-constants (lambda (x) (set! constants (cons x constants))))

    (define (transform x)
      (match x
             [,x (guard (immediate? x)) x]
             [(quote ,e)
              (cond
               [(immediate? e) e]
               [(assoc e constants) => caddr]
               [else
                (let ([label (unique-name 'c)])
                  (add-constants `(,e (constant-ref ,label)))
                  `(constant-ref ,label))])]
             [,e (guard (string? e)) (transform `(quote ,e))]
             [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
             [(begin ,[es] ...) `(begin ,es ...)]
             [(set! ,var ,[val]) `(set! ,var ,val)]
             [(code ,cvar ,var ,body) `(code ,cvar ,var ,(transform body))]
             [(closure ,label ,cval ...) x]
             [(,[f] ,[xs] ...) `(,f ,xs ...)]))

    (match x
           [(program [(,labels ,codes) ...]
                     ,body)
            (let ([codes1 (map transform codes)]
                  [body1 (transform body)])
              `(program ,(map list labels codes1)
                        ,constants
                        ,body1))])))
