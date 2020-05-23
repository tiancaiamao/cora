
模块设计


围绕 symbol 为中心

预处理过程，将前面模块里面的 symbol 都加上模块前缀
然后映射一遍


(package 
    (import "path/to/module" )
    (export xx yy zz))
    
一个文件对应一个头部声明

吐给后面的处理都是全局重命名过的了


约定优先于配置  直接选择用文件路径之类的，作为包名
这样 import 好找

(defun fact (n)
    (if (= n 0)
        1
        (* n (fact (- n 1)))))
        
经过处理之后

(defun xxx:fact (n)
    (if (builtin:= a 0)
         1
         (builtin:* n (xxx.fact (builtin.- n 1)))))


(import "xxx.xxx" a)

之后 

a 变成 xxx.xxx.a
建一个替换表，所有不带引用的 symbol => 添加前缀之后的 symbol
