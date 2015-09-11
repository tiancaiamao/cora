#|
(letrec ((x e) ...)
  (assigned (x! ...)
            body))
=>
(let ((x (void)) ...)
  (assigned (x ...)
            (begin
              (let ((t e) ...)
                (assigned ()
                          (begin (set! x t) ...)))
              body)))
|#

(define-who purify-letrec
  (define primitives
    '(+ - * <= < = >= > procedure? boolean? car cdr cons eq? fixnum? make-vector null? pair? set-car! set-cdr! vector? vector-length vector-ref vector-set! void ))
  (define lambda-expr?
    (lambda (expr)
      (match expr
             [(lambda (,uvar* ...) ,x) #t]
             [,x #f])))
  (define simple-expr?
    (lambda (expr uvar*)
      (match expr
             [,uvar (guard (uvar? uvar)) (if (memq uvar uvar*) #f #t)]
             [(if ,[test] ,[conseq] ,[alt]) (and test conseq alt)]
             [(quote ,datum) #t]
             [(begin ,[expr*] ... ,[tail]) (and expr* tail)]
             [(set! ,x ,[rhs]) (if (memq x uvar*) #f rhs)]
             [(,prim ,[expr*] ...) (guard (memq prim primitives))  (and expr*)]
             [(,[expr] ,[rem*] ...) (and expr rem*)]
             [,x #f])))
  (define Expr
    (lambda (expr)
      (match expr
             [,uvar (guard (uvar? uvar)) uvar]
             [(if ,[Expr -> test] ,[Expr -> conseq] ,[Expr -> alt]) `(if ,test ,conseq ,alt)]
             [(quote ,datum) `(quote ,datum)]
             [(begin ,[Expr -> expr*] ... ,[Expr -> tail]) `(begin ,expr* ... ,tail)]
             [(lambda (,uvar* ...)
                (assigned (,assign* ...)
                          ,[Expr -> tail])) `(lambda (,uvar* ...)
                                               (assigned (,assign* ...) ,tail))]
             [(letrec ([,uvar* ,[Expr -> exp*]] ...)
                (assigned (,assign* ...)
                          ,[Expr -> tail]))
              (let ([all-pure (seperate-lambdas assign* uvar* exp*)])
                (if (eq? all-pure #t)
                    `(letrec ([,uvar* ,exp*] ...)
                       ,(if (null? assign*) `(,tail ...) `(assigned (,assign* ...) ,tail))) ;;;If the list of assigned is null then we dont add it to the output
                          ;;; Hence I will be dealing with 2 different letrec forms in the output
                    (let* ([new* (map generate-uvar uvar*)]
                           [new-set! (map generate-set! new* uvar*)])
                      `(let ([,uvar* (void)] ...)
                         (assigned (,uvar* ...)
                                   (begin
                                     (let ([,new* ,exp*] ...)
                                       (assigned ()
                                                 ,(make-begin new-set!)))
                                     ,tail))))))]
             [(let ([,uvar* ,[Expr -> exp*]] ...)
                (assigned (,assign* ...)
                          ,[Expr -> tail]))
              `(let ([,uvar* ,exp*] ...)
                 (assigned (,assign* ...)
                           ,tail))]
             [(set! ,x ,[Expr -> rhs]) `(set! ,x ,rhs) ]
             [(,prim ,[Expr -> expr*] ...) (guard (memq prim primitives))  `(,prim ,expr* ...)]
             [(,[Expr -> expr] ,[Expr -> rem*] ...) `(,expr ,rem* ...) ])))
  (define seperate-lambdas ;;; traverses over the exps bound by letrec to see if they all are pure, if they are then true else false
    (lambda (assign* uvar* exp*)
      (cond
       [(and (null? assign*) (null? uvar*)) #t]
				;;;Lambda Expression
       [(and (null? assign*) (lambda-expr? (car exp*))) (seperate-lambdas assign* (cdr uvar*) (cdr exp*))]
       [else #f])))
	(define generate-set! 	;;; generates the set! in the inner-let expression
		(lambda (x y)
      `(set! ,y ,x)))
	(define generate-uvar 	;;x.5 will be converted into a new unique also beginning with x
		(lambda (uvar)
			(unique-name (string->symbol (extract-root uvar)))))
	(lambda (x)
		(Expr x)))
