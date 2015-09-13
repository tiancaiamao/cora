#|
(letrec ([f$1 (lambda ()
                (if (if (= r8 1) (true) (> r9 1000))
                    (begin (set! rax r9) (r15))
                    (begin
                      (set! r9 (* r9 2))
                      (set! rax r8)
                      (set! rax (logand rax 1))
                      (if (= rax 0) (set! r9 (+ r9 1)) (nop))
                      (set! r8 (sra r8 1))
                      (f$1))))])
  (begin (set! r8 3) (set! r9 10) (f$1)))
=>
(letrec ([f$1 (lambda () (if (= r8 1) (c$8) (a$9)))]
         [c$8 (lambda () (c$6))]
         [a$9 (lambda () (if (> r9 1000) (c$6) (a$7)))]
         [c$6 (lambda () (begin (set! rax r9) (r15)))]
         [a$7 (lambda ()
                (begin
                  (set! r9 (* r9 2))
                  (set! rax r8)
                  (set! rax (logand rax 1))
                  (if (= rax 0) (c$3) (a$4))))]
         [c$3 (lambda () (begin (set! r9 (+ r9 1)) (j$5)))]
         [a$4 (lambda () (j$5))]
         [j$5 (lambda () (begin (set! r8 (sra r8 1)) (f$1)))])
  (begin (set! r8 3) (set! r9 10) (f$1)))
|#

(define expose-basic-blocks
  (lambda (p)

    (define functions '())
    (define build-function
      (lambda (label body)
        `(,label (lambda () ,body))))
    (define add-function
      (lambda (label body)
        (set! functions (cons (build-function label body) functions))))

    (define program
      (lambda (x)
        (match x
               [(letrec ([,label* (lambda () ,body*)] ...) ,tail)
                (let ((body1 (map expose body*))
                      (tail1 (expose tail)))
                  (for-each add-function label* body1)
                  `(letrec (,@functions) ,tail1))])))

    (define expose
      (lambda (x)
        (match x
               [(begin ,es* ...) (make-begin (map expose es*))]
               [(,triv) x]
               [(set! ,loc ,triv) x]
               [(if ,test ,then ,else)
                (let ((Lthen (unique-label 't))
                      (Lelse (unique-label 'e)))
                  (let ((then1 (expose then))
                        (else1 (expose else)))
                    (add-function Lthen then1)
                    (add-function Lelse else1)
                    (pred test Lthen Lelse)))]
               [,x x])))

    (define pred
      (lambda (p true-label false-label)
        (match p
               [(true) `(,true-label)]
               [(false) `(,false-label)]
               [(begin es* ...) (map expose es*)]
               [(if ,a ,b ,c)
                (let ((Lb (unique-label 't))
                      (Lc (unique-label 'e))
                      (b1 (pred b true-label false-label))
                      (c1 (pred c true-label false-label)))
                  (add-function Lb b1)
                  (add-function Lc c1)
                  (pred a Lb Lc))]
               [(,op ,v1 ,v2) `(if ,p (,true-label) (,false-label))])))

    (program p)))
