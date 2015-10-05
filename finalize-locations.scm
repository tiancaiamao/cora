#|
(letrec ([f$1 (lambda ()
                (locate ([x.1 r8] [y.2 r9])
                        (if (if (= x.1 1) (true) (> y.2 1000))
                            (begin (set! rax y.2) (r15))
                            (begin
                              (set! y.2 (* y.2 2))
                              (set! rax x.1)
                              (set! rax (logand rax 1))
                              (if (= rax 0) (set! y.2 (+ y.2 1)) (nop))
                              (set! x.1 (sra x.1 1))
                              (f$1)))))])
  (locate () (begin (set! r8 3) (set! r9 10) (f$1))))
=>
(letrec ([f$1 (lambda ()
                (if (if (= r8 1) (true) (> r9 1000))
                    (begin (set! rax r9) (r15))
                    (begin
                      (set! r9 (* r9 2))
                      (set! rax r8)
                      (set! rax (logand rax 1))
                      (if (= rax 0) (set! r9 (+ r9 1)) (nop))
                      (set! r8 (sra r8 1))
                      (f$1))))])
  (begin (set! r8 3) (set! r9 10) (f$1)))
|#

(define finalize
  (lambda (x env final?)
    (define lookup
      (lambda (v env)
        (let ((slot (assq v env)))
          (if slot (cdr slot) v))))

    (define currying (lambda (x) (finalize x env final?)))
    (define build-function (lambda (label body) `(,label (lambda () ,body))))

    (match x
           [(letrec ([,label* (lambda () ,body*)] ...) ,tail)
            (let* ((body1 (map currying body*))
                   (defs (map build-function label* body1)))
              `(letrec ,defs ,(currying tail)))]
           #|
           [(locals (,local* ...)
           (ulocals (,ulocal* ...)
           (locate ([,uvar* ,loc*] ...)
           (frame-conflict ,ct ,tail))))
           `(locals (,local* ...)
           (ulocals (,ulocal* ...)
           (locate ([,uvar* ,loc*] ...)
           (frame-conflict ,ct
           ,(finalize tail `((,uvar* . ,loc*) ...) final?)))))]
           |#
           [(locate ([,uvar* ,loc*] ...) ,tail)
            (if final?
                (finalize tail (map cons uvar* loc*) final?)
                `(locate ([,uvar* ,loc*] ...) ,tail))]
           [(begin ,es* ...)
            `(begin ,@(map currying es*))]
           [(if ,a ,b ,c)
            `(if ,(currying a) ,(currying b) ,(currying c))]
           [(set! ,x (,binop ,y ,z))
            `(set! ,(currying x) (,binop ,(currying y) ,(currying z)))]
           [(set! ,x ,y)
            (if (eq? x y) `(nop) `(set! ,(currying x) ,(currying y)))]
           [(,op ,x ,y)
            `(,op ,(currying x) ,(currying y))]
           [(,triv ,live* ...)
            (if final? `(,triv) `(,triv ,live* ...))]
           [(,triv) (guard (uvar? triv))
            `(,(lookup x env))]
           [,v (guard (uvar? v))
               (lookup x env)]
           [,x x])))

(define finalize-frame-locations (lambda (x) (finalize x '() #f)))
(define finalize-locations       (lambda (x) (finalize x '() #t)))

(define-who finalize-locations
  (define Var
    (lambda (env)
      (lambda (v)
        (if (uvar? v) (cdr (assq v env)) v))))
  (define Triv
    (lambda (env)
      (lambda (t)
        (if (uvar? t) (cdr (assq t env)) t))))
  (define Pred
    (lambda (env)
      (lambda (pr)
        (match pr
          [(true) '(true)]
          [(false) '(false)]
          [(if ,[test] ,[conseq] ,[altern]) `(if ,test ,conseq ,altern)]
          [(begin ,[(Effect env) -> ef*] ... ,[pr]) `(begin ,ef* ... ,pr)]
          [(,predop ,[(Triv env) -> x] ,[(Triv env) -> y]) `(,predop ,x ,y)]
          [,pr (error who "invalid Pred ~s" pr)]))))
  (define Effect
    (lambda (env)
      (lambda (ef)
        (match ef
          [(nop) '(nop)]
          [(set! ,[(Var env) -> x]
             (,binop ,[(Triv env) -> y] ,[(Triv env) -> z]))
           `(set! ,x (,binop ,y ,z))]
          [(set! ,[(Var env) -> x] ,[(Triv env) -> y]) 
           (if (eq? y x) `(nop) `(set! ,x ,y))]
					[(mset! ,[(Var env) -> base] ,[(Var env) -> offset] ,[(Var env) -> val])
						`(mset! ,base ,offset ,val)]
          [(begin ,[ef] ,[ef*] ...) `(begin ,ef ,ef* ...)]
          [(if ,[(Pred env) -> test] ,[conseq] ,[altern])
           `(if ,test ,conseq ,altern)]
          [(return-point ,rplab ,[(Tail env) -> tail])
           	`(return-point ,rplab ,tail)]
          [,ef (error who "invalid Effect ~s" ef)]))))
  (define Tail
    (lambda (env)
      (lambda (tail)
        (match tail
          [(begin ,[(Effect env) -> ef*] ... ,[tail]) `(begin ,ef* ... ,tail)]
          [(if ,[(Pred env) -> test] ,[conseq] ,[altern])
           `(if ,test ,conseq ,altern)]
          [(,[(Triv env) -> t]) `(,t)]
          [,tail (error who "invalid Tail ~s" tail)]))))
  (define Body
    (lambda (bd)
      (match bd
        [(locate ([,uvar* ,loc*] ...) ,tail) ((Tail (map cons uvar* loc*)) tail)]
        [,bd (error who "invalid Body ~s" bd)])))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[Body -> bd*])] ...) ,[Body -> bd])
       `(letrec ([,label* (lambda () ,bd*)] ...) ,bd)]
      [,x (error who "invalid Program ~s" x)])))
