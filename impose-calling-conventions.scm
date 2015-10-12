;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; Pass: impose-calling-conventions
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; - alloc's at tail positions are handled.
; - mset! goes through unchanged.
; - mref is added to the return handling part (by excluding it from the cases of calls)
; - allocation-pointer-register is listed in call-live list.

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

(define-who impose-calling-conventions
  (define nfv
    (lambda (n)
      (unique-name 'nfv)))
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
          [(set! ,dst ,src) (guard (register? src))
           (rev-load (cdr loads) (cons `(set! ,src ,dst) regs) fvs)]
          [(set! ,dst ,src)
           (rev-load (cdr loads) regs (cons `(set! ,src ,dst) fvs))])])))
  (define get-nfv
    (lambda (loads)
;      (filter (lambda (x) (not register?)) (map caddr loads))
      (cond
       [(null? loads) '()]
       [else
        (match (car loads)
          [(set! ,dst ,src) (guard (register? src))
           (get-nfv (cdr loads))]
          [(set! ,dst ,src)
           (cons src (get-nfv (cdr loads)))])])))
  (define impose
    (lambda (rp ct new-fv*)
      (lambda (x)
        (match x
          [(if ,[test] ,[conseq] ,[alt])
           `(if ,test ,conseq ,alt)]
          [(begin ,[(impose rp 'seq new-fv*) -> e*] ... ,[tail])
           `(begin ,e* ... ,tail)]
          [(,m/set! ,x ... (,op ,y ,z)) (guard (memq m/set! '(set! mset!))
                                               (or (binop? op) (eq? op 'mref)))
           `(,m/set! ,x ... (,op ,y ,z))]
          [(,m/set! ,var ... (,f ,x* ...)) (guard (memq m/set! '(set! mset!)))
           (make-begin `(,((impose rp 'rhs new-fv*) `(,f ,x* ...))
                         (,m/set! ,var ... ,return-value-register)))]
          [(,m/set! ,var ... ,val) (guard (memq m/set! '(set! mset!)))
           `(,m/set! ,var ... ,val)]
          [(,x) (guard (member x '(nop true false))) `(,x)]
          [(,relop ,a ,b) (guard (relop? relop))
           `(,relop ,a ,b)]
          [(,triv ,loc* ...) (guard (not (binop? triv))
                                    (not (eq? triv 'mref))
                                    (eq? ct 'tail))
           (let* ([l* (load-params loc* parameter-registers index->frame-var 0 '())]
                  [rl* (rev-load l* '() '())])
             `(begin
                ,@rl*
                ;(set! ,return-address-register ,rp) ; tail-call optimization
                (,triv ,frame-pointer-register
                       ;,return-address-register
                       ,allocation-pointer-register
                       ,@(map cadr rl*))))]
          [(,triv ,loc* ...) (guard (not (binop? triv))
                                    (not (eq? triv 'mref))
                                    (not (eq? ct 'tail)))
           (let* ([l* (load-params loc* parameter-registers nfv 0 '())]
                  [rl* (rev-load l* '() '())]
                  [label (unique-label 'ret)])
             (set-box! new-fv* (cons (get-nfv l*) (unbox new-fv*)))
             `(return-point ,label      ;;; difference
               (begin
                 ,@rl*
                 ;(set! ,return-address-register ,label) ;;; difference
                 (,triv ,frame-pointer-register
                        ;,return-address-register
                        ,allocation-pointer-register
                        ,@(map cadr rl*)))))]
          [,x `(begin (set! ,return-value-register ,x)
                      (,rp ,frame-pointer-register
                           ,return-value-register
                           ,allocation-pointer-register))]))))
  (define Body
    (lambda (bd fml*)
      (match bd
        [(locals (,locals* ...) ,tail)
         (let* ([loads (load-params fml* parameter-registers index->frame-var 0 '())]
                [rp (unique-name 'rp)]
                [new-fv* (box '())]
                [tail ((impose rp 'tail new-fv*) tail)])
           `(locals (,locals* ... ,@fml* ,rp ,@(apply append (unbox new-fv*)))
              (new-frames ,(unbox new-fv*)
               ,(make-begin
                 `(
                   ;(set! ,rp ,return-address-register)
                   ,@loads
                   ,tail)))))])))
  (lambda (x)
    (match x
      [(letrec ([,label* (lambda (,fml** ...) ,bd*)] ...) ,bd)
       (let ([bd* (map Body bd* fml**)]
             [bd (Body bd '())])
         `(letrec ([,label* (lambda () ,bd*)] ...) ,bd))])))

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
