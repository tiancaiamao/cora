;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Combined Passes: finalize-frame-locations and finalize-locations
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

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
               [(program ([,label* (code () , [bd*])] ...) , [bd])
                `(program ([,label* (code () ,bd*)] ...) ,bd)]
               [(locate ([,uvar* ,loc*] ...) ,tail)
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
