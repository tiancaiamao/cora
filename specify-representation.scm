;;;;;;;;;;;;;;;;;;;;; specify-representation ;;;;;;;;;;;;;;;;;;;;;

;; box, unbox and set-box! added

#|
(* e1 e2) => (* e1 (sra e2 3))
(car e) => (mref e offset-car)
(set-car! e1 e2) => (mset! e1 offset-car e2)
(cons e1 e2)
=>
(let ([tmp-car e1] [tmp-cdr e2])
  (let ([tmp (+ alloc 8) 1])
    (begin
      (mset! tmp -1 tmp-car)
      (mset! tmp 3 tmp-cdr)
      tmp)))

(vector-ref e1 e2)
=>
(mref e1 (+ offset-vector-data e2))

(make-vector k)
=>
(let ([tmp (+ (alloc n) ,tag-vector)])
  (begin
    (mset! tmp offset-vector-length k)
    tmp))

(eq? e1 e2) => (= e1 e2)
|#
(define specify-representation
  (lambda (x)
    (define trivial?
      (lambda (x)
        (or (number? x) (memq x (list $false $true $nil $void)))))
    (match x
      ; basic grammar structures
      [(letrec ([,label (lambda (,uvar* ...) ,[body*])] ...) ,[body])
       `(letrec ([,label (lambda (,uvar* ...) ,body*)] ...) ,body)]
      [(if ,[test] ,[conseq] ,[alt])
       `(if ,test ,conseq ,alt)]
      [(begin ,[ef*] ...)
       `(begin ,ef* ...)]
      [(let ([,x* ,[v*]] ...) ,[body])
       `(let ([,x* ,v*] ...) ,body)]

      ; type and equivalence predicates
      [(eq? ,[x] ,[y]) `(= ,x ,y)]
      [(null? ,[e])
       (specify-representation `(eq? ,e '()))]
      [(pair? ,[e])
       `(= (logand ,e ,mask-pair) ,tag-pair)]
      [(box? ,[e])
       `(= (logand ,e ,mask-box) ,tag-box)]
      [(boolean? ,[e])
       `(= (logand ,e ,mask-boolean) ,tag-boolean)]
      [(fixnum? ,[e])
       `(= (logand ,e ,mask-fixnum) ,tag-fixnum)]
      [(vector? ,[e])
       `(= (logand ,e ,mask-vector) ,tag-vector)]
      [(procedure? ,[e])
       `(= (logand ,e ,mask-procedure) ,tag-procedure)]

      ; numbers
      [(,op ,[m] ,[n]) (guard (memq op '(+ - < <= >= > =)))
       `(,op ,m ,n)]
      [(* ,[m] ,[n])
       (cond
        [(number? m) `(* ,(sra m shift-fixnum) ,n)]
        [(number? n) `(* ,(sra n shift-fixnum) ,m)]
        [else `(* (sra ,m ,shift-fixnum) ,n)])]

      ; pairs
      [(cons ,[e1] ,[e2])
       (let* ([offset-car (- disp-car tag-pair)]
              [offset-cdr (- disp-cdr tag-pair)]
              [tmp (unique-name 't)]
              [tmp-car (if (trivial? e1) e1 (unique-name 't))]
              [tmp-cdr (if (trivial? e2) e2 (unique-name 't))]
              [bd-car (if (trivial? e1) `() `((,tmp-car ,e1)))]
              [bd-cdr (if (trivial? e2) `() `((,tmp-cdr ,e2)))]
              [body1 `(let ([,tmp (+ (alloc ,size-pair) ,tag-pair)])
                        (begin
                          (mset! ,tmp ,offset-car ,tmp-car)
                          (mset! ,tmp ,offset-cdr ,tmp-cdr)
                          ,tmp))])
         (if (or (not (null? bd-car)) (not (null? bd-cdr)))
             `(let (,@bd-car ,@bd-cdr) ,body1)
             body1))]
      [(set-car! ,[e1] ,[e2])
       (let ([offset-car (- disp-car tag-pair)])
         `(mset! ,e1 ,offset-car ,e2))]
      [(set-cdr! ,[e1] ,[e2])
       (let ([offset-cdr (- disp-cdr tag-pair)])
         `(mset! ,e1 ,offset-cdr ,e2))]
      [(car ,[e])
       (let ([offset-car (- disp-car tag-pair)])
         `(mref ,e ,offset-car))]
      [(cdr ,[e])
       (let ([offset-cdr (- disp-cdr tag-pair)])
         `(mref ,e ,offset-cdr))]

      ; boxes
      [(box ,[e])
       (let* ([offset-box (- tag-box)]
              [tmp (unique-name 't)]
              [tmp-e (if (trivial? e) e (unique-name 't))]
              [bd-e (if (trivial? e) `() `((,tmp-e ,e)))]
              [body1 `(let ([,tmp (+ (alloc ,size-box) ,tag-box)])
                        (begin
                          (mset! ,tmp ,offset-box ,tmp-e)
                          ,tmp))])
         (if (null? bd-e) body1 `(let (,@bd-e) ,body1)))]
      [(set-box! ,[e1] ,[e2])
       (let ([offset-box (- tag-box)])
         `(mset! ,e1 ,offset-box ,e2))]
      [(unbox ,[e])
       (let ([offset-box (- tag-box)])
         `(mref ,e ,offset-box))]

      ; vectors
      [(make-vector ,[k])
       (let ([offset-vector-length (- disp-vector-length tag-vector)]
             [tmp (unique-name 't)])
         (cond
          [(number? k)
           `(let ([,tmp (+ (alloc ,(+ disp-vector-data k)) ,tag-vector)])
              (begin
                (mset! ,tmp ,offset-vector-length ,k)
                ,tmp))]
          [else
           (let ([tmp1 (unique-name 't)]
                 [tmp2 (unique-name 't)])
             `(let ([,tmp1 ,k])
                (let ([,tmp2 (+ (alloc (+ ,disp-vector-data ,tmp1)) ,tag-vector)])
                  (begin
                    (mset! ,tmp2 ,offset-vector-length ,tmp1)
                    ,tmp2))))]))]
      [(vector-set! ,[e1] ,[e2] ,[e3])
       (let ([offset-vector-data (- disp-vector-data tag-vector)])
         (cond
          [(number? e2)
           `(mset! ,e1 ,(+ offset-vector-data e2) ,e3)]
          [else
           `(mset! ,e1 (+ ,offset-vector-data ,e2) ,e3)]))]
      [(vector-ref ,[e1] ,[e2])
       (let ([offset-vector-data (- disp-vector-data tag-vector)])
         (cond
          [(number? e2)
           `(mref ,e1 ,(+ offset-vector-data e2))]
          [else
           `(mref ,e1 (+ ,offset-vector-data ,e2))]))]
      [(vector-length ,[e1])
       (let ([offset-vector-length (- disp-vector-length tag-vector)])
         `(mref ,e1 ,offset-vector-length))]

      ; procedre
      [(make-procedure ,label ,[n])
       (let ([offset-procedure-code (- disp-procedure-code tag-procedure)]
             [tmp (unique-name 't)])
         `(let ([,tmp (+ (alloc ,(+ disp-procedure-data n)) ,tag-procedure)])
            (begin
              (mset! ,tmp ,offset-procedure-code ,label)
              ,tmp)))]
      [(procedure-set! ,[e1] ,[e2] ,[e3])
       (let ([offset-procedure-data (- disp-procedure-data tag-procedure)])
         `(mset! ,e1 ,(+ offset-procedure-data e2) ,e3))]
      [(procedure-code ,[e])
       (let ([offset-procedure-code (- disp-procedure-code tag-procedure)])
         `(mref ,e ,offset-procedure-code))]
      [(procedure-ref ,[e1] ,[e2])
       (let ([offset-procedure-data (- disp-procedure-data tag-procedure)])
         `(mref ,e1 ,(+ offset-procedure-data e2)))]

      ; immediates
      [(quote ,n) (guard (number? n))
       (ash n shift-fixnum)]
      [(quote ,str) (guard (string? str))
       (let ([tmp (unique-name 't)]
             [label (unique-label 'str)])
         `(let ([,tmp (+ (alloc ,(+ disp-string-data (string-length str))) ,tag-string)])
            (begin
              (constant-init
               ,label
               ,str)
              (mset! ,tmp 0 ,label)
              ,tmp)))]
      [(quote #f) $false]
      [(quote #t) $true]
      [(quote ()) $nil]
      [(void) $void]

      ; procedure calls goes last because it could match other cases
      [(,[f] ,[x*] ...) `(,f ,x* ...)]
      [,x x])))

#!eof

(pretty-print (specify-representation ''"abcd"))
(specify-representation ''3)
