## 如何实现一个 builtin function

函数签名是

```
void nativeFuncPtr(struct controlFlow* ctx);
```

```c
void myBuiltin(struct controlFlow* ctx) {
  // 函数调用协议，参数是通过 ctx->data 传递的。
  // 注意 builtin 参数从下标 1 开始，下标 0 是空置的
  Obj x = ctxGet(ctx, 1);
  Obj y = ctxGet(ctx, 2);
  // ... do something
  Obj res = f(x, y);
  // 函数返回协议，参数是通过 ctx->data[0] 返回的。
  return ctxReturn(x + y);
}
```

然后是创建一个 `scmNative` 对象：

```
makeNative(nativeFuncPtr fn, required int, captured int, ...);
```

required 为 builtin 实际需要的参数个数加一：

```
Obj f = makeNative(myBuiltin, 3, 0);
```

然后注册进去：

```
symbolSet(intern("my-builtin"), f);
```

## 如何实现闭包

builtin function 其实是闭包的特殊形式。

```
void myClosure(struct controlFlow* ctx) {
  // 首个参数实际上是闭包对象自身
  Obj self = ctxGet(ctx, 0);
  // 后面的就是普通参数了，跟 builtin 一样
  Obj x = ctxGet(ctx, 0);
  Obj y = ctxGet(ctx, 1);
  // 获取闭包内的对象
  Obj z = nativeRef(self, 0)
  // do something
  // 返回协议还是一样的，直接返回用 ctxReturn，尾递用 ctxTailApply
  return ctxReturn(res)
}
```

创建闭包会跟创建 builtin 有所不同，因为创建闭包时需要把闭包的对象存储到 scmNative 里面。

```
Obj a = makeNumber(1);
Obj b = makeNumber(2);
Obj c = makeNumber(3);
makeNative(myClosure, required, 3, a, b, c);
```


## 编译过程

闭包变换 closure-convert

代码生成 code-generate

中间结果表示

```
((label #clofun184 ()
(%const fact #reg185)
(%closure #reg186 #clofun183 2)
(%builtin set (#reg185 #reg186) #reg187)
(%return #reg187))

(label #clofun183 (#clo182 n)
(%const 0 #reg188)
(%builtin = (n #reg188) #reg189)
(if #reg189
((%const 1 #reg190)
(%return #reg190))
((%const 1 #reg191)
(%builtin - (n #reg191) #reg192)
(%call-def fact (#reg192) #reg193)
(%builtin * (n #reg193) #reg194)
(%return #reg194)))))
```

生成 C 代码
