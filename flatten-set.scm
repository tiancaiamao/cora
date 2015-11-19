#|
(set! x (begin e1 ... en-1 en)) => (begin e1 ... en-1 (set! x en))
(set! x (if e1 e2 e3)) => (if e1 (set! x e2) (set! x e3))
(begin
  (set! t.9 (begin
              (set! t.8 (* x.2 x.5))
              (+ t.8 7))))
=>
(begin
  (set! tmp.7 (* x.2 x.5))
  (set! tmp.6 (+ tmp.7 7))
  (set! tmp.8 (sra x.1 3))
  (f$1 tmp.6 tmp.8))
|#

(define flatten-set!
  (lambda (x)
    (define flatten1
      (lambda (var expr)
        (match expr
               [(begin ,[flatten -> ef*] ... ,val) `(begin ,@ef* (set! ,var ,val))]
               [(if ,[flatten -> a] ,[b] ,[c]) `(if ,a ,b ,c)]
               [,x `(set! ,var ,x)])))
    (define flatten
      (lambda (x)
        (match x
               [(locals (,uvar* ...) ,[tail]) `(locals (,uvar* ...) ,tail)]
               [(begin ,[ef*] ... ,[tail]) (make-begin `(,ef* ... ,tail))]
               [(if ,[a] ,[b] ,[c]) `(if ,a ,b ,c)]
               [(set! ,var ,val) (flatten1 var val)]
               [,e e])))
    (match x
           [(program ([,label* (code ()
                                     ,[flatten -> body*])] ...)
                     ,[flatten -> body])
            `(program ([,label* (code ()
                                      ,body*)] ...)
                      ,body)])))

#!eof

(flatten-set!
 '(program
   ([f$3 (code (fact.1) (n.2)
               (locals (t.7 t.6)
                       (if (= n.2 0)
                           1
                           (begin
                             (set! t.7 (begin
                                         (set! t.6 (- n.2 1))
                                         (fact.1 t.6)))
                             (* n.2 t.7)))))])
   (locals (fact.1 t.5 t.4)
           (begin
             (set! fact.1
                   (begin
                     (set! t.5 3)
                     (set! t.4 t5)
                     t.4))
             (closure f$3 fact.1)))))
