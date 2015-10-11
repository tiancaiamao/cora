;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Combined Passes: finalize-frame-locations and finalize-locations
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; mset! and mref are passed along.

; helper for both finalize-frame-locations and finalize-locations
(define finalize
  (lambda (x env final?)
    (define lookup
      (lambda (v env)
        (let ((slot (assq v env)))
          (if slot (cdr slot) v))))
    (match x
      [(letrec ([,label* (lambda () , [bd*])] ...) , [bd])
       `(letrec ([,label* (lambda () ,bd*)] ...) ,bd)]
      [(locals (,local* ...)
         (ulocals (,ulocal* ...)
                  (locate ([,uvar* ,loc*] ...)
                    (frame-conflict ,ct ,tail))))
       `(locals (,local* ...)
          (ulocals (,ulocal* ...)
            (locate ([,uvar* ,loc*] ...)
              (frame-conflict ,ct
                 ,(finalize tail `((,uvar* . ,loc*) ...) final?)))))]
      [(locate ([,uvar* ,loc*] ...) ,tail)
       (if final?
           (finalize tail `((,uvar* . ,loc*) ...) final?)
           `(locate ([,uvar* ,loc*] ...) ,tail))]
      [(begin , [ef*] ... , [tail])
       `(begin ,ef* ... ,tail)]
      [(if , [test] , [conseq] , [altern])
       `(if ,test ,conseq ,altern)]
      [(return-point ,label ,[tail])
       `(return-point ,label ,tail)]
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
      [(,[triv] ,[live*] ...)
       (if final? `(,triv) `(,triv ,live* ...))]
      [,v (guard (uvar? v)) (lookup v env)]
      [,x x])))

(define finalize-frame-locations (lambda (x) (finalize x '() #f)))
(define finalize-locations       (lambda (x) (finalize x '() #t)))
