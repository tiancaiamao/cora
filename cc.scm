(define (prim? exp) (memq exp '(+ - * / = set!/k)))
(define (const? x) (or (integer? x) (string? x) (boolean? x)))
(define (tagged-list? e tag)
  (and (pair? e) (eq? (car e) tag)))

(define (lambda? e) (tagged-list? e 'lambda))
(define (lambda->bind e) (cadr e))
(define (lambda->body e) (caddr e))

(define (if? e) (tagged-list? e 'if))
(define (if->test e) (cadr e))
(define (if->then e) (caddr e))
(define (if->else e) (caddr (cdr e)))

(define (set!? e) (tagged-list? e 'set!))
(define (set!->var e) (cadr e))
(define (set!->val e) (caddr e))

(define (define? e) (tagged-list? e 'define))
(define (define->var e) (cadr e))
(define (define->val e) (caddr e))

(define (begin? e) (tagged-list? e 'begin))
(define (begin->exp e) (cdr e))

(define (app? e) (pair? e))

(define (closure? e) (tagged-list? e 'closure))

(define remove
  (lambda (x ls)
    (cond
     ((null? ls) '())
     ((eq? x (car ls))
      (remove x (cdr ls)))
     (else 
      (cons (car ls) (remove x (cdr ls)))))))

(define difference
  (lambda (lst1 lst2)
    (if (not (pair? lst2))
	lst1
	(difference (remove (car lst2) lst1) (cdr lst2)))))

(define insert
  (lambda (x ls)
    (cond
     ((null? ls) (cons x '()))
     ((eq? (car ls) x) ls)
     (else (cons (car ls)
		 (insert x (cdr ls)))))))

(define union
  (lambda (lst1 lst2)
    (if (null? lst1)
	lst2
	(insert (car lst1)
		(union (cdr lst1) lst2)))))

(define reduce
  (lambda (f ls rv)    
    (if (null? ls)
	rv
	(reduce f (cdr ls) (f (car ls) rv)))))

(define environments '())
(define num-envs 0)
(define allocate-environment
  (lambda (lst)
    (set! num-envs (+ num-envs 1))
    (set! environments (cons (cons num-envs lst) environments))
    num-envs))

(define free-vars
  (lambda (exp)
    (cond
     ((const? exp) '())
     ((prim? exp) '())
     ((symbol? exp) (list exp))
     ((lambda? exp) (difference (free-vars (lambda->body exp))
				(lambda->bind exp)))
     ((if? exp) (union (free-vars (if->test exp))
		       (union (free-vars (if->then exp))
			      (free-vars (if->else exp)))))
     ((set!? exp) (union (list (set!->var exp))
			 (free-vars (set!->val exp))))
     ((begin? exp) (reduce union (map free-vars (begin->exp exp)) '()))
     ((app? exp) (reduce union (map free-vars exp) '()))
     (else (error "unknown expression:" exp)))))

(define substitute-var
  (lambda (env x)
    (let ((sub (assq x env)))
      (if sub
	  (cdr sub)
	  x))))

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
    (cond
     ((const? exp) exp)
     ((symbol? exp)
      (substitute-var env exp))
     ((if? exp)
      `(if ,(substitute env (if->test exp))
	   ,(substitute env (if->then exp))
	   ,(substitute env (if->else exp))))
     ((begin? exp)
      (cons 'begin (map substitute-with (begin->exp exp))))
     ((closure? exp) exp)
					;     ((set!? exp)
					;     `(set! ,(substitute-var env (set!->var exp))
					;	     ,(substitute-var env (set!->val exp))))
     ((lambda? exp)
      `(lambda ,(lambda->bind exp)
	 ,(substitute (assq-remove-keys (lambda->bind exp) env)
		      (lambda->body exp))))
     ((app? exp) (map substitute-with exp)))))

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
    (cond
     ((or (symbol? exp) (boolean? exp) (number? exp))
      exp)
     ((lambda? exp) 
      (let* ((body (closure-convert (lambda->body exp)))
	     (fv (difference (free-vars (lambda->body exp)) (lambda->bind exp)))
	     (id (allocate-environment fv))
	     ($env (gensym 'env))
	     (sub (fv->sub fv 0 $env)))
	`(closure (lambda (,$env ,@(lambda->bind exp))
		    ,(substitute sub body))
		  (env-make ,(length fv) ,@fv))))
     ((if? exp)
      `(if ,(closure-convert (if->test exp))
	   ,(closure-convert (if->then exp))
	   ,(closure-convert (if->else exp))))
					;     ((set!? exp)
					;      `(set! ,(set!->var exp)
					;	     ,(closure-convert (set!->val exp))))
					;     ((define? exp)
					;      `(define ,(define->var exp)
					;	 ,(closure-convert (define->val exp))))
     ((app? exp)
      (map closure-convert exp))
     (else (error "unhandled exp: " exp)))))


(define closure
  (lambda (f e)
    (lambda x
      (apply f (cons e x)))))

(define env-make
  (lambda (n . ls)
    (list->vector ls)))

(define env-get
  (lambda (n e)
    (vector-ref e n)))


;;;;;;;;test;;;;;;;;;;;;;;
(define halt (lambda (x) x))
(define fact 
  (closure
   (lambda (env58306 n k58145)
     (if (= n 0)
	 (k58145 1)
	 (fact (- n 1)
	       (closure
		(lambda (env58305 rv$58146)
		  ((env-get 0 env58305) (* (env-get 1 env58305) rv$58146)))
		(env-make 2 k58145 n)))))
   (env-make 1 fact)))
;; (fact 5 halt) => 120
