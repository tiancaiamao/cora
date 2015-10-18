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

## 寄存器使用

* return-value-register 用于汇编指令结果、函数参数数量、函数返回值、返回值数量
* allocation-pointer-register 用于scheme的堆的分配指针
* frame-pointer-register 帧指针寄存器
* process-control-register 指向在内存中的PCB结构
* closure-pointer-register 用于当前闭包

入口从C函数进来，加载C的标准库，进入main函数，做一些初始化工作。

scheme的入口函数是_scheme_entry，一旦进入这个函数，永不返回，直至程序退出。

接下来scheme可以调用C的函数，但是C中不能调用scheme。

使用x86_64 System V ABI。调用C之前需要保存rcx,rdx,rsi,rdi,r8,r9,r10(如果使用)，然后设置C的参数rdi,rsi,rdx,rcx,r8,r9。

scheme栈跟C栈相互独立。

-----------------------

我决定不要实现continuation了。这是一个实现开销大，使用场景有限的feature。之前是想做CPS来实现continuation的。CPS的缺点是它引入了很多lambda算子（即闭包）。

为了支持continuation而引入CPS，而编译器为了优化做的工作却正是把CPS引入的东西删除，那么将CPS作为一个编译步骤是否有意义？

## 与C的交互

角色定位是scheme语言为宿主，C只是辅助。只支持scheme中调用C，不支持C中调用scheme。

在scheme中写(c-call xxx)会调用C语言实现的xxx函数。函数的原型是

    void* xxx(struct *PCB pcb)

实现时，scheme这边会对c-call做处理。(c-call xxx)会被生成类似下面的汇编:

    ;; 保存PCB结构到scheme的栈中
    movq %rbp 0(%rbp) ;; 保存PCB->fp
    movq %rdx 8(%rbp) ;; 保存PCB->ap
    pushq %rbp ;; 将参数进栈
    callq xxx
    movq 8(%rbp) %rdx ;; 恢复PCB->ap
    ;; 不需要恢复PCB->fp，因为fp用的是rbp寄存器是callee-save的


## 编译过程

Part 1: From intermediate language to x86 assembly code.

 * 1 Assembly code
 * 2 Program flattening
 * 3 Basic blocks
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

## 运行时设计

scheme跟C使用不同的栈。运行C代码时，scheme的栈状态保存在PCB结构体中。运行scheme代码时，scheme的栈的状态由FPR以及PCB结构中的一些字段和PC寄存器表示。

栈内存段起点是PCB中的StackBase，结束是PCB中的FrameBase。只有栈溢出时，StackBase才会变化，而FrameBase在每次栈溢出或者创建连续对象的时候都会变化。

函数调用的帧在栈的高位空间，向下增长。4K的分段栈，如果使用达到了FrameRedline，则需要一个新的分段栈，将调用帧放在新栈中。每次进入一个函数时都会检测是否溢出。



## 参考资料

nanopass是Indiana大学编译器课程使用的一种教学方法。好像除了[A Nanopass Framework for Compiler Education](www.cs.indiana.edu/~dyb/pubs/nano-jfp.pdf)这篇文章，并没有太多公开的详细的资料。我在网上收集了一些他们课程的东西并在[博客上整理了一些](http://zenlife.tk/nanopass0.md)。

cps变换和闭包变换都是通过matt的[博客](http://matt.might.net/articles/cps-conversion/)学习的，讲的非常好。不过最后实现cps是基于王垠的40行代码的。

垃圾回收和运行时的设计是根据论文[An Efficient Implementation for Coroutines](http://users.dcc.uchile.cl/~lmateu/pub/mateu-coroutines.pdf)。

实现上面主要参考了[yscheme](https://github.com/yinwang0/)和[bones](http://www.call-with-current-continuation.org/bones/)，这两个都是直接将scheme编译成汇编的编译器。

实现使用的编译器是[chicken](http://www.call-cc.org/)。
