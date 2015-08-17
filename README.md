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

Type	Typecode	Immediate	Byteblock	Special	Remarks
Fixnum	-	X	-	-	
Null	#x00				The empty list
Symbol	#x01				
Pair	#x02				
Vector	#x03				
Char	#x04				
End-of-file	#x05				
Void	#x06				The undefined value
Boolean	#x07				
Port	#x08				
Promise	#x09				
Record	#x0a				
Flonum	#x10		X		
String	#x11		X		
Procedure	#x20			X	

Record类型跟Vector相似，它的前两个slot包含记录tag(symbol)和id(fixnum)，用于确定Record的具体类型。Id为1用于error对象。

## 寄存器使用

rax,r11,r15 临时寄存器
rcx,rdx,rsi,rdi,r8,r9,r10,r12 当前procedure的前7个寄存器
rbx 当前闭包
rcx 当前连续(一个procedure)
rbp 分配指针
r13 分配限制
r14 包含内部值#f



