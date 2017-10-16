;; -*- mode: scheme; coding: utf-8 -*-
;; Copyright (C) 2011 Göran Weinholt <goran@weinholt.se>

;; Permission is hereby granted, free of charge, to any person obtaining a copy
;; of this software and associated documentation files (the "Software"), to deal
;; in the Software without restriction, including without limitation the rights
;; to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
;; copies of the Software, and to permit persons to whom the Software is
;; furnished to do so, subject to the following conditions:

;; The above copyright notice and this permission notice shall be included in
;; all copies or substantial portions of the Software.

;; THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
;; IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
;; FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
;; AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
;; LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
;; OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
;; THE SOFTWARE.

;; Simple defmacro-like expander

;; The output from expand should be simplified Scheme code:
;; (define <variable> <expression>
;; (lambda <formals> (begin <expression> ...))
;; (if <test> <consequence> <alternate>)
;; (begin <expression> ...)
;; (<procedure> <argument> ...)
;; (quote <datum>)
;; (set! <variable> <expression>)
;; <variable>

;; Most of this code was written before we had quasiquote.

(cond-expand
 (guile
  (use-modules (rnrs lists)))           ;for-all
 (else #f))

;;;
(define (lambda-formals x) (cadr x))

(define (lambda-body* x) (cddr x))      ;multi-expression lambda

(define (lambda-body x) (caddr x))      ;simplified lambda

(define (set!-name x) (cadr x))

(define (set!-expression x) (caddr x))

(define (if-test x) (cadr x))

(define (if-consequence x) (caddr x))

(define (if-alternative? x) (pair? (cdddr x)))

(define (if-alternative x) (cadddr x))

(define (define-macro-name x) (caadr x))

(define (define-macro-formals x) (cdadr x))

;;;

(define-macro (define-macro name/args . body)
   (list 'add-macro! (list 'quote (car name/args))
         (append (list 'lambda (cdr name/args))
                 body)))

(define-macro (cond-expand . tests)     ;SRFI-0
  (define (fullfilled? f)
    ;; XXX: does not support and, or and not
    (or (eq? f 'else)
        (memq f '(conscheme))))
  (let lp ((i tests))
    (cond ((null? i)
           (error 'cond-expand "No matching clause" tests))
          ((fullfilled? (caar i))
           (cons 'begin (cdar i)))
          (else
           (lp (cdr i))))))

(define-macro (let bindings . body)
  (if (symbol? bindings)
      ;; Named let
      (let ((name bindings)
            (bindings (car body))
            (body (cdr body)))
        (append (list (list 'letrec
                            (list (list name
                                        (append (list 'lambda (map car bindings))
                                                body)))
                            name))
                (map cadr bindings)))
      ;; Regular let
      (append (list (append (list 'lambda (map car bindings))
                            body))
              (map cadr bindings))))

(define-macro (let* bindings . body)
  (if (null? body)
      (error 'let* "Empty body" bindings body))
  (let lp ((b bindings))
    (if (null? b)
        (cons 'begin body)
        (let ((b1 (car b))
              (b (cdr b)))
          (list 'let (list b1)
                (lp b))))))

(define-macro (letrec bindings . body)
  (let ((temps (map (lambda (_) (gensym)) bindings)))
    (list 'let (map (lambda (binding) (list (car binding) '(unspecified)))
                    bindings)
          (append (list 'let (map (lambda (temp binding) (list temp (cadr binding)))
                                  temps bindings))
                  (append (map (lambda (temp binding)
                                 (list 'set! (car binding) temp))
                               temps bindings)
                          body)))))

(define-macro (letrec* bindings . body)
  (append (list 'let (map (lambda (binding) (list (car binding) '(unspecified)))
                          bindings))
          (map (lambda (binding)
                 (cons 'set! binding))
               bindings)
          body))

(define-macro (let-values bindings . body)
  (if (null? bindings)
      `(let () ,@body)
      (let* ((binding (car bindings))
             (formals (car binding))
             (producer (cadr binding)))
        `(call-with-values (lambda ()
                             ,producer)
                           (lambda ,formals
                             (let-values ,(cdr bindings)
                               ,@body))))))

(define-macro (include filename)
  (call-with-input-file filename
    (lambda (p)
      (let lp ((datums '()))
        (let ((datum (read p)))
          (if (eof-object? datum)
              (cons 'begin (reverse datums))
              (lp (cons datum datums))))))))

(define-macro (case value . cases)
  (let ((eq-works?
         (lambda (x)
           ;; True if x is of a type that eqv? does not compare more
           ;; discriminately than eq?.
           (or (symbol? x) (char? x) (boolean? x)))))
    (let ((tmp (gensym)))
      (list 'let (list (list tmp value))
            (cons 'cond
                  (map (lambda (c)
                         (cond ((eq? (car c) 'else)
                                c)
                               ((for-all eq-works? (car c))
                                ;; Silly optimization
                                (if (= (length (car c)) 1)
                                    (list (list 'eq? tmp (list 'quote (caar c)))
                                          (cons 'begin (cdr c)))
                                    (list (list 'memv tmp (list 'quote (car c)))
                                          (cons 'begin (cdr c)))))
                               (else
                                (list (list 'memv tmp (list 'quote (car c)))
                                      (cons 'begin (cdr c))))))
                       cases))))))

(define-macro (cond . tests)
  ;; TODO: does not support =>
  ;; TODO: does not support (cond (expr))
  (let lp ((tests tests))
    (if (null? tests)
        (list 'unspecified)
        (let ((test (car tests))
              (tests (cdr tests)))
          (if (eq? (car test) 'else)
              (if (null? tests)
                  (cons 'begin (cdr test))
                  (error 'cond "else must be the last test" tests))
              (list 'if
                    (car test)
                    (cons 'begin (cdr test))
                    (lp tests)))))))

(define-macro (or . arms)
  (let lp ((arms arms))
    (cond ((null? arms) #f)
          ((null? (cdr arms))
           (car arms))
          (else
           (let ((tmp (gensym)))
             (list 'let (list (list tmp (car arms)))
                   (list 'if tmp tmp (lp (cdr arms)))))))))

(define-macro (and . arms)
  (let lp ((arms arms))
    (cond ((null? arms) #t)
          ((null? (cdr arms))
           (car arms))
          (else
           (list 'if (car arms) (lp (cdr arms)) #f)))))

(define-macro (unless test . body)
  (list 'cond (cons (list 'not test) body)))

(define-macro (when test . body)
  (list 'cond (cons test body)))

(define-macro (endianness s)
  (case s
    ((little) ''little)
    ((big) ''big)
    (else
     (error 'endianness "Syntax error" s))))

(define-macro (do vars test . body)
  (let ((lp (gensym))
        (vars-once (filter (lambda (x) (null? (cddr x))) vars))
        (vars-up (filter (lambda (x) (pair? (cddr x))) vars)))
    (list 'let vars-once
          (list 'let lp (map (lambda (x) (list (car x) (cadr x)))
                             vars-up)
                (list 'cond test
                      (cons 'else
                            (append body
                                    (list (cons lp (map caddr vars-up))))))))))

;; Most likely there are a bunch of bugs in this implementation of
;; quasiquote. It does not handle the multi-expression unquote and
;; unquote-splicing from the R6RS. Maybe it doesn't keep constant
;; datums constant.
(define-macro (quasiquote template)
  (define (simp x)
    ;; (print "SIMP " x)
    (cond ((and (pair? x) (eq? (car x) 'cons)
                (pair? (cdr x)))
           (let ((d (cddr x)))
             ;; (print "#;D " d)
             (cond ((and (pair? d) (equal? d '('())))
                    (list 'list (cadr x)))
                   ((and (pair? d) (eq? (caar d) 'list) (null? (cdr d)))
                    (cons 'list (cons (cadr x)
                                      (cdar d))))
                   (else
                    ;; XXX: should probably simplify more here
                    x))))
          ((and (pair? x) (eq? (car x) 'list))
           (if (for-all (lambda (x)
                           (and (pair? x) (pair? (cdr x)) (null? (cddr x))
                                (eq? (car x) 'quote)))
                         (cdr x))
               (list 'quote (map cadr (cdr x)))
               (cons 'list (map simp (cdr x)))))
          (else x)))
  ;; See the R5RS 7.1.4 and 4.2.6
  (define (qq template depth)
    ;;(print template " @ " depth)
    (cond ((pair? template)
           ;; <list qq template D>  etc
           (let ((x (car template)))
             (cond ((pair? x)
                    ;;(print 'is-pair: '(car x) (car x) '(cdr template) (cdr template))
                    (cond ((and (eq? (car x) 'unquote-splicing)
                                #;(pair? (cdr template)))
                           (let ((depth* (- depth 1)))
                             (if (= depth* 0)
                                 (list 'append (cadr x)
                                       (qq (cdr template) depth))
                                 ;; a level above the first quasiquote...
                                 (simp (list 'cons (list 'list '(quote unquote-splicing)
                                                         (qq (cadr template))))))))
                          ;; XXX: would probably check for unquote
                          ;; here in order to handle the new
                          ;; quasiquote stuff in the R6RS
                          (else
                           (simp (list 'cons (qq (car template) depth)
                                       (qq (cdr template) depth))))))
                   ((eq? x 'unquote)
                    ;; <unquotation D>
                    (let ((depth (- depth 1)))
                      (if (= depth 0)
                          (cadr template)
                          ;; haven't reached the first quasiquote yet
                          ;; here either
                          (simp (list 'list '(quote unquote)
                                      (qq (cadr template) depth))))))
                   ((eq? x 'quasiquote)
                    ;; nested quasiquote
                    (simp (list 'list '(quote quasiquote)
                                (qq (cadr template) (+ depth 1)))))
                   (else
                    (simp (list 'cons (qq (car template) depth)
                                (qq (cdr template) depth)))))))
          ((vector? template)
           ;; <vector qq template D>
           ;; XXX: this seems ugly
           (list 'list->vector (qq (vector->list template) depth)))
          (else                         ;datum
           (list 'quote template))))
  (simp (qq template 1)))

(define-macro (select . ar)
  (define (make-test p sym)
    (cond ((vector? p)
           (let lp ((i 0) (acc '()))
             (cond ((= i (vector-length p))
                    (cons `(= (vector-length ,sym) ,i) acc))
                   ((symbol? (vector-ref p i))
                    (lp (+ i 1) acc))
                   (else
                    (let ((tmp (vector-ref p i)))
                      (cond ((and (pair? tmp) (eq? (car tmp) 'quote)
                                  (list? tmp) (= (length tmp) 2))
                             (lp (+ i 1)
                                 (cons `(eq? ',(cadr tmp) (vector-ref ,sym ,i))
                                       acc)))
                            ((and (pair? tmp) (eq? (car tmp) 'eq?)
                                  (list? tmp) (= (length tmp) 2))
                             (lp (+ i 1)
                                 (cons `(eq? ,(cadr tmp) (vector-ref ,sym ,i))
                                       acc)))
                            (else
                             (lp (+ i 1)
                                 (cons `(equal? ,tmp (vector-ref ,sym ,i))
                                       acc)))))))))
          ((eq? p 'else) '())
          ((eq? p 'timeout) (error 'fixme "timeout"))
          (else (error 'select "Bad pattern" p))))
  (define (make-bind p sym)
    (cond ((vector? p)
           (let lp ((i 0) (acc '()))
             (cond ((= i (vector-length p)) acc)
                   ((not (symbol? (vector-ref p i)))
                    (lp (+ i 1) acc))
                   (else
                    (let ((tmp (vector-ref p i)))
                      (lp (+ i 1)
                          (cons `(,tmp (vector-ref ,sym ,i))
                                acc)))))))
          ((eq? p 'else) '())
          ((eq? p 'timeout) '())
          (else (error 'select "Bad pattern"))))
  (let ((tmp (gensym))
        (Q (gensym))
        (loop (gensym)))
    `(begin
       ;; TODO: set up timeouts (with ids to keep them unique)
       #;(let ((,tt (start-timeout ,time ,timeout-id))))
       (let ((,Q (thread-queue (current-thread))))
         (queue-restart! ,Q)
         (let ,loop ()
           (let ((,tmp (queue-next! ,Q)))
             (cond ,@(map (lambda (x)
                            `((and ,@(make-test (car x) tmp))
                              (queue-remove! ,Q)
                              (let ,(make-bind (car x) tmp)
                                ,@(cdr x))))
                          ar)
                   ,@(if (assq 'else ar)
                         '()
                         ;; the default else case
                         `((else (,loop)))))))))))


(define (formals-to-list x)
  (cond ((null? x) x)
        ((symbol? x) (list x))
        (else (cons (car x) (formals-to-list (cdr x))))))

(define (exp-new-env) '())

(define (exp-extend-env formals env)
  (append (formals-to-list formals) env))

(define (begin-splice exprs)
  (append-map (lambda (expr)
                (if (and (pair? expr)
                         (eq? (car expr) 'begin))
                    (begin-splice (cdr expr))
                    (list expr)))
              exprs))

(define (begin-wrap body)
  (cond ((null? body)
         '(unspecified))
        ((and (pair? body) (null? (cdr body)))
         (car body))
        (else
         (cons 'begin body))))

(define (fixup-body body)
  ;; `body' is a list of expressions from a lambda body. First all
  ;; begins are spliced into the spine of the sequence. Then internal
  ;; defines, if any, are transformed into a letrec. If necessary,
  ;; everything is wrapped in a begin.
  (define (collect exprs)
    (define (fixup-lambda def)
      (if (symbol? (car def))
          def
          (list (caar def)
                (cons* 'lambda (cdar def) (cdr def)))))
    (let lp ((exprs exprs)
             (defs '()))
      (cond ((null? exprs)
             (error 'expand "Empty lambda body"))
            ((and (pair? exprs)
                  (pair? (car exprs))
                  (eq? (caar exprs) 'define))
             (lp (cdr exprs)
                 (cons (fixup-lambda (cdar exprs)) defs)))
            (else
             (cons (reverse defs) exprs)))))
  (let ((body+defs (collect (begin-splice body))))
    (let ((defs (car body+defs))
          (body (cdr body+defs)))
      (let ((body (begin-wrap body)))
        (if (null? defs)
            body
            (list 'letrec* defs body))))))

(define (expand* x env)
  (define (expand** x env)
    (let ((expander (assq (car x) *macros*)))
      (if expander
          (expand* (apply (cdr expander) (cdr x)) env)
          (case (car x)
            ((lambda)
             (if (null? (lambda-body* x))
                 (error 'expand "Missing lambda body" x))
             (list 'lambda (lambda-formals x)
                   (let ((newenv (exp-extend-env (lambda-formals x) env)))
                     (expand* (fixup-body (lambda-body* x)) newenv))))
            ((if)
             (list 'if
                   (expand* (if-test x) env)
                   (expand* (if-consequence x) env)
                   (expand* (if (if-alternative? x)
                                (if-alternative x)
                                '(unspecified))
                            env)))
            ((quote) x)
            ((define)
             (if (not (null? env))
                 (error 'expand "Define is not allowed here" x))
             (cond ((pair? (cadr x))
                    ;; (define (name . formals) body)
                    (expand* (list 'define (caadr x)
                                   (append (list 'lambda (cdadr x)) (cddr x)))
                             env))
                   (else
                    ;; (define name expr)
                    (if (not (symbol? (cadr x)))
                        (error 'expand "Syntax error" x))
                    (list 'define (cadr x) (expand* (caddr x) env)))))
            ((begin)
             (begin-wrap (begin-splice (map-in-order (lambda (x) (expand* x env)) (cdr x)))))
            ((set!)
             (list 'set! (set!-name x) (expand* (set!-expression x) env)))
            ((define-macro)
             (add-macro! (define-macro-name x)
                         (eval (append (list 'lambda (define-macro-formals x))
                                       (cddr x))
                               (interaction-environment)))
             '(unspecified))
            (else
             ;; Probably a procedure call
             (if (list? x)
                 (map (lambda (x) (expand* x env)) x)
                 (error 'expand "Syntax error" x)))))))
  (cond ((symbol? x) x)
        ((or (char? x) (number? x) (boolean? x) (string? x) (bytevector? x))
         (list 'quote x))
        ((vector? x)
         (error 'expand "Invalid expression: vectors must be quoted" x))
        ((pair? x)
         (expand** x env))
        (else
         (error 'expand "Invalid syntax" x))))

(define (expand x)
  (expand* x (exp-new-env)))
