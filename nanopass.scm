(define nanopass
  (lambda x
    (define nano0
      (lambda (l)
        (if (null? l)
            (lambda (x) x)
            (lambda (exp)
              ((nano0 (cdr l)) ((car l) exp))))))
    (nano0 x)))
