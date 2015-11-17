(define remove-if
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
               [((,triv)) (guard (and (label? triv)))
                `((,triv))]
               [,seq
                (let ([label (if (label? l) l (unique-label l))])
                  (add-def `(,label (code () ,(make-begin seq))))
                  `((,label)))])))
    (define expose1 (lambda (p) (make-begin (expose `(,p) id))))
    (define expose
      (lambda (seq C)
        (match seq
               [(program ([,label* (code () ,[expose1 -> e1*])] ...) ,[expose1 -> e2*])
                `(program ((,label* (code () ,e1*)) ... ,new-def* ...) ,e2*)]
               [((begin ,s ...)) (expose `(,s ...) C)]
               [((if ,test ,conseq ,alt) ,t* ...)
                (let* ([er* (if (null? t*) '() (make-def 'j (expose `(,t* ...) C)))]
                       [C^ (if (null? t*) C (lambda (eh*) (C `(,@eh* ,@er*))))]
                       [ec* (make-def 'c (expose `(,conseq) C^))]
                       [ea* (make-def 'a (expose `(,alt) C^))])
                  (expose `(,test) (lambda (et*)
                                     (shortcut `((if ,@et* ,@ec* ,@ea*))))))]
               [(,h ,t ,t* ...)
                (expose `(,h) (lambda (eh*) `(,@eh* ,@(expose `(,t ,t* ...) C))))]
               [((nop)) (C '())]
               [,other (C other)])))
    (expose p id)))

#!eof

(remove-if
 '(program
   ([f$1 (code ()
               (begin
                 (if rbx
                     (if rcx (set! rdx 3) (set! rax rdx))
                     (set! rbx 5))
                 (set! rcx 6)))])
   (f$1)))

(program
 ((f$1 (code () (if rbx (c$10) (a$11))))
  (a$11 (code () (begin (set! rbx 5) (j$7))))
  (c$10 (code () (if rcx (c$8) (a$9))))
  (a$9 (code () (begin (set! rax rdx) (j$7))))
  (c$8 (code () (begin (set! rdx 3) (j$7))))
  (j$7 (code () (set! rcx 6))))
 (f$1))
