var cora = require('../lib/cora');
var {defun, eq, hd, tl, intern} = cora.api;

const readline = require('readline');
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout,
    prompt: 'cora> '
});

defun('console-log', function(str) {console.log(str);}, 1);
cora.call('load', __dirname + '/repl.cora');

rl.prompt();
let data = '';
rl.on('line', (line) => {
    data += line;
    let res = cora.call('handle', data);
    if (res === true) {
        data = '';
        rl.prompt();
    } else {
        data += '\n';
    }
}).on('close', () => {
    console.log('Have a great day!');
    process.exit(0);
});
