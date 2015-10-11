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
      (lambda (p next-l)
        (match p
          [(letrec ,[flatten-defs -> def*] ,[tail])
           (let ([tail (cond
                        [(null? def*) tail]
                        [else
                         (match tail
                           [(,st* ... (jump ,tail)) (guard (eq? tail (caar def*)))
                            `(,st* ...)]
                           [,tail tail])])])
             `(code ,@tail ,def* ... ...))]
          [(,label* (lambda () ,[tail*])) `(,label* ,@tail*)]
          [(begin ,[ef*] ... ,[tail]) `(,ef* ... ... ,@tail)]
          [(if ,test (,conseq) (,alt))
           (cond [(eq? conseq next-l)
                  `((if (not ,test) (jump ,alt)))]
                 [(eq? alt next-l)
                  `((if ,test (jump ,conseq)))]
                 [else `((if ,test (jump ,conseq)) (jump ,alt))])]
          [(set! ,a ,b) `((set! ,a ,b))]
          [(mset! ,base ,off ,val) `((mset! ,base ,off ,val))]
          [(,[triv]) (if (eq? triv next-l) '() `((jump ,triv)))]
          [,p p])))
    (define flatten-defs
      (lambda (defs)
        (match defs
          [() '()]
          [([,lab (lambda () ,body)]) `(,(flatten `(,lab (lambda () ,body)) #f))]
          [([,lab1 (lambda () ,body1)]
            [,lab2 (lambda () ,body2)]
            [,lab3 (lambda () ,body3)] ...)
           `(,(flatten `(,lab1 (lambda () ,body1)) lab2)
             ,@(flatten-defs `([,lab2 (lambda () ,body2)]
                               [,lab3 (lambda () ,body3)]...)))])))
    (flatten p #f)))

#!eof

(flatten-program
 '(letrec ()
    (begin
      (set! rcx r15)
      (set! rax 24)
      (set! rax (+ rax 40))
      (set! rax rax)
      (rp.25))))
