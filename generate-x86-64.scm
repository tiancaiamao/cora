#|
Program ->  (code Statement+)
Statement   ->  (set! Var1 int64)
|   (set! Var1 Var2)
|   (set! Var1 (Binop Var1 int32))
|   (set! Var1 (Binop Var1 Var2))
Var     ->  rax | rcx | rdx | rbx | rbp | rsi | rdi
|   r8 | r9 | r10 | r11 | r12 | r13 | r14 | r15
Binop   ->  + | - | *
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
               [(op a b)
                (emit 'cmpq b a)
                (emit-jump (relop-lookup op #t) v)]
               [('not (op a b))
                (emit 'cmpq b a)
                (emit-jump (relop-lookup op #f) v)])))

    (define generate
      (lambda (exp)
        (match exp
               (('code stmt* ...) (for-each generate stmt*))
               (('set! x (op y z))
                (emit (binop-lookup op) z y))
               (('set! x y)
                (if (label? x)
                    (emit 'leaq y x)
                    (emit 'movq y x)))
               (('if test ('jump v)) (emit-test test v))
               ((jump ,v) (emit-jump 'jmp v))
               ((? label?) (emit-label exp)))))

    (emit-program
     (generate p))))

#|
(code
  (set! rax 8)
  (set! rcx 3)
  (set! rax (- rax rcx)))
|#
