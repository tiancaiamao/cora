;; -*- mode: scheme; coding: utf-8 -*-
;; Copyright (C) 2011, 2017 Göran Weinholt <goran@weinholt.se>

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

;; Generates byte code. The input comes from the closure analysis pass.

;; XXX: the top-level is transformed into CPS form so that the body of
;; $labels isn't so enormous and uses so many registers (we don't have
;; register allocation)

;; IIII INNN NNNN RRRR RRRR RRrr rrrr rrrr
(define (op1 i n r1 r2)
  (if (> n #b1111111) (error 'op1 "n too large" i n r1 r2))
  (if (> r1 #b1111111111) (error 'op1 "r1 too large" i n r1 r2))
  (if (> r2 #b1111111111) (error 'op1 "r2 too large" i n r1 r2))
  (bitwise-ior (bitwise-arithmetic-shift-left i 27)
               (bitwise-arithmetic-shift-left n 20)
               (bitwise-arithmetic-shift-left r1 10)
               r2))
(define FRAME         #b00001)          ; reg
(define RETURN        #b00010)          ; reg
(define PUSH          #b00011)          ; reg
(define MAKE-VOID     #b00100)          ; reg
(define MOVE          #b00101)          ; reg1 reg2
(define CLOSURE.NAME  #b00110)          ; reg1 reg2
(define CLOSURE-REF   #b00111)          ; reg n
(define CLOSURE-SET!  #b01000)          ; n reg
(define CLOSURE       #b01010)          ; reg n
(define TAILCALL      #b01011)          ; reg n
(define CONSARGS      #b01100)          ; n
(define CLOSURE.VAR   #b01101)          ; reg1 n reg2
(define FUNCALL       #b01110)          ; reg1 reg2 n
(define APPLYCALL     #b10011)          ; reg1 reg2 n
(define TAILAPPLY     #b10100)          ; reg n
(define STACK-CTRL    #b10101)          ; reg1 reg2 n

;; IIII INNN NNNN NNNN NNNN NNrr rrrr rrrr
(define (op2 i n r)
  (if (> n #b11111111111111111) (error 'op2 "n too large" i n r))
  (if (> r #b1111111111) (error 'op2 "r too large" i n r))
  (bitwise-ior (bitwise-arithmetic-shift-left i 27)
               (bitwise-arithmetic-shift-left (bitwise-and n #b11111111111111111) 10)
               r))
(define JUMP          #b00000)          ; label
(define CONST-REF     #b01001)          ; reg n
(define BF            #b01111)          ; reg label
(define CLOSURE.LABEL #b10000)          ; reg label

(define (op2-disp op)
  (let ((x (bitwise-and #b11111111111111111 (bitwise-arithmetic-shift-right op 10))))
    (if (<= x (- (bitwise-arithmetic-shift 1 16) 1))
        x
        (- x (bitwise-arithmetic-shift 1 17)))))

;; IIII INNN NNNN NNnn nnnn nnrr rrrr rrrr
(define (op3 i n1 n2 r)
  (if (> n1 #b111111111) (error 'op3 "n1 too large" i n1 n2 r))
  (if (> n2 #xff) (error 'op3 "n2 too large" n2))
  (if (> r #b1111111111) (error 'op3 "r too large" i n1 n2 r))
  (bitwise-ior (bitwise-arithmetic-shift-left i 27)
               (bitwise-arithmetic-shift-left n1 18)
               (bitwise-arithmetic-shift-left n2 10)
               r))
(define PRIMCALL      #b10001)          ; reg name n
(define PRIMREF       #b10010)          ; reg name

;; A short description of each instruction can be found at
;; https://github.com/weinholt/conscheme/wiki/Bytecode-instructions

(define (cg-reg-gen start)
  (let ((r start))
    (lambda ()
      (let ((ret r))
        (set! r (+ r 1))
        ret))))

(define (cg-new-state)
  (let ((env '())
        (reg (cg-reg-gen 0))
        (label (let ((r 0))
                 (lambda ()
                   (let ((ret r))
                     (set! r (+ r 1))
                     (string->symbol (string-append "L" (number->string ret)))))))
        (constpool (let ((consts '())
                         (i 0))
                     (lambda x
                       (if (null? x)
                           (map car consts)
                           (let ((old (assoc (car x) consts)))
                             (if old
                                 (cdr old)
                                 (let ((idx i))
                                   ;; (print "#;const " idx " = " (car x))
                                   (set! consts (cons (cons (car x) idx) consts))
                                   (set! i (+ idx 1))
                                   idx)))))))
        (frame #f))
    (vector env reg label constpool frame)))

(define (cg-env s)
  (vector-ref s 0))

(define (cg-reg s)
  ((vector-ref s 1)))

(define (cg-label s)
  ((vector-ref s 2)))

(define (cg-extend-env s env*)
  (vector (append env* (vector-ref s 0))
          (vector-ref s 1)
          (vector-ref s 2)
          (vector-ref s 3)
          (vector-ref s 4)))

(define (cg-code-env s env* reg-start)
  (vector env*
          (cg-reg-gen reg-start)
          (vector-ref s 2)
          (vector-ref s 3)
          #f))

(define (cg-lookup name emit s)
  ;; (print "#;cg-lookup " name " in " (cg-env s))
  (let ((v (assq name (cg-env s))))
    (if v
        (case (cadr v)
          ((closure)
           (let ((reg (cg-reg s)))
             (emit (list 'closure-ref reg (cddr v)))
             reg))
          ((local)
           (cddr v))
          (else
           (error 'cg-lookup "Unknown variable type" v)))
        (error 'cg-lookup "Unknown variable" name))))

(define (cg-mutate name reg emit s)
  ;; (print "#;cg-mutate " name " in " (cg-env s))
  (let ((r (cg-reg s)))
    (let ((v (assq name (cg-env s))))
      (if v
          (case (cadr v)
            ((closure)
             (emit (list 'closure-set! (cddr v) reg)))
            ((local)
             (emit (list 'move (cddr v) reg)))
            (else
             (error 'cg-mutate "Unknown variable type" v)))
          (error 'cg-mutate "Unknown variable" name)))
    (emit (list 'make-void r))
    r))

(define (cg-const value emit s)
  (let ((reg (cg-reg s)))
    ;; TODO: load small immediate constants directly from the
    ;; instruction
    (emit (list 'const-ref reg ((vector-ref s 3) value)))
    reg))

(define (cg-const-pool s)
  (reverse ((vector-ref s 3))))

(define (cg-primcall name ai emit s)
  (let ((r (cg-reg s)))
    (emit (list 'primcall r name ai))
    r))

(define (cg-apply tail? f ai emit s)
  ;; (print "#;cg-apply " tail? #\space ai)
  (let ((r (cg-reg s)))
    (if tail?
        (let ()
          (emit (list 'tailapply f (- ai 1)))
          (emit (list 'make-void r)))
        (emit (list 'applycall r f (- ai 1))))
    r))

(define (cg-primitive name emit s)
  (let ((r (cg-reg s)))
    (emit (list 'primref r name))
    r))

(define (cg-frame-start emit s)
  ;; Emit an instruction that will be modified by cg-frame-end
  (let ((frame (list 'frame 'n)))
    (vector-set! s 4 frame)
    (emit frame)))

(define (cg-frame-end s)
  ;; Record the number of the highest used register
  (set-car! (cdr (vector-ref s 4))
            (cg-reg s)))

(define (codegen* x emit s tail?)
  ;; (display (list 'codegen* x)) (newline)
  (if (symbol? x)
      (cg-lookup x emit s)
      (case (car x)
        (($labels)
         ;; generate codes and body
         ;; extend env with both closure and argument variables
         (cg-frame-start emit s)
         (emit (list 'return (codegen* (caddr x) emit s tail?)))
         (cg-frame-end s)
         (for-each
          (lambda (x)
            #;(print "#;label " x)
            (let ((label (car x))
                  (code (cadr x)))
              (emit (list 'label label))
              (let ((formals (cadr code))
                    (closure-vars (caddr code))
                    (body (cadddr code)))
                (let lp ((formals formals)
                         (env '())
                         (fi 0)
                         (restargs? #f))
                  (cond ((null? formals)
                         (let lp ((closure-vars closure-vars)
                                  (env env)
                                  (ci 0))
                           (if (null? closure-vars)
                               (let ((s* (cg-code-env s env fi)))
                                 (cg-frame-start emit s*)
                                 (if restargs?
                                     (emit (list 'consargs fi)))
                                 (let ((ret (codegen* body emit s* #t)))
                                   (emit (list 'return ret))
                                   (cg-frame-end s*)
                                   'unused))
                               (lp (cdr closure-vars)
                                   (cons (cons (car closure-vars)
                                               (cons 'closure ci))
                                         env)
                                   (+ ci 1)))))
                        ((pair? formals)
                         (lp (cdr formals)
                             (cons (cons (car formals)
                                         (cons 'local fi))
                                   env)
                             (+ fi 1)
                             restargs?))
                        (else
                         (lp '()
                             (cons (cons formals
                                         (cons 'local fi))
                                   env)
                             (+ fi 1)
                             #t)))))))
          (cadr x)))
        (($closure)
         (let ((r (cg-reg s))
               (name (cadr x))
               (label (caddr x))
               (closure-vars (cdddr x)))
           #;(print "#;closure " (cdr x))
           (emit (list 'closure r (length closure-vars)))
           (emit (list 'closure.name r (cg-const name emit s)))
           (emit (list 'closure.label r label))
           (let lp ((vars closure-vars)
                    (ci 0))
             (cond ((null? vars) r)
                   (else
                    (emit (list 'closure.var r ci (codegen* (car vars) emit s #f)))
                    (lp (cdr vars) (+ ci 1)))))))
        ((let)
         ;; Extend the environment with new bindings
         (let ((regs (map (lambda (bind)
                            (let ((lhs (car bind))
                                  (rhs (cadr bind)))
                              (cons lhs (cons 'local (codegen* rhs emit s #f)))))
                          (cadr x))))
           #;(print "#;regs " regs)
           (codegen* (caddr x) emit
                     (cg-extend-env s regs)
                     tail?)))
        ((quote)
         (cg-const (cadr x) emit s))
        (($primitive)
         (cg-primitive (cadr x) emit s))
        ((set!)
         (cg-mutate (cadr x)
                    (codegen* (caddr x) emit s #f)
                    emit s))
        ((if)
         (let ((test (cadr x))
               (consequence (caddr x))
               (alternative (cadddr x)))
           (let* ((alt (cg-label s))
                  (exit (cg-label s)))
             (let ((vreg (codegen* test emit s #f))
                   (rreg (cg-reg s)))
               (emit (list 'bf vreg alt))
               (emit (list 'move rreg (codegen* consequence emit s tail?)))
               (emit (list 'jump exit))
               (emit (list 'label alt))
               (emit (list 'move rreg (codegen* alternative emit s tail?)))
               (emit (list 'label exit))
               rreg))))
        ((begin)
         (let lp ((body (cdr x))
                  (reg #f))
           (cond ((null? body) reg)
                 (else
                  (lp (cdr body)
                      (codegen* (car body) emit s
                                (and tail? (null? (cdr body)))))))))
        (($funcall $primcall)
         ;; Call to a primitive, a tail-call or a normal call.
         (letrec ((push-arguments
                   (lambda (arg*)
                     (do ((arg* arg* (cdr arg*))
                          (ai 0 (+ ai 1)))
                         ((null? arg*) ai)
                       (emit (list 'push (codegen* (car arg*) emit s #f)))))))
           (let ((operator (cadr x))
                 (operand* (cddr x)))
             (if (eq? (car x) '$primcall)
                 (cond
                   ((and (eq? operator '$apply) (pair? operand*))
                    (let* ((f (codegen* (car operand*) emit s #f))
                           (ai (push-arguments (cdr operand*))))
                      (cg-apply tail? f ai emit s)))
                   ((eq? operator '$copy-stack)
                    (let ((r (cg-reg s)))
                      (emit (list 'copy-stack r))
                      r))
                   ((eq? operator '$restore-stack)
                    (let* ((stk (codegen* (car operand*) emit s #f))
                           (v (codegen* (cadr operand*) emit s #f))
                           (r (cg-reg s)))
                      (emit (list 'restore-stack stk v))
                      (emit (list 'make-void r))
                      r))
                   (else
                    (let ((ai (push-arguments operand*)))
                      (cg-primcall operator ai emit s))))
                 (let* ((ai (push-arguments operand*))
                        (f (codegen* operator emit s #f)))
                   (cond
                     (tail?
                      (emit (list 'tailcall f ai))
                      (let ((r (cg-reg s)))
                        (emit (list 'make-void r))
                        r))
                     (else
                      (let ((r (cg-reg s)))
                        (emit (list 'funcall r f ai))
                        r))))))))
        (else
         (error 'codegen* "Bad expression" x)))))

(define (find-labels code)
  ;; (display "assembler labels:\n")
  (let lp ((code code) (labels '()) (pc 0))
    (if (null? code)
        labels
        (case (caar code)
          ((label)
           ;; (display #\tab) (display (car code)) (newline)
           (lp (cdr code) (cons (cons (cadar code) pc) labels) pc))
          (else
           ;; (display (number->string pc 16)) (display #\tab) (display (car code)) (newline)
           (lp (cdr code) labels (+ pc 1)))))))

(define *assembler-output* #f)

(define (make-assembler port labels)
  ;; One-pass assembler.
  (let ((relocs '())
        (pc 0))
    (define (put i)
      (set! pc (+ pc 1))
      (put-u8 port (bitwise-and #xff i))
      (put-u8 port (bitwise-and #xff (bitwise-arithmetic-shift-right i 8)))
      (put-u8 port (bitwise-and #xff (bitwise-arithmetic-shift-right i 16)))
      (put-u8 port (bitwise-and #xff (bitwise-arithmetic-shift-right i 24))))
    (lambda (i)
      (when *assembler-output*
        (display (list (number->string pc 16) i)) (newline))
      (case (car i)
        ;; op1 format
        ((frame) (put (op1 FRAME 0 0 (cadr i))))
        ((return) (put (op1 RETURN 0 0 (cadr i))))
        ((push) (put (op1 PUSH 0 0 (cadr i))))
        ((make-void) (put (op1 MAKE-VOID 0 0 (cadr i))))
        ((move) (put (op1 MOVE 0 (caddr i) (cadr i))))
        ((closure.name) (put (op1 CLOSURE.NAME 0 (caddr i) (cadr i))))
        ((closure-ref) (put (op1 CLOSURE-REF (caddr i) 0 (cadr i))))
        ((closure-set!) (put (op1 CLOSURE-SET! (cadr i) 0 (caddr i))))
        ((closure) (put (op1 CLOSURE (caddr i) 0 (cadr i))))
        ((tailcall) (put (op1 TAILCALL (caddr i) 0 (cadr i))))
        ((consargs) (put (op1 CONSARGS (cadr i) 0 0)))
        ((closure.var) (put (op1 CLOSURE.VAR (caddr i) (cadddr i) (cadr i))))
        ((funcall) (put (op1 FUNCALL (cadddr i) (caddr i) (cadr i))))
        ((applycall) (put (op1 APPLYCALL (cadddr i) (caddr i) (cadr i))))
        ((tailapply) (put (op1 TAILAPPLY (caddr i) 0 (cadr i))))
        ((copy-stack) (put (op1 STACK-CTRL 0 0 (cadr i))))
        ((restore-stack) (put (op1 STACK-CTRL 1 (caddr i) (cadr i))))
        ;; op2 format
        ((jump)
         (let* ((name (cadr i)) (dst (cdr (assq name labels))))
           (put (op2 JUMP (- dst pc) 0))))
        ((const-ref)
         (put (op2 CONST-REF (caddr i) (cadr i))))
        ((bf)
         (let* ((name (caddr i)) (dst (cdr (assq name labels))))
           (put (op2 BF (- dst pc) (cadr i)))))
        ((closure.label)
         (let* ((name (caddr i)) (dst (cdr (assq name labels))))
           (put (op2 CLOSURE.LABEL (- dst pc) (cadr i)))))
        ;; op3 format
        ((primcall)
         (put (op3 PRIMCALL (cadddr i) (primitive-number (caddr i)) (cadr i))))
        ((primref)
         (put (op3 PRIMREF 0 (primitive-number (caddr i)) (cadr i))))
        ((label) #f)
        (else
         (error 'codegen "Internal error: bad instruction" i))))))

(define (codegen x)
  (let* ((code '())
         (emit (lambda (i) (set! code (cons i code))))
         (s (cg-new-state)))
    (codegen* x emit s #f)
    (set! code (reverse code))
    ;; (pretty-print x)
    ;; (pretty-print code)
    (let ((labels (find-labels code)))
      ;; (display "LABELS: ")
      ;; (display labels)
      ;; (newline)
      (call-with-values
        open-bytevector-output-port
        (lambda (port extract)
          (for-each (make-assembler port labels) code)
          (vector (extract) (list->vector (cg-const-pool s))))))))
