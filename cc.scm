(load "match.scm")

(define trivial? (lambda (x) (memq x '(zero? add1 sub1 + *))))

(define reduce
  (lambda (f ls rv)    
    (if (null? ls)
	rv
	(reduce f (cdr ls) (f (car ls) rv)))))

(define filter
  (lambda (f ls)
    (cond
     ((null? ls) '())
     ((f (car ls)) (filter f (cdr ls)))
     (else 
      (cons (car ls) (filter f (cdr ls)))))))

(define (remove x ls)
  (filter (lambda (x0) (eq? x0 x)) ls))

(define (difference lst1 lst2)
    (if (not (pair? lst2))
	lst1
	(difference (remove (car lst2) lst1) (cdr lst2))))

(define (insert x ls)
  (cons x (remove x ls)))

(define union
  (lambda (lst1 lst2)
    (if (null? lst1)
	lst2
	(insert (car lst1)
		(union (cdr lst1) lst2)))))

(define environments '())
(define num-envs 0)
(define allocate-environment
  (lambda (lst)
    (set! num-envs (+ num-envs 1))
    (set! environments (cons (cons num-envs lst) environments))
    num-envs))

(define (const? x)
  (or (null? x) (number? x) (string? x) (boolean? x) (trivial? x)))

(define free-vars
  (lambda (exp)
    (match exp
	   ((? const?) '())
	   ((? symbol?) (list exp))
	   (('lambda (vars ...) body ...)
	    (difference (free-vars body) vars))
	   (('if a b c)
	    (union (free-vars a)
		   (union (free-vars b)
			  (free-vars c))))
	   (('set! var val)
	    (union var (free-vars val)))
	   (('begin es ...) (reduce union (map free-vars es) '()))
	   ((f es ...) (reduce union (map free-vars exp) '()))
	   (else (error "unknown expression:" exp)))))

(define substitute-var
  (lambda (env x)
    (let ((sub (assq x env)))
      (if sub (cdr sub) x))))

(define assq-remove-key
  (lambda (x env)
    (cond 
     ((null? env) '())
     ((eq? (caar env) x) 
      (assq-remove-key x (cdr env)))
     (else (cons (car env)
		 (assq-remove-key x (cdr env)))))))

(define assq-remove-keys
  (lambda (lst env)
    (if (null? lst)
	env
	(assq-remove-keys (cdr lst)
			  (assq-remove-key (car lst) env)))))

(define substitute
  (lambda (env exp)
    (define substitute-with (lambda (e) (substitute env e)))
    (match exp
	   ((? const?) exp)
	   ((? symbol?)
	    (substitute-var env exp))
	   (('if a b c)
	    `(if ,(substitute env a)
		 ,(substitute env b)
		 ,(substitute env c)))
	   (('begin es ...)
	    (cons 'begin (map substitute-with es)))
	   (('$closure . _) exp)
					;     ((set!? exp)
					;     `(set! ,(substitute-var env (set!->var exp))
					;	     ,(substitute-var env (set!->val exp))))
	   (('lambda (var ...) body ...)
	    `(lambda ,var
	       ,(substitute (assq-remove-keys var env) body)))
	   ((f es ...) (map substitute-with exp)))))

(define (azip list1 list2)
  (if (and (pair? list1) (pair? list2))
      (cons (list (car list1) (car list2))
            (azip (cdr list1) (cdr list2)))
      '()))

;; (fv1 fv2 ...) => ((fv1 (env-get 1 env)) (fv2 (env-get 2 env)) ...)
(define fv->sub
  (lambda (fv idx env)
    (if (null? fv)
	'()
	(cons (cons (car fv) `(env-get ,idx ,env))
	      (fv->sub (cdr fv) (+ idx 1) env)))))

(define closure-convert
  (lambda (exp)
    (match exp
	   ((? const?) exp)
	   ((? symbol?) exp)
	   (('lambda (vars ...) body ...)
	    (let* ((body1 (closure-convert body))
		   (fv (difference (free-vars body) vars))
		   (id (allocate-environment fv))
		   ($env (gensym 'env))
		   (sub (fv->sub fv 0 $env)))
	      `($closure (lambda (,$env ,@vars)
			   ,(substitute sub body1))
			 (env-make ,(length fv) ,@fv))))
	   (('if a b c)
	    `(if ,(closure-convert a)
		 ,(closure-convert b)
		 ,(closure-convert c)))
					;     ((set!? exp)
					;      `(set! ,(set!->var exp)
					;	     ,(closure-convert (set!->val exp))))
					;     ((define? exp)
					;      `(define ,(define->var exp)
					;	 ,(closure-convert (define->val exp))))
	   ((f es ...)
	    (map closure-convert exp))
	   (else (error "unhandled exp: " exp)))))
