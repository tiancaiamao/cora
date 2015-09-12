(define remove-let
  (lambda (x)
    (define rem1
      (lambda (x)
        (make-begin (rem x))))
    (define rem
      (lambda (x)
        (match x
               [(letrec ((,label* (lambda (,uvar* ...)
                                    (locals (,local* ...) ,[rem1 -> body*]))) ...)
                  (locals (,local ...) ,[rem1 -> body]))
                `(letrec ((,label* (lambda (,uvar* ...)
                                     (locals (,local* ...) ,body*))) ...)
                   (locals (,local ...) ,body))]
               [(begin ,[s*] ...) `((begin ,s* ... ...))]
               [(let ((,x* ,[v*]) ...) ,[body])
                (let ([set* `((set! ,x* ,@v*) ...)])
                  `(,(make-begin `(,@set* ,@body))))]
               [(if ,[test] ,[conseq] ,[alt])
                `((if ,@test ,@conseq ,@alt))]
               [(alloc ,[n]) `((alloc ,@n))]
               [(mset! ,[base] ,[off] ,[val]) `((mset! ,@base ,@off ,@val))]
               [(set! ,x ,[y]) `((set! ,x ,@y))]
               [(,[f] ,[a*] ...) `((,@f ,a* ... ...))]
               [,other `(,other)])))
    (rem x)))
