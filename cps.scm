(load "match.scm")

(define cps
  (lambda (exp)
    
    (define trivial? (lambda (x) (memq x '(zero? add1 sub1 + *))))
    (define id (lambda (v) v))
    (define ctx0 (lambda (v) `(k ,v)))
    (define fv (let ([n -1])
		 (lambda ()
		   (set! n (+ 1 n))
		   (string->symbol (string-append "v" (number->string n))))))
    (define (cps1 exp ctx)
      (match exp
	     ((? (lambda (x) (not (pair? x)))) (ctx exp))
	     (('if test conseq alt)
	      (cps1 test
		    (lambda (t)
		      `(if ,t ,(cps1 conseq ctx) ,(cps1 alt ctx)))))
	     (('begin e) (cps1 e ctx))
	     (('begin e es ...)
	      (cps1 e (lambda (re)
			;; can't discard side-effect expression
			(if (and (pair? re) (eq? (car re) 'set!))
			    `(let ((_ ,re))
			       ,(cps1 `(begin ,@es) ctx))
			    (cps1 `(begin ,@es) ctx)))))
	     (('set! var val)
	      (cps1 val (lambda (rv)
			  (ctx `(set! ,var ,rv)))))
	     (('lambda (x) body)
	      (ctx `(lambda (,x k) ,(cps1 body ctx0))))
	     ((f es ...)
	      (cps1 f 
		    (lambda (rf)
		      (cps1* es
			     (lambda (res)
			       (cond
				((trivial? rf) (ctx `(,rf ,@res)))
				((eq? ctx ctx0) `(,rf ,@res k))
				(else 
				 (let ((u (fv)))
				   `(,rf ,@res (lambda (,u) ,(ctx u)))))))))))))

    (define (cps1* exps k)
      (cond
       ((null? exps) (k '()))
       (else (cps1 (car exps)
		   (lambda (first)
		     (cps1* (cdr exps)
			    (lambda (remain)
			      (k (cons first remain)))))))))

    (cps1 exp id)))

(cps '(+ 1 2))
(cps '(+ (begin (set! a 3) a) b))
;;; tests

;; var
(cps 'x)
(cps '(lambda (x) x))
(cps '(lambda (x) (x 1)))


;; no lambda (will generate identity functions to return to the toplevel)
(cps '(if (f x) a b))
(cps '(if x (f a) b))


;; if stand-alone (tail)
(cps '(lambda (x) (if (f x) a b)))


;; if inside if-test (non-tail)
(cps '(lambda (x) (if (if x (f a) b) c d)))

;; both branches are trivial, should do some more optimizations
(cps '(lambda (x) (if (if x (zero? a) b) c d)))


;; if inside if-branch (tail)
(cps '(lambda (x) (if t (if x (f a) b) c)))


;; if inside if-branch, but again inside another if-test (non-tail)
(cps '(lambda (x) (if (if t (if x (f a) b) c) e w)))


;; if as operand (non-tail)
(cps '(lambda (x) (h (if x (f a) b))))


;; if as operator (non-tail)
(cps '(lambda (x) ((if x (f g) h) c)))


;; why we need more than two names
(cps '(((f a) (g b)) ((f c) (g d))))



;; factorial
(define fact-cps
  (cps
   '(lambda (n)
      ((lambda (fact)
         ((fact fact) n))
       (lambda (fact)
         (lambda (n)
           (if (zero? n)
               1
               (* n ((fact fact) (sub1 n))))))))))

;; print out CPSed function
;; (pretty-print fact-cps)
;; =>
;; '(lambda (n k)
;;    ((lambda (fact k) (fact fact (lambda (v0) (v0 n k))))
;;     (lambda (fact k)
;;       (k
;;        (lambda (n k)
;;          (if (zero? n)
;;            (k 1)
;;            (fact
;;             fact
;;             (lambda (v1) (v1 (sub1 n) (lambda (v2) (k (* n v2))))))))))
;;     k))

((eval fact-cps) 5 (lambda (v) v))
;; => 120
