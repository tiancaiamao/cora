;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
;; remove-complex-opera*
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

; "alloc" is removed completely from non-tail positions and turned into
; assignments, but left intact on tail positions. "mref" and "mset!" are
; treated much like a call, but have a new type of context 'mref, mref only
; gets out of 'mref contexts and remain inside others so that we can have
; (set! x.1 (+ (mref a.1 8) 1)). mset! is treated exactly like calls.


#|
(f$1 (+ (* x.2 x.5) 7) (sra x.1 3))
=>
(begin
  (set! t.9 (begin
              (set! t.8 (* x.2 x.5))
              (+ t.8 7)))
  (set! t.10 (sra x.1 3))
  (f$1 t.9 t.10))

(letrec ((f$1 (lambda (a b c)
                (f$1 (+ (* x.2 x.5) 7) (sra x.1 3)))))
  (+ x.1 1))
=>
(letrec ((f$1 (lambda (a b c)
                (begin
                  (set! t.38 (begin (set! t.37 (* x.2 x.5)) (+ t.37 7)))
                  (set! t.39 (sra x.1 3))
                  (f$1 t.38 t.39)))))
  (+ x.1 1))
|#


(define remove-complex-opera*
  (lambda (exp)
    (define temp* #f)
    (define new-t
      (lambda ()
        (let ([t (unique-name 't)])
          (set-box! temp* (cons t (unbox temp*)))
          t)))
    (define rem1
      (lambda (exp)
        (set! temp* (box '()))
        (let ([exp* (make-begin (rem `(,exp) 'id id))])
          (values (unbox temp*) exp*))))
    (define rem
      (lambda (exp ct C)
        (match exp
          [(letrec ([,label* (lambda (,fml** ...)
                               (locals (,local1* ...)
                                 ,[rem1 -> new* tail*]))] ...)
             (locals (,local2* ...) ,[rem1 -> new tail]))
           `(letrec ([,label* (lambda (,fml** ...)
                                (locals (,local1* ... ,new* ...) ,tail*))] ...)
              (locals (,local2* ... ,new ...) ,tail))]
          [((begin ,e* ... ,t))
           (let ([vt* (rem `(,t) ct
                           (lambda (vt*)
                             (case ct
                               [(fun arg mref)
                                (let ([t@ (new-t)])
                                  `((set! ,t@ ,@vt*) ,@(C `(,t@))))]
                               [else (C vt*)])))])
             (rem `(,e* ...) 'seq
                  (lambda (ve*) `(,@ve* ,@vt*))))]
          [(,a ,a* ...) (guard (eq? ct 'arg*))
           (rem `(,a) 'arg
                (lambda (v1*)
                  (rem `(,a* ...) 'arg*
                       (lambda (v2*) (C `(,@v1* ,@v2*))))))]
          [(,h ,t ,t* ...)
           (let ([vt* (rem `(,t ,t* ...) ct C)])
             (rem `(,h) 'seq
                  (lambda (vh*) `(,@vh* ,@vt*))))]
          [((if ,test ,conseq ,alt))
           (case ct
             [(fun arg mref)
              (let* ([t@ (new-t)]
                     [ctx (lambda (v*) `((set! ,t@ ,@v*)))]
                     [ec (make-begin (rem `(,conseq) 'rhs ctx))]
                     [ea (make-begin (rem `(,alt) 'rhs ctx))])
                (rem `(,test) 'test
                     (lambda (vt*) `((if ,@vt* ,ec ,ea) ,@(C `(,t@))))))]
             [rhs
              (let ([ec (make-begin (rem `(,conseq) ct C))]
                    [ea (make-begin (rem `(,alt) ct C))])
                (rem `(,test) 'test
                     (lambda (vt*) `((if ,@vt* ,ec ,ea)))))]
             [else
              (let ([ec (make-begin (rem `(,conseq) 'id id))]
                    [ea (make-begin (rem `(,alt) 'id id))])
                (rem `(,test) 'test
                     (lambda (vt*) (C `((if ,@vt* ,ec ,ea))))))])]
          [((set! ,x ,y))
           (C (rem `(,x) 'lhs
                   (lambda (vx*)
                     (rem `(,y) 'rhs
                          (lambda (vy*) `((set! ,@vx* ,@vy*)))))))]
          [((,a)) (guard (memq a '(nop true false))) (C `((,a)))]
          [((alloc ,n))
           (rem `(,n) 'arg
                (lambda (vn*)
                  (let ([addr (new-t)])
                    `((set! ,addr ,allocation-pointer-register)
                      (set! ,allocation-pointer-register
                            (+ ,allocation-pointer-register ,@vn*))
                      ,@(C `(,addr))))))]

          [((mset! ,base ,off ,val))
           (C (rem `(,base) 'mref
                   (lambda (vb*)
                     (rem `(,off) 'mref
                          (lambda (vo*)
                            (rem `(,val) 'rhs
                                 (lambda (vv*)
                                   `((mset! ,@vb* ,@vo* ,@vv*)))))))))]
          [((mref ,base ,off))
           (rem `(,base) 'mref
                (lambda (vb*)
                  (rem `(,off) 'mref
                       (lambda (vo*)
                         (case ct
                           [(fun mref)
                            (let ([t@ (new-t)])
                              `((set! ,t@ (mref ,@vb* ,@vo*)) ,@(C `(,t@))))]
                           [else (C `((mref ,@vb* ,@vo*)))])))))]
          [((,f ,a* ...))
           (rem `(,f) 'fun
                (lambda (vf*)
                  (rem `(,a* ...) 'arg*
                       (lambda (va*)
                         (case ct
                           [(fun arg mref)
                            (let ([t@ (new-t)])
                              `((set! ,t@ (,@vf* ,@va*)) ,@(C `(,t@))))]
                           [else (C `((,@vf* ,@va*)))])))))]
          [,exp (C exp)])))
    (rem exp 'id id)))
