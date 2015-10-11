;; ---------utils-----------
(load "match.ss")
(load "helpers.ss")
(load "driver.ss")

; global variable automatically set by test-all-analyze,
; don't change by hand!
(define *enable-analyze* #f)

(define *enable-forward-locations* #f)
(define *enable-pre-optimize* #f)
(define *enable-optimize-jumps* #f)
(define *enable-closure-optimization* #f)


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
                void))))

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

;; --------passes-----------
(load "parse-scheme.scm")
(load "convert-complex-datum.scm")
(load "uncover-assigned.scm")
(load "purify-letrec.scm")
(load "convert-assignments.scm")
(load "optimize-direct-call.scm")
(load "remove-anonymous-lambda.scm")
(load "sanitize-binding-forms.scm")
(load "convert-closures.scm")
(load "introduce-procedure-primitives.scm")
(load "lift-letrec.scm")
(load "normalize-context.scm")
(load "specify-representation.scm")
(load "uncover-locals.scm")
(load "remove-let.scm")
(load "verify-uil.scm")
(load "remove-complex-opera.scm")
(load "flatten-set.scm")
(load "impose-calling-conventions.scm")

(load "old.scm")

(load "generate-x86-64.scm")
(load "flatten-program.scm")
(load "expose-basic-blocks.scm")
(load "expose-frame-var.scm")
(load "finalize-locations.scm")

(define test-all-analyze
  (lambda ()
    (define bool->word
      (lambda (x)
        (if x "Yes" "No")))
    (fluid-let ([*enable-analyze* #t]
                [*all-closures* '()]
                [*all-code-size* '()])
      (test-all)
      (printf "\n** Options **
        forward-locations:     ~a
        closure optimization:  ~a
        pre-optimization:      ~a
        optimize jumps:        ~a\n\n"
              (bool->word *enable-forward-locations*)
              (bool->word *enable-closure-optimization*)
              (bool->word *enable-pre-optimize*)
              (bool->word *enable-optimize-jumps*))
      (printf "** closure analysis report **
       total closures created:  ~a
       total free var:          ~a
       average free var:        ~a\n\n"
              (length *all-closures*)
              (apply + *all-closures*)
              (exact->inexact (/ (apply + *all-closures*)
                                 (length *all-closures*))))
      (printf "** code length report **
       total code length:    ~a
       average code length:  ~a\n"
              (apply + *all-code-size*)
              (exact->inexact (/ (apply + *all-code-size*)
                                 (length *all-code-size*)))))))

(compiler-passes '(
                   parse-scheme
                   convert-complex-datum
                   uncover-assigned
                   purify-letrec
                   convert-assignments
                   optimize-direct-call
                   remove-anonymous-lambda
                   sanitize-binding-forms
                   convert-closures
                   introduce-procedure-primitives
                   lift-letrec
                   normalize-context
                   specify-representation
                   uncover-locals
                   remove-let
                   verify-uil
                   remove-complex-opera*
                   impose-calling-conventions
                   uncover-frame-conflict
                   pre-assign-frame
                   assign-new-frame
                   (iterate
                    finalize-frame-locations
                    select-instructions
                    uncover-register-conflict
                    assign-registers
                    (break when everybody-home?)
                    assign-frame)
                   finalize-locations
                   expose-frame-var
                   expose-basic-blocks
                   flatten-program
                   generate-x86-64
                   ))

(tracer #t)
(trusted-passes #t)

#!eof

(load "main.scm")

(test-one
 '(let ((a 3)
        (b 5))
    (set! a 7)
    (* a b)))

