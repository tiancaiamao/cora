(define macro-tag (gensym "macro"))
(define (make-macro func env)
  (vector macro-tag func env))

(define (macro? x)
  (and (vector? x) (eq? (vector-ref x 0) macro-tag)))

(define (macro-func x)
  (vector-ref x 1))

(define (macro-env x)
  (vector-ref x 2))

(define generated-tag (gensym "generated"))

(define (make-generated name uid)
  (vector generated-tag name uid))

(define (generated? x)
  (and (vector? x) (eq? (vector-ref x 0) generated-tag)))

(define (generated-uid x)
  (vector-ref x 2))

(define (generated-name x)
  (vector-ref x 1))

(define special-tag (gensym "special"))

(define (make-special f)
  (vector special-tag f))

(define (special? x)
  (and (vector? x) (eq? (vector-ref x 0) special-tag)))

(define (special-f s)
  (vector-ref s 1))

(define *macro* '())

(define (apply-env-or-unbound env exp)
  (let ((item (assq exp env)))
    (if item
        (cdr item)
        exp)))

(define (macroexpand exp)
  (expand exp '() (init-env)))

(define (expand exp menv env)
  (cond
   ((symbol? exp) (apply-env-or-unbound env exp))
   ((generated? exp) (expand-name exp menv env))
   ((pair? exp)
    (let ((den (expand-name (car exp) menv env)))
      (cond
       ((special? den) (expand-special-form den exp menv env))
       ((macro? den) (invoke-macro den exp menv env))
       (else (expand-application exp menv env)))))
   (else exp)))  ;; for const like string, number and so on

(define (expand-special-form den exp menv env)
  ((special-f den) exp menv env))

(define (expand-name x menv env)
  (cond
   ((symbol? x)
    (let ((item (assq x env)))
      (if item
          (cdr item)
          (let ((item (assq x *macro*)))
            (if item
                (cdr item)
                x)))))
   ((generated? x)
    (let ((env-of-def (assq (generated-uid x) menv)))
      (if env-of-def
          (apply-env-or-unbound (cdr env-of-def) (generated-name x))
          (error "where it's generated?"))))))

(define (expand-sequence seq menv env)
  (map (lambda (x) (expand x menv env)) seq))

(define expand-application expand-sequence)

(define (expand-begin exp menv env)
  (cons 'begin (expand-sequence (cdr exp) menv env)))

(define (expand-if exp menv env)
  (cons 'if (expand-sequence (cdr exp) menv env)))

(define (expand-set! exp menv env)
  `(set! ,(expand-name (cadr exp) menv env)
         ,(expand (caddr exp) menv env)))

(define (uid)
  (let ((tmp 0))
    (set! tmp (+ tmp 1))
    tmp))

(define (rename s)
  (string->symbol (string-append (symbol->string s) "@" (number->string (uid)))))

(define (expand-lambda exp menv env)
  (let* ((args (cadr exp))
         (values (map rename args))
         (binds (map cons args values))
         (new-env (append binds env)))
    `(lambda ,values
       ,@(expand-sequence (cddr exp) menv new-env))))

(define (expand-defmacro exp menv env)
  (let* ((name (cadr exp))
         (func (eval (caddr exp)))
         (mac (make-macro func env)))
    (set! *macro* (cons (cons name mac) *macro*))))

(define (invoke-macro mac exp menv env)
  (let* ((transform (macro-func mac))
         (env-of-def (macro-env mac))
         (uid (uid))
         (new-menv (cons (cons uid env-of-def) menv))
         (rename (lambda (x) (make-generated x uid)))
         (new-exp (transform exp rename)))
    (expand new-exp new-menv env)))

(define (init-env)
  (list (cons 'if (make-special expand-if))
        (cons 'begin (make-special expand-begin))
        (cons 'set! (make-special expand-set!))
        (cons 'lambda (make-special expand-lambda))
        (cons 'defmacro (make-special expand-defmacro))))

(expand '(defmacro swap!
           (lambda (exp rename)
             (let ((%let (rename 'let))
                   (%set (rename 'set!))
                   (x (cadr exp))
                   (y (caddr exp)))
               `(,%let ((tmp ,x))
                       (,%set ,x ,y)
                       (,%set ,y tmp)))))
        '() (init-env))

(set! *macro* '())

(expand '(swap! a b) '() (init-env))
