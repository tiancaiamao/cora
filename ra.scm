;; linear scan register allocation algorithm

(define-record-type interval 
  (make-interval start end var)
  interval?
  (start interval-start interval-start-set!)
  (end interval-end interval-end-set!)
  (var interval-var interval-var-set!))

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
  ((active 'removes) (interval-start interval)
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
      (display "add-to-result:")
      (display x)
      (newline)
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

(define (liveness-analysis exp)
  'TODO)

#|
(define (ra exp)
  (let* ((intervals (liveness-analysis))
	 (linear-scan-register-allocation intervals '(rcx rdx rex rsi rdi rax)))
    'TODO))
|#
