class Parser {
    static parseString(text) {
        return new Parser(text).parse();
    }
    static parseAllString(text) {
        return new Parser(text).parseAll();
    }
    constructor(text) {
        this.text = text;
        this.pos = 0;
    }
    get current() {
        return this.text[this.pos];
    }
    get next() {
        return this.text[this.pos + 1];
    }
    get done() {
        return this.pos >= this.text.length;
    }
    get more() {
        return !this.done;
    }
    skipWhitespace() {
        while (this.more && /\s/.test(this.current)) this.skipOne();
    }
    skipOne() {
        this.pos++;
    }
    static isDigit(ch) {
        return ch !== undefined && /\d/.test(ch);
    }
    static isSign(ch) {
        return ch !== undefined && /[\-\+]/.test(ch);
    }
    static isSymbolChar(ch) {
        return ch !== undefined && /[^\s\(\)]/.test(ch);
    }
    readString() {
        this.skipOne();
        const start = this.pos;
        while (this.current !== '"') {
            if (this.done) throw new Error('unexpected end of input');
            this.skipOne();
        }
        const end = this.pos;
        this.skipOne();
        return this.text.substring(start, end);
    }
    readNumber() {
        const start = this.pos;
        if (this.more && Parser.isSign(this.current)) this.skipOne();
        while (this.more && Parser.isDigit(this.current)) this.skipOne();
        if (this.more && this.current === '.') {
            this.skipOne();
            while (this.more && Parser.isDigit(this.current)) this.skipOne();
        }
        const end = this.pos;
        return parseFloat(this.text.substring(start, end));
    }
    readSymbol() {
        const start = this.pos;
        while (this.more && Parser.isSymbolChar(this.current)) this.skipOne();
        const end = this.pos;
        return new Symbol(this.text.substring(start, end));
    }
    parse() {
        this.skipWhitespace();
        if (this.done) throw new Error('unexpected end of input');
        if (this.current === '(') {
            this.skipOne();
            const children = [];
            let child = this.parse();
            while (child !== undefined) {
                children.push(child);
                child = this.parse();
            }
            return arrayToCons(children);
        }
        if (this.current === ')') {
            this.skipOne();
            return undefined;
        }
        if (this.current === '"') return this.readString();
        if (Parser.isDigit(this.current) ||
            (Parser.isSign(this.current) && Parser.isDigit(this.next))) return this.readNumber();
        return this.readSymbol();
    }
    parseAll() {
        this.skipWhitespace();
        const results = [];
        while (this.more) {
            results.push(this.parse());
            this.skipWhitespace();
        }
        return results;
    }
}

var fs = require('fs');

function Symbol(name) {
    this.name = name;
}

function isSymbol(s) {
    return s instanceof Symbol;
}

function Cons(x, y) {
    this.hd = x;
    this.tl = y;
}
Cons.prototype = {
    car : function() {
        return this.hd;
    },
    cdr : function() {
        return this.tl;
    }
};


function cons(x, y) {
    return new Cons(x, y);
}

function consLength(x) {
    let length = 0;
    while (isCons(x)) {
        x = x.tl;
        length++;
    }
    if (x !== null) err('not a valid list');
    return length;
}

function isCons(x) {
    return x instanceof Cons;
}

function isString(x) {
    return typeof x === 'string';
}

function isArray(x) {
    return x instanceof Array;
}

function isSymbol(x) {
    return x instanceof Symbol;
}

function isNumber(x) {
    return typeof x === 'number';
}

function hd(o) {
    return o.car();
}

function tl(o) {
    return o.cdr();
}

function cadr(x) {
    return hd(tl(x));
}

function caddr(x) {
    return hd(tl(tl(x)));
}

function intern(str) {
    return new Symbol(str);
}

function map(f, x) {
    var fake = new Cons(null, null);
    var p = fake;
    while(x != null) {
        var value = f(hd(x));
        var tmp = new Cons(value, null);
        p.tl = tmp;
        p = tmp;
        x = x.cdr();
    }
    return fake.tl;
}

function escape(s) {
    if (isSymbol(s)) s = s.name;
    let result = '';
    for (let i = 0; i < s.length; ++i) {
        switch (s[i]) {
        case '\\': { result += '\\\\'; break; }
        case '\0': { result += '\\0'; break; }
        case '\b': { result += '\\b'; break; }
        case '\f': { result += '\\f'; break; }
        case '\n': { result += '\\n'; break; }
        case '\r': { result += '\\r'; break; }
        case '\t': { result += '\\t'; break; }
        case '\v': { result += '\\v'; break; }
        case '\"': { result += '\\"'; break; }
        case '\'': { result += "\\'"; break; }
        default: { result += s[i]; break; }
        }
    }
    return result;
}

