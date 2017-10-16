;; -*- mode: scheme; coding: utf-8 -*-
;; Copyright (C) 2011, 2017 Göran Weinholt <goran@weinholt.se>
;; Copyright (C) 2011 Per Odlund <per.odlund@gmail.com>

;; Permission is hereby granted, free of charge, to any person obtaining a copy
;; of this software and associated documentation files (the "Software"), to deal
;; in the Software without restriction, including without limitation the rights
;; to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
;; copies of the Software, and to permit persons to whom the Software is
;; furnished to do so, subject to the following conditions:

;; The above copyright notice and this permission notice shall be included in
;; all copies or substantial portions of the Software.

;; THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
;; IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
;; FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
;; AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
;; LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
;; OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
;; THE SOFTWARE.

;; Standard library for conscheme.

;;; Equivalence predicates

(define (eqv? x y)
  (or (eq? x y)
      (if (and (number? x) (number? y))
          (= x y)
          #f)))

(define (equal? x y)
  (cond ((and (pair? x) (pair? y))
         (and (equal? (car x) (car y))
              (equal? (cdr x) (cdr y))))
        ((and (string? x) (string? y))
         (string=? x y))
        ((and (vector? x) (vector? y)
              (= (vector-length x) (vector-length y)))
         (let lp ((i (- (vector-length x) 1)))
           (cond ((= i -1) #t)
                 ((not (equal? (vector-ref x i) (vector-ref y i)))
                  #f)
                 (else (lp (- i 1))))))
        (else (eqv? x y))))

;;; Numbers

(define (exact? z)
  (if (number? z)
      #t
      (error 'exact? "Bad type" z)))

(define (inexact? z) #f)

;; XXX: handle more arguments
(define (= x y) (eq? ($cmp x y) 0))
(define (< x y) (eq? ($cmp x y) -1))
(define (> x y) (eq? ($cmp x y) 1))
(define (<= x y . xs)
  (if (null? xs)
      (let ((c ($cmp x y)))
        (or (eq? c -1) (eq? c 0)))
      (let lp ((x x) (y y) (xs xs))
        (let ((c ($cmp x y)))
          (and (or (eq? c -1) (eq? c 0))
               (or (null? xs)
                   (lp y (car xs) (cdr xs))))))))

(define (>= x y)
  (let ((c ($cmp x y)))
    (or (eq? c 1) (eq? c 0))))

(define (zero? x) (eq? ($cmp x 0) 0))

(define (positive? x) (> x 0))

(define (negative? x) (< x 0))

(define (odd? x) (not (even? x)))

;; TODO: handle non-integers
(define (even? x)
  (eq? 0 (bitwise-and x 1)))

(define (max x . x*)
  (define (f x x*)
    (cond ((null? x*) x)
          ((> x (car x*))
           (f x (cdr x*)))
          (else
           (f (car x*) (cdr x*)))))
  (f x x*))

(define (min x . x*)
  (define (f x x*)
    (cond ((null? x*) x)
          ((< x (car x*))
           (f x (cdr x*)))
          (else
           (f (car x*) (cdr x*)))))
  (f x x*))

(define (+ x y) ($+ x y))

(define (* x y) ($* x y))

(define (- x . xs)
  (cond ((null? xs)
         ($- 0 x))
        ((null? (cdr xs))
         ($- x (car xs)))
        (else
         (error '- "TODO: handle more arguments"))))

(define (/ x y) ($/ x y))


;; (define (+ . rest)
;;   ;; wrapper around $+
;;   (let lp ((rest rest)
;;            (ret 0))
;;     (cond ((null? rest)
;;            ret)
;;           (else
;;            (lp (cdr rest)
;;                ($+ ret (car rest)))))))

(define (abs x)
  (if (negative? x)
      (- x)
      x))

;; quotient remainder modulo
;; gcd lcm
;; numerator denominator
;; floor ceiling truncate round
;; rationalize
;; exp log sin cos tan asin acos atan sqrt expt
;; make-rectangular make-polar
;; real-part imag-part magnitude angle
;; exact->inexact inexact->exact

(define (number->string num . rest)
  (cond ((null? rest)
         ($number->string num 10))
        ((null? (cdr rest))
         (if (memv (car rest) '(2 8 10 16))
             ($number->string num (car rest))
             (error 'number->string "Unknown radix" (car rest))))
        (else
         (error 'number->string "Too many arguments" num rest))))

(define (string->number str . radix)
  (cond ((null? radix)
         ($string->number str 10))
        ((null? (cdr radix))
         (if (memv (car radix) '(2 8 10 16))
             ($string->number str (car radix))
             (error 'string->number "Unknown radix" (car radix))))
        (else
         (error 'string->number "Too many arguments" str radix))))

;;; Pairs

(define (caar x) (car (car x)))
(define (cadr x) (car (cdr x)))
(define (cdar x) (cdr (car x)))
(define (cddr x) (cdr (cdr x)))
(define (caaar x) (caar (car x)))
(define (caadr x) (caar (cdr x)))
(define (cadar x) (cadr (car x)))
(define (caddr x) (cadr (cdr x)))
(define (cdaar x) (cdar (car x)))
(define (cdadr x) (cdar (cdr x)))
(define (cddar x) (cddr (car x)))
(define (cdddr x) (cddr (cdr x)))
(define (caaaar x) (caaar (car x)))
(define (caaadr x) (caaar (cdr x)))
(define (caadar x) (caadr (car x)))
(define (caaddr x) (caadr (cdr x)))
(define (cadaar x) (cadar (car x)))
(define (cadadr x) (cadar (cdr x)))
(define (caddar x) (caddr (car x)))
(define (cadddr x) (caddr (cdr x)))
(define (cdaaar x) (cdaar (car x)))
(define (cdaadr x) (cdaar (cdr x)))
(define (cdadar x) (cdadr (car x)))
(define (cdaddr x) (cdadr (cdr x)))
(define (cddaar x) (cddar (car x)))
(define (cddadr x) (cddar (cdr x)))
(define (cdddar x) (cdddr (car x)))
(define (cddddr x) (cdddr (cdr x)))

(define (list? x) (and (floyd x) #t))

(define (list . x) x)

(define (append x . xs)
  (let lp ((x x)
           (xs xs))
    (if (null? xs)
        x
        (if (null? x)
            (lp (car xs) (cdr xs))
            (cons (car x)
                  (lp (cdr x) xs))))))

(define (reverse l)
  (let lp ((l l) (ret '()))
    (if (null? l)
        ret
        (lp (cdr l) (cons (car l) ret)))))

(define (list-tail x k)
  (if (zero? k)
      x
      (list-tail (cdr x) (- k 1))))

(define (list-ref x k)
  (if (zero? k)
      (car x)
      (list-ref (cdr x) (- k 1))))

(define (memq el list)
  (cond ((null? list) #f)
        ((eq? el (car list)) list)
        (else (memq el (cdr list)))))

(define (memv el list)
  (cond ((null? list) #f)
        ((eqv? el (car list)) list)
        (else (memv el (cdr list)))))

(define (member el list)
  (cond ((null? list) #f)
        ((equal? el (car list)) list)
        (else (member el (cdr list)))))

(define (assq el list)
  (cond ((null? list) #f)
        ((eq? el (caar list)) (car list))
        (else (assq el (cdr list)))))

(define (assv el list)
  (cond ((null? list) #f)
        ((eqv? el (caar list)) (car list))
        (else (assv el (cdr list)))))

(define (assoc el list)
  (cond ((null? list) #f)
        ((equal? el (caar list)) (car list))
        (else (assoc el (cdr list)))))

;;; Characters

(define-macro (define-char-order name =)
  `(define ,name
     (lambda (x y . x*)
       (if (null? x*)
           (,= (char->integer x) (char->integer y))
           (if (null? (cdr x*))
               (and (,= (char->integer x) (char->integer y))
                    (,= (char->integer y) (char->integer (car x*))))
               (apply ,= (char->integer x) (char->integer y)
                      (map char->integer x*)))))))

(define-char-order char=? =)
(define-char-order char<? <)
(define-char-order char>? >)
(define-char-order char<=? <=)
(define-char-order char>=? >=)

;; char-ci=? char-ci<? char-ci>? char-ci<=? char-ci>=?
;; char-alphabetic? char-numeric?
;; char-upper-case? char-lower-case?

;;; Strings

(define (string . x)
  (list->string x))

(define (string=? x y)
  (and (= (string-length x) (string-length y))
       (let lp ((i (- (string-length x) 1)))
         (cond ((= i -1) #t)
               ((not (char=? (string-ref x i) (string-ref y i)))
                #f)
               (else (lp (- i 1)))))))

;; string-ci=? string<? string>? string<=? string>=? string-ci<? string-ci>?
;; string-ci<=? string-ci>=?

(define (substring s start end)
  (let ((ret (make-string (- end start) #\space)))
    (let lp ((i 0)
             (i* start))
      (cond ((= i* end)
             ret)
            (else
             (string-set! ret i (string-ref s i*))
             (lp (+ i 1) (+ i* 1)))))))

(define (string-append . xs)
  (let lp ((strings xs) (len 0))
    (if (null? strings)
        (let ((ret (make-string len)))
          (let lp ((strings xs) (reti 0))
            (if (null? strings)
                ret
                (let* ((str (car strings))
                       (strlen (string-length str)))
                  (let lp* ((stri 0)
                            (reti reti))
                    (cond ((= stri strlen)
                           (lp (cdr strings) reti))
                          (else
                           (string-set! ret reti (string-ref str stri))
                           (lp* (+ stri 1) (+ reti 1)))))))))
        (lp (cdr strings) (+ len (string-length (car strings)))))))

(define (string->list str)
  (let lp ((l '()) (i (- (string-length str) 1)))
    (if (< i 0)
        l
        (lp (cons (string-ref str i) l) (- i 1)))))

(define (list->string x)
  (let ((str (make-string (length x))))
    (let lp ((ref 0) (x x))
      (cond ((null? x) str)
            ((not (char? (car x))) (error 'list->string "not a list of chars"))
            (else
             (string-set! str ref (car x))
             (lp (+ ref 1) (cdr x)))))))

(define (string-copy x)
  (let ((str (make-string (string-length x))))
    (let lp ((ref (- (string-length x) 1)))
      (cond ((< ref 0) str)
            (else
             (string-set! str ref (string-ref x ref))
             (lp (- ref 1)))))))

(define (string-fill! str char)
  (let lp ((ref (- (string-length str) 1)))
    (cond ((< ref 0) str)
          (else
           (string-set! str ref char)
           (lp (- ref 1))))))

;;; Vectors

(define (vector->list v)
  (let lp ((ret '()) (i (- (vector-length v) 1)))
    (if (< i 0)
        ret
        (lp (cons (vector-ref v i) ret) (- i 1)))))

(define (list->vector l)
  (let ((ret (make-vector (length l) #f)))
    (let lp ((l l) (i 0))
      (cond ((null? l)
             ret)
            (else
             (vector-set! ret i (car l))
             (lp (cdr l) (+ i 1)))))))

(define (vector-fill! v e)
  (let lp ((i 0))
    (unless (= i (vector-length v))
      (vector-set! v i e)
      (lp (+ i 1)))))

;;; Control features

(define (map f l . ls)
  (if (null? ls)
      (let lp ((l l) (ls '()))
        (if (null? l)
            (reverse ls)
            (lp (cdr l) (cons (f (car l)) ls))))
      (let lp ((acc '()) (l l) (ls ls))
        (if (null? l)
            (reverse acc)
            (lp (cons (apply f (car l) (map car ls)) acc) (cdr l) (map cdr ls))))))

;; FIXME: takes n>=1 lists
(define (for-each f l)
  (if (null? l)
      (unspecified)
      (let lp ((l l))
        (cond ((null? (cdr l))
               (f (car l)))
              (else
               (f (car l))
               (lp (cdr l)))))))

(define ($winders)
  (thread-winders (current-thread)))

(define ($set-winders! winders)
  (thread-winders-set! (current-thread) winders))

(define (call/cc proc)
  (let ((k ($copy-stack)))
    ;; $copy-stack will return multiple times. The first time it
    ;; returns a copy of the stack. The following times it returns the
    ;; values passed to the continuation.
    (cond (($stack? k)
           (letrec ((old-winders ($winders))
                    (do-winds
                     (lambda (to delta)
                       ;; The do-winds procedure is stolen from
                       ;; SLIB's dynwind.scm. It was modified.
                       ;; Copyright (c) 1992, 1993 Aubrey Jaffer
                       (cond ((eq? ($winders) to))
                             ((negative? delta)
                              (do-winds (cdr to) (+ delta 1))
                              ((caar to))
                              ($set-winders! to))
                             (else
                              (let* ((winders ($winders))
                                     (from (cdar winders)))
                                ($set-winders! (cdr winders))
                                (from)
                                (do-winds to (- delta 1)))))))
                    (continuation
                     (lambda (v)
                       ;; TODO: multiple values
                       (do-winds old-winders
                                 (- (length ($winders))
                                    (length old-winders)))
                       ($restore-stack k v))))
             (proc continuation)))
          (else
           ;; TODO: multiple values
           k))))

(define call-with-current-continuation call/cc)

(define (dynamic-wind before thunk after)
  (before)
  ($set-winders! (cons (cons before after)
                       ($winders)))
  (let-values ((v (thunk)))
    ($set-winders! (cdr ($winders)))
    (after)
    (apply values v)))

(define (apply proc . rest)
  ($apply proc (let lp ((rest rest))
                 (if (null? (cdr rest))
                     (car rest)
                     (cons (car rest) (lp (cdr rest)))))))

;; This is not really how it's supposed to be done:
(define values-tag '*values*)
(define (values . x)
  (cons values-tag x))

(define (call-with-values prod cons)
  (let ((v (prod)))
    (if (and (pair? v) (eq? (car v) values-tag))
        (apply cons (cdr v))
        (cons v))))

(define (eval expr environment)
  (let ((code (compile-expression expr)))
    (let ((bc (vector-ref code 0))
          (consts (vector-ref code 1)))
      ($bytecode-run bc consts (current-thread)))))

(define (scheme-report-environment v) #f)
(define (null-environment) #f)
(define (interaction-environment) #f)

;;; Input and output

(define (call-with-input-file file f)
  (let* ((handle (open-input-file file)) (output (f handle)))
    (close-input-port handle)
    output))

(define (call-with-output-file file f)
  (let* ((handle (open-output-file file)) (output (f handle)))
    (close-output-port handle)
    output))

;; with-input-from-file with-output-to-file

(define (read-char . rest)
  (if (null? rest)
      ($read-char (current-input-port))
      ($read-char (car rest))))

(define (peek-char . rest)
  (if (null? rest)
      ($peek-char (current-input-port))
      ($peek-char (car rest))))

(define (eof-object? x) (eq? x (eof-object)))

;; char-ready?

(define (obj-writer obj port write?)
  (cond ((char? obj)
         (if (not write?)
             (write-char obj port)
             (let ((name (assq obj '((#\nul . nul)
                                     (#\alarm . alarm)
                                     (#\backspace . backspace)
                                     (#\tab . tab)
                                     (#\linefeed . linefeed)
                                     (#\newline . newline)
                                     (#\vtab . vtab)
                                     (#\page . page)
                                     (#\return . return)
                                     (#\esc . esc)
                                     (#\space . space)
                                     (#\delete . delete)))))
               ($display "#\\" port)
               (cond (name
                      ($display (cdr name) port))
                     ;; TODO: non-printable characters
                     (else
                      ($display obj port))))))
        ;; TODO: strings, symbols, vectors, pairs, etc
        (write?
         ($write obj port))
        (else
         ($display obj port))))

(define (write obj . x)
  (if (null? x)
      (obj-writer obj (current-output-port) #t)
      (obj-writer obj (car x) #t)))

(define (display obj . x)
  (if (null? x)
      (obj-writer obj (current-output-port) #f)
      (obj-writer obj (car x) #f)))

(define (newline . x)
  (if (null? x)
      (write-char #\newline (current-output-port))
      (write-char #\newline (car x))))

(define (write-char c . rest)
  (if (null? rest)
      ($write-char c (current-output-port))
      ($write-char c (car rest))))

(define (bytecode-filename filename)
  ;; The file extension is replaced with .cso (conscheme serialized
  ;; object).
  (let ((rev-basename (memv #\. (reverse (string->list filename)))))
    (if rev-basename
        (string-append (list->string (reverse (cdr rev-basename)))
                       ".cso")
        (string-append filename ".cso"))))

(define (load filename)
  (let ((bytecode-file (bytecode-filename filename)))
    (let ((code (and (file-exists? bytecode-file)
                     ($bytecode-load bytecode-file))))
      (cond (code
             ;; Use the pre-compiled .cso file of the version (compile
             ;; using compile-file).
             (let ((bc (vector-ref code 0))
                   (consts (vector-ref code 1)))
               ($bytecode-run bc consts (current-thread))))
            (else
             (call-with-input-file filename
               (lambda (p)
                 (let lp ()
                   (let ((datum (read p)))
                     (unless (eof-object? datum)
                       (eval datum (interaction-environment))
                       (lp)))))))))))

;;; R6RS

(define (assp proc list)
  (cond ((null? list) #f)
        ((proc (caar list)) (car list))
        (else (assp proc (cdr list)))))

(define (remp proc list)
  (cond ((null? list) '())
        ((proc (car list))
         (remp proc (cdr list)))
        (else
         (cons (car list) (remp proc (cdr list))))))

(define (remq obj list)
  (cond ((null? list) '())
        ((eq? obj (car list))
         (remq obj (cdr list)))
        (else
         (cons (car list) (remq obj (cdr list))))))

(define (port-has-port-position? p) #f)

(define (port-has-set-port-position!? p) #f)

(define (call-with-port port proc)
  (let ((ret (proc port)))
    (close-port port)
    ret))

(define (bitwise-ior . xs)
  (let lp ((ret 0)
           (xs xs))
    (if (null? xs)
        ret
        (lp ($bitwise-ior ret (car xs)) (cdr xs)))))

(define (bitwise-and . xs)
  (let lp ((ret -1)
           (xs xs))
    (if (null? xs)
        ret
        (lp ($bitwise-and ret (car xs)) (cdr xs)))))

(define (for-all f l . ls)
  (if (null? ls)
      (let lp ((l l))
        (or (null? l)
            (if (null? (cdr l))
                (f (car l))
                (and (f (car l))
                     (lp (cdr l))))))
      (let lp ((l l) (ls ls))
        (or (and (null? l) (for-all null? ls))
            (if (and (null? (cdr l)) (for-all null? (map cdr ls)))
                (apply f (car l) (map car ls))
                (and (apply f (car l) (map car ls))
                     (lp (cdr l) (map cdr ls))))))))

;;; SRFI-1

(define (make-list len . rest)
  (let ((fill (cond ((null? rest) #f)
                    ((null? (cdr rest)) (car rest))
                    (else
                     (error 'make-list "Too many arguments" len rest)))))
    (let lp ((len len) (ret '()))
      (if (<= len 0)
          ret
          (lp (- len 1)
              (cons fill ret))))))

(define (cons* x . xs)
  (if (null? xs)
      x
      (if (null? (cdr xs))
          (cons x (car xs))
          (let ((ret (cons x xs)))
            (let lp ((xs ret))
              (cond ((null? (cddr xs))
                     (set-cdr! xs (cadr xs))
                     ret)
                    (else
                     (lp (cdr xs)))))))))

(define map-in-order map)

(define (delete-duplicates list . rest)
  (if (or (null? rest)
          (and (eq? (car rest) eq?)
               (null? (cdr rest))))
      (let lp ((list list)
               (ret '()))
        (cond ((null? list)
               (reverse ret))
              (else
               (lp (remq (car list) (cdr list))
                   (cons (car list) ret)))))
      (let ((= (cond ((null? rest) eq?)
                     ((null? (cdr rest)) (car rest))
                     (else (error 'delete-duplicates
                                  "Too many arguments" list rest)))))
        (let lp ((list list)
                 (ret '()))
          (cond ((null? list)
                 (reverse ret))
                (else
                 (lp (remp (lambda (x)
                             (= x (car list)))
                           (cdr list))
                     (cons (car list) ret))))))))

(define (append-map f l . ls)
  (if (null? ls)
      (let lp ((l l) (ls '()))
        (if (null? l)
            (reverse ls)
            (lp (cdr l) (append (reverse (f (car l))) ls))))
      (let lp ((acc '()) (l l) (ls ls))
        (if (null? l)
            (reverse acc)
            (lp (append (reverse (apply f (car l) (map car ls))) acc)
                (cdr l) (map cdr ls))))))

(define (filter f l)
  (let lp ((l l) (ls '()))
    (cond ((null? l)
           (reverse ls))
          ((f (car l))
           (lp (cdr l) (cons (car l) ls)))
          (else
           (lp (cdr l) ls)))))

;;; SRFI-18

(define (make-thread thunk . rest)
  (let ((thunk* (lambda ()
                  (thread-queue-set! (current-thread) (make-queue))
                  (thunk))))
    (cond ((null? rest)
           ($make-thread thunk* "unnamed"))
          ((null? (cdr rest))
           ($make-thread thunk* (car rest)))
          (else
           (error 'make-thread "Too many arguments" thunk rest)))))

(define (receive)
  ($receive (current-thread)))

;;; Extra threading stuff

(define (spawn-link thunk . rest)
  (let ((t (apply make-thread thunk rest)))
    ;; this would be more effective if the messages sent on abnormal
    ;; termination also raised an error in the receiving thread
    (thread-link! t (current-thread))
    (thread-link! (current-thread) t)
    (thread-start! t)
    t))

;; these queues are private to the select syntax
(define (make-queue)
  (let ((x (cons #f '())))
    ;; head, tail, cursor, previous
    (vector x x x #f)))

(define (queue-restart! q)
  ;; set to the cursor to the start of the queue
  (vector-set! q 2 (vector-ref q 0))
  (vector-set! q 3 #f))

(define (enqueue! q e)
  ;; put a message at the end of the queue
  (let ((p (cons e '())))
    (set-cdr! (vector-ref q 1) p)
    (vector-set! q 1 p)))

(define (queue-next! q)
  ;; return the next message in the queue (from the cursor), and do
  ;; receive if the cursor is at the end of the queue
  (if (eq? (vector-ref q 1) (vector-ref q 2))
      (let ((msg (receive)))            ;get another message
        (enqueue! q msg)
        (queue-next! q))
      (let* ((cursor (vector-ref q 2))
             (v (cadr cursor)))
        (vector-set! q 2 (cdr cursor))
        (vector-set! q 3 cursor)
        v)))

(define (queue-remove! q)
  ;; remove the message returned by queue-next!.
  (let ((prev (vector-ref q 3))
        (cursor (vector-ref q 2)))
    (set-cdr! prev (cdr cursor))
    (vector-set! q 2 prev)
    (vector-set! q 3 #f)
    (when (eq? cursor (vector-ref q 1))
      ;; the cursor was at the tail, so adjust the tail
      (vector-set! q 1 prev))))

(define (parallel-map f x)
  (let ((t (current-thread)))
    (map (lambda (id)
           (select
            (#('result (eq? id) value)
             value)))
         (map (lambda (e)
                (let ((id (gensym)))
                  (spawn-link (lambda ()
                                (send t (vector 'result id (f e)))))
                  id))
              x))))

;;; Misc

(define (error who why . irritants)
  (display "Error from ")
  (display who)
  (display ": ")
  (display why)
  (newline)
  (display "List of irritants: ")
  (write irritants)
  (newline)
  ;; XXX: should tie in with some exception handling stuff
  (thread-terminate! (current-thread)))

;; XXX: shouldn't intern the symbol, and should generate more unique
;; symbols.
(define gensym
  (let ((x 0))
    (lambda rest
      (let ((prefix (if (null? rest)
                        " g"
                        (car rest))))
        (set! x (+ x 1))
        (string->symbol (string-append prefix (number->string x)))))))

(define (open-bytevector-output-port)
  (let ((p ($open-bytevector-output-port)))
    (values p (lambda () ($bytevector-output-port-extract p)))))

(define (call-with-pprof-to-file fn f)
  ;; XXX: not thread-safe
  (let ((p (open-file-output-port fn)))
    (start-cpu-profile p)
    (let ((ret (f)))
      (stop-cpu-profile)
      (close-output-port p)
      ret)))
