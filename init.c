#include "types.h"
#include "runtime.h"

static void clofun0(struct Cora* co);
static void clofun1(struct Cora* co);
static void clofun2(struct Cora* co);
static void clofun3(struct Cora* co);
static void clofun4(struct Cora* co);


static Obj symcora_47init_35append;
static Obj symcora_47init_35filter;
static Obj symcora_47init_35length;
static Obj symcora_47init_35elem_63;
static Obj symcora_47init_35macroexpand;
static Obj symcora_47init_35map;
static Obj symcora_47init_35reverse;
static Obj symcora_47init_35throw;
static Obj symcora_47init_35try;
static Obj symcora_47init_35import;
static Obj symcora_47init_35load_45so;
static Obj symcora_47init_35load;
static Obj symcora_47init_35apply;
static Obj symcora_47init_35read_45file_45as_45sexp;
static Obj symcora_47init_35value_45or;
static Obj symcora_47init_35value;
static Obj symcora_47init_35bytes_45length;
static Obj symcora_47init_35bytes;
static Obj symcora_47init_35vector_45length;
static Obj symcora_47init_35vector_45ref;
static Obj symcora_47init_35vector_45set_33;
static Obj symcora_47init_35vector;
static Obj symcora_47init_35symbol_45_62string;
static Obj symcora_47init_35intern;
static Obj symcora_47init_35string_45append;
static Obj symcora_47init_35number_63;
static Obj symcora_47init_35null_63;
static Obj symcora_47init_35boolean_63;
static Obj symcora_47init_35atom_63;
static Obj symcora_47init_35pair_63;
static Obj symcora_47init_35cdddr;
static Obj symcora_47init_35cadddr;
static Obj symcora_47init_35caddr;
static Obj symcora_47init_35cddr;
static Obj symcora_47init_35cdar;
static Obj symcora_47init_35caar;
static Obj symcora_47init_35cadr;
static Obj symthrow;
static Obj symtry;
static Obj symload;
static Obj symload_45so;
static Obj symapply;
static Obj symvalue_45or;
static Obj symvalue;
static Obj symread_45file_45as_45sexp;
static Obj symbytes_45length;
static Obj symbytes;
static Obj symvector_45length;
static Obj symvector_45ref;
static Obj symvector_45set_33;
static Obj symvector;
static Obj symsymbol_45_62string;
static Obj symintern;
static Obj symstring_45append;
static Obj symnumber_63;
static Obj symcora_47init_35_42ns_45export_42;
static Obj sym_42ns_45export_42;
static Obj symns;
static Obj symdefine_45library;
static Obj symcora_47init_35parse_45define_45library;
static Obj symimport;
static Obj symexport;
static Obj symcora_47init_35parse_45define_45library_45h;
static Obj symbackquote;
static Obj symunquote;
static Obj symcora_47init_35rewrite_45backquote;
static Obj symbegin;
static Obj symdo;
static Obj symcora_47init_35rewrite_45begin;
static Obj symcora_47init_35propagate_45boolean;
static Obj symnot;
static Obj symcora_47init_35propagate_45boolean0;
static Obj symfunc;
static Obj symp;
static Obj symcora_47init_35gen_45paramenters;
static Obj symcora_47init_35rules_45arg_45count;
static Obj symappend;
static Obj symfilter;
static Obj symcora_47init_35filter_45h;
static Obj symlength;
static Obj symcora_47init_35length_45h;
static Obj symcora_47init_35rules_45patterns;
static Obj symcora_47init_35extract_45rules;
static Obj sym_61_62;
static Obj symcora_47init_35extract_45rules1;
static Obj symmatch;
static Obj symval;
static Obj symcora_47init_35rewrite_45match;
static Obj symcc;
static Obj symcora_47init_35match_45helper;
static Obj symwhere;
static Obj symcora_47init_35extract_45rule_45action;
static Obj symstr;
static Obj sym_61;
static Obj symcdr;
static Obj symcar;
static Obj symcons_63;
static Obj symcora_47init_35match1;
static Obj symcora_47init_35match_45cons_45expander;
static Obj symlist_45rest;
static Obj symcora_47init_35rcons1;
static Obj symboolean_63;
static Obj symand;
static Obj symcora_47init_35rewrite_45and;
static Obj symor;
static Obj symcora_47init_35rewrite_45or;
static Obj symif;
static Obj symerror;
static Obj symcond;
static Obj symlet;
static Obj symcora_47init_35rewrite_45let;
static Obj symatom_63;
static Obj symelem_63;
static Obj symdef;
static Obj symdefun;
static Obj symlist;
static Obj symdefmacro;
static Obj symdefmacro_45macro;
static Obj symmacroexpand;
static Obj symquote;
static Obj symlambda;
static Obj symcora_47init_35macroexpand_45boot;
static Obj symcora_47init_35macroexpand1;
static Obj symcora_47init_35macroexpand1_45h;
static Obj symcora_47init_35add_45to_45_42macros_42;
static Obj symprotect;
static Obj sym_42protect_45symbol_42;
static Obj sym_42macros_42;
static Obj symmap;
static Obj symmap_45h;
static Obj symreverse;
static Obj symcora_47init_35reverse_45h;
static Obj sympair_63;
static Obj symcons;
static Obj symrcons;
static Obj symcdddr;
static Obj symcadddr;
static Obj symcaddr;
static Obj symcddr;
static Obj symcdar;
static Obj symcaar;
static Obj symcadr;
static Obj symnull_63;
void entry(struct Cora *co) {
symcora_47init_35append = intern("cora/init#append");
symcora_47init_35filter = intern("cora/init#filter");
symcora_47init_35length = intern("cora/init#length");
symcora_47init_35elem_63 = intern("cora/init#elem?");
symcora_47init_35macroexpand = intern("cora/init#macroexpand");
symcora_47init_35map = intern("cora/init#map");
symcora_47init_35reverse = intern("cora/init#reverse");
symcora_47init_35throw = intern("cora/init#throw");
symcora_47init_35try = intern("cora/init#try");
symcora_47init_35import = intern("cora/init#import");
symcora_47init_35load_45so = intern("cora/init#load-so");
symcora_47init_35load = intern("cora/init#load");
symcora_47init_35apply = intern("cora/init#apply");
symcora_47init_35read_45file_45as_45sexp = intern("cora/init#read-file-as-sexp");
symcora_47init_35value_45or = intern("cora/init#value-or");
symcora_47init_35value = intern("cora/init#value");
symcora_47init_35bytes_45length = intern("cora/init#bytes-length");
symcora_47init_35bytes = intern("cora/init#bytes");
symcora_47init_35vector_45length = intern("cora/init#vector-length");
symcora_47init_35vector_45ref = intern("cora/init#vector-ref");
symcora_47init_35vector_45set_33 = intern("cora/init#vector-set!");
symcora_47init_35vector = intern("cora/init#vector");
symcora_47init_35symbol_45_62string = intern("cora/init#symbol->string");
symcora_47init_35intern = intern("cora/init#intern");
symcora_47init_35string_45append = intern("cora/init#string-append");
symcora_47init_35number_63 = intern("cora/init#number?");
symcora_47init_35null_63 = intern("cora/init#null?");
symcora_47init_35boolean_63 = intern("cora/init#boolean?");
symcora_47init_35atom_63 = intern("cora/init#atom?");
symcora_47init_35pair_63 = intern("cora/init#pair?");
symcora_47init_35cdddr = intern("cora/init#cdddr");
symcora_47init_35cadddr = intern("cora/init#cadddr");
symcora_47init_35caddr = intern("cora/init#caddr");
symcora_47init_35cddr = intern("cora/init#cddr");
symcora_47init_35cdar = intern("cora/init#cdar");
symcora_47init_35caar = intern("cora/init#caar");
symcora_47init_35cadr = intern("cora/init#cadr");
symthrow = intern("throw");
symtry = intern("try");
symload = intern("load");
symload_45so = intern("load-so");
symapply = intern("apply");
symvalue_45or = intern("value-or");
symvalue = intern("value");
symread_45file_45as_45sexp = intern("read-file-as-sexp");
symbytes_45length = intern("bytes-length");
symbytes = intern("bytes");
symvector_45length = intern("vector-length");
symvector_45ref = intern("vector-ref");
symvector_45set_33 = intern("vector-set!");
symvector = intern("vector");
symsymbol_45_62string = intern("symbol->string");
symintern = intern("intern");
symstring_45append = intern("string-append");
symnumber_63 = intern("number?");
symcora_47init_35_42ns_45export_42 = intern("cora/init#*ns-export*");
sym_42ns_45export_42 = intern("*ns-export*");
symns = intern("ns");
symdefine_45library = intern("define-library");
symcora_47init_35parse_45define_45library = intern("cora/init#parse-define-library");
symimport = intern("import");
symexport = intern("export");
symcora_47init_35parse_45define_45library_45h = intern("cora/init#parse-define-library-h");
symbackquote = intern("backquote");
symunquote = intern("unquote");
symcora_47init_35rewrite_45backquote = intern("cora/init#rewrite-backquote");
symbegin = intern("begin");
symdo = intern("do");
symcora_47init_35rewrite_45begin = intern("cora/init#rewrite-begin");
symcora_47init_35propagate_45boolean = intern("cora/init#propagate-boolean");
symnot = intern("not");
symcora_47init_35propagate_45boolean0 = intern("cora/init#propagate-boolean0");
symfunc = intern("func");
symp = intern("p");
symcora_47init_35gen_45paramenters = intern("cora/init#gen-paramenters");
symcora_47init_35rules_45arg_45count = intern("cora/init#rules-arg-count");
symappend = intern("append");
symfilter = intern("filter");
symcora_47init_35filter_45h = intern("cora/init#filter-h");
symlength = intern("length");
symcora_47init_35length_45h = intern("cora/init#length-h");
symcora_47init_35rules_45patterns = intern("cora/init#rules-patterns");
symcora_47init_35extract_45rules = intern("cora/init#extract-rules");
sym_61_62 = intern("=>");
symcora_47init_35extract_45rules1 = intern("cora/init#extract-rules1");
symmatch = intern("match");
symval = intern("val");
symcora_47init_35rewrite_45match = intern("cora/init#rewrite-match");
symcc = intern("cc");
symcora_47init_35match_45helper = intern("cora/init#match-helper");
symwhere = intern("where");
symcora_47init_35extract_45rule_45action = intern("cora/init#extract-rule-action");
symstr = intern("str");
sym_61 = intern("=");
symcdr = intern("cdr");
symcar = intern("car");
symcons_63 = intern("cons?");
symcora_47init_35match1 = intern("cora/init#match1");
symcora_47init_35match_45cons_45expander = intern("cora/init#match-cons-expander");
symlist_45rest = intern("list-rest");
symcora_47init_35rcons1 = intern("cora/init#rcons1");
symboolean_63 = intern("boolean?");
symand = intern("and");
symcora_47init_35rewrite_45and = intern("cora/init#rewrite-and");
symor = intern("or");
symcora_47init_35rewrite_45or = intern("cora/init#rewrite-or");
symif = intern("if");
symerror = intern("error");
symcond = intern("cond");
symlet = intern("let");
symcora_47init_35rewrite_45let = intern("cora/init#rewrite-let");
symatom_63 = intern("atom?");
symelem_63 = intern("elem?");
symdef = intern("def");
symdefun = intern("defun");
symlist = intern("list");
symdefmacro = intern("defmacro");
symdefmacro_45macro = intern("defmacro-macro");
symmacroexpand = intern("macroexpand");
symquote = intern("quote");
symlambda = intern("lambda");
symcora_47init_35macroexpand_45boot = intern("cora/init#macroexpand-boot");
symcora_47init_35macroexpand1 = intern("cora/init#macroexpand1");
symcora_47init_35macroexpand1_45h = intern("cora/init#macroexpand1-h");
symcora_47init_35add_45to_45_42macros_42 = intern("cora/init#add-to-*macros*");
symprotect = intern("protect");
sym_42protect_45symbol_42 = intern("*protect-symbol*");
sym_42macros_42 = intern("*macros*");
symmap = intern("map");
symmap_45h = intern("map-h");
symreverse = intern("reverse");
symcora_47init_35reverse_45h = intern("cora/init#reverse-h");
sympair_63 = intern("pair?");
symcons = intern("cons");
symrcons = intern("rcons");
symcdddr = intern("cdddr");
symcadddr = intern("cadddr");
symcaddr = intern("caddr");
symcddr = intern("cddr");
symcdar = intern("cdar");
symcaar = intern("caar");
symcadr = intern("cadr");
symnull_63 = intern("null?");
clofun0(co);
}
static void clofun0(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35reg2254 = primSet(co, symnull_63, makeNative(25, clofun4, 1, 0));
Obj _35reg2257 = primSet(co, symcadr, makeNative(24, clofun4, 1, 0));
Obj _35reg2260 = primSet(co, symcaar, makeNative(23, clofun4, 1, 0));
Obj _35reg2263 = primSet(co, symcdar, makeNative(22, clofun4, 1, 0));
Obj _35reg2266 = primSet(co, symcddr, makeNative(21, clofun4, 1, 0));
Obj _35reg2270 = primSet(co, symcaddr, makeNative(20, clofun4, 1, 0));
Obj _35reg2275 = primSet(co, symcadddr, makeNative(19, clofun4, 1, 0));
Obj _35reg2279 = primSet(co, symcdddr, makeNative(18, clofun4, 1, 0));
Obj _35reg2287 = primSet(co, symrcons, makeNative(16, clofun4, 1, 0));
Obj _35reg2289 = primSet(co, sympair_63, makeNative(15, clofun4, 1, 0));
Obj _35reg2294 = primSet(co, symcora_47init_35reverse_45h, makeNative(14, clofun4, 2, 0));
PUSH_CONT(co, 1, clofun0, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse_45h);
__arg1 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2295 = __arg1;
Obj _35reg2296 = primSet(co, symreverse, _35val2295);
Obj _35reg2302 = primSet(co, symmap_45h, makeNative(12, clofun4, 3, 0));
Obj _35reg2303 = primSet(co, symmap, makeNative(11, clofun4, 2, 0));
Obj _35reg2304 = primSet(co, sym_42macros_42, Nil);
Obj _35reg2305 = primGenSym(symprotect);
Obj _35reg2306 = primSet(co, sym_42protect_45symbol_42, _35reg2305);
Obj _35reg2310 = primSet(co, symcora_47init_35add_45to_45_42macros_42, makeNative(10, clofun4, 2, 0));
Obj _35reg2323 = primSet(co, symcora_47init_35macroexpand1_45h, makeNative(8, clofun4, 2, 0));
Obj _35reg2324 = primSet(co, symcora_47init_35macroexpand1, makeNative(7, clofun4, 1, 0));
Obj _35reg2341 = primSet(co, symcora_47init_35macroexpand_45boot, makeNative(1, clofun4, 1, 0));
Obj _35reg2342 = primSet(co, symmacroexpand, globalRef(symcora_47init_35macroexpand_45boot));
Obj _35reg2353 = primSet(co, symdefmacro_45macro, makeNative(47, clofun3, 1, 0));
PUSH_CONT(co, 2, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symdefmacro;
__arg2 = globalRef(symdefmacro_45macro);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2354 = __arg1;
PUSH_CONT(co, 3, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symlist;
__arg2 = makeNative(46, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2356 = __arg1;
PUSH_CONT(co, 4, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symdefun;
__arg2 = makeNative(42, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2366 = __arg1;
Obj _35reg2371 = primSet(co, symelem_63, makeNative(41, clofun3, 2, 0));
Obj _35reg2374 = primSet(co, symatom_63, makeNative(40, clofun3, 1, 0));
Obj _35reg2386 = primSet(co, symcora_47init_35rewrite_45let, makeNative(35, clofun3, 1, 0));
PUSH_CONT(co, 5, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symlet;
__arg2 = makeNative(34, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2388 = __arg1;
PUSH_CONT(co, 6, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symcond;
__arg2 = makeNative(30, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2402 = __arg1;
Obj _35reg2414 = primSet(co, symcora_47init_35rewrite_45or, makeNative(28, clofun3, 1, 0));
PUSH_CONT(co, 7, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symor;
__arg2 = makeNative(27, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2416 = __arg1;
Obj _35reg2428 = primSet(co, symcora_47init_35rewrite_45and, makeNative(25, clofun3, 1, 0));
PUSH_CONT(co, 8, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symand;
__arg2 = makeNative(24, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2430 = __arg1;
Obj _35reg2433 = primSet(co, symboolean_63, makeNative(23, clofun3, 1, 0));
Obj _35reg2443 = primSet(co, symcora_47init_35rcons1, makeNative(20, clofun3, 1, 0));
PUSH_CONT(co, 9, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symlist_45rest;
__arg2 = makeNative(19, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2445 = __arg1;
Obj _35reg2499 = primSet(co, symcora_47init_35match_45cons_45expander, makeNative(1, clofun3, 4, 0));
Obj _35reg2532 = primSet(co, symcora_47init_35match1, makeNative(45, clofun2, 4, 0));
Obj _35reg2559 = primSet(co, symcora_47init_35extract_45rule_45action, makeNative(37, clofun2, 2, 0));
Obj _35reg2611 = primSet(co, symcora_47init_35match_45helper, makeNative(21, clofun2, 2, 0));
Obj _35reg2637 = primSet(co, symcora_47init_35rewrite_45match, makeNative(14, clofun2, 1, 0));
PUSH_CONT(co, 10, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symmatch;
__arg2 = makeNative(13, clofun2, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2638 = __arg1;
Obj _35reg2690 = primSet(co, symcora_47init_35extract_45rules1, makeNative(6, clofun2, 3, 0));
Obj _35reg2691 = primSet(co, symcora_47init_35extract_45rules, makeNative(5, clofun2, 1, 0));
Obj _35reg2696 = primSet(co, symcora_47init_35rules_45patterns, makeNative(2, clofun2, 2, 0));
Obj _35reg2700 = primSet(co, symcora_47init_35length_45h, makeNative(1, clofun2, 2, 0));
Obj _35reg2701 = primSet(co, symlength, makeNative(0, clofun2, 1, 0));
Obj _35reg2709 = primSet(co, symcora_47init_35filter_45h, makeNative(48, clofun1, 3, 0));
Obj _35reg2710 = primSet(co, symfilter, makeNative(47, clofun1, 2, 0));
Obj _35reg2716 = primSet(co, symappend, makeNative(45, clofun1, 2, 0));
Obj _35reg2727 = primSet(co, symcora_47init_35rules_45arg_45count, makeNative(38, clofun1, 1, 0));
Obj _35reg2733 = primSet(co, symcora_47init_35gen_45paramenters, makeNative(36, clofun1, 1, 0));
PUSH_CONT(co, 11, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symfunc;
__arg2 = makeNative(30, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2746 = __arg1;
Obj _35reg3009 = primSet(co, symcora_47init_35propagate_45boolean0, makeNative(18, clofun1, 1, 0));
Obj _35reg3167 = primSet(co, symcora_47init_35propagate_45boolean, makeNative(45, clofun0, 1, 0));
Obj _35reg3169 = primSet(co, symmacroexpand, makeNative(43, clofun0, 1, 0));
Obj _35reg3193 = primSet(co, symcora_47init_35rewrite_45begin, makeNative(38, clofun0, 1, 0));
PUSH_CONT(co, 12, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symbegin;
__arg2 = makeNative(37, clofun0, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3195 = __arg1;
Obj _35reg3215 = primSet(co, symcora_47init_35rewrite_45backquote, makeNative(31, clofun0, 1, 0));
PUSH_CONT(co, 13, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symbackquote;
__arg2 = makeNative(29, clofun0, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3217 = __arg1;
Obj _35reg3246 = primSet(co, symcora_47init_35parse_45define_45library_45h, makeNative(24, clofun0, 4, 0));
Obj _35reg3247 = primSet(co, symcora_47init_35parse_45define_45library, makeNative(23, clofun0, 2, 0));
PUSH_CONT(co, 14, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symdefine_45library;
__arg2 = makeNative(15, clofun0, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3267 = __arg1;
Obj _35reg3268 = makeCons(symappend, Nil);
Obj _35reg3269 = makeCons(symfilter, _35reg3268);
Obj _35reg3270 = makeCons(symlength, _35reg3269);
Obj _35reg3271 = makeCons(symelem_63, _35reg3270);
Obj _35reg3272 = makeCons(symmacroexpand, _35reg3271);
Obj _35reg3273 = makeCons(symmap, _35reg3272);
Obj _35reg3274 = makeCons(symreverse, _35reg3273);
Obj _35reg3275 = makeCons(symthrow, _35reg3274);
Obj _35reg3276 = makeCons(symtry, _35reg3275);
Obj _35reg3277 = makeCons(symload, _35reg3276);
Obj _35reg3278 = makeCons(symimport, _35reg3277);
Obj _35reg3279 = makeCons(symload_45so, _35reg3278);
Obj _35reg3280 = makeCons(symapply, _35reg3279);
Obj _35reg3281 = makeCons(symvalue_45or, _35reg3280);
Obj _35reg3282 = makeCons(symvalue, _35reg3281);
Obj _35reg3283 = makeCons(symread_45file_45as_45sexp, _35reg3282);
Obj _35reg3284 = makeCons(symbytes_45length, _35reg3283);
Obj _35reg3285 = makeCons(symbytes, _35reg3284);
Obj _35reg3286 = makeCons(symvector_45length, _35reg3285);
Obj _35reg3287 = makeCons(symvector_45ref, _35reg3286);
Obj _35reg3288 = makeCons(symvector_45set_33, _35reg3287);
Obj _35reg3289 = makeCons(symvector, _35reg3288);
Obj _35reg3290 = makeCons(symsymbol_45_62string, _35reg3289);
Obj _35reg3291 = makeCons(symintern, _35reg3290);
Obj _35reg3292 = makeCons(symstring_45append, _35reg3291);
Obj _35reg3293 = makeCons(symnull_63, _35reg3292);
Obj _35reg3294 = makeCons(symnumber_63, _35reg3293);
Obj _35reg3295 = makeCons(symboolean_63, _35reg3294);
Obj _35reg3296 = makeCons(symatom_63, _35reg3295);
Obj _35reg3297 = makeCons(sympair_63, _35reg3296);
Obj _35reg3298 = makeCons(symcdddr, _35reg3297);
Obj _35reg3299 = makeCons(symcadddr, _35reg3298);
Obj _35reg3300 = makeCons(symcaddr, _35reg3299);
Obj _35reg3301 = makeCons(symcddr, _35reg3300);
Obj _35reg3302 = makeCons(symcdar, _35reg3301);
Obj _35reg3303 = makeCons(symcaar, _35reg3302);
Obj _35reg3304 = makeCons(symcadr, _35reg3303);
Obj _35reg3305 = primSet(co, symcora_47init_35_42ns_45export_42, _35reg3304);
Obj _35reg3306 = primSet(co, symcora_47init_35cadr, globalRef(symcadr));
Obj _35reg3307 = primSet(co, symcora_47init_35caar, globalRef(symcaar));
Obj _35reg3308 = primSet(co, symcora_47init_35cdar, globalRef(symcdar));
Obj _35reg3309 = primSet(co, symcora_47init_35cddr, globalRef(symcddr));
Obj _35reg3310 = primSet(co, symcora_47init_35caddr, globalRef(symcaddr));
Obj _35reg3311 = primSet(co, symcora_47init_35cadddr, globalRef(symcadddr));
Obj _35reg3312 = primSet(co, symcora_47init_35cdddr, globalRef(symcdddr));
Obj _35reg3313 = primSet(co, symcora_47init_35pair_63, globalRef(sympair_63));
Obj _35reg3314 = primSet(co, symcora_47init_35atom_63, globalRef(symatom_63));
Obj _35reg3315 = primSet(co, symcora_47init_35boolean_63, globalRef(symboolean_63));
Obj _35reg3316 = primSet(co, symcora_47init_35null_63, globalRef(symnull_63));
Obj _35reg3317 = primSet(co, symcora_47init_35number_63, globalRef(symnumber_63));
Obj _35reg3318 = primSet(co, symcora_47init_35string_45append, globalRef(symstring_45append));
Obj _35reg3319 = primSet(co, symcora_47init_35intern, globalRef(symintern));
Obj _35reg3320 = primSet(co, symcora_47init_35symbol_45_62string, globalRef(symsymbol_45_62string));
Obj _35reg3321 = primSet(co, symcora_47init_35vector, globalRef(symvector));
Obj _35reg3322 = primSet(co, symcora_47init_35vector_45set_33, globalRef(symvector_45set_33));
Obj _35reg3323 = primSet(co, symcora_47init_35vector_45ref, globalRef(symvector_45ref));
Obj _35reg3324 = primSet(co, symcora_47init_35vector_45length, globalRef(symvector_45length));
Obj _35reg3325 = primSet(co, symcora_47init_35bytes, globalRef(symbytes));
Obj _35reg3326 = primSet(co, symcora_47init_35bytes_45length, globalRef(symbytes_45length));
Obj _35reg3327 = primSet(co, symcora_47init_35value, globalRef(symvalue));
Obj _35reg3328 = primSet(co, symcora_47init_35value_45or, globalRef(symvalue_45or));
Obj _35reg3329 = primSet(co, symcora_47init_35read_45file_45as_45sexp, globalRef(symread_45file_45as_45sexp));
Obj _35reg3330 = primSet(co, symcora_47init_35apply, globalRef(symapply));
Obj _35reg3331 = primSet(co, symcora_47init_35load, globalRef(symload));
Obj _35reg3332 = primSet(co, symcora_47init_35load_45so, globalRef(symload_45so));
Obj _35reg3333 = primSet(co, symcora_47init_35import, globalRef(symimport));
Obj _35reg3334 = primSet(co, symcora_47init_35try, globalRef(symtry));
Obj _35reg3335 = primSet(co, symcora_47init_35throw, globalRef(symthrow));
Obj _35reg3336 = primSet(co, symcora_47init_35reverse, globalRef(symreverse));
Obj _35reg3337 = primSet(co, symcora_47init_35map, globalRef(symmap));
Obj _35reg3338 = primSet(co, symcora_47init_35macroexpand, globalRef(symmacroexpand));
Obj _35reg3339 = primSet(co, symcora_47init_35elem_63, globalRef(symelem_63));
Obj _35reg3340 = primSet(co, symcora_47init_35length, globalRef(symlength));
Obj _35reg3341 = primSet(co, symcora_47init_35filter, globalRef(symfilter));
Obj _35reg3342 = primSet(co, symcora_47init_35append, globalRef(symappend));
__nargs = 2;
__arg1 = _35reg3342;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj sexp = __arg1;
PUSH_CONT(co, 16, clofun0, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3248 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = _35val3248;
PUSH_CONT(co, 17, clofun0, 1, path);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3249 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 18, clofun0, 1, path);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35parse_45define_45library);
__arg1 = _35val3249;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3250 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = _35val3250;
__arg1 = makeNative(19, clofun0, 3, 1, path);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj import = __arg1;
Obj export = __arg2;
Obj body = __arg3;
Obj _35reg3251 = makeCons(makeCString("cora/init"), import);
PUSH_CONT(co, 20, clofun0, 3, export, body, _35reg3251);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = makeNative(22, clofun0, 1, 0);
__arg2 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3254 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg3251= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg3255 = makeCons(export, Nil);
Obj _35reg3256 = makeCons(symbackquote, _35reg3255);
Obj _35reg3257 = makeCons(_35reg3256, Nil);
Obj _35reg3258 = makeCons(sym_42ns_45export_42, _35reg3257);
Obj _35reg3259 = makeCons(symdef, _35reg3258);
Obj _35reg3260 = makeCons(_35reg3259, body);
PUSH_CONT(co, 21, clofun0, 1, _35reg3251);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = _35val3254;
__arg2 = _35reg3260;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _35val3261 = __arg1;
Obj _35reg3251= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg3262 = makeCons(symbegin, _35val3261);
Obj _35reg3263 = makeCons(_35reg3262, Nil);
Obj _35reg3264 = makeCons(_35reg3251, _35reg3263);
Obj _35reg3265 = makeCons(closureRef(co, 0), _35reg3264);
Obj _35reg3266 = makeCons(symns, _35reg3265);
__nargs = 2;
__arg1 = _35reg3266;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj imp = __arg1;
Obj _35reg3252 = makeCons(imp, Nil);
Obj _35reg3253 = makeCons(symimport, _35reg3252);
__nargs = 2;
__arg1 = _35reg3253;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj data = __arg1;
Obj k = __arg2;
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45define_45library_45h);
__arg1 = data;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _35p2246 = __arg1;
Obj _35p2247 = __arg2;
Obj _35p2248 = __arg3;
Obj _35p2249 = co->args[4];
Obj _35cc2250 = makeNative(25, clofun0, 0, 4, _35p2246, _35p2247, _35p2248, _35p2249);
Obj _35reg3228 = PRIM_ISCONS(_35p2246);
if (True == _35reg3228) {
Obj _35reg3229 = PRIM_CAR(_35p2246);
Obj _35reg3230 = PRIM_ISCONS(_35reg3229);
if (True == _35reg3230) {
Obj _35reg3231 = PRIM_CAR(_35p2246);
Obj _35reg3232 = PRIM_CAR(_35reg3231);
Obj _35reg3233 = PRIM_EQ(symimport, _35reg3232);
if (True == _35reg3233) {
Obj _35reg3234 = PRIM_CAR(_35p2246);
Obj _35reg3235 = PRIM_CDR(_35reg3234);
Obj _35reg3236 = PRIM_ISCONS(_35reg3235);
if (True == _35reg3236) {
Obj _35reg3237 = PRIM_CAR(_35p2246);
Obj _35reg3238 = PRIM_CDR(_35reg3237);
Obj _35reg3239 = PRIM_CAR(_35reg3238);
Obj lib = _35reg3239;
Obj _35reg3240 = PRIM_CAR(_35p2246);
Obj _35reg3241 = PRIM_CDR(_35reg3240);
Obj _35reg3242 = PRIM_CDR(_35reg3241);
Obj _35reg3243 = PRIM_EQ(Nil, _35reg3242);
if (True == _35reg3243) {
Obj _35reg3244 = PRIM_CDR(_35p2246);
Obj rest = _35reg3244;
Obj imports = _35p2247;
Obj exports = _35p2248;
Obj k = _35p2249;
Obj _35reg3245 = makeCons(lib, imports);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45define_45library_45h);
__arg1 = rest;
__arg2 = _35reg3245;
__arg3 = exports;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2250;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2250;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2250;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2250;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2250;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35cc2251 = makeNative(26, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3219 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3219) {
Obj _35reg3220 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3221 = PRIM_ISCONS(_35reg3220);
if (True == _35reg3221) {
Obj _35reg3222 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3223 = PRIM_CAR(_35reg3222);
Obj _35reg3224 = PRIM_EQ(symexport, _35reg3223);
if (True == _35reg3224) {
Obj _35reg3225 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3226 = PRIM_CDR(_35reg3225);
Obj more = _35reg3226;
Obj _35reg3227 = PRIM_CDR(closureRef(co, 0));
Obj rest = _35reg3227;
Obj imports = closureRef(co, 1);
Obj exports = closureRef(co, 2);
Obj k = closureRef(co, 3);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45define_45library_45h);
__arg1 = rest;
__arg2 = imports;
__arg3 = more;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2251;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2251;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2251;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35cc2252 = makeNative(28, clofun0, 0, 0);
Obj body = closureRef(co, 0);
Obj imports = closureRef(co, 1);
Obj exports = closureRef(co, 2);
Obj k = closureRef(co, 3);
PUSH_CONT(co, 27, clofun0, 3, k, exports, body);
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = imports;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _35val3218 = __arg1;
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exports= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 4;
__arg0 = k;
__arg1 = _35val3218;
__arg2 = exports;
__arg3 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj exp = __arg1;
PUSH_CONT(co, 30, clofun0, 0);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val3216 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45backquote);
__arg1 = _35val3216;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35p2241 = __arg1;
Obj _35cc2242 = makeNative(32, clofun0, 0, 1, _35p2241);
Obj x = _35p2241;
Obj _35reg3212 = primIsSymbol(x);
if (True == _35reg3212) {
Obj _35reg3213 = makeCons(x, Nil);
Obj _35reg3214 = makeCons(symquote, _35reg3213);
__nargs = 2;
__arg1 = _35reg3214;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2242;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _35cc2243 = makeNative(33, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg3202 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3202) {
Obj _35reg3203 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3204 = PRIM_EQ(symunquote, _35reg3203);
if (True == _35reg3204) {
Obj _35reg3205 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3206 = PRIM_ISCONS(_35reg3205);
if (True == _35reg3206) {
Obj _35reg3207 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3208 = PRIM_CAR(_35reg3207);
Obj x = _35reg3208;
Obj _35reg3209 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3210 = PRIM_CDR(_35reg3209);
Obj _35reg3211 = PRIM_EQ(Nil, _35reg3210);
if (True == _35reg3211) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2243;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2243;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2243;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2243;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _35cc2244 = makeNative(35, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg3196 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3196) {
Obj _35reg3197 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg3197;
Obj _35reg3198 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg3198;
Obj _35reg3199 = makeCons(x, more);
PUSH_CONT(co, 34, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35rewrite_45backquote);
__arg2 = _35reg3199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2244;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj _35val3200 = __arg1;
Obj _35reg3201 = makeCons(symlist, _35val3200);
__nargs = 2;
__arg1 = _35reg3201;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj _35cc2245 = makeNative(36, clofun0, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj exp = __arg1;
Obj _35reg3194 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45begin);
__arg1 = _35reg3194;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _35p2237 = __arg1;
Obj _35cc2238 = makeNative(39, clofun0, 0, 1, _35p2237);
Obj _35reg3189 = PRIM_ISCONS(_35p2237);
if (True == _35reg3189) {
Obj _35reg3190 = PRIM_CAR(_35p2237);
Obj x = _35reg3190;
Obj _35reg3191 = PRIM_CDR(_35p2237);
Obj _35reg3192 = PRIM_EQ(Nil, _35reg3191);
if (True == _35reg3192) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2238;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2238;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _35cc2239 = makeNative(40, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg3177 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3177) {
Obj _35reg3178 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg3178;
Obj _35reg3179 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3180 = PRIM_ISCONS(_35reg3179);
if (True == _35reg3180) {
Obj _35reg3181 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3182 = PRIM_CAR(_35reg3181);
Obj y = _35reg3182;
Obj _35reg3183 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3184 = PRIM_CDR(_35reg3183);
Obj _35reg3185 = PRIM_EQ(Nil, _35reg3184);
if (True == _35reg3185) {
Obj _35reg3186 = makeCons(y, Nil);
Obj _35reg3187 = makeCons(x, _35reg3186);
Obj _35reg3188 = makeCons(symdo, _35reg3187);
__nargs = 2;
__arg1 = _35reg3188;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj _35cc2240 = makeNative(42, clofun0, 0, 0);
Obj _35reg3170 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3170) {
Obj _35reg3171 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg3171;
Obj _35reg3172 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg3172;
PUSH_CONT(co, 41, clofun0, 1, x);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45begin);
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj _35val3173 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg3174 = makeCons(_35val3173, Nil);
Obj _35reg3175 = makeCons(x, _35reg3174);
Obj _35reg3176 = makeCons(symdo, _35reg3175);
__nargs = 2;
__arg1 = _35reg3176;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label42:
{
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj exp = __arg1;
PUSH_CONT(co, 44, clofun0, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val3168 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = _35val3168;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35p2225 = __arg1;
Obj _35cc2226 = makeNative(46, clofun0, 0, 1, _35p2225);
Obj _35reg3155 = PRIM_ISCONS(_35p2225);
if (True == _35reg3155) {
Obj _35reg3156 = PRIM_CAR(_35p2225);
Obj _35reg3157 = PRIM_EQ(symquote, _35reg3156);
if (True == _35reg3157) {
Obj _35reg3158 = PRIM_CDR(_35p2225);
Obj _35reg3159 = PRIM_ISCONS(_35reg3158);
if (True == _35reg3159) {
Obj _35reg3160 = PRIM_CDR(_35p2225);
Obj _35reg3161 = PRIM_CAR(_35reg3160);
Obj x = _35reg3161;
Obj _35reg3162 = PRIM_CDR(_35p2225);
Obj _35reg3163 = PRIM_CDR(_35reg3162);
Obj _35reg3164 = PRIM_EQ(Nil, _35reg3163);
if (True == _35reg3164) {
Obj _35reg3165 = makeCons(x, Nil);
Obj _35reg3166 = makeCons(symquote, _35reg3165);
__nargs = 2;
__arg1 = _35reg3166;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2226;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _35cc2227 = makeNative(48, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg3142 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3142) {
Obj _35reg3143 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3144 = PRIM_EQ(symcons_63, _35reg3143);
if (True == _35reg3144) {
Obj _35reg3145 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3146 = PRIM_ISCONS(_35reg3145);
if (True == _35reg3146) {
Obj _35reg3147 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3148 = PRIM_CAR(_35reg3147);
Obj x = _35reg3148;
Obj _35reg3149 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3150 = PRIM_CDR(_35reg3149);
Obj _35reg3151 = PRIM_EQ(Nil, _35reg3150);
if (True == _35reg3151) {
PUSH_CONT(co, 47, clofun0, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _35val3152 = __arg1;
Obj x1 = _35val3152;
Obj _35reg3153 = makeCons(x1, Nil);
Obj _35reg3154 = makeCons(symcons_63, _35reg3153);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = _35reg3154;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35cc2228 = makeNative(0, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg3129 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3129) {
Obj _35reg3130 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3131 = PRIM_EQ(symcar, _35reg3130);
if (True == _35reg3131) {
Obj _35reg3132 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3133 = PRIM_ISCONS(_35reg3132);
if (True == _35reg3133) {
Obj _35reg3134 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3135 = PRIM_CAR(_35reg3134);
Obj x = _35reg3135;
Obj _35reg3136 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3137 = PRIM_CDR(_35reg3136);
Obj _35reg3138 = PRIM_EQ(Nil, _35reg3137);
if (True == _35reg3138) {
PUSH_CONT(co, 49, clofun0, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj _35val3139 = __arg1;
Obj x1 = _35val3139;
Obj _35reg3140 = makeCons(x1, Nil);
Obj _35reg3141 = makeCons(symcar, _35reg3140);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = _35reg3141;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun1(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc2229 = makeNative(2, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg3116 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3116) {
Obj _35reg3117 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3118 = PRIM_EQ(symcdr, _35reg3117);
if (True == _35reg3118) {
Obj _35reg3119 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3120 = PRIM_ISCONS(_35reg3119);
if (True == _35reg3120) {
Obj _35reg3121 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3122 = PRIM_CAR(_35reg3121);
Obj x = _35reg3122;
Obj _35reg3123 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3124 = PRIM_CDR(_35reg3123);
Obj _35reg3125 = PRIM_EQ(Nil, _35reg3124);
if (True == _35reg3125) {
PUSH_CONT(co, 1, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val3126 = __arg1;
Obj x1 = _35val3126;
Obj _35reg3127 = makeCons(x1, Nil);
Obj _35reg3128 = makeCons(symcdr, _35reg3127);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = _35reg3128;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc2230 = makeNative(5, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg3094 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3094) {
Obj _35reg3095 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3096 = PRIM_EQ(symand, _35reg3095);
if (True == _35reg3096) {
Obj _35reg3097 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3098 = PRIM_ISCONS(_35reg3097);
if (True == _35reg3098) {
Obj _35reg3099 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3100 = PRIM_CAR(_35reg3099);
Obj x = _35reg3100;
Obj _35reg3101 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3102 = PRIM_CDR(_35reg3101);
Obj _35reg3103 = PRIM_ISCONS(_35reg3102);
if (True == _35reg3103) {
Obj _35reg3104 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3105 = PRIM_CDR(_35reg3104);
Obj _35reg3106 = PRIM_CAR(_35reg3105);
Obj y = _35reg3106;
Obj _35reg3107 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3108 = PRIM_CDR(_35reg3107);
Obj _35reg3109 = PRIM_CDR(_35reg3108);
Obj _35reg3110 = PRIM_EQ(Nil, _35reg3109);
if (True == _35reg3110) {
PUSH_CONT(co, 3, clofun1, 1, y);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val3111 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1 = _35val3111;
PUSH_CONT(co, 4, clofun1, 1, x1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3112 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y1 = _35val3112;
Obj _35reg3113 = makeCons(y1, Nil);
Obj _35reg3114 = makeCons(x1, _35reg3113);
Obj _35reg3115 = makeCons(symand, _35reg3114);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = _35reg3115;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35cc2231 = makeNative(7, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg3081 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3081) {
Obj _35reg3082 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3083 = PRIM_EQ(symnull_63, _35reg3082);
if (True == _35reg3083) {
Obj _35reg3084 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3085 = PRIM_ISCONS(_35reg3084);
if (True == _35reg3085) {
Obj _35reg3086 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3087 = PRIM_CAR(_35reg3086);
Obj x = _35reg3087;
Obj _35reg3088 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3089 = PRIM_CDR(_35reg3088);
Obj _35reg3090 = PRIM_EQ(Nil, _35reg3089);
if (True == _35reg3090) {
PUSH_CONT(co, 6, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val3091 = __arg1;
Obj x1 = _35val3091;
Obj _35reg3092 = makeCons(x1, Nil);
Obj _35reg3093 = makeCons(symnull_63, _35reg3092);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = _35reg3093;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc2232 = makeNative(9, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg3068 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3068) {
Obj _35reg3069 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3070 = PRIM_EQ(symnot, _35reg3069);
if (True == _35reg3070) {
Obj _35reg3071 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3072 = PRIM_ISCONS(_35reg3071);
if (True == _35reg3072) {
Obj _35reg3073 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3074 = PRIM_CAR(_35reg3073);
Obj x = _35reg3074;
Obj _35reg3075 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3076 = PRIM_CDR(_35reg3075);
Obj _35reg3077 = PRIM_EQ(Nil, _35reg3076);
if (True == _35reg3077) {
PUSH_CONT(co, 8, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val3078 = __arg1;
Obj x1 = _35val3078;
Obj _35reg3079 = makeCons(x1, Nil);
Obj _35reg3080 = makeCons(symnot, _35reg3079);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = _35reg3080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc2233 = makeNative(13, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg3035 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3035) {
Obj _35reg3036 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3037 = PRIM_EQ(symif, _35reg3036);
if (True == _35reg3037) {
Obj _35reg3038 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3039 = PRIM_ISCONS(_35reg3038);
if (True == _35reg3039) {
Obj _35reg3040 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3041 = PRIM_CAR(_35reg3040);
Obj x = _35reg3041;
Obj _35reg3042 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3043 = PRIM_CDR(_35reg3042);
Obj _35reg3044 = PRIM_ISCONS(_35reg3043);
if (True == _35reg3044) {
Obj _35reg3045 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3046 = PRIM_CDR(_35reg3045);
Obj _35reg3047 = PRIM_CAR(_35reg3046);
Obj y = _35reg3047;
Obj _35reg3048 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3049 = PRIM_CDR(_35reg3048);
Obj _35reg3050 = PRIM_CDR(_35reg3049);
Obj _35reg3051 = PRIM_ISCONS(_35reg3050);
if (True == _35reg3051) {
Obj _35reg3052 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3053 = PRIM_CDR(_35reg3052);
Obj _35reg3054 = PRIM_CDR(_35reg3053);
Obj _35reg3055 = PRIM_CAR(_35reg3054);
Obj z = _35reg3055;
Obj _35reg3056 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3057 = PRIM_CDR(_35reg3056);
Obj _35reg3058 = PRIM_CDR(_35reg3057);
Obj _35reg3059 = PRIM_CDR(_35reg3058);
Obj _35reg3060 = PRIM_EQ(Nil, _35reg3059);
if (True == _35reg3060) {
PUSH_CONT(co, 10, clofun1, 2, y, z);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val3061 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x1 = _35val3061;
PUSH_CONT(co, 11, clofun1, 2, z, x1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3062 = __arg1;
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj y1 = _35val3062;
PUSH_CONT(co, 12, clofun1, 2, y1, x1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = z;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3063 = __arg1;
Obj y1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj z1 = _35val3063;
Obj _35reg3064 = makeCons(z1, Nil);
Obj _35reg3065 = makeCons(y1, _35reg3064);
Obj _35reg3066 = makeCons(x1, _35reg3065);
Obj _35reg3067 = makeCons(symif, _35reg3066);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = _35reg3067;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc2234 = makeNative(15, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg3014 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3014) {
Obj _35reg3015 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3016 = PRIM_EQ(symlambda, _35reg3015);
if (True == _35reg3016) {
Obj _35reg3017 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3018 = PRIM_ISCONS(_35reg3017);
if (True == _35reg3018) {
Obj _35reg3019 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3020 = PRIM_CAR(_35reg3019);
Obj args = _35reg3020;
Obj _35reg3021 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3022 = PRIM_CDR(_35reg3021);
Obj _35reg3023 = PRIM_ISCONS(_35reg3022);
if (True == _35reg3023) {
Obj _35reg3024 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3025 = PRIM_CDR(_35reg3024);
Obj _35reg3026 = PRIM_CAR(_35reg3025);
Obj body = _35reg3026;
Obj _35reg3027 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3028 = PRIM_CDR(_35reg3027);
Obj _35reg3029 = PRIM_CDR(_35reg3028);
Obj _35reg3030 = PRIM_EQ(Nil, _35reg3029);
if (True == _35reg3030) {
PUSH_CONT(co, 14, clofun1, 1, args);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val3031 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg3032 = makeCons(_35val3031, Nil);
Obj _35reg3033 = makeCons(args, _35reg3032);
Obj _35reg3034 = makeCons(symlambda, _35reg3033);
__nargs = 2;
__arg1 = _35reg3034;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35cc2235 = makeNative(16, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg3010 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3010) {
Obj _35reg3011 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg3011;
Obj _35reg3012 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg3012;
Obj _35reg3013 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35propagate_45boolean);
__arg2 = _35reg3013;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35cc2236 = makeNative(17, clofun1, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35p2213 = __arg1;
Obj _35cc2214 = makeNative(19, clofun1, 0, 1, _35p2213);
Obj _35reg2970 = PRIM_ISCONS(_35p2213);
if (True == _35reg2970) {
Obj _35reg2971 = PRIM_CAR(_35p2213);
Obj _35reg2972 = PRIM_EQ(symcar, _35reg2971);
if (True == _35reg2972) {
Obj _35reg2973 = PRIM_CDR(_35p2213);
Obj _35reg2974 = PRIM_ISCONS(_35reg2973);
if (True == _35reg2974) {
Obj _35reg2975 = PRIM_CDR(_35p2213);
Obj _35reg2976 = PRIM_CAR(_35reg2975);
Obj _35reg2977 = PRIM_ISCONS(_35reg2976);
if (True == _35reg2977) {
Obj _35reg2978 = PRIM_CDR(_35p2213);
Obj _35reg2979 = PRIM_CAR(_35reg2978);
Obj _35reg2980 = PRIM_CAR(_35reg2979);
Obj _35reg2981 = PRIM_EQ(symcons, _35reg2980);
if (True == _35reg2981) {
Obj _35reg2982 = PRIM_CDR(_35p2213);
Obj _35reg2983 = PRIM_CAR(_35reg2982);
Obj _35reg2984 = PRIM_CDR(_35reg2983);
Obj _35reg2985 = PRIM_ISCONS(_35reg2984);
if (True == _35reg2985) {
Obj _35reg2986 = PRIM_CDR(_35p2213);
Obj _35reg2987 = PRIM_CAR(_35reg2986);
Obj _35reg2988 = PRIM_CDR(_35reg2987);
Obj _35reg2989 = PRIM_CAR(_35reg2988);
Obj x = _35reg2989;
Obj _35reg2990 = PRIM_CDR(_35p2213);
Obj _35reg2991 = PRIM_CAR(_35reg2990);
Obj _35reg2992 = PRIM_CDR(_35reg2991);
Obj _35reg2993 = PRIM_CDR(_35reg2992);
Obj _35reg2994 = PRIM_ISCONS(_35reg2993);
if (True == _35reg2994) {
Obj _35reg2995 = PRIM_CDR(_35p2213);
Obj _35reg2996 = PRIM_CAR(_35reg2995);
Obj _35reg2997 = PRIM_CDR(_35reg2996);
Obj _35reg2998 = PRIM_CDR(_35reg2997);
Obj _35reg2999 = PRIM_CAR(_35reg2998);
Obj __ = _35reg2999;
Obj _35reg3000 = PRIM_CDR(_35p2213);
Obj _35reg3001 = PRIM_CAR(_35reg3000);
Obj _35reg3002 = PRIM_CDR(_35reg3001);
Obj _35reg3003 = PRIM_CDR(_35reg3002);
Obj _35reg3004 = PRIM_CDR(_35reg3003);
Obj _35reg3005 = PRIM_EQ(Nil, _35reg3004);
if (True == _35reg3005) {
Obj _35reg3006 = PRIM_CDR(_35p2213);
Obj _35reg3007 = PRIM_CDR(_35reg3006);
Obj _35reg3008 = PRIM_EQ(Nil, _35reg3007);
if (True == _35reg3008) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2214;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2214;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2214;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2214;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2214;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2214;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2214;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2214;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2214;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35cc2215 = makeNative(20, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg2931 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2931) {
Obj _35reg2932 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2933 = PRIM_EQ(symcdr, _35reg2932);
if (True == _35reg2933) {
Obj _35reg2934 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2935 = PRIM_ISCONS(_35reg2934);
if (True == _35reg2935) {
Obj _35reg2936 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2937 = PRIM_CAR(_35reg2936);
Obj _35reg2938 = PRIM_ISCONS(_35reg2937);
if (True == _35reg2938) {
Obj _35reg2939 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2940 = PRIM_CAR(_35reg2939);
Obj _35reg2941 = PRIM_CAR(_35reg2940);
Obj _35reg2942 = PRIM_EQ(symcons, _35reg2941);
if (True == _35reg2942) {
Obj _35reg2943 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2944 = PRIM_CAR(_35reg2943);
Obj _35reg2945 = PRIM_CDR(_35reg2944);
Obj _35reg2946 = PRIM_ISCONS(_35reg2945);
if (True == _35reg2946) {
Obj _35reg2947 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2948 = PRIM_CAR(_35reg2947);
Obj _35reg2949 = PRIM_CDR(_35reg2948);
Obj _35reg2950 = PRIM_CAR(_35reg2949);
Obj __ = _35reg2950;
Obj _35reg2951 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2952 = PRIM_CAR(_35reg2951);
Obj _35reg2953 = PRIM_CDR(_35reg2952);
Obj _35reg2954 = PRIM_CDR(_35reg2953);
Obj _35reg2955 = PRIM_ISCONS(_35reg2954);
if (True == _35reg2955) {
Obj _35reg2956 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2957 = PRIM_CAR(_35reg2956);
Obj _35reg2958 = PRIM_CDR(_35reg2957);
Obj _35reg2959 = PRIM_CDR(_35reg2958);
Obj _35reg2960 = PRIM_CAR(_35reg2959);
Obj x = _35reg2960;
Obj _35reg2961 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2962 = PRIM_CAR(_35reg2961);
Obj _35reg2963 = PRIM_CDR(_35reg2962);
Obj _35reg2964 = PRIM_CDR(_35reg2963);
Obj _35reg2965 = PRIM_CDR(_35reg2964);
Obj _35reg2966 = PRIM_EQ(Nil, _35reg2965);
if (True == _35reg2966) {
Obj _35reg2967 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2968 = PRIM_CDR(_35reg2967);
Obj _35reg2969 = PRIM_EQ(Nil, _35reg2968);
if (True == _35reg2969) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc2216 = makeNative(21, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg2892 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2892) {
Obj _35reg2893 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2894 = PRIM_EQ(symcons_63, _35reg2893);
if (True == _35reg2894) {
Obj _35reg2895 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2896 = PRIM_ISCONS(_35reg2895);
if (True == _35reg2896) {
Obj _35reg2897 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2898 = PRIM_CAR(_35reg2897);
Obj _35reg2899 = PRIM_ISCONS(_35reg2898);
if (True == _35reg2899) {
Obj _35reg2900 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2901 = PRIM_CAR(_35reg2900);
Obj _35reg2902 = PRIM_CAR(_35reg2901);
Obj _35reg2903 = PRIM_EQ(symcons, _35reg2902);
if (True == _35reg2903) {
Obj _35reg2904 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2905 = PRIM_CAR(_35reg2904);
Obj _35reg2906 = PRIM_CDR(_35reg2905);
Obj _35reg2907 = PRIM_ISCONS(_35reg2906);
if (True == _35reg2907) {
Obj _35reg2908 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2909 = PRIM_CAR(_35reg2908);
Obj _35reg2910 = PRIM_CDR(_35reg2909);
Obj _35reg2911 = PRIM_CAR(_35reg2910);
Obj __ = _35reg2911;
Obj _35reg2912 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2913 = PRIM_CAR(_35reg2912);
Obj _35reg2914 = PRIM_CDR(_35reg2913);
Obj _35reg2915 = PRIM_CDR(_35reg2914);
Obj _35reg2916 = PRIM_ISCONS(_35reg2915);
if (True == _35reg2916) {
Obj _35reg2917 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2918 = PRIM_CAR(_35reg2917);
Obj _35reg2919 = PRIM_CDR(_35reg2918);
Obj _35reg2920 = PRIM_CDR(_35reg2919);
Obj _35reg2921 = PRIM_CAR(_35reg2920);
__ = _35reg2921;
Obj _35reg2922 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2923 = PRIM_CAR(_35reg2922);
Obj _35reg2924 = PRIM_CDR(_35reg2923);
Obj _35reg2925 = PRIM_CDR(_35reg2924);
Obj _35reg2926 = PRIM_CDR(_35reg2925);
Obj _35reg2927 = PRIM_EQ(Nil, _35reg2926);
if (True == _35reg2927) {
Obj _35reg2928 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2929 = PRIM_CDR(_35reg2928);
Obj _35reg2930 = PRIM_EQ(Nil, _35reg2929);
if (True == _35reg2930) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2216;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2216;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2216;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2216;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2216;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2216;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2216;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2216;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2216;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj _35cc2217 = makeNative(22, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg2873 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2873) {
Obj _35reg2874 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2875 = PRIM_EQ(symand, _35reg2874);
if (True == _35reg2875) {
Obj _35reg2876 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2877 = PRIM_ISCONS(_35reg2876);
if (True == _35reg2877) {
Obj _35reg2878 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2879 = PRIM_CAR(_35reg2878);
Obj _35reg2880 = PRIM_EQ(True, _35reg2879);
if (True == _35reg2880) {
Obj _35reg2881 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2882 = PRIM_CDR(_35reg2881);
Obj _35reg2883 = PRIM_ISCONS(_35reg2882);
if (True == _35reg2883) {
Obj _35reg2884 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2885 = PRIM_CDR(_35reg2884);
Obj _35reg2886 = PRIM_CAR(_35reg2885);
Obj _35reg2887 = PRIM_EQ(True, _35reg2886);
if (True == _35reg2887) {
Obj _35reg2888 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2889 = PRIM_CDR(_35reg2888);
Obj _35reg2890 = PRIM_CDR(_35reg2889);
Obj _35reg2891 = PRIM_EQ(Nil, _35reg2890);
if (True == _35reg2891) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2217;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2217;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2217;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2217;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2217;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2217;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2217;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35cc2218 = makeNative(23, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg2862 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2862) {
Obj _35reg2863 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2864 = PRIM_EQ(symnull_63, _35reg2863);
if (True == _35reg2864) {
Obj _35reg2865 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2866 = PRIM_ISCONS(_35reg2865);
if (True == _35reg2866) {
Obj _35reg2867 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2868 = PRIM_CAR(_35reg2867);
Obj _35reg2869 = PRIM_EQ(Nil, _35reg2868);
if (True == _35reg2869) {
Obj _35reg2870 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2871 = PRIM_CDR(_35reg2870);
Obj _35reg2872 = PRIM_EQ(Nil, _35reg2871);
if (True == _35reg2872) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2218;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2218;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2218;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2218;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2218;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35cc2219 = makeNative(24, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg2823 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2823) {
Obj _35reg2824 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2825 = PRIM_EQ(symnull_63, _35reg2824);
if (True == _35reg2825) {
Obj _35reg2826 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2827 = PRIM_ISCONS(_35reg2826);
if (True == _35reg2827) {
Obj _35reg2828 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2829 = PRIM_CAR(_35reg2828);
Obj _35reg2830 = PRIM_ISCONS(_35reg2829);
if (True == _35reg2830) {
Obj _35reg2831 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2832 = PRIM_CAR(_35reg2831);
Obj _35reg2833 = PRIM_CAR(_35reg2832);
Obj _35reg2834 = PRIM_EQ(symcons, _35reg2833);
if (True == _35reg2834) {
Obj _35reg2835 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2836 = PRIM_CAR(_35reg2835);
Obj _35reg2837 = PRIM_CDR(_35reg2836);
Obj _35reg2838 = PRIM_ISCONS(_35reg2837);
if (True == _35reg2838) {
Obj _35reg2839 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2840 = PRIM_CAR(_35reg2839);
Obj _35reg2841 = PRIM_CDR(_35reg2840);
Obj _35reg2842 = PRIM_CAR(_35reg2841);
Obj __ = _35reg2842;
Obj _35reg2843 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2844 = PRIM_CAR(_35reg2843);
Obj _35reg2845 = PRIM_CDR(_35reg2844);
Obj _35reg2846 = PRIM_CDR(_35reg2845);
Obj _35reg2847 = PRIM_ISCONS(_35reg2846);
if (True == _35reg2847) {
Obj _35reg2848 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2849 = PRIM_CAR(_35reg2848);
Obj _35reg2850 = PRIM_CDR(_35reg2849);
Obj _35reg2851 = PRIM_CDR(_35reg2850);
Obj _35reg2852 = PRIM_CAR(_35reg2851);
__ = _35reg2852;
Obj _35reg2853 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2854 = PRIM_CAR(_35reg2853);
Obj _35reg2855 = PRIM_CDR(_35reg2854);
Obj _35reg2856 = PRIM_CDR(_35reg2855);
Obj _35reg2857 = PRIM_CDR(_35reg2856);
Obj _35reg2858 = PRIM_EQ(Nil, _35reg2857);
if (True == _35reg2858) {
Obj _35reg2859 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2860 = PRIM_CDR(_35reg2859);
Obj _35reg2861 = PRIM_EQ(Nil, _35reg2860);
if (True == _35reg2861) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _35cc2220 = makeNative(25, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg2812 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2812) {
Obj _35reg2813 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2814 = PRIM_EQ(symnot, _35reg2813);
if (True == _35reg2814) {
Obj _35reg2815 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2816 = PRIM_ISCONS(_35reg2815);
if (True == _35reg2816) {
Obj _35reg2817 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2818 = PRIM_CAR(_35reg2817);
Obj _35reg2819 = PRIM_EQ(True, _35reg2818);
if (True == _35reg2819) {
Obj _35reg2820 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2821 = PRIM_CDR(_35reg2820);
Obj _35reg2822 = PRIM_EQ(Nil, _35reg2821);
if (True == _35reg2822) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35cc2221 = makeNative(26, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg2801 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2801) {
Obj _35reg2802 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2803 = PRIM_EQ(symnot, _35reg2802);
if (True == _35reg2803) {
Obj _35reg2804 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2805 = PRIM_ISCONS(_35reg2804);
if (True == _35reg2805) {
Obj _35reg2806 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2807 = PRIM_CAR(_35reg2806);
Obj _35reg2808 = PRIM_EQ(False, _35reg2807);
if (True == _35reg2808) {
Obj _35reg2809 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2810 = PRIM_CDR(_35reg2809);
Obj _35reg2811 = PRIM_EQ(Nil, _35reg2810);
if (True == _35reg2811) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2221;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2221;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2221;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2221;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2221;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35cc2222 = makeNative(27, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg2774 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2774) {
Obj _35reg2775 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2776 = PRIM_EQ(symif, _35reg2775);
if (True == _35reg2776) {
Obj _35reg2777 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2778 = PRIM_ISCONS(_35reg2777);
if (True == _35reg2778) {
Obj _35reg2779 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2780 = PRIM_CAR(_35reg2779);
Obj _35reg2781 = PRIM_EQ(True, _35reg2780);
if (True == _35reg2781) {
Obj _35reg2782 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2783 = PRIM_CDR(_35reg2782);
Obj _35reg2784 = PRIM_ISCONS(_35reg2783);
if (True == _35reg2784) {
Obj _35reg2785 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2786 = PRIM_CDR(_35reg2785);
Obj _35reg2787 = PRIM_CAR(_35reg2786);
Obj y = _35reg2787;
Obj _35reg2788 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2789 = PRIM_CDR(_35reg2788);
Obj _35reg2790 = PRIM_CDR(_35reg2789);
Obj _35reg2791 = PRIM_ISCONS(_35reg2790);
if (True == _35reg2791) {
Obj _35reg2792 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2793 = PRIM_CDR(_35reg2792);
Obj _35reg2794 = PRIM_CDR(_35reg2793);
Obj _35reg2795 = PRIM_CAR(_35reg2794);
Obj z = _35reg2795;
Obj _35reg2796 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2797 = PRIM_CDR(_35reg2796);
Obj _35reg2798 = PRIM_CDR(_35reg2797);
Obj _35reg2799 = PRIM_CDR(_35reg2798);
Obj _35reg2800 = PRIM_EQ(Nil, _35reg2799);
if (True == _35reg2800) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35cc2223 = makeNative(28, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg2747 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2747) {
Obj _35reg2748 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2749 = PRIM_EQ(symif, _35reg2748);
if (True == _35reg2749) {
Obj _35reg2750 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2751 = PRIM_ISCONS(_35reg2750);
if (True == _35reg2751) {
Obj _35reg2752 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2753 = PRIM_CAR(_35reg2752);
Obj _35reg2754 = PRIM_EQ(False, _35reg2753);
if (True == _35reg2754) {
Obj _35reg2755 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2756 = PRIM_CDR(_35reg2755);
Obj _35reg2757 = PRIM_ISCONS(_35reg2756);
if (True == _35reg2757) {
Obj _35reg2758 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2759 = PRIM_CDR(_35reg2758);
Obj _35reg2760 = PRIM_CAR(_35reg2759);
Obj y = _35reg2760;
Obj _35reg2761 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2762 = PRIM_CDR(_35reg2761);
Obj _35reg2763 = PRIM_CDR(_35reg2762);
Obj _35reg2764 = PRIM_ISCONS(_35reg2763);
if (True == _35reg2764) {
Obj _35reg2765 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2766 = PRIM_CDR(_35reg2765);
Obj _35reg2767 = PRIM_CDR(_35reg2766);
Obj _35reg2768 = PRIM_CAR(_35reg2767);
Obj z = _35reg2768;
Obj _35reg2769 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2770 = PRIM_CDR(_35reg2769);
Obj _35reg2771 = PRIM_CDR(_35reg2770);
Obj _35reg2772 = PRIM_CDR(_35reg2771);
Obj _35reg2773 = PRIM_EQ(Nil, _35reg2772);
if (True == _35reg2773) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35cc2224 = makeNative(29, clofun1, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj exp = __arg1;
PUSH_CONT(co, 31, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val2734 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 32, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35extract_45rules);
__arg1 = _35val2734;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val2735 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = _35val2735;
PUSH_CONT(co, 33, clofun1, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rules_45arg_45count);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _35val2736 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = _35val2736;
PUSH_CONT(co, 34, clofun1, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35gen_45paramenters);
__arg1 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _35val2737 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = _35val2737;
PUSH_CONT(co, 35, clofun1, 2, body, args);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _35val2738 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2739 = makeCons(symlist, args);
Obj _35reg2740 = makeCons(_35reg2739, body);
Obj _35reg2741 = makeCons(symmatch, _35reg2740);
Obj _35reg2742 = makeCons(_35reg2741, Nil);
Obj _35reg2743 = makeCons(args, _35reg2742);
Obj _35reg2744 = makeCons(_35val2738, _35reg2743);
Obj _35reg2745 = makeCons(symdefun, _35reg2744);
__nargs = 2;
__arg1 = _35reg2745;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj n = __arg1;
Obj _35reg2728 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == _35reg2728) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2729 = primGenSym(symp);
Obj _35reg2730 = PRIM_SUB(n, MAKE_NUMBER(1));
PUSH_CONT(co, 37, clofun1, 1, _35reg2729);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35gen_45paramenters);
__arg1 = _35reg2730;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _35val2731 = __arg1;
Obj _35reg2729= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2732 = makeCons(_35reg2729, _35val2731);
__nargs = 2;
__arg1 = _35reg2732;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
Obj rules = __arg1;
PUSH_CONT(co, 39, clofun1, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rules_45patterns);
__arg1 = Nil;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _35val2717 = __arg1;
Obj pats = _35val2717;
Obj len = makeNative(44, clofun1, 1, 0);
PUSH_CONT(co, 40, clofun1, 0);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = len;
__arg2 = pats;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _35val2719 = __arg1;
Obj counts = _35val2719;
Obj _35reg2720 = PRIM_CAR(counts);
Obj n = _35reg2720;
Obj dif = makeNative(43, clofun1, 1, 1, n);
Obj _35reg2723 = PRIM_CDR(counts);
PUSH_CONT(co, 41, clofun1, 1, n);
__nargs = 3;
__arg0 = globalRef(symfilter);
__arg1 = dif;
__arg2 = _35reg2723;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val2724 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 42, clofun1, 1, n);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = _35val2724;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val2725 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2726 = primNot(_35val2725);
if (True == _35reg2726) {
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("inconsistent func rule args count");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = n;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label43:
{
Obj x = __arg1;
Obj _35reg2721 = PRIM_EQ(closureRef(co, 0), x);
Obj _35reg2722 = primNot(_35reg2721);
__nargs = 2;
__arg1 = _35reg2722;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label44:
{
Obj x = __arg1;
Obj _35reg2718 = PRIM_CDR(x);
__nargs = 2;
__arg0 = globalRef(symlength);
__arg1 = _35reg2718;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj _35reg2711 = PRIM_EQ(l1, Nil);
if (True == _35reg2711) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2712 = PRIM_CAR(l1);
Obj _35reg2713 = PRIM_CDR(l1);
PUSH_CONT(co, 46, clofun1, 1, _35reg2712);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = _35reg2713;
__arg2 = l2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _35val2714 = __arg1;
Obj _35reg2712= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2715 = makeCons(_35reg2712, _35val2714);
__nargs = 2;
__arg1 = _35reg2715;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label47:
{
Obj fn = __arg1;
Obj l = __arg2;
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = Nil;
__arg2 = fn;
__arg3 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj res = __arg1;
Obj fn = __arg2;
Obj l = __arg3;
Obj _35reg2702 = PRIM_ISCONS(l);
if (True == _35reg2702) {
Obj _35reg2703 = PRIM_CAR(l);
PUSH_CONT(co, 49, clofun1, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = _35reg2703;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj _35val2704 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _35val2704) {
Obj _35reg2705 = PRIM_CAR(l);
Obj _35reg2706 = makeCons(_35reg2705, res);
Obj _35reg2707 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = _35reg2706;
__arg2 = fn;
__arg3 = _35reg2707;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2708 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = res;
__arg2 = fn;
__arg3 = _35reg2708;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun2(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj l = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47init_35length_45h);
__arg1 = MAKE_NUMBER(0);
__arg2 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj i = __arg1;
Obj l = __arg2;
Obj _35reg2697 = PRIM_EQ(l, Nil);
if (True == _35reg2697) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2698 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj _35reg2699 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35length_45h);
__arg1 = _35reg2698;
__arg2 = _35reg2699;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj res = __arg1;
Obj rules = __arg2;
PUSH_CONT(co, 3, clofun2, 2, res, rules);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2692 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val2692) {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2693 = PRIM_CAR(rules);
Obj _35reg2694 = makeCons(_35reg2693, res);
PUSH_CONT(co, 4, clofun2, 1, _35reg2694);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2695 = __arg1;
Obj _35reg2694= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rules_45patterns);
__arg1 = _35reg2694;
__arg2 = _35val2695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj input = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = input;
__arg2 = Nil;
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj input = __arg1;
Obj current = __arg2;
Obj result = __arg3;
Obj _35cc2209 = makeNative(7, clofun2, 0, 3, input, current, result);
Obj _35reg2689 = PRIM_EQ(Nil, input);
if (True == _35reg2689) {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = result;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2209;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35cc2210 = makeNative(9, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg2656 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2656) {
Obj _35reg2657 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2658 = PRIM_EQ(sym_61_62, _35reg2657);
if (True == _35reg2658) {
Obj _35reg2659 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2660 = PRIM_ISCONS(_35reg2659);
if (True == _35reg2660) {
Obj _35reg2661 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2662 = PRIM_CAR(_35reg2661);
Obj act = _35reg2662;
Obj _35reg2663 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2664 = PRIM_CDR(_35reg2663);
Obj _35reg2665 = PRIM_ISCONS(_35reg2664);
if (True == _35reg2665) {
Obj _35reg2666 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2667 = PRIM_CDR(_35reg2666);
Obj _35reg2668 = PRIM_CAR(_35reg2667);
Obj _35reg2669 = PRIM_EQ(symwhere, _35reg2668);
if (True == _35reg2669) {
Obj _35reg2670 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2671 = PRIM_CDR(_35reg2670);
Obj _35reg2672 = PRIM_CDR(_35reg2671);
Obj _35reg2673 = PRIM_ISCONS(_35reg2672);
if (True == _35reg2673) {
Obj _35reg2674 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2675 = PRIM_CDR(_35reg2674);
Obj _35reg2676 = PRIM_CDR(_35reg2675);
Obj _35reg2677 = PRIM_CAR(_35reg2676);
Obj pred = _35reg2677;
Obj _35reg2678 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2679 = PRIM_CDR(_35reg2678);
Obj _35reg2680 = PRIM_CDR(_35reg2679);
Obj _35reg2681 = PRIM_CDR(_35reg2680);
Obj remain = _35reg2681;
PUSH_CONT(co, 8, clofun2, 3, act, pred, remain);
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2210;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2210;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2210;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2210;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2210;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2210;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val2682 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg2683 = makeCons(symlist, _35val2682);
Obj pat = _35reg2683;
Obj _35reg2684 = makeCons(act, Nil);
Obj _35reg2685 = makeCons(pred, _35reg2684);
Obj _35reg2686 = makeCons(symwhere, _35reg2685);
Obj _35reg2687 = makeCons(pat, closureRef(co, 2));
Obj _35reg2688 = makeCons(_35reg2686, _35reg2687);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg2688;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc2211 = makeNative(11, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg2643 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2643) {
Obj _35reg2644 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2645 = PRIM_EQ(sym_61_62, _35reg2644);
if (True == _35reg2645) {
Obj _35reg2646 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2647 = PRIM_ISCONS(_35reg2646);
if (True == _35reg2647) {
Obj _35reg2648 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2649 = PRIM_CAR(_35reg2648);
Obj act = _35reg2649;
Obj _35reg2650 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2651 = PRIM_CDR(_35reg2650);
Obj remain = _35reg2651;
PUSH_CONT(co, 10, clofun2, 2, act, remain);
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2211;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2211;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2211;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2652 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2653 = makeCons(symlist, _35val2652);
Obj pat = _35reg2653;
Obj _35reg2654 = makeCons(pat, closureRef(co, 2));
Obj _35reg2655 = makeCons(act, _35reg2654);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg2655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc2212 = makeNative(12, clofun2, 0, 0);
Obj _35reg2639 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2639) {
Obj _35reg2640 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg2640;
Obj _35reg2641 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg2641;
Obj _35reg2642 = makeCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = y;
__arg2 = _35reg2642;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2212;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj exp = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45match);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj exp = __arg1;
PUSH_CONT(co, 15, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2612 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 16, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = _35val2612;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2613 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = _35val2613;
PUSH_CONT(co, 17, clofun2, 1, value);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2614 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = _35val2614;
Obj _35reg2615 = PRIM_ISCONS(value);
if (True == _35reg2615) {
Obj _35reg2616 = PRIM_CAR(value);
Obj _35reg2617 = PRIM_EQ(symcons, _35reg2616);
Obj _35reg2618 = primNot(_35reg2617);
if (True == _35reg2618) {
if (True == True) {
Obj _35reg2619 = primGenSym(symval);
Obj val = _35reg2619;
PUSH_CONT(co, 20, clofun2, 2, value, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2625 = primGenSym(symval);
Obj val = _35reg2625;
PUSH_CONT(co, 19, clofun2, 2, value, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg2631 = primGenSym(symval);
Obj val = _35reg2631;
PUSH_CONT(co, 18, clofun2, 2, value, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label18:
{
Obj _35val2632 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2633 = makeCons(_35val2632, Nil);
Obj _35reg2634 = makeCons(value, _35reg2633);
Obj _35reg2635 = makeCons(val, _35reg2634);
Obj _35reg2636 = makeCons(symlet, _35reg2635);
__nargs = 2;
__arg1 = _35reg2636;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35val2626 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2627 = makeCons(_35val2626, Nil);
Obj _35reg2628 = makeCons(value, _35reg2627);
Obj _35reg2629 = makeCons(val, _35reg2628);
Obj _35reg2630 = makeCons(symlet, _35reg2629);
__nargs = 2;
__arg1 = _35reg2630;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val2620 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2621 = makeCons(_35val2620, Nil);
Obj _35reg2622 = makeCons(value, _35reg2621);
Obj _35reg2623 = makeCons(val, _35reg2622);
Obj _35reg2624 = makeCons(symlet, _35reg2623);
__nargs = 2;
__arg1 = _35reg2624;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label21:
{
Obj value = __arg1;
Obj rules = __arg2;
PUSH_CONT(co, 22, clofun2, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _35val2560 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val2560) {
Obj _35reg2561 = makeCons(makeCString("no match-help found!"), Nil);
Obj _35reg2562 = makeCons(symerror, _35reg2561);
__nargs = 2;
__arg1 = _35reg2562;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 23, clofun2, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35val2563 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val2563) {
Obj _35reg2564 = PRIM_CDR(rules);
PUSH_CONT(co, 28, clofun2, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = _35reg2564;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj _35reg2596 = PRIM_CAR(rules);
Obj pat = _35reg2596;
Obj _35reg2597 = primGenSym(symcc);
Obj cc = _35reg2597;
PUSH_CONT(co, 24, clofun2, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35extract_45rule_45action);
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label24:
{
Obj _35val2598 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = _35val2598;
PUSH_CONT(co, 25, clofun2, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _35val2599 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 26, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = _35val2599;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _35val2600 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = _35val2600;
Obj _35reg2601 = PRIM_CDR(rules);
Obj _35reg2602 = PRIM_CDR(_35reg2601);
PUSH_CONT(co, 27, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = _35reg2602;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _35val2603 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = _35val2603;
Obj _35reg2604 = makeCons(rest, Nil);
Obj _35reg2605 = makeCons(Nil, _35reg2604);
Obj _35reg2606 = makeCons(symlambda, _35reg2605);
Obj _35reg2607 = makeCons(curr, Nil);
Obj _35reg2608 = makeCons(_35reg2606, _35reg2607);
Obj _35reg2609 = makeCons(cc, _35reg2608);
Obj _35reg2610 = makeCons(symlet, _35reg2609);
__nargs = 2;
__arg1 = _35reg2610;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj _35val2565 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val2565) {
if (True == True) {
Obj _35reg2566 = PRIM_CAR(rules);
Obj pat = _35reg2566;
Obj _35reg2567 = primGenSym(symcc);
Obj cc = _35reg2567;
PUSH_CONT(co, 33, clofun2, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35extract_45rule_45action);
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2581 = PRIM_CAR(rules);
Obj pat = _35reg2581;
Obj _35reg2582 = primGenSym(symcc);
Obj cc = _35reg2582;
PUSH_CONT(co, 29, clofun2, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35extract_45rule_45action);
__arg1 = rules;
__arg2 = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label29:
{
Obj _35val2583 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = _35val2583;
PUSH_CONT(co, 30, clofun2, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val2584 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 31, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = _35val2584;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val2585 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = _35val2585;
Obj _35reg2586 = PRIM_CDR(rules);
Obj _35reg2587 = PRIM_CDR(_35reg2586);
PUSH_CONT(co, 32, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = _35reg2587;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val2588 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = _35val2588;
Obj _35reg2589 = makeCons(rest, Nil);
Obj _35reg2590 = makeCons(Nil, _35reg2589);
Obj _35reg2591 = makeCons(symlambda, _35reg2590);
Obj _35reg2592 = makeCons(curr, Nil);
Obj _35reg2593 = makeCons(_35reg2591, _35reg2592);
Obj _35reg2594 = makeCons(cc, _35reg2593);
Obj _35reg2595 = makeCons(symlet, _35reg2594);
__nargs = 2;
__arg1 = _35reg2595;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label33:
{
Obj _35val2568 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = _35val2568;
PUSH_CONT(co, 34, clofun2, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _35val2569 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 35, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = _35val2569;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _35val2570 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = _35val2570;
Obj _35reg2571 = PRIM_CDR(rules);
Obj _35reg2572 = PRIM_CDR(_35reg2571);
PUSH_CONT(co, 36, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = _35reg2572;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35val2573 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = _35val2573;
Obj _35reg2574 = makeCons(rest, Nil);
Obj _35reg2575 = makeCons(Nil, _35reg2574);
Obj _35reg2576 = makeCons(symlambda, _35reg2575);
Obj _35reg2577 = makeCons(curr, Nil);
Obj _35reg2578 = makeCons(_35reg2576, _35reg2577);
Obj _35reg2579 = makeCons(cc, _35reg2578);
Obj _35reg2580 = makeCons(symlet, _35reg2579);
__nargs = 2;
__arg1 = _35reg2580;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj _35reg2533 = PRIM_CDR(rules);
Obj _35reg2534 = PRIM_CAR(_35reg2533);
Obj action = _35reg2534;
PUSH_CONT(co, 38, clofun2, 2, cc, action);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _35val2535 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val2535) {
Obj _35reg2536 = PRIM_CAR(action);
Obj _35reg2537 = PRIM_EQ(_35reg2536, symwhere);
if (True == _35reg2537) {
if (True == True) {
PUSH_CONT(co, 43, clofun2, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
if (True == False) {
PUSH_CONT(co, 41, clofun2, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
} else {
if (True == False) {
PUSH_CONT(co, 39, clofun2, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label39:
{
Obj _35val2552 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 40, clofun2, 2, cc, _35val2552);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _35val2553 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35val2552= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2554 = makeCons(cc, Nil);
Obj _35reg2555 = makeCons(_35reg2554, Nil);
Obj _35reg2556 = makeCons(_35val2553, _35reg2555);
Obj _35reg2557 = makeCons(_35val2552, _35reg2556);
Obj _35reg2558 = makeCons(symif, _35reg2557);
__nargs = 2;
__arg1 = _35reg2558;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj _35val2545 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 42, clofun2, 2, cc, _35val2545);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val2546 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35val2545= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2547 = makeCons(cc, Nil);
Obj _35reg2548 = makeCons(_35reg2547, Nil);
Obj _35reg2549 = makeCons(_35val2546, _35reg2548);
Obj _35reg2550 = makeCons(_35val2545, _35reg2549);
Obj _35reg2551 = makeCons(symif, _35reg2550);
__nargs = 2;
__arg1 = _35reg2551;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj _35val2538 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 44, clofun2, 2, cc, _35val2538);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val2539 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35val2538= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2540 = makeCons(cc, Nil);
Obj _35reg2541 = makeCons(_35reg2540, Nil);
Obj _35reg2542 = makeCons(_35val2539, _35reg2541);
Obj _35reg2543 = makeCons(_35val2538, _35reg2542);
Obj _35reg2544 = makeCons(symif, _35reg2543);
__nargs = 2;
__arg1 = _35reg2544;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
Obj literal_63 = makeNative(49, clofun2, 1, 0);
PUSH_CONT(co, 46, clofun2, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = literal_63;
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _35val2503 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _35val2503) {
Obj _35reg2504 = PRIM_EQ(pat, expr);
if (True == _35reg2504) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2505 = makeCons(expr, Nil);
Obj _35reg2506 = makeCons(pat, _35reg2505);
Obj _35reg2507 = makeCons(sym_61, _35reg2506);
Obj _35reg2508 = makeCons(cc, Nil);
Obj _35reg2509 = makeCons(_35reg2508, Nil);
Obj _35reg2510 = makeCons(body, _35reg2509);
Obj _35reg2511 = makeCons(_35reg2507, _35reg2510);
Obj _35reg2512 = makeCons(symif, _35reg2511);
__nargs = 2;
__arg1 = _35reg2512;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj _35reg2513 = primIsSymbol(pat);
if (True == _35reg2513) {
Obj _35reg2514 = makeCons(body, Nil);
Obj _35reg2515 = makeCons(expr, _35reg2514);
Obj _35reg2516 = makeCons(pat, _35reg2515);
Obj _35reg2517 = makeCons(symlet, _35reg2516);
__nargs = 2;
__arg1 = _35reg2517;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 47, clofun2, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label47:
{
Obj _35val2518 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _35val2518) {
Obj _35reg2519 = PRIM_CAR(pat);
Obj _35reg2520 = PRIM_EQ(_35reg2519, symquote);
if (True == _35reg2520) {
Obj _35reg2521 = makeCons(expr, Nil);
Obj _35reg2522 = makeCons(pat, _35reg2521);
Obj _35reg2523 = makeCons(sym_61, _35reg2522);
Obj _35reg2524 = makeCons(cc, Nil);
Obj _35reg2525 = makeCons(_35reg2524, Nil);
Obj _35reg2526 = makeCons(body, _35reg2525);
Obj _35reg2527 = makeCons(_35reg2523, _35reg2526);
Obj _35reg2528 = makeCons(symif, _35reg2527);
__nargs = 2;
__arg1 = _35reg2528;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2529 = PRIM_CAR(pat);
Obj _35reg2530 = PRIM_EQ(_35reg2529, symcons);
if (True == _35reg2530) {
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match_45cons_45expander);
__arg1 = pat;
__arg2 = expr;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
PUSH_CONT(co, 48, clofun2, 0);
__nargs = 3;
__arg0 = globalRef(symstr);
__arg1 = makeCString("match fail ");
__arg2 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj _35val2531 = __arg1;
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = _35val2531;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x = __arg1;
PUSH_CONT(co, 0, clofun3, 1, x);
__nargs = 2;
__arg0 = globalRef(symatom_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun3(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2500 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _35val2500) {
Obj _35reg2501 = primIsSymbol(x);
Obj _35reg2502 = primNot(_35reg2501);
if (True == _35reg2502) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label1:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
PUSH_CONT(co, 2, clofun3, 4, pat, expr, body, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2446 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = _35val2446;
PUSH_CONT(co, 3, clofun3, 4, expr, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2447 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = _35val2447;
Obj _35reg2448 = PRIM_ISCONS(expr);
if (True == _35reg2448) {
Obj _35reg2449 = PRIM_CAR(expr);
Obj _35reg2450 = PRIM_EQ(_35reg2449, symcons);
if (True == _35reg2450) {
if (True == True) {
PUSH_CONT(co, 16, clofun3, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2454 = makeCons(expr, Nil);
Obj _35reg2455 = makeCons(symcons_63, _35reg2454);
Obj _35reg2456 = makeCons(expr, Nil);
Obj _35reg2457 = makeCons(symcar, _35reg2456);
Obj _35reg2458 = makeCons(expr, Nil);
Obj _35reg2459 = makeCons(symcdr, _35reg2458);
PUSH_CONT(co, 14, clofun3, 4, x, _35reg2457, cc, _35reg2455);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = _35reg2459;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
PUSH_CONT(co, 11, clofun3, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2470 = makeCons(expr, Nil);
Obj _35reg2471 = makeCons(symcons_63, _35reg2470);
Obj _35reg2472 = makeCons(expr, Nil);
Obj _35reg2473 = makeCons(symcar, _35reg2472);
Obj _35reg2474 = makeCons(expr, Nil);
Obj _35reg2475 = makeCons(symcdr, _35reg2474);
PUSH_CONT(co, 9, clofun3, 4, x, _35reg2473, cc, _35reg2471);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = _35reg2475;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
PUSH_CONT(co, 6, clofun3, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2486 = makeCons(expr, Nil);
Obj _35reg2487 = makeCons(symcons_63, _35reg2486);
Obj _35reg2488 = makeCons(expr, Nil);
Obj _35reg2489 = makeCons(symcar, _35reg2488);
Obj _35reg2490 = makeCons(expr, Nil);
Obj _35reg2491 = makeCons(symcdr, _35reg2490);
PUSH_CONT(co, 4, clofun3, 4, x, _35reg2489, cc, _35reg2487);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = _35reg2491;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label4:
{
Obj _35val2492 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2489= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg2487= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 5, clofun3, 2, cc, _35reg2487);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = _35reg2489;
__arg3 = _35val2492;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2493 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2487= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2494 = makeCons(cc, Nil);
Obj _35reg2495 = makeCons(_35reg2494, Nil);
Obj _35reg2496 = makeCons(_35val2493, _35reg2495);
Obj _35reg2497 = makeCons(_35reg2487, _35reg2496);
Obj _35reg2498 = makeCons(symif, _35reg2497);
__nargs = 2;
__arg1 = _35reg2498;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val2483 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = _35val2483;
PUSH_CONT(co, 7, clofun3, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2484 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = _35val2484;
PUSH_CONT(co, 8, clofun3, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2485 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = _35val2485;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2476 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2473= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg2471= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 10, clofun3, 2, cc, _35reg2471);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = _35reg2473;
__arg3 = _35val2476;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2477 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2471= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2478 = makeCons(cc, Nil);
Obj _35reg2479 = makeCons(_35reg2478, Nil);
Obj _35reg2480 = makeCons(_35val2477, _35reg2479);
Obj _35reg2481 = makeCons(_35reg2471, _35reg2480);
Obj _35reg2482 = makeCons(symif, _35reg2481);
__nargs = 2;
__arg1 = _35reg2482;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val2467 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = _35val2467;
PUSH_CONT(co, 12, clofun3, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2468 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = _35val2468;
PUSH_CONT(co, 13, clofun3, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2469 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = _35val2469;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2460 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2457= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg2455= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 15, clofun3, 2, cc, _35reg2455);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = _35reg2457;
__arg3 = _35val2460;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2461 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2455= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2462 = makeCons(cc, Nil);
Obj _35reg2463 = makeCons(_35reg2462, Nil);
Obj _35reg2464 = makeCons(_35val2461, _35reg2463);
Obj _35reg2465 = makeCons(_35reg2455, _35reg2464);
Obj _35reg2466 = makeCons(symif, _35reg2465);
__nargs = 2;
__arg1 = _35reg2466;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val2451 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = _35val2451;
PUSH_CONT(co, 17, clofun3, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2452 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = _35val2452;
PUSH_CONT(co, 18, clofun3, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2453 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = _35val2453;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj exp = __arg1;
Obj _35reg2444 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = _35reg2444;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj pat = __arg1;
Obj _35reg2434 = PRIM_CDR(pat);
PUSH_CONT(co, 21, clofun3, 1, pat);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = _35reg2434;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _35val2435 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _35val2435) {
Obj _35reg2436 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = _35reg2436;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2437 = PRIM_CAR(pat);
Obj _35reg2438 = PRIM_CDR(pat);
PUSH_CONT(co, 22, clofun3, 1, _35reg2437);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = _35reg2438;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35val2439 = __arg1;
Obj _35reg2437= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2440 = makeCons(_35val2439, Nil);
Obj _35reg2441 = makeCons(_35reg2437, _35reg2440);
Obj _35reg2442 = makeCons(symcons, _35reg2441);
__nargs = 2;
__arg1 = _35reg2442;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x = __arg1;
Obj _35reg2431 = PRIM_EQ(x, True);
if (True == _35reg2431) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2432 = PRIM_EQ(x, False);
if (True == _35reg2432) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label24:
{
Obj exp = __arg1;
Obj _35reg2429 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = _35reg2429;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj l = __arg1;
Obj _35reg2417 = PRIM_EQ(Nil, l);
if (True == _35reg2417) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2418 = PRIM_CAR(l);
Obj _35reg2419 = PRIM_EQ(_35reg2418, False);
if (True == _35reg2419) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2420 = PRIM_CDR(l);
PUSH_CONT(co, 26, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = _35reg2420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label26:
{
Obj _35val2421 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = _35val2421;
Obj _35reg2422 = PRIM_EQ(more, False);
if (True == _35reg2422) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2423 = PRIM_CAR(l);
Obj _35reg2424 = makeCons(False, Nil);
Obj _35reg2425 = makeCons(more, _35reg2424);
Obj _35reg2426 = makeCons(_35reg2423, _35reg2425);
Obj _35reg2427 = makeCons(symif, _35reg2426);
__nargs = 2;
__arg1 = _35reg2427;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label27:
{
Obj exp = __arg1;
Obj _35reg2415 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = _35reg2415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj l = __arg1;
Obj _35reg2403 = PRIM_EQ(l, Nil);
if (True == _35reg2403) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2404 = PRIM_CAR(l);
Obj _35reg2405 = PRIM_EQ(_35reg2404, True);
if (True == _35reg2405) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2406 = PRIM_CDR(l);
PUSH_CONT(co, 29, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = _35reg2406;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label29:
{
Obj _35val2407 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = _35val2407;
Obj _35reg2408 = PRIM_EQ(more, True);
if (True == _35reg2408) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2409 = PRIM_CAR(l);
Obj _35reg2410 = makeCons(more, Nil);
Obj _35reg2411 = makeCons(True, _35reg2410);
Obj _35reg2412 = makeCons(_35reg2409, _35reg2411);
Obj _35reg2413 = makeCons(symif, _35reg2412);
__nargs = 2;
__arg1 = _35reg2413;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label30:
{
Obj exp = __arg1;
Obj _35reg2389 = PRIM_CDR(exp);
Obj _35reg2390 = PRIM_EQ(Nil, _35reg2389);
if (True == _35reg2390) {
Obj _35reg2391 = makeCons(makeCString("no cond match"), Nil);
Obj _35reg2392 = makeCons(symerror, _35reg2391);
__nargs = 2;
__arg1 = _35reg2392;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 31, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj _35val2393 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = _35val2393;
Obj _35reg2394 = PRIM_CAR(curr);
PUSH_CONT(co, 32, clofun3, 2, exp, _35reg2394);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = curr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val2395 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2394= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 33, clofun3, 2, _35val2395, _35reg2394);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _35val2396 = __arg1;
Obj _35val2395= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2394= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2397 = makeCons(symcond, _35val2396);
Obj _35reg2398 = makeCons(_35reg2397, Nil);
Obj _35reg2399 = makeCons(_35val2395, _35reg2398);
Obj _35reg2400 = makeCons(_35reg2394, _35reg2399);
Obj _35reg2401 = makeCons(symif, _35reg2400);
__nargs = 2;
__arg1 = _35reg2401;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj exp = __arg1;
Obj _35reg2387 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = _35reg2387;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj exp = __arg1;
Obj _35reg2375 = PRIM_CDR(exp);
PUSH_CONT(co, 36, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = _35reg2375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35val2376 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _35val2376) {
Obj _35reg2377 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = _35reg2377;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2378 = PRIM_CAR(exp);
PUSH_CONT(co, 37, clofun3, 2, exp, _35reg2378);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _35val2379 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2378= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 38, clofun3, 2, _35val2379, _35reg2378);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _35val2380 = __arg1;
Obj _35val2379= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2378= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 39, clofun3, 2, _35val2379, _35reg2378);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = _35val2380;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _35val2381 = __arg1;
Obj _35val2379= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2378= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2382 = makeCons(_35val2381, Nil);
Obj _35reg2383 = makeCons(_35val2379, _35reg2382);
Obj _35reg2384 = makeCons(_35reg2378, _35reg2383);
Obj _35reg2385 = makeCons(symlet, _35reg2384);
__nargs = 2;
__arg1 = _35reg2385;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj x = __arg1;
Obj _35reg2372 = PRIM_ISCONS(x);
Obj _35reg2373 = primNot(_35reg2372);
__nargs = 2;
__arg1 = _35reg2373;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj x = __arg1;
Obj l = __arg2;
Obj _35reg2367 = PRIM_ISCONS(l);
if (True == _35reg2367) {
Obj _35reg2368 = PRIM_CAR(l);
Obj _35reg2369 = PRIM_EQ(_35reg2368, x);
if (True == _35reg2369) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2370 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symelem_63);
__arg1 = x;
__arg2 = _35reg2370;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label42:
{
Obj exp = __arg1;
PUSH_CONT(co, 43, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _35val2357 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 44, clofun3, 2, exp, _35val2357);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val2358 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35val2357= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 45, clofun3, 2, _35val2358, _35val2357);
__nargs = 2;
__arg0 = globalRef(symcadddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35val2359 = __arg1;
Obj _35val2358= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35val2357= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2360 = makeCons(_35val2359, Nil);
Obj _35reg2361 = makeCons(_35val2358, _35reg2360);
Obj _35reg2362 = makeCons(symlambda, _35reg2361);
Obj _35reg2363 = makeCons(_35reg2362, Nil);
Obj _35reg2364 = makeCons(_35val2357, _35reg2363);
Obj _35reg2365 = makeCons(symdef, _35reg2364);
__nargs = 2;
__arg1 = _35reg2365;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label46:
{
Obj exp = __arg1;
Obj _35reg2355 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = _35reg2355;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj exp = __arg1;
PUSH_CONT(co, 48, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35val2343 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2344 = makeCons(_35val2343, Nil);
Obj _35reg2345 = makeCons(symquote, _35reg2344);
PUSH_CONT(co, 49, clofun3, 2, exp, _35reg2345);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35val2346 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2345= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 0, clofun4, 2, _35val2346, _35reg2345);
__nargs = 2;
__arg0 = globalRef(symcdddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun4(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2347 = __arg1;
Obj _35val2346= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2345= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg2348 = makeCons(_35val2346, _35val2347);
Obj _35reg2349 = makeCons(symlambda, _35reg2348);
Obj _35reg2350 = makeCons(_35reg2349, Nil);
Obj _35reg2351 = makeCons(_35reg2345, _35reg2350);
Obj _35reg2352 = makeCons(symcora_47init_35add_45to_45_42macros_42, _35reg2351);
__nargs = 2;
__arg1 = _35reg2352;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj exp = __arg1;
Obj _35reg2325 = PRIM_ISCONS(exp);
if (True == _35reg2325) {
Obj _35reg2326 = PRIM_CAR(exp);
Obj _35reg2327 = PRIM_EQ(_35reg2326, globalRef(sym_42protect_45symbol_42));
if (True == _35reg2327) {
Obj _35reg2328 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = _35reg2328;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2329 = PRIM_CAR(exp);
Obj _35reg2330 = PRIM_EQ(_35reg2329, symlambda);
if (True == _35reg2330) {
PUSH_CONT(co, 4, clofun4, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2337 = PRIM_CAR(exp);
Obj _35reg2338 = PRIM_EQ(_35reg2337, symquote);
if (True == _35reg2338) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 2, clofun4, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand1);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label2:
{
Obj _35val2340 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(3, clofun4, 1, 1, exp);
__arg1 = _35val2340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp1 = __arg1;
Obj _35reg2339 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == _35reg2339) {
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35macroexpand_45boot);
__arg2 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2331 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 5, clofun4, 1, _35val2331);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2332 = __arg1;
Obj _35val2331= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 6, clofun4, 1, _35val2331);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = _35val2332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2333 = __arg1;
Obj _35val2331= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2334 = makeCons(_35val2333, Nil);
Obj _35reg2335 = makeCons(_35val2331, _35reg2334);
Obj _35reg2336 = makeCons(symlambda, _35reg2335);
__nargs = 2;
__arg1 = _35reg2336;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = exp;
__arg2 = globalRef(sym_42macros_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
Obj macros = __arg2;
Obj _35reg2311 = PRIM_EQ(Nil, macros);
if (True == _35reg2311) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2322 = PRIM_CAR(macros);
__nargs = 2;
__arg0 = makeNative(9, clofun4, 1, 2, exp, macros);
__arg1 = _35reg2322;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj item = __arg1;
Obj _35reg2312 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2312) {
Obj _35reg2313 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2314 = PRIM_CAR(item);
Obj _35reg2315 = PRIM_EQ(_35reg2313, _35reg2314);
if (True == _35reg2315) {
if (True == True) {
Obj _35reg2316 = PRIM_CDR(item);
__nargs = 2;
__arg0 = _35reg2316;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2317 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = _35reg2317;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2318 = PRIM_CDR(item);
__nargs = 2;
__arg0 = _35reg2318;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2319 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = _35reg2319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg2320 = PRIM_CDR(item);
__nargs = 2;
__arg0 = _35reg2320;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2321 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = _35reg2321;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label10:
{
Obj n = __arg1;
Obj v = __arg2;
Obj _35reg2307 = makeCons(n, v);
Obj _35reg2308 = makeCons(_35reg2307, globalRef(sym_42macros_42));
Obj _35reg2309 = primSet(co, sym_42macros_42, _35reg2308);
__nargs = 2;
__arg1 = _35reg2309;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj f = __arg1;
Obj l = __arg2;
__nargs = 4;
__arg0 = globalRef(symmap_45h);
__arg1 = Nil;
__arg2 = f;
__arg3 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj res = __arg1;
Obj f = __arg2;
Obj l = __arg3;
Obj _35reg2297 = PRIM_ISCONS(l);
if (True == _35reg2297) {
Obj _35reg2298 = PRIM_CAR(l);
PUSH_CONT(co, 13, clofun4, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = _35reg2298;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val2299 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg2300 = makeCons(_35val2299, res);
Obj _35reg2301 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symmap_45h);
__arg1 = _35reg2300;
__arg2 = f;
__arg3 = _35reg2301;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj res = __arg1;
Obj l = __arg2;
Obj _35reg2290 = PRIM_ISCONS(l);
if (True == _35reg2290) {
Obj _35reg2291 = PRIM_CAR(l);
Obj _35reg2292 = makeCons(_35reg2291, res);
Obj _35reg2293 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35reverse_45h);
__arg1 = _35reg2292;
__arg2 = _35reg2293;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label15:
{
Obj x = __arg1;
Obj _35reg2288 = PRIM_ISCONS(x);
__nargs = 2;
__arg1 = _35reg2288;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj exp = __arg1;
Obj _35reg2280 = PRIM_ISCONS(exp);
if (True == _35reg2280) {
Obj _35reg2281 = PRIM_CAR(exp);
Obj _35reg2282 = PRIM_CDR(exp);
PUSH_CONT(co, 17, clofun4, 1, _35reg2281);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = _35reg2282;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label17:
{
Obj _35val2283 = __arg1;
Obj _35reg2281= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg2284 = makeCons(_35val2283, Nil);
Obj _35reg2285 = makeCons(_35reg2281, _35reg2284);
Obj _35reg2286 = makeCons(symcons, _35reg2285);
__nargs = 2;
__arg1 = _35reg2286;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj x = __arg1;
Obj _35reg2276 = PRIM_CDR(x);
Obj _35reg2277 = PRIM_CDR(_35reg2276);
Obj _35reg2278 = PRIM_CDR(_35reg2277);
__nargs = 2;
__arg1 = _35reg2278;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj x = __arg1;
Obj _35reg2271 = PRIM_CDR(x);
Obj _35reg2272 = PRIM_CDR(_35reg2271);
Obj _35reg2273 = PRIM_CDR(_35reg2272);
Obj _35reg2274 = PRIM_CAR(_35reg2273);
__nargs = 2;
__arg1 = _35reg2274;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj x = __arg1;
Obj _35reg2267 = PRIM_CDR(x);
Obj _35reg2268 = PRIM_CDR(_35reg2267);
Obj _35reg2269 = PRIM_CAR(_35reg2268);
__nargs = 2;
__arg1 = _35reg2269;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label21:
{
Obj x = __arg1;
Obj _35reg2264 = PRIM_CDR(x);
Obj _35reg2265 = PRIM_CDR(_35reg2264);
__nargs = 2;
__arg1 = _35reg2265;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj x = __arg1;
Obj _35reg2261 = PRIM_CAR(x);
Obj _35reg2262 = PRIM_CDR(_35reg2261);
__nargs = 2;
__arg1 = _35reg2262;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x = __arg1;
Obj _35reg2258 = PRIM_CAR(x);
Obj _35reg2259 = PRIM_CAR(_35reg2258);
__nargs = 2;
__arg1 = _35reg2259;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj x = __arg1;
Obj _35reg2255 = PRIM_CDR(x);
Obj _35reg2256 = PRIM_CAR(_35reg2255);
__nargs = 2;
__arg1 = _35reg2256;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x = __arg1;
Obj _35reg2253 = PRIM_EQ(x, Nil);
__nargs = 2;
__arg1 = _35reg2253;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

