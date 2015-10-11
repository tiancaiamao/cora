
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Two Passes: uncover-frame-conflict and uncover-register-conflict
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define uncover-conflict-helper
  (lambda (x ct rec? with?)
    (define spill* '())
    (define call-live* '())
    (define add-conflicts
      (lambda (x ls ct)
        (letrec ([add-conf1
                  (lambda (x ls ct)
                    (if (rec? x)
                        (let ([slot (assq x ct)])
                          (if slot
                              (set-cdr! slot (union (cdr slot)
                                                    (filter with? ls)))))))])
          (add-conf1 x ls ct)
          (if (with? x)
              (for-each (lambda (y) (add-conf1 y (list x) ct)) ls)))))
    (define uncover
      (lambda (seq live* f-live*)
        (match seq
          [((begin ,s ...)) (uncover `(,s ...) live* f-live*)]
          [((if ,test ,conseq ,alt))
           (let ([lc* (uncover `(,conseq) live* f-live*)]
                 [la* (uncover `(,alt) live* f-live*)])
             (uncover `(,test) lc* la*))]
          [((set! ,x (,binop/mref ,y ,z)))
           (add-conflicts x (difference live* `(,x)) ct)
           (union (difference live* `(,x))
                  (uncover `(,y) live* f-live*)
                  (uncover `(,z) live* f-live*))]
          [((set! ,x ,y))
           (let ([ly* (uncover `(,y) live* f-live*)])
             (add-conflicts x (difference (difference live* ly*) `(,x)) ct)
             (union (difference live* `(,x)) ly*))]
          [((mset! ,base ,off ,val))
           (union live*
                  (uncover `(,base) live* f-live*)
                  (uncover `(,off) live* f-live*)
                  (uncover `(,val) live* f-live*))]
          [((return-point ,label ,tail))
           (set! spill* (union spill* (filter uvar? live*)))
           (set! call-live*
                 (union call-live*
                        (filter (lambda (x)
                                  (or (uvar? x) (frame-var? x)))
                                live*)))
           (uncover `(,tail) live* f-live*)]
          [(,h ,t ,t* ...)
           (let ([lt* (uncover `(,t ,t* ...) live* f-live*)])
             (uncover `(,h) lt* f-live*))]
          [((mref ,base ,off))
           (union live*
                  (uncover `(,base) live* f-live*)
                  (uncover `(,off) live* f-live*))]
          [((true)) live*]
          [((false)) f-live*]
          [((,relop ,x ,y)) (guard (relop? relop))
           (union live* f-live*
                  (uncover `(,x) live* f-live*)
                  (uncover `(,y) live* f-live*))]
          [((,target ,c-live* ...))
           (union live* (uncover `(,target) live* f-live*) c-live*)]
          [(,x) (guard (with? x)) `(,x)]
          [,other '()])))
    (let ([x (uncover x '() '())])
      (values x spill* call-live*))))



;;;;;;;; uncover-frame-conflict and uncover-register-conflict ;;;;;;;;;

; forward-locations is used to process the "tail" before we do
; uncover-conflicts if *enable-forward-locations* is set to #t.

(define uncover-frame-conflict
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[body*])] ...) ,[body])
       `(letrec ([,label* (lambda () ,body*)] ...) ,body)]
      [(locals (,uvar* ...)
         (new-frames (,frame** ...) ,tail))
       (let ([ct (map (lambda (x) (cons x '())) uvar*)]
             [tail^ (if *enable-forward-locations*
                        (forward-locations tail '())
                        tail)])
         (letv* ([(live* spill* call-live*)
                  (uncover-conflict-helper
                   tail^
                   ct uvar? (lambda (x) (or (uvar? x) (frame-var? x))))])
           `(locals (,@(difference uvar* spill*))
              (new-frames (,frame** ...)
                 (spills ,spill*
                     (frame-conflict ,ct
                         (call-live ,call-live* 
                             ,tail^)))))))])))



(define uncover-register-conflict
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[body*])] ...) ,[body])
       `(letrec ([,label* (lambda () ,body*)] ...) ,body)]
      [(locals (,local* ...)
         (ulocals (,ulocal* ...)
                  (locate (,home* ...)
                    (frame-conflict ,fv-ct ,tail))))
       (let ([ct (map (lambda (x) (cons x '())) (union local* ulocal*))]
             [tail^ (if *enable-forward-locations*
                        (forward-locations tail ulocal*)
                        tail)])
         (let-values ([(live* spill* call-live*)
                       (uncover-conflict-helper
                        tail^
                        ct uvar? (lambda (x) (or (uvar? x) (register? x))))])
           `(locals (,local* ...)
              (ulocals (,ulocal* ...)
                       (locate (,home* ...)
                         (frame-conflict ,fv-ct
                                         (register-conflict ,ct ,tail^)))))))]
      [(locate (,home* ...) ,tail) `(locate (,home* ...) ,tail)])))





;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Pass: pre-assign-frame
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define-who pre-assign-frame
  (define homes-of
    (lambda (vars* home*)
      (let ([m1 (map (lambda (x)
                       (if (frame-var? x) (cons x x) (assq x home*)))
                     vars*)])
        (map cdr (filter (lambda (x) x) m1)))))
  (define find-avail
    (lambda (used)
      (let loop ([idx 0])
        (let ((fv* (index->frame-var idx)))
          (cond
           [(memq fv* used) (loop (add1 idx))]
           [else fv*])))))
  (define find-homes
    (lambda (spill* ct home*)
      (let loop ([spill* spill*] [home* home*])
        (cond
         [(null? spill*) (reverse (alist->list home*))]
         [else
          (let ([avail (find-avail
                        (homes-of (get-conflicts (car spill*) ct) home*))])
            (loop (cdr spill*)
                  (cons (cons (car spill*) avail) home*)))]))))
  (define Body
    (lambda (body)
      (match body
        [(locals (,local* ...)
           (new-frames (,nfv** ...)
             (spills (,spill* ...)
               (frame-conflict ,ct
                 (call-live (,call-live* ...) ,tail)))))
         (let ([home* (find-homes spill* ct '())])
           `(locals (,local* ...)
              (new-frames (,nfv** ...)
                          (locate (,home* ...)
                            (frame-conflict ,ct
                              (call-live (,call-live* ...) ,tail))))))]
        [,body (error who "invalid Body ~s" body)])))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[Body -> body*])] ...) ,[Body -> body])
       `(letrec ([,label* (lambda () ,body*)] ...) ,body)]
      [,x (error who "invalid Program ~s" x)])))




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Pass: assign-new-frame
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define-who assign-new-frame
  (define frame-size
    (lambda (call-live* home*)
      (let ((home* (list->alist home*)))
        (let loop ([rest call-live*] [max -1])
          (cond
           [(null? rest) (add1 max)]
           [else
            (let ([idx (frame-var->index (cdr (assq (car rest) home*)))])
              (cond
               [(> idx max) (loop (cdr rest) idx)]
               [else (loop (cdr rest) max)]))])))))
  (define do-assign
    (lambda (fs)
      (lambda (nfv*)
        (let loop ([rest nfv*] [idx fs] [assigned '()])
          (cond
           [(null? rest) assigned]
           [else (loop (cdr rest) (add1 idx)
                       (cons `(,(car rest) ,(index->frame-var idx)) assigned))])))))
  (define assign
    (lambda (fs)
      (lambda (x)
        (match x
          [(if ,[test] ,[conseq] ,[alt])
           `(if ,test ,conseq ,alt)]
          [(begin ,[e*] ... ,[tail])
           `(begin ,e* ... ,tail)]
          [(return-point ,label ,tail)
           (let ([bn (fxsll fs align-shift)])
             `(begin (set! ,frame-pointer-register (+ ,frame-pointer-register ,bn))
                     (return-point ,label ,tail)
                     (set! ,frame-pointer-register (- ,frame-pointer-register ,bn))))]
          [,x x]))))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[body*])] ...) ,[body])
       `(letrec ([,label* (lambda () ,body*)] ...) ,body)]
      [(locals (,local* ...)
         (new-frames (,nfv** ...)
            (locate (,home* ...)
              (frame-conflict ,ct
                (call-live (,call-live* ...) ,tail)))))
         (let ([fs (frame-size call-live* home*)])
           `(locals (,(difference local* `(,nfv** ... ...)) ...)
              (ulocals ()
                (locate (,home* ... ,(map (do-assign fs) nfv**) ... ...)
                  (frame-conflict ,ct ,((assign fs) tail))))))]
      [,x (error who "invalid Program ~s" x)])))




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Pass: assign-frame
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define-who assign-frame
  (define homes-of
    (lambda (vars* home*)
      (let ([m1 (map (lambda (x)
                       (if (frame-var? x) (cons x x) (assq x home*)))
                     vars*)])
        (map cdr (filter (lambda (x) x) m1)))))

  (define find-avail
    (lambda (used)
      (let loop ([idx 0])
        (let ((fv* (index->frame-var idx)))
          (cond
           [(memq fv* used) (loop (add1 idx))]
           [else fv*])))))

  (define find-homes
    (lambda (spill* ct home*)
      (let loop ([spill* spill*] [home* home*])
        (cond
         [(null? spill*) (reverse (alist->list home*))]
         [else
          (let ([avail (find-avail
                        (homes-of (get-conflicts (car spill*) ct) home*))])
            (loop (cdr spill*)
                  (cons (cons (car spill*) avail) home*)))]))))
  (define Body
    (lambda (body)
      (match body
        [(locals (,local* ...)
           (ulocals (,ulocal* ...)
                    (spills (,spill* ...)
                            (locate (,home* ...)
                              (frame-conflict ,ct ,tail)))))
         (let ([home* (find-homes spill* ct (reverse (list->alist home*)))])
           `(locals (,local* ...)
              (ulocals (,ulocal* ...)
                       (locate ,home*
                         (frame-conflict ,ct ,tail)))))]
        [(locate (,home* ...) ,body) `(locate (,home* ...) ,body)]
        [,body (error who "invalid Body ~s" body)])))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda () ,[Body -> body*])] ...) ,[Body -> body])
       `(letrec ([,label* (lambda () ,body*)] ...) ,body)]
      [,x (error who "invalid Program ~s" x)])))




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Pass: assign-registers
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define assign-registers
  (lambda (x)
    (define homes-of
      (lambda (vars* homes*)
        (let ([m1 (map (lambda (x)
                         (if (register? x) (cons x x) (assq x homes*)))
                       vars*)])
          (map cdr (filter (lambda (x) x) m1)))))
    (define find-homes
      (lambda (ct regs)
        (let loop ([ct ct] [homes* '()])
          (cond
           [(null? ct) (reverse (alist->list homes*))]
           [else
            (let ([avails (difference regs
                            (homes-of (get-conflicts (caar ct) ct) homes*))])
              (cond
               [(null? avails) (loop (cdr ct) homes*)]
               [else (loop (cdr ct)
                           (cons (cons (caar ct) (car avails)) homes*))]))]))))
    (define sort-conflict-graph
      (lambda (ct ulocal*)
        (let ([ut (map (lambda (x) (assq x ct)) ulocal*)])
          (append ut (let loop ([ct (difference ct ut)] [out '()])
                       (cond
                        [(null? ct) out]
                        [else
                         (let ([x1 (find-min length ct)])
                           (loop (ct-remove-node (car x1) ct)
                                 (cons x1 out)))]))))))
    (match x
      [(letrec ([,label* (lambda () ,[body*])] ...) ,[body])
       `(letrec ([,label* (lambda () ,body*)] ...) ,body)]
      [(locals (,local* ...)
         (ulocals (,ulocal* ...)
                  (locate (,frame-home* ...)
                    (frame-conflict ,fv-ct
                                    (register-conflict ,ct ,tail)))))
       (let ([uvar* (append local* ulocal*)])
         (let ([home* (find-homes (sort-conflict-graph ct ulocal*) registers)])
           (let ([spill* (difference uvar* (map car home*))])
             (cond
              [(null? spill*) `(locate (,frame-home* ... ,home* ...) ,tail)]
              [(null? (intersection ulocal* spill*))
               (let ([local* (difference local* spill*)])
                 `(locals (,local* ...)
                    (ulocals (,ulocal* ...)
                             (spills (,spill* ...)
                                     (locate (,frame-home* ...)
                                       (frame-conflict ,fv-ct ,tail))))))]
              [else
               (error 'assign-registers
                      "unspillable variables (~s) have been spilled"
                      (intersection ulocal* spill*))]))))]
      [(locate (,home* ...) ,tail) `(locate (,home* ...) ,tail)])))



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




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Pass: select-instructions
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; This pass is changed to context-passing style in order to handle (mref
; ...) that are embedded in operator/function calls nicely. It is now a
; little weird because the argument "ct" can be either a LHS who is
; expecting the RHS (e.g. x.1) or a context type (e.g. 'mref). Most of the
; time it is #f which means "don't care".

; The output of select could be feed back into itself (via reselect) again
; because of the iterative way it handles constraints. For example (set!
; x.1 (* fv0 4000000000000)). First we load 4000000000000 into a uvar, but
; then we must recheck (set! x.1 (* fv0 u.1)) to satisfy other constraints.

; This pass is more compositional than before. For example, the case (set!
; x (binop y z)) no longer exists. It is decomposed into two subparts:
; (set! x w) and (binop y z) and they are no longer tied to each other. The
; benefit is that now (set! x w) can be combined with (mref base off) to
; handle cases like (set! x (mref y z)). More complex ways of composition
; are possible, like (set! x (+ fv0 (mref s t))).

(define select-instructions
  (lambda (exp)
    (define int64/label?
      (lambda (x)
        (or (and (int64? x) (not (int32? x)))
            (label? x))))
    (define ur?
      (lambda (x)
        (or (register? x) (uvar? x))))
    (define mem?
      (lambda (x)
        (or (frame-var? x) (mref? x))))
    (define commutative?
      (lambda (op)
        (or (memq op '(+ * logor logand))
            (relop? op))))
    (define flip-op
      (lambda (op)
        (cond
         [(relop? op)
          (cdr (assq op '((= . =) (<= . >=) (>= . <=) (< . >) (> . <))))]
         [(binop? op) op])))
    (define temp* #f)
    (define new-u
      (lambda ()
        (let ([u (unique-name 'u)])
          (set-box! temp* (cons u (unbox temp*)))
          u)))
    (define select1
      (lambda (exp)
        (set! temp* (box '()))
        (let ([exp* (make-begin (select `(,exp) #f id))])
          (values (unbox temp*) exp*))))
    (define reselect
      (lambda (exp)
        (select exp #f id)))
    (define select
      (lambda (exp ct C)
        (match exp
          [(letrec ([,label* (lambda () ,[body*])] ...) ,[body])
           `(letrec ([,label* (lambda () ,body*)] ...) ,body)]
          [(locals (,local* ...)
             (ulocals (,ulocal* ...)
                (locate (,home* ...)
                   (frame-conflict ,ct ,[select1 -> new* tail]))))
           `(locals (,local* ...)
              (ulocals (,ulocal* ... ,new* ...)
                (locate (,home* ...)
                   (frame-conflict ,ct ,tail))))]
          [(locate (,home* ...) ,tail) `(locate (,home* ...) ,tail)]
          [((begin ,e* ...))
           (select `(,e* ...) #f C)]
          [(,h ,t ,t* ...)
           (select `(,h) #f
             (lambda (vh*) `(,@vh* ,@(select `(,t ,t* ...) #f C))))]
          [((if ,test ,conseq ,alt))
           (let ([ec (make-begin (select `(,conseq) #f id))]
                 [ea (make-begin (select `(,alt) #f id))])
             (select `(,test) #f
               (lambda (vt*) (C `((if ,@vt* ,ec ,ea))))))]
          [((return-point ,label ,tail))
           (C `((return-point ,label
                   ,(make-begin (reselect `(,tail))))))]
          [((set! ,x ,y))
           (C (select `(,x) #f
                (lambda (vx*)
                  (select `(,y) x
                    (lambda (vy*)
                      (let ([x (car vx*)] [y (car vy*)])
                        (cond
                         [(and (mem? x)
                               (or (mem? y) (int64/label? y)))
                          (let ((u (new-u)))
                            `((set! ,u ,y) (set! ,x ,u)))]
                         [else `((set! ,x ,y))])))))))]
          [((mref ,base ,off))
           (select `(,base) 'mref
             (lambda (vb*)
               (select `(,off) 'mref
                 (lambda (vo*)
                   (cond
                    [(and (number? (car vb*))
                          (number? (car vo*)))
                     (let ((u (new-u)))
                       `((set! ,u ,@vb*)
                         ,@(C `((mref ,u ,@vo*)))))]
                    [else (C `((mref ,@vb* ,@vo*)))])))))]
          [((mset! ,base ,off ,val))
           (select `(,base) 'mref
             (lambda (vb*)
               (select `(,off) 'mref
                 (lambda (vo*)
                   (select `(,val) `(mref ,@vb* ,@vo*)
                     (lambda (vv*)
                       (cond
                        [(mem? (car vv*))
                         (let ([u (new-u)])
                           `((set! ,u ,@vv*)
                             ,@(C `((mset! ,@vb* ,@vo* ,u)))))]
                        [else (C `((mset! ,@vb* ,@vo* ,@vv*)))])))))))]
          [((,binop ,x ,y)) (guard (binop? binop))
           (select `(,x) #f
             (lambda (vx*)
               (select `(,y) #f
                 (lambda (vy*)
                   (let ([x (car vx*)] [y (car vy*)])
                     (cond
                      [(int64/label? x)
                       (let ([u (new-u)])
                         (reselect `((set! ,u ,x) ,@(C `((,binop ,u ,y))))))]
                      [(int64/label? y)
                       (let ([u (new-u)])
                         (reselect `((set! ,u ,y) ,@(C `((,binop ,x ,u))))))]
                      [(equal? ct x)
                       (cond
                        [(and (eq? binop '*) (mem? x))
                         (let ([u (new-u)])
                           (reselect `((set! ,u ,x)
                                       (set! ,u (,binop ,u ,y))
                                       ,@(C `(,u)))))]
                        [(and (mem? x) (mem? y))
                         (let ([u (new-u)])
                           (reselect `((set! ,u ,y)
                                       ,@(C `((,binop ,x ,u))))))]
                        [else (C `((,binop ,x ,y)))])]
                      [(and (equal? ct y) (commutative? binop))
                       (reselect (C `((,binop ,y ,x))))]
                      [else
                       (let ([u (new-u)])
                         (reselect `((set! ,u ,x)
                                     (set! ,u (,binop ,u ,y))
                                     ,@(C `(,u)))))]))))))]
          [((,relop ,x ,y)) (guard (relop? relop))
           (select `(,x) #f
             (lambda (vx*)
               (select `(,y) #f
                 (lambda (vy*)
                   (let ([x (car vx*)] [y (car vy*)])
                     (cond
                      [(and (not (ur? x)) (ur? y))
                       (reselect (C `((,(flip-op relop) ,y ,x))))]
                      [(int64/label? y)
                       (let ([u (new-u)])
                         (reselect `((set! ,u ,y) ,@(C `((,relop ,x ,u))))))]
                      [(number? x)
                       (let ([u (new-u)])
                         (reselect `((set! ,u ,x) ,@(C `((,relop ,u ,y))))))]
                      [(and (mem? x) (mem? y))
                       (let ((u (new-u)))
                         (reselect `((set! ,u ,x) ,@(C `((,relop ,u ,y))))))]
                      [else (C `((,relop ,x ,y)))]))))))]
          [(,exp)
           (cond
            [(or (and (eq? ct 'mref)
                      (or (mem? exp) (label? exp)))
                 (and (mem? ct)
                      (or (mem? exp) (int64/label? exp))))
             (let ((u (new-u)))
               `((set! ,u ,exp) ,@(C `(,u))))]
            [else (C `(,exp))])])))
    (select exp #f id)))




;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Combined Passes: finalize-frame-locations and finalize-locations
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; mset! and mref are passed along.

; helper for both finalize-frame-locations and finalize-locations
(define finalize
  (lambda (x env final?)
    (define lookup
      (lambda (v env)
        (let ((slot (assq v env)))
          (if slot (cdr slot) v))))
    (match x
      [(letrec ([,label* (lambda () , [bd*])] ...) , [bd])
       `(letrec ([,label* (lambda () ,bd*)] ...) ,bd)]
      [(locals (,local* ...)
         (ulocals (,ulocal* ...)
                  (locate ([,uvar* ,loc*] ...)
                    (frame-conflict ,ct ,tail))))
       `(locals (,local* ...)
          (ulocals (,ulocal* ...)
            (locate ([,uvar* ,loc*] ...)
              (frame-conflict ,ct
                 ,(finalize tail `((,uvar* . ,loc*) ...) final?)))))]
      [(locate ([,uvar* ,loc*] ...) ,tail)
       (if final?
           (finalize tail `((,uvar* . ,loc*) ...) final?)
           `(locate ([,uvar* ,loc*] ...) ,tail))]
      [(begin , [ef*] ... , [tail])
       `(begin ,ef* ... ,tail)]
      [(if , [test] , [conseq] , [altern])
       `(if ,test ,conseq ,altern)]
      [(return-point ,label ,[tail])
       `(return-point ,label ,tail)]
      [(set! ,[x] (,binop ,[y] ,[z]))
       `(set! ,x (,binop ,y ,z))]
      [(set! ,[x] ,[y])
       (if (eq? x y) `(nop) `(set! ,x ,y))]
      [(mset! ,[base] ,[off] ,[val])
       `(mset! ,base ,off ,val)]
      [(mref ,[base] ,[off])
       `(mref ,base ,off)]
      [(,op ,[x] ,[y]) (guard (or (binop? op) (relop? op)))
       `(,op ,x ,y)]
      [(,[triv] ,[live*] ...)
       (if final? `(,triv) `(,triv ,live* ...))]
      [,v (guard (uvar? v)) (lookup v env)]
      [,x x])))

(define finalize-frame-locations (lambda (x) (finalize x '() #f)))
(define finalize-locations       (lambda (x) (finalize x '() #t)))
