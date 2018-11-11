(define (not-symbol-char x)
  (or (eof-object? x) (memq x '(#\space #\tab #\( #\) #\" #\[ #\] #\|))))

(define (read-string port)
  (read-char port)
  (let loop ((chars '())
             (c (read-char port)))
    (if (eq? c #\")
        (list->string (reverse chars))
        (loop (cons c chars) (read-char port)))))

(define (chars->symbol chars)
  (string->symbol (list->string chars)))

(define (peek-first-char port)
  (let ((c (peek-char port)))
    (if (or (eof-object? c) (memq c '(#\space #\tab)))
        (begin (read-char port) (peek-first-char port))
        c)))

(define (read-symbol port)
  (let loop ((chars '())
             (c (peek-first-char port)))
    (if (not-symbol-char c)
        (chars->symbol (reverse chars))
        (begin
          (read-char port)
          (loop (cons c chars)
                (peek-char port))))))

(define (read-sexp-h port res eos)
  (let ((c (peek-first-char port)))
    (if (eq? eos c)
        (begin (read-char port) (reverse res))
        (let ((exp (read port)))
          (read-sexp-h port (cons exp res) eos)))))

(define (read-sexp port)
  (read-char port)
  (read-sexp-h port '() #\)))

(define (rcons sexp)
  (if (pair? sexp)
      (cons 'cons
            (cons (rcons (car sexp))
                  (cons (rcons (cdr sexp)) '())))
      sexp))

(define (read-rcons port)
  (read-char port)
  (rcons (read-rcons-h port '())))

(define (reverse-h exp res)
  (if (null? exp)
      res
      (reverse-h (cdr exp) (cons (car exp) res))))

(define (read-rcons-h port res)
  (let ((c (peek-first-char port)))
    (cond
     ((eq? c #\])
      (begin (read port) (reverse res)))
     ((eq? c #\|)
      (let ((e1 (read-char port))
            (e2 (read port))
            (e3 (read-char port)))
        (reverse-h res e2)))
     (else
      (let ((exp (read port)))
        (read-rcons-h port (cons exp res)))))))

(define (read port)
  (let ((c (peek-first-char port)))
    (cond
     ((eq? #\" c) (read-string port))
     ((eq? #\( c) (read-sexp port))
     ((eq? #\[ c) (read-rcons port))
     (else
      (read-symbol port)))))
