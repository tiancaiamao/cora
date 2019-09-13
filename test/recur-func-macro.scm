;; The macroexpand result of recur
;; (func recur
;;       res 0 => res
;;       res n => (recur (+ res 1) (- n 1)))

(set (quote recur)
     (lambda (#p193 #p194)
       ((lambda (#cc195)
          (if (and (cons? (cons #p193 (cons #p194 ()))) (not (null? (cons #p193 (cons #p194 ())))))
              ((lambda (res)
                 (if (and (cons? (cdr (cons #p193 (cons #p194 ())))) (not (null? (cdr (cons #p193 (cons #p194 ()))))))
                     (if (equal? 0 (car (cdr (cons #p193 (cons #p194 ())))))
                         (if (null? (cdr (cdr (cons #p193 (cons #p194 ())))))
                             res
                             (#cc195))
                         (#cc195))
                     (#cc195))) (car (cons #p193 (cons #p194 ())))) (#cc195))) (lambda () ((lambda (#cc196) (if (and (cons? (cons #p193 (cons #p194 ()))) (not (null? (cons #p193 (cons #p194 ()))))) ((lambda (res) (if (and (cons? (cdr (cons #p193 (cons #p194 ())))) (not (null? (cdr (cons #p193 (cons #p194 ())))))) ((lambda (n) (if (null? (cdr (cdr (cons #p193 (cons #p194 ()))))) (recur (+ res 1) (- n 1)) (#cc196))) (car (cdr (cons #p193 (cons #p194 ()))))) (#cc196))) (car (cons #p193 (cons #p194 ())))) (#cc196))) (lambda () (error "no match-help found!")))))))