function rename(name) {
    if (isSymbol(name)) name = name.name;
    let result = '';
    for (let i = 0; i < name.length; ++i) {
        switch (name[i]) {
        case '-': { result += '_'; break; }
        case '_': { result += '$un'; break; }
        case '$': { result += '$dl'; break; }
        case '.': { result += '$do'; break; }
        case ',': { result += '$cm'; break; }
        case '`': { result += '$bt'; break; }
        case "'": { result += '$ap'; break; }
        case '+': { result += '$pl'; break; }
        case '*': { result += '$st'; break; }
        case '<': { result += '$lt'; break; }
        case '>': { result += '$gt'; break; }
        case '%': { result += '$pe'; break; }
        case '&': { result += '$am'; break; }
        case '^': { result += '$ca'; break; }
        case '=': { result += '$eq'; break; }
        case '!': { result += '$ex'; break; }
        case '?': { result += '$qu'; break; }
        case '@': { result += '$at'; break; }
        case '~': { result += '$ti'; break; }
        case '#': { result += '$ha'; break; }
        case '|': { result += '$pi'; break; }
        case ':': { result += '$co'; break; }
        case ';': { result += '$sc'; break; }
        case '/': { result += '$sl'; break; }
        case '{': { result += '$lc'; break; }
        case '}': { result += '$rc'; break; }
        case '[': { result += '$ls'; break; }
        case ']': { result += '$rs'; break; }
        case '\\': { result += '$bs'; break; }
        default:  { result += name[i]; break; }
        }
    }
    return result;
}

function consToArray(x) {
    const array = [];
    while (x instanceof Cons && x !== null) {
        array.push(hd(x));
        x = tl(x);
    }
    return array;
}

function arrayToCons(x) {
    let result = null;
    for (let i = x.length - 1; i >= 0; i--) result = new Cons(x[i], result);
    return result;
}

function Env(locals, parent) {
    this.locals = locals;
    this.parent = parent;
}
Env.prototype.isVariable = function(name) {
    var ptr = this;
    while(ptr != null) {
        if (ptr.locals.includes(name)) {
            return true;
        }
        ptr = ptr.parent;
    };
    return false;
}

function kl2js(kl, env, tail) {
    // literal
    if (kl == null) return 'null';
    if (isNumber(kl)) return kl.toString();
    if (isString(kl)) return '"' + escape(kl) + '"';

    // symbol
    if (kl instanceof Symbol) {
        let str = rename(kl.name);
        if (str === "true") return "true";
        if (str === "false") return "false";
        if (env.isVariable(str)) {
            return str;
        }
        return "new Symbol(\"" + str + "\")";
    }

    if (kl instanceof Cons) {
        let car = kl.car();
        let remain = kl.cdr();

        // special form
        if (car instanceof Symbol) {
            if (car.name === "if" && consLength(remain) == 3) {
                return ifExpr2js(hd(remain), cadr(remain), caddr(remain), env, tail);
            } else if (car.name === "cond") {
                if (remain === null) {
                    return 'err("no cond match")';
                }
                return ifExpr2js(hd(hd(remain)), cadr(hd(remain)), cons(car, tl(remain)), env, tail);
            } else if (car.name === "let") {
                return letExpr2js(hd(remain), cadr(remain), caddr(remain), env, tail);
            } else if (car.name === "defun") {
                return defunExpr2js(hd(remain), cadr(remain), caddr(remain), env);
            } else if (car.name === "lambda") {
                return lambdaExpr2js(hd(remain), cadr(remain), env);
            } else if (car.name === "freeze") {
                return freezeExpr2js(hd(remain), env);
            } else if (car.name === "trap-error") {
                return trapErrorExpr2js(hd(remain), cadr(remain), env, tail);
            } else if (car.name === "do") {
                return doExpr2js(hd(remain), cadr(remain), env, tail);
            } else if (car.name === "set") {
                return setExpr2js(hd(remain), cadr(remain), env, tail);
            } else if (car.name === "value") {
                return valueExpr2js(hd(remain), env);
            }
            // apply symbol function
            return applyExpr2js(car, remain, env, tail);

        } else if (car instanceof Cons) {
            // complex apply
            return applyExpr2js(car, remain, env, tail);
        }
    }
}

