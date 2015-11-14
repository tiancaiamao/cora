(load "match.ss")
(load "helpers.ss")
(load "driver.ss")
(load "util.scm")

(load "liveness-analysis.scm")
(load "assign-registers.scm")

(define (constant? x) (or (boolean? x) (null? x) (number? x) (string? x)))
(define (primitive? x) (memq x '(procedure? void foreign-call + - * /)))

(define alpha-conversion
  (lambda (x)
    (define transform
      (lambda (x env)
        (match x
               [,x (guard (constant? x)) x]
               [,x (guard (symbol? x))
                   (cond
                    [(primitive? x) x]
                    [(assoc x env) => cdr]
                    [else (error 'alpha-conversion (format "undefined variable ~a" x))])]
               [(quote ,imm) x]
               [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
               [(begin ,[e*] ...) (if (null? e*) '(void) `(begin ,e* ...))]
               [(set! ,n ,[v])
                (cond
                 [(not (symbol? n))
                  (error 'alpha-conversion (format "should set! a symbol ~a" v))]
                 [(assoc n env) => (lambda (p) `(set! ,(cdr p) ,v))]
                 [else (error 'alpha-conversion (format "undefined variable ~a" n))])]
               [(lambda (,u* ...) ,e1 ,e2* ...)
                (let* ([w* (map unique-name u*)]
                       [bd (map cons u* w*)]
                       [body (if (null? e2*) e1 `(begin ,e1 ,e2* ...))]
                       [env1 (append bd env)])
                  `(lambda (,w* ...) ,(transform body env1)))]
               [(let ([,n* ,v*] ...) ,e1 ,e2* ...)
                (let* ([n1* (map unique-name n*)]
                       [body (if (null? e2*) e1 `(begin ,e1 ,e2* ...))]
                       [env1 (append (map cons n* n1*) env)]
                       [body1 (transform body env1)])
                  `(let ([,n1* ,v*] ...) ,body1))]
               [(,[f] ,[x*] ...)
                `(,f ,x* ...)]
               [,x (error 'alpha-conversion (format "wrong input: ~a" x))])))
    (transform x '())))

(define convert-assignment
  (lambda (x)
    (define transform
      (lambda (x)
        (match x
               [(quote ,imm) (values x '())]
               [(if ,[transform -> t l1] ,[transform -> c l2] ,[transform -> a l3])
                (values `(if ,t ,c ,a) (union l1 l2 l3))]
               [(begin ,[transform -> ef* as*] ...)
                (values `(begin ,ef* ...) (apply union as*))]
               [(set! ,n ,[transform -> v l1])
                (values `(set-box! ,n ,v) (cons n l1))]
               [(lambda (,u* ...) ,[transform -> body l1])
                (values x l1)]
               [(let ([,n* ,[transform -> v* l1*]] ...) ,(transform -> body l2))
                (let* ([pairs '()]
                       [bd (map (lambda (n v)
                                  (if (memq n l2)
                                      (let ([tmp (unique-name n)])
                                        (set! pairs (cons (list n tmp) pairs))
                                        (list tmp `(box ,v)))
                                      (list n v))) n* v*)])
                  (if (null? pairs)
                      (values x (union l2 (apply union l1*)))
                      (values
                       `(let (,bd ...)
                          (let (,pairs ...)
                            ,body))
                       (union l2 (apply union l1*)))))]
               [(,[transform -> f af*] ,[transform -> x* ax*] ...)
                (values `(,f ,x* ...) (union af* (apply union ax*)))]
               [,x (values x '())])))
    (let-values ([(e _) (transform x)])
      e)))

(define closure-convert
  (lambda (x)

    (define (free-vars exp)
      (match exp
             [,x (guard (or (primitive? x) (constant? x))) '()]
             [,x (guard (symbol? x)) (list x)]
             [(lambda (,u* ...) ,[body])
              (difference body u*)]
             [(if ,[t] ,[c] ,[a]) (union t c a)]
             [(begin ,[es*] ...) (apply union es*)]
             [(set! ,[n] ,[v]) (union n v)]
             [(,[f] ,[x*] ...) (union f (apply union x*))]))

    (define labels '())

    (define convert
      (lambda (x)
        (match x
               [,x (guard (or (primitive? x) (constant? x))) x]
               [,x (guard (symbol? x)) x]
               [(lambda (,u* ...) ,body)
                (let* ([body1 (convert body)]
                       [fv (difference (free-vars body) u*)]
                       [label (unique-label 'f)])
                  (set! labels (cons
                                `[,label (code (,fv ...) (,u* ...) ,body1)]
                                labels))
                  `(closure ,label ,@fv))]
               [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
               [(set! ,n ,[v]) `(set! ,n ,v)]
               [(,[f] ,[x*] ...) `(,f ,x* ...)])))

    (let ([x1 (convert x)])
      `(program ,labels
             ,(convert x1)))))

(define lift-constants
  (lambda (x)

    (define immediate? (lambda (x) (or (number? x) (null? x) (boolean? x) (symbol? x))))

    (define constants '())
    (define add-constants (lambda (x) (set! constants (cons x constants))))

    (define (transform x)
      (match x
             [,x (guard (immediate? x)) x]
             [(quote ,e)
              (cond
               [(immediate? e) e]
               [(assoc e constants) => caddr]
               [else
                (let ([label (unique-name 'c)])
                  (add-constants `(,e (constant-ref ,label)))
                  `(constant-ref ,label))])]
             [,e (guard (string? e)) (transform `(quote ,e))]
             [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
             [(begin ,[es] ...) `(begin ,es ...)]
             [(set! ,var ,[val]) `(set! ,var ,val)]
             [(code ,cvar ,var ,body) `(code ,cvar ,var ,(transform body))]
             [(closure ,label ,cval ...) x]
             [(,[f] ,[xs] ...) `(,f ,xs ...)]))

    (match x
           [(program [(,labels ,codes) ...]
                     ,body)
            (let ([codes1 (map transform codes)]
                  [body1 (transform body)])
              `(program ,(map list labels codes1)
                        ,constants
                        ,body1))])))

(define remove-let
  (lambda (x)
    (define locals* '())
    (define add-local (lambda (x) (set! locals* (cons x locals*))))
    (define uncover1
      (lambda (x)
        (set! locals* '())
        (let ((x^ (uncover x)))
          (values locals* x^))))
    (define uncover
      (lambda (x)
        (match x
               [(begin ,[s*] ...) `(begin ,s* ...)]
               [(let ((,x* ,[v*]) ...) ,[body])
                (for-each add-local x*)
                `(begin (set! ,x* ,v*) ... ,body)]
               [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
               [(set! ,x ,[y]) `(set! ,x ,y)]
               [(,[f] ,[a*] ...) `(,f ,a* ...)]
               [,other other])))
    (match x
           [(program ((,label* (code (,cvar* ...)
                                     (,uvar* ...)
                                     ,[uncover1 -> new* body*])) ...)
                     ,constants ...
                     ,[uncover1 -> new body])
            `(program ((,label* (code (,cvar* ... )
                                      (,uvar* ...)
                                      (locals ,new* ,body*))) ...)
                      ,constants ...
                      (locals ,new ,body))])))

(define impose-calling-conversions
  (lambda (x)

    (define help1 (lambda (x i) `(set! ,x ,(string->symbol (format "pos~a" i)))))
    (define help2 (lambda (x i) `(set! ,(string->symbol (format "pos~a" i)) ,x)))
    (define help3
      (lambda (lst i ret fn)
        (if (null? lst)
            ret
            (help3 (cdr lst) (+ i 1) (cons (fn (car lst) i) ret) fn))))
    (define send (lambda (vars) (help3 vars 0 '() help2)))
    (define receive (lambda (vars) (help3 vars 0 '() help1)))

    (define impose
      (lambda (x)
        (match x
               [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
               [(begin ,[s*] ...) `(begin ,s* ...)]
               [(set! ,x ,[y]) `(set! ,x ,y)]
               [(code (,fv* ...)
                      (,var* ...)
                      (locals (,lv* ...) ,[body]))
                (let ([init (receive var*)])
                  `(code (,fv* ...)
                         (locals (,lv* ... ,var* ...)
                                 ,(cons 'begin init)
                                 ,body)))]
               [(,f ,a* ...)
                (let ([init (send a*)])
                  `(begin ,@init (call ,f)))]
               [,other x])))

    (match x
           [(program ([,label* ,[impose -> code*]] ...)
                     (,constants* ...)
                     (locals (,lv* ...) ,[impose -> body]))
            `(program ((,label* ,code*) ...)
                      (,constants* ...)
                      (locals (,lv* ...) ,body))])))

(define finalize-locations
  (lambda (x)

    (define lookup
      (lambda (v env)
        (let ((slot (assq v env)))
          (if slot (cdr slot) v))))

    (define finalize
      (lambda (x env)
        (match x
               [(program ([,label* (code () , [bd*])] ...) , [bd])
                `(program ([,label* (code () ,bd*)] ...) ,bd)]
               [(locate ([,uvar* ,loc*] ...) ,tail)
                (finalize tail `((,uvar* . ,loc*) ...))]
               [(begin , [ef*] ... , [tail])
                `(begin ,ef* ... ,tail)]
               [(if , [test] , [conseq] , [altern])
                `(if ,test ,conseq ,altern)]
               [(set! ,[x] (,binop ,[y] ,[z]))
                `(set! ,x (,binop ,y ,z))]
               [(set! ,[x] ,[y])
                (if (eq? x y) `(nop) `(set! ,x ,y))]
               [(mset! ,[base] ,[off] ,[val])
                `(mset! ,base ,off ,val)]
               [(mref ,[base] ,[off])
                `(mref ,base ,off)]
               [(,op ,[x] ,[y]) (guard (or (binop? op) (relop? op)))
                `(,op ,x ,y)]
               [(,[triv] ,[live*] ...) `(,triv)]
               [,v (guard (uvar? v)) (lookup v env)]
               [,x x])))

    (finalize x '())))

(define expose-frame-var
  (lambda (p)
    (define fp-offset 0)
    (define m@p
      (lambda (f ls)
        (cond
         [(null? ls) '()]
         [else
          (let ((first (f (car ls))))
            (cons first (m@p f (cdr ls))))])))
    (define expose
      (lambda (p)
        (match p
          [(program ([,label* (code () ,tail*)] ...) ,tail)
           (let ([saved fp-offset])
             `(program ([,label* (code () ,(begin (set! fp-offset saved)
                                                   (expose tail*)))] ...)
                ,(begin (set! fp-offset saved) (expose tail))))]
          [(begin ,ef* ... ,tail)
           `(begin ,@(m@p expose `(,ef* ... ,tail)))]
          [(if ,test ,conseq ,alt)
           (let* ([test^ (expose test)]
                  [saved fp-offset]
                  [conseq^ (begin (set! fp-offset saved) (expose conseq))]
                  [alt^ (begin (set! fp-offset saved) (expose alt))])
             `(if ,test^ ,conseq^ ,alt^))]
          [(set! ,var (,op ,triv1 ,triv2))
           (guard (eq? var frame-pointer-register))
           (set! fp-offset ((eval op) fp-offset triv2))
           `(set! ,var (,op ,triv1 ,triv2))]
          [(set! ,[var] (,op/mref ,[triv1] ,[triv2]))
           `(set! ,var (,op/mref ,triv1 ,triv2))]
          [(set! ,[var] ,[triv])
           `(set! ,var ,triv)]
          [(mset! ,base ,off ,val)
           `(mset! ,base ,off ,val)]
          [(,[triv] ,[triv*] ...) `(,triv ,triv* ...)]
          [,v (guard (frame-var? v))
              (make-disp-opnd frame-pointer-register
                              (- (fxsll (frame-var->index v) align-shift)
                                 fp-offset))]
          [,p p])))
    (expose p)))

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

(define flatten-program
  (lambda (p)
    (define flatten
      (lambda (p next-l)
        (match p
          [(program ,[flatten-defs -> def*] ,[tail])
           (let ([tail (cond
                        [(null? def*) tail]
                        [else
                         (match tail
                           [(,st* ... (jump ,tail)) (guard (eq? tail (caar def*)))
                            `(,st* ...)]
                           [,tail tail])])])
             `(program ,@tail ,def* ... ...))]
          [(,label* (code () ,[tail*])) `(,label* ,@tail*)]
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
               [([,lab (code () ,body)]) `(,(flatten `(,lab (code () ,body)) #f))])))
    (flatten p #f)))

(impose-calling-conversions
 '(program
          ([f$1 (code ()
                      ()
                      (locals (a b) (f a b)))])
          ()
          (locals () 1)))

(compiler-passes
 '(
   alpha-conversion
   convert-assignment
   closure-conversion
   lift-constants
   remove-let
   impose-calling-conversions
   liveness-analysis
   assign-registers
   finalize-locations ;; remove variable
   expose-frame-var
   remove-if
   flatten-program
   ))
