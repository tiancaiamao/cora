var Parser = require('./parser.js');
var fs = require('fs');
var process = require('process');
var kl = require('../lib/kl.js');
var isSymbol = kl.isSymbol;
var isCons = kl.isCons;

const files = [
    'toplevel.kl',
    'core.kl',
    'sys.kl',
    'yacc.kl',
    'reader.kl',
    'track.kl',
    'load.kl',
    'writer.kl',
    'macros.kl',
    'declarations.kl',
];

const defuns = [];
const toplevels = [];

for (let file of files) {
    const text = fs.readFileSync(__dirname + "/../klambda/" + file, 'utf-8');
    const exprs = Parser.parseAllString(text);
    for (let expr of exprs) {
        if (isCons(expr)) {
            if (isSymbol(expr.hd) && expr.hd.name === 'defun') {
                defuns.push(expr);
            } else {
                toplevels.push(expr);
            }
        }
    }
}


function concatAll(lists) {
    return lists.reduce((x, y) => x.concat(y), []);
}

const fullText = concatAll([defuns, toplevels]).map(function(sexp){return kl.call("kl->js", sexp);}).join(';\n\n');

const headerText = "var kl = require('./kl'); let defun = kl.defun; let klTailApply = kl.klTailApply; let Symbol = kl.Symbol; let err = kl.err; let primitive = kl.primitive; let mustBoolean = kl.mustBoolean; let Trampoline = kl.Trampoline; let klFun = kl.klFun;\n";

const tailText = ";\n\nmodule.exports = {call: kl.call,api: {defun: kl.defun, hd : kl.hd, tl: kl.tl, cons: kl.cons, eq: kl.eq, intern: kl.intern}}\n";

fs.writeFile(__dirname + '/../lib/cora.js', headerText + fullText + tailText, console.error);
