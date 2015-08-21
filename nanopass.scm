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
           ((? (lambda (x)
                 (or (symbol? x)
                     (boolean? x)
                     (string? x)
                     (number? x))))
            (values exp '()))
           (('if a b c)
            (let-values (((a1 la) (uncover a))
                         ((b1 lb) (uncover b))
                         ((c1 lc) (uncover c)))
              (values `(if ,a1 ,b1 ,c1) (append la lb lc))))
           (('begin x ...)
            (call-with-values (lambda () (uncover* x))
              (lambda (x* l)
                (values `(begin ,@x*) l))))
           (('set! var e)
            (call-with-values (lambda () (uncover e))
              (lambda (e1 l)
                (values `(set! ,var ,e1) l))))
           (('lambda (vars ...) body ...)
            (call-with-values (lambda () (uncover* body))
              (lambda (body* locals)
                (values `(lambda ,vars
                           (locals ,locals
                                   ,@body*)) locals))))
           (('let ((vars vals) ...) body ...)
            (let-values (((vals* l1) (uncover* vals))
                         ((body* l2) (uncover* body)))
              (values `(begin ,@(map (lambda (x y) `(set! ,x ,y)) vars vals*) ,@body*)
                      (append l1 l2 vars))))
           ((f xx ...)
            (uncover* exp))))

  (define (uncover* exps)
    (let ((locals '()))
      (values (map (lambda (x)
                     (call-with-values (lambda () (uncover x))
                       (lambda (v l)
                         (set! locals (append l locals))
                         v)))
                   exps)
              locals)))

  (call-with-values (lambda () (uncover exp))
    (lambda (e _) e)))

(define (flatten-lambda exp)
  (define globals '())
  (define (flatten exp)
    (match exp
           ((? (lambda (x) (or (symbol? x)
                               (number? x)
                               (string? x)
                               (boolean? x))))
            exp)
           (('if a b c) `(if ,(flatten a) ,(flatten b) ,(flatten c)))
           (('begin x ...) `(begin ,@(map flatten x)))
           (('set! var val) `(set! ,var ,(flatten val)))
           (('lambda (vars ...) body ...)
            (let ((L (gensym 'L)))
              (for-each flatten body)
              (set! globals (cons (cons L exp) globals))
              L))
           ((f x ...) (map flatten exp))))
  (let ((exp* (flatten exp)))
    `(top ,globals ,exp*)))

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
