;;;;;;;;;;;;;;;;;;;;;;;;;;;; uncover-assigned ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
; This pass collects assigned variables and list them inside the binding
; constructs that bind them. It works bottom-up and passes on a list of
; assigned variables. It only list assigned variables when it is also bound
; by the construct. Care must be taken for letrec and let bindings.

;; (let ([x.1 '0]) x.1)
;; =>
;; (let ([x.1 '0])
;;    (assigned ()
;;      x.1))
;;
;; (let ([x.1 '0]) (begin (set! x.1 (+ x.1 '1)) x.1))
;; =>
;; (let ([x.1 '0])
;;   (assigned (x.1)
;;     (begin
;;       (set! x.1 (+ x.1 '1))
;;         x.1)))

(define uncover-assigned
  (lambda (x)
    (define uncover
      (lambda (x)
        (match x
          [(letrec ([,uvar* ,[uncover -> expr* as*]] ...) ,[uncover -> expr as])
           (let* ([as-all (union (apply union as*) as)]
                  [u* (intersection uvar* as-all)])
             (values `(letrec ([,uvar* ,expr*] ...) (assigned ,u* ,expr))
                     (difference as-all uvar*)))]
          [(let ([,uvar* ,[uncover -> expr* as*]] ...) ,[uncover -> expr as])
           (let ([u* (intersection uvar* as)])
             (values `(let ([,uvar* ,expr*] ...) (assigned ,u* ,expr))
                     (union (apply union as*) (difference as uvar*))))]
          [(lambda (,uvar* ...) ,[uncover -> body as])
           (let ([u* (intersection uvar* as)])
             (values `(lambda (,uvar* ...) (assigned ,u* ,body)) as))]
          [(begin ,[uncover -> ef* as*] ...)
           (values `(begin ,ef* ...) (apply union as*))]
          [(if ,[uncover -> t at*] ,[uncover -> c ac*] ,[uncover -> a aa*])
           (values `(if ,t ,c ,a) (union at* ac* aa*))]
          [(set! ,x ,[uncover -> v av*])
           (values `(set! ,x ,v) (set-cons x av*))]
          [(,[uncover -> f af*] ,[uncover -> x* ax*] ...)
           (values `(,f ,x* ...) (union af* (apply union ax*)))]
          [,x (values x '())])))
    (let-values ([(x* as*) (uncover x)]) x*)))
