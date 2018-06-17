var fs = require('fs');
var primitive = {};
var symbols = {};

function Symbol(name) {
    this.name = name;
}

function isSymbol(s) {
    return s instanceof Symbol;
}

function err(x) { throw new Error(x); };

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

function isFunction(x) {
    return x instanceof Function;
}

function isError(x) {
    return x instanceof Error;
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
    return mustCons(o).car();
}

function tl(o) {
    return mustCons(o).cdr();
}

function cadr(x) {
    return hd(tl(x));
}

function caddr(x) {
    return hd(tl(tl(x)));
}

function intern(str) {
    if (str === "true") return true;
    if (str === "false") return false;
    return new Symbol(mustString(str));
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

function Env(locals, parent) {
    if (parent == null) {
        this.idx = 0;
    } else {
        this.idx = parent.idx + 1;
    }
    var arr = new Array();
    for (let i = 0; i<locals.length; i++) {
        let exists = parent.findVariable(locals[i]);
        if (exists !== null) {
            arr[i] = {name: locals[i], rename: rename(locals[i]) + '$' + this.idx};
        } else {
            arr[i] = {name: locals[i], rename: rename(locals[i])};
        }
    }
    this.locals = arr;
    this.parent = parent;
}

Env.prototype.findVariable = function(name) {
    let ptr = this;
    let cmp = function(obj) {
        return obj.name === name;
    };
    while(ptr != null) {
        let obj = ptr.locals.find(cmp);
        if (obj !== undefined) {
            return obj;
        }
        ptr = ptr.parent;
    };
    return null;
};

function kl2js(kl, env, tail) {
    // literal
    if (kl === null) return 'null';
    if (kl === true) return 'true';
    if (kl === false) return 'false';
    if (isNumber(kl)) return kl.toString();
    if (isString(kl)) return '"' + escape(kl) + '"';

    // symbol
    if (isSymbol(kl)) {
        if (kl.name === "true") return "true";
        if (kl.name === "false") return "false";
        let varItem = env.findVariable(kl.name);
        if (varItem !== null) {
            return varItem.rename;
        }
        return "new Symbol(\"" + kl.name + "\")";
    }

    if (isCons(kl)) {
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
            } else if (car.name === "and") {
                return andExpr2js(hd(remain), cadr(remain), env);
            } else if (car.name === "or") {
                return orExpr2js(hd(remain), cadr(remain), env);
            } else if (car.name === "trap-error") {
                return trapErrorExpr2js(hd(remain), cadr(remain), env, tail);
            } else if (car.name === "do") {
                return doExpr2js(hd(remain), cadr(remain), env, tail);
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
    return "(mustBoolean(" + test + ") === true) ? ("+ succ + ") : (" + fail + ")";
}

function andExpr2js(x, y, env) {
    return "(mustBoolean(" + kl2js(x, env, false) + ") && mustBoolean(" + kl2js(y, env, false) + "))";
}

function orExpr2js(x, y, env) {
    return "(mustBoolean(" + kl2js(x, env, false) + ") || mustBoolean(" + kl2js(y, env, false) + "))";
}

function letExpr2js(varExpr, valExpr, bodyExpr, env, tail) {
    let valStr = kl2js(valExpr, env, false);
    let env1 = new Env([mustSymbol(varExpr).name], env);
    let name = env1.locals[0].rename;
    let body = kl2js(bodyExpr, env1, tail);
    return "(function(){var " + name + " = " + valStr + "; return " + body + ";})()";
}

function defunExpr2js(fun, args, bodyExpr, env) {
    let locals = consToArray(args).map(function(s){return s.name;});
    let env1 = new Env(locals, env);
    let localsString = env1.locals.map(function(varItem){return varItem.rename;}).join(', ');
    let body = kl2js(bodyExpr, env1, true);
    return "defun(\"" + fun.name + "\", " + "function("+ localsString + ") { return " + body + " ;}, " + locals.length.toString() + ")";
}

var startTime = new Date().getTime();

function defun(name, f, arity) {
    f.arity = arity;
    primitive[name] = f;
    return new Symbol(name);
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
    symbols[mustSymbol(x).name] = y;
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
    if (x === undefined) return err("str(undefined)");
    return '' + x;
}

function mustNumber(x) {
    if (typeof x !== 'number') {
        return err("mustNumber");
    }
    return x;
}

function mustBoolean(x) {
    if (typeof x !== 'boolean') {
        return err("mustBoolean");
    }
    return x;
}

function mustString(x) {
    if (typeof x !== 'string') {
        return err("mustString");
    }
    return x;
}

function mustSymbol(x) {
    if (x instanceof Symbol === false) {
        return err("mustSymbol");
    }
    return x;
}

function mustCons(x) {
    if (x instanceof Cons === false) {
        return err("mustCons");
    }
    return x;
}

defun("if", function(c, x, y) {return mustBoolean(c) ? x : y;}, 3);
defun("and", function(x, y) {return mustBoolean(x) && mustBoolean(y);}, 2);
defun("or", function(x, y) {return mustBoolean(x) || mustBoolean(y);}, 2);
defun("not", function(x) {return !mustBoolean(x);}, 1);
defun("set", klSet, 2);
defun("value", function(x, y) {
    let ret  = symbols[mustSymbol(x).name];
    if (ret === undefined) {
        return err(x.name + ' is not bound');
    }
    return ret;
}, 1);
defun("+", function(x, y) {return mustNumber(x) + mustNumber(y);}, 2);
defun("-", function(x, y) {return mustNumber(x) - mustNumber(y);}, 2);
defun("*", function(x, y) {return mustNumber(x) * mustNumber(y);}, 2);
defun("/", function(x, y) {return mustNumber(x) / mustNumber(y);}, 2);
defun("<", function(x, y) {return mustNumber(x) < mustNumber(y);}, 2);
defun(">", function(x, y) {return mustNumber(x) > mustNumber(y);}, 2);
defun("<=", function(x, y) {return mustNumber(x) <= mustNumber(y);}, 2);
defun(">=", function(x, y) {return mustNumber(x) >= mustNumber(y);}, 2);
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
defun("tlstr", function(s) {return mustString(s).slice(1);}, 1);
defun("cn", function(x, y) {return mustString(x) + mustString(y);}, 2);
defun("string->n", function(x) {return mustString(x).charCodeAt(0);}, 1);
defun("n->string", function(n) {return String.fromCharCode(mustNumber(n));}, 1);
defun("absvector", function(n) {return new Array(n).fill(null);}, 1);
defun("<-address", function(a, i) {
    if (a instanceof Array === false) {
        return err('address need an vector');
    }
    if (mustNumber(i) >= a.length) {
        return err('index out of range for vector');
    }
    return a[i];
}, 2);
defun("address->", function(a, i, x) {a[i] = x; return a;}, 3);
defun("absvector?", isArray, 1);
defun("eval-kl", function(kl) {return eval(kl2js(kl, new Env([], null)), true);}, 1);
defun("simple-error", function(e) {return err(mustString(e));}, 1);
defun("error-to-string", function(e) {return e.message;}, 1);
defun("get-time", function(mode) {
    if (mode.name === 'unix') return new Date().getTime();
    if (mode.name === 'run') return new Date().getTime() - startTime;
    return err("get-time only accepts 'unix or 'run");
}, 1);
defun("symbol?", function(x) {return x instanceof Symbol;}, 1);
defun("integer?", function(x) {return typeof x === 'number';}, 1);
defun("read-file-as-charlist", function(filePath) {
    let data = fs.readFileSync(filePath);
    let ret = null;
    for (let i=data.length-1; i>=0; i--) {
        ret = cons(data[i], ret);
    }
    return ret;
}, 1);
defun("write-to-file", function(File, Text) {
    fs.writeFileSync(File, Text);
    return Text;
}, 2);

klSet(new Symbol("*stinput*"), process.stdin);
klSet(new Symbol("*stoutput*"), process.stdout);
klSet(new Symbol("*home-directory*"), "/home/genius");
klSet(new Symbol("*language*"), "javascript");
klSet(new Symbol("*implementation*"), "compiler");
klSet(new Symbol("*relase*"), "0.0.1");
klSet(new Symbol("*os*"), "linux");
klSet(new Symbol("*porters*"), "Arthur Mao");
klSet(new Symbol("*port*"), "0.0.1");

function klFun(f, arity) {
    f.arity = arity;
    return f;
}

function klApply(fn, ...args) {
    if (fn.arity === undefined) {
        return err("can't klApply invalid function");
    }
    if (fn.arity == args.length) {
        return fn(...args);
    }
    if (fn.arity < args.length) {
        return klApply(fn(...args.slice(0, fn.arity)), ...args.slice(fn.arity));
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

function call(name, ...args) {
    let prim = primitive[name];
    if (prim === undefined || prim.arity == undefined) {
        return err('primitive not defined:' + name);
    }
    return klTailApply(prim, ...args);
}

function applyExpr2js(fn, args, env, tail) {
    let argsArray = consToArray(args).map(function(x) {return kl2js(x, env, false);}, args);
    let argsStr = "";
    let fnStr;
    if (fn instanceof Symbol) {
        let varItem = env.findVariable(fn.name);
        if (varItem !== null) {
            fnStr = varItem.rename;
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
    let env1 = new Env([mustSymbol(varExpr).name], env);
    let name = env1.locals[0].rename;
    let body = kl2js(bodyExpr, env1, true);
    return "klFun(function(" + name + ") { return " + body + ";}, 1)";
}

function doExpr2js(exp1, exp2, env, tail) {
    var str1 = kl2js(exp1, env, false);
    var str2 = kl2js(exp2, env, tail);
    return "(function(){" + str1 +  "; return " + str2 + ";})()";
}

function freezeExpr2js(body, env) {
    return "klFun(function() { return " + kl2js(body, env, true) + "}, 0)";
}

function trapErrorExpr2js(body, handle, env, tail) {
    let bodyStr = kl2js(body, env, false);
    let handleStr = kl2js(handle, env, tail);
    return "(function(){ try { return " + bodyStr + ";} catch (err) { return klTailApply(" + handleStr + ", err);} })()";
}

defun("kl->js", function(kl) {return kl2js(kl, new Env([], null), false);}, 1);

// This module is for internal usage, all the variables in this file could be exported.
module.exports = {
    Symbol: Symbol,
    isSymbol: isSymbol,
    Cons: Cons,
    isCons: isCons,
    Trampoline: Trampoline,
    klTailApply: klTailApply,
    Env: Env,
    kl2js: kl2js,
    mustBoolean: mustBoolean,
    hd: hd,
    tl: tl,
    eq: eq,
    cons: cons,
    intern: intern,
    defun: defun,
    call: call,
    err: err,
    primitive: primitive,
    klFun: klFun,
};
