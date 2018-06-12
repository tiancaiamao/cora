var cora = require('../cora');
var {eq, hd, tl, intern, defun, primitive, klTailApply, Symbol, klFun, Trampoline} = cora.api;

const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
    prompt: 'cora> '
});

// (define on-line-read
//  Str -> (trap-error
//          (let Sexp (read-from-string Str)
//           KL (shen.elim-def (shen.proc-input+ (hd Sexp)))
//           (trap-error
//            [ok (eval-kl KL)]
//            (/. X [err (error-to-string X)])))
//          (/. X [more])))
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
}).on('close', () => {
    console.log('Have a great day!');
    process.exit(0);
});
