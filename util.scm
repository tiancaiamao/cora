;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; new primitive tags
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define mask-box #b111)
(define tag-box  #b100)
(define size-box 8)

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; utilities for the whole compiler
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

(define-syntax letv*
  (syntax-rules ()
    [(_ () body ...) (begin body ...)]
    [(_ ([(x0 ...) v0] [x1 v1] ...) body ...)
     (let-values ([(x0 ...) v0])
       (letv* ([x1 v1] ...) body ...))]
    [(_ ([x0 v0] [x1 v1] ...) body ...)
     (letv* ([(x0) v0] [x1 v1] ...) body ...)]))

(define-syntax peek
  (syntax-rules ()
    [(_ x) (printf "~a = ~a\n\n" 'x x)]
    [(_ x y ...)
     (begin (printf "~a = ~a\n" 'x x)
            (peek y ...))]))


(define id (lambda (v) v))

(define orall
  (lambda (ls)
    (cond
     [(null? ls) #f]
     [(car ls) #t]
     [else (orall (cdr ls))])))

(define location?
  (lambda (x)
    (or (register? x) (frame-var? x) (uvar? x))))

(define prim?
  (lambda (x)
    (memq x '(+ - * logand logor sra = < <= >= >
                boolean? eq? fixnum? null? pair? box? vector? procedure?
                cons car cdr set-car! set-cdr!
                box unbox set-box!
                make-vector vector-length vector-ref vector-set!
                void
                foreign-call))))

(define binop?
  (lambda (x)
    (memq x '(+ - * logand logor sra))))

(define relop?
  (lambda (x)
    (memq x '(= < <= >= >))))

(define mref?
  (lambda (x)
    (match x
      [(mref ,base ,off) #t]
      [,x #f])))

; get conflicting vars/regs of a variable
(define get-conflicts
  (lambda (x ct)
    (cdr (assq x ct))))

; remove a node from a conflict graph (non-destructive)
(define ct-remove-node
  (lambda (x ct)
    (let ([p (assq x ct)])
      (map (lambda (y) (cons (car y) (remq x (cdr y)))) (remq p ct)))))

; find the minimum from a list using key as the weight function
(define find-min
  (lambda (key ls)
    (let loop ([min (car ls)] [rest (cdr ls)])
      (cond
       [(null? rest) min]
       [(< (key (car rest)) (key min)) (loop (car rest) (cdr rest))]
       [else (loop min (cdr rest))]))))

; ((a . b) (c .d)) -> ((a b) (c d))
(define alist->list
  (lambda (assoc-ls)
    (map (lambda (x) (list (car x) (cdr x))) assoc-ls)))

; ((a b) (c d)) -> ((a . b) (c .d))
(define list->alist
  (lambda (ls)
    (map (lambda (x) (cons (car x) (cadr x))) ls)))

; make-begin takes a sequence or a begin form
(define make-begin
  (lambda (x)
    (define flatten
      (lambda (x)
        (match x
          [(begin ,[e*] ...)
           `(,e* ... ...)]
          [,x `(,x)])))
    (match x
      [(begin ,e* ...) `(begin ,@(flatten x))]
      [(,e) e]
      [(,e* ...) `(begin ,@(flatten `(begin ,e* ...)))])))

(define error-handler (lambda args args))

(define (constant? x) (or (boolean? x) (null? x) (number? x) (string? x)))
(define (primitive? x) (memq x '(procedure? void foreign-call + - * / =)))
