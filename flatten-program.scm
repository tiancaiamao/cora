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
               [,e e])))
    (define program
      (lambda (e)
        (match e
               [(program ([,label* (code () ,[flatten -> body*])] ...)
                         ,[flatten -> tail*])
                (let* ([defs (map cons label* body*)])
                  `(program ,tail* ... ,defs ... ...))])))
    (program p)))

#!eof

(flatten-program
 '(program ([f$1 (code ()
                       (begin
                         (set! rax (+ rax rax))
                         (r15)))])
           (begin
             (set! rax 17)
             (f$1))))

(program
 (set! rax 17)
 (jump f$1)
 f$1
 (set! rax (+ rax rax))
 (jump r15))

(flatten-program
 '(program
   ((f$1 (code () (if rbx (c$10) (a$11))))
    (a$11 (code () (begin (set! rbx 5) (j$7))))
    (c$10 (code () (if rcx (c$8) (a$9))))
    (a$9 (code () (begin (set! rax rdx) (j$7))))
    (c$8 (code () (begin (set! rdx 3) (j$7))))
    (j$7 (code () (set! rcx 6))))
   (f$1)))
