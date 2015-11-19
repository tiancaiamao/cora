(define closure-convert
  (lambda (x)
    (define labels '())
    (define (free-vars exp)
      (match exp
             [,x (guard (or (primitive? x) (constant? x))) '()]
             [,x (guard (global-var? x)) '()]
             [,x (guard (symbol? x)) (list x)]
             [(lambda (,u* ...) ,[body])
              (difference body u*)]
             [(if ,[t] ,[c] ,[a]) (union t c a)]
             [(begin ,[es*] ...) (apply union es*)]
             [(set! ,[n] ,[v]) (union n v)]
             [(,[f] ,[x*] ...) (union f (apply union x*))]))
    (define convert
      (lambda (x)
        (match x
               [,x (guard (or (primitive? x) (constant? x))) x]
               [,x (guard (symbol? x)) x]
               [(lambda (,u* ...) ,body)
                (let* ([body1 (convert body)]
                       [fv (difference (free-vars body) (append u*))]
                       [label (unique-label 'f)])
                  (set! labels (cons
                                `[,label (code (,fv ...) (,u* ...) ,body1)]
                                labels))
                  `(closure ,label ,@fv))]
               [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
               [(set! ,n ,[v]) `(set! ,n ,v)]
               [(,[f] ,[x*] ...) `(,f ,x* ...)])))
    (match x
           [(program ,[convert -> body] ...)
            `(program ,labels ,body ...)])))

#!eof

(closure-convert
 '(program 
   (let ([a 3] [b 5])
     (lambda ()
       (+ a b)))))

(closure-convert
 '(program
   (set! gv0 (lambda (n)
               (if (= n 0)
                   1
                   (* n (gv0 (- n 1))))))))

(program
 ([f$5 (code (a b) ()
             (+ a b))])
 (let ([a 3] [b 5])
   (closure f$5 a b)))

(closure-convert
 '(let ([fact.6 '()])
    (lambda (n.7)
      (if (= n.7 0)
          1
          (* n.7 (fact.6 (- n.7 1)))))))

(program
 ((f$8 (code
        (fact.6)
        (n.7)
        (if (= n.7 0)
            1
            (* n.7 (fact.6 (- n.7 1)))))))
 (let ([fact.6 '()])
   (closure f$8 fact.6)))

(let ([fact ()])
  (set! fact (lambda (n)
               (if (= n 0)
                   1
                   (* n (fact (- n 1)))))))
