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
               [(begin ,ef* ... ,val) `(begin ,@(map flatten ef*) (set! ,var ,val))]
               [(if ,a ,b ,c) `(if ,(flatten a) ,(flatten1 var b) ,(flatten1 var c))]
               [,x `(set! ,var ,expr)])))

    (define flatten
      (lambda (x)
        (match x
               [(locals (,uvar* ...) ,tail) `(locals ,uvar* ,(flatten tail))]
               [(begin ,ef* ... ,tail) (make-begin (map flatten (cdr x)))]
               [(if ,a ,b ,c) `(if ,(flatten a) ,(flatten b) ,(flatten c))]
               [(set! ,var ,val) (flatten1 var val)]
               [,x x])))

    (define build-function (lambda (label body fml) `(,label (lambda ,fml ,body))))

    (match x
           [(letrec ([,label* (lambda (,fml** ...) ,body*)] ...)
              ,body)
            (let ((body* (map flatten body*))
                  (body (flatten body)))
              `(letrec ,(map build-function label* body* fml**) ,body))])))
