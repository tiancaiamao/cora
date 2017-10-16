;; -*- mode: scheme; coding: utf-8 -*-
;; Copyright (C) 2011 Göran Weinholt <goran@weinholt.se>

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

;; S-expression reader for conscheme

(define (read-error p reason . irritants)
  (if (port-has-port-position? p)
      (apply error 'read reason p (port-position p) irritants)
      (apply error 'read reason p irritants)))

(define (char-delimiter? c)
  (or (eof-object? c)
      (memv c '(#\( #\) #\[ #\] #\" #\; #\#))
      (char-whitespace? c)))

(define (next-char p)
  (let ((c (read-char p)))
    (cond ((eof-object? c) c)
          ((char-whitespace? c)
           (next-char p))
          (else c))))

(define (get-symbol p init)
  (let lp ((chars init))
    (let ((c (peek-char p)))
      (cond ((char-delimiter? c)
             (cons 'symbol (list->string (reverse chars))))
            ((or (char<=? #\a c #\z) (char<=? #\A c #\Z)
                 (char<=? #\0 c #\9)
                 (memq c '(#\! #\$ #\% #\& #\* #\/ #\: #\< #\= #\> #\? #\^ #\_ #\~
                           #\+ #\- #\. #\@)))
             ;; this is missing the unicode stuff from r6rs
             (lp (cons (read-char p) chars)))
            ;; also missing is \xUUUU; from r6rs
            (else
             (read-error p "Bad character in symbol" c))))))

(define (get-string p)
  (let lp ((chars '()))
    (let ((c (peek-char p)))
      (cond ((eof-object? c)
             (read-error p "EOF in the middle of a string"))
            ((char=? c #\")
             (read-char p)
             (list->string (reverse chars)))
            ((char=? c #\\)
             ;; missing the fancy \ escapes from r6rs. also missing
             ;; the intraline whitespace removal from r6rs.
             (read-char p)
             (let* ((char (read-char p))
                    (schar
                     (case char
                       ((#\") #\")
                       ((#\\) #\\)
                       ((#\a) #\alarm)
                       ((#\b) #\backspace)
                       ((#\t) #\tab)
                       ((#\n) #\linefeed)
                       ((#\v) #\vtab)
                       ((#\f) #\page)
                       ((#\r) #\return)
                       ;; ((#\x) r6rs-hex-stuff)
                       (else char))))
               (lp (cons schar chars))))
            (else
             (lp (cons (read-char p) chars)))))))

(define (get-sharp p)
  (let ((c (read-char p)))
    (case c
      ((#\f #\F) #f)
      ((#\t #\T) #t)
      ((#\() 'vector)
      ((#\') '(prefix . syntax))
      ((#\`) '(prefix . quasisyntax))
      ((#\,)
       (cond ((eqv? (peek-char p) #\@)
              (read-char p)
              '(prefix . unsyntax-splicing))
             (else
              '(prefix . unsyntax))))
      ((#\v)
       (letrec ((expect (lambda (c)
                          (if (not (eqv? c (read-char p)))
                              (read-error p "Expected #vu8(")))))
         (expect #\u)
         (expect #\8)
         (expect #\()
         'bytevector))
      ((#\b #\B #\o #\O #\d #\D #\x #\X #\i #\I #\e #\E)
       (get-number p (list c #\#)))
      ((#\;)                            ;s-expr comment
       (read/p p)
       (get-lexeme p))
      ((#\\)
       (let lp ((chars '()))
         (let ((c (peek-char p)))
           (cond ((and (pair? chars) (char-delimiter? c))
                  (let ((chars (reverse chars)))
                    (cond ((null? chars)
                           (read-error p "Empty character"))
                          ((null? (cdr chars)) (car chars))
                          ((char=? (car chars) #\x)
                           (integer->char
                            (string->number (list->string (cdr chars))
                                            16)))
                          (else
                           (case (string->symbol (list->string chars))
                             ((nul) #\nul)
                             ((alarm) #\alarm)
                             ((backspace) #\backspace)
                             ((tab) #\tab)
                             ((linefeed) #\linefeed)
                             ((newline) #\newline)
                             ((vtab) #\vtab)
                             ((page) #\page)
                             ((return) #\return)
                             ((esc) #\esc)
                             ((space) #\space)
                             ((delete) #\delete)
                             (else
                              (read-error p "Unknown character name" chars)))))))
                 (else
                  (lp (cons (read-char p) chars)))))))
      (else
       (if (eof-object? c)
           (read-error p "Unexpected EOF")
           (read-error p "Unexpected character"))))))

(define (get-number p init)
  (let lp ((chars init))
    (let ((c (peek-char p)))
      (cond ((and (char-delimiter? c) (not (eqv? c #\#)))
             (or (string->number (list->string (reverse chars)))
                 (read-error p "Expected a number" (list->string (reverse chars)))))
            (else
             (lp (cons (read-char p) chars)))))))

(define (get-lexeme p)
  (let lp ((c (next-char p)))
    ;; (for-each write (list 'char: c)) (newline)
    (cond
      ((eof-object? c) c)
      ((char=? c #\;)
       ;; skip comments
       (let lp* ((c (read-char p)))
         (cond ((eof-object? c) c)
               ((memq c '(#\linefeed #\return #\x0085 #\x2028 #\x2029))
                (get-lexeme p))
               (else (lp* (read-char p))))))
      ((char=? c #\() 'leftp)
      ((char=? c #\)) 'rightp)
      ((char=? c #\') '(prefix . quote))
      ((char=? c #\`) '(prefix . quasiquote))
      ((char=? c #\,)
       (cond ((eqv? (peek-char p) #\@)
              (read-char p)
              '(prefix . unquote-splicing))
             (else
              '(prefix . unquote))))
      ((or (char<=? #\a c #\z) (char<=? #\A c #\Z)
           (memq c '(#\! #\$ #\% #\& #\* #\/ #\: #\< #\= #\> #\? #\^ #\_ #\~)))
       ;; this is missing the unicode stuff from r6rs
       (get-symbol p (list c)))
      ((char=? c #\")
       (get-string p))
      ((char=? c #\#)
       (get-sharp p))
      ((char=? c #\.)
       (cond ((eqv? #\. (peek-char p))
              (read-char p)
              (let ((c (read-char p)))
                (if (not (and (eqv? #\. c)
                              (char-delimiter? (peek-char p))))
                    (read-error p "Expected ...")))
              (cons 'symbol "..."))
             ((char-delimiter? (peek-char p))
              'dot)
             (else
              (get-number p (list c)))))
      ((char<=? #\0 c #\9)
       (get-number p (list c)))
      ((memq c '(#\- #\+))
       (cond ((and (char=? c #\-) (eqv? #\> (peek-char p)))
              (get-symbol p (list c))) ; the symbol "->"
             ((char-delimiter? (peek-char p)) ; + or -
              (cons 'symbol (string c)))
             (else (get-number p (list c)))))
      (else
       (read-error p "Unexpected character" c)))))

(define (read-compound p terminator type)
  (let lp ((data '()))
    (let ((x (get-lexeme p)))
      (cond ((eof-object? p)
             (read-error p "Unexpected EOF in compound datum"))
            ((eq? x terminator)
             (case type
               ((vector)
                (list->vector (reverse data)))
               ((list)
                (reverse data))
               ((bytevector)
                (u8-list->bytevector (reverse data)))
               (else
                (read-error p "Internal error in read-compound" type))))
            ((memq x '(rightp rightb))
             (read-error p "Unexpected closing brace"))
            ((eq? x 'dot)
             (if (not (eq? type 'list))
                 (read-error p "Unexpected dot notation"))
             (let ((x (handle-lexeme p (get-lexeme p))))
               (let ((t (get-lexeme p)))
                 (if (not (eq? t terminator))
                     (read-error p "Unterminated dot notation")))
               (append (reverse data) x)))
            (else
             (let ((datum (handle-lexeme p x)))
               (if (and (eq? type 'bytevector)
                        (not (and (number? datum) (exact? datum) (integer? datum)
                                  (>= datum 0)
                                  (< datum 256))))
                   (read-error p "Non-byte in bytevector" datum))
               (lp (cons datum data))))))))

(define (handle-lexeme p l)
  ;; (for-each write (list 'lexeme: l)) (newline)
  (case l
    ((leftp)
     (read-compound p 'rightp 'list))
    ((vector)
     (read-compound p 'rightp 'vector))
    ((bytevector)
     (read-compound p 'rightp 'bytevector))
    (else
     (cond ((or (eof-object? l) (char? l) (string? l)
                (number? l) (boolean? l))
            l)
           ((and (pair? l) (eq? (car l) 'symbol))
            (string->symbol (cdr l)))
           ((and (pair? l) (eq? (car l) 'prefix))
            (list (cdr l) (read/p p)))
           (else
            (read-error p "Unexpected lexeme" l))))))

(define (read/p p)
  (handle-lexeme p (get-lexeme p)))

(define (read . x)
  (cond ((null? x)
         (read/p (current-input-port)))
        ((null? (cdr x))
         (read/p (car x)))
        (else
         (error 'read "Too many arguments" x))))
