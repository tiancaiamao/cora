(define optimize-direct-call
  (lambda (x)
    (match x
           [(quote ,imm)
            `(quote ,imm)]
           [(if ,[t] ,[c] ,[a])
            `(if ,t ,c ,a)]
           [(begin ,[ef*] ...)
            `(begin ,ef* ...)]
           [((lambda (,fml* ...) ,[body]) ,[x*] ...)
            `(let ([,fml* ,x*] ...) ,body)]
           [(let ([,x* ,[v*]] ...) ,[e])
            `(let ([,x* ,v*] ...) ,e)]
           [(letrec ([,uvar* (lambda (,fml** ...) ,[x*])] ...) ,[e])
            `(letrec ([,uvar* (lambda (,fml** ...) ,x*)] ...) ,e)]
           [(,[f] ,[x*] ...)
            `(,f ,x* ...)]
           [,x x])))
