(define tracer (make-parameter #f))
(define compiler-passes (make-parameter '()))

(define compile
  (lambda (x)
    (define trace-print
      (lambda (pass input output)
        (printf "=== trace of ~s ===~%" pass)
        (pretty-print input)
        (printf "=>~%")
        (pretty-print output)
        (newline)))

    (define need-trace?
      (lambda (trace? label)
        (or (eq? #t trace?)
            (eq? trace? label) ;;symbol
            (and (pair? trace?) (memq label trace?)))))

    ;; ls (x->x) -> (x->x)
    (define nanopass
      (lambda (passes ret)
        (if (null? passes)
            ret
            (let* ((label (car passes))
                   (first (eval label)))
              (nanopass (cdr passes)
                        (lambda (x)
                          (let* ((input (ret x))
                                 (output (first input)))
                            (when (need-trace? (tracer) label)
                                  (trace-print label input output))
                            output)))))))

    ((nanopass (compiler-passes) (lambda (x) x)) x)))
