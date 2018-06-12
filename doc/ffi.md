## 两种视角

### cora 是一个语言，js 为它提供基础设施

主要就是从 cora 调用 js。在 js 里面定义函数，在 cora 里面调用：

defun(name, func, arity)

    cora.defun("hello-from-js", function() {
        console.log("hello world from javascript");
    }, 0)

### js 为主，cora 是一个 js 的库

在 js 中调用 cora 里面的函数：

cora.call(name, arg1, arg2 ...)

cora 的对象定义：

Symbol
Cons
Array
Function
Error
number
string
boolean
