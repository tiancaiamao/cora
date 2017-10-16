**每个lisper都应该拥有属于自己的lisp。**

-------------

## 文件说明

canonicalize-expression.scm 去掉法糖

cps-convert.scm CPS变换

convert-closures.scm 闭包变换

liveness-analysis.scm 活跃变量分析

assign-register.scm 线性扫描的寄存器分配算法

## 数据表示

http://marcomaggi.github.io/docs/vicare-scheme.html/objects-refs.html#objects-refs

-----------------------

我决定不要实现continuation了。这是一个实现开销大，使用场景有限的feature。之前是想做CPS来实现continuation的。CPS的缺点是它引入了很多lambda算子（即闭包）。

为了支持continuation而引入CPS，而编译器为了优化做的工作却正是把CPS引入的东西删除，那么将CPS作为一个编译步骤是否有意义？

## 编译过程

Part 1: From intermediate language to x86 assembly code.

 * 1 Assembly code
 * 2 Program flattening

 * 4 Register assignment
 * 5 Memory allocation
 * 6 Calling conventions
 * 7 Lay out call frames
 * 8 Finish universal intermediate lang

Part 2: From Scheme to intermediate language

 * 9  Local variables and lets
 * 10 Object memory representations
 * 11 Letrecs and contexts
 * 12 Closure conversion
 * 13 Optimize calls and lambdas
 * 14 Complex literals and assignments
 * 15 Parsing and wrap-up

## 参考资料

nanopass是Indiana大学编译器课程使用的一种教学方法。好像除了[A Nanopass Framework for Compiler Education](www.cs.indiana.edu/~dyb/pubs/nano-jfp.pdf)这篇文章，并没有太多公开的详细的资料。我在网上收集了一些他们课程的东西并在[博客上整理了一些](http://zenlife.tk/nanopass0.md)。

cps变换和闭包变换都是通过matt的[博客](http://matt.might.net/articles/cps-conversion/)学习的，讲的非常好。不过最后实现cps是基于王垠的40行代码的。

垃圾回收和运行时的设计是根据论文[An Efficient Implementation for Coroutines](http://users.dcc.uchile.cl/~lmateu/pub/mateu-coroutines.pdf)。

实现上面主要参考了[yscheme](https://github.com/yinwang0/)和[bones](http://www.call-with-current-continuation.org/bones/)，这两个都是直接将scheme编译成汇编的编译器。

实现使用的编译器是[conscheme](https://github.com/weinholt/conscheme)。
