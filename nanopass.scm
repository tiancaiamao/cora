#|
cps变换（去掉尾递归)
闭包变换（去掉自由变量）
引入local表标记局部变量
将let和lambda提取到只在top出现（去掉let和lambda）
函数调用协议处理
寄存器分配（去掉了变量）
if变跳转 （去掉了if）
|#

(define finalize-locations
  (lambda (x)
    (define Program
      (lambda (x)
	(define map-label-to-def
	  (lambda (label* body*)
	    (map (lambda (label body)
		   `(,label (lambda () ,(Body body))))
		 label* body*)))
	(match x
	       [(letrec ([,label* (lambda () ,body*)] ...) ,body)
		`(letrec ,(map-label-to-def label* body*) ,(Body body))])))
    (define Body
      (lambda (x)
	(match x
	       [(locate ([,uvar* ,loc*] ...) ,tail)
		(Tail tail (map cons uvar* loc*))])))
    (define Tail
      (lambda (x env)
	(match x
	       [(begin ,effts* ... ,tail)
		`(begin ,@(map (lambda (e) (Effect e env)) effts*) ,(Tail tail env))]
	       [(if ,pred ,then ,else)
		`(if ,(Pred pred env) ,(Tail then env) ,(Tail else env))]
	       [(,triv)
		(list (Triv triv env))])))
    (define Pred
      (lambda (x env)
	(match x
	       [(if ,pred1 ,pred2 ,pred3)
		`(if ,(Pred pred1 env) ,(Pred pred2 env) ,(Pred pred3 env))]
	       [(begin ,effect* ... ,pred)
		`(begin ,@(map (lambda (e) (Effect e env)) effect*) ,(Pred pred env))]
	       [(,relop ,triv1 ,triv2)
		`(,relop ,(Triv triv1 env) ,(Triv triv2 env))]
	       [(true) '(true)]
	       [(false) '(false)])))
    (define Effect
      (lambda (x env)
	(match x
	       [(if ,pred ,efft1 ,efft2)
		`(if ,(Pred pred env) ,(Effect efft1 env) ,(Effect efft2 env))]
	       [(begin ,effect* ... ,effect)
		`(begin ,@(map (lambda (e) (Effect e env)) effect*) ,(Effect effect env))]
	       [(set! ,var (,binop ,triv1 ,triv2))
		`(set! ,(Var var env) (,binop ,(Triv triv1 env) ,(Triv triv2 env)))]
	       [(set! ,var ,triv)
		`(set! ,(Var var env) ,(Triv triv env))]
	       [(nop) '(nop)])))
    (define Loc (lambda (x) x))
    (define Var
      (lambda (x env)
	(let ((find (assoc x env)))
	  (if find
	      (cdr find)
	      x))))
    (define Triv
      (lambda (x env)
	(if (or (integer? x) (label? x))
	    x
	    (Var x env))))
    (Program x)))

(define expose-frame-var
  (lambda (x)
    (define Program
      (lambda (x)
	(define map-label-to-def
	  (lambda (label* body*)
	    (map (lambda (label body)
		   (let ((transformed-body (Tail body)))
		     `(,label (lambda () ,transformed-body))))
		 label* body*)))
	(match x
	       [(letrec ([,label* (lambda () ,tail*)] ...) ,tail-p)
		`(letrec ,(map-label-to-def label* tail*) ,(Tail tail-p))])))
    (define Tail
      (lambda (x)
	(match x
	       [(begin ,effts* ... ,tail-p)
		`(begin ,@(map Effect effts*) ,(Tail tail-p))]
	       [(if ,pred ,tail1 , tail2)
		`(if ,(Pred pred) ,(Tail tail1) ,(Tail tail2))]
	       [,triv
		(Triv triv)])))
    (define Pred
      (lambda (x)
	(match x
	       [(if ,pred1 ,pred2 ,pred3)
		`(if ,(Pred pred1) ,(Pred pred2) ,(Pred pred3))]
	       [(begin ,effect* ... ,pred)
		`(begin ,@(map Effect effect*) ,(Pred pred))]
	       [(,relop ,triv1 ,triv2)
		`(,relop ,(Triv triv1) ,(Triv triv2))]
	       [(true) '(true)]
	       [(false) '(false)])))
    (define Effect
      (lambda (x)
	(match x
	       [(if ,pred ,effect1 ,effect2)
		`(if ,(Pred pred) ,(Effect effect1) ,(Effect effect2))]
	       [(begin ,effect* ... ,effect)
		`(begin ,@(map Effect effect*) ,(Effect effect))]
	       [(set! ,loc (,binop ,triv1 ,triv2))
		`(set! ,(Loc loc) (,binop ,(Triv triv1) ,(Triv triv2)))]
	       [(set! ,loc ,triv)
		`(set! ,(Loc loc) ,(Triv triv))]
	       [(nop) '(nop)])))
    (define Loc
      (lambda (var)
	(if (frame-var? var) 
	    (make-disp-opnd 'rbp (* 8 (frame-var->index var)))
	    var)))
    (define Triv
      (lambda (t)
	(if (frame-var? t)
	    (make-disp-opnd 'rbp (* 8 (frame-var->index t)))
	    t)))
    (Program x)))

(define expose-basic-blocks
  (lambda (x)
    (define local-bind '())
    (define bind-tail
      (lambda (label tail)
	(set! local-bind (cons `(,label (lambda () ,tail)) local-bind))))
    (define bind-func
      (lambda (label tail)
	(if (null? tail)
	    (set! local-bind
		  (cons `(,label (lambda () ())) local-bind))
	    (let ([tail$ (if (null? (cdr tail))
			     (car tail)
			     (cons 'begin tail))])
	      (set! local-bind (cons `(,label (lambda () ,tail$)) local-bind))))))
    (define Program
      (lambda (x)
	(match x
	       [(letrec ([,label* (lambda () ,tail*)] ...) ,tail)
		`(letrec ,(append (map (lambda (x y)
					 `(,x (lambda () ,(Tail y))))
				       label* tail*) local-bind)
		   ,(Tail tail))])))
    (define Tail
      (lambda (x)
	(match x
	       [(if ,pred ,tail1 ,tail2)
		(let ([then-label (unique-label 'c)]
		      [else-label (unique-label 'a)])
		  (bind-tail then-label (Tail tail1))
		  (bind-tail else-label (Tail tail2))
		  (Pred pred then-label else-label))]
	       [(begin ,effect* ... ,tail)		
		(let ([tail-statement (Effect* effect* (Tail tail))])
		  (if (eq? (car tail-statement) 'begin)
		      (make-begin (cdr tail-statement))
		      tail-statement))]
	       [(,triv) x])))
    (define Effect*
      (lambda (ls tail)
	(if (null? ls)
	    tail
	    (let ([ret (Effect (car ls) (cons (Effect* (cdr ls) tail) '()))])
	      (if (null? (cdr ret))
		  (car ret)
		  (cons 'begin ret))))))
    (define Pred
      (lambda (x true-label false-label)
	(match x
	       [(true) (list true-label)]
	       [(false) (list false-label)]	       
	       [(if ,pred1 ,pred2 ,pred3)
		(let ([then-label (unique-label 'c)]
		      [else-label (unique-label 'a)]
		      [then (Pred pred2 true-label false-label)]
		      [else (Pred pred3 true-label false-label)])
		  (bind-tail then-label then)
		  (bind-tail else-label else)
		  (Pred pred1 then-label else-label))]
	       [(begin ,effect* ... ,pred)		
		(if (null? effect*)
		    (Pred pred true-label false-label)
		    (let ([new-true (unique-label 'c)]
			  [new-false (unique-label 'a)])
		      (bind-tail new-true (Effect* effect* `(,true-label)))
		      (bind-tail new-false (Effect* effect* `(,false-label)))
		      (Pred pred new-true new-false)))]
	       [(,relop ,triv1 ,triv2)
		`(if ,x (,true-label) (,false-label))])))
    (define Effect
      (lambda (x after)
	(match x
	       [(nop) after]
	       [(set! ,loc ,triv) (cons x after)]
	       [(set! ,loc (,binop ,triv1 triv2))
		(cons x after)]
	       [(if ,pred ,effect1 ,effect2)
		(let ([true-label (unique-label 'c)]
		      [false-label (unique-label 'a)]
		      [jump-label (unique-label 'j)])
		  (if (null? after)
		      (begin
			(bind-func true-label (Effect effect1 '()))    
			(bind-func false-label (Effect effect2 '())))
		      (begin
			(bind-func jump-label after)
			(bind-func true-label (Effect effect1 `((,jump-label))))
			(bind-func false-label (Effect effect2 `((,jump-label))))))
		  (cons (Pred pred true-label false-label) '()))]
	       [(begin ,effect* ... ,effect)
		(if (null? effect*)
		    (Effect effect after)
		    (Effect (car effect*) (cddr x)))])))
    (Program x)))

(define flatten-program
  (lambda (x)
    (define Program
      (lambda (x)
	(define make-body
	  (lambda (label* tail*)
	    (if (null? label*)
		'()
		(append 
		 (cons (car label*) (Tail (car tail*) (cdr label*)))
		 (make-body (cdr label*) (cdr tail*))))))
	(match x
	       [(letrec ([,label* (lambda () ,tail*)] ...) ,tail)
		(cons 'code       
		      (append 
		       (Tail tail (car label*))
		       (make-body label* tail*)))])))
    (define Tail
      (lambda (x label)
	(match x
	       [(if ,pred (,label1) (,label2))
		(cond
		 ((eq? label label2) `((if ,pred (jump ,label1))))
		 ((eq? label label1) `((if (not ,pred) (jump ,label2))))
		 (#t `((if ,pred (jump ,label1)) (jump ,label2))))]
	       [(begin ,effect* ... ,tail)
		(append effect* (Tail tail label))]
	       [(,triv)
		`((jump ,triv))])))
    (Program x)))

(define generate-x86-64
  (lambda (x)
    (define Program
      (lambda (x)
	(match x
	       [(code ,stmt ,stmt* ...)
		(Statement stmt) (if (not (null? stmt*)) (Program `(code ,@stmt*)))]
	       [,other (errorf 'parse "invalid Program ~s" other)])))
    (define Statement
      (lambda (stmt)
	(match stmt
	       [(set! ,reg ,lbl) (guard (label? lbl)) (emit 'leaq lbl reg)]
	       [(set! ,var1 (,op ,var1 ,opnd)) (emit (op->inst op) opnd var1)]
	       [(set! ,var ,opnd) (emit 'movq opnd var)]
	       [(jump ,opnd) (emit-jump 'jmp opnd)]
	       [,var (guard (label? var)) (emit-label var)]
	       [(if (,op ,x ,y) (jump ,lbl)) 
		(begin (emit 'cmpq y x) (emit-jump (op->inst op) lbl))]
	       [(if (not (,op ,x ,y)) (jump ,lbl)) 
		(begin (emit 'cmpq y x) (emit-jump (inst->inst^ (op->inst op)) lbl))]
	       )))
    (define op->inst
      (lambda (op)
	(case op
	  [(+) 'addq]
	  [(-) 'subq]
	  [(*) 'imulq]
	  [(logand) 'andq]
	  [(logor) 'orq]
	  [(sra) 'sarq]
	  [(=) 'je]
	  [(<) 'jl]
	  [(<=) 'jle]
	  [(>) 'jg]
	  [(>=) 'jge]
	  [else (error who "unexpected binop ~s" op)])))
    (define inst->inst^
      (lambda (inst)
	(case inst
	  [(je) 'jne]
	  [(jl) 'jge]
	  [(jle) 'jg]
	  [(jg) 'jle]
	  [(jge) 'jl]
	  )))
    (printf ".global _scheme_entry ~%")
    (printf "_scheme_entry: ~%")
    (Program x)
    (printf "ret ~%")))
