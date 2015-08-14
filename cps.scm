(load "match.scm")

(define (prim? x) (memq x '(+ - * / =)))
(define (trivial? x) (or (number? x) (symbol? x) (string? x) (boolean? x)))
(define (aexp? expr)
  (match expr
	 [('lambda (var ...) body ...) #t]
	 [(? symbol?) #t]
	 [(? number?) #t]
	 [(? string?) #t]
	 [(? boolean?) #t]
	 [_ #f]))
    
;; M transform -- handle trivial and lambda expression
;; expr => aexp
(define M
  (lambda (exp)
    (match exp
	   [(? trivial?) exp]
	   [('lambda (x ...) e ...)
	    (let ((k1 (gensym 'k)))
	      `(lambda (,@x ,k1)
		 ,(T-c (if (cdr e)
			   (cons 'begin e)
			   e)
		       k1)))])))

;; expr x aexp => cexp
(define T-c
  (lambda (exp c)
    (match exp
	   [(? aexp?) `(,c ,(M exp))]
	   [('if test then else)
	    (T-k test (lambda (test1)
			`(if ,test1
			     ,(T-c then c)
			     ,(T-c else c))))]
	   [('begin e) (T-c e c)]
	   [('begin e es ...)
	    (T-k e (lambda (_)
		     (T-c `(begin ,@es) c)))]	
	   #|   
	   [`(set! ,var ,val)
	   (T-k val
	   (lambda (v)
	   `(set! ,var ,v)))]
	   |#	   	   
	   [(f es ...)
	    (if (prim? f)
		(T*-k es
		      (lambda (es$)
			`(,c (,f ,@es$))))
		(T-k f 
		     (lambda (f$)
		       (T*-k es
			     (lambda (es$)
			       `(,f$ ,@es$ ,c))))))]
	   #|
	   [`(define ,var ,val)
	   (T-k exp (lambda (x) x))]
	   |#
	   )))

;; sexps x (list => sexp) => sexp
;; argument k accept a list, return a sexp
;; expr* x (aexp* => cexp) => cexp
(define T*-k
  (lambda (exps k)
    (if (null? exps)
	(k '())
	(T-k (car exps)
	     (lambda (first)
	       (T*-k (cdr exps)
		     (lambda (remain)
		       (k (cons first remain)))))))))

;; expr => (aexp => cexp) => cexp
(define T-k
  (lambda (exp k)
    (match exp
	   [(? aexp?) (k (M exp))]
	   [`(if ,test ,then ,else)
	    (T-k test
		 (lambda (test$)
		   `(if ,test$
			,(T-k then k)
			,(T-k else k))))]
	   [`(begin ,e)
	    (T-k e k)]
	   [('begin e es ...)
	    (T-k e (lambda (_)
		     (T-k `(begin ,@es) k)))]
#|
	   [`(set! ,var ,val)
	    (let* ((rv (gensym 'rv$))
		   (cont `(lambda (,rv) ,(k rv))))
	      (T-c exp cont))]	   
	   [`(define ,var ,val)
	    `(define ,var ,(T-k val k))]
|#
	   [(f es ...)
	    (if (prim? f)
		(T*-k es
		      (lambda (es$) 
			(k `(,f ,@es$))))
		(let* ((rv (gensym 'rv$))
		       (cont `(lambda (,rv) ,(k rv))))
		  (T-c exp cont)))])))


;;;;;;;;;;;;;test;;;;;;;
(define id (lambda (x) x))

(T-c
 '(lambda (n)
    (if (= n 0)
	1
	(* n (fact (- n 1)))))
 'id)

(define fact
  (id (lambda (n k31659)
	(if (= n 0)
	    (k31659 1)
	    (fact (- n 1)
		  (lambda (rv$31660)
		    (k31659 (* n rv$31660))))))))

(fact 5 id)
