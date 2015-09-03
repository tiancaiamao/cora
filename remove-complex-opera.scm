#|
(f$1 (+ (* x.2 x.5) 7) (sra x.1 3))
=>
(begin
  (set! t.9 (begin
              (set! t.8 (* x.2 x.5))
              (+ t.8 7)))
  (set! t.10 (sra x.1 3))
  (f$1 t.9 t.10))

(letrec ((f$1 (lambda (a b c)
                (f$1 (+ (* x.2 x.5) 7) (sra x.1 3)))))
  (+ x.1 1))
=>
(letrec ((f$1 (lambda (a b c)
                (begin
                  (set! t.38 (begin (set! t.37 (* x.2 x.5)) (+ t.37 7)))
                  (set! t.39 (sra x.1 3))
                  (f$1 t.38 t.39)))))
  (+ x.1 1))
|#

(define remove-complex-opera
  (lambda (x)

    (define trivial?
      (lambda (exp)
        (if (or (uvar? exp) (label? exp) (int64? exp)) #t #f)))

    (define non-trivial?
      (lambda (exp)
        (not (trivial? exp))))

    (define new-local* '())
    (define (new-t)
      (let ([t (unique-name 't)])
        (set! new-local* (cons t new-local*))
        t))

    (define handle-operands
      (lambda (op rand1 rand2)
        (cond
         [(and (trivial? rand1) (trivial? rand2)) `(,op ,rand1 ,rand2)]
         [(trivial? rand1)
          (let ((rand-b (new-t)))
            (make-begin `((set! ,rand-b ,rand2) (,op ,rand1 ,rand-b))))]
         [(trivial? rand2)
          (let ((rand-a (new-t)))
            (make-begin `((set! ,rand-a ,rand1) (,op ,rand-a ,rand2))))]
         [else
          (let ((rand-a (new-t)) (rand-b (new-t)))
            (make-begin `((set! ,rand-a ,rand1) (set! ,rand-b ,rand2) (,op ,rand-a ,rand-b))))])))

    (define make-trivial
      (lambda (arg)
        (if (trivial? arg) arg
            (let ((new-var (new-t)))
              `((set! ,new-var ,arg) ,new-var)))))

    (define rem
      (lambda (p)
        (match p
               [('locals (local* ...) tail)
                (let ((tail (rem tail)))
                  `(locals (,@local* ,@new-local*) ,tail))]

               [('if a b c) `(if ,(rem a) ,(rem b) ,(rem c))]
               [('begin ef* ... tail) (make-begin (map rem (cdr p)))]
               [('set! uvar val) `(set! ,uvar ,(rem val))]

               [('+ a b) (handle-operands '+ a b)]
               [('- a b) (handle-operands '- a b)]
               [('* a b) (handle-operands '* a b)]
               [('sra a b) (handle-operands 'sra a b)]
               [('logand a b) (handle-operands 'logand a b)]
               [('logor a b) (handle-operands 'logor a b)]

               [(op arg ...)
                (let ((op1 (rem op))
                      (arg (map rem arg)))
                  (let* ((trivial-tail (map make-trivial `(,op1 ,@arg)))
                         (vars (map extract-vars trivial-tail))
                         (stmts (map extract-stmts trivial-tail)))
                    (make-tail stmts vars)))]
               [triv triv])))

    (define extract-vars
      (lambda (tail-expr)
        (match tail-expr
               [(stmt* ... tail) (if (trivial? tail) tail)]
               [triv triv])))

    (define extract-stmts
      (lambda (tail-expr)
        (match tail-expr
               [(stmt* ... tail) stmt*]
               [triv '()])))

    (define make-tail
      (lambda (stmts vars)
        (make-begin (append (apply append stmts) (list vars)))))

    (define build-function (lambda (label body fml) `(,label (lambda ,fml ,body))))

    (match x
           [('letrec ((label* ('lambda (fmt** ...) body*)) ...) body)
            (let ((body (rem body))
                  (body* (map rem body*)))
              `(letrec ,(map build-function label* body* fmt**)
                 ,body))])))
