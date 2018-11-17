(define builtin-read read)

(define (not-symbol-char x)
  (or (eof-object? x) (memq x '(#\space #\tab #\( #\) #\" #\[ #\] #\|))))

(define (peek-first-char port)
  (let ((c (peek-char port)))
    (if (or (eof-object? c) (memq c '(#\space #\tab)))
        (begin (read-char port) (peek-first-char port))
        c)))

(define (read-sexp-h port res eos)
  (let ((c (peek-first-char port)))
    (if (eq? eos c)
        (begin (read-char port) (reverse res))
        (let ((exp (read port)))
          (read-sexp-h port (cons exp res) eos)))))

(define (read-sexp port)
  (read-char port)
  (read-sexp-h port '() #\)))

(define (read-rcons port)
  (read-char port)
  (read-rcons-h port))

(define (read-rcons-h port)
  (let ((c (peek-first-char port)))
    (cond
     ((eq? c #\])
      (begin (read-char port)
             '(quote ())))
     ((eq? c #\|)
      (let ((e1 (read-char port))
            (e2 (read port))
            (e3 (read-char port)))
        e2))
     (else
      (let ((exp (read port)))
        (list 'cons exp (read-rcons-h port)))))))

(define (read port)
  (let ((c (peek-first-char port)))
    (cond
     ((eq? #\( c) (read-sexp port))
     ((eq? #\[ c) (read-rcons port))
     (else
      (builtin-read port)))))
