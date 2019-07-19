cora 语言设计

Inspired by scheme, shen, femtolisp 

lisp1

## 闭包是可视化的 (lambda (a) 3 (b . 5) (c . 7))

(let a 3 b 5 ...)

if
begin
lambda

## 极简内核

特殊表只有 quote lambda if do macro
甚至连 set 都是函数而不是特殊表

## first class macro

## 严格尾递归
## partial apply
## 内置 pattern match
## func 宏
