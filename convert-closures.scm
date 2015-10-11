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

;; Here are the passes which does closure "optimization". Actually they are
;; not optimization. They just generates fast code directly. For
;; documentation, see Challenge Assignment B.

;;;;;;;;;;;;;;;;;;;;;;;;;;; uncover-dynamic ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define uncover-dynamic
  (lambda (x)
    (define ext append)
    (define uncover
      (lambda (lab*)
        (lambda (x)
          (match x
            [(letrec ([,uvar* (lambda (,x** ...)
                                ,[(uncover (ext uvar* lab*)) -> fv** cv** lam*])] ...)
               ,[(uncover (ext uvar* lab*)) -> fv* cv* expr])
             (let* ([fv-rhs** (map difference fv** x**)]
                    [dv-free* (map car (filter (lambda (x) (not (null? (cdr x))))
                                               `((,uvar* . ,fv-rhs**) ...)))]
                    [fv-lam** (map remq uvar* fv-rhs**)]
                    [fv-all* (union (apply union fv-rhs**) fv*)]
                    [dv-in* (union (intersection uvar* fv-all*) dv-free*)]
                    [fv-out* (difference fv-all* uvar*)]
                    [cv-lam** (map remq uvar* cv**)]
                    [cv-out* (difference (union (apply union cv**) cv*) uvar*)])
               (values fv-out* cv-out*
                       `(letrec ([,uvar*
                                  (lambda (,x** ...)
                                    (free ((,fv-lam** ...) (,cv-lam** ...)) ,lam*))] ...)
                          (dynamic (,dv-in* ...) ,expr))))]
            [(let ([,uvar* ,[(uncover lab*) -> fv** cv** expr*]] ...)
               ,[(uncover lab*) -> fv* cv* expr])
             (values (union (apply union fv**) (difference fv* uvar*))
                     (union (apply union cv**) (difference cv* uvar*))
                     `(let ([,uvar* ,expr*] ...) ,expr))]
            [(begin ,[(uncover lab*) -> fv** cv** expr*] ...)
             (values (apply union fv**) (apply union cv**) `(begin ,expr* ...))]
            [(if ,[(uncover lab*) -> fv-t* cv-t* e-t]
                 ,[(uncover lab*) -> fv-c* cv-c* e-c]
                 ,[(uncover lab*) -> fv-a* cv-a* e-a])
             (values (union fv-t* fv-c* fv-a*)
                     (union cv-t* cv-c* cv-a*)
                     `(if ,e-t ,e-c ,e-a))]
            [(quote ,imm)
             (values '() '() `(quote ,imm))]
            [(,f ,[(uncover lab*) -> fv** cv** arg*] ...)
             (cond
              [(prim? f)
               (values (apply union fv**) (apply union cv**) `(,f ,arg* ...))]
              [(memq f lab*)
               (values (apply union fv**)
                       (set-cons f (apply union cv**))
                       `(,f ,arg* ...))]
              [else
               (letv* ([(fv-f* cv-f* f) ((uncover lab*) f)])
                 (values (union fv-f* (apply union fv**))
                         (union cv-f* (apply union cv**))
                         `(,f ,arg* ...)))])]
            [,x (values `(,x) '() x)]))))
    (letv* ([(fv* cv* x*) ((uncover '()) x)]) x*)))

;;;;;;;;;;;;;;;;;;;;; uncover-free-nopt ;;;;;;;;;;;;;;;;;;;;;
; This is the old uncover-free For the one that does closure optimization,
; see below.

; function: find free variables inside lambdas and list them in free forms.

(define uncover-free-nopt
  (lambda (x)
    (define uncover
      (lambda (x)
        (match x
          [(letrec ((,uvar* ,[uncover -> free* lam*]) ...) ,[uncover -> free2* expr])
           (values (difference (union (apply union free*) free2*) uvar*)
                   `(letrec ([,uvar* ,lam*] ...) ,expr))]
          [(lambda (,uvar* ...) ,expr)
           (let-values ([(free* expr^) (uncover expr)])
             (let ([free^ (difference free* uvar*)])
               (values free^ `(lambda (,uvar* ...) (free ,free^ ,expr^)))))]
          [(begin ,[uncover -> free* expr*] ...)
           (values (apply union free*) `(begin ,expr* ...))]
          [(if ,[uncover -> tf te]
               ,[uncover -> cf ce]
               ,[uncover -> af ae])
           (values (union tf cf af) `(if ,te ,ce ,ae))]
          [(let ([,uvar* ,[uncover -> free1* expr*]] ...) ,[uncover -> free2* expr])
           (values (union (apply union free1*) (difference free2* uvar*))
                   `(let ([,uvar* ,expr*] ...) ,expr))]
          [(quote ,imm)
           (values '() `(quote ,imm))]
          [(,prim ,[uncover -> free* a*] ...) (guard (prim? prim))
           (values (apply union free*) `(,prim ,a* ...))]
          [(,[uncover -> ff f] ,[uncover -> free* a*] ...)
           (values (apply union `(,ff ,free* ...)) `(,f ,a* ...))]
          [,x (values `(,x) x)])))
    (let-values ([(free* x*) (uncover x)]) x*)))


;;;;;;;;;;;;;;;;;;;;; convert-closures-nopt ;;;;;;;;;;;;;;;;;;;;;
; This is the old convert-closures. For the one that does closure
; optimization, see below.

; convert free forms into bind-free forms and introduce 'cp' arguments to
; procedures.

(define convert-closures-nopt
  (lambda (x)
    (define make-lab
      (lambda (x)
        (values x (unique-label x))))
    (define make-cp
      (lambda (x)
        (values (unique-name 'cp) x)))
    (define convert
      (lambda (x)
        (match x
          [(letrec ((,[make-lab -> uvar* label*]
                     (lambda (,x* ...)
                       (free ,[make-cp -> cp* free*] ,[expr*]))) ...) ,[expr])
           `(letrec ([,label* (lambda (,cp* ,x* ...)
                               (bind-free (,cp* ,free* ...) ,expr*))] ...)
              (closures ([,uvar* ,label* ,free* ...] ...) ,expr))]
          [(let ([,uvar* ,[expr*]] ...) ,[expr])
           `(let ([,uvar* ,expr*] ...) ,expr)]
          [(begin ,[e*] ...) `(begin ,e* ...)]
          [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
          [(quote ,imm) `(quote ,imm)]
          [(,prim ,[x*] ...) (guard (prim? prim))
           `(,prim ,x* ...)]
          [(,f ,[x*] ...) (guard (uvar? f))
           `(,f ,f ,x* ...)]
          [(,[f] ,[x*] ...)
           (let ([tmp (unique-name 't)])
             `(let ([,tmp ,f])
               (,tmp ,tmp ,x* ...)))]
          [,x x])))
    (convert (uncover-free-nopt x))))

(define convert-closures
  (lambda (x)
    (define grow
      (lambda (node* dv*)
        (let loop ([node* node*] [node^ '()] [dv^ dv*] [go #t])
          (match node*
            [() (if go (loop node^ '() dv^ #f) (values dv^ node^))]
            [([,u1 ((,fv1* ...) (,cv1* ...))] [,u2 ((,fv2* ...) (,cv2* ...))] ...)
             (let ([fv^ (intersection cv1* dv^)])
               (cond
                [(null? fv^)
                 (loop `([,u2 ((,fv2* ...) (,cv2* ...))] ...)
                       (append node^ `([,u1 ((,fv1* ...) (,cv1* ...))]))
                       dv^ #f)]
                [else
                 (let ([fv1^ (union fv1* fv^)]
                       [cv1^ (difference cv1* fv^)])
                   (loop `([,u2 ((,fv2* ...) (,cv2* ...))] ...)
                         (append node^ `([,u1 ((,fv1^ ...) (,cv1^ ...))]))
                         (set-cons u1 dv^)
                         #t))]))]))))
    (define lookup
      (lambda (x env)
        (cond
         [(assq x env) => cdr]
         [else x])))
    (define convert
      (lambda (lab* dyn*)
        (lambda (map* x)
          (match x
            [(letrec ([,uvar* (lambda (,x* ...)
                                (free ((,fv* ...) (,cv* ...)) ,body*))] ...)
               (dynamic (,dv* ...) ,expr))
             (letv* ([dyn^ (append dv* dyn*)]
                     [(dv^ node^) (grow `([,uvar* ((,fv* ...) (,cv* ...))] ...) dyn^)]
                     [map^ (map (lambda (x)
                                  (if (memq x dv^) `((,x . ,(unique-name 'cp))) '()))
                                uvar*)]
                     [cp* (map (lambda (x) (if (null? x) '(dummy) `(,(cdar x)))) map^)]
                     [cpl* (map (lambda (x) (if (null? x) '() `(,(cdar x)))) map^)]
                     [labs (map unique-label uvar*)]
                     [lab^ (append (difference uvar* dv^) lab*)]
                     [body^ (map (convert lab^ dyn^) map^ body*)]
                     [clo* (apply append
                                  (map (lambda (x)
                                         (match x
                                           [(,u ((,fv ...) (,cv ...)))
                                            (if (memq u dv^)
                                                (let ([fv^ (map (lambda (x)
                                                                  (let ([p (assq x map*)])
                                                                    (if p (cdr p) x)))
                                                                fv)])
                                                  `([,u ,(unique-label u) ,fv^ ...]))
                                                '())]))
                                       node^))])
                 (match node^
                   [([,u* ((,fv* ...) (,cv* ...))] ...)
                    `(letrec ([,labs (lambda (,@cpl* ,x* ...)
                                       (bind-free (,@cp* ,fv* ...) ,body^)) ] ...)
                       (closures ,clo* ,((convert lab^ dyn^) map* expr)))]))]
            [(let ([,uvar* ,[expr*]] ...) ,[expr])
             `(let ([,uvar* ,expr*] ...) ,expr)]
            [(begin ,[e*] ...)
             `(begin ,e* ...)]
            [(if ,[t] ,[c] ,[a])
             `(if ,t ,c ,a)]
            [(quote ,imm)
             `(quote ,imm)]
            [(,prim ,[x*] ...) (guard (prim? prim))
             `(,prim ,x* ...)]
            [(,f ,[x*] ...) (guard (uvar? f))
             (let ([fl (unique-label f)])
               (cond
                [(memq f lab*) `(,fl ,x* ...)]
                [(assq f map*) => (lambda (p) `(,fl ,(cdr p) ,x* ...))]
                [(memq f dyn*) `(,fl ,f ,x* ...)]
                [else `(,f ,f ,x* ...)]))]
            [(,[f] ,[x*] ...)
             (let ([tmp (unique-name 't)])
               `(let ([,tmp ,f])
                  (,tmp ,tmp ,x* ...)))]
            [,x (cond
                 [(assq x map*) => cdr]
                 [else x])]))))
    (if *enable-closure-optimization*
        ((convert '() '()) '() (uncover-dynamic x))
        (convert-closures-nopt x))))

#!eof

(convert-closures '(lambda (u.41) (free () u.41)))
(convert-closures '(let ([x.1 '3])
                     (letrec ([f.2 (lambda ()
                                     (free (x.1)
                                           x.1))])
                       (f.2))))
