(define (prim? x) (memq x '(+ - * / = or and void set!)))
(define (trivial? x) (or (number? x) (symbol? x) (string? x) (boolean? x)))
(define (lambda? x) (and (pair? x) (eq? (car x) 'lambda)))
(define (void) (begin))

;; M transform -- handle trivial and lambda expression
(define M
  (lambda (exp)
    (match exp
	   [(? trivial?) exp]
	   [('lambda (x ...) e ...)
	    (let ((k$ (gensym 'k)))
	      `(lambda (,@x ,k$)
		 ,(T-c (if (cdr e)
			   (cons 'begin e)
			   e)
		       k$)))])))

;; sexp x label => sexp
;; set! can't be implement as prim?
;; because prim? in begin will be discard, but set! has side-effect and should not be discard
(define T-c
  (lambda (exp c)
    (match exp
	   [(? trivial?) `(,c ,(M exp))]
	   [('lambda _ ...) `(,c ,(M exp))]
	   [`(begin ,e) (T-c e c)]
	   [('begin e es ...)
	    (T-k e (lambda (_)
		     (T-c `(begin ,@es) c)))]
	   [`(set! ,var ,val)
	    (T-k val
		 (lambda (v)
		   `(set!/k ,var ,v ,c)))]
	   [`(define ,var ,val)
	    (T-k exp (lambda (x) x))]
	   [`(if ,test ,then ,else)
	    (T-k exp
		 (lambda (v)
		   `(,c ,v)))]
	   [(f es ...)
	    (if (prim? f)
		(T*-k es
		      (lambda (es$)
			`(,c (,f ,@es$))))
		(T-k f 
		     (lambda (f$)
		       (T*-k es
			     (lambda (es$)
			       `(,f$ ,@es$ ,c))))))])))

;; sexps x (list => sexp) => sexp
;; argument k accept a list，and return a sexp
(define T*-k
  (lambda (exps k)
    (if (null? exps)
	(k '())
	(T-k (car exps)
	     (lambda (first)
	       (T*-k (cdr exps)
		     (lambda (remain)
		       (k (cons first remain)))))))))

;; sexp x (sexp => sexp) => sexp
(define T-k
  (lambda (exp k)
    (match exp
	   [(? trivial?) (k (M exp))]
	   [('lambda _ ...) (k (M exp))]
	   [`(begin ,e)
	    (T-k e k)]
	   [('begin e es ...)
	    (T-k e (lambda (_)
		     (T-k `(begin ,@es) k)))]
	   [`(set! ,var ,val)
	    (let* ((rv (gensym 'rv$))
		   (cont `(lambda (,rv) ,(k rv))))
	      (T-c exp cont))]
	   [`(if ,test ,then ,else)
	    (T-k test
		 (lambda (test$)
		   `(if ,test$
			,(T-k then k)
			,(T-k else k))))]
	   [`(define ,var ,val)
	    `(define ,var ,(T-k val k))]
	   [(f es ...)
	    (if (prim? f)
		(T*-k es
		      (lambda (es$) 
			(k `(,f ,@es$))))
		(let* ((rv (gensym 'rv$))
		       (cont `(lambda (,rv) ,(k rv))))
		  (T-c exp cont)))])))


;;;;;;;;;;;;;test;;;;;;;
(define halt (lambda (x) x))
(define fact 
  (lambda (n k5140)
    (if (= n 0)
	(k5140 1)
	(fact (- n 1)
	      (lambda (rv$5141)
		(k5140 (* n rv$5141)))))))
; (fact 5 halt) => 125

(define-syntax set!/k
  (syntax-rules ()
    ((_ var val cont)
     (cont (set! var val)))))
