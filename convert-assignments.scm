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

(define convert-assignments
  (lambda (x)
    (define make-bindings
      (lambda (as* bd*)
        (let loop ([bd* bd*] [bdo* '()] [env* '()])
          (cond
           [(null? bd*) (values (reverse bdo*) (reverse env*))]
           [(and (not (pair? (car bd*))) (memq (car bd*) as*))
            (let ([new (unique-name (car bd*))])
              (loop (cdr bd*)
                    (cons new bdo*)
                    (cons `(,(car bd*) (box ,new)) env*)))]
           [(and (pair? (car bd*)) (memq (caar bd*) as*))
            (let ([new (unique-name (caar bd*))])
              (loop (cdr bd*)
                    (cons `[,new ,(cadar bd*)] bdo*)
                    (cons `[,(caar bd*) (box ,new)] env*)))]
           [else
            (loop (cdr bd*) (cons (car bd*) bdo*) env*)]))))
    (define convert
      (lambda (x env)
        (match x
          [(letrec ([,uvar* ,[expr*]] ...) ,[body])
           `(letrec ([,uvar* ,expr*] ...) ,body)]
          [(let ([,uvar* ,[expr*]] ...) (assigned (,as* ...) ,expr))
           (let-values ([(bd* env*) (make-bindings as* `([,uvar* ,expr*] ...))])
             (let ([body (if (null? env*)
                             (convert expr (append as* env))
                             `(let ,env* ,(convert expr (append as* env))))])
               (if (null? bd*) body `(let ,bd* ,body))))]
          [(lambda (,uvar* ...) (assigned (,as* ...) ,body))
           (let-values ([(bd* env*) (make-bindings as* `(,uvar* ...))])
             `(lambda ,bd*
                ,(if (null? env*)
                     (convert body (append as* env))
                     `(let ,env* ,(convert body (append as* env))))))]
          [(begin ,[ef*] ...)
           `(begin ,ef* ...)]
          [(if ,[t] ,[c] ,[a])
           `(if ,t ,c ,a)]
          [(set! ,x ,[v])
           (if (memq x env) `(set-box! ,x ,v) `(set! ,x ,v))]
          [(,[f] ,[x*] ...)
           `(,f ,x* ...)]
          [,x (if (memq x env) `(unbox ,x) x)])))
    (convert x '())))
