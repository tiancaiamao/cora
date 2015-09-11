#|
(let ([x.1 '3])
  (letrec ([f.2 (lambda ()
                  (free (x.1)
                        x.1))])
    (f.2)))
=>
(let ([x.1 '3])
  (letrec ([f$2 (lambda (fp.4)
                  (bind-free (fp.4 x.1)
                             x.1))])
    (closures ((f.2 f$2 x.1))
              (f.2 f.2))))
|#
(define-who convert-closures
  (define primitives
    '(+ - * <= < = >= > procedure? boolean? car cdr cons eq? fixnum? make-vector null? pair? set-car! set-cdr! vector? vector-length vector-ref vector-set! void ))
  (define extract-body
    (lambda (body*)
      (cond
       [(null? body*) '()]
       [else (cons (caar body*) (extract-body (cdr body*)))])))
  (define extract-closures
    (lambda (body*)
      (cond
       [(null? body*) '()]
       [else (cons (cadar body*) (extract-closures (cdr body*)))])))
  (define Expr
    (lambda (expr)
      (match expr
             [,uvar (guard (uvar? uvar)) expr]
             [(if ,[Expr -> test] ,[Expr -> conseq] ,[Expr -> alt])
              `(if ,test ,conseq ,alt)]
             [(quote ,[Immediate -> im-expr]) `(quote ,im-expr)]
             [(begin ,[Expr -> expr*] ... ,[Expr -> tail]) 
              `(begin ,expr* ... ,tail)]
             [(letrec ([,uvar* ,body*] ...) ,[Expr -> tail])
              (let* ([label* (map Label uvar*)]
                     [process* (map Body uvar* body*)]
                     [new-body* (extract-body process*)]
                     [local-closures (extract-closures process*)])
                `(letrec ([,label* ,new-body*] ...) (closures (,local-closures ...) ,tail)))]
             [(let ([,uvar* ,[Expr -> exp*]] ...) ,[Expr -> tail])
              `(let ([,uvar* ,exp*] ...) ,tail)]
             [(,prim ,[Expr -> expr*] ...) (guard (memq prim primitives))
              `(,prim ,expr* ...)]
             [(,[Expr -> expr] ,[Expr -> rem*] ...)
              (if (uvar? expr)
                  `(,expr ,expr ,rem* ...)
                  (let ([local (unique-name 't)])
                    `(let ([,local ,expr])
                       (,local ,local ,rem* ...))))])))
  (define Body
    (lambda (func-var body)
      (match body
             [(lambda (,param* ...) (free (,free* ...) ,[Expr -> body]))
              (let ([func-ptr (unique-name 'fp)])
                `((lambda (,func-ptr ,param* ...) (bind-free (,func-ptr ,free* ...) ,body))  (,func-var ,(Label func-var) ,free* ...)))])))
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
    (Expr x)))
