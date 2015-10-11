#|
(letrec ([f$1 (lambda ()
                (if (if (= r8 1) (true) (> r9 1000))
                    (begin (set! rax r9) (r15))
                    (begin
                      (set! r9 (* r9 2))
                      (set! rax r8)
                      (set! rax (logand rax 1))
                      (if (= rax 0) (set! r9 (+ r9 1)) (nop))
                      (set! r8 (sra r8 1))
                      (f$1))))])
  (begin (set! r8 3) (set! r9 10) (f$1)))
=>
(letrec ([f$1 (lambda () (if (= r8 1) (c$8) (a$9)))]
         [c$8 (lambda () (c$6))]
         [a$9 (lambda () (if (> r9 1000) (c$6) (a$7)))]
         [c$6 (lambda () (begin (set! rax r9) (r15)))]
         [a$7 (lambda ()
                (begin
                  (set! r9 (* r9 2))
                  (set! rax r8)
                  (set! rax (logand rax 1))
                  (if (= rax 0) (c$3) (a$4))))]
         [c$3 (lambda () (begin (set! r9 (+ r9 1)) (j$5)))]
         [a$4 (lambda () (j$5))]
         [j$5 (lambda () (begin (set! r8 (sra r8 1)) (f$1)))])
  (begin (set! r8 3) (set! r9 10) (f$1)))
|#

(define expose-basic-blocks
  (lambda (p)
    (define new-def* '())
    (define add-def
      (lambda (def)
        (set! new-def* (union `(,def) new-def*))))
    (define shortcut
      (lambda (seq)
        (define cut
          (lambda (p)
            (match p
              [(if (true) ,a ,b) a]
              [(if (false) ,a ,b) b]
              [,p p])))
        (map cut seq)))
    (define make-def
      (lambda (l seq)
        (match (shortcut seq)
          [() '()]
          [((,triv)) (guard (and *enable-optimize-jumps* (label? triv)))
           `((,triv))]
          [,seq
           (let ([label (if (label? l) l (unique-label l))])
             (add-def `(,label (lambda () ,(make-begin seq))))
             `((,label)))])))
    (define expose1 (lambda (p) (make-begin (expose `(,p) id))))
    (define expose
      (lambda (seq C)
        (match seq
          [(letrec ([,label* (lambda () ,[expose1 -> e1*])] ...) ,[expose1 -> e2*])
           `(letrec ((,label* (lambda () ,e1*)) ... ,new-def* ...) ,e2*)]
          [((begin ,s ...)) (expose `(,s ...) C)]
          [((if ,test ,conseq ,alt) ,t* ...)
           (let* ([er* (if (null? t*) '() (make-def 'j (expose `(,t* ...) C)))]
                  [C^ (if (null? t*) C (lambda (eh*) (C `(,@eh* ,@er*))))]
                  [ec* (make-def 'c (expose `(,conseq) C^))]
                  [ea* (make-def 'a (expose `(,alt) C^))])
             (expose `(,test) (lambda (et*)
                                (shortcut `((if ,@et* ,@ec* ,@ea*))))))]
          [((return-point ,label ,tail) ,t* ...)
           (let ([et* (make-def label (expose `(,t* ...) C))])
             (expose `(,tail) (lambda (eh*) eh*)))]
          [(,h ,t ,t* ...)
           (expose `(,h) (lambda (eh*) `(,@eh* ,@(expose `(,t ,t* ...) C))))]
          [((nop)) (C '())]
          [,other (C other)])))
    (expose p id)))

#!eof

(expose-basic-blocks
 '(letrec ()
    (begin
      (set! rcx r15)
      (set! rax 24)
      (set! rax (+ rax 40))
      (nop)
      (rcx))))
