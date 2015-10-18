;;; Parse-Scheme basically checks if the program is compatible with the subset of scheme the compiler is supposed to work on
;;; The Subset of Scheme for The Final Compiler
;;; Program ---->		Expr 
;;;	Expr		---->   constant
;;;							|  	var
;;;							|		(quote datum)
;;;							|		(if Expr Expr)
;;;							|		(if Expr Expr Expr)
;;;							|		(and Expr*)
;;;							|		(or Expr*)
;;;							|		(begin Expr* Expr)
;;;							|		(lambda (uvar*) Expr+)
;;;							|		(let ([var Expr]*) Expr+)
;;;							|		(letrec ([var Expr]*) Expr+)
;;;							|		(set! uvar Expr)
;;;							|		(prim Expr*)
;;;							|		(Expr Expr*)
;;;	where:
;;;
;;;constant is #t, #f, (), or a fixnum;
;;;fixnum is an exact integer;
;;;datum is a constant, pair of datums, or vector of datums; and
;;;var is an arbitrary symbol.

(define parse-scheme
  (lambda (x)
    (define env0
      '([+              .  (+              2)]
        [-              .  (-              2)]
        [*              .  (*              2)]
        [logand         .  (logand         2)]
        [logor          .  (logor          2)]
        [sra            .  (sra            2)]

        [=              .  (=              2)]
        [<              .  (<              2)]
        [>              .  (>              2)]
        [<=             .  (<=             2)]
        [>=             .  (>=             2)]

        [boolean?       .  (boolean?       1)]
        [eq?            .  (eq?            2)]
        [fixnum?        .  (fixnum?        1)]
        [null?          .  (null?          1)]
        [pair?          .  (pair?          1)]
        [box?           .  (box?           1)]
        [vector?        .  (vector?        1)]
        [procedure?     .  (procedure?     1)]

        [cons           .  (cons           2)]
        [car            .  (car            1)]
        [cdr            .  (cdr            1)]
        [set-car!       .  (set-car!       2)]
        [set-cdr!       .  (set-cdr!       2)]

        [box            .  (box            1)]
        [unbox          .  (unbox          1)]
        [set-box!       .  (set-box!       2)]

        [make-vector    .  (make-vector    1)]
        [vector-length  .  (vector-length  1)]
        [vector-ref     .  (vector-ref     2)]
        [vector-set!    .  (vector-set!    3)]
        [void           .  (void           0)]

        [foreign-call         .  (foreign-call         1)]))

    (define get-name cadr)
    (define get-argn caddr)
    (define unique-check
      (lambda (ls)
        (cond
         [(null? ls) '()]
         [(not (symbol? (car ls)))
          (error 'parse-scheme "parameter must be a symbol, but got ~a" (car ls))]
         [(memq (car ls) (cdr ls))
          (error 'parse-scheme "duplicated parameter ~a" (car ls))]
         [else (cons (car ls) (unique-check (cdr ls)))])))
    (define parse
      (lambda (env)
        (lambda (x)
          (match x
            [,x (guard (number? x))
             (if (and (exact? x) (fixnum-range? x))
                 `(quote ,x)
                 (error 'parse-scheme "not an exact number or out of range ~a" x))]
            [,x (guard (or (boolean? x) (null? x)))
             `(quote ,x)]
            [,x (guard (string? x))
                       `(quote ,x)]
            [,x (guard (symbol? x))
             (cond
              [(assq x env) => cadr]
              [else (error 'parse-scheme "unbound variable ~a" x)])]
            [#(,[x*] ...)
             `(quote #(,x* ...))]
            [(,f ,x* ...) (guard (assq f env))
             (let ([p (assq f env)])
               (if (and (get-argn p) (not (= (length x*) (get-argn p))))
                   (error 'parse-scheme
                          "procedure ~a expects ~a arguments, but got ~a"
                          f (get-argn p) (length x*))
                   (map (parse env) `(,f ,x* ...))))]
            [(if ,[t] ,[c])
             `(if ,t ,c (void))]
            [(if ,[t] ,[c] ,[a])
             `(if ,t ,c ,a)]
            [(and ,x* ...)
             (cond
              [(null? x*) #t]
              [(null? (cdr x*)) ((parse env) (car x*))]
              [else `(if ,((parse env) (car x*))
                         ,((parse env) `(and ,@(cdr x*)))
                         '#f)])]
            [(or ,x* ...)
             (cond
              [(null? x*) #f]
              [(null? (cdr x*)) ((parse env) (car x*))]
              [else
               (let ([tmp (unique-name 'tmp)])
                 `(let ([,tmp ,((parse env) (car x*))])
                    (if ,tmp ,tmp ,((parse env) `(or ,@(cdr x*))))))])]
            [(not ,[x])
             `(if ,x '#f '#t)]
            [(begin ,[ef*] ...)
             (cond
              [(null? ef*)
               (error 'parse-scheme "body of begin cannot be empty")]
              [else `(begin ,ef* ...)])]
            [(lambda (,u* ...) ,e1 ,e2* ...)
             (let* ([w* (map unique-name (unique-check u*))]
                    [new-bd* (map (lambda (x y) `(,x . (,y #f))) u* w*)]
                    [body (if (null? e2*) e1 `(begin ,e1 ,e2* ...))]
                    [e^ ((parse (append new-bd* env)) body)])
               `(lambda (,w* ...) ,e^))]
            [(,let/rec ([,u* ,e*] ...) ,e1 ,e2* ...)
             (guard (memq let/rec '(letrec let)))
             (let* ([w* (map unique-name (unique-check u*))]
                    [new-bd* (map (lambda (x y z)
                                    (match z
                                      [(lambda (,x* ...) ,e1 ,e2 ...)
                                       `(,x . (,y ,(length x*)))]
                                      [,z `(,x . (,y #f))]))
                                  u* w* e*)]
                    [new-env* (append new-bd* env)]
                    [body (if (null? e2*) e1 `(begin ,e1 ,e2* ...))]
                    [e*^ (if (eq? let/rec 'let)
                             (map (parse env) e*)
                             (map (parse new-env*) e*))]
                    [body^ ((parse new-env*) body)])
               `(,let/rec ([,w* ,e*^] ...) ,body^))]
            [(set! ,x ,[v])
             (cond
              [(not (symbol? x))
               (error 'parse-scheme "can only assign to variables, but got ~a" x)]
              [(assq x env) => (lambda (p) `(set! ,(cadr p) ,v))]
              [else (error 'parse-scheme "unbound variable ~a" x)])]
            [(quote ,imm) `(quote ,imm)]
            [(,[f] ,[x*] ...)
             `(,f ,x* ...)]
            [,x (error 'parse-scheme "illegal program ~a" x)]))))
    ((parse env0) x)))
