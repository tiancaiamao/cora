#|
(let ([x.3 '10] [y.1 '11] [z.2 '12])
  (assigned (x.3 z.2)
            (begin
              (set! x.3 (+ x.3 y.1))
              (set! z.2 (* y.1 '2))
              (cons y.1 z.2))))
=>
(let ([x.5 '10] [y.1 '11] [z.4 '12])
  (let ([x.3 (cons x.5 (void))] [z.2 (cons z.4 (void))])
    (begin
      (set-car! x.3 (+ (car x.3) y.1))
      (set-car! z.2 (* y.1 '2))
      (cons y.1 (car z.2)))))
|#

(define-who convert-assignments
  (define primitives
    '(+ - * <= < = >= > procedure? boolean? car cdr cons eq? fixnum? make-vector null? pair? set-car! set-cdr! vector? vector-length vector-ref vector-set! void ))
  (define Expr
    (lambda (assigned*)
      (lambda (expr)
        (match expr
            ;;; check if uvar has been assigned, if so replace it by its car else return as is
               [,uvar (guard (uvar? uvar)) 
                      (if (memq uvar assigned*)
                          `(car ,uvar)
                          uvar)]
               [(if ,[(Expr assigned*) -> test] ,[(Expr assigned*) -> conseq] ,[(Expr assigned*) -> alt]) `(if ,test ,conseq ,alt)]
               [(quote ,datum) `(quote ,datum)]
               [(begin ,[(Expr assigned*) -> expr*] ... ,[(Expr assigned*) -> tail]) `(begin ,expr* ... ,tail)]
               [(lambda (,uvar* ...) 
                  (assigned (,assign* ...) 
                            ,[(Expr (union assigned* assign*))-> tail]))
                ;;Check if any of the parameters has been set!, if so we have to replace it by the new let form else return the lambda expression as is
                (let ([intersect (intersection uvar* assign*)])
                  (if (null? intersect) 
                      `(lambda (,uvar* ...) 
                         ,tail)
                      (let* ([new-bindings (map generate-uvar intersect)]
                             [new* (map cdr new-bindings)]
                             [new-lets (make-lets new-bindings intersect)])
                        `(lambda (,new* ...)
                           (let ,new-lets
                             ,tail)))))]
               [(letrec ([,uvar* ,[(Expr assigned*)-> exp*]] ...)
                  ,[(Expr assigned*) -> tail]) 
                `(letrec ([,uvar* ,exp*] ...)
                   ,tail)]
          ;;; Letrec form is returned as is 
          ;;; 2 forms were used to account for those expressions that dont have an assigned form encapsulated around the tail
               [(letrec ([,uvar* ,[(Expr assigned*)-> exp*]] ...)
                  (assigned (,assign* ...)
                            ,[(Expr (union assigned* assign*)) -> tail])) 
                `(letrec ([,uvar* ,exp*] ...)
                   ,tail)]
               [(let ([,uvar* ,[(Expr assigned*) -> exp*]] ...)
                  (assigned (,assign* ...)
                            ,[(Expr (union assign* assigned*))-> tail]))
                (if (null? assign*)
                    `(let ([,uvar* ,exp*] ...) ,tail)
                    (let* ([new-bindings (map generate-uvar assign*)]
                           [new* (map cdr new-bindings)]
                           [outer-let* (make-outer-lets uvar* assign* new-bindings `((,uvar* ,exp*) ...))]
                           [new-lets (make-lets new-bindings assign*)])
                      `(let ,outer-let*
                         (let ,new-lets
                           ,tail))))]
               [(set! ,x ,[(Expr assigned*) -> rhs]) `(set-car! ,x ,rhs)]
               [(,prim ,[(Expr assigned*) -> expr*] ...) (guard (memq prim primitives))  `(,prim ,expr* ...)]
               [(,[(Expr assigned*) -> expr] ,[(Expr assigned*) -> rem*] ...) `(,expr ,rem* ...) ]))))
  ;;; make-outer-let basically assigns the new-uvars to the previous uvars expressions, and in case they have not been set!-ed returns
  ;;; the expressions as is 
  (define make-outer-lets
    (lambda (uvar* assign* new* exp*)
      (cond
       [(null? uvar*) '()]
       [else
        (let* ([current-var (car uvar*)])
          (cond
           [(memq current-var assign*) 
            (let ([new-assign (cdr (assq current-var new*))] [old-assign (cadr (assq current-var exp*))])
              (cons `(,new-assign ,old-assign) (make-outer-lets (cdr uvar*) assign* new* exp*)))]
           [else (cons (assq current-var exp*) (make-outer-lets (cdr uvar*) assign* new* exp*))]))])))
	;;; inner-lets where we have (new-uvar (cons old-uvar (void)))
	(define make-lets
		(lambda (new* assign*)
			(cond 
       [(null? assign*) '()]
       [else
        (let* ([current (car assign*)] [value (cdr (assq current new*))])
          (cons `(,current (cons ,value (void))) (make-lets new* (cdr assign*))))])))
	(define generate-uvar
		(lambda (uvar)
			(let ([unique (unique-name (string->symbol (extract-root uvar)))])
				`(,uvar . ,unique))))
	(lambda (x)
		((Expr '()) x)))
