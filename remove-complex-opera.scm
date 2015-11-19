;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; remove-complex-opera*
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; "alloc" is removed completely from non-tail positions and turned into
; assignments, but left intact on tail positions. "mref" and "mset!" are
; treated much like a call, but have a new type of context 'mref, mref only
; gets out of 'mref contexts and remain inside others so that we can have
; (set! x.1 (+ (mref a.1 8) 1)). mset! is treated exactly like calls.


#|
(f$1 (+ (* x.2 x.5) 7) (sra x.1 3))
=>
(begin
  (set! t.9 (begin
              (set! t.8 (* x.2 x.5))
              (+ t.8 7)))
  (set! t.10 (sra x.1 3))
  (f$1 t.9 t.10))

(letrec ((f$1 (lambda (a b c)
                (f$1 (+ (* x.2 x.5) 7) (sra x.1 3)))))
  (+ x.1 1))
=>
(letrec ((f$1 (lambda (a b c)
                (begin
                  (set! t.38 (begin (set! t.37 (* x.2 x.5)) (+ t.37 7)))
                  (set! t.39 (sra x.1 3))
                  (f$1 t.38 t.39)))))
  (+ x.1 1))
|#

(define-who remove-complex-opera
  (define (Body bd)
    (define (simple? x)
      (or (uvar? x) (label? x) (and (integer? x) (exact? x))
          (memq x '(+ - * logand logor sra mref closure)) (memq x '(= < <= > >=))))
    (define new-local* '())
    (define (new-t)
      (let ([t (unique-name 't)])
        (set! new-local* (cons t new-local*))
        t))
    (define (remove0 expr*)
      (let-values ([(call set*) (remove1 expr*)])
        (make-begin `(,@set* ,call))))
    (define remove1
      (lambda (expr*)
        (match expr*
               [() (values '() '())]
               [(,s . ,[remove1 -> rest* set*])
                (guard (simple? s))
                (values `(,s ,rest* ...) set*)]
               [(,[remove -> expr] . ,[remove1 -> rest* set*])
                (let ([t (new-t)])
                  (values `(,t ,rest* ...) `((set! ,t ,expr) ,set* ...)))]
               [,expr* (error who "invalid Expr ~s" expr*)])))
    (define remove
      (lambda (x)
        (match x
               [(true) '(true)]
               [(false) '(false)]
               [(nop) '(nop)]
               [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
               [(begin ,[ef*] ... ,[val]) (make-begin `(,ef* ... ,val))]
               [(set! ,var ,[val]) `(set! ,var ,val)]
               [(,op ,[x] ,[y])
                (guard (memq op '(+ - * logand logor sra mref < <= = >= >)))
                (remove0 `(,op ,x ,y))]
               [(,rator ,rand* ...) (remove0 `(,rator ,rand* ...))]
               [,tr tr])))
    (match bd
           [(locals (,local* ...) ,[remove -> tail])
            `(locals (,local* ... ,new-local* ...) ,tail)]
           [,bd (error who "invalid Body ~s" bd)]))
  (lambda (x)
    (match x
           [(program ([,label* (code (,fv** ...) (,fml** ...) ,[Body -> bd*])] ...) 
                     ,[Body -> bd])
            `(program ([,label* (code (,fv** ...) (,fml** ...) ,bd*)] ...) ,bd)]
           [,x (error who "invalid Program ~s" x)])))

#!eof

(remove-complex-opera*
 '(program ([fact$1 (code () (n.2)
                          (locals ()
                                  (if (= n.2 0)
                                      8
                                      (* (sra n.2 3) (fact$1 (- n.2 8))))))])
           (locals () (begin (fact$1 40)))))

(program
 ((fact$1
   (code () (n.2)
         (locals
          (t.47 t.46 t.45)
          (if (= n.2 0)
              8
              (begin
                (set! t.47 (sra n.2 3))
                (set! t.46 (begin
                             (set! t.45 (- n.2 8))
                             (fact$1 t.45)))
                (* t.47 t.46)))))))
 (locals () (fact$1 40)))

(remove-complex-opera*
 '(program
   ((f$8 (code (fact.6) (n.7)
               (locals ()
                       (if (= n.7 0)
                           1
                           (* n.7 (fact.6 (- n.7 1))))))))
   (locals (fact.6)
           (begin
             (set! fact.6 '())
             (closure f$8 fact.6)))))







