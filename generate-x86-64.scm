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

    (define generate
      (lambda (exp)
        (match exp
               ((code ,stmt* ...) (for-each generate stmt*))
               ((set! ,x (,op ,y ,z))
                (emit (binop-lookup op) z y))
               ((set! ,x ,y)
                (if (label? x)
                    (emit 'leaq y x)
                    (emit 'movq y x)))
               ((if ,test (jump ,v)) (emit-test test v))
               ((jump ,v) (emit-jump 'jmp v))
               (,x (guard label?) (emit-label exp))
               (,err (error 'generate "invalid statement ~a" err)))))

    (emit-program
     (generate p))))

#!eof

(generate-x86-64
 '(code (set! rcx r15) (set! rax 24) (set! rax (+ rax 40))
        (set! rax rax) (jump rp.27)))

(emit-jump 'jmp 'rp.27)
