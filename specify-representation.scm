#|
(* e1 e2) => (* e1 (sra e2 3))
(car e) => (mref e offset-car)
(set-car! e1 e2) => (mset! e1 offset-car e2)
(cons e1 e2)
=>
(let ([tmp-car e1] [tmp-cdr e2])
  (let ([tmp (+ alloc 8) 1])
    (begin
      (mset! tmp -1 tmp-car)
      (mset! tmp 3 tmp-cdr)
      tmp)))

(vector-ref e1 e2)
=>
(mref e1 (+ offset-vector-data e2))

(make-vector k)
=>
(let ([tmp (+ (alloc n) ,tag-vector)])
  (begin
    (mset! tmp offset-vector-length k)
    tmp))

(eq? e1 e2) => (= e1 e2)
|#
(define-who specify-representation
	;;; Handles operators that we encounter in <Value> context
	(define handle-operator
		(lambda (rator rand*)
			(cond
				[(eq? rator 'cons) 
					(let ([first (unique-name 't)] [second (unique-name 't)] [third (unique-name 't)])
						`(let ([,first ,(car rand*)] [,second ,(cadr rand*)])
							(let ([,third (+ (alloc ,size-pair) ,tag-pair)])
								(begin
									(mset! ,third ,(- disp-car tag-pair) ,first)
									(mset! ,third ,(- disp-cdr tag-pair) ,second)
									,third))))]
				;;; The - expression is necessary below because when we create a pair we tag it and hence the pointer gets displaced by a value
				;;; given by tag-pair, all we do is subbtract it to get the real value of the pointer
				[(eq? rator 'car)
					`(mref ,(car rand*) ,(- disp-car tag-pair))]
				[(eq? rator 'cdr)
					`(mref ,(car rand*) ,(- disp-cdr tag-pair))]
				;; The arguments to a make-vector can either be a variable or constant and hence the if statemnt is neccessary
				[(eq? rator 'make-vector)
					(let ([size-var (unique-name 't)] [size (car rand*)])
						(if (integer? size)
							`(let ([,size-var (+ (alloc ,(+ disp-vector-data size)) ,tag-vector)])
									(begin
										(mset! ,size-var ,(- disp-vector-length tag-vector) ,size)
										,size-var))
							`(let ([,size-var (+ (alloc (+ ,disp-vector-data ,size)) ,tag-vector)])
									(begin
										(mset! ,size-var ,(- disp-vector-length tag-vector) ,size)
										,size-var))
						))]
				;;; a make-procedure expression looks like (make-procedure label num-args)
				;;; size is specified by the number of args and the func-name is given by func
				;;; I have used the same code used by make-vvector with the few changes I mentioned above
				;;; I should be reporting an error in-case the number-of-args is a variable
				;;; but I am not currently doing so							
				[(eq? rator 'make-procedure)
					(let ([size-var (unique-name 't)] [size (cadr rand*)] [func (car rand*)])
						(if (integer? size)
							`(let ([,size-var (+ (alloc ,(+ disp-procedure-data size)) ,tag-procedure)])
									(begin
										(mset! ,size-var ,(- disp-procedure-code tag-procedure) ,func)
										,size-var))
							`(let ([,size-var (+ (alloc (+ ,disp-procedure-data ,size)) ,tag-procedure)])
									(begin
										(mset! ,size-var ,(- disp-procedure-code tag-procedure) ,func)
										,size-var))
						))]
				[(eq? rator 'vector-length)
					`(mref ,(car rand*) ,(- disp-vector-length tag-vector))]
				;;; similar to vector-length
				[(eq? rator 'procedure-code)
					`(mref ,(car rand*) ,(- disp-procedure-code tag-procedure))]
				[(eq? rator 'vector-ref)
					(let ([value (cadr rand*)])
						(if (integer? value) 
								`(mref ,(car rand*) ,(+ (- disp-vector-data tag-vector) value))
								`(mref ,(car rand*) (+ ,(- disp-vector-data tag-vector) ,value))))]
				;;; similar to vector-ref
				[(eq? rator 'procedure-ref)
					(let ([value (cadr rand*)])
						(if (integer? value) 
								`(mref ,(car rand*) ,(+ (- disp-procedure-data tag-procedure) value))
								`(mref ,(car rand*) (+ ,(- disp-procedure-data tag-procedure) ,value))))]
				[(or (eq? rator '+) (eq? rator '-)) `(,rator ,@rand*)])))
	;;; handles operators that can be encountered in <Effect> context
	;;; since we are using set-car! we need to convert that to mset!
	(define handle-effect-ops
		(lambda (rator rand*)
			(cond
				[(eq? rator 'set-car!) `(mset! ,(car rand*) ,(- disp-car tag-pair) ,(cadr rand*))]
				[(eq? rator 'set-cdr!) `(mset! ,(car rand*) ,(- disp-cdr tag-pair) ,(cadr rand*))]
				[(eq? rator 'vector-set!)
					(let ([value (cadr rand*)])
						(if (integer? value) 
								`(mset! ,(car rand*) ,(+ (- disp-vector-data tag-vector) value) ,(caddr rand*))
				 				`(mset! ,(car rand*) (+ ,(- disp-vector-data tag-vector) ,value) ,(caddr rand*))))]
			 ;;; similar to vector-set!
			  [(eq? rator 'procedure-set!)
					(let ([value (cadr rand*)])
						(if (integer? value) 
								`(mset! ,(car rand*) ,(+ (- disp-procedure-data tag-procedure) value) ,(caddr rand*))
				 				`(mset! ,(car rand*) (+ ,(- disp-procedure-data tag-procedure) ,value) ,(caddr rand*))))])))
	;;; Handles operators that we can encounter in <Effect> context
	(define handle-pred-op
		(lambda (rator rand*)
			(cond 
				[(memq rator '(> < = <= >= )) `(,rator ,@rand*)]
				[(eq? rator 'eq?) `(= ,@rand*)] ;;; eq can be converted to = operator in scheme
				;;; For all other primitives we unmask the values and check if the tag matches the particular data-type
				;;; we are checking for 
				[(eq? rator 'boolean?)
					`(= (logand ,(car rand*) ,mask-boolean) ,tag-boolean)]
				[(eq? rator 'vector?)
					`(= (logand ,(car rand*) ,mask-vector) ,tag-vector)]
				[(eq? rator 'fixnum?)
					`(= (logand ,(car rand*) ,mask-fixnum) ,tag-fixnum)]
				[(eq? rator 'null?)
					(Pred `(eq? ,(car rand*) '()))]
				[(eq? rator 'pair?)
					`(= (logand ,(car rand*) ,mask-pair) ,tag-pair)]
				[(eq? rator 'procedure?)
					`(= (logand ,(car rand*) ,mask-procedure) ,tag-procedure)])))
	(define val-primitive?
		(lambda (x)
			(memq x '(+ - car cdr cons make-vector vector-length vector-ref procedure-ref procedure-code make-procedure))))
	(define effect-primitive?
		(lambda (x)
			(memq x '(set-car! set-cdr! vector-set! procedure-set!))))
	(define predicate-primitive?
		(lambda (x)
			(memq x '(<= < > = >= boolean? eq? fixnum? null? pair? vector? procedure?))))
	(define Value
		(lambda (val)
			(match val
				[,x (guard (or (label? x) (uvar? x) (integer? x))) x]
				[(quote ,[Immediate -> imm]) imm]
				[(mref ,x ,y) val]
				[(if ,[Pred -> test] ,[Value -> conseq] ,[Value -> alt]) `(if ,test ,conseq ,alt)]
				[(begin ,[Effect -> ef*] ... ,[Value -> ef]) `(begin ,ef* ... ,ef)]
				[(let ([,uvar* ,[Value -> value*]] ...) ,[Value -> tail]) 
					`(let ([,uvar* ,value*] ...) ,tail)]
				[(void) $void] ;;In case void is encountered return its value
				;;; Multiplication I have handled using a different case as we dont need to shift both the operands by 8 everytime
				[(* ,[Value -> a] ,[Value -> b])
					(cond
						[(and (integer? a) (integer? b)) `(* ,(sra a shift-fixnum) ,b)]
						[(integer? a) `(* ,b ,(sra a shift-fixnum))]
						[(integer? b) `(* ,a ,(sra b shift-fixnum))]
						[else `(* ,a (sra ,b ,shift-fixnum))])]
				[(,value-prim ,[Value -> val*] ...) (guard (val-primitive? value-prim)) 
					(handle-operator value-prim val*)]
				[(,[Value -> val] ,[Value -> val*] ...) `(,val ,val* ...)])))
	(define Effect
		(lambda (ef)
			(match ef
				[(nop) '(nop)]
				[(if ,[Pred -> test] ,[Effect -> conseq] ,[Effect -> alt]) `(if ,test ,conseq ,alt)]
				[(begin ,[Effect -> ef*] ... ,[Effect -> ef]) `(begin ,ef* ... ,ef)]
				[(let ([,uvar* ,[Value -> value*]] ...) ,[Effect -> tail]) 
					`(let ([,uvar* ,value*] ...) ,tail)]
				[(,effect-prim ,[Value -> val*] ...) (guard (effect-primitive? effect-prim)) 
				 	(handle-effect-ops effect-prim val*)]
				[(,[Value -> val] ,[Value -> val*] ...) `(,val ,val* ...)])))
	;; Function for Immediate Primitives, we have well-defined values for #t,#f and '()
	;; For integers we shift the value by 3 bits (since we use the lower 3 bits as tag)
	(define Immediate
		(lambda (im)
			(match im
				[#t $true]
				[#f $false]
				[() $nil]
				[,t (guard (integer? t)) (ash t shift-fixnum)])))
	(define Pred
		(lambda (pred)
			(match pred
				[(true) '(true)]
				[(false) '(false)]
				[(if ,[Pred -> test] ,[Pred -> conseq] ,[Pred -> alt]) `(if ,test ,conseq ,alt)]
				[(begin ,[Effect -> ef*] ... ,[Pred -> ef]) `(begin ,ef* ... ,ef) ]
				[(let ([,uvar* ,[Value -> value*]] ...) ,[Pred -> tail]) `(let ([,uvar* ,value*] ...) ,tail)  ]
				[(,pred-prim ,[Value -> val*] ...) (guard (predicate-primitive? pred-prim)) (handle-pred-op pred-prim val*)])))
	(lambda (prog)
		(match prog
			[(letrec ([,label* (lambda (,uvar* ...) ,[Value -> val*])] ...) ,[Value -> tail]) 
				`(letrec ([,label* (lambda (,uvar* ...) ,val*)] ...) ,tail)]
			[,x (error who "invalid program ~s" x)])))