function ifExpr2js(testExpr, succExpr, failExpr, env, tail) {
    let test = kl2js(testExpr, env, false);
    let succ = kl2js(succExpr, env, tail);
    let fail = kl2js(failExpr, env, tail);
    return "(" + test + " === true) ? ("+ succ + ") : (" + fail + ")";
}

function letExpr2js(varExpr, valExpr, bodyExpr, env, tail) {
    let name = rename(varExpr.name);
    let valStr = kl2js(valExpr, env, false);
    let env1 = new Env([name], env);
    let body = kl2js(bodyExpr, env1, tail);
    return "(function(){let " + name + " = " + valStr + "; return " + body + ";})()";
}

function defunExpr2js(fun, args, bodyExpr, env) {
    let locals = consToArray(map(function(s){return rename(s.name);}, args));
    let localsString = "";
    for (let i=0; i<locals.length; i++) {
        if (i != 0) {
            localsString += ", ";
        }
        localsString += locals[i];
    }
    let env1 = new Env(locals, env);
    let body = kl2js(bodyExpr, env1, true);
    return "defun(\"" + fun.name + "\", " + "function("+ localsString + ") { return " + body + " ;}, " + locals.length.toString() + ");";
}

var primitive = {};
var symbols = {};
var startTime = new Date().getTime();

function defun(name, f, arity) {
    f.arity = arity;
    primitive[name] = f;
}

function eq(x, y) {
    if (x === y) return true;
    if (isSymbol(x) && isSymbol(y)) return x.name === y.name;
    if (isCons(x) && isCons(y)) return eq(x.hd, y.hd) && eq(x.tl, y.tl);
    if (isArray(x) && isArray(y)) {
        if (x.length !== y.length) return false;
        for (let i = 0; i < x.length; ++i) {
            if (!eq(x[i], y[i])) return false;
        }
        return true;
    }
    return false;
}

function klSet(x, y) {
    symbols[x.name] = y;
    return y;
}

function toStr(x) {
    if (x === null) return '[]';
    if (isSymbol(x)) return x.name;
    if (isString(x)) return `"${x}"`;
    if (isCons(x)) return `[${consToArray(x).map(toStr).join(' ')}]`;
    if (isFunction(x)) return `<Function ${x.klName}>`;
    if (isArray(x)) return `<Vector ${x.length}>`;
    if (isError(x)) return `<Error "${x.message}">`;
    if (isPipe(x)) return `<Stream ${x.name}>`;
    return '' + x;
}

function klOpen(path, mode) {
    if (mode.name == "in") {
        return fs.createReadStream(path);
    }
    if (mode.name == "out") {
        return fs.createWriteStream(path);
    }
    return err("in valid mode");
}

function klClose(stream) {
    stream.destroy();
}

function readByte(stream) {
    let ret =  stream.read(1);
    if (ret == null) {return err('empty stream');};
    return ret[0];
}

function writeByte(num, stream) {
    let ret =  stream.write(Buffer.from[num]);
    return num;
}

defun("if", function(c, x, y) {return c ? x : y;}, 3);
defun("and", function(x, y) {return x && y;}, 2);
defun("set", klSet, 2);
defun("value", function(x, y) { return symbols[x.name];}, 1);
defun("or", function(x, y) {return x || y;}, 2);
defun("+", function(x, y) {return x + y;}, 2);
defun("-", function(x, y) {return x - y;}, 2);
defun("*", function(x, y) {return x * y;}, 2);
defun("/", function(x, y) {return x / y;}, 2);
defun("<", function(x, y) {return x < y;}, 2);
defun(">", function(x, y) {return x > y;}, 2);
defun("<=", function(x, y) {return x <= y;}, 2);
defun(">=", function(x, y) {return x >= y;}, 2);
defun("=", eq, 2);
defun("number?", isNumber, 1);
defun("cons", cons, 2);
defun("cons?", isCons, 1);
defun("hd", hd, 1);
defun("tl", tl, 1);
defun("intern", intern, 1);
defun("string?", isString, 1);
defun("str", toStr, 1);
defun("pos", function(s, x) {return s[x];}, 2);
defun("tlstr", function(s) {return s.slict(1);}, 2);
defun("cn", function(x, y) {return x + y;}, 2);
defun("string->n", function(x) {return x.charCodeAt(0);}, 1);
defun("n->string", function(n) {return String.fromCharCode(n);}, 1);
defun("absvector", function(n) {return new Array(n).fill(null);}, 1);
defun("<-address", function(a, i) {return a[i];}, 2);
defun("address->", function(a, i, x) {a[i] = x; return a;}, 3);
defun("absvector?", isArray, 1);
defun("eval-kl", function(kl) {return eval(kl2js(kl, new Env([], null)), true);}, 1);
defun("simple-error", function(e) {return err(e.toString());}, 1);
defun("error-to-string", function(e) {return e.message;}, 1);
defun("get-time", function(mode) {
    if (mode.name === 'unix') return new Date().getTime();
    if (mode.name === 'run') return new Date().getTime() - startTime;
    return err("get-time only accepts 'unix or 'run");
}, 1);
defun("open", klOpen, 2);
defun("close", klClose, 1);
defun("read-byte", readByte, 1);
defun("write-byte", writeByte, 2);

