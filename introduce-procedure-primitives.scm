#|
(let ([x.1 '3])
  (letrec ([f$2 (lambda (fp.4)
                  (bind-free (fp.4 x.1)
                             x.1))])
    (closures ((f.2 f$2 x.1))
              (f.2 f.2))))
=>
(let ([x.1 '3])
  (letrec ([f$2 (lambda (fp.4)
                  (procedure-ref fp.4 '0))])
    (let ([f.2 (make-procedure f$2 '1)])
      (begin
        (procedure-set! f.2 '0 x.1)
        ((procedure-code f.2) f.2)))))
|#
(define-who introduce-procedure-primitives
	(define primitives
  	'(+ - * <= < = >= > procedure? boolean? car cdr cons eq? fixnum? make-vector null? pair? set-car! set-cdr! vector? vector-length vector-ref vector-set! void ))
	(define Expr
		(lambda (fptr free-list)
			(lambda (expr)
				(match expr
					[(if ,[(Expr fptr free-list)-> test] ,[(Expr fptr free-list) -> conseq] ,[(Expr fptr free-list) -> alt])
	 						`(if ,test ,conseq ,alt)]
					[(quote ,[Immediate -> im-expr]) `(quote ,im-expr)]
					[(begin ,[(Expr fptr free-list) -> expr*] ... ,[(Expr fptr free-list) -> tail])
							`(begin ,expr* ... ,tail)]
					[(letrec ([,label* ,[Body -> body*]] ...) ,[(Tail fptr free-list) -> tail])
						`(letrec ([,label* ,body*] ...) ,tail)]
					[(let ([,uvar* ,[(Expr fptr free-list) -> exp*]] ...) ,[(Expr fptr free-list) -> tail])
	 					 `(let ([,uvar* ,exp*] ...) ,tail)]
					[(,prim ,[(Expr fptr free-list) -> expr*] ...) (guard (memq prim primitives))
							 	`(,prim ,expr* ...)]
					[(,expr-a ,[(Expr fptr free-list) -> expr] ,[(Expr fptr free-list) -> rem*] ...) (guard (label? expr-a))
					 		`(,expr-a ,expr ,rem* ...)]
					[(,[(Expr fptr free-list) -> expr-a] ,[(Expr fptr free-list) -> expr] ,[(Expr fptr free-list) -> rem*] ...)
								(if (null? free-list)
										  `((procedure-code ,expr-a) ,expr ,rem* ...)
										  (let ([pos (find-pos 0 expr free-list)])
															(if (eq? pos -1) `((procedure-code ,expr-a) ,expr ,rem* ...)
															`((procedure-code (procedure-ref ,fptr (quote ,pos)))
															  (procedure-ref ,fptr (quote ,pos))
															  ,rem* ...))))]
					[,uvar (guard (uvar? uvar))
						(if (null? free-list) uvar
							(let ([pos (find-pos 0 expr free-list)])
								(if (eq? pos -1) uvar
									`(procedure-ref ,fptr (quote ,pos)))))]))))
	 (define make-funcs
		 (lambda (bindfree)
			 (let ([func-uvar (list-ref bindfree 0)]
						 [func-label (list-ref bindfree 1)]
						 [arg-length (length (cddr bindfree))])
						 `(,func-uvar (make-procedure ,func-label (quote ,arg-length))))))
	 (define make-list
			(lambda (start val)
				(cond
					[(> start val) '()]
					[else (cons start (make-list (add1 start) val))])))
	 ;;; finds if a variable exists in the list of free variables passed to that function
	 (define find-pos
		(lambda (pos needle haystack)
			(cond
				[(null? haystack) '-1 ]
				[(eq? needle (car haystack)) pos]
				[else (find-pos (add1 pos) needle (cdr haystack))])))
	 (define make-procs-set!
		 (lambda (closure)
			(lambda (fptr free-vars)
			 (let* ([func-uvar (list-ref closure 0)] ;;;first position is uvar
						 [arg* (cddr closure)] ;;; free vars are everything after the 1st 2 places
						 [arg-length (length arg*)] ;;legth of the list
						 [index-list (make-list '0 (sub1 arg-length))]) ;;generates a list from 0 to length-1
						 ;;; it is necessary to map each and every free variable to an index so that procedure-set!
						;;; can set the correct arguments
						 (map (lambda (x y)
							      (let ([pos (find-pos '0 x free-vars)])
											(if (eq? pos '-1) 
												`(procedure-set! ,func-uvar (quote ,y) ,x)
												`(procedure-set! ,func-uvar (quote ,y) (procedure-ref ,fptr (quote ,pos)))))) arg* index-list)))))
	 (define Tail
		(lambda (fptr free-list)
		 (lambda (tail)
			 (match tail
				 [(closures (,funcs* ...) ,[(Expr fptr free-list) -> new-tail])
						(let ([functions* (map make-funcs funcs*)]
								  ;;; necessary because make-proc-set! returns a list of functions
									;;; so I define another map which applies these functions taking the appropriate 
									;;; parameters
									[proc-set (map (lambda (fn)
																		(fn fptr free-list))(map make-procs-set! funcs*))])
							`(let ,functions* ,(make-begin `(,proc-set ... ...,new-tail))))]))))
	 (define Body
			(lambda (body)
				(match body
					[(lambda (,param* ...) (bind-free (,fptr ,free* ...) ,[(Expr fptr free*) -> body])) 
							`(lambda (,param* ...) ,body)])))
	 (define Label
		(lambda (x)
			(unique-label x)))
   (define (Immediate imm)
      (cond
        [(memq imm '(#t #f ())) imm]
        [(and (integer? imm) (exact? imm))
         (unless (fixnum-range? imm)
           (error who "integer ~s is out of fixnum range" imm))
         imm]
        [else (error who "invalid Immediate ~s" imm)]))
	(lambda (x)
		(set! closure-list '())
		((Expr '() '()) x)))
