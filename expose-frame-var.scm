;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Pass: expose-frame-var
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; This pass turns fv0, fv1, ... into displacement forms. It also adjusts
; frame var numbers by tracking the changes to frame-pointer-register.
#|
(letrec ([f$1 (lambda ()
                (begin
                  (set! fv0 rax)
                  (set! rax (+ rax rax))
                  (set! rax (+ rax fv0))
                  (r15)))])
  (begin
    (set! rax 17)
    (f$1)))
=>
(letrec ([f$1 (lambda ()
                (begin
                  (set! (disp rbp 0) rax)
                  (set! rax (+ rax rax))
                  (set! rax (+ rax (disp rbp 0)))
                  (r15)))])
  (begin
    (set! rax 17)
    (f$1)))
|#

(define expose-frame-var
  (lambda (p)
    (define fp-offset 0)
    (define m@p
      (lambda (f ls)
        (cond
         [(null? ls) '()]
         [else
          (let ((first (f (car ls))))
            (cons first (m@p f (cdr ls))))])))
    (define expose
      (lambda (p)
        (match p
          [(program ([,label* (code () ,tail*)] ...) ,tail)
           (let ([saved fp-offset])
             `(program ([,label* (code () ,(begin (set! fp-offset saved)
                                                   (expose tail*)))] ...)
                ,(begin (set! fp-offset saved) (expose tail))))]
          [(begin ,ef* ... ,tail)
           `(begin ,@(m@p expose `(,ef* ... ,tail)))]
          [(if ,test ,conseq ,alt)
           (let* ([test^ (expose test)]
                  [saved fp-offset]
                  [conseq^ (begin (set! fp-offset saved) (expose conseq))]
                  [alt^ (begin (set! fp-offset saved) (expose alt))])
             `(if ,test^ ,conseq^ ,alt^))]
          [(set! ,var (,op ,triv1 ,triv2))
           (guard (eq? var frame-pointer-register))
           (set! fp-offset ((eval op) fp-offset triv2))
           `(set! ,var (,op ,triv1 ,triv2))]
          [(set! ,[var] (,op/mref ,[triv1] ,[triv2]))
           `(set! ,var (,op/mref ,triv1 ,triv2))]
          [(set! ,[var] ,[triv])
           `(set! ,var ,triv)]
          [(mset! ,base ,off ,val)
           `(mset! ,base ,off ,val)]
          [(,[triv] ,[triv*] ...) `(,triv ,triv* ...)]
          [,v (guard (frame-var? v))
              (make-disp-opnd frame-pointer-register
                              (- (fxsll (frame-var->index v) align-shift)
                                 fp-offset))]
          [,p p])))
    (expose p)))