function klFun(f, arity) {
    f.arity = arity;
    return f;
}

function klApply(fn, ...args) {
    if (fn.arity == args.length) {
        return fn(...args);
    }
    if (fn.arity < args.length) {
        return klApply(fn(...args.slice(0, fn.arity)), args.slice(fn.arity));
    }
    return klFun(function(...more) {
        return klApply(fn, ...args.concat(more));
    }, fn.arity - args.length);
}

function Trampoline(f, ...args) {
    this.f = f;
    this.args = args;
}

function klTailApply(fn, ...args) {
    let ret = klApply(fn, ...args);
    while(ret instanceof Trampoline) {
        ret = klApply(ret.f, ...ret.args);
    };
    return ret;
}

function applyExpr2js(fn, args, env, tail) {
    let args1 = map(function(x) {return kl2js(x, env, false);}, args);
    let argsArray = consToArray(args1);
    let argsStr = "";
    let fnStr;
    if (fn instanceof Symbol) {
        if (env.isVariable(fn.name)) {
            fnStr = fn.name;
        } else {
            fnStr = "primitive[\"" + fn.name + "\"]";
        }
    } else {
        fnStr = kl2js(fn, env, false);
    }
    for (let i=0; i<argsArray.length; i++) {
            argsStr = argsStr + ", " + argsArray[i];
    }
    if (tail) {
        return "new Trampoline(" + fnStr + argsStr + ")";
    }
    return "klTailApply(" + fnStr + argsStr + ")";
}

function lambdaExpr2js(varExpr, bodyExpr, env) {
    let name = rename(varExpr.name);
    let env1 = new Env([varExpr.name], env);
    let body = kl2js(bodyExpr, env1, true);
    return "klFun(function(" + name + ") { return " + body + ";}, 1)";
}

function doExpr2js(exp1, exp2, env, tail) {
    var str1 = kl2js(exp1, env, false);
    var str2 = kl2js(exp2, env, tail);
    return "(function(){" + str1 +  "; return " + str2 + ";})()";
}

function setExpr2js(name, value, env, tail) {
    return  "klSet(\"" + name.name + "\", " + kl2js(value, env, tail) + ")";
}

function valueExpr2js(name, env) {
    return "symbols[\"" + name.name +"\"]";
}

function freezeExpr2js(body, env) {
    return "klFun(function() { return " + kl2js(body, env, true) + "}, 0)";
}

function trapErrorExpr2js(body, handle, env, tail) {
    let bodyStr = kl2js(body, env, false);
    let handleStr = kl2js(handle, env, tail);
    return "(function(){ try { return " + bodyStr + ";} catch (err) { return klTailApply(" + handleStr + ", err);} })()";
}

const files = [
    'toplevel.kl',
    'core.kl',
    'sys.kl',
    'dict.kl',
    'sequent.kl',
    'yacc.kl',
    'reader.kl',
    'prolog.kl',
    'track.kl',
    'load.kl',
    'writer.kl',
    'macros.kl',
    'declarations.kl',
    't-star.kl',
    'types.kl'
];

const defuns = [];
const toplevels = [];

for (let file of files) {
    const text = fs.readFileSync("/home/genius/project/src/github.com/tiancaiamao/shen-go/ShenOSKernel-21.0/klambda/" + file, 'utf-8');
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

const fullText = concatAll([defuns, toplevels]).map(function(kl){return kl2js(kl, new Env([], null), false);}).join('\n\n');

fs.writeFile('cora.js', fullText, console.error);
