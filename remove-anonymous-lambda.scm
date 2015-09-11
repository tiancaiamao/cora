#|
(let ([f.3 (lambda (x.1)
             (lambda (y.2)
               (+ x.1 y.2)))])
  ((f.3 '3) '8))
=>
(let ([f.3 (lambda (x.1)
             (letrec ([anon.4 (lambda (y.2) (+ x.1 y.2))])
               anon.4))])
  ((f.3 '3) '8))
|#
(define-who remove-anonymous-lambda
  (define primitives
    '(+ - * <= < = >= > procedure? boolean? car cdr cons eq? fixnum? make-vector null? pair? set-car! set-cdr! vector? vector-length vector-ref vector-set! void))
  (define lambda-expr?
    (lambda (expr)
      (match expr
             [(lambda (,uvar* ...) ,x) #t]
             [,x #f])))
  (define (Immediate imm)
    (cond
     [(memq imm '(#t #f ())) imm]
     [(and (integer? imm) (exact? imm))
      (unless (fixnum-range? imm)
              (error who "integer ~s is out of fixnum range" imm))
      imm]
     [else (error who "invalid Immediate ~s" imm)]))
  (define Expr
    (lambda (flag)
      (lambda (expr)
        (match expr
               [(if ,[(Expr 1)-> test] ,[(Expr 1) -> conseq] ,[(Expr 1) -> alt]) `(if ,test ,conseq ,alt)]
               [(quote ,[Immediate -> im]) `(quote ,im)]
               [(let ([,uvar* ,[(Expr 0) -> exp*]] ...) ,[(Expr 1) -> tail]) `(let ([,uvar* ,exp*] ...) ,tail)]
               [(begin ,[(Expr 1) -> exp*] ... ,[(Expr flag) -> exp]) `(begin ,exp* ... ,exp)]
               [(letrec ([,uvar* (lambda (,param* ...) ,[(Expr 1) -> tail*])] ...) ,[(Expr flag) -> tail]) `(letrec ([,uvar* (lambda (,param* ...) ,tail*)] ...) ,tail)]
               [(lambda (,uvar* ...) ,x) (Lambda expr flag)]
               [(,prim ,[(Expr 1) -> x*] ...) (guard (memq prim primitives)) `(,prim ,x* ...)]
               [(,[(Expr 1) -> x] ,[(Expr 1) -> y*] ...) `(,x ,y* ...)]
               [,x (guard (uvar? x)) x]))))
  (define Lambda
    (lambda (exp flag)
      (match exp
             [(lambda (,uvar* ...) ,[(Expr 1) -> x])
              (if (eq? flag 0) 
                  `(lambda (,uvar* ...) ,x)
                  (let ([anon-var (unique-name 'anon)])
                    `(letrec ([,anon-var (lambda (,uvar* ...) ,x)]) ,anon-var)))])))
	(lambda (x)
		((Expr 0) x)))
