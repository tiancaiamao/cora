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

(include "defmacro.scm")
(cond-expand
 (conscheme (include "library.scm"))
 (else #f))
(include "reader.scm")
(include "primitives.scm")
(include "aconv.scm")
(include "mutation.scm")
(include "freevar.scm")
(include "closures.scm")
(include "serialize.scm")
(include "expander.scm")
(include "codegen.scm")

(cond-expand
 (guile (use-modules (ice-9 pretty-print)
                     (srfi srfi-1))
        (set! command-line
              (let ((args (command-line)))
                (case-lambda
                  (() args)
                  ((new-args) (set! args new-args))))))
 (conscheme (define (pretty-print x)
              (write x)
              (newline))
            (thread-queue-set! (current-thread) (make-queue))))

(define (top-level-cps x)
  ;; Convert the top level to cps form (because we shamefully don't
  ;; have register allocation).
  (cond ((and (pair? x) (eq? (car x) 'begin))
         (let lp ((body (cdr x)))
           (list '$funcall (list '$ann-lambda '() 'topcps '()
                                 (if (null? (cdr body))
                                     (car body)
                                     (list 'begin
                                           (car body)
                                           (lp (cdr body))))))))
        (else x)))

(define (compile-expression expr)
  (codegen (closures (top-level-cps (freevar (primops (mutation (aconv (expand expr)))))))))

(define (compile-bytecode-main)
  (let ((input-file "main.scm")
        (output-file "conscheme.image"))
    (compile-bytecode input-file output-file)))

(define (compile-file input-file)
  (let ((output-file (bytecode-filename input-file)))
    (compile-bytecode input-file output-file)))

(define (compile-bytecode input-file output-file)
  (let ((code (compile-expression (list 'include input-file))))
    (if (file-exists? output-file)
        (delete-file output-file))
    (call-with-port (open-file-output-port output-file)
      (lambda (p)
        (serialize-object code p '(bytecode . 1))))))

(define (print . x) (for-each display x) (newline))

(define (repl)
  (print ";; Cora")
  (print ";; Copyright (C) 2017 Arthur <tiancaiamao@gmail.com>")
  (print ";; Copyright (C) 2011, 2017 Göran Weinholt <goran@weinholt.se>")
  (print ";; Copyright (C) 2011 Per Odlund <per.odlund@gmail.com>")
  (print)
  (let ((repl (current-thread)))
    (let loop ((i 0))
      (for-each display (list "#;" i "> "))
      ;; (flush-output-port)
      (let ((t (make-thread (lambda () (send repl (read))) "repl read")))
        (thread-link! t (current-thread))
        (thread-start! t)
        (let ((datum (receive)))
          (cond ((eof-object? datum)
                 (print "\nBye bye."))
                ((equal? datum (vector 'died t))
                 (loop (+ i 1)))
                (else
                 (let ((t (make-thread
                           (lambda ()
                             (send repl (eval datum (interaction-environment))))
                           "repl expression")))
                   (thread-link! t (current-thread))
                   (thread-start! t))
                 (let ((result (receive)))
                   (unless (eq? result (unspecified))
                     (write result)
                     (newline))
                   (loop (+ i 1))))))))))

(let* ((args (command-line))
       (run (if (string=? (car args) "")
                repl
                (lambda ()
                  (load (car args))))))
  (let lp ((args (cdr (command-line))))
    (cond
      ((null? args)
       (run))
      ((and (string=? (car args) "-c") (pair? (cdr args)))
       ;; FIXME: This can eat the -c that is intended for a script, unfortunately.
       (let* ((expr (cadr args))
              (code (call-with-port (open-string-input-port expr) read)))
         (command-line (cons (car (command-line)) (cddr args)))
         (eval code (interaction-environment))
         (exit 0)))
      (else
       (run)))))
