#|
(letrec ([f$1 (lambda ()
                (begin
                  (set! <disp rbp 0) rax)
                  (set! rax (+ rax rax))
                  (set! rax (+ rax (disp rbp 0)))
                  (r15))])
  (set! rax 17)
  (f$1))
=>
(code
 (set! rax 17)
 (jump f$1)
 f$1
 (set! (disp rbp 0) rax)
 (set! rax (+ rax rax))
 (set! rax (+ rax (disp rbp 0)))
 (jump r15))
|#

(define flatten-program
  (lambda (p)

    (define flatten
      (lambda (p)
        (match p
               [(begin ,stmt* ...)
                (map flatten stmt*)]
               [(set! ,var (,op ,a ,b)) p]
               [(set! ,var ,val) p]
               [(,label) `(jump ,label)])))

    (define make-body
      (lambda (label* body*)
        (apply append (map (lambda (label body)
                             `(,label ,@(flatten body)))
                           label* body*))))

    (define program
      (lambda (x)
        (match x
               [(letrec ([,label* (lambda () ,tail*)] ...) ,(flatten -> tail))
                `(code ,@tail ,@(make-body label* tail*))])))

    (program p)))

#!eof

(flatten-program
 '(letrec ()
    (begin
      (set! rcx r15)
      (set! rax 24)
      (set! rax (+ rax 40))
      (set! rax rax)
      (rp.25))))
