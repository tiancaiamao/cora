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

    (define expose
      (lambda (p)
        (match p
               [('begin stmt ...)
                `(begin ,@(map expose stmt))]
               [('set! p (op a b))
                `(set! ,(expose p) (,op ,(expose a) ,(expose b)))]
               [('set! var val)
                `(set! ,(expose var) ,(expose val))]
               [(? frame-var?)
                `(disp ,frame-pointer-register ,(* 8 (frame-var->index p)))]
               [var var])))

    (define map-label-to-def
      (lambda (label* body*)
        (map (lambda (label body)
               `(,label (lambda () ,(expose body))))
             label* body*)))

    (define program
      (lambda (x)
        (match x
               [('letrec ([label* ('lambda () tail*)] ...) tail-p ...)
                (let ((output (map-label-to-def label* tail*))
                      (ev-tail (map expose tail-p)))
                  `(letrec ,output ,@ev-tail))])))

    (program p)))
