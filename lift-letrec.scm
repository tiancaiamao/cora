;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; lift-letrec
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; function: lift letrec to the top
; input: A11 grammar in which letrec can appear anywhere
; output: similar grammar but letrec only appears at top of program

(define lift-letrec
  (lambda (x)
    (define defs '())
    (define add-defs!
      (lambda (xs)
        (set! defs (append xs defs))))
    (define lift
      (lambda (x)
        (match x
               [(letrec ([,label (lambda (,uvar* ...) ,[expr*])] ...) ,[expr])
                (add-defs! `([,label (lambda (,uvar* ...) ,expr*)] ...))
                expr]
               [(begin ,[e*] ...) `(begin ,e* ...)]
               [(if ,[t] ,[c] ,[a]) `(if ,t ,c ,a)]
               [(let ([,uvar ,[e*]] ...) ,[e]) `(let ([,uvar ,e*] ...) ,e)]
               [(quote ,[imm]) `(quote ,imm)]
               [(,[f] ,[x*] ...) `(,f ,x* ...)]
               [,x x])))
    (let ([x* (lift x)]) `(letrec ,defs ,x*))))
