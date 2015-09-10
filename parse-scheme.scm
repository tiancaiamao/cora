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

(define-who parse-scheme
  ;;;checks if x is #t #f () or fixnum
  (define (datum? x)
    (or (constant? x)
        (if (pair? x)
            (and (datum? (car x)) (datum? (cdr x)))
            (and (vector? x) (andmap datum? (vector->list x))))))
   ;;; checks if x is a constant
  (define (constant? x)
    (or (memq x '(() #t #f))
        (and (integer? x) (exact? x) (fixnum-range? x))))
  ;;; primitives and te number of arguments they are supposed to take
  (define primitives
    '((+ . 2) (- . 2) (* . 2) (<= . 2) (< . 2) (= . 2)
      (>= . 2) (> . 2) (boolean? . 1) (car . 1) (cdr . 1)
      (cons . 2) (eq? . 2) (fixnum? . 1) (make-vector . 1)
      (null? . 1) (pair? . 1) (procedure? . 1) (set-car! . 2)
      (set-cdr! . 2) (vector? . 1) (vector-length . 1)
      (vector-ref . 2) (vector-set! . 3) (void . 0)))
  ;;; since each occurence of a symbol will be replaced by a uvar identified in our language by symbol.suffix eg x -> x.1
  ;;; generate returns a tuple of the symbol and the corresponding uvar
  (define generate
    (lambda (uvar)
      `(,uvar . ,(unique-name uvar))))
  ;;; if x is a datum process it else return error in Datum expression, will be called only when we encounter an expression of the form
  ;;; (quote ,datum)
  (define Datum
    (lambda (x)
      (match x
             [,x (guard (datum? x)) x]
             [,x (error who "error in Datum Expression ~s" x)])))
  ;;; The adjust function implements the shadowing of variables, if we have (letrec x (lambda (x) (+ 5 x)))
  ;;; the x in lambda expression will be shadowed by the parameter in the lambda expression and hence the x in letrec epression will no longer be valid here
  (define adjust
    (lambda (new-list old-list)
      (cond
       [(null? new-list) old-list]
       [else (let* ([x (caar new-list)] [res (assq x old-list)])
               (if res (adjust (cdr new-list) (cons (car new-list) (remq res old-list))) (adjust (cdr new-list) (cons (car new-list) old-list))))])))
  ;;; checks if the list of parameters passed to a lambda or the set of bindings for a let and letrec are unique
  (define check-unique
    (lambda (uvar* result* expr)
      (cond
       [(null? uvar*) #t]
       [(memq (car uvar*) result*) (error who "duplicate variables in expression ~s " expr)]
       [else (check-unique (cdr uvar*) (cons (car uvar*) result*) expr)])))
  ;;; env is a mapping between symbols and the corresponding uvars applicable to the expression we are now processing
  (define Expr
    (lambda (env)
      (lambda (expr)
        (match expr
               [(begin ,[(Expr env) -> expr*] ... ,[(Expr env) -> expr]) (guard (not (assq 'begin env))) `(begin ,expr* ... ,expr)]
               [(if ,[(Expr env) -> test] ,[(Expr env) -> conseq]) (guard (not (assq 'if env))) `(if ,test ,conseq (void))] ;;; one-armed if's
               [(if ,[(Expr env) -> test] ,[(Expr env) -> conseq] ,[(Expr env) -> alt]) (guard (not (assq 'if env))) `(if ,test ,conseq ,alt)]
               [(letrec ([,uvar* ,expr*] ...) ,tail* ...)
                (guard (not (assq 'letrec env)))
                (if (null? tail*)
                    (error who "Tail Expression in ~s must have atleast one value" expr)
                    (let* ([unique-name (check-unique uvar* '() expr)] ;;; check if all bindings unique
                           [local-letrec (map generate uvar*)] ;;;create a new-list of symbol to uvar mappings
                           [new-env (adjust local-letrec env)] ;;; add new-list to the existing env implemening shadowing
                           [new-exp* (map (Expr new-env) expr*)] ;;;process the exprs passing the new enviornment
                           [new-tail (map (Expr new-env) tail*)])
                      `(letrec ([,(map cdr local-letrec) ,new-exp*] ...) 
                         ,(make-begin new-tail))))]
               [(let ([,uvar* ,expr*] ...) ,tail* ...)
                (guard (not (assq 'let env)))
                (if (null? tail*)
                    (error who "Tail Expression in ~s must have atleast one value" expr)
                    (let* ([unique-name (check-unique uvar* '() expr)]
                           [local-letrec (map generate uvar*)]
                           [new-env (append local-letrec env)]
                           [new-exp* (map (Expr env) expr*)]
                           [new-tail (map (Expr new-env) tail*)])
                      `(let ([,(map cdr local-letrec) ,new-exp*] ...) 
                         ,(make-begin new-tail))))]
               [(lambda (,uvar* ...) ,tail* ...)
                (guard (not (assq 'lambda env)))
                (if (null? tail*)
                    (error who "Tail Expression in ~s must have atleast one value" expr)
                    (let* ([unique (check-unique uvar* '() expr)]
                           [local-bindings* (map generate uvar*)]
                           [new-env (adjust local-bindings* env)]
                           [new-tail (map (Expr new-env) tail*)]) ;;; Everytime I encounter a lambda-expression, I create a new enviornment
                      `(lambda (,(map cdr local-bindings*) ...) ,(make-begin new-tail))))]
               [(and ,x* ...)
                (guard (not (assq 'and env)))
                (cond 
                 [(null? x*) (quote #t)]
                 [(= (length x*) 1) ((Expr env) (car x*))]
                 [else `(if ,((Expr env) (car x*)) ,((Expr env) `(and ,(cdr x*) ...)) (quote #f))])]
               [(or ,x* ...)
                (guard (not (assq 'or env)))
                (cond
                 [(null? x*) (quote #f)]
                 [(= (length x*) 1) ((Expr env) (car x*))]
                 [else
                  (let ([temp (unique-name 't)])
                    `(let ([,temp ,((Expr env) (car x*))])
                       (if ,temp ,temp ,((Expr env) `(or ,(cdr x*) ...)))))])]
               [(not ,[(Expr env) -> x]) (guard (not (assq 'not env)))
                `(if ,x (quote #f) (quote #t))]
               [(set! ,x ,y)
                (guard (not (assq 'set! env)))
                (cond
                 [(and (symbol? x) (assq x env)) `(set! ,(cdr (assq x env)) ,((Expr env) y))]
                 [else (error who "Either ~s is not a symbol or ~s is not bound" x x)])]
               [(quote ,[Datum -> x]) (guard (not (assq 'quote env))) `(quote ,x)]
               [(,prim ,[(Expr env) -> x*] ...) (guard (and (assq prim primitives) (not (assq prim env))))
                (if (= (length x*) (cdr (assq prim primitives))) 
                    `(,prim ,x* ...)
                    (error who "Invalid arguments to primitive ~s " prim))]
               [,x (guard (symbol? x)) 
                   (cond
                    [(assq x env) (cdr (assq x env))]
                    [else (error who "unbound variable ~s " x)])] ;;maybe we will need to replace the uvar by a new expression e.g y will be replaced by y.1
               [,x (guard (constant? x)) `(quote ,x)]
               [(,[(Expr env) -> x] ,[(Expr env) -> x*] ...) `(,x ,x* ...)]
               [,x (error who "Invalid Expression ~s" x)]))))
	(lambda (x)
		((Expr '()) x)))
