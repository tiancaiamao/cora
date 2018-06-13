var cora = require('../cora');
var {eq, hd, tl, intern} = cora.api;

const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
    prompt: 'cora> '
});

cora.call('load', 'repl.cora');

let data = '';

rl.prompt();
rl.on('line', (line) => {
    let sexp = cora.call("on-line-read", data + line);
    if (eq(hd(sexp), intern("ok"))) {
        data = '';
        console.log(hd(tl(sexp)));
    } else if (eq(hd(sexp), intern("more"))) {
        data = data + '\n' + line;
        console.log("..");
    } else if (eq(hd(sexp), intern("err"))) {
        data = '';
        console.log('error:' + hd(tl(sexp)));
    }
    rl.prompt();
}).on('close', () => {
    console.log('Have a great day!');
    process.exit(0);
});
