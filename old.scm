;;;Program	----->	(letrec ([label (lambda () Body)]*) Body)
;;;Body	----->	(locals (uvar*)
;;;		  (new-frames (Frame*) Tail))
;;;Frame	----->	(uvar*)
;;;Tail	----->	(Triv Loc*)
;;;	|	(if Pred Tail Tail)
;;;	|	(begin Effect* Tail)
;;;Pred	----->	(true)
;;;	|	(false)
;;;	|	(relop Triv Triv)
;;;	|	(if Pred Pred Pred)
;;;	|	(begin Effect* Pred)
;;;Effect	----->	(nop)
;;;	|	(set! Var Triv)
;;;	|	(set! Var (binop Triv Triv))
;;;	|	(return-point label (Triv Loc*))
;;;	|	(if Pred Effect Effect)
;;;	|	(begin Effect* Effect)
;;;Loc	----->	reg | fvar
;;;Var	----->	uvar | Loc
;;;Triv	----->	Var | int | label

;;;uncover frame conflicts needs to handle mrefs and mset's in different way while updating the conflict table
;;;(set! x (mref base offset)) => will mean that x conflicts with both base and offset and hence we must record these conflicts
;;;(mset! base offset value) => in this we have to record the conflicts of each parameters with the other
 
(define-who uncover-frame-conflict
  (define add-conflicts!
	    (lambda (ct lhs live*)
	      (define add-conflict!
	        (lambda (var1 var2)
	          (let ([a (assq var1 ct)])
	            (set-cdr! a (if (eq? var1 var2) (cdr a)  (set-cons var2 (cdr a)))))))
	      (when (uvar? lhs)
	        (for-each
	          (lambda (live) (add-conflict! lhs live))
	          live*))
	      (for-each
	        (lambda (live) (when (and (uvar? live) (not (register? lhs))) (add-conflict! live lhs)))
	        live*)))
	(define trivial?
		(lambda (x)
			(or (uvar? x) (integer? x) (label? x))))
	(define remove-nulls
		(lambda (ls)
			(cond
				[(null? ls) '()]
				[(null? (car ls)) (remove-nulls (cdr ls))]
				[else (set-cons (car ls) (remove-nulls (cdr ls)))])))
  (define (Body x)
    (define call-live* '())
    (define Triv (lambda (x) (if (or (uvar? x) (frame-var? x)) `(,x) '())))
    (define Effect*
      (lambda (x live* ct)
        (match x
          [() live*]
          [(,ef* ... ,ef) (Effect* ef* (Effect ef live* ct) ct)]
          [,x (error who "invalid Effect* list ~s" x)])))
    (define Effect
      (lambda (x live* ct)
        (match x
          [(nop) live*]
          [(if ,test ,[c-live*] ,[a-live*]) 
					 	(Pred test  c-live* a-live* ct)]
          [(begin ,ef* ... ,[live*]) (Effect* ef* live* ct)]
					[(mset! ,[Triv -> base] ,[Triv -> offset] ,[Triv -> value])
						(begin
												(if (not (null? base)) (add-conflicts! ct (car base) (union offset value live*)))
																	(if (not (null? offset)) (add-conflicts! ct (car offset) (union base value live*)))
																	(if (not (null? value)) (add-conflicts! ct (car value) (union offset base live*)))
																	(union base offset value live*))]
					[(set! ,lhs (mref ,[Triv -> x-live*] ,[Triv -> y-live*]))
					           (begin
												(add-conflicts! ct lhs (union x-live* y-live* live*))
												(union x-live* y-live* (remq lhs live*)))]
          [(set! ,lhs (,binop ,[Triv -> x-live*] ,[Triv -> y-live*]))
					 (guard (memq binop '(+ - * logand logor)))	
           (begin
							(add-conflicts! ct lhs live*)
							(union x-live* y-live* (remq lhs live*)))]
          [(set! ,lhs ,var)
							(begin
								(add-conflicts! ct lhs live*)
								(if (or (uvar? var) (frame-var? var)) (set-cons var (remq lhs live*)) (remq lhs live*)))]
          [(return-point ,rplab ,tail)
						(let ((new-live* (Tail tail ct)))
								(set! call-live* (union call-live* live*))
								           (union live* new-live*))]
          [,x (error who "invalid Effect list ~s" x)])))
    (define Pred
      (lambda (x t-live* f-live* ct)
        (match x
          [(true) t-live* ]
          [(false) f-live* ]
          [(if ,test ,[c-live*] ,[a-live*]) 
						(union t-live* f-live* (Pred test c-live* a-live* ct))]
          [(begin ,ef* ... ,[live*]) (Effect* ef* live* ct)]
          [(,predop ,[Triv -> x-live*] ,[Triv -> y-live*])
           (remove-nulls (union x-live* y-live* t-live* f-live*))]
          [,x (error who "invalid Pred ~s" x)])))
    (define Tail
      (lambda (x ct)
        (match x
          [(begin ,ef* ... ,[live*]) (Effect* ef* live* ct)]
          [(if ,test ,[c-live*] ,[a-live*]) (Pred test c-live* a-live* ct)]
          [(,[Triv -> target] ,[Triv -> live*] ...) `(,target ... ,live* ... ...)]
          [,x (error who "invalid Tail ~s" x)])))
    (match x
      [(locals (,uvar* ...) (new-frames (,nfv** ...) ,tail))
       (let ([ct (map (lambda (x) (cons x '())) uvar*)])
         (let ([uvar* (filter uvar? (Tail tail ct))])
           (unless (null? uvar*)
             (error who "found variables ~s live on entry" uvar*)))
         (let ([spill* (filter uvar? call-live*)])
           `(locals (,(difference uvar* spill*) ...)
               (new-frames (,nfv** ...)
                 (spills ,spill*
                   (frame-conflict ,ct
                     (call-live (,call-live* ...) ,tail)))))))]
      [,x (error who "invalid Body ~s" x)]))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[Body -> body*])] ...) ,[Body -> body])
       `(letrec ([,label* (lambda () ,body*)] ...) ,body)]
      [,x (error who "invalid Program ~s" x)])))


;;--------------------------------------------------------------------------------------------------------------------------------------------------------
;;--------------------------------------------------------------------------------------------------------------------------------------------------------

;Simpler version of assign frame assigns a frame variable for all variables in the spill list, done through the find-homes function

(define-who pre-assign-frame
		(define replace																		;;Replaces the occurences of variables in the conflict-list with the register-homes
			(lambda (allocations ct)
				(cond 
					[(null? allocations) ct]
					[else (replace (cdr allocations) (replace-helper (car allocations) ct))])))
		(define replace-helper
			(lambda (allocation ct)
				(map (lambda (ct-entry)
								(cond
									[(eq? (car allocation) (car ct-entry)) allocation]
									[else (cons (car ct-entry) (replace* (cdr ct-entry) allocation))])) ct)))
		(define replace*
			(lambda (conflicts allocation)
				(cond
					[(null? conflicts) '()]
					[(eq? (car conflicts) (car allocation)) (cons (cadr allocation) (replace* (cdr conflicts) allocation))]
					[else (cons (car conflicts) (replace* (cdr conflicts) allocation))])))			
		(define update-bias-table
			(lambda (uvar reg bt)
				(map (lambda (entry) 
								(let ([tail (cdr entry)])
									(if (memq uvar tail)
											(begin
												(set-cdr! entry (cons reg (remq uvar entry)))
												entry)
												entry))) bt)))
		(define update-conflict-table
			(lambda (uvar reg ct)
				(map (lambda (entry) 
								(let ([tail (cdr entry)])
									(if (memq uvar tail)
											(begin
												(set-cdr! entry (cons reg (remq uvar entry)))
												entry)
												entry))) ct)))
	(define assign-homes
		(lambda (var* bt ct)
			(cond
				[(null? bt) '() ]
				[(null? var*) '()]
				[else (let* ([current-var (car var*)]
										 [bt-entry (assq current-var bt)]
										 [friend-list (cdr bt-entry)]
										 [conflict-entry (cdr (assq current-var ct))])
												(if (null? friend-list) 
														(assign-homes (cdr var*) bt ct)
														(let ([friend-frame (get-frame friend-list conflict-entry)])
															(cond
																[(eq? friend-frame #f) (assign-homes (cdr var*) bt ct)]
																[else (let ([updated-ct (update-conflict-table current-var friend-frame ct)]
																						[updated-bt (update-bias-table current-var friend-frame bt)])
																						(cons (list current-var friend-frame) (assign-homes (cdr var*) updated-bt updated-ct)))]))))])))
	(define get-frame
		(lambda (ls conflict-entry)
			(cond
				[(null? ls) #f]
				[(and (frame-var? (car ls)) (not (memq (car ls) conflict-entry))) (car ls)]
				[else (get-frame (cdr ls) conflict-entry)])))
	(define find-used
	    (lambda (conflict* home*)
	      (cond
	        [(null? conflict*) '()]
	        [(frame-var? (car conflict*)) 
	         (set-cons (car conflict*) (find-used (cdr conflict*) home*))]
	        [(assq (car conflict*) home*) => 
	         (lambda (x) (set-cons (cadr x) (find-used (cdr conflict*) home*)))]
	        [else (find-used (cdr conflict*) home*)])))
	  (define find-frame-var
	    (lambda (used*)
	      (let f ([index 0])
	        (let ([fv (index->frame-var index)])
	          (if (memq fv used*) (f (+ index 1)) fv)))))
	  (define find-homes
	    (lambda (var* ct home*)
	      (if (null? var*)
	          home*
	          (let ([var (car var*)] [var* (cdr var*)])
	            (let ([conflict* (cdr (assq var ct))])
	              (let ([home (find-frame-var (find-used conflict* home*))])
	                (find-homes var* ct `((,var ,home) . ,home*))))))))
  (define Body
    (lambda (body)
      (match body
        [(locals (,local* ...)
           (new-frames (,nfv** ...)
             (spills (,spill* ...)
               (frame-conflict ,ct
                 (call-live (,call-live* ...) ,tail)))))
         (let* ([uvar* (union local* spill*)]
								[bias-list (move-bias tail frame-var? uvar*)]
								[biased-home* (assign-homes spill* bias-list ct)]
								[home (if (null? biased-home*) '() (map car biased-home*))]
							  [new-ct (if (null? biased-home*) ct (replace biased-home* ct))]
							  [home* (find-homes (difference spill* home) ct '())])
           `(locals (,local* ...)
              (new-frames (,nfv** ...)
                (locate (,biased-home* ... ,home* ...)
                  (frame-conflict ,ct
                    (call-live (,call-live* ...) ,tail))))))]
        [,body (error who "invalid Body ~s" body)])))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[Body -> body*])] ...) ,[Body -> body])
       `(letrec ([,label* (lambda () ,body*)] ...) ,body)]
      [,x (error who "invalid Program ~s" x)])))


;;--------------------------------------------------------------------------------------------------------------------------------------------------------
;;--------------------------------------------------------------------------------------------------------------------------------------------------------

(define move-bias-enabled #f)
(define-who move-bias
	(define uncover-bias
		(lambda (body bias-list fn)
			(match body
				[(begin ,ef* ...) (Effect* ef* bias-list fn)])))
	(define Effect*
		(lambda (effect* bias-list fn)
			(match effect*
				[,x (guard (null? x)) bias-list]
				[(,ef,ef* ...) (Effect* ef* (Effect ef bias-list fn) fn)])))
	(define Effect
		(lambda (ef bias-list fn)
			(match ef
				[(set! ,x ,y) (guard (and (uvar? x) (uvar? y)))
				 							(begin
												(set-cdr! (assq x bias-list) (set-cons y (cdr (assq x bias-list))))
												(set-cdr! (assq y bias-list) (set-cons x (cdr (assq y bias-list))))
												bias-list)]
				[(set! ,x ,y) (guard (and (uvar? x) (fn y)))
											  (begin
													(set-cdr! (assq x bias-list) (set-cons y (cdr (assq x bias-list))))
													bias-list)]
				[(set! ,x ,y) (guard (and (fn x) (uvar? y)))
											  (begin
													(set-cdr! (assq y bias-list) (set-cons x (cdr (assq y bias-list))))
													bias-list)]
				[,x bias-list])))
	(lambda (tail fn uvar*)
		(cond
			[(eq? move-bias-enabled '#f) '()]
			[else (let* ([bias-list (map (lambda (x) (cons x '())) uvar*)]
						 			 [new-bias-list (uncover-bias tail bias-list fn)])
									 new-bias-list)])))

;;--------------------------------------------------------------------------------------------------------------------------------------------------------
;;--------------------------------------------------------------------------------------------------------------------------------------------------------

;;;(return-point rp-label tail) =>
;;;  (begin
;;;    (set! fp (+ fp nb))
;;;    (return-point rp-label tail)
;;;    (set! fp (- fp nb)))

(define-who assign-new-frame
  (define Effect
    (lambda (fs)
      (lambda (x)
        (match x
          [(nop) '(nop)]
          [(if ,[(Pred fs) -> test] ,[(Effect fs) -> conseq] ,[(Effect fs) -> altern])
           `(if ,test ,conseq ,altern)]
          [(begin ,[ef*] ... ,[ef]) 	(make-begin `(,ef* ... ,ef))]
					[(mset! ,base ,offset ,value) `(mset! ,base ,offset ,value)]
          [(set! ,lhs ,rhs) `(set! ,lhs ,rhs)]
          [(return-point ,rplab ,[(Tail fs) -> tail])
							(make-begin
								`((set! ,frame-pointer-register (+ ,frame-pointer-register ,(ash fs align-shift)))
									,x
									(set! ,frame-pointer-register (- ,frame-pointer-register ,(ash fs align-shift)))))]
          [,x (error who "invalid Effect ~s" x)]))))
  (define Pred
    (lambda (fs)
      (lambda (x)
        (match x
          [(true) '(true)]
          [(false) '(false)]
          [(if ,[test] ,[conseq] ,[altern]) `(if ,test ,conseq ,altern)]
          [(begin ,[(Effect fs) -> ef*] ... ,[pr])  (make-begin `(,ef* ... ,pr))]
          [(,predop ,x ,y) `(,predop ,x ,y)]
          [,x (error who "invalid Pred ~s" x)]))))
  (define Tail
    (lambda (fs)
      (lambda (x)
        (match x
          [(if ,[(Pred fs) -> test] ,[(Tail fs) -> conseq] ,[ (Tail fs) -> altern])
           `(if ,test ,conseq ,altern)]
          [(begin ,[(Effect fs) -> ef*] ... ,[(Tail fs) -> tail]) (make-begin `(,ef* ... ,tail))]
          [(,triv ,live* ...) `(,triv ,live* ...)]
          [,x (error who "invalid Tail ~s" x)]))))
	(define find-max					;;This function is used to determine the size of the frame used by the function
		(lambda (ls)
			(cond
				[(null? ls) '-1 ]
				[else (max (car ls) (find-max (cdr ls)))])))
	;;; The function argument to map does all the work we basically have to find the max-index of all call-live variables which can either be a frame variable
	;;; or we could look up the frame variable assigned to a uvar via the pre-assign frame pass
  (define Body
    (lambda (x)
      (define frame-size 
				(lambda (call-live* home*)
					(let ([ls (map (lambda (x)
														(if (frame-var? x) 
																(frame-var->index x)
																(frame-var->index (cadr (assq x home*))))) call-live*)])
								(add1 (find-max ls)))))
      (match x
        [(locals (,local* ...)
           (new-frames (,nfv** ...)
             (locate (,home* ...)
               (frame-conflict ,ct
                 (call-live (,call-live* ...) ,tail)))))
         (let ([fs (frame-size call-live* home*)])
           (define (do-assign var*)
             (let f ([index fs] [ls var*] [rs '()])
								(let ((fv (index->frame-var index)))
									(cond
										[(null? ls) rs]
										[else (f (add1 index) (cdr ls) (cons `(,(car ls) ,fv) rs))]))))
           `(locals (,(difference local* `(,nfv** ... ...)) ...)
              (ulocals ()
                (locate (,home* ... ,(map do-assign nfv**) ... ...)
                  (frame-conflict ,ct ,((Tail fs) tail))))))]
        [,x (error who "invalid Body ~s" x)])))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[Body -> body*])] ...) ,[Body -> body])
       `(letrec ([,label* (lambda () ,body*)] ...) ,body)]
      [,x (error who "invalid Program ~s" x)])))


;;--------------------------------------------------------------------------------------------------------------------------------------------------------
;;--------------------------------------------------------------------------------------------------------------------------------------------------------

;;; mrefs are still handled as binops here
;;; mset! clause added, if any of the parameters has been assigned as a frame it is reflected here

(define-who finalize-frame-locations
  (define Var
    (lambda (env)
      (lambda (v)
        (cond
          [(and (uvar? v) (assq v env)) => cdr]
          [else v]))))
  (define Triv Var)
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
					[(mset! ,[(Var env) -> base] ,[(Var env) -> offset] ,[(Var env) -> value]) `(mset! ,base ,offset ,value)]
          [(begin ,[ef] ,[ef*] ...) `(begin ,ef ,ef* ...)]
          [(if ,[(Pred env) -> test] ,[conseq] ,[altern])
           `(if ,test ,conseq ,altern)]
          [(return-point ,rplab ,[(Tail env) -> tail]) ;;Handling return-point expressions in the Effect 
           	`(return-point ,rplab ,tail)]
          [,ef (error who "invalid Effect ~s" ef)]))))
  (define Tail
    (lambda (env)
      (lambda (tail)
        (match tail
          [(begin ,[(Effect env) -> ef*] ... ,[tail]) `(begin ,ef* ... ,tail)]
          [(if ,[(Pred env) -> test] ,[conseq] ,[altern])
           `(if ,test ,conseq ,altern)]
          [(,[(Triv env) -> t] ,[(Triv env) -> live*] ...) `(,t ,live* ...)]
          [,tail (error who "invalid Tail ~s" tail)]))))
  (define Body
    (lambda (bd)
      (match bd
        [(locals (,local* ...)
           (ulocals (,ulocal* ...)
             (locate ([,uvar* ,loc*] ...)
               (frame-conflict ,ct ,[(Tail (map cons uvar* loc*)) -> tail]))))
         `(locals (,local* ...)
            (ulocals (,ulocal* ...)
              (locate ([,uvar* ,loc*] ...)
                (frame-conflict ,ct ,tail))))]
        [(locate ([,uvar* ,loc*] ...) ,tail) 
         `(locate ([,uvar* ,loc*] ...) ,tail)]
        [,bd (error who "invalid Body ~s" bd)])))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[Body -> bd*])] ...) ,[Body -> bd])
       `(letrec ([,label* (lambda () ,bd*)] ...) ,bd)]
      [,x (error who "invalid Program ~s" x)])))


;;--------------------------------------------------------------------------------------------------------------------------------------------------------
;;--------------------------------------------------------------------------------------------------------------------------------------------------------

;;; Select instructions requires mrefs and msets to be rewritten substantially in some cases
;;; I prepared a table based on base and offset values
;;;offset		base  ----------->
;;;|					ur	int32	 fvar  label  
;;;|	ur			X1  X1      X3    X3
;;;| int32   X4  X2      X5    X5
;;;| fvar    X6  X2      X5    X5
;;;| label   X6  X2      X5    X5
;;;|
;;;v

;;;X1 => return expression as is
;;;X2 => (set! u base) (set! lhs (mref u offset))
;;;X3 => (set! u offset) (set! lhs (mref base u))
;;;X4 => (set! lhs (mref offset base))
;;;X5 => (set! u1 base) (set! u2 offset) (set! lhs (mref u1 u2))
;;;X6 => first do X4 and then X3

;;; This pretty much handles all cases that there are, mrefs and mset! are handled in the same way

(define-who select-instructions
  (define (ur? x) (or (register? x) (uvar? x)))
  (define (Body x)
    (define new-ulocal* '())
		(define int64-or-label?
		      (lambda (x) (or (and (not (int32? x)) (int64? x)) (label? x))))
    (define (new-u)
      (let ([u (unique-name 't)])
        (set! new-ulocal* (cons u new-ulocal*))
        u))
    (define (select-binop-1 var binop triv1 triv2)
			(cond
         [(eq? var triv1) (select-binop-2 binop var triv2)]
         [(and (eq? var triv2) (member binop '(+ * logor logand))) (select-binop-2 binop var triv1)]
         [else (let ([u (new-u)])
                 `(begin (set! ,u ,triv1) ,(select-binop-2 binop u triv2) (set! ,var ,u)))]))
    (define (select-binop-2 binop var triv) 
			(cond
        [(and (member binop '(- + sra logor logand))
              (or (int64-or-label? triv) (and (frame-var? var) (frame-var? triv))))
         				(let ([u (new-u)])
         						`(begin (set! ,u ,triv) (set! ,var (,binop ,var ,u))))]
        ;;; X2
        [(and (eq? binop '*) (frame-var? var))
         (let ([u (new-u)])
                `(begin (set! ,u ,var) ,(select-binop-2 binop u triv) (set! ,var ,u)))]
        ;;; X1 for *
        [(and (eq? binop '*) (ur? var) (int64-or-label? triv))
         			(let ([u (new-u)])
         					`(begin (set! ,u ,triv) (set! ,var (,binop ,var ,u))))]
        [else `(set! ,var (,binop ,var ,triv))]))
    (define (select-move var triv)
			(if (and (frame-var? var) (or (frame-var? triv) (int64-or-label? triv)))
			            ;;; X0
			            (let ([u (new-u)])
			              `(begin (set! ,u ,triv) (set! ,var ,u)))
			            `(set! ,var ,triv)))
    (define select-relop 
			(lambda (relop x y)
				(cond
					[(and (int32? x) (or (ur? y) (frame-var? y))) `(,(relop^ relop) ,y ,x)]
					[(or (and (frame-var? x) (frame-var? y))
					     (and (int32? x) (int32? y))
					     (and (int64-or-label? x) (or (ur? y) (frame-var? y) (int32? y))))
										(let ([u (new-u)])
										     `(begin (set! ,u ,x) (,relop ,u ,y)))]
					[(and (or (ur? x) (frame-var? x) (int32? x))
					      (int64-or-label? y))
					           (let ([u (new-u)])
					                  `(begin (set! ,u ,y) (,(relop^ relop) ,u ,x)))]
					[(and (int64-or-label? x) (int64-or-label? y))
					           (let ([u1 (new-u)] [u2 (new-u)])
					                  `(begin (set! ,u1 ,x) (set! ,u2 ,y) (,relop ,u1 ,u2)))]
					[else `(,relop ,x ,y)])))
		;;;select mref and mset do the same thing the only difference being that the former returns mref expressions and the latter returns mset!
		(define select-mref
			(lambda (lhs base offset)
				(cond
					[(or (and (ur? base) (integer? offset))
					 		 (and (ur? base) (ur? offset))) `((set! ,lhs (mref ,base ,offset)))]	;;X1
					[(and (integer? offset) (or (integer? base) (frame-var? base) (label? base)))
							(let ((u (new-u)))
								`((set! ,u ,base) (set! ,lhs (mref ,u ,offset))))]									;;X2
					[(and (ur? base) (or (frame-var? offset) (label? offset)))
								(let ((u (new-u)))
															`((set! ,u ,offset) (set! ,lhs (mref ,base ,u))))]
					[(and (ur? offset) (or (frame-var? base) (frame-var? offset)))
												(select-mref lhs offset base)]
					[else (let ((u1 (new-u)) (u2 (new-u)))
											`((set! ,u1 ,base) (set! ,u2 ,offset) (set! ,lhs (mref ,u1 ,u2))))])))
		(define select-mset
			(lambda (base offset value)
				(cond
					[(or (and (ur? base) (integer? offset))
					 		 (and (ur? base) (ur? offset))) `((mset! ,base ,offset ,value))]
					[(and (integer? offset) (or (integer? base) (frame-var? base) (label? base)))
							(let ((u (new-u)))
								`((set! ,u ,base) (mset! ,u ,offset ,value) (set! ,base ,u)))]
					[(and (ur? base) (or (frame-var? offset) (label? offset)))
								(let ((u (new-u)))
												`((set! ,u ,offset) (mset! ,base ,u ,value)))]
					[(and (ur? offset) (or (frame-var? base) (frame-var? offset)))
												(select-mset offset base value)]
					[else (let ((u1 (new-u)) (u2 (new-u)))
									`((set! ,u1 ,base) (set! ,u2 ,offset) (mset! ,u1 ,u2 ,value)))])))
    (define Effect 
			(lambda (ef)
				(match ef
	        [(nop) '(nop)]
	        [(begin ,[Effect -> ef*] ... ,[Effect -> ef]) (make-begin `(,ef* ... ,ef))]
	        [(if ,[Pred -> test] ,[Effect -> conseq] ,[Effect -> altern]) `(if ,test ,conseq ,altern)]
					[(set! ,lhs (mref ,base ,offset))
						(cond
							[(and (integer? base) (ur? offset)) (make-begin (select-mref lhs offset base))] ;;exchange base and offset
							[(ur? lhs) (make-begin (select-mref lhs base offset))] ;;;pass lhs as it is
							[(frame-var? lhs)
								(let ((u (new-u)))
									 (make-begin `((set! ,u ,lhs) ,(select-mref u base offset) ... (set! ,lhs ,u))))] ;;;if frame-var assign a new unspillable and assign it back
							[(label? lhs) 					
								(let ((u (new-u)))
									 (make-begin `((set! ,u ,lhs) ,(select-mref u base offset) ...)))] ;;;if lhs a label assign new unspillable and call select-mref passing new lhs
							[else '(nop)])]
	        [(set! ,lhs (,binop ,x ,y)) (select-binop-1 lhs binop x y)]
	        [(set! ,lhs ,rhs) (select-move lhs rhs)]
					[(mset! ,base ,offset ,value)
						(cond 
							[(and (integer? base) (ur? offset)) (make-begin (select-mset offset base value))]
							[(or (ur? value) (integer? value)) (make-begin (select-mset base offset value))]
							[(frame-var? value)
								(let ((u (new-u)))
									(make-begin `((set! ,u ,value) ,(select-mset base offset u) ... (set! ,value ,u))))]
							[(label? value)
							 	(let ((u (new-u)))
									(make-begin `((set! ,u ,value) ,(select-mset base offset u) ...)))])]
	        [(return-point ,rplab ,[Tail -> tail]) `(return-point ,rplab ,tail)] ;;;Process tail and send the rest of instructions as is
	        [,x (error who "invalid Effect ~s" x)])))
    (define (Pred x) 
			(match x
				[(true) '(true)]
				[(false) '(false)]
				[(if ,[Pred -> pred] ,[Pred -> conseq] ,[Pred -> alt])
					`(if ,pred ,conseq ,alt)]
				[(begin ,[Effect -> ef*] ...,[Pred -> tail]) 
					(make-begin `(,ef* ... ,tail))]
				[(,relop ,conseq ,alt) (select-relop relop conseq alt)]))
    (define (Tail x)
			(match x
				[(begin ,[Effect -> ef*] ... ,[Tail -> tail])
					(make-begin `(,ef* ... ,tail))]
				[(if ,[Pred -> pred] ,[Tail -> conseq] ,[Tail -> alt]) 
					`(if ,pred ,conseq ,alt)]
				[(,loc* ...) `(,loc* ...)]))
    (match x
      [(locals (,local* ...) 
         (ulocals (,ulocal* ...)
           (locate (,home* ...) (frame-conflict ,ct ,[Tail -> tail]))))
       `(locals (,local* ...)
          (ulocals (,ulocal* ... ,new-ulocal* ...)
            (locate (,home* ...)
              (frame-conflict ,ct ,tail))))]
      [(locate (,home* ...) ,tail) `(locate (,home* ...) ,tail)]
      [,x (error who "invalid Body ~s" x)]))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[Body -> body*])] ...) ,[Body -> body])
       `(letrec ([,label* (lambda () ,body*)] ...) ,body)]
      [,x (error who "invalid Program ~s" x)])))


;;--------------------------------------------------------------------------------------------------------------------------------------------------------
;;--------------------------------------------------------------------------------------------------------------------------------------------------------

;;;uncover register conflicts needs to handle mrefs and mset's in different way while updating the conflict table
;;;(set! x (mref base offset)) => will mean that x conflicts with both base and offset and hence we must record these conflicts
;;;(mset! base offset value) => in this we have to record the conflicts of each parameters with the other 

(define-who uncover-register-conflict
  (define add-conflicts!
	    (lambda (ct lhs live*)
	      (define add-conflict!
	        (lambda (var1 var2)
	          (let ([a (assq var1 ct)])
	            (set-cdr! a (if (eq? var1 var2) (cdr a)  (set-cons var2 (cdr a)))))))
	      (when (uvar? lhs)
	        (for-each
	          (lambda (live) (add-conflict! lhs live))
	          live*))
	      (for-each
	        (lambda (live) (when (and (uvar? live) (not (frame-var? lhs))) (add-conflict! live lhs)))
	        live*)))
  (define Triv (lambda (x) (if (or (uvar? x) (register? x)) `(,x) '())))
  (define Effect*
    (lambda (x live* ct)
      (match x
        [() live*]
        [(,ef* ... ,ef) (Effect* ef* (Effect ef live* ct) ct)]
        [,x (error who "invalid Effect* list ~s" x)])))
  (define Effect
    (lambda (x live* ct)
      (match x
        [(nop) live*]
        [(if ,test ,[c-live*] ,[a-live*]) 
				(Pred test  c-live* a-live* ct)]
				[(mset! ,[Triv -> base] ,[Triv -> offset] ,[Triv -> value])
					(begin
						(if (not (null? base)) (add-conflicts! ct (car base) (union offset value live*)))
						(if (not (null? offset)) (add-conflicts! ct (car offset) (union base value live*)))
						(if (not (null? value)) (add-conflicts! ct (car value) (union base offset live*)))
						(union base offset value live*))]
        [(begin ,ef* ... ,[live*]) (Effect* ef* live* ct)]
				[(set! ,lhs (mref ,[Triv -> x-live*] ,[Triv -> y-live*]))
							          (begin
											(add-conflicts! ct lhs (union x-live* y-live* live*))
											(union x-live* y-live* (remq lhs live*)))]
        [(set! ,lhs (,binop ,[Triv -> x-live*] ,[Triv -> y-live*]))
         	(begin
							(add-conflicts! ct lhs live*)
							(union x-live* y-live* (remq lhs live*)))]
        [(set! ,lhs ,var)
         	(begin
						(add-conflicts! ct lhs live*)
						(if (or (uvar? var) (register? var)) (set-cons var (remq lhs live*)) (remq lhs live*)))]
       ; ignoring incoming live*, since it should not contain anything
       ; but caller-save registers, which the call kills (see note in
       ; the assignment description)
        [(return-point ,rplab ,tail) (Tail tail ct)] ;;;Return the list of variables live in the tail ignoring the variables that were live before the call was made
        [,x (error who "invalid Effect list ~s" x)])))
  (define Pred
    (lambda (x t-live* f-live* ct)
      (match x
        [(true) t-live* ]
        [(false) f-live* ]
        [(if ,test ,[c-live*] ,[a-live*]) (union t-live* f-live* (Pred test c-live* a-live* ct))]
        [(begin ,ef* ... ,[live*]) (Effect* ef* live* ct)]
        [(,predop ,[Triv -> x-live*] ,[Triv -> y-live*])
         (union x-live* y-live* t-live* f-live*)]
        [,x (error who "invalid Pred ~s" x)])))
  (define Tail
    (lambda (x ct)
      (match x
        [(begin ,ef* ... ,[live*]) (Effect* ef* live* ct)]
        [(if ,test ,[c-live*] ,[a-live*]) (Pred test c-live* a-live* ct)]
        [(,[Triv -> target-live*] ,[Triv -> live*] ...) `(,target-live* ... ,live* ... ...)]
        [,x (error who "invalid Tail ~s" x)])))
  (define Body
    (lambda (x)
      (match x
        [(locals (,local* ...) 
           (ulocals (,ulocal* ...)
             (locate (,home* ...)
               (frame-conflict ,fv-ct ,tail))))
         (let ([ct (map (lambda (x) (cons x '())) `(,local* ... ,ulocal* ...))])
           (let ([uvar* (filter uvar? (Tail tail ct))])
             (unless (null? uvar*)
               (error who "found variables ~s live on entry" uvar*)))
           `(locals (,local* ...) 
              (ulocals (,ulocal* ...)
                (locate (,home* ...)
                  (frame-conflict ,fv-ct
                    (register-conflict ,ct ,tail))))))]
        [(locate (,home* ...) ,tail) `(locate (,home* ...) ,tail)]
        [,x (error who "invalid Body ~s" x)])))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[Body -> body*])] ...) ,[Body -> body])
       `(letrec ([,label* (lambda () ,body*)] ...) ,body)]
      [,x (error who "invalid Program ~s" x)])))


;;--------------------------------------------------------------------------------------------------------------------------------------------------------
;;--------------------------------------------------------------------------------------------------------------------------------------------------------

;;assigns register to the uvars made a chnage documented below

(define-who assign-registers
  (define remove-occurence						;;Removes the occurence of a var from var* and returns the list
			(lambda (var ct)
				(map (lambda (x) 
								(cond
									[(eq? (car x) var) x]
									[else (remq var x)])) ct)))
		(define replace																		;;Replaces the occurences of variables in the conflict-list with the register-homes
			(lambda (allocations ct)
				(cond 
					[(null? allocations) ct]
					[else (replace (cdr allocations) (replace-helper (car allocations) ct))])))
		(define replace-helper
			(lambda (allocation ct)
				(map (lambda (ct-entry)
								(cond
									[(eq? (car allocation) (car ct-entry)) allocation]
									[else (cons (car ct-entry) (replace* (cdr ct-entry) allocation))])) ct)))
		(define replace*
			(lambda (conflicts allocation)
				(cond
					[(null? conflicts) '()]
					[(eq? (car conflicts) (car allocation)) (cons (cadr allocation) (replace* (cdr conflicts) allocation))]
					[else (cons (car conflicts) (replace* (cdr conflicts) allocation))])))			
		(define k (length registers))
	  (define low-degree?
	    (lambda (var ct)
	      (< (length (cdr (assq var ct))) k)))
	(define num-conflicts
		(lambda (var ct)
			(let ((temp (assq var ct)))
				(if (null? temp) 2000 (length (cdr (assq var ct)))))))
	(define pick-min																										;;Picks a node with least number of conflicts like the min function
		(lambda (var degree var* ct)
			(cond
				[(null? var) 'xxx]
				[(null? var*) var]
				[(<= degree (num-conflicts (car var*) ct)) (pick-min var degree (cdr var*) ct)]
				[else (let* ((node (car var*))
										(degree^ (num-conflicts node ct)))
										(pick-min node degree^ (cdr var*) ct))])))
	(define assign-null
		(lambda (ls)
			(if (null? ls) 'xxx (car ls))))
	(define uncover-register-bias
		(lambda (body bias-list)
			(match body
				[(begin ,ef* ...) (Effect* ef* bias-list)])))
	(define Effect*
		(lambda (effect* bias-list)
			(match effect*
				[,x (guard (null? x)) bias-list]
				[(,ef,ef* ...) (Effect* ef* (Effect ef bias-list))])))
	(define Effect
		(lambda (ef bias-list)
			(match ef
				[(set! ,x ,y) (guard (and (uvar? x) (uvar? y)))
				 							(begin
												(set-cdr! (assq x bias-list) (set-cons y (cdr (assq x bias-list))))
												(set-cdr! (assq y bias-list) (set-cons x (cdr (assq y bias-list))))
												bias-list)]
				[(set! ,x ,y) (guard (and (uvar? x) (register? y)))
											  (begin
													(set-cdr! (assq x bias-list) (set-cons y (cdr (assq x bias-list))))
													bias-list)]
				[(set! ,x ,y) (guard (and (register? x) (uvar? y)))
											  (begin
													(set-cdr! (assq y bias-list) (set-cons x (cdr (assq y bias-list))))
													bias-list)]
				[,x bias-list])))
	;;;altered the function here as advised by Andy Keep 
	;;;first I will assign all the variables in spillable list and then on the unspillable list
	(define find-homes
	    (lambda (spillable* unspillable* ct)
	      (cond
					[(and (null? spillable*) (null? unspillable*)) '()]
					[(null? spillable*) (find-homes unspillable* '() ct)]
					[else (let* ((current-var (pick-min (car spillable*) (num-conflicts (car spillable*) ct) (cdr spillable*) ct))
											(new-conflict-table (remove-occurence current-var ct))
											(results (find-homes (remq current-var spillable*) (remq current-var unspillable*) new-conflict-table))
											(updated-ct (replace results ct))
											(conflict-entry (cdr (assq current-var updated-ct)))
									 	  (remaining-registers (difference registers conflict-entry)))
										 (if (null? remaining-registers) 
												results 
												(let ((assign-register (car remaining-registers)))
													(cons (list current-var assign-register) results))))])))
		(define get-replacement
			(lambda (var entry)
						(list var (car (difference registers entry)))))
		(define get-register
			(lambda (ls conflict-entry)
				(cond
					[(null? ls) #f]
					[(and (register? (car ls)) (not (memq (car ls) conflict-entry))) (car ls)]
					[else (get-register (cdr ls) conflict-entry)])))
		(define update-bias-table
			(lambda (uvar reg bt)
				(map (lambda (entry) 
								(let ([tail (cdr entry)])
									(if (memq uvar tail)
											(begin
												(set-cdr! entry (cons reg (remq uvar entry)))
												entry)
												entry))) bt)))
		(define assign-homes
			(lambda (var* bt ct)
				(cond
					[(null? bt) '() ]
					[(null? var*) '()]
					[else (let* ([current-var (car var*)]
											 [bt-entry (assq current-var bt)]
											 [friend-list (cdr bt-entry)]
											 [conflict-entry (cdr (assq current-var ct))])
													(if (null? friend-list) 
															(assign-homes (cdr var*) bt ct)
															(let ([friend-register (get-register friend-list conflict-entry)])
																(cond
																	[(eq? friend-register #f) (assign-homes (cdr var*) bt ct)]
																	[else (let ([updated-ct (replace (list (list current-var friend-register)) ct)]
																							[updated-bt (update-bias-table current-var friend-register bt)])
																							(cons (list current-var friend-register) (assign-homes (cdr var*) updated-bt updated-ct)))]))))])))
  (define Body
    (lambda (x)
      (match x
        [(locals (,local* ...) 
           (ulocals (,ulocal* ...)
             (locate (,frame-home* ...)
               (frame-conflict ,fv-ct
                 (register-conflict ,ct ,tail)))))
         ;; putting local* before ulocal* allows find-homes to choose the
         ;; first element of the list when all variables are high degree and
         ;; be guaranteed a spillable variable if one is left.  if find-homes
         ;; wants to be more clever about choosing a high-degree victim, it
         ;; will have to be told which variables are spillable.
         (let* ([uvar* (append local* ulocal*)]
							  [bias-list (move-bias tail register? uvar*)])
           (let* ( [biased-home* (assign-homes uvar* bias-list ct)]
									 [homes (if (null? biased-home*) '() (map car biased-home*))]
									 [new-ct (if (null? biased-home*) ct (replace biased-home* ct))]
									 [home* (find-homes (difference local* homes) (difference ulocal* homes) new-ct)])
             (let ([spill* (difference uvar* (union (map car home*) homes))])
               (cond
                 [(null? spill*) `(locate (,frame-home* ... ,biased-home* ... ,home* ...) ,tail)]
                 [(null? (intersection ulocal* spill*))
                  (let ([local* (difference local* spill*)])
                    `(locals (,local* ...)
                       (ulocals (,ulocal* ...)
                         (spills (,spill* ...)
                           (locate (,frame-home* ...)
                             (frame-conflict ,fv-ct ,tail))))))]
                 [else 
                  (error who "unspillable variables (~s) have been spilled"
                    (difference spill* local*))]))))]
        [(locate (,home* ...) ,tail) `(locate (,home* ...) ,tail)]
        [,x (error who "invalid Body ~s" x)])))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[Body -> body*])] ...) ,[Body -> body])
       `(letrec ([,label* (lambda () ,body*)] ...) ,body)]
      [,x (error who "invalid Program ~s" x)])))


;;--------------------------------------------------------------------------------------------------------------------------------------------------------
;;--------------------------------------------------------------------------------------------------------------------------------------------------------

(define-who everybody-home?
  (define all-home?
    (lambda (body)
      (match body
        [(locals (,local* ...)
           (ulocals (,ulocal* ...)
             (spills (,spill* ...)
               (locate (,home* ...)
                 (frame-conflict ,ct ,tail))))) #f]
        [(locate (,home* ...) ,tail) #t]
        [,x (error who "invalid Body ~s" x)])))
  (lambda (x)
    (match x
       [(letrec ([,label* (lambda () ,body*)] ...) ,body)
        (andmap all-home? `(,body ,body* ...))]
       [,x (error who "invalid Program ~s" x)])))


;;--------------------------------------------------------------------------------------------------------------------------------------------------------
;;--------------------------------------------------------------------------------------------------------------------------------------------------------

;;;pass changed since last assignment

(define-who assign-frame
		(define replace																		;;Replaces the occurences of variables in the conflict-list with the register-homes
			(lambda (allocations ct)
				(cond 
					[(null? allocations) ct]
					[else (replace (cdr allocations) (replace-helper (car allocations) ct))])))
		(define replace-helper
			(lambda (allocation ct)
				(map (lambda (ct-entry)
								(cond
									[(eq? (car allocation) (car ct-entry)) allocation]
									[else (cons (car ct-entry) (replace* (cdr ct-entry) allocation))])) ct)))
		(define replace*
			(lambda (conflicts allocation)
				(cond
					[(null? conflicts) '()]
					[(eq? (car conflicts) (car allocation)) (cons (cadr allocation) (replace* (cdr conflicts) allocation))]
					[else (cons (car conflicts) (replace* (cdr conflicts) allocation))])))			
		(define update-bias-table
			(lambda (uvar reg bt)
				(map (lambda (entry) 
								(let ([tail (cdr entry)])
									(if (memq uvar tail)
											(begin
												(set-cdr! entry (cons reg (remq uvar entry)))
												entry)
												entry))) bt)))
		(define update-conflict-table
			(lambda (uvar reg ct)
				(map (lambda (entry) 
								(let ([tail (cdr entry)])
									(if (memq uvar tail)
											(begin
												(set-cdr! entry (cons reg (remq uvar entry)))
												entry)
												entry))) ct)))
		(define get-frame
			(lambda (ls conflict-entry)
				(cond
					[(null? ls) #f]
					[(and (frame-var? (car ls)) (not (memq (car ls) conflict-entry))) (car ls)]
					[else (get-frame (cdr ls) conflict-entry)])))
	(define assign-homes
		(lambda (var* bt ct)
			(cond
				[(null? bt) '() ]
				[(null? var*) '()]
				[else (let* ([current-var (car var*)]
										 [bt-entry (assq current-var bt)]
										 [friend-list (cdr bt-entry)]
										 [conflict-entry (cdr (assq current-var ct))])
												(if (null? friend-list) 
														(assign-homes (cdr var*) bt ct)
														(let ([friend-frame (get-frame friend-list conflict-entry)])
															(cond
																[(eq? friend-frame #f) (assign-homes (cdr var*) bt ct)]
																[else (let ([updated-ct (update-conflict-table current-var friend-frame ct)]
																						[updated-bt (update-bias-table current-var friend-frame bt)])
																						(cons (list current-var friend-frame) (assign-homes (cdr var*) updated-bt updated-ct)))]))))])))
  (define find-used
    (lambda (conflict* home*)
      (cond
        [(null? conflict*) '()]
        [(frame-var? (car conflict*)) 
         (set-cons (car conflict*) (find-used (cdr conflict*) home*))]
        [(assq (car conflict*) home*) => 
         (lambda (x) (set-cons (cadr x) (find-used (cdr conflict*) home*)))]
        [else (find-used (cdr conflict*) home*)])))
  (define find-frame-var
    (lambda (used*)
      (let f ([index 0])
        (let ([fv (index->frame-var index)])
          (if (memq fv used*) (f (+ index 1)) fv)))))
  (define find-homes
    (lambda (var* ct home*)
      (if (null? var*)
          home*
          (let ([var (car var*)] [var* (cdr var*)])
            (let ([conflict* (cdr (assq var ct))])
              (let ([home (find-frame-var (find-used conflict* home*))])
                (find-homes var* ct `((,var ,home) . ,home*))))))))
  (define Body
    (lambda (body)
      (match body
        [(locals (,local* ...)
           (ulocals (,ulocal* ...)
             (spills (,spill* ...)
               (locate (,home* ...)
                 (frame-conflict ,ct ,tail)))))
         (let* (				[uvar* (union ulocal* local* spill*)]
																[bias-list (move-bias tail frame-var? uvar*)]
																[biased-home* (assign-homes spill* bias-list ct)]
																[home (if (null? biased-home*) '() (map car biased-home*))]
															  [new-ct (if (null? biased-home*) ct (replace biased-home* ct))]
															  [home* (find-homes (difference spill* home) ct home*)])
           `(locals (,local* ...)
              (ulocals (,ulocal* ...)
                (locate (,biased-home* ... ,home* ...)
                  (frame-conflict ,ct ,tail)))))]
        [(locate (,home* ...) ,body) `(locate (,home* ...) ,body)]
        [,body (error who "invalid Body ~s" body)])))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[Body -> body*])] ...) ,[Body -> body])
       `(letrec ([,label* (lambda () ,body*)] ...) ,body)]
      [,x (error who "invalid Program ~s" x)])))


;;--------------------------------------------------------------------------------------------------------------------------------------------------------
;;--------------------------------------------------------------------------------------------------------------------------------------------------------

;;; mref and mset! are allowed to go as they are, as they are not affected by what this pass does

(define-who discard-call-live
  (define Tail
    (lambda (tail)
      (match tail
        [(begin ,[Effect -> ef*] ... ,[Tail -> tail]) `(begin ,ef* ... ,tail)]
        [(if ,[Pred -> test] ,[Tail -> conseq] ,[Tail -> altern]) `(if ,test ,conseq ,altern)]
        [(,t ,live* ...) `(,t)]
        [,tail (error who "invalid Tail ~s" tail)])))
  (define Pred
    (lambda (pr)
      (match pr
        [(true) '(true)]
        [(false) '(false)]
        [(if ,[Pred -> test] ,[Pred -> conseq] ,[Pred -> altern]) `(if ,test ,conseq ,altern)]
        [(begin ,[Effect -> ef*] ... ,[Pred -> pr]) `(begin ,ef* ... ,pr)]
        [(,predop ,x ,y) `(,predop ,x ,y)]
        [,pr (error who "invalid Pred ~s" pr)])))
  (define Effect
    (lambda (ef)
      (match ef
        [(nop) '(nop)]
        [(set! ,x ,rhs) `(set! ,x ,rhs)]
				[(mset! ,base ,offset ,value) ef]
        [(begin ,[Effect -> ef*] ... ,[Effect -> ef]) `(begin ,ef* ... ,ef)]
        [(if ,[Pred -> test] ,[Effect -> conseq] ,[Effect -> altern]) `(if ,test ,conseq ,altern)]
        [(return-point ,rplab ,[Tail -> tail]) `(return-point ,rplab ,tail)]
        [,ef (error who "invalid Effect ~s" ef)])))
  (define Body
    (lambda (bd)
      (match bd
        [(locate ([,uvar* ,loc*] ...) ,[Tail -> tail])
         `(locate ([,uvar* ,loc*] ...) ,tail)]
        [,bd (error who "invalid Body ~s" bd)])))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[Body -> bd*])] ...) ,[Body -> bd])
       `(letrec ([,label* (lambda () ,bd*)] ...) ,bd)]
      [,x (error who "invalid Program ~s" x)])))


(define-who old
  (define combinate
    (lambda (first . rem)
      (if (null? rem)
          first
          (let ((remain (apply combinate rem)))
            (lambda (x)
              (remain (first x)))))))

  (define iter
    (lambda (x)
      (let ((before (combinate
                     finalize-frame-locations
                     select-instructions
                     uncover-register-conflict
                     assign-registers
                     )))
        (let ((tmp (before x)))
          (if (everybody-home? tmp)
              tmp
              (iter (assign-frame tmp)))))))

  (lambda (x)
    ((combinate
     uncover-frame-conflict
     pre-assign-frame
     assign-new-frame
     iter
     discard-call-live) x)))

#|
uncover-frame-conflict
pre-assign-frame
assign-new-frame
(iterate
 finalize-frame-locations
 select-instructions
 uncover-register-conflict
 assign-registers
 (break when everybody-home?)
 assign-frame)
discard-call-live
|#

#!eof

(define input
  '(letrec ()
     (locals
      (rp.1)
      (new-frames () (begin (set! rp.1 r15) (+ 8 16))))))



(uncover-frame-conflict input)


(define output ((combinate
 uncover-frame-conflict
 pre-assign-frame
 assign-new-frame
 finalize-frame-locations
 select-instructions
 uncover-register-conflict
 assign-registers)
 input))


((combinate
  uncover-frame-conflict
  pre-assign-frame
  assign-new-frame
  iter
;  discard-call-live
  )
 input)

(discard-call-live
 '(letrec ()
    (locate ((rp.1 rax)) (begin (set! rp.1 r15) (+ 8 16)))))

(everybody-home? output)

(iter
 '(letrec ()
  (locals
   (rp.1)
   (ulocals
    ()
    (locate
     ()
     (frame-conflict
      ((rp.1))
      (begin (set! rp.1 r15) (+ 8 16))))))))
(old input)
