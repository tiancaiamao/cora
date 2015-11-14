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
