;; linear scan register allocation algorithm

(define (compute-live-range exp) 42)

(define live-range '((a . (1 . 4)) (b . (2 . 3)) (c . (1 . 5)) (d . (3 . 5))))
(define active '((a . r1) (b . r2) (c . r3)))
(define free-regs '(r4 r5))
(define internals '())


(define (live-range->intervals lr)
  ;; sort by begin point
)

(define (ra live-range free-regs)
  (let ((intervals (live-range->intervals live-range))
	(active '()))
    (for-each (lambda (interval)
		(expire-old-intervals (interval-start interval))
		(if (null? free-regs)
		    (split-at-interval (interval-start interval))
		    (let ((reg (car free-regs)))
		      (set! free-regs (cdr free-regs))
		      (set! active (cons reg interval)))))
	      intervals)))

(define (expire-old-intervals now)
  (filter (lambda (reg-interval)
	    (let ((interval (cdr reg-interval))
		  (reg (car reg-interval)))
	      (if (< (interval-end interval) now)
		  (begin
		    (set! free-regs (cons reg free-regs))
		    #t)
		  #f)))
	  active))

(define (spill-at-interval i)
  (let ((spill (last active)))
    (if (> (interval-end spill) (interval-end i))
	)))
		  
