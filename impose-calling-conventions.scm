#|
(lambda (x0 ... xn-1 xn ... xn+m-1)
  (locals (local ...)
          body))
=>
(lambda ()
  (locals (local ... rp x0 ... xn-1 xn ... xn+m-1)
          (begin
            (set! rp ra)
            (set! x0 p0)
            ...
            (set! xn-1 pn-1)
            (set! xn fv0)
            ...
            (set! xn+m-1 fvm-1)
            body)))
|#
(define impose-calling-conventions
  (lambda (x)

    (define load-params
      (lambda (fml* regs fv-fun fv-n seq)
        (cond
         [(null? fml*) (reverse seq)]
         [(null? regs)
          (load-params (cdr fml*) '() fv-fun (add1 fv-n)
                       (cons `(set! ,(car fml*) ,(fv-fun fv-n)) seq))]
         [else
          (load-params (cdr fml*) (cdr regs) fv-fun fv-n
                       (cons `(set! ,(car fml*) ,(car regs)) seq))])))

    (define rev-load
      (lambda (loads regs fvs)
        (cond
         [(null? loads) (reverse (append regs fvs))]
         [else
          (match (car loads)
                 [(set! ,dst ,src)
                  (if (register? src)
                      (rev-load (cdr loads) (cons `(set! ,src ,dst) regs) fvs)
                      (rev-load (cdr loads) regs (cons `(set! ,src ,dst) fvs)))])])))

    (define impose
      (lambda (rp new-fv*)
        (lambda (x)
          (match x
                 [(if ,a ,b ,c) x]
                 [(begin ,ef* ...)
                  `(begin ,@(map (impose rp new-fv*) ef*))]
                 [(set! ,var ,val) x]
                 [(,v) (guard (memq v '(nop true false))) x]
                 [(,op ,a ,b) (guard (memq op '(+ - *))) x]
                 [(,triv ,loc* ...)
                  (let* ([l* (load-params loc* parameter-registers index->frame-var 0 '())]
                         [rl* (rev-load l* '() '())])
                    `(begin
                       ,@rl*
                       (set! ,return-address-register ,rp) ; tail-call optimization
                       (,triv ,frame-pointer-register
                              ,return-address-register
                              ,allocation-pointer-register
                              ,@(map cadr rl*))))]
                 [,x x]))))

    (define Body
      (lambda (bd fml*)
        (match bd
               [(locals (,locals* ...) ,tail)
                (let* ([loads (load-params fml* parameter-registers index->frame-var 0 '())]
                       [rp (unique-name 'rp)]
                       [new-fv* '()]
                       [tail ((impose rp new-fv*) tail)])
                  `(locals (,@locals* ,@fml* ,rp ,@new-fv*)
                           ,(make-begin
                            `((set! ,rp ,return-address-register)
                              ,@loads
                              ,tail))))])))

    (define build-function (lambda (label body) `(,label (lambda () ,body))))

    (match x
           [(letrec ([,label* (lambda (,fml** ...) ,body*)] ...) ,body)
            (let ([bd* (map Body body* fml**)]
                  [bd (Body body '())])
              `(letrec ,(map build-function label* bd*) ,bd))])))

(define-who impose-calling-conventions
  (define (argument-locations fmls idx->fv)
    (let f ([fmls fmls] [regs parameter-registers] [fv-idx 0])
      (cond
        [(null? fmls) '()]
        [(null? regs) (cons (idx->fv fv-idx) (f (cdr fmls) regs (+ fv-idx 1)))]
        [else (cons (car regs) (f (cdr fmls) (cdr regs) fv-idx))])))
  (define (index->new-frame-var idx) (unique-name 'nfv))
	;;Filters  list for values based on the predicate passed by fn
	(define filter
		(lambda (fn ls)
			(cond
				[(null? ls) '()]
				[(fn (car ls)) (cons (car ls) (filter fn (cdr ls)))]
				[else (filter fn (cdr ls))])))
	(define trivial?
		(lambda (x)
			(or (uvar? x) (integer? x) (label? x) (register? x))))
  (define (Body bd fml*)
   	(define new-frame-var** '())  ;;Stores all the nfv assignments
    (define Effect
			(lambda (effect)
				(match effect
					[(nop) '(nop)]
					[(if ,[Pred -> pred] ,[Effect -> conseq] ,[Effect -> alt]) `(if ,pred ,conseq ,alt)]
					[(begin ,[Effect -> ef*] ... ,[Effect -> ef]) (make-begin `(,ef* ... ,ef))]
					[(mset! ,base ,offset ,val) effect]
					[(set! ,uvar ,triv) (guard (trivial? triv)) effect]
					[(set! ,uvar (,binop ,x ,y)) (guard (memq binop '(+ - * logand logor sra mref))) effect]
					[(set! ,uvar (,triv ,triv* ...))
							(guard (trivial? triv))
										(make-begin `(,(Effect `(,triv ,triv* ...)) (set! ,uvar ,return-value-register)))]
					[(,triv ,triv* ...)
							;This handles non tail call in Effect Context
							(let* ((return-point-var (unique-label 'rp))
										 (fml-loc* (argument-locations triv* index->new-frame-var)) ;Assign a register or variable to each formal parameter
								 		 (expr (make-begin
											`((set! ,fml-loc* ,triv*) ... (set! ,return-address-register ,return-point-var) (,triv ,return-address-register ,frame-pointer-register ,allocation-pointer-register ,@fml-loc*))))
										(return-point-expr `(return-point ,return-point-var ,expr))) ;Create a return-point-expr
										(set! new-frame-var** (cons (filter uvar? fml-loc*) new-frame-var**))
										(make-begin `(,return-point-expr)))])))
    (define (Pred pred)
			(match pred
				[(true) '(true)]
        [(false) '(false)]
        [(if ,[test] ,[conseq] ,[altern]) `(if ,test ,conseq ,altern)]
        [(begin ,[Effect -> ef*] ... ,[pr]) (make-begin `(,ef* ... ,pr))]
        [(,predop ,x ,y)
         (guard (memq predop '(< <= = >= >)))
         `(,predop ,x ,y)]))
    (define Tail
			(lambda (tail rp)
				(match tail
					[(begin ,[Effect -> ef*] ... ,tail)
					(let ((tail-expr (Tail tail rp)))
									(make-begin `(,ef* ... ,tail-expr)))]
					[(if ,[Pred -> pred] ,conseq ,alt)
					 	(let ((conseq-expr (Tail conseq rp))
									(alt-expr (Tail alt rp)))
									`(if ,pred ,conseq-expr ,alt-expr))]
					[(,binop ,x ,y) (guard (memq binop '(+ - * logand logor sra mref)))
					 		(let ((expr `((set! ,return-value-register ,tail) (,rp ,frame-pointer-register ,allocation-pointer-register ,return-value-register))))
								(make-begin expr))]
					[(,triv ,triv* ...) 
							(let ((fml-loc* (reverse (argument-locations triv* index->frame-var))) (triv* (reverse triv*)))
								(make-begin 
									`((set! ,fml-loc* ,triv*) ... (set! ,return-address-register ,rp) (,triv ,return-address-register ,frame-pointer-register ,allocation-pointer-register ,@fml-loc*))))]
					[,triv 	(let ((return-value-expr `(set! ,return-value-register ,triv))
							   				(return-calling-expr `(,rp ,frame-pointer-register ,allocation-pointer-register ,return-value-register)))
									(make-begin `(,return-value-expr ,return-calling-expr)))])))
    (match bd
      [(locals (,local* ...) ,tail)
       (let ([rp (unique-name 'rp)]
             [fml-loc* (argument-locations fml* index->frame-var)])
         (let ([tail (Tail tail rp)])
           `(locals (,rp ,fml* ... ,local* ... ,new-frame-var** ... ...)
              (new-frames (,new-frame-var** ...)
                ,(make-begin 
                   `((set! ,rp ,return-address-register)
                     (set! ,fml* ,fml-loc*) ...
                     ,tail))))))]
      [,bd (error who "invalid Body ~s" bd)]))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda (,fml** ...) ,bd*)] ...) ,bd)
       (let ([bd* (map Body bd* fml**)] [bd (Body bd '())])
         `(letrec ([,label* (lambda () ,bd*)] ...) ,bd))]
      [,x (error who "invalid Program ~s" x)])))

#!eof

(impose-calling-conventions
 '(letrec ((f$1 (lambda (a b c)
                  (locals ()
                          (begin
                            (set! t.8 (* x.2 x.5))
                            (set! t.9 (+ t.8 7)))))))
    (locals ()
            (+ a 1))))

(impose-calling-conventions
 '(letrec ([anon$16 (lambda (fp.17 x.15)
                      (locals (t.20 t.19) x.15))])
    (locals
     (anon.16 t.18 t.20 t.19)
     (begin
       (set! t.20 (alloc 8))
       (set! t.18 (+ t.20 2))
       (set! t.19 mset!)
       (t.19 t.18 -2 anon$16)
       (set! anon.16 t.18)
       anon.16))))
