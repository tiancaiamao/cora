(define (pmatch exp rules)
  (match-rules exp rules (lambda (x) x)))

(define (match-rules exp rules cc)
  (if (null? rules)
      (cc '(error "no match"))
      (let* ((rule (car rules))
             (more (cdr rules))
             (pat (car rule))
             (act (cadr rule)))
        (match-rule exp pat act more cc))))

(define (match-rule exp pat act more cc)
  (match-pattern exp pat
                 (lambda (patv)
                   (match-action exp pat act
                                 (lambda (actv)
                                   `(if ,patv
                                        ,actv
                                        ,(match-rules exp more cc)))))))

(define (match-pattern exp pat cc)
  (cond
   ((or (integer? pat) (string? pat))
    (cc `(eq? ,exp ,pat)))
   ((and (pair? pat) (eq? (car pat) 'quote))
    (cc `(eq? ,exp ,pat)))
   ((symbol? pat)
    (cc #t))
   ((and (pair? pat) (eq? (car pat) 'cons))
    (let ((p1 (cadr pat))
          (p2 (caddr pat)))
      (match-pattern `(car ,exp) p1
                     (lambda (p1v)
                       (match-pattern `(cdr ,exp) p2
                                      (lambda (p2v)
                                        (cc `(and (pair? ,exp) ,p1v ,p2v))))))))))

(define (match-action exp pat act cc)
  (cond
   ((symbol? pat)
    (cc `(let ((,pat ,exp))
           ,act)))
   ((and (pair? pat) (eq? (car pat) 'cons))
    (let ((p1 (cadr pat))
          (p2 (caddr pat)))
      (match-action `(car ,exp) p1 act
                    (lambda (act1)
                      (match-action `(cdr ,exp) p2 act1 cc)))))
   (else (cc act))))

(define (split-rules rules)
  (let loop ((remain rules)
             (ret '()))
    (if (null? remain)
        (reverse ret)
        (loop (cdddr remain)
              (cons (list (car remain) (caddr remain)) ret)))))


;; a b -> c d e -> f
;; (((cons a b) c) ((cons d e) f))
(define (extract-rules input)
  (extract-rules-h input '() '()))

(define (extract-rules-h input pat ret)
  (cond
   ((null? input)  (reverse ret))
   ((eq? (car input) '->)
    (extract-rules-h (cddr input)
                     '()
                     (cons (list (extract-rule-rcons (cdr pat) (car pat)) (cadr input)) ret)))
   (else (extract-rules-h (cdr input)
                          (cons (car input) pat)
                          ret))))

(define (extract-rule-rcons collected ret)
  (if (null? collected)
      ret
      (extract-rule-rcons (cdr collected)
                          (list 'cons (car collected) ret))))

(define (rule-arg-count rule)
  (let loop ((n 0)
             (l rule))
    (if (eq? '-> (car l))
        n
        (loop (+ n 1) (cdr l)))))

(define (generate-args n ret)
  (if (= n 0)
      ret
      (generate-args (- n 1)
                     (cons (gensym) ret))))

;; (match exp [X | Y] -> X  42 -> "sdf")
;; (pmatch exp ([X | Y] X) (42 "sdf"))
;; (defmacro match
;;    (lambda (input rename)
;;      (let ((exp (cadr input)))
;;        (pmatch exp (split-rules (cddr input))))))


;; input: (defun f a b -> c    d e -> h)
;; output: (define f (lambda (g0 g1)
;;            (pmatch (list g0 g1)
;;                   ((cons a b) x)
;;                   ((cons d e) h))))
;; (defmacro defun
;;   (lambda (input rename)
;;     (let* ((fname (cadr input))
;;            (rules (extract-rules (cddr input)))
;;            (narg (rule-arg-count (cddr input)))
;;            (args (generate-args narg '()))
;;            (tmp (gensym)))
;;       `(define ,fname
;;          (lambda ,args
;;            (let ((,tmp (list ,@args)))
;;              ,(pmatch tmp
;;                       rules)))))))
