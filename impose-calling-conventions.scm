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

(define impose-calling-conversions
  (lambda (x)

    (define help1 (lambda (x i) `(set! ,x ,(string->symbol (format "pos~a" i)))))
    (define help2 (lambda (x i) `(set! ,(string->symbol (format "pos~a" i)) ,x)))
    (define help3
      (lambda (lst i ret fn)
        (if (null? lst)
            ret
            (help3 (cdr lst) (+ i 1) (cons (fn (car lst) i) ret) fn))))
    (define send (lambda (vars) (help3 vars 0 '() help2)))
    (define receive (lambda (vars) (help3 vars 0 '() help1)))

    (define impose
      (lambda (x)
        (match x
               [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
               [(begin ,[s*] ...) `(begin ,s* ...)]
               [(set! ,x ,[y]) `(set! ,x ,y)]
               [(code (,fv* ...)
                      (,var* ...)
                      (locals (,lv* ...) ,[body]))
                (let ([init (receive var*)])
                  `(code (,fv* ...)
                         (locals (,lv* ... ,var* ...)
                                 ,(cons 'begin init)
                                 ,body)))]
               [(,f ,a* ...)
                (let ([init (send a*)])
                  `(begin ,@init (call ,f)))]
               [,other x])))

    (match x
           [(program ([,label* ,[impose -> code*]] ...)
                     (,constants* ...)
                     (locals (,lv* ...) ,[impose -> body]))
            `(program ((,label* ,code*) ...)
                      (,constants* ...)
                      (locals (,lv* ...) ,body))])))

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
