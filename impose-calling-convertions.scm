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

(define impose-calling-convertions
  (lambda (x)

    (define help1 (lambda (x i) `(set! ,x ,(string->symbol (format "in~a" i)))))
    (define help2 (lambda (x i) `(set! ,(string->symbol (format "out~a" i)) ,x)))
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
               [(begin ,[s*] ...) (make-begin s*)]
               [(set! ,var ,[val]) `(set! ,var ,val)]
               [(code (,fv* ...)
                      (,var* ...)
                      (locals (,lv* ...) ,[body]))
                (let* ([init (receive var*)]
                      [body1 (make-begin `(,@init ,body))])
                  `(code ()
                         (locals (,lv* ... ,var* ...)
                                 ,body1)))]
               [(,f ,a* ...) (guard (not (primitive? f)))
                (let ([init (send a*)])
                  `(begin ,@init (call ,f)))]
               [,other other])))

    (match x
           [(program ([,label* ,[impose -> code*]] ...)
                                        ;(,constants* ...)
                     (locals (,lv* ...) ,[impose -> body]))
            `(program ((,label* ,code*) ...)
                                        ; (,constants* ...)
                      (locals (,lv* ...) ,body))])))

#!eof

(impose-calling-convertions
 '(program ([f$1 (code () (x.2 x.5)
                       (locals (t.8 t.9)
                               (begin
                                 (set! t.8 (* x.2 x.5))
                                 (set! t.9 (+ t.8 7)))))])
           (locals (a)
                   (+ a 1))))
(program
 ([f$1 (code ()
             (locals
              (t.8 t.9 x.2 x.5)
              (begin
                (set! x.5 in1)
                (set! x.2 in0)
                (set! t.8 (* x.2 x.5))
                (set! t.9 (+ t.8 7)))))])
 (locals (a) (+ a 1)))

(impose
 '(if (= n.2 0)
      1
      (* n.2 (fact.1 (- n.2 1)))))

(impose-calling-convertions
 '(program ([f$3 (code (fact.1) (n.2)
                       (locals ()
                               (if (= n.2 0)
                                   1
                                   (* n.2 (fact.1 (- n.2 1))))))])
           (locals (a)
                   (+ a 1))))

(impose-calling-convertions
 '(program
   ((f$3 (code (fact.1) (n.2)
               (locals (t.7 t.6)
                       (if (= n.2 0)
                           1
                           (begin
                             (set! t.6 (- n.2 1))
                             (set! t.7 (fact.1 t.6))
                             (* n.2 t.7)))))))
   (locals (fact.1 t.5 t.4)
           (begin
             (set! t.5 quote)
             (set! t.4 ())
             (set! fact.1 (t.5 t.4))
             (closure f$3 fact.1)))))
