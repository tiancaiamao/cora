(define remove-let
  (lambda (x)
    (define locals* '())
    (define add-local (lambda (x) (set! locals* (cons x locals*))))
    (define uncover1
      (lambda (x)
        (set! locals* '())
        (let ((x^ (uncover x)))
          (values locals* x^))))
    (define uncover
      (lambda (x)
        (match x
               [(begin ,[s*] ...) `(begin ,s* ...)]
               [(let ((,x* ,[v*]) ...) ,[body])
                (for-each add-local x*)
                `(begin (set! ,x* ,v*) ... ,body)]
               [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
               [(set! ,x ,[y]) `(set! ,x ,y)]
               [(,[f] ,[a*] ...) `(,f ,a* ...)]
               [,other other])))
    (match x
           [(program ((,label* (code (,cvar* ...)
                                     (,uvar* ...)
                                     ,[uncover1 -> new* body*])) ...)
                     ,constants ...
                     ,[uncover1 -> new body])
            `(program ((,label* (code (,cvar* ... )
                                      (,uvar* ...)
                                      (locals ,new* ,body*))) ...)
                      ,constants ...
                      (locals ,new ,body))])))

#!eof

(remove-let
 '(program
   ((f$8 (code
          (fact.6)
          (n.7)
          (if (= n.7 0)
              1
              (* n.7 (fact.6 (- n.7 1)))))))
   (let ([fact.6 '()])
     (closure f$8 fact.6))))

(program
 ((f$8 (code (fact.6) (n.7)
             (locals ()
                     (if (= n.7 0)
                         1
                         (* n.7 (fact.6 (- n.7 1))))))))
 (locals (fact.6)
         (begin
           (set! fact.6 '())
           (closure f$8 fact.6))))
