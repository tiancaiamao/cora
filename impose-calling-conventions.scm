#|
(lambda (x0 ... xn-1 xn ... xn+m-1)
  (locals (local ...)
          body))
=>
(lambda ()
  (locals (local ... rp x0 ... xn-1 xn ... xn+m-1)
          (begin
            (set! rp ra)
            (set! x0 p0)
            ...
            (set! xn-1 pn-1)
            (set! xn fv0)
            ...
            (set! xn+m-1 fvm-1)
            body)))
|#
(define impose-calling-conventions
  (lambda (x)

    (define load-params
      (lambda (fml* regs fv-fun fv-n seq)
        (cond
         [(null? fml*) (reverse seq)]
         [(null? regs)
          (load-params (cdr fml*) '() fv-fun (add1 fv-n)
                       (cons `(set! ,(car fml*) ,(fv-fun fv-n)) seq))]
         [else
          (load-params (cdr fml*) (cdr regs) fv-fun fv-n
                       (cons `(set! ,(car fml*) ,(car regs)) seq))])))

    (define rev-load
      (lambda (loads regs fvs)
        (cond
         [(null? loads) (reverse (append regs fvs))]
         [else
          (match (car loads)
                 [('set! dst src)
                  (if (register? src)
                      (rev-load (cdr loads) (cons `(set! ,src ,dst) regs) fvs)
                      (rev-load (cdr loads) regs (cons `(set! ,src ,dst) fvs)))])])))

    (define impose
      (lambda (rp new-fv*)
        (lambda (x)
          (match x
                 [('if a b c) x]
                 [('begin ef* ...)
                  `(begin ,@(map (impose rp new-fv*) ef*))]
                 [('set! var val) x]
                 [(or ('nop) ('true) ('false)) x]
                 [(or ('+ a b) ('- a b) ('* a b)) x]
                 [(triv loc* ...)
                  (let* ([l* (load-params loc* parameter-registers index->frame-var 0 '())]
                         [rl* (rev-load l* '() '())])
                    `(begin
                       ,@rl*
                       (set! ,return-address-register ,rp) ; tail-call optimization
                       (,triv ,frame-pointer-register
                              ,return-address-register
                              ,allocation-pointer-register
                              ,@(map cadr rl*))))]
                 [_ x]))))

    (define Body
      (lambda (bd fml*)
        (match bd
               [('locals (locals* ...) tail)
                (let* ([loads (load-params fml* parameter-registers index->frame-var 0 '())]
                       [rp (unique-name 'rp)]
                       [new-fv* '()]
                       [tail ((impose rp new-fv*) tail)])
                  `(locals (,@locals* ,@fml* ,rp ,@new-fv*)
                           ,(make-begin
                            `((set! ,rp ,return-address-register)
                              ,@loads
                              ,tail))))])))

    (define build-function (lambda (label body) `(,label (lambda () ,body))))

    (match x
           [('letrec ([label* ('lambda (fml** ...) body*)] ...) body)
            (let ([bd* (map Body body* fml**)]
                  [bd (Body body '())])
              `(letrec ,(map build-function label* bd*) ,bd))])))

#|
(impose-calling-conventions
 '(letrec ((f$1 (lambda (a b c)
                  (locals ()
                          (begin
                            (set! t.8 (* x.2 x.5))
                            (set! t.9 (+ t.8 7)))))))
    (locals ()
            (+ a 1))))
|#
