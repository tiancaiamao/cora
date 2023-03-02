
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


## 模块和版本管理

如何加载同一个模块的不同版本？

同一个模块的不同版本，当作不同模块处理

使用不同的路径

类似 gopkg.in 的做法:

原始的 github.com/xxx 模块 1.0 映射到
gopkg.in/github.com/xxx/v1.0
2.0 映射到
gopkg.in/github.com/xxx/v2.0

如何保证可重复编译?

尽管依赖打过版本的模块，比如这是一个不稳定版本，无法保证可重复编译

github.com/xxx

依赖这个版本则是可重复编译的版本

gopkg.in/github.com/xxx/v1.0

如果作者需要依赖特定的版本或者 hotfix
应该使用 fork 一份然后依赖自己的 fork
注意 fork 也是工程角度不可重复编译的，而且 fork 无版本管理

github.com/yyy => github.com/xxx

依赖用 gopkg.in 保证可重复编译

gopkg.in/github.com/yyy/commit_hash

或者本地用符号链接的方式
这个方式保证使用特定的版本

github.com/xxx => vendor/github.com/xxx
