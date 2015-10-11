;;;;;;;;;;;;;;;;;;;;;;;;;;;;; purify-letrec ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; This pass uses a transformation in between the simpler transformation and
; the more sophisticated transformation. It classify only two kinds of
; letrec bindings: those bind lambdas and those bind other expressions. It
; doesn't separate "simple" and "complex" expressions in order to simplify
; the pass. Unnecessary assignments for simple expressions will be removed
; by my optimization pass forward-locations, but neither forward-locations
; nor optimize-known-call can optimize code produced by mixing lambdas with
; other expressions in letrec, so I decided to separate lambdas and other
; expressions.


#|
(letrec ((x e) ...)
  (assigned (x! ...)
            body))
=>
(let ((x (void)) ...)
  (assigned (x ...)
            (begin
              (let ((t e) ...)
                (assigned ()
                          (begin (set! x t) ...)))
              body)))
|#

(define purify-letrec
  (lambda (x)
    (define orall
      (lambda (ls)
        (cond
         [(null? ls) #f]
         [(car ls) #t]
         [else (orall (cdr ls))])))
    (define not-simple?
      (lambda (x* e in-lam?)
        (match e
          [(letrec ([,uvar* ,[expr*]] ...) ,[expr])
           (and (null? (intersection x* uvar*)) (or (orall expr*) expr))]
          [(let ([,uvar* ,[expr*]] ...) ,[expr])
           (or (orall expr*) (and (null? (intersection x* uvar*)) expr))]
          [(lambda (,uvar* ...) ,body)
           (and (null? (intersection x* uvar*)) (not-simple? x* body #t))]
          [(assigned (,as* ...) ,[body]) body]
          [(begin ,[ef*] ...)
           (orall ef*)]
          [(if ,[t] ,[c] ,[a])
           (or t c a)]
          [(set! ,[x] ,[v])
           (or x v)]
          [(quote ,imm) #f]
          [(,f ,[x*] ...) (guard (prim? f))
           (orall x*)]
          [(,[fx*] ...) (or (not in-lam?) (orall fx*))]
          [,e (memq e x*)])))
    (define classify
      (lambda (df* as*)
        (let ([lhs* (map car df*)])
          (let loop ([df* df*] [simple* '()] [lambda* '()] [complex* '()])
            (cond
             [(null? df*) (values simple* lambda* complex*)]
             [else
              (let ([new-bd (cons (caar df*) (purify-letrec (cdar df*)))])
                (match new-bd
                  [(,lab (lambda (,u* ...) ,body)) (guard (memq lab as*))
                   (loop (cdr df*) simple* lambda* (cons new-bd complex*))]
                  [(,lab (lambda (,u* ...) ,body))
                   (loop (cdr df*) simple* (cons new-bd lambda*) complex*)]
                  [(,lab ,e)
                   (guard (not (not-simple? lhs* e #f)))
                   (loop (cdr df*) (cons new-bd simple*) lambda* complex*)]
                  [,new-bd
                   (loop (cdr df*) simple* lambda* (cons new-bd complex*))]))])))))
    (match x
      [(letrec ,df* (assigned (,as* ...) ,[body]))
       (letv* ([(simple* lambda* complex*) (classify df* as*)])
         (match complex*
           [([,x* ,e*] ...)
            (let* ([tmp* (map (lambda (x) (unique-name 'tmp)) x*)]
                   [body1 (if (null? complex*)
                              body
                              `(begin
                                 (let ([,tmp* ,e*] ...)
                                   (assigned () (begin (set! ,x* ,tmp*) ...)))
                                 ,body))]
                   [body2 (if (null? lambda*)
                              body1
                              `(letrec ,lambda* ,body1))]
                   [body3 (if (null? complex*)
                              body2
                              `(let ([,x* (void)] ...)
                                 (assigned (,x* ...) ,body2)))])
              (if (null? simple*)
                  body3
                  (let ([as^ (intersection as* (map car simple*))])
                    `(let ,simple* (assigned ,as^ ,body3)))))]))]
      [(let ([,uvar* ,[expr*]] ...) (assigned (,as* ...) ,[expr]))
       `(let ([,uvar* ,expr*] ...) (assigned (,as* ...) ,expr))]
      [(lambda (,uvar* ...) (assigned (,as* ...) ,[body]))
       `(lambda (,uvar* ...) (assigned (,as* ...) ,body))]
      [(begin ,[ef*] ...)
       `(begin ,ef* ...)]
      [(if ,[t] ,[c] ,[a])
       `(if ,t ,c ,a)]
      [(set! ,x ,[v])
       `(set! ,x ,v)]
      [(,[f] ,[x*] ...)
       `(,f ,x* ...)]
      [,x x])))
