(define label?
  (lambda (x)
    (and (symbol? x)
         (let* ([s (symbol->string x)] [n (string-length s)])
           (define (s0 i)
             (and (not (fx= i -1))
                  (cond
                   [(and (char<=? #\0 (string-ref s i))
                         (char<=? (string-ref s i) #\9))
                    (s1 (fx- i 1))]
                   [else #f])))
           (define (s1 i)
             (and (not (fx= i -1))
                  (let ([c (string-ref s i)])
                    (cond
                     [(and (char<=? #\1 (string-ref s i))
                           (char<=? (string-ref s i) #\9))
                      (s1 (fx- i 1))]
                     [(char=? c #\$) #t]
                     [(char=? c #\0) (s2 (fx- i 1))]
                     [else #f]))))
           (define (s2 i)
             (and (not (fx= i -1))
                  (let ([c (string-ref s i)])
                    (cond
                     [(and (char<=? #\1 (string-ref s i))
                           (char<=? (string-ref s i) #\9))
                      (s1 (fx- i 1))]
                     [(char=? c #\0) (s2 (fx- i 1))]
                     [else #f]))))
           (s0 (fx- n 1))))))

(define registers
  '(rax rcx rdx rbx rbp rsi rdi r8 r9 r10 r11 r12 r13 r14 r15))

(define register?
  (lambda (x)
    (memq x registers)))

(define extract-root
  (lambda (sym)
    (list->string
     (let ([chars (string->list (symbol->string sym))])
       (define (s0 ls)
         (cond
          [(null? ls) chars]
          [(char-numeric? (car ls)) (s1 (cdr ls))]
          [else chars]))
       (define (s1 ls)
         (cond
          [(null? ls) chars]
          [(char-numeric? (car ls)) (s1 (cdr ls))]
          [(memv (car ls) '(#\. #\$)) (reverse (cdr ls))]
          [else chars]))
       (s0 (reverse chars))))))

(define extract-suffix
  (lambda (sym)
    (let ([str (symbol->string sym)])
      (let ([n (string-length str)]
            [m (string-length (extract-root sym))])
        (and (not (= n m))
             (substring str (+ m 1) n))))))

(define label->x86-64-label
  (lambda (lab)
    (format "L~a" (extract-suffix lab))))

(define rand->x86-64-arg
  (lambda (rand)
    (define (register? x)
      (memq x '(rax rcx rdx rbx rsp rbp rsi rdi r8 r9 r10 r11 r12 r13 r14 r15)))
    (cond
     [(string? rand) rand] ; precooked operand
     [(number? rand)  (format "$~s" rand)]
     [(register? rand)  (format "%~s" rand)]
     [(label? rand) (format "~a(%rip)" (label->x86-64-label rand))]
;;     [(disp-opnd? rand) (format "~s(%~s)" (disp-opnd-offset rand) (disp-opnd-reg rand))]
;;     [(index-opnd? rand) (format "(%~s, %~s)" (index-opnd-breg rand) (index-opnd-ireg rand))]
     [else (error "invalid instruction argument ~s" rand)])))

(define-syntax emit
  (syntax-rules ()
    [(_ opcode) (printf "    ~a\n" opcode)]
    [(_ opcode rand)
     (printf "    ~a ~a\n" opcode (rand->x86-64-arg rand))]
    [(_ opcode rand1 rand2)
     (printf "    ~a ~a, ~a\n" opcode
             (rand->x86-64-arg rand1)
             (rand->x86-64-arg rand2))]))

(define emit-label
  (lambda (label)
    (if (string? label)
        (printf "~a:\n" label)
        (printf "~a:\n" (label->x86-64-label label)))))

(define-syntax emit-jump
  (syntax-rules ()
    [(_ opcode ?target)
     (let ([target ?target])
       (if (label? target)
           (emit opcode (label->x86-64-label target))
           (emit opcode (format "*~a" (rand->x86-64-arg target)))))]))

(define caller-saved-registers registers)
(define parameter-registers '(r8 r9))
(define frame-pointer-register 'rbp)
(define return-value-register 'rax)
(define return-address-register 'r15)
(define allocation-pointer-register 'rdx)

(define max-frame-var
  (make-parameter 100))

(define frame-vars '())

(define frame-var?
  (lambda (x)
    (and (symbol? x)
         (assq x frame-vars))))

(define frame-var->index
  (lambda (fv)
    (cdr (assq fv frame-vars))))

(define index->frame-var
  (lambda (n)
    (when (> n (max-frame-var)) (max-frame-var n))
    (string->symbol (string-append "fv" (number->string n)))))

(define-syntax emit-program
  (syntax-rules ()
    [(_ code code* ...)
     (begin
       (emit '.globl "_scheme_entry")
       (emit-label "_scheme_entry")
       (emit 'pushq 'rbx)
       (emit 'pushq 'rbp)
       (emit 'pushq 'r12)
       (emit 'pushq 'r13)
       (emit 'pushq 'r14)
       (emit 'pushq 'r15)
       (emit 'movq 'rdi frame-pointer-register)
       (emit 'movq 'rsi allocation-pointer-register)
       (emit 'leaq "_scheme_exit(%rip)" return-address-register)
       code code* ...
       (emit-label "_scheme_exit")
       (unless (eq? return-value-register 'rax)
               (emit 'movq return-value-register 'rax))
       (emit 'popq 'r15)
       (emit 'popq 'r14)
       (emit 'popq 'r13)
       (emit 'popq 'r12)
       (emit 'popq 'rbp)
       (emit 'popq 'rbx)
       (emit 'ret))]))

(define union
  (lambda (set1 set2)
    (let loop ([s1 set1])
      (cond
       [(null? s1) set2]
       [(memq (car s1) set2) (loop (cdr s1))]
       [else (cons (car s1) (loop (cdr s1)))]))))

(define make-begin
  (lambda (p)
    (define helper
      (lambda (ls ret)
        (cond
         ((null? ls) ret)
         (else
          (match (car ls)
                 (('begin x x* ...)
                  (helper (cdr ls) (helper `(,x ,@x*) ret)))
                 (('begin x)
                  (helper (cdr ls) (cons x ret)))
                 (x (helper (cdr ls) (cons x ret))))))))
    (let ((ret (helper p '())))
      (cond
       ((null? ret) '())
       ((null? (cdr ret)) (car ret))
       (else
        (cons 'begin (reverse ret)))))))

(define id (lambda (x) x))

(define count 0)
(define unique-suffix
  (lambda ()
    (set! count (+ count 1))
    (number->string count)))

(define unique-label
  (lambda (sym)
    (string->symbol
     (string-append
      (extract-root sym)
      "$"
      (let ([suffix (or (extract-suffix sym) (unique-suffix))])
        (substring suffix 0 (string-length suffix)))))))

(define unique-name
  (lambda (sym)
    (string->symbol
     (string-append (extract-root sym) "." (unique-suffix)))))

(define uvar?
  (lambda (x)
    (and (symbol? x)
         (let* ([s (symbol->string x)] [n (string-length s)])
           (define (s0 i)
             (and (not (fx= i -1))
                  (cond
                   [(and (char<=? #\0 (string-ref s i))
                         (char<=? (string-ref s i) #\9))
                    (s1 (fx- i 1))]
                   [else #f])))
           (define (s1 i)
             (and (not (fx= i -1))
                  (let ([c (string-ref s i)])
                    (cond
                     [(and (char<=? #\1 (string-ref s i))
                           (char<=? (string-ref s i) #\9))
                      (s1 (fx- i 1))]
                     [(char=? c #\.) #t]
                     [(char=? c #\0) (s2 (fx- i 1))]
                     [else #f]))))
           (define (s2 i)
             (and (not (fx= i -1))
                  (let ([c (string-ref s i)])
                    (cond
                     [(and (char<=? #\1 (string-ref s i))
                           (char<=? (string-ref s i) #\9))
                      (s1 (fx- i 1))]
                     [(char=? c #\0) (s2 (fx- i 1))]
                     [else #f]))))
           (s0 (fx- n 1))))))

(define int64?
  (lambda (x)
    (and (and (integer? x) (exact? x))
         (<= (- (expt 2 63)) x (- (expt 2 63) 1)))))
