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

;; Serializes Scheme objects to bytecode.

;; First version: does not handle shared structures

(cond-expand
 (guile
  (import (rnrs bytevectors)
          (rnrs io ports)
          (rnrs arithmetic bitwise)))
 (else #f))

(define VERSION 1)

(define TYPE-INTEGER 0)

(define TYPE-PAIR 1)

(define TYPE-VECTOR 2)

(define TYPE-NULL 3)

(define TYPE-STRING 4)

(define TYPE-SYMBOL 5)

(define TYPE-BOOLEAN 6)

(define TYPE-CHAR 7)

(define TYPE-RATIONAL 8)

(define TYPE-FLOAT64 9)

(define TYPE-COMPLEX128 10)

(define TYPE-BYTEVECTOR 12)

;; Somewhat inefficient representation of integers
(define (write-integer t p)
  (put-u8 p (if (negative? t) 1 0))
  (let lp ((t (abs t)))
    (cond ((< t #x80)
           (put-u8 p t))
          (else
           (put-u8 p (bitwise-ior #x80 (bitwise-and t #x7f)))
           (lp (bitwise-arithmetic-shift-right t 7))))))

(define write-type write-integer)

(define write-length write-integer)

(define (write-magic p)
  ;; Magic
  (put-bytevector p (string->utf8 "conscheme serialized object format\n"))
  (put-u8 p VERSION))

(define (serialize x p)
  (cond ((pair? x)
         (write-type TYPE-PAIR p)
         (write-length 2 p)
         (serialize (car x) p)
         (serialize (cdr x) p))
        ((number? x)
         (cond
           ((and (exact? x) (= (denominator x) 1))
            (write-type TYPE-INTEGER p)
            (write-integer x p))
           ((and (exact? x) (not (= (denominator x) 1)))
            (write-type TYPE-RATIONAL p)
            (write-integer (numerator x) p)
            (write-integer (denominator x) p))
           ((and (inexact? x) (real? x))
            (write-type TYPE-FLOAT64 p)
            (write-length 8 p)
            (let ((bv (make-bytevector 8)))
              (bytevector-ieee-double-set! bv 0 x (endianness little))
              (put-bytevector p bv)))
           ((and (inexact? x) (not (real? x)))
            (write-type TYPE-COMPLEX128 p)
            (write-length 16 p)
            (let ((bv (make-bytevector 16)))
              (bytevector-ieee-double-set! bv 0 (real-part x) (endianness little))
              (bytevector-ieee-double-set! bv 8 (imag-part x) (endianness little))
              (put-bytevector p bv)))
           ;; TODO: exact complex numbers. guile doesn't support
           ;; these, so it will have to wait a little while.
           (else
            (error 'serialize "Can not serialize this number" x))))
        ((null? x)
         (write-type TYPE-NULL p)
         (write-length 0 p))
        ((string? x)
         (write-type TYPE-STRING p)
         (let ((x (string->utf8 x)))
           (write-length (bytevector-length x) p)
           (put-bytevector p x)))
        ((bytevector? x)
         (write-type TYPE-BYTEVECTOR p)
         (write-length (bytevector-length x) p)
         (put-bytevector p x))
        ((symbol? x)
         (write-type TYPE-SYMBOL p)
         (let ((x (string->utf8 (symbol->string x))))
           (write-length (bytevector-length x) p)
           (put-bytevector p x)))
        ((vector? x)
         (write-type TYPE-VECTOR p)
         (write-length (vector-length x) p)
         (do ((i 0 (+ i 1)))
             ((= i (vector-length x)))
           (serialize (vector-ref x i) p)))
        ((boolean? x)
         (write-type TYPE-BOOLEAN p)
         (write-length (if x 1 0) p))
        ((char? x)
         (write-type TYPE-CHAR p)
         (write-integer (char->integer x) p))
        (else
         (error 'serialize "Can not serialize this value" x))))

(define (serialize-object obj p . alist)
  (write-magic p)
  ;; alist header
  (serialize alist p)
  (serialize obj p))
