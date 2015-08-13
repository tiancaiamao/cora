(define desugar
  (lambda (exp)
    exp))

;; cope with inner define
(define lift-inner
  (lambda (exp)
    (match exp
	   [(? symbol?) exp]
	   [(? integer?) exp]
	   [`(if ,test ,then ,else)
	    `(if ,(lift-inner test)
		 ,(lift-inner then)
		 ,(lift-inner else))]
	   [`(set! ,var ,val)
	    `(set! ,var ,(lift-inner val))]
	   [('lambda (bind ...) body ...)
	    (let* ((bind$ '())
		   (body$ (map (lambda (e)
				 (if (and (pair? e) (eq? (car e) 'define))
				     (begin
				       (set! bind$ (cons (cadr e) bind$))
				       `(set! ,(cadr e) ,(lift-inner (caddr e))))
				     (lift-inner e)))
			       body)))
	      `(lambda (,@bind$ ,@bind) ,@body$))]
	   [(f args ...)
	    (map lift-inner exp)])))

