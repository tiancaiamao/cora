#|
(letrec ([f$1 (lambda ()
                (locals (x.1 y.2)
                        (intervals (x1 s1 . e1) (y2 s2 . e2))
                        (if (true)
                            (begin
                              (set! x.1 3)
                              (set! y.2 x.1))
                            (f$1))))])
  (locals ()
          (begin
            (set! r8 3)
            (set! r9 10))))
=>
(letrec ([f$1 (lambda ()
                (locate ([x.1 r8] [y.2 r9])
                        (if (if (= x.1 1) (true) (> y.2 1000))
                            (begin (set! rax y.2) (r15))
                            (begin
                              (set! y.2 (* y.2 2))
                              (set! rax x.1)
                              (set! rax (logand rax 1))
                              (if (= rax 0) (set! y.2 (+ y.2 1)) (nop))
                              (set! x.1 (sra x.1 1))
                              (f$1)))))])
  (locate () (begin (set! r8 3) (set! r9 10) (f$1))))
|#

;; linear scan register allocation algorithm
(define (make-interval start end var)
  (vector start end var))
(define (interval-start interval)
  (vector-ref interval 0))
(define (interval-end interval)
  (vector-ref interval 1))
(define (interval-var interval)
  (vector-ref interval 2))

;; closure is poor man's object
(define (make-active size)
  (set! size (+ size 1))
  (let ((active (make-vector size))
        (head 0)
        (tail 0)
        (lastSlot (- size 1)))

    (define (add-active interval register)
      (if (= head tail)
          (begin
            (vector-set! active tail (cons interval register))
            (set! tail (modulo (+ tail 1) size)))
          (let ((pos (if (= tail 0) lastSlot (- tail 1)))
                (headPrev (if (= head 0) lastSlot (- head 1))))
            (let loop ((i pos))
              (let ((current (car (vector-ref active i))))
                (if (> (interval-end current) (interval-end interval))
                    (begin
                      (vector-set! active (+ i 1) (vector-ref active i))
                      (loop (if (= i 0) lastSlot (- i 1))))
                    (set! pos (modulo (+ i 1) size)))))
            (vector-set! active pos (cons interval register))
            (set! tail (modulo (+ tail 1) size)))))

    (define (remove-actives value fn)
      (let loop ((i head))
        (if (not (= i tail))
            (let ((current (vector-ref active i)))
              (if (<= (interval-end (car current)) value)
                  (begin
                    (fn current)
                    (loop (modulo (+ i 1) size)))
                  (set! head i)))
            (set! head tail))))

    (define (tail-active)
      (vector-ref active (if (= tail 0)
                             lastSlot
                             (- tail 1))))

    (define (pop-active)
      (let ((pos (if (= tail 0)
                     lastSlot
                     (- tail 1))))
        (set! tail pos)
        (vector-ref active pos)))

    (define (full-active)
      (= (modulo (+ tail 1) size) head))

    (define (for-each fn)
      (let loop ((i head))
        (when (not (= i tail))
              (fn (vector-ref active i))
              (loop (modulo (+ i 1) size)))))

    (define (debug)
      (display head)
      (display tail)
      active)

    (lambda (msg)
      (case msg
        ('add add-active)
        ('removes remove-actives)
        ('tail tail-active)
        ('pop pop-active)
        ('full full-active)
        ('for-each for-each)
        ('debug debug)))))

(define (make-available ls)
  (let ((available ls))
    (define (push x)
      (set! available (cons x available)))
    (define (pop)
      (let ((ret (car available)))
        (set! available (cdr available))
        ret))
    (lambda (msg)
      (case msg
        ('push push)
        ('pop pop)))))


(define (expire-old-intervals interval active available fn)
  ((active 'removes)
   (interval-start interval)
   (lambda (x)
     ((available 'push) (cdr x))
     (fn x))))

(define (spill-at-interval interval active)
  (let ((last ((active 'tail))))
    (if (> (interval-end (car last)) (interval-end interval))
        (let ((tmp ((active 'pop))))
          ((active 'add) interval (cdr tmp))))))

(define (vector-for-each fn vec)
  (let ((size (vector-length vec)))
    (let loop ((i 0))
      (when (< i size)
            (fn (vector-ref vec i))
            (loop (+ i 1))))))

(define (linear-scan-register-allocation intervals registers)
  (let ((result '())
        (active (make-active (length registers)))
        (available (make-available registers)))

    (define (add-to-result x)
      ;;(display "add-to-result:")
      ;;(display x)
      ;;(newline)
      (set! result (cons
                    (cons (interval-var (car x)) (cdr x))
                    result)))

    (vector-for-each (lambda (interval)
                       (expire-old-intervals interval active available
                                             add-to-result)
                       (if ((active 'full))
                           (spill-at-interval interval active)
                           (let ((tmp ((available 'pop))))
                             ((active 'add) interval tmp))))
                     intervals)

    ((active 'for-each) add-to-result)

    result))

;; test linear-scan-register-allocation
#|
(define registers '(rcx rdx rex))
(define intervals (make-vector 7))
(vector-set! intervals 0 (make-interval 0 3 'va))
(vector-set! intervals 1 (make-interval 1 5 'vb))
(vector-set! intervals 2 (make-interval 2 3 'vc))
(vector-set! intervals 3 (make-interval 4 7 'vd))
(vector-set! intervals 4 (make-interval 5 10 've))
(vector-set! intervals 5 (make-interval 5 8 'vf))
(vector-set! intervals 6 (make-interval 6 7 'vg))
(linear-scan-register-allocation intervals registers)
|#

(define assign-registers
  (lambda (p)

    ;; ((x.1 3 . 2) (y.2 2 . -1)) => #(#<interval> #<interval>)
    (define transform
      (lambda (input)
        (set! input (sort (lambda (x y)
                            (< (cadr x) (cadr y))) input))
        (let ((ret (make-vector (length input))))
          (let loop ((i 0)
                     (ls input))
            (if (not (null? ls))
                (let* ((raw (car ls))
                       (interval (make-interval (cadr raw) (cddr raw) (car raw))))
                  (vector-set! ret i interval)
                  (loop (+ i 1) (cdr ls)))))
          ret)))

    ;; (intervals (x.1 3 . 2) (y.2 2 . -1)) => ((y.2 . rcx) (x.1 . rcx))
    (define transform-interval
      (lambda (x)
        (let ((intervals (transform (cdr x))))
          (linear-scan-register-allocation
           intervals
           '(rcx rdx rex rsi rdi rax)))))

    (match p
           [(program [(,label (code ()
                                    (locals
                                     ,bind
                                     ,[transform-interval -> intervals]
                                     ,body))) ...]
                     (locals ,btail ,[transform-interval -> itail] ,tail))
            (let ((body1 (map (lambda (interval body)
                                `(locate ,interval ,body))
                              intervals body)))
              `(program ([,label (code () ,body1)] ...)
                        (locate ,itail ,tail)))])))

#!eof
(assign-registers
 '(program ([f$1 (code ()
                       (locals (x.1 y.2)
                               (intervals (x.1 3 . 2) (y.2 2 . -1))
                               (if (true)
                                   (begin
                                     (set! x.1 3)
                                     (set! y.2 x.1))
                                   (f$1))))])
           (locals ()
                   (intervals (r8 2 . -1) (r9 1 . -1))
                   (begin (set! r8 3)
                          (set! r9 10)))))

(assign-registers
 '(program
  ((f$1 (code
         ()
         (locals
          (a.1 b.2 c.3)
          (intervals (a.1 6 . 4) (c.3 4 . 2) (b.2 5 . 1))
          (begin
            (set! a.1 r8)
            (set! b.2 fv0)
            (set! c.3 (+ a.1 2))
            (if (< c.3 0) (nop) (set! c.3 (+ c.3 b.2)))
            (set! b.2 (+ c.3 1))
            (r15 3 b.2))))))
  (locals () (intervals (rax 0 . -1)) (set! rax 3))))
