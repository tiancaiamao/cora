**每个lisper都应该拥有他自己的lisp。**

-------------

## 文件说明

desugar.scm 去语法糖
cps.scm CPS变换
cc.scm 闭包变换
ra.scm 寄存器分配

## 数据表示

数据表示为immediate和non-immediate。一个值可能是64位的immediate，或者是一指向实际数据的指针(non-immediate)。fixnum的最低位是1。指针的低3位是0，8字节对齐，这样通过测试低位就可以判断immediate和non-immediate。

non-immediate数据都有一个64位的头部，包含了块的大小和类型信息，以及用于垃圾回收的位。高7位用于类型。低56位用于大小。

non-immediate数据可以分普通块，包含其它数据的块（块内包含fixnums或者指向其它块的指针），还有byteblock。它们都是头部之后紧跟原始数据。还有一种特殊块，比如闭包，头部接下来的64位是一个指向代码段的指针，然后是存放自由变量。

#define SYMBOL		 0x01
#define CONS			 0x02
#define VECTOR	   0x03
#define PORT       0x08
#define PROMISE    0x09
#define RECORD     0x0a
#define FLONUM     0x10
#define STRING     0x11
#define CLOSURE		 0x20

// 001 fixnum
// 000 pointer
// 010 bool
// 1010 true
// 0010 false
// 100 char
// 110 other
// 1110 undefined
// 10110 null
// 11110 eof

Record类型跟Vector相似，它的前两个slot包含记录tag(symbol)和id(fixnum)，用于确定Record的具体类型。Id为1用于error对象。

## 寄存器使用

rax,r11,临时寄存器
r14,r15,rcx,rdx,rsi,rdi,r8,r9,r10 参数寄存器
rbx 当前闭包
r12 当前连续
rbp 分配位置
r13 分配限制

入口从C函数进来，加载C的标准库，进入main函数，做一些初始化工作。

scheme的入口函数是_scheme_entry，一旦进入这个函数，永不返回，直至程序退出。

接下来scheme可以调用C的函数，但是C中不能调用scheme。

使用x86_64 System V ABI。调用C之前需要保存rcx,rdx,rsi,rdi,r8,r9,r10(如果使用)，然后设置C的参数rdi,rsi,rdx,rcx,r8,r9。

scheme栈跟C栈相互独立。
