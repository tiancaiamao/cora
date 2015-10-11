;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; various optimization passes from various assignments are collected here
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;;;;;;;;;;;;;;;;;;;;; optimize-direct-call ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;; transform ((lambda (x* ...) body) a* ...) into (let ([x* a*] ...) body).

(define optimize-direct-call
  (lambda (x)
    (match x
      [(quote ,imm)
       `(quote ,imm)]
      [(if ,[t] ,[c] ,[a])
       `(if ,t ,c ,a)]
      [(begin ,[ef*] ...)
       `(begin ,ef* ...)]
      [((lambda (,fml* ...) ,[body]) ,[x*] ...)
       `(let ([,fml* ,x*] ...) ,body)]
      [(let ([,x* ,[v*]] ...) ,[e])
       `(let ([,x* ,v*] ...) ,e)]
      [(letrec ([,uvar* (lambda (,fml** ...) ,[x*])] ...) ,[e])
       `(letrec ([,uvar* (lambda (,fml** ...) ,x*)] ...) ,e)]
      [(,[f] ,[x*] ...)
       `(,f ,x* ...)]
      [,x x])))


;;;;;;;;;;;;;;;;;;;;; optimize-known-call ;;;;;;;;;;;;;;;;;;;;;;;;;

;; This pass is no longer needed because convert-closures does what we need
;; with it. As a check, I added a message to this pass. When this pass is
;; enabled and if it successfully optimized any known-call, it will print a
;; message. No message is printed, so this pass is not included in the
;; final passes.

;; remove the indirect calls when the closure is known. extract the label
;; inside the closure for each invocation of the closure.

(define optimize-known-call
  (lambda (x)
    (define lookup
      (lambda (x s)
        (cond
         [(assq x s) => cadr]
         [else #f])))
    (define optimize
      (lambda (cls)
        (lambda (x)
          (match x
            [(letrec ((,l* (lambda (,fml* ...) (bind-free (,x* ...) ,expr*))) ...)
               (closures ([,uvar* ,lc* ,fv* ...] ...) ,expr))
             (let* ([cls^ (append `([,uvar* ,lc*] ...) cls)]
                    [expr*^ (map (optimize cls^) expr*)]
                    [expr^ ((optimize cls^) expr)])
               `(letrec ((,l* (lambda (,fml* ...) (bind-free (,x* ...) ,expr*^))) ...)
                  (closures ([,uvar* ,lc* ,fv* ...] ...) ,expr^)))]
            [(let ([,uvar* ,[expr*]] ...) ,[expr])
             `(let ([,uvar* ,expr*] ...) ,expr)]
            [(begin ,[e*] ...) `(begin ,e* ...)]
            [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
            [(quote ,imm) `(quote ,imm)]
            [(,prim ,[x*] ...) (guard (prim? prim))
             `(,prim ,x* ...)]
            [(,[f] ,[f^] ,[x*] ...)
             `(,(or (lookup f cls) f) ,f^ ,x* ...)]
            [,x x]))))
    (let ([x* ((optimize '()) x)])
      (if (not (equal? x* x))
          (begin
            (printf "optimize-known-call is effective!\n")
            (pretty-print x)
            (printf "\n => \n\n")
            (pretty-print x*)
            x*)
          x))))




;;;;;;;;;;;;;;;;;;;;;;;;;;; optimize-jumps ;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; This pass is mostly subsumed by expose-basic-blocks, but there might be
; (silly?) code written by programmers that needs this pass to optimize,
; like:

;; (letrec ([f (lambda () (g))]
;;          [g (lambda () (h))]
;;          [h (lambda () 1)])
;;   (f))

; function: eliminate jumps which contains only a jump to another label
; input: grammar after expose-basic-blocks
; output: same grammar but without those indirections

(define optimize-jumps
  (lambda (x)
    (define walk
      (lambda (s)
        (lambda (x)
          (cond
           [(assq x s) => (lambda (p) ((walk s) (cdr p)))]
           [else x]))))
    (define find-jumps
      (lambda (di)
        (define find-jumps1
          (lambda (di do s)
            (match di
              [() (values (reverse do) s)]
              [((,a (lambda () (,b))) ,d* ...) (guard (label? b))
               (let ([b* ((walk s) b)])
                 (cond
                  [(eq? a b*)
                   (find-jumps1 `(,d* ...) (cons `(,a (lambda () (,a))) do) s)]
                  [else
                   (find-jumps1 `(,d* ...) do (cons `(,a . ,b*) s))]))]
              [((,a (lambda () (begin (,b)))) ,d* ...) (guard (label? b))
               (let ([b* ((walk s) b)])
                 (cond
                  [(eq? a b*)
                   (find-jumps1 `(,d* ...) (cons `(,a (lambda () (,a))) do) s)]
                  [else
                   (find-jumps1 `(,d* ...) do (cons `(,a . ,b*) s))]))]
              [(,d ,d* ...)
               (find-jumps1 `(,d* ...) (cons d do) s)])))
        (find-jumps1 di '() '())))
    (define optimize
      (lambda (g)
        (lambda (x)
          (match x
            [(letrec ([,label (lambda () ,tail*)] ...) ,tail)
             (let-values ([(d* g) (find-jumps `([,label (lambda () ,tail*)] ...))])
               (match d*
                 [([,label (lambda () ,[(optimize g) -> tail*])] ...)
                  `(letrec ([,label (lambda () ,tail*)] ...) ,((optimize g) tail))]))]
            [(begin ,[e*] ...) `(begin ,e* ...)]
            [(if (,relop ,[x] ,[y]) ,[c] ,[a])
             `(if (,relop ,x ,y) ,c ,a)]
            [(set! ,[x] (,op ,[y] ,[z]))
             `(set! ,x (,op ,y ,z))]
            [(set! ,[x] ,[v])
             `(set! ,x ,v)]
            [(,x) (guard (label? x))
             `(,((walk g) x))]
            [,x (guard (label? x)) ((walk g) x)]
            [,x x]))))
    (if *enable-optimize-jumps* ((optimize #f) x) x)))



;;;;;;;;;;;;;;;;;;;;;;;;;;;; pre-optimize ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; This is an additional pass added on my own in order to do some constant
; propagation. This can eliminate some code and thus saves some overhead.

; For example, the following program normally creates two closures, but now
; it doesn't create any closures because the value of t and f are flowed
; into the procedures and thus they don't have any free variables.

;; (let ([t #t] [f #f])
;;   (letrec ((even (lambda (x) (if (= x 0) t (odd (- x 1)))))
;;            (odd (lambda (x) (if (= x 0) f (even (- x 1))))))
;;     (odd 13)))

; No structured constants (pairs, vectors) are optimized due to the
; complication introduced by convert-complex-datum which made them
; indistinguishable. A reordering of the earlier passes may be needed to
; deal with those constants.

(define pre-optimize
  (lambda (x)
    (define env0
      `([+      . ,+      ]
        [-      . ,-      ]
        [*      . ,*      ]
        [sra    . ,sra    ]
        [logand . ,logand ]
        [logor  . ,logor  ]
        [=      . ,=      ]
        [>      . ,>      ]
        [>=     . ,>=     ]
        [<      . ,<      ]
        [<=     . ,<=     ]))
    (define lookup
      (lambda (x env)
        (cond
         [(assq x env) => cdr]
         [else x])))
    (define andall
      (lambda (ls)
        (cond
         [(null? ls) #t]
         [(car ls) (andall (cdr ls))]
         [else #f])))
    (define const?
      (lambda (x)
        (cond
         [(or (number? x) (boolean? x) (null? x) (vector? x)) #t]
         [(pair? x) (and (const? (car x)) (const? (cdr x)))]
         [else #f])))
    (define make-quote
      (lambda (val)
        (if (const? val) `(quote ,val) val)))
    (define separate
      (lambda (p? ls)
        (let loop ([ls ls] [tl '()] [fl '()])
          (cond
           [(null? ls) (values (reverse tl) (reverse fl))]
           [(p? (car ls)) (loop (cdr ls) (cons (car ls) tl) fl)]
           [else (loop (cdr ls) tl (cons (car ls) fl))]))))
    (define optimize
      (lambda (env tail?)
        (lambda (x)
          (match x
                 [(,letr ([,uvar* ,[(optimize env #f) -> val*]] ...)
                         (assigned (,as* ...) ,expr))
                  (guard (memq letr '(let letrec)))
                  (letv* ([(env^ bd^)
                           (separate (lambda (b) (and (not (memq (car b) as*))
                                                      (const? (cadr b))))
                                     `([,uvar* ,val*] ...))]
                          [(expr^) ((optimize (append (list->alist env^) env) #t) expr)])
                         (let ([val* (map make-quote val*)])
                           `(,letr ([,uvar* ,val*] ...)
                                   (assigned (,as* ...) ,expr^))))]
                 [(lambda (,x* ...)
                    (assigned (,as* ...) ,[(optimize env #t) -> body]))
                  `(lambda (,x* ...) (assigned (,as* ...) ,body))]
                 [(begin ,[(optimize env #t) -> ef*] ...)
                  `(begin ,ef* ...)]
                 [(if ,[(optimize env #f) -> t]
                      ,[(optimize env #t) -> c]
                      ,[(optimize env #t) -> a])
                  (cond
                   [(const? t) (if t c a)]
                   [else `(if ,(make-quote t) ,c ,a)])]
                 [(set! ,x ,[(optimize env #t) -> v])
                  `(set! ,x ,v)]
                 [(quote ,imm)
                  (if tail? (make-quote imm) imm)]
                 [(,f ,x* ...)
                  (let ([ff ((optimize env #f) f)]
                        [xx* (map (optimize env #f) x*)])
                    (cond
                     [(and (procedure? ff) (andall (map const? xx*)))
                      (if tail?
                          (make-quote (apply ff xx*))
                          (apply ff xx*))]
                     [else (let ([xx* (map make-quote xx*)])
                             `(,(if (procedure? ff) f ff) ,xx* ...))]))]
                 [,x (let ([val (lookup x env)])
                       (if tail? (make-quote val) val))]))))
    x))
