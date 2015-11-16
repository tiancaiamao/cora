#|
(program ([f$1 (code
                (set! rax (+ rax rax))
                (r15))])
         (set! rax 17)
         (f$1))
=>
(program
 (set! rax 17)
 (jump f$1)
 f$1
 (set! rax (+ rax rax))
 (jump r15))
|#

(define flatten-program
  (lambda (p)
    (define flatten
      (lambda (x)
        (match x
               [(if ,t (,c) (,a))
                `((if ,t (jump ,c)) (jump ,a))]
               [(begin ,[ef*] ... ,[tail]) `(,ef* ... ... ,@tail)]
               [(set! ,a ,b) `((set! ,a ,b))]
               [(,triv) `((jump ,triv))]
               [,p p])))
    (define program
      (lambda (e)
        (match e
               [(program ([,label* (code ,[flatten -> body*] ...)] ...)
                         ,[flatten -> tail*] ...)
                (let* ([build (lambda (label body) (cons label (apply append body)))]
                       [defs (map build label* body*)])
                  `(program ,tail* ... ... ,defs ... ...))])))
    (program p)))

#!eof

(flatten-program
 '(program ([f$1 (code
                  (set! rax (+ rax rax))
                  (r15))])
           (set! rax 17)
           (f$1)))

(flatten-program
 '(program ([f$1 (code
                  (begin
                    (set! rax (+ rax rax))
                    (set! rax 17))
                  (r15))])
           (set! rax 17)
           (f$1)))
