;; linear scan register allocation algorithm

(define-record-type interval 
  (make-interval start end var)
  interval?
  (start interval-start interval-start-set!)
  (end interval-end interval-end-set!)
  (var interval-var interval-var-set!))

;; closure is poor man's object
(define (make-active size)
  (let ((active (make-vector (+ size 1)))
	(head 0)
	(tail 0))
    (define (add-active interval register)
      'TODO)
    (define (remove-actives value fn)
      'TODO)
    (define (tail-active)
      'TODO)
    (define (pop-active)
      'TODO)
    (define (full-active)
      'TODO)
    (define (for-each)
      'TODO)
    (lambda (msg)
      (case msg
	('add add-creative)
	('removes remove-actives)
	('tail tail-active)
	('pop pop-active)
	('full full-active)
	('for-each for-each)))))

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
  ((active 'remove-actives) (interval-start interval)
   (lambda (x)
     ((available 'push) (cdr x))
     (fn x))))

;; interval => interval
;; return the interval to be spill
(define (spill-at-interval interval active)
  (let ((last-interval (active 'tail)))
    (if (> (interval-end last-interval) (interval-end interval))
	(let ((ret ((active 'pop))))
	  ((active 'add) interval)
	  ret)
	interval)))

(define (linear-scan-register-allocation intervals registers)
  (let ((result '())
	(active (make-active (length intervals)))
	(available (make-available registers)))

    (define (add-to-result x)
      (lambda (x) 
	(set! result (cons 
		      (cons (interval-var (car x)) (cdr x))
		      result))))
    
    (for-each (lambda (interval)
		(expire-old-intervals interval active available
				      add-to-result)
		(if ((active 'full))
		    (spill-at-interval active)
		    (let ((tmp ((available 'pop))))
		      ((active 'add) tmp))))
	      intervals)
    ((active 'for-each) add-to-result)

    result))  

(define (liveness-analysis exp)
  'TODO)

(define (ra exp)
  (let* ((intervals (liveness-analysis))
	 (linear-scan-register-allocation intervals '(rcx rdx rex rsi rdi rax)))
    'TODO))
