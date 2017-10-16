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

;; Mutable variable and assignment analysis. Uses reference cells for
;; mutable variables inside closures. Section 3.12 of Aziz (2006).

(define (find-mutation x in-closure? to-find)
  (if (symbol? x)
      '()
      (case (car x)
        ((lambda)
         (find-mutation (lambda-body x) #t to-find))
        ((if begin)
         (append-map (lambda (x) (find-mutation x in-closure? to-find))
                     (cdr x)))
        ((quote) '())
        ((define)
         (find-mutation (caddr x) in-closure? to-find))
        ((set!)
         (if (and in-closure? (memq (set!-name x) to-find))
             (cons (set!-name x)        ;found a mutable variable
                   (find-mutation (set!-expression x) in-closure? to-find))
             (find-mutation (set!-expression x) in-closure? to-find)))
        (else
         (append-map (lambda (x) (find-mutation x in-closure? to-find)) x)))))

(define (mutation* x mutable)
  (if (symbol? x)
      (if (memq x mutable)
          (list '$cell-ref x)
          x)
      (case (car x)
        ((lambda)
         ;; TODO: this pass adds unnecessary cells sometimes, e.g.
         ;; in (lambda (x) (begin (set! x 'blah) x))
         (let* ((mutated (delete-duplicates
                          (find-mutation x (lambda-body x)
                                         (formals-to-list (lambda-formals x)))))
                (new-body (mutation* (lambda-body x) (append mutated mutable))))
           (if (null? mutated)
               (list 'lambda (lambda-formals x)
                     new-body)
               (list 'lambda (lambda-formals x)
                     (cons* (list 'lambda mutated
                                  new-body)
                            (map (lambda (var)
                                   (list '$make-cell var))
                                 mutated))))))
        ((if begin)
         (cons (car x)
               (map (lambda (x) (mutation* x mutable))
                    (cdr x))))
        ((quote) x)
        ((define)
         (list 'define (cadr x) (mutation* (caddr x) mutable)))
        ((set!)
         (cons (if (memq (set!-name x) mutable)
                   '$cell-set!
                   'set!)
               (list (set!-name x)
                     (mutation* (set!-expression x) mutable))))
        (else
         (map (lambda (x) (mutation* x mutable)) x)))))

(define (mutation x)
  (mutation* x '()))
