(load "match.scm")
#|
cps变换（去掉尾递归)
闭包变换（去掉自由变量）
引入local表标记局部变量
将let和lambda提取到只在top出现（去掉let和lambda）
函数调用协议处理
寄存器分配（去掉了变量）
if变跳转 （去掉了if）
|#

(define (uncover-locals exp)
  (define (uncover exp)
    (match exp
           ((if ,a ,b ,c)
            (let-values (((a1 la) (uncover a))
                         ((b1 lb) (uncover b))
                         ((c1 lc) (uncover c)))
              (values `(if ,a1 ,a2 ,a3) (append la lb lc))))
           ((begin x) (uncover x))
           ((begin ,x ,x* ...)
            (let-values (((x1 lx) (uncover x))
                         ((rem lrem) (uncover `(begin ,@x*))))
              (values `(begin ,x1 ,rem) (append lx lrem))))
           ((set! ,var ,e)
            (call-with-values (lambda () (uncover e))
              (lambda (e1 l)
                (values `(set! ,var ,e1) l))))
           ((lambda ,(vars ...) ,body ...)
            (call-with-values (lambda () (uncover `(begin ,@body)))
              (lambda (body* locals)
                `(lambda ,vars
                   (locals ,locals
                           ,body*)))))
           ((let ((,vars ,vals) ...) body ...)
            (let ((locals* '())
                  (vals* '()))
              (map (lambda (x)
                     (call-with-values (lambda () (uncover x))
                       (lambda (v l)
                         (set! vals* (cons v vals*))
                         (set! locals* (cons l locals*)))))
                   vals)
              (call-with-values (lambda () (uncover `(begin ,@body)))
                (lambda (body* lbody)
                  (values `(locals ,(append locals* lbody)
                                   ,@(map (lambda (x y) (set! x y)) vars vals*)
                                   body*) '())))))))

  (uncover exp))

(define (flatten-lambda exp) #f)

#|
(define remove-let
  (lambda (x)
    (define rem1
      (lambda (x)
        (make-begin (rem x))))
    (define rem
      (lambda (x)
        (match x
          [(letrec ((,label* (lambda (,uvar* ...)
                               (locals (,local* ...) ,[rem1 -> body*]))) ...)
             (locals (,local ...) ,[rem1 -> body]))
           `(letrec ((,label* (lambda (,uvar* ...)
                                (locals (,local* ...) ,body*))) ...)
              (locals (,local ...) ,body))]
          [(begin ,[s*] ...) `((begin ,s* ... ...))]
          [(let ((,x* ,[v*]) ...) ,[body])
           (let ([set* `((set! ,x* ,@v*) ...)])
             `(,(make-begin `(,@set* ,@body))))]
          [(if ,[test] ,[conseq] ,[alt])
           `((if ,@test ,@conseq ,@alt))]
          [(alloc ,[n]) `((alloc ,@n))]
          [(mset! ,[base] ,[off] ,[val]) `((mset! ,@base ,@off ,@val))]
          [(set! ,x ,[y]) `((set! ,x ,@y))]
          [(,[f] ,[a*] ...) `((,@f ,a* ... ...))]
          [,other `(,other)])))
    (rem x)))
|#
