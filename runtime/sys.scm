(begin
  (set 'null? (lambda (x) (= x ())))
  (set 'cadr (lambda (x) (car (cdr x))))
  (set 'caar (lambda (x) (car (car x))))
  (set 'cdar (lambda (x) (cdr (car x))))
  (set 'cddr (lambda (x) (cdr (cdr x))))
  (set 'caddr (lambda (x) (car (cdr (cdr x)))))
  (set 'cadddr (lambda (x) (car (cdr (cdr (cdr x))))))
  (set 'cdddr (lambda (x) (cdr (cdr (cdr (x))))))

  (func reverse-h
        res [] => res
        res [x . y] => (reverse (cons x res) y))

  (defun reverse (l)
    (reverse-h () l))

  (func map-h
        res f [] => (reverse res)
        res f [x . y] => (map-h [(f x) . res] f y))

  (defun map (f l)
    (map-h () f l))

  (func length-h
        res [] => res
        res [x . y] => (length-h (+ res 1) y))

  (defun length (l)
    (length-h 0 l))

  (defun filter-h (res fn l)
    (if (cons? l)
        (if (fn (car l))
            (filter-h (cons (car l) res) fn (cdr l))
            (filter-h res fn (cdr l)))
        (reverse res)))

  (defun filter (f l)
    (filter-h () f l))
  )
