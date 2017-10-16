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

;; Turns lambda forms into labels and closures (3.9 in Aziz's 2006
;; paper). Adds $code, $closure and $labels forms. Removes
;; $ann-lambda.

(define (closures* x collect-code)
  (if (symbol? x)
      x
      (case (car x)
        (($ann-lambda)
         (let ((label (gensym "f"))
               (formals (cadr x))
               (name (caddr x))
               (closure-vars (cadddr x)))
           (collect-code label (list '$code formals closure-vars
                                     (closures* (cadddr (cdr x))
                                                collect-code)))
           (cons* '$closure name label closure-vars)))
        ((let)
         (list 'let (map (lambda (binding)
                           (list (car binding)
                                 (closures* (cadr binding) collect-code)))
                         (cadr x))
               (closures* (caddr x) collect-code)))
        ((quote $primitive) x)
        ((define)
         (list 'define (cadr x) (closures* (caddr x) collect-code)))
        ((set!)
         (list 'set! (set!-name x) (closures* (set!-expression x)
                                              collect-code)))
        ((if begin $funcall $primcall)
         (cons (car x) (map (lambda (x) (closures* x collect-code))
                            (cdr x))))
        (else
         (error 'closures* "Bad expression" x)))))

(define (closures x)
  (let ((codes '()))
    (let ((body (closures* x (lambda (label code)
                               (set! codes (cons (list label code)
                                                 codes))))))
      (list '$labels codes body))))
