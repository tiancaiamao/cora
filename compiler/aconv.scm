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

;; Alpha conversion. The input is the output from expand.

(define (aconv-new-env)
  '())

(define (aconv-extend-env formals env)
  (append (map (lambda (name)
                 ;; generate a new unique symbol for name
                 (cons name (gensym (symbol->string name))))
               (formals-to-list formals))
          env))

(define (aconv-lookup name env)
  (let ((name* (assq name env)))
    (if name* (cdr name*) name)))

(define (aconv-formals formals env)
  (cond ((symbol? formals)
         (aconv-lookup formals env))
        ((null? formals) '())
        (else
         (cons (aconv-lookup (car formals) env)
               (aconv-formals (cdr formals) env)))))

(define (aconv* x env)
  (if (symbol? x)
      (aconv-lookup x env)
      (case (car x)
        ((lambda)
         (let ((newenv (aconv-extend-env (lambda-formals x) env)))
           (list 'lambda
                  (aconv-formals (lambda-formals x) newenv)
                  (aconv* (lambda-body x) newenv))))
        ((if)
         (cons 'if (map (lambda (x) (aconv* x env)) (cdr x))))
        ((quote) x)
        ((define)
         (list 'define (cadr x) (aconv* (caddr x) env)))
        ((begin)
         (cons 'begin (map (lambda (x) (aconv* x env)) (cdr x))))
        ((set!)
         (list 'set! (aconv-lookup (set!-name x) env)
               (aconv* (set!-expression x) env)))
        (else
         (map (lambda (x) (aconv* x env)) x)))))

(define (aconv x)
  (aconv* x (aconv-new-env)))
