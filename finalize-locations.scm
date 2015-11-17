; mset! and mref are passed along.

(define finalize-locations
  (lambda (x)

    (define lookup
      (lambda (v env)
        (let ((slot (assq v env)))
          (if slot (cdr slot) v))))

    (define finalize
      (lambda (x env)
        (match x
               [(program ([,label* (code () ,[bd*])] ...) , [bd])
                `(program ([,label* (code () ,bd*)] ...) ,bd)]
               [(locate ([,uvar* . ,loc*] ...) ,tail)
                (finalize tail `((,uvar* . ,loc*) ...))]
               [(begin , [ef*] ... , [tail])
                `(begin ,ef* ... ,tail)]
               [(if , [test] , [conseq] , [altern])
                `(if ,test ,conseq ,altern)]
               [(set! ,[x] (,binop ,[y] ,[z]))
                `(set! ,x (,binop ,y ,z))]
               [(set! ,[x] ,[y])
                (if (eq? x y) `(nop) `(set! ,x ,y))]
               [(mset! ,[base] ,[off] ,[val])
                `(mset! ,base ,off ,val)]
               [(mref ,[base] ,[off])
                `(mref ,base ,off)]
               [(,op ,[x] ,[y]) (guard (or (binop? op) (relop? op)))
                `(,op ,x ,y)]
               [(,[triv] ,[live*] ...) `(,triv)]
               [,v (guard (uvar? v)) (lookup v env)]
               [,x x])))

    (finalize x '())))

#!eof

(finalize-locations
 '(program ([f$1 (code ()
                       (locate ([a.1 . rax]
                                [b.2 . rbx]
                                [c.3 . rcx])
                               (begin
                                 (set! a.1 3)
                                 (set! b.2 5)
                                 (set! c.3 (+ a.1 b.2)))))])
           (f$1)))


(finalize-locations
 '(program
   ((f$1 (code
          ()
          (locate
           ((x.1 . rcx) (y.2 . rcx))
           (if (true) (begin (set! x.1 3) (set! y.2 x.1)) (f$1))))))
   (locate
    ((r8 rcx) (r9 rcx))
    (begin (set! r8 3) (set! r9 10)))))
