(load "match.ss")
(load "helpers.ss")
(load "driver.ss")
(load "util.scm")


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
           [(program ((,label* ,[impose -> code*]) ...)
                     (locals ,(lv* ...) ,[impose -> body]))
            42])))

            `(program ((,label* ,code*) ...)
                      ,(constants ...)
                      (locals ,(lv* ...) ,body))])))

(impose-calling-conversions
 '(program ([f$1 (code () (a b c)
                       (locals () (+ a b)))])
           (locals (a b) 1)))

(convert-assignment '(let ((a 3) (b 5))
                       (begin
                         (set! b 8)
                         (set! a 4))))

(closure-convert '(lambda (a 3)
                    (lambda ()
                      (+ a 1))))

(free-vars '(lambda () (+ a 1)))

(closure-convert '(+ a 1))
(closure-convert 'a)
(free-vars '(+ a 1))
(intersection '(a) '())
(free-vars 'a.1)

(compiler-passes
 '(
   alpha-conversion
   convert-assignment
   closure-conversion
   lift-constants
   remove-let
   ))
