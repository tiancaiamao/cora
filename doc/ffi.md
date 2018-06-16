## 两种视角

### cora 是一个语言，js 为它提供基础设施

主要就是从 cora 调用 js。在 js 里面定义函数，在 cora 里面调用：

defun(name, func, arity)

    cora.defun("hello-from-js", function() {
        console.log("hello world from javascript");
    }, 0)
    
eval is the universal machine
js 层
kl 层
cora 层

下层的东西不应该依赖更上层的东西
而上层的东西，靠下层提供。从这个角度上层，所有代码都应该用 cora 来写。

### js 为主，cora 是一个 js 的库

在 js 中调用 cora 里面的函数：

cora.call(name, arg1, arg2 ...)

cora 对外提供的很简单的 API，就是之前的 defun/call

    cora = require('./cora.js')

而实现细节则可以通过 cora 的 api 继续暴露出来：

    {hd, cons, tl, intern} = cora.api

cora 的对象定义：

Symbol
Cons
Array
Function
Error
number
string
boolean

## 管理理念

### 两种语言，就应该分别在不同的文件里面放着，不要混用。

生成代码与手写代码严格分离。cora 与 js 代码严格分离。在一个里面搞另一个，看起来是方便了，实际上搞得一团糟。

提供方便的相互调用的方式。

坏的例子（在 js 里面混用了生成的代码和手写的代码）：

  defun("on-line-read", function(V1178) { return (function(){ try { return (function(){let Sexp = klTailApply(primitive["read-from-string"], V1178); return (function(){let KL = klTailApply(primitive["shen.elim-def"], klTailApply(primitive["shen.proc-input+"], klTailApply(primitive["hd"], Sexp))); return (function(){ try { return klTailApply(primitive["cons"], new Symbol("ok"), klTailApply(primitive["cons"], klTailApply(primitive["eval-kl"], KL), null));} catch (err) { return klTailApply(klFun(function(X) { return new Trampoline(primitive["cons"], new Symbol("err"), klTailApply(primitive["cons"], klTailApply(primitive["error-to-string"], X), null));}, 1), err);} })();})();})();} catch (err) { return klTailApply(klFun(function(X) { return new Trampoline(primitive["cons"], new Symbol("more"), null);}, 1), err);} })() ;}, 1);

  let data = '';

  rl.prompt();
  rl.on('line', (line) => {
      let sexp = cora.call("on-line-read", data + line);
      if (eq(hd(sexp), intern("ok"))) {
          data = '';
          console.log(hd(tl(sexp)));
      } else if (eq(hd(sexp), intern("more"))) {
          data = data + '\n' + line;
          console.log(".." + data);
      } else if (eq(hd(sexp), intern("err"))) {
          data = '';
          console.log('error:' + hd(tl(sexp)));
      }
      rl.prompt();
  });
  
坏的例子：

(js.export "function hello() { return 'world'}")  // 在 cora 里面写 js 代码

cora.loadFromString("(define f (X) (+ X 1))")     // 在 js 里面写 cora 代码

### 分层

cora.api 里面不要暴露任何不必要的东西。它是给 defun 用的，不是给生成代码用的。
严格区分哪些是生成代码依赖，哪些是写 API 依赖。
像 Env，Trampoline，mustBoolean 都不应该也不需要暴露


kl 需要暴露：
hd
tl
cons
intern

cora 需要暴露：
call

实现需要(生成代码依赖)，不应该向外暴露：
Trampoline
Env
klTailApply

