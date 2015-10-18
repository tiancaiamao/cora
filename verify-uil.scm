;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; verify-uil
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;;; verify-uil accept a single value and verifies that the value is a valid
;;; program in the UIL grammar. There are just a few trivial changed to add
;;; mref, alloc, and mset!

(define-who verify-uil
  (define verify-x-list
    (lambda (x* x? what)
      (let loop ([x* x*] [idx* '()])
        (unless (null? x*)
          (let ([x (car x*)] [x* (cdr x*)])
            (unless (x? x)
              (error who "invalid ~s ~s found" what x))
            (let ([idx (extract-suffix x)])
              (when (member idx idx*)
                (error who "non-unique ~s suffix ~s found" what idx))
              (loop x* (cons idx idx*))))))))
  (define Triv
    (lambda (label* uvar*)
      (lambda (t)
        (unless (or (label? t) (uvar? t) (and (integer? t) (exact? t)) (symbol? t))
          (error who "invalid Triv ~s" t))
        (when (and (integer? t) (exact? t))
          (unless (int64? t)
            (error who "integer out of 64-bit range ~s" t)))
        (when (uvar? t)
          (unless (memq t uvar*)
            (error who "reference to unbound uvar ~s" t)))
        (when (label? t)
          (unless (memq t label*)
            (error who "unbound label ~s" t)))
        t)))
  (define Value
    (lambda (label* uvar*)
      (lambda (val)
        (match val
          [(alloc ,[(Value label* uvar*) -> n]) (void)]
          [(mref ,[(Value label* uvar*) -> base] ,[(Value label* uvar*) -> off]) (void)]
          [(if ,[(Pred label* uvar*) -> test] ,[conseq] ,[altern]) (void)]
          [(begin ,[(Effect label* uvar*) -> ef*] ... ,[val]) (void)]
          [(sra ,[x] ,y)
           (unless (uint6? y)
             (error who "invalid sra operand ~s" y))]
          [(,binop ,[x] ,[y])
           (guard (memq binop '(+ - * logand logor sra)))
           (void)]
          [(,[rator] ,[rand*] ...) (void)]
          [,[(Triv label* uvar*) -> tr] (void)]))))
  (define Effect
    (lambda (label* uvar*)
      (lambda (ef)
        (match ef
          [(nop) (void)]
          [(if ,[(Pred label* uvar*) -> test] ,[conseq] ,[altern]) (void)]
          [(begin ,[ef*] ... ,[ef]) (void)]
          [(set! ,var ,[(Value label* uvar*) -> val])
           (unless (memq var uvar*)
             (error who "assignment to unbound var ~s" var))]
          [(mset! ,[(Value label* uvar*) -> base]
                  ,[(Value label* uvar*) -> off]
                  ,[(Value label* uvar*) -> val])
           (void)]
          [(,[(Value label* uvar*) -> rator]
             ,[(Value label* uvar*) -> rand*] ...)
           (void)]
          [,ef (error who "invalid Effect ~s" ef)]))))
  (define Pred
    (lambda (label* uvar*)
      (lambda (pr)
        (match pr
          [(true) (void)]
          [(false) (void)]
          [(if ,[test] ,[conseq] ,[altern]) (void)]
          [(begin ,[(Effect label* uvar*) -> ef*] ... ,[pr]) (void)]
          [(,predop ,[(Value label* uvar*) -> x] ,[(Value label* uvar*) -> y])
           (unless (memq predop '(< > <= >= =))
             (error who "invalid predicate operator ~s" predop))]
          [,pr (error who "invalid Pred ~s" pr)]))))
  (define Tail
    (lambda (tail label* uvar*)
      (match tail
        [(alloc ,[(Value label* uvar*) -> n]) (void)]
        [(mref ,[(Value label* uvar*) -> base] ,[(Value label* uvar*) -> off]) (void)]
        [(foreign-call ,[(Value label* uvar*) -> base]) (void)]
        [(if ,[(Pred label* uvar*) -> test] ,[conseq] ,[altern]) (void)]
        [(begin ,[(Effect label* uvar*) -> ef*] ... ,[tail]) (void)]
        [(sra ,[(Value label* uvar*) -> x] ,y)
         (unless (uint6? y)
           (error who "invalid sra operand ~s" y))]
        [(,binop ,[(Value label* uvar*) -> x] ,[(Value label* uvar*) -> y])
         (guard (memq binop '(+ - * logand logor sra)))
         (void)]
        [(,[(Value label* uvar*) -> rator]
           ,[(Value label* uvar*) -> rand*] ...)
         (void)]
        [,[(Triv label* uvar*) -> triv] (void)])))
  (define Body
    (lambda (label*)
      (lambda (bd fml*)
        (match bd
          [(locals (,local* ...) ,tail)
           (let ([uvar* `(,fml* ... ,local* ...)])
             (verify-x-list uvar* uvar? 'uvar)
             (Tail tail label* uvar*))]
          [,bd (error who "invalid Body ~s" bd)]))))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda (,fml** ...) ,bd*)] ...) ,bd)
       (verify-x-list label* label? 'label)
       (map (lambda (fml*) (verify-x-list fml* uvar? 'formal)) fml**)
       (for-each (Body label*) bd* fml**)
       ((Body label*) bd '())]
      [,x (error who "invalid Program ~s" x)])
    x))

#!eof
