;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; uncover-locals
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; This pass just collect all the local variable names in a definition and
; put the list inside newly created locals forms.
(define uncover-locals
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
          [(letrec ((,label* (lambda (,uvar* ...)
                               ,[uncover1 -> new* body*])) ...)
             ,[uncover1 -> new body])
           `(letrec ((,label* (lambda (,uvar* ...)
                                (locals ,new* ,body*))) ...)
              (locals ,new ,body))]
          [(begin ,[s*] ...) `(begin ,s* ...)]
          [(let ((,x* ,[v*]) ...) ,[body])
           (for-each add-local x*)
           `(let ((,x* ,v*) ...) ,body)]
          [(if ,[test] ,[conseq] ,[alt])
           `(if ,test ,conseq ,alt)]
          [(alloc ,[n]) `(alloc ,n)]
          [(mset! ,[base] ,[off] ,[val]) `(mset! ,base ,off ,val)]
          [(mref ,[base] ,[off]) `(mref ,base ,off)]
          [(set! ,x ,[y]) `(set! ,x ,y)]
          [(,[f] ,[a*] ...) `(,f ,a* ...)]
          [,other other])))
    (uncover x)))
