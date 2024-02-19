(do (set 'reverse0
         (lambda (res l)
           (if (= () l)
               res
               (reverse0 (cons (car l) res) (cdr l)))))
    (set 'reverse
         (lambda (l)
           (reverse0 () l))))
