;; (let ([x.1 '0]) x.1)
;; =>
;; (let ([x.1 '0])
;;    (assigned ()
;;      x.1))
;;
;; (let ([x.1 '0]) (begin (set! x.1 (+ x.1 '1)) x.1))
;; =>
;; (let ([x.1 '0])
;;   (assigned (x.1)
;;     (begin
;;       (set! x.1 (+ x.1 '1))
;;         x.1)))
(define-who uncover-assigned
  (define primitives
    '(+ - * <= < = >= > procedure? boolean? car cdr cons eq? fixnum? make-vector null? pair? set-car! set-cdr! vector? vector-length vector-ref vector-set! void ))
  (define Expr
    (lambda (expr)
      (match expr
             [,uvar (guard (uvar? uvar)) (values uvar '())]
             [(if ,[Expr -> cond-expr cond-bindings] ,[Expr -> conseq-expr conseq-bindings] ,[Expr -> alt-expr alt-bindings]) 
              (values `(if ,cond-expr ,conseq-expr ,alt-expr) (union cond-bindings conseq-bindings alt-bindings))]
             [(quote ,datum) (values `(quote ,datum) '())]
             [(begin ,[Expr -> exp-stmt* exp-binding*] ... ,[Expr -> tail-stmt tail-binding])
              (values `(begin ,exp-stmt* ... ,tail-stmt) (union (apply append exp-binding*) tail-binding))]
             [(lambda (,uvar* ...) ,[Expr -> tail sets])
              (let ([assigned-uvars (intersection sets `(,uvar* ...))])
                (values `(lambda (,uvar* ...) (assigned (,assigned-uvars ...) ,tail)) sets))]
             [(letrec ([,uvar* ,[Expr -> exp* binding*]] ...) ,[Expr -> tail binding])
              (let ([assigned-uvars (intersection uvar* (union binding (apply append binding*)))])
                (values `(letrec ([,uvar* ,exp*] ...)
                           (assigned (,assigned-uvars ...)
                                     ,tail))
                        (difference (union binding (apply append binding*)) uvar*)))]
             [(let ([,uvar* ,[Expr -> exp* binding*]] ...) ,[Expr -> tail binding])
              (let ([assigned-uvars (intersection uvar* (union binding (apply append binding*)))])
                (values `(let ([,uvar* ,exp*] ...)
                           (assigned (,assigned-uvars ...)
                                     ,tail))
                        (difference (union binding (apply append binding*)) uvar*)))]
             [(set! ,x ,[Expr -> rhs rhs-assigned]) (values `(set! ,x ,rhs) (union `(,x) rhs-assigned))]
             [(,prim ,[Expr -> expr* bindings*] ...) (guard (memq prim primitives))
              (values `(,prim ,expr* ...) (apply append bindings* ))]
             [(,[Expr -> expr binding] ,[Expr -> rem* bindings*] ...)
              (values `(,expr ,rem* ...) (union (apply append bindings*) binding))])))
  (lambda (x)
    (let-values ([(final-expr final-bindings) (Expr x)])
      final-expr)))
