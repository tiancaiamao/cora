;;;;;;;;;;;;;;;;;;;;;;;;; convert-assignments ;;;;;;;;;;;;;;;;;;;;;;;;;

; To save space, this pass converts assigned variables into boxes, set!
; into set-box! and references to the assigned variables into unbox. It
; uses a helper make-bindings to produce two binding forms for the original
; bindings and the new bindings.

#|
(let ([x.3 '10] [y.1 '11] [z.2 '12])
  (assigned (x.3 z.2)
            (begin
              (set! x.3 (+ x.3 y.1))
              (set! z.2 (* y.1 '2))
              (cons y.1 z.2))))
=>
(let ([x.5 '10] [y.1 '11] [z.4 '12])
  (let ([x.3 (cons x.5 (void))] [z.2 (cons z.4 (void))])
    (begin
      (set-car! x.3 (+ (car x.3) y.1))
      (set-car! z.2 (* y.1 '2))
      (cons y.1 (car z.2)))))
|#

(define convert-assignment
  (lambda (x)
    (define transform
      (lambda (x)
        (match x
               [(quote ,imm) (values x '())]
               [(if ,[transform -> t l1] ,[transform -> c l2] ,[transform -> a l3])
                (values `(if ,t ,c ,a) (union l1 l2 l3))]
               [(begin ,[transform -> ef* as*] ...)
                (values `(begin ,ef* ...) (apply union as*))]
               [(set! ,n ,[transform -> v l1])
                (values `(set-box! ,n ,v) (cons n l1))]
               [(lambda (,u* ...) ,[transform -> body l1])
                (values x l1)]
               [(let ([,n* ,[transform -> v* l1*]] ...) ,(transform -> body l2))
                (let* ([pairs '()]
                       [bd (map (lambda (n v)
                                  (if (memq n l2)
                                      (let ([tmp (unique-name n)])
                                        (set! pairs (cons (list n tmp) pairs))
                                        (list tmp `(box ,v)))
                                      (list n v))) n* v*)])
                  (if (null? pairs)
                      (values x (union l2 (apply union l1*)))
                      (values
                       `(let (,bd ...)
                          (let (,pairs ...)
                            ,body))
                       (union l2 (apply union l1*)))))]
               [(,[transform -> f af*] ,[transform -> x* ax*] ...)
                (values `(,f ,x* ...) (union af* (apply union ax*)))]
               [,x (values x '())])))
    (let-values ([(e _) (transform x)])
      e)))
