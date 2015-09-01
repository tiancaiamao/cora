#|
(letrec ([f$1 (lambda ()
                  (locals (x.1 y.2)
                          (if (true)
                              (begin
                                (set! x.1 3)
                                (set! y.2 x.1))
                              (f$1))))])
  (locals ()
          (begin
            (set! r8 3)
            (set! r9 10))))
=>
(letrec ([f$1 (lambda ()
                (locals (x.1 y.2)
                        (intervals (x1 s1 . e1) (y2 s2 . e2))
                        (if (true)
                            (begin
                              (set! x.1 3)
                              (set! y.2 x.1))
                            (f$1))))])
  (locals ()
          (begin
            (set! r8 3)
            (set! r9 10))))
|#
(define liveness-analysis
  (lambda (p)

    (define intervals '())

    (define make-interval
      (lambda (var start end)
        (cons var (cons start end))))

    (define interval-start-set!
      (lambda (interval start)
        (set-cdr! interval (cons start (cddr interval)))))

    (define interval-end-set!
      (lambda (interval end)
        (set-cdr! interval (cons (cadr interval) end))))

    (define ref
      (lambda (v seq)
        (let ((interval (assq v intervals)))
          (if (not interval)
              (set! intervals (cons (make-interval v -1 seq) intervals))))))

    (define def
      (lambda (v seq)
        (let ((interval (assq v intervals)))
          (if interval
              (interval-start-set! interval seq)
              (set! intervals (cons (make-interval v seq -1) intervals))))))

    (define analysis
      (lambda (p seq)
        (match p
               [('set! v (op a b))
                (begin
                  (def v seq)
                  (if (uvar? a) (ref a seq))
                  (if (uvar? b) (ref b seq)))]
               [('set! var val)
                (begin
                  (def var seq)
                  (if (uvar? val) (ref val seq)))]
               [('if a b c)
                (begin
                  (analysis b (+ seq 1))
                  (analysis c (+ seq 1))
                  (analysis a (+ seq 1)))]
               [('begin x ... tail)
                (begin
                  (analysis tail (+ seq 1))
                  (if (not (null? x))
                      (analysis `(begin ,@x) (+ seq 1))))]
               [(f x ...)
                (for-each (lambda (v) (if (uvar? v) (ref v seq))) p)])))

    (define build-function (lambda (label body) `(,label (lambda () ,body))))

    (define program
      (lambda (p)
        (match p
               [('letrec [(label (lambda () body)) ...] tail)
                (let ((body1 (map program body))
                      (tail1 (program tail)))
                  `(letrec ,(map build-function label body1) ,tail1))]
               [('locals bind body)
                (begin
                  (set! intervals '())
                  (analysis body 0)
                  `(locals ,bind
                           (intervals ,@intervals)
                           ,body))])))

    (program p)))

(liveness-analysis
 '(letrec [(f$1 (lambda ()
                  (locals (a.1 b.2 c.3)
                          (begin
                            (set! a.1 r8)
                            (set! b.2 fv0)
                            (set! c.3 (+ a.1 2))
                            (if (< c.3 0) (nop) (set! c.3 (+ c.3 b.2)))
                            (set! b.2 (+ c.3 1))
                            (r15 3 b.2)))))]
    (locals () (set! rax 3))))
