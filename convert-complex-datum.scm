;;;;;;;;;;;;;;;;;;;;;;;;; convert-complex-datum ;;;;;;;;;;;;;;;;;;;;;;;;;;;

; This pass converts vector and pair constants and lift them out to the top
; of the program, making them global variables. The heart of the pass is
; convert-const, it converts a single quoted form into a binding which is
; then pushed onto the mutable list constants. It then outputs the
; temporary which represents the constant to its original context. Finally
; after all constants are converted, the bindings are wrapped around the
; whole program, making them global.

;; '(1 (2 (3 4 5)))
;; =>
;; (cons '1 (cons (cons '2 (cons (cons '3 (cons '4 (cons '5 '()))) '())) '()))
;;
;; '#(32 (33 33) 34)
;; =>
;; (let ([tmp.1 (make-vector '3)])
;;     (begin
;;        (vector-set! tmp.1 '0 32)
;;        (vector-set! tmp.1 '1 (cons '33 (cons '33 '())))
;;        (vector-set! tmp.1 '2 34))
;;        tmp.1)
;;
;; (let ([f.1 (lambda () (cons '(1 . 2) '(3 . 4)))])
;;    (cons (f.1) (f.1)))
;; =>
;; (let ([tmp.13 (cons '1 '2)] [tmp.12 (cons '3 '4)])
;;    (let ([f.1 (lambda () (cons tmp.13 tmp.12))])
;;      (cons (f.1) (f.1))))
;;
(define convert-complex-datum
  (lambda (x)
    (define constants '())
    (define convert-const
      (lambda (x)
        (match x
               [() (quote '())]
               [(,[a] . ,[d]) `(cons ,a ,d)]
               [#(,[x*] ...)
                (let* ([tmp (unique-name 'tmp)]
                       [len (length `(,x* ...))]
                       [sets (let loop ([ls `(,x* ...)] [n 0])
                               (cond
                                [(null? ls) '()]
                                [else (cons `(vector-set! ,tmp (quote ,n) ,(car ls))
                                            (loop (cdr ls) (add1 n)))]))])
                  `(let ([,tmp (make-vector (quote ,len))])
                     (begin ,@sets ,tmp)))]
               [,x `(quote ,x)])))
    (define convert
      (lambda (x)
        (match x
               [(,let/rec ([,u* ,[v*]] ...) ,[expr])
                (guard (memq let/rec '(letrec let)))
                `(,let/rec ([,u* ,v*] ...) ,expr)]
               [(lambda (,uvar* ...) ,[body])
                `(lambda (,uvar* ...) ,body)]
               [(begin ,[ef*] ...)
                `(begin ,ef* ...)]
               [(if ,[t] ,[c] ,[a])
                `(if ,t ,c ,a)]
               [(set! ,x ,[v])
                `(set! ,x ,v)]
               [(quote ,imm) (guard (or (number? imm) (boolean? imm) (null? imm)))
                `(quote ,imm)]
               [(quote ,imm)
                (let ([tmp (unique-name 'tmp)]
                      [const (convert-const imm)])
                  (set! constants (cons `(,tmp ,const) constants))
                  tmp)]
               [(,[f] ,[x*] ...)
                `(,f ,x* ...)]
               [,x x])))
    (let ([x* (convert x)])
      (if (null? constants) x* `(let ,constants ,x*)))))
