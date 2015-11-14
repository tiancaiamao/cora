;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; remove-let
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; This pass converts let expressions into assignments.

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
