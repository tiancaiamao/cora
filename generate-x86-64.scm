#|
(code
 (set! rax 17)
 (jump f$1)
 f$1
 (set! #<disp rbp 0> rax)
 (set! rax (+ rax rax))
 (set! rax (+ rax #<disp rbp 0>))
 (jump r15))
=>
movq $17, %rax
jmp L1
L1:
movq %rax, 0(%rbp)
addq %rax, %rax
addq 0(%rbp), %rax
jmp *%r15
|#



;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; generate-x86-64
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

;; This helper is needed to replace the one in helper.ss because it needs
;; to handle mset! and mref.

(define-who rand->x86-64-arg
  (lambda (rand)
    (define (register? x)
      (memq x '(rax rcx rdx rbx rsp rbp rsi rdi r8 r9 r10 r11 r12 r13 r14 r15)))
    (cond
     [(string? rand) rand] ; precooked operand
     [(number? rand)  (format "$~s" rand)]
     [(register? rand)  (format "%~s" rand)]
     [(label? rand) (format "~a(%rip)" (label->x86-64-label rand))]
     [(disp-opnd? rand)
      (format "~s(%~s)" (disp-opnd-offset rand) (disp-opnd-reg rand))]
     [(mref? rand)
      (match rand
        [(mref ,base ,off) (guard (and (register? base) (register? off)))
         (format "(%~s,%~s)" base off)]
        [(mref ,base ,off) (guard (and (register? base) (number? off)))
         (format "~s(%~s)" off base)]
        [(mref ,base ,off) (guard (and (number? base) (register? off)))
         (format "~s(%~s)" base off)])]
     [else (error who "invalid instruction argument ~s" rand)])))

(define generate-x86-64
  (lambda (p)
    (define binop-lookup
      (lambda (op)
        (let ([op-map '([+      . addq  ]
                        [-      . subq  ]
                        [*      . imulq ]
                        [sra    . sarq  ]
                        [logand . andq  ]
                        [logor  . orq   ])])
          (cond
           [(assq op op-map) => cdr]
           [else (error 'binop-lookup "unsupported operator ~s" op)]))))
    (define relop-lookup
      (lambda (op pos?)
        (let ([op-map '([=  . (je  jne ) ]
                        [>  . (jg  jle ) ]
                        [>= . (jge jl  ) ]
                        [<  . (jl  jge ) ]
                        [<= . (jle jg  ) ])])
          (if pos?
              (car (cdr (assq op op-map)))
              (cadr (cdr (assq op op-map)))))))
    (define emit-test
      (lambda (test v)
        (match test
          [(,op ,a ,b)
           (emit 'cmpq b a)
           (emit-jump (relop-lookup op #t) v)]
          [(not (,op ,a ,b))
           (emit 'cmpq b a)
           (emit-jump (relop-lookup op #f) v)])))
    (define code-gen
      (lambda (p)
        (match p
          [(code ,stmt* ...) (for-each code-gen stmt*)]
          [(set! ,x (,op ,y ,z)) (guard (binop? op))
           (emit (binop-lookup op) (rand->x86-64-arg z) (rand->x86-64-arg y))]
          [(set! ,x ,y)
           (if (label? y)
               (emit 'leaq (rand->x86-64-arg y) (rand->x86-64-arg x))
               (emit 'movq (rand->x86-64-arg y) (rand->x86-64-arg x)))]
          [(mset! ,base ,off (,op ,rand1 ,rand2)) (guard (binop? op))
           (match rand1
             [(mref ,base^ ,off^)
              (if (or (not (eq? base base^)) (not (eq? off off^)))
                  (error 'code-gen
                         "source and dst location don't match: (~a,~a) and (~a,~a)"
                         base off base^ off^))]
             [else (error 'code-gen "illegal instruction: ~a"
                          `(mset! ,base ,off (,op ,rand1 ,rand2)))])
           (emit (binop-lookup op) (rand->x86-64-arg rand2) (rand->x86-64-arg rand1))]
          [(mset! ,base ,off ,val)
           (emit 'movq (rand->x86-64-arg val) (rand->x86-64-arg `(mref ,base ,off)))]
          [(if ,test (jump ,v)) (emit-test test v)]
          [(jump ,v) (emit-jump 'jmp v)]
          [,x (guard (label? x)) (emit-label x)]
          [,p (error 'code-gen "invalid statement ~a" p)])))
    (emit-program
     (code-gen p))))

#!eof

(generate-x86-64
 '(code (set! rcx r15)
        (set! rax 24)
        (set! rax (+ rax 40))
        (set! rax rax)
        (jump rp.27)))

(generate-x86-64
 '(set! (disp-opnd rbp 0) rax))

(disp-opnd? #<disp rbp 0> )

(emit-jump 'jmp 'rp.27)
