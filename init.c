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
Obj _35reg372 = primSet(co, symnull_63, makeNative(25, clofun4, 1, 0));
Obj _35reg375 = primSet(co, symcadr, makeNative(24, clofun4, 1, 0));
Obj _35reg378 = primSet(co, symcaar, makeNative(23, clofun4, 1, 0));
Obj _35reg381 = primSet(co, symcdar, makeNative(22, clofun4, 1, 0));
Obj _35reg384 = primSet(co, symcddr, makeNative(21, clofun4, 1, 0));
Obj _35reg388 = primSet(co, symcaddr, makeNative(20, clofun4, 1, 0));
Obj _35reg393 = primSet(co, symcadddr, makeNative(19, clofun4, 1, 0));
Obj _35reg397 = primSet(co, symcdddr, makeNative(18, clofun4, 1, 0));
Obj _35reg405 = primSet(co, symrcons, makeNative(16, clofun4, 1, 0));
Obj _35reg407 = primSet(co, sympair_63, makeNative(15, clofun4, 1, 0));
Obj _35reg412 = primSet(co, symcora_47init_35reverse_45h, makeNative(14, clofun4, 2, 0));
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
Obj _35val413 = __arg1;
Obj _35reg414 = primSet(co, symreverse, _35val413);
Obj _35reg420 = primSet(co, symmap_45h, makeNative(12, clofun4, 3, 0));
Obj _35reg421 = primSet(co, symmap, makeNative(11, clofun4, 2, 0));
Obj _35reg422 = primSet(co, sym_42macros_42, Nil);
Obj _35reg423 = primGenSym(symprotect);
Obj _35reg424 = primSet(co, sym_42protect_45symbol_42, _35reg423);
Obj _35reg428 = primSet(co, symcora_47init_35add_45to_45_42macros_42, makeNative(10, clofun4, 2, 0));
Obj _35reg441 = primSet(co, symcora_47init_35macroexpand1_45h, makeNative(8, clofun4, 2, 0));
Obj _35reg442 = primSet(co, symcora_47init_35macroexpand1, makeNative(7, clofun4, 1, 0));
Obj _35reg459 = primSet(co, symcora_47init_35macroexpand_45boot, makeNative(1, clofun4, 1, 0));
Obj _35reg460 = primSet(co, symmacroexpand, globalRef(symcora_47init_35macroexpand_45boot));
Obj _35reg471 = primSet(co, symdefmacro_45macro, makeNative(47, clofun3, 1, 0));
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
Obj _35val472 = __arg1;
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
Obj _35val474 = __arg1;
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
Obj _35val484 = __arg1;
Obj _35reg489 = primSet(co, symelem_63, makeNative(41, clofun3, 2, 0));
Obj _35reg492 = primSet(co, symatom_63, makeNative(40, clofun3, 1, 0));
Obj _35reg504 = primSet(co, symcora_47init_35rewrite_45let, makeNative(35, clofun3, 1, 0));
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
Obj _35val506 = __arg1;
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
Obj _35val520 = __arg1;
Obj _35reg532 = primSet(co, symcora_47init_35rewrite_45or, makeNative(28, clofun3, 1, 0));
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
Obj _35val534 = __arg1;
Obj _35reg546 = primSet(co, symcora_47init_35rewrite_45and, makeNative(25, clofun3, 1, 0));
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
Obj _35val548 = __arg1;
Obj _35reg551 = primSet(co, symboolean_63, makeNative(23, clofun3, 1, 0));
Obj _35reg561 = primSet(co, symcora_47init_35rcons1, makeNative(20, clofun3, 1, 0));
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
Obj _35val563 = __arg1;
Obj _35reg617 = primSet(co, symcora_47init_35match_45cons_45expander, makeNative(1, clofun3, 4, 0));
Obj _35reg650 = primSet(co, symcora_47init_35match1, makeNative(45, clofun2, 4, 0));
Obj _35reg677 = primSet(co, symcora_47init_35extract_45rule_45action, makeNative(37, clofun2, 2, 0));
Obj _35reg729 = primSet(co, symcora_47init_35match_45helper, makeNative(21, clofun2, 2, 0));
Obj _35reg755 = primSet(co, symcora_47init_35rewrite_45match, makeNative(14, clofun2, 1, 0));
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
Obj _35val756 = __arg1;
Obj _35reg808 = primSet(co, symcora_47init_35extract_45rules1, makeNative(6, clofun2, 3, 0));
Obj _35reg809 = primSet(co, symcora_47init_35extract_45rules, makeNative(5, clofun2, 1, 0));
Obj _35reg814 = primSet(co, symcora_47init_35rules_45patterns, makeNative(2, clofun2, 2, 0));
Obj _35reg818 = primSet(co, symcora_47init_35length_45h, makeNative(1, clofun2, 2, 0));
Obj _35reg819 = primSet(co, symlength, makeNative(0, clofun2, 1, 0));
Obj _35reg827 = primSet(co, symcora_47init_35filter_45h, makeNative(48, clofun1, 3, 0));
Obj _35reg828 = primSet(co, symfilter, makeNative(47, clofun1, 2, 0));
Obj _35reg834 = primSet(co, symappend, makeNative(45, clofun1, 2, 0));
Obj _35reg845 = primSet(co, symcora_47init_35rules_45arg_45count, makeNative(38, clofun1, 1, 0));
Obj _35reg851 = primSet(co, symcora_47init_35gen_45paramenters, makeNative(36, clofun1, 1, 0));
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
Obj _35val864 = __arg1;
Obj _35reg1127 = primSet(co, symcora_47init_35propagate_45boolean0, makeNative(18, clofun1, 1, 0));
Obj _35reg1285 = primSet(co, symcora_47init_35propagate_45boolean, makeNative(45, clofun0, 1, 0));
Obj _35reg1287 = primSet(co, symmacroexpand, makeNative(43, clofun0, 1, 0));
Obj _35reg1311 = primSet(co, symcora_47init_35rewrite_45begin, makeNative(38, clofun0, 1, 0));
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
Obj _35val1313 = __arg1;
Obj _35reg1333 = primSet(co, symcora_47init_35rewrite_45backquote, makeNative(31, clofun0, 1, 0));
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
Obj _35val1335 = __arg1;
Obj _35reg1364 = primSet(co, symcora_47init_35parse_45define_45library_45h, makeNative(24, clofun0, 4, 0));
Obj _35reg1365 = primSet(co, symcora_47init_35parse_45define_45library, makeNative(23, clofun0, 2, 0));
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
Obj _35val1385 = __arg1;
Obj _35reg1386 = makeCons(symappend, Nil);
Obj _35reg1387 = makeCons(symfilter, _35reg1386);
Obj _35reg1388 = makeCons(symlength, _35reg1387);
Obj _35reg1389 = makeCons(symelem_63, _35reg1388);
Obj _35reg1390 = makeCons(symmacroexpand, _35reg1389);
Obj _35reg1391 = makeCons(symmap, _35reg1390);
Obj _35reg1392 = makeCons(symreverse, _35reg1391);
Obj _35reg1393 = makeCons(symthrow, _35reg1392);
Obj _35reg1394 = makeCons(symtry, _35reg1393);
Obj _35reg1395 = makeCons(symload, _35reg1394);
Obj _35reg1396 = makeCons(symimport, _35reg1395);
Obj _35reg1397 = makeCons(symload_45so, _35reg1396);
Obj _35reg1398 = makeCons(symapply, _35reg1397);
Obj _35reg1399 = makeCons(symvalue_45or, _35reg1398);
Obj _35reg1400 = makeCons(symvalue, _35reg1399);
Obj _35reg1401 = makeCons(symread_45file_45as_45sexp, _35reg1400);
Obj _35reg1402 = makeCons(symbytes_45length, _35reg1401);
Obj _35reg1403 = makeCons(symbytes, _35reg1402);
Obj _35reg1404 = makeCons(symvector_45length, _35reg1403);
Obj _35reg1405 = makeCons(symvector_45ref, _35reg1404);
Obj _35reg1406 = makeCons(symvector_45set_33, _35reg1405);
Obj _35reg1407 = makeCons(symvector, _35reg1406);
Obj _35reg1408 = makeCons(symsymbol_45_62string, _35reg1407);
Obj _35reg1409 = makeCons(symintern, _35reg1408);
Obj _35reg1410 = makeCons(symstring_45append, _35reg1409);
Obj _35reg1411 = makeCons(symnull_63, _35reg1410);
Obj _35reg1412 = makeCons(symnumber_63, _35reg1411);
Obj _35reg1413 = makeCons(symboolean_63, _35reg1412);
Obj _35reg1414 = makeCons(symatom_63, _35reg1413);
Obj _35reg1415 = makeCons(sympair_63, _35reg1414);
Obj _35reg1416 = makeCons(symcdddr, _35reg1415);
Obj _35reg1417 = makeCons(symcadddr, _35reg1416);
Obj _35reg1418 = makeCons(symcaddr, _35reg1417);
Obj _35reg1419 = makeCons(symcddr, _35reg1418);
Obj _35reg1420 = makeCons(symcdar, _35reg1419);
Obj _35reg1421 = makeCons(symcaar, _35reg1420);
Obj _35reg1422 = makeCons(symcadr, _35reg1421);
Obj _35reg1423 = primSet(co, symcora_47init_35_42ns_45export_42, _35reg1422);
Obj _35reg1424 = primSet(co, symcora_47init_35cadr, globalRef(symcadr));
Obj _35reg1425 = primSet(co, symcora_47init_35caar, globalRef(symcaar));
Obj _35reg1426 = primSet(co, symcora_47init_35cdar, globalRef(symcdar));
Obj _35reg1427 = primSet(co, symcora_47init_35cddr, globalRef(symcddr));
Obj _35reg1428 = primSet(co, symcora_47init_35caddr, globalRef(symcaddr));
Obj _35reg1429 = primSet(co, symcora_47init_35cadddr, globalRef(symcadddr));
Obj _35reg1430 = primSet(co, symcora_47init_35cdddr, globalRef(symcdddr));
Obj _35reg1431 = primSet(co, symcora_47init_35pair_63, globalRef(sympair_63));
Obj _35reg1432 = primSet(co, symcora_47init_35atom_63, globalRef(symatom_63));
Obj _35reg1433 = primSet(co, symcora_47init_35boolean_63, globalRef(symboolean_63));
Obj _35reg1434 = primSet(co, symcora_47init_35null_63, globalRef(symnull_63));
Obj _35reg1435 = primSet(co, symcora_47init_35number_63, globalRef(symnumber_63));
Obj _35reg1436 = primSet(co, symcora_47init_35string_45append, globalRef(symstring_45append));
Obj _35reg1437 = primSet(co, symcora_47init_35intern, globalRef(symintern));
Obj _35reg1438 = primSet(co, symcora_47init_35symbol_45_62string, globalRef(symsymbol_45_62string));
Obj _35reg1439 = primSet(co, symcora_47init_35vector, globalRef(symvector));
Obj _35reg1440 = primSet(co, symcora_47init_35vector_45set_33, globalRef(symvector_45set_33));
Obj _35reg1441 = primSet(co, symcora_47init_35vector_45ref, globalRef(symvector_45ref));
Obj _35reg1442 = primSet(co, symcora_47init_35vector_45length, globalRef(symvector_45length));
Obj _35reg1443 = primSet(co, symcora_47init_35bytes, globalRef(symbytes));
Obj _35reg1444 = primSet(co, symcora_47init_35bytes_45length, globalRef(symbytes_45length));
Obj _35reg1445 = primSet(co, symcora_47init_35value, globalRef(symvalue));
Obj _35reg1446 = primSet(co, symcora_47init_35value_45or, globalRef(symvalue_45or));
Obj _35reg1447 = primSet(co, symcora_47init_35read_45file_45as_45sexp, globalRef(symread_45file_45as_45sexp));
Obj _35reg1448 = primSet(co, symcora_47init_35apply, globalRef(symapply));
Obj _35reg1449 = primSet(co, symcora_47init_35load, globalRef(symload));
Obj _35reg1450 = primSet(co, symcora_47init_35load_45so, globalRef(symload_45so));
Obj _35reg1451 = primSet(co, symcora_47init_35import, globalRef(symimport));
Obj _35reg1452 = primSet(co, symcora_47init_35try, globalRef(symtry));
Obj _35reg1453 = primSet(co, symcora_47init_35throw, globalRef(symthrow));
Obj _35reg1454 = primSet(co, symcora_47init_35reverse, globalRef(symreverse));
Obj _35reg1455 = primSet(co, symcora_47init_35map, globalRef(symmap));
Obj _35reg1456 = primSet(co, symcora_47init_35macroexpand, globalRef(symmacroexpand));
Obj _35reg1457 = primSet(co, symcora_47init_35elem_63, globalRef(symelem_63));
Obj _35reg1458 = primSet(co, symcora_47init_35length, globalRef(symlength));
Obj _35reg1459 = primSet(co, symcora_47init_35filter, globalRef(symfilter));
Obj _35reg1460 = primSet(co, symcora_47init_35append, globalRef(symappend));
__nargs = 2;
__arg1 = _35reg1460;
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
Obj _35val1366 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = _35val1366;
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
Obj _35val1367 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 18, clofun0, 1, path);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35parse_45define_45library);
__arg1 = _35val1367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val1368 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = _35val1368;
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
Obj _35reg1369 = makeCons(makeCString("cora/init"), import);
PUSH_CONT(co, 20, clofun0, 3, export, body, _35reg1369);
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
Obj _35val1372 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg1369= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg1373 = makeCons(export, Nil);
Obj _35reg1374 = makeCons(symbackquote, _35reg1373);
Obj _35reg1375 = makeCons(_35reg1374, Nil);
Obj _35reg1376 = makeCons(sym_42ns_45export_42, _35reg1375);
Obj _35reg1377 = makeCons(symdef, _35reg1376);
Obj _35reg1378 = makeCons(_35reg1377, body);
PUSH_CONT(co, 21, clofun0, 1, _35reg1369);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = _35val1372;
__arg2 = _35reg1378;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _35val1379 = __arg1;
Obj _35reg1369= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg1380 = makeCons(symbegin, _35val1379);
Obj _35reg1381 = makeCons(_35reg1380, Nil);
Obj _35reg1382 = makeCons(_35reg1369, _35reg1381);
Obj _35reg1383 = makeCons(closureRef(co, 0), _35reg1382);
Obj _35reg1384 = makeCons(symns, _35reg1383);
__nargs = 2;
__arg1 = _35reg1384;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj imp = __arg1;
Obj _35reg1370 = makeCons(imp, Nil);
Obj _35reg1371 = makeCons(symimport, _35reg1370);
__nargs = 2;
__arg1 = _35reg1371;
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
Obj _35p364 = __arg1;
Obj _35p365 = __arg2;
Obj _35p366 = __arg3;
Obj _35p367 = co->args[4];
Obj _35cc368 = makeNative(25, clofun0, 0, 4, _35p364, _35p365, _35p366, _35p367);
Obj _35reg1346 = PRIM_ISCONS(_35p364);
if (True == _35reg1346) {
Obj _35reg1347 = PRIM_CAR(_35p364);
Obj _35reg1348 = PRIM_ISCONS(_35reg1347);
if (True == _35reg1348) {
Obj _35reg1349 = PRIM_CAR(_35p364);
Obj _35reg1350 = PRIM_CAR(_35reg1349);
Obj _35reg1351 = PRIM_EQ(symimport, _35reg1350);
if (True == _35reg1351) {
Obj _35reg1352 = PRIM_CAR(_35p364);
Obj _35reg1353 = PRIM_CDR(_35reg1352);
Obj _35reg1354 = PRIM_ISCONS(_35reg1353);
if (True == _35reg1354) {
Obj _35reg1355 = PRIM_CAR(_35p364);
Obj _35reg1356 = PRIM_CDR(_35reg1355);
Obj _35reg1357 = PRIM_CAR(_35reg1356);
Obj lib = _35reg1357;
Obj _35reg1358 = PRIM_CAR(_35p364);
Obj _35reg1359 = PRIM_CDR(_35reg1358);
Obj _35reg1360 = PRIM_CDR(_35reg1359);
Obj _35reg1361 = PRIM_EQ(Nil, _35reg1360);
if (True == _35reg1361) {
Obj _35reg1362 = PRIM_CDR(_35p364);
Obj rest = _35reg1362;
Obj imports = _35p365;
Obj exports = _35p366;
Obj k = _35p367;
Obj _35reg1363 = makeCons(lib, imports);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45define_45library_45h);
__arg1 = rest;
__arg2 = _35reg1363;
__arg3 = exports;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc368;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc368;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc368;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc368;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc368;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35cc369 = makeNative(26, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg1337 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1337) {
Obj _35reg1338 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1339 = PRIM_ISCONS(_35reg1338);
if (True == _35reg1339) {
Obj _35reg1340 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1341 = PRIM_CAR(_35reg1340);
Obj _35reg1342 = PRIM_EQ(symexport, _35reg1341);
if (True == _35reg1342) {
Obj _35reg1343 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1344 = PRIM_CDR(_35reg1343);
Obj more = _35reg1344;
Obj _35reg1345 = PRIM_CDR(closureRef(co, 0));
Obj rest = _35reg1345;
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
__arg0 = _35cc369;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc369;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc369;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35cc370 = makeNative(28, clofun0, 0, 0);
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
Obj _35val1336 = __arg1;
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exports= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 4;
__arg0 = k;
__arg1 = _35val1336;
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
Obj _35val1334 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45backquote);
__arg1 = _35val1334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35p359 = __arg1;
Obj _35cc360 = makeNative(32, clofun0, 0, 1, _35p359);
Obj x = _35p359;
Obj _35reg1330 = primIsSymbol(x);
if (True == _35reg1330) {
Obj _35reg1331 = makeCons(x, Nil);
Obj _35reg1332 = makeCons(symquote, _35reg1331);
__nargs = 2;
__arg1 = _35reg1332;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _35cc361 = makeNative(33, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg1320 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1320) {
Obj _35reg1321 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1322 = PRIM_EQ(symunquote, _35reg1321);
if (True == _35reg1322) {
Obj _35reg1323 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1324 = PRIM_ISCONS(_35reg1323);
if (True == _35reg1324) {
Obj _35reg1325 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1326 = PRIM_CAR(_35reg1325);
Obj x = _35reg1326;
Obj _35reg1327 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1328 = PRIM_CDR(_35reg1327);
Obj _35reg1329 = PRIM_EQ(Nil, _35reg1328);
if (True == _35reg1329) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc361;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc361;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc361;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc361;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _35cc362 = makeNative(35, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg1314 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1314) {
Obj _35reg1315 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg1315;
Obj _35reg1316 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg1316;
Obj _35reg1317 = makeCons(x, more);
PUSH_CONT(co, 34, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35rewrite_45backquote);
__arg2 = _35reg1317;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc362;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj _35val1318 = __arg1;
Obj _35reg1319 = makeCons(symlist, _35val1318);
__nargs = 2;
__arg1 = _35reg1319;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj _35cc363 = makeNative(36, clofun0, 0, 0);
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
Obj _35reg1312 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45begin);
__arg1 = _35reg1312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _35p355 = __arg1;
Obj _35cc356 = makeNative(39, clofun0, 0, 1, _35p355);
Obj _35reg1307 = PRIM_ISCONS(_35p355);
if (True == _35reg1307) {
Obj _35reg1308 = PRIM_CAR(_35p355);
Obj x = _35reg1308;
Obj _35reg1309 = PRIM_CDR(_35p355);
Obj _35reg1310 = PRIM_EQ(Nil, _35reg1309);
if (True == _35reg1310) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc356;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc356;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _35cc357 = makeNative(40, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg1295 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1295) {
Obj _35reg1296 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg1296;
Obj _35reg1297 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1298 = PRIM_ISCONS(_35reg1297);
if (True == _35reg1298) {
Obj _35reg1299 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1300 = PRIM_CAR(_35reg1299);
Obj y = _35reg1300;
Obj _35reg1301 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1302 = PRIM_CDR(_35reg1301);
Obj _35reg1303 = PRIM_EQ(Nil, _35reg1302);
if (True == _35reg1303) {
Obj _35reg1304 = makeCons(y, Nil);
Obj _35reg1305 = makeCons(x, _35reg1304);
Obj _35reg1306 = makeCons(symdo, _35reg1305);
__nargs = 2;
__arg1 = _35reg1306;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc357;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc357;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc357;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj _35cc358 = makeNative(42, clofun0, 0, 0);
Obj _35reg1288 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1288) {
Obj _35reg1289 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg1289;
Obj _35reg1290 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg1290;
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
__arg0 = _35cc358;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj _35val1291 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg1292 = makeCons(_35val1291, Nil);
Obj _35reg1293 = makeCons(x, _35reg1292);
Obj _35reg1294 = makeCons(symdo, _35reg1293);
__nargs = 2;
__arg1 = _35reg1294;
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
Obj _35val1286 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = _35val1286;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35p343 = __arg1;
Obj _35cc344 = makeNative(46, clofun0, 0, 1, _35p343);
Obj _35reg1273 = PRIM_ISCONS(_35p343);
if (True == _35reg1273) {
Obj _35reg1274 = PRIM_CAR(_35p343);
Obj _35reg1275 = PRIM_EQ(symquote, _35reg1274);
if (True == _35reg1275) {
Obj _35reg1276 = PRIM_CDR(_35p343);
Obj _35reg1277 = PRIM_ISCONS(_35reg1276);
if (True == _35reg1277) {
Obj _35reg1278 = PRIM_CDR(_35p343);
Obj _35reg1279 = PRIM_CAR(_35reg1278);
Obj x = _35reg1279;
Obj _35reg1280 = PRIM_CDR(_35p343);
Obj _35reg1281 = PRIM_CDR(_35reg1280);
Obj _35reg1282 = PRIM_EQ(Nil, _35reg1281);
if (True == _35reg1282) {
Obj _35reg1283 = makeCons(x, Nil);
Obj _35reg1284 = makeCons(symquote, _35reg1283);
__nargs = 2;
__arg1 = _35reg1284;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc344;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc344;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc344;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc344;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _35cc345 = makeNative(48, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg1260 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1260) {
Obj _35reg1261 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1262 = PRIM_EQ(symcons_63, _35reg1261);
if (True == _35reg1262) {
Obj _35reg1263 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1264 = PRIM_ISCONS(_35reg1263);
if (True == _35reg1264) {
Obj _35reg1265 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1266 = PRIM_CAR(_35reg1265);
Obj x = _35reg1266;
Obj _35reg1267 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1268 = PRIM_CDR(_35reg1267);
Obj _35reg1269 = PRIM_EQ(Nil, _35reg1268);
if (True == _35reg1269) {
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
__arg0 = _35cc345;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc345;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc345;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc345;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _35val1270 = __arg1;
Obj x1 = _35val1270;
Obj _35reg1271 = makeCons(x1, Nil);
Obj _35reg1272 = makeCons(symcons_63, _35reg1271);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = _35reg1272;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35cc346 = makeNative(0, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg1247 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1247) {
Obj _35reg1248 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1249 = PRIM_EQ(symcar, _35reg1248);
if (True == _35reg1249) {
Obj _35reg1250 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1251 = PRIM_ISCONS(_35reg1250);
if (True == _35reg1251) {
Obj _35reg1252 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1253 = PRIM_CAR(_35reg1252);
Obj x = _35reg1253;
Obj _35reg1254 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1255 = PRIM_CDR(_35reg1254);
Obj _35reg1256 = PRIM_EQ(Nil, _35reg1255);
if (True == _35reg1256) {
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
__arg0 = _35cc346;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc346;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc346;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc346;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj _35val1257 = __arg1;
Obj x1 = _35val1257;
Obj _35reg1258 = makeCons(x1, Nil);
Obj _35reg1259 = makeCons(symcar, _35reg1258);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = _35reg1259;
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
Obj _35cc347 = makeNative(2, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg1234 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1234) {
Obj _35reg1235 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1236 = PRIM_EQ(symcdr, _35reg1235);
if (True == _35reg1236) {
Obj _35reg1237 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1238 = PRIM_ISCONS(_35reg1237);
if (True == _35reg1238) {
Obj _35reg1239 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1240 = PRIM_CAR(_35reg1239);
Obj x = _35reg1240;
Obj _35reg1241 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1242 = PRIM_CDR(_35reg1241);
Obj _35reg1243 = PRIM_EQ(Nil, _35reg1242);
if (True == _35reg1243) {
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
__arg0 = _35cc347;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc347;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc347;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc347;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val1244 = __arg1;
Obj x1 = _35val1244;
Obj _35reg1245 = makeCons(x1, Nil);
Obj _35reg1246 = makeCons(symcdr, _35reg1245);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = _35reg1246;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc348 = makeNative(5, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg1212 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1212) {
Obj _35reg1213 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1214 = PRIM_EQ(symand, _35reg1213);
if (True == _35reg1214) {
Obj _35reg1215 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1216 = PRIM_ISCONS(_35reg1215);
if (True == _35reg1216) {
Obj _35reg1217 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1218 = PRIM_CAR(_35reg1217);
Obj x = _35reg1218;
Obj _35reg1219 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1220 = PRIM_CDR(_35reg1219);
Obj _35reg1221 = PRIM_ISCONS(_35reg1220);
if (True == _35reg1221) {
Obj _35reg1222 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1223 = PRIM_CDR(_35reg1222);
Obj _35reg1224 = PRIM_CAR(_35reg1223);
Obj y = _35reg1224;
Obj _35reg1225 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1226 = PRIM_CDR(_35reg1225);
Obj _35reg1227 = PRIM_CDR(_35reg1226);
Obj _35reg1228 = PRIM_EQ(Nil, _35reg1227);
if (True == _35reg1228) {
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
__arg0 = _35cc348;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc348;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc348;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc348;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc348;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val1229 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1 = _35val1229;
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
Obj _35val1230 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y1 = _35val1230;
Obj _35reg1231 = makeCons(y1, Nil);
Obj _35reg1232 = makeCons(x1, _35reg1231);
Obj _35reg1233 = makeCons(symand, _35reg1232);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = _35reg1233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35cc349 = makeNative(7, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg1199 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1199) {
Obj _35reg1200 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1201 = PRIM_EQ(symnull_63, _35reg1200);
if (True == _35reg1201) {
Obj _35reg1202 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1203 = PRIM_ISCONS(_35reg1202);
if (True == _35reg1203) {
Obj _35reg1204 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1205 = PRIM_CAR(_35reg1204);
Obj x = _35reg1205;
Obj _35reg1206 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1207 = PRIM_CDR(_35reg1206);
Obj _35reg1208 = PRIM_EQ(Nil, _35reg1207);
if (True == _35reg1208) {
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
__arg0 = _35cc349;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc349;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc349;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc349;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val1209 = __arg1;
Obj x1 = _35val1209;
Obj _35reg1210 = makeCons(x1, Nil);
Obj _35reg1211 = makeCons(symnull_63, _35reg1210);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = _35reg1211;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc350 = makeNative(9, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg1186 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1186) {
Obj _35reg1187 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1188 = PRIM_EQ(symnot, _35reg1187);
if (True == _35reg1188) {
Obj _35reg1189 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1190 = PRIM_ISCONS(_35reg1189);
if (True == _35reg1190) {
Obj _35reg1191 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1192 = PRIM_CAR(_35reg1191);
Obj x = _35reg1192;
Obj _35reg1193 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1194 = PRIM_CDR(_35reg1193);
Obj _35reg1195 = PRIM_EQ(Nil, _35reg1194);
if (True == _35reg1195) {
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
__arg0 = _35cc350;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc350;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc350;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc350;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val1196 = __arg1;
Obj x1 = _35val1196;
Obj _35reg1197 = makeCons(x1, Nil);
Obj _35reg1198 = makeCons(symnot, _35reg1197);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = _35reg1198;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc351 = makeNative(13, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg1153 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1153) {
Obj _35reg1154 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1155 = PRIM_EQ(symif, _35reg1154);
if (True == _35reg1155) {
Obj _35reg1156 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1157 = PRIM_ISCONS(_35reg1156);
if (True == _35reg1157) {
Obj _35reg1158 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1159 = PRIM_CAR(_35reg1158);
Obj x = _35reg1159;
Obj _35reg1160 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1161 = PRIM_CDR(_35reg1160);
Obj _35reg1162 = PRIM_ISCONS(_35reg1161);
if (True == _35reg1162) {
Obj _35reg1163 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1164 = PRIM_CDR(_35reg1163);
Obj _35reg1165 = PRIM_CAR(_35reg1164);
Obj y = _35reg1165;
Obj _35reg1166 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1167 = PRIM_CDR(_35reg1166);
Obj _35reg1168 = PRIM_CDR(_35reg1167);
Obj _35reg1169 = PRIM_ISCONS(_35reg1168);
if (True == _35reg1169) {
Obj _35reg1170 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1171 = PRIM_CDR(_35reg1170);
Obj _35reg1172 = PRIM_CDR(_35reg1171);
Obj _35reg1173 = PRIM_CAR(_35reg1172);
Obj z = _35reg1173;
Obj _35reg1174 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1175 = PRIM_CDR(_35reg1174);
Obj _35reg1176 = PRIM_CDR(_35reg1175);
Obj _35reg1177 = PRIM_CDR(_35reg1176);
Obj _35reg1178 = PRIM_EQ(Nil, _35reg1177);
if (True == _35reg1178) {
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
__arg0 = _35cc351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val1179 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x1 = _35val1179;
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
Obj _35val1180 = __arg1;
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj y1 = _35val1180;
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
Obj _35val1181 = __arg1;
Obj y1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj z1 = _35val1181;
Obj _35reg1182 = makeCons(z1, Nil);
Obj _35reg1183 = makeCons(y1, _35reg1182);
Obj _35reg1184 = makeCons(x1, _35reg1183);
Obj _35reg1185 = makeCons(symif, _35reg1184);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = _35reg1185;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc352 = makeNative(15, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg1132 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1132) {
Obj _35reg1133 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1134 = PRIM_EQ(symlambda, _35reg1133);
if (True == _35reg1134) {
Obj _35reg1135 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1136 = PRIM_ISCONS(_35reg1135);
if (True == _35reg1136) {
Obj _35reg1137 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1138 = PRIM_CAR(_35reg1137);
Obj args = _35reg1138;
Obj _35reg1139 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1140 = PRIM_CDR(_35reg1139);
Obj _35reg1141 = PRIM_ISCONS(_35reg1140);
if (True == _35reg1141) {
Obj _35reg1142 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1143 = PRIM_CDR(_35reg1142);
Obj _35reg1144 = PRIM_CAR(_35reg1143);
Obj body = _35reg1144;
Obj _35reg1145 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1146 = PRIM_CDR(_35reg1145);
Obj _35reg1147 = PRIM_CDR(_35reg1146);
Obj _35reg1148 = PRIM_EQ(Nil, _35reg1147);
if (True == _35reg1148) {
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
__arg0 = _35cc352;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc352;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc352;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc352;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc352;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val1149 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg1150 = makeCons(_35val1149, Nil);
Obj _35reg1151 = makeCons(args, _35reg1150);
Obj _35reg1152 = makeCons(symlambda, _35reg1151);
__nargs = 2;
__arg1 = _35reg1152;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35cc353 = makeNative(16, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg1128 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1128) {
Obj _35reg1129 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg1129;
Obj _35reg1130 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg1130;
Obj _35reg1131 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35propagate_45boolean);
__arg2 = _35reg1131;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc353;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35cc354 = makeNative(17, clofun1, 0, 0);
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
Obj _35p331 = __arg1;
Obj _35cc332 = makeNative(19, clofun1, 0, 1, _35p331);
Obj _35reg1088 = PRIM_ISCONS(_35p331);
if (True == _35reg1088) {
Obj _35reg1089 = PRIM_CAR(_35p331);
Obj _35reg1090 = PRIM_EQ(symcar, _35reg1089);
if (True == _35reg1090) {
Obj _35reg1091 = PRIM_CDR(_35p331);
Obj _35reg1092 = PRIM_ISCONS(_35reg1091);
if (True == _35reg1092) {
Obj _35reg1093 = PRIM_CDR(_35p331);
Obj _35reg1094 = PRIM_CAR(_35reg1093);
Obj _35reg1095 = PRIM_ISCONS(_35reg1094);
if (True == _35reg1095) {
Obj _35reg1096 = PRIM_CDR(_35p331);
Obj _35reg1097 = PRIM_CAR(_35reg1096);
Obj _35reg1098 = PRIM_CAR(_35reg1097);
Obj _35reg1099 = PRIM_EQ(symcons, _35reg1098);
if (True == _35reg1099) {
Obj _35reg1100 = PRIM_CDR(_35p331);
Obj _35reg1101 = PRIM_CAR(_35reg1100);
Obj _35reg1102 = PRIM_CDR(_35reg1101);
Obj _35reg1103 = PRIM_ISCONS(_35reg1102);
if (True == _35reg1103) {
Obj _35reg1104 = PRIM_CDR(_35p331);
Obj _35reg1105 = PRIM_CAR(_35reg1104);
Obj _35reg1106 = PRIM_CDR(_35reg1105);
Obj _35reg1107 = PRIM_CAR(_35reg1106);
Obj x = _35reg1107;
Obj _35reg1108 = PRIM_CDR(_35p331);
Obj _35reg1109 = PRIM_CAR(_35reg1108);
Obj _35reg1110 = PRIM_CDR(_35reg1109);
Obj _35reg1111 = PRIM_CDR(_35reg1110);
Obj _35reg1112 = PRIM_ISCONS(_35reg1111);
if (True == _35reg1112) {
Obj _35reg1113 = PRIM_CDR(_35p331);
Obj _35reg1114 = PRIM_CAR(_35reg1113);
Obj _35reg1115 = PRIM_CDR(_35reg1114);
Obj _35reg1116 = PRIM_CDR(_35reg1115);
Obj _35reg1117 = PRIM_CAR(_35reg1116);
Obj __ = _35reg1117;
Obj _35reg1118 = PRIM_CDR(_35p331);
Obj _35reg1119 = PRIM_CAR(_35reg1118);
Obj _35reg1120 = PRIM_CDR(_35reg1119);
Obj _35reg1121 = PRIM_CDR(_35reg1120);
Obj _35reg1122 = PRIM_CDR(_35reg1121);
Obj _35reg1123 = PRIM_EQ(Nil, _35reg1122);
if (True == _35reg1123) {
Obj _35reg1124 = PRIM_CDR(_35p331);
Obj _35reg1125 = PRIM_CDR(_35reg1124);
Obj _35reg1126 = PRIM_EQ(Nil, _35reg1125);
if (True == _35reg1126) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35cc333 = makeNative(20, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg1049 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1049) {
Obj _35reg1050 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1051 = PRIM_EQ(symcdr, _35reg1050);
if (True == _35reg1051) {
Obj _35reg1052 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1053 = PRIM_ISCONS(_35reg1052);
if (True == _35reg1053) {
Obj _35reg1054 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1055 = PRIM_CAR(_35reg1054);
Obj _35reg1056 = PRIM_ISCONS(_35reg1055);
if (True == _35reg1056) {
Obj _35reg1057 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1058 = PRIM_CAR(_35reg1057);
Obj _35reg1059 = PRIM_CAR(_35reg1058);
Obj _35reg1060 = PRIM_EQ(symcons, _35reg1059);
if (True == _35reg1060) {
Obj _35reg1061 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1062 = PRIM_CAR(_35reg1061);
Obj _35reg1063 = PRIM_CDR(_35reg1062);
Obj _35reg1064 = PRIM_ISCONS(_35reg1063);
if (True == _35reg1064) {
Obj _35reg1065 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1066 = PRIM_CAR(_35reg1065);
Obj _35reg1067 = PRIM_CDR(_35reg1066);
Obj _35reg1068 = PRIM_CAR(_35reg1067);
Obj __ = _35reg1068;
Obj _35reg1069 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1070 = PRIM_CAR(_35reg1069);
Obj _35reg1071 = PRIM_CDR(_35reg1070);
Obj _35reg1072 = PRIM_CDR(_35reg1071);
Obj _35reg1073 = PRIM_ISCONS(_35reg1072);
if (True == _35reg1073) {
Obj _35reg1074 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1075 = PRIM_CAR(_35reg1074);
Obj _35reg1076 = PRIM_CDR(_35reg1075);
Obj _35reg1077 = PRIM_CDR(_35reg1076);
Obj _35reg1078 = PRIM_CAR(_35reg1077);
Obj x = _35reg1078;
Obj _35reg1079 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1080 = PRIM_CAR(_35reg1079);
Obj _35reg1081 = PRIM_CDR(_35reg1080);
Obj _35reg1082 = PRIM_CDR(_35reg1081);
Obj _35reg1083 = PRIM_CDR(_35reg1082);
Obj _35reg1084 = PRIM_EQ(Nil, _35reg1083);
if (True == _35reg1084) {
Obj _35reg1085 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1086 = PRIM_CDR(_35reg1085);
Obj _35reg1087 = PRIM_EQ(Nil, _35reg1086);
if (True == _35reg1087) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc333;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc334 = makeNative(21, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg1010 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1010) {
Obj _35reg1011 = PRIM_CAR(closureRef(co, 0));
Obj _35reg1012 = PRIM_EQ(symcons_63, _35reg1011);
if (True == _35reg1012) {
Obj _35reg1013 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1014 = PRIM_ISCONS(_35reg1013);
if (True == _35reg1014) {
Obj _35reg1015 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1016 = PRIM_CAR(_35reg1015);
Obj _35reg1017 = PRIM_ISCONS(_35reg1016);
if (True == _35reg1017) {
Obj _35reg1018 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1019 = PRIM_CAR(_35reg1018);
Obj _35reg1020 = PRIM_CAR(_35reg1019);
Obj _35reg1021 = PRIM_EQ(symcons, _35reg1020);
if (True == _35reg1021) {
Obj _35reg1022 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1023 = PRIM_CAR(_35reg1022);
Obj _35reg1024 = PRIM_CDR(_35reg1023);
Obj _35reg1025 = PRIM_ISCONS(_35reg1024);
if (True == _35reg1025) {
Obj _35reg1026 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1027 = PRIM_CAR(_35reg1026);
Obj _35reg1028 = PRIM_CDR(_35reg1027);
Obj _35reg1029 = PRIM_CAR(_35reg1028);
Obj __ = _35reg1029;
Obj _35reg1030 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1031 = PRIM_CAR(_35reg1030);
Obj _35reg1032 = PRIM_CDR(_35reg1031);
Obj _35reg1033 = PRIM_CDR(_35reg1032);
Obj _35reg1034 = PRIM_ISCONS(_35reg1033);
if (True == _35reg1034) {
Obj _35reg1035 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1036 = PRIM_CAR(_35reg1035);
Obj _35reg1037 = PRIM_CDR(_35reg1036);
Obj _35reg1038 = PRIM_CDR(_35reg1037);
Obj _35reg1039 = PRIM_CAR(_35reg1038);
__ = _35reg1039;
Obj _35reg1040 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1041 = PRIM_CAR(_35reg1040);
Obj _35reg1042 = PRIM_CDR(_35reg1041);
Obj _35reg1043 = PRIM_CDR(_35reg1042);
Obj _35reg1044 = PRIM_CDR(_35reg1043);
Obj _35reg1045 = PRIM_EQ(Nil, _35reg1044);
if (True == _35reg1045) {
Obj _35reg1046 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1047 = PRIM_CDR(_35reg1046);
Obj _35reg1048 = PRIM_EQ(Nil, _35reg1047);
if (True == _35reg1048) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc334;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj _35cc335 = makeNative(22, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg991 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg991) {
Obj _35reg992 = PRIM_CAR(closureRef(co, 0));
Obj _35reg993 = PRIM_EQ(symand, _35reg992);
if (True == _35reg993) {
Obj _35reg994 = PRIM_CDR(closureRef(co, 0));
Obj _35reg995 = PRIM_ISCONS(_35reg994);
if (True == _35reg995) {
Obj _35reg996 = PRIM_CDR(closureRef(co, 0));
Obj _35reg997 = PRIM_CAR(_35reg996);
Obj _35reg998 = PRIM_EQ(True, _35reg997);
if (True == _35reg998) {
Obj _35reg999 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1000 = PRIM_CDR(_35reg999);
Obj _35reg1001 = PRIM_ISCONS(_35reg1000);
if (True == _35reg1001) {
Obj _35reg1002 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1003 = PRIM_CDR(_35reg1002);
Obj _35reg1004 = PRIM_CAR(_35reg1003);
Obj _35reg1005 = PRIM_EQ(True, _35reg1004);
if (True == _35reg1005) {
Obj _35reg1006 = PRIM_CDR(closureRef(co, 0));
Obj _35reg1007 = PRIM_CDR(_35reg1006);
Obj _35reg1008 = PRIM_CDR(_35reg1007);
Obj _35reg1009 = PRIM_EQ(Nil, _35reg1008);
if (True == _35reg1009) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35cc336 = makeNative(23, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg980 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg980) {
Obj _35reg981 = PRIM_CAR(closureRef(co, 0));
Obj _35reg982 = PRIM_EQ(symnull_63, _35reg981);
if (True == _35reg982) {
Obj _35reg983 = PRIM_CDR(closureRef(co, 0));
Obj _35reg984 = PRIM_ISCONS(_35reg983);
if (True == _35reg984) {
Obj _35reg985 = PRIM_CDR(closureRef(co, 0));
Obj _35reg986 = PRIM_CAR(_35reg985);
Obj _35reg987 = PRIM_EQ(Nil, _35reg986);
if (True == _35reg987) {
Obj _35reg988 = PRIM_CDR(closureRef(co, 0));
Obj _35reg989 = PRIM_CDR(_35reg988);
Obj _35reg990 = PRIM_EQ(Nil, _35reg989);
if (True == _35reg990) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc336;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc336;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc336;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc336;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc336;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35cc337 = makeNative(24, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg941 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg941) {
Obj _35reg942 = PRIM_CAR(closureRef(co, 0));
Obj _35reg943 = PRIM_EQ(symnull_63, _35reg942);
if (True == _35reg943) {
Obj _35reg944 = PRIM_CDR(closureRef(co, 0));
Obj _35reg945 = PRIM_ISCONS(_35reg944);
if (True == _35reg945) {
Obj _35reg946 = PRIM_CDR(closureRef(co, 0));
Obj _35reg947 = PRIM_CAR(_35reg946);
Obj _35reg948 = PRIM_ISCONS(_35reg947);
if (True == _35reg948) {
Obj _35reg949 = PRIM_CDR(closureRef(co, 0));
Obj _35reg950 = PRIM_CAR(_35reg949);
Obj _35reg951 = PRIM_CAR(_35reg950);
Obj _35reg952 = PRIM_EQ(symcons, _35reg951);
if (True == _35reg952) {
Obj _35reg953 = PRIM_CDR(closureRef(co, 0));
Obj _35reg954 = PRIM_CAR(_35reg953);
Obj _35reg955 = PRIM_CDR(_35reg954);
Obj _35reg956 = PRIM_ISCONS(_35reg955);
if (True == _35reg956) {
Obj _35reg957 = PRIM_CDR(closureRef(co, 0));
Obj _35reg958 = PRIM_CAR(_35reg957);
Obj _35reg959 = PRIM_CDR(_35reg958);
Obj _35reg960 = PRIM_CAR(_35reg959);
Obj __ = _35reg960;
Obj _35reg961 = PRIM_CDR(closureRef(co, 0));
Obj _35reg962 = PRIM_CAR(_35reg961);
Obj _35reg963 = PRIM_CDR(_35reg962);
Obj _35reg964 = PRIM_CDR(_35reg963);
Obj _35reg965 = PRIM_ISCONS(_35reg964);
if (True == _35reg965) {
Obj _35reg966 = PRIM_CDR(closureRef(co, 0));
Obj _35reg967 = PRIM_CAR(_35reg966);
Obj _35reg968 = PRIM_CDR(_35reg967);
Obj _35reg969 = PRIM_CDR(_35reg968);
Obj _35reg970 = PRIM_CAR(_35reg969);
__ = _35reg970;
Obj _35reg971 = PRIM_CDR(closureRef(co, 0));
Obj _35reg972 = PRIM_CAR(_35reg971);
Obj _35reg973 = PRIM_CDR(_35reg972);
Obj _35reg974 = PRIM_CDR(_35reg973);
Obj _35reg975 = PRIM_CDR(_35reg974);
Obj _35reg976 = PRIM_EQ(Nil, _35reg975);
if (True == _35reg976) {
Obj _35reg977 = PRIM_CDR(closureRef(co, 0));
Obj _35reg978 = PRIM_CDR(_35reg977);
Obj _35reg979 = PRIM_EQ(Nil, _35reg978);
if (True == _35reg979) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc337;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc337;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc337;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc337;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc337;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc337;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc337;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc337;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc337;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _35cc338 = makeNative(25, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg930 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg930) {
Obj _35reg931 = PRIM_CAR(closureRef(co, 0));
Obj _35reg932 = PRIM_EQ(symnot, _35reg931);
if (True == _35reg932) {
Obj _35reg933 = PRIM_CDR(closureRef(co, 0));
Obj _35reg934 = PRIM_ISCONS(_35reg933);
if (True == _35reg934) {
Obj _35reg935 = PRIM_CDR(closureRef(co, 0));
Obj _35reg936 = PRIM_CAR(_35reg935);
Obj _35reg937 = PRIM_EQ(True, _35reg936);
if (True == _35reg937) {
Obj _35reg938 = PRIM_CDR(closureRef(co, 0));
Obj _35reg939 = PRIM_CDR(_35reg938);
Obj _35reg940 = PRIM_EQ(Nil, _35reg939);
if (True == _35reg940) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc338;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc338;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc338;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc338;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc338;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35cc339 = makeNative(26, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg919 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg919) {
Obj _35reg920 = PRIM_CAR(closureRef(co, 0));
Obj _35reg921 = PRIM_EQ(symnot, _35reg920);
if (True == _35reg921) {
Obj _35reg922 = PRIM_CDR(closureRef(co, 0));
Obj _35reg923 = PRIM_ISCONS(_35reg922);
if (True == _35reg923) {
Obj _35reg924 = PRIM_CDR(closureRef(co, 0));
Obj _35reg925 = PRIM_CAR(_35reg924);
Obj _35reg926 = PRIM_EQ(False, _35reg925);
if (True == _35reg926) {
Obj _35reg927 = PRIM_CDR(closureRef(co, 0));
Obj _35reg928 = PRIM_CDR(_35reg927);
Obj _35reg929 = PRIM_EQ(Nil, _35reg928);
if (True == _35reg929) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35cc340 = makeNative(27, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg892 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg892) {
Obj _35reg893 = PRIM_CAR(closureRef(co, 0));
Obj _35reg894 = PRIM_EQ(symif, _35reg893);
if (True == _35reg894) {
Obj _35reg895 = PRIM_CDR(closureRef(co, 0));
Obj _35reg896 = PRIM_ISCONS(_35reg895);
if (True == _35reg896) {
Obj _35reg897 = PRIM_CDR(closureRef(co, 0));
Obj _35reg898 = PRIM_CAR(_35reg897);
Obj _35reg899 = PRIM_EQ(True, _35reg898);
if (True == _35reg899) {
Obj _35reg900 = PRIM_CDR(closureRef(co, 0));
Obj _35reg901 = PRIM_CDR(_35reg900);
Obj _35reg902 = PRIM_ISCONS(_35reg901);
if (True == _35reg902) {
Obj _35reg903 = PRIM_CDR(closureRef(co, 0));
Obj _35reg904 = PRIM_CDR(_35reg903);
Obj _35reg905 = PRIM_CAR(_35reg904);
Obj y = _35reg905;
Obj _35reg906 = PRIM_CDR(closureRef(co, 0));
Obj _35reg907 = PRIM_CDR(_35reg906);
Obj _35reg908 = PRIM_CDR(_35reg907);
Obj _35reg909 = PRIM_ISCONS(_35reg908);
if (True == _35reg909) {
Obj _35reg910 = PRIM_CDR(closureRef(co, 0));
Obj _35reg911 = PRIM_CDR(_35reg910);
Obj _35reg912 = PRIM_CDR(_35reg911);
Obj _35reg913 = PRIM_CAR(_35reg912);
Obj z = _35reg913;
Obj _35reg914 = PRIM_CDR(closureRef(co, 0));
Obj _35reg915 = PRIM_CDR(_35reg914);
Obj _35reg916 = PRIM_CDR(_35reg915);
Obj _35reg917 = PRIM_CDR(_35reg916);
Obj _35reg918 = PRIM_EQ(Nil, _35reg917);
if (True == _35reg918) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35cc341 = makeNative(28, clofun1, 0, 1, closureRef(co, 0));
Obj _35reg865 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg865) {
Obj _35reg866 = PRIM_CAR(closureRef(co, 0));
Obj _35reg867 = PRIM_EQ(symif, _35reg866);
if (True == _35reg867) {
Obj _35reg868 = PRIM_CDR(closureRef(co, 0));
Obj _35reg869 = PRIM_ISCONS(_35reg868);
if (True == _35reg869) {
Obj _35reg870 = PRIM_CDR(closureRef(co, 0));
Obj _35reg871 = PRIM_CAR(_35reg870);
Obj _35reg872 = PRIM_EQ(False, _35reg871);
if (True == _35reg872) {
Obj _35reg873 = PRIM_CDR(closureRef(co, 0));
Obj _35reg874 = PRIM_CDR(_35reg873);
Obj _35reg875 = PRIM_ISCONS(_35reg874);
if (True == _35reg875) {
Obj _35reg876 = PRIM_CDR(closureRef(co, 0));
Obj _35reg877 = PRIM_CDR(_35reg876);
Obj _35reg878 = PRIM_CAR(_35reg877);
Obj y = _35reg878;
Obj _35reg879 = PRIM_CDR(closureRef(co, 0));
Obj _35reg880 = PRIM_CDR(_35reg879);
Obj _35reg881 = PRIM_CDR(_35reg880);
Obj _35reg882 = PRIM_ISCONS(_35reg881);
if (True == _35reg882) {
Obj _35reg883 = PRIM_CDR(closureRef(co, 0));
Obj _35reg884 = PRIM_CDR(_35reg883);
Obj _35reg885 = PRIM_CDR(_35reg884);
Obj _35reg886 = PRIM_CAR(_35reg885);
Obj z = _35reg886;
Obj _35reg887 = PRIM_CDR(closureRef(co, 0));
Obj _35reg888 = PRIM_CDR(_35reg887);
Obj _35reg889 = PRIM_CDR(_35reg888);
Obj _35reg890 = PRIM_CDR(_35reg889);
Obj _35reg891 = PRIM_EQ(Nil, _35reg890);
if (True == _35reg891) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc341;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc341;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc341;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc341;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc341;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc341;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc341;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35cc342 = makeNative(29, clofun1, 0, 0);
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
Obj _35val852 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 32, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35extract_45rules);
__arg1 = _35val852;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val853 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = _35val853;
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
Obj _35val854 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = _35val854;
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
Obj _35val855 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = _35val855;
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
Obj _35val856 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg857 = makeCons(symlist, args);
Obj _35reg858 = makeCons(_35reg857, body);
Obj _35reg859 = makeCons(symmatch, _35reg858);
Obj _35reg860 = makeCons(_35reg859, Nil);
Obj _35reg861 = makeCons(args, _35reg860);
Obj _35reg862 = makeCons(_35val856, _35reg861);
Obj _35reg863 = makeCons(symdefun, _35reg862);
__nargs = 2;
__arg1 = _35reg863;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj n = __arg1;
Obj _35reg846 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == _35reg846) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg847 = primGenSym(symp);
Obj _35reg848 = PRIM_SUB(n, MAKE_NUMBER(1));
PUSH_CONT(co, 37, clofun1, 1, _35reg847);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35gen_45paramenters);
__arg1 = _35reg848;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _35val849 = __arg1;
Obj _35reg847= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg850 = makeCons(_35reg847, _35val849);
__nargs = 2;
__arg1 = _35reg850;
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
Obj _35val835 = __arg1;
Obj pats = _35val835;
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
Obj _35val837 = __arg1;
Obj counts = _35val837;
Obj _35reg838 = PRIM_CAR(counts);
Obj n = _35reg838;
Obj dif = makeNative(43, clofun1, 1, 1, n);
Obj _35reg841 = PRIM_CDR(counts);
PUSH_CONT(co, 41, clofun1, 1, n);
__nargs = 3;
__arg0 = globalRef(symfilter);
__arg1 = dif;
__arg2 = _35reg841;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val842 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 42, clofun1, 1, n);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = _35val842;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val843 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg844 = primNot(_35val843);
if (True == _35reg844) {
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
Obj _35reg839 = PRIM_EQ(closureRef(co, 0), x);
Obj _35reg840 = primNot(_35reg839);
__nargs = 2;
__arg1 = _35reg840;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label44:
{
Obj x = __arg1;
Obj _35reg836 = PRIM_CDR(x);
__nargs = 2;
__arg0 = globalRef(symlength);
__arg1 = _35reg836;
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
Obj _35reg829 = PRIM_EQ(l1, Nil);
if (True == _35reg829) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg830 = PRIM_CAR(l1);
Obj _35reg831 = PRIM_CDR(l1);
PUSH_CONT(co, 46, clofun1, 1, _35reg830);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = _35reg831;
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
Obj _35val832 = __arg1;
Obj _35reg830= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg833 = makeCons(_35reg830, _35val832);
__nargs = 2;
__arg1 = _35reg833;
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
Obj _35reg820 = PRIM_ISCONS(l);
if (True == _35reg820) {
Obj _35reg821 = PRIM_CAR(l);
PUSH_CONT(co, 49, clofun1, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = _35reg821;
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
Obj _35val822 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _35val822) {
Obj _35reg823 = PRIM_CAR(l);
Obj _35reg824 = makeCons(_35reg823, res);
Obj _35reg825 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = _35reg824;
__arg2 = fn;
__arg3 = _35reg825;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg826 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = res;
__arg2 = fn;
__arg3 = _35reg826;
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
Obj _35reg815 = PRIM_EQ(l, Nil);
if (True == _35reg815) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg816 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj _35reg817 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35length_45h);
__arg1 = _35reg816;
__arg2 = _35reg817;
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
Obj _35val810 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val810) {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg811 = PRIM_CAR(rules);
Obj _35reg812 = makeCons(_35reg811, res);
PUSH_CONT(co, 4, clofun2, 1, _35reg812);
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
Obj _35val813 = __arg1;
Obj _35reg812= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rules_45patterns);
__arg1 = _35reg812;
__arg2 = _35val813;
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
Obj _35cc327 = makeNative(7, clofun2, 0, 3, input, current, result);
Obj _35reg807 = PRIM_EQ(Nil, input);
if (True == _35reg807) {
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
__arg0 = _35cc327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35cc328 = makeNative(9, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg774 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg774) {
Obj _35reg775 = PRIM_CAR(closureRef(co, 0));
Obj _35reg776 = PRIM_EQ(sym_61_62, _35reg775);
if (True == _35reg776) {
Obj _35reg777 = PRIM_CDR(closureRef(co, 0));
Obj _35reg778 = PRIM_ISCONS(_35reg777);
if (True == _35reg778) {
Obj _35reg779 = PRIM_CDR(closureRef(co, 0));
Obj _35reg780 = PRIM_CAR(_35reg779);
Obj act = _35reg780;
Obj _35reg781 = PRIM_CDR(closureRef(co, 0));
Obj _35reg782 = PRIM_CDR(_35reg781);
Obj _35reg783 = PRIM_ISCONS(_35reg782);
if (True == _35reg783) {
Obj _35reg784 = PRIM_CDR(closureRef(co, 0));
Obj _35reg785 = PRIM_CDR(_35reg784);
Obj _35reg786 = PRIM_CAR(_35reg785);
Obj _35reg787 = PRIM_EQ(symwhere, _35reg786);
if (True == _35reg787) {
Obj _35reg788 = PRIM_CDR(closureRef(co, 0));
Obj _35reg789 = PRIM_CDR(_35reg788);
Obj _35reg790 = PRIM_CDR(_35reg789);
Obj _35reg791 = PRIM_ISCONS(_35reg790);
if (True == _35reg791) {
Obj _35reg792 = PRIM_CDR(closureRef(co, 0));
Obj _35reg793 = PRIM_CDR(_35reg792);
Obj _35reg794 = PRIM_CDR(_35reg793);
Obj _35reg795 = PRIM_CAR(_35reg794);
Obj pred = _35reg795;
Obj _35reg796 = PRIM_CDR(closureRef(co, 0));
Obj _35reg797 = PRIM_CDR(_35reg796);
Obj _35reg798 = PRIM_CDR(_35reg797);
Obj _35reg799 = PRIM_CDR(_35reg798);
Obj remain = _35reg799;
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
__arg0 = _35cc328;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc328;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc328;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc328;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc328;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc328;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val800 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg801 = makeCons(symlist, _35val800);
Obj pat = _35reg801;
Obj _35reg802 = makeCons(act, Nil);
Obj _35reg803 = makeCons(pred, _35reg802);
Obj _35reg804 = makeCons(symwhere, _35reg803);
Obj _35reg805 = makeCons(pat, closureRef(co, 2));
Obj _35reg806 = makeCons(_35reg804, _35reg805);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg806;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc329 = makeNative(11, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj _35reg761 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg761) {
Obj _35reg762 = PRIM_CAR(closureRef(co, 0));
Obj _35reg763 = PRIM_EQ(sym_61_62, _35reg762);
if (True == _35reg763) {
Obj _35reg764 = PRIM_CDR(closureRef(co, 0));
Obj _35reg765 = PRIM_ISCONS(_35reg764);
if (True == _35reg765) {
Obj _35reg766 = PRIM_CDR(closureRef(co, 0));
Obj _35reg767 = PRIM_CAR(_35reg766);
Obj act = _35reg767;
Obj _35reg768 = PRIM_CDR(closureRef(co, 0));
Obj _35reg769 = PRIM_CDR(_35reg768);
Obj remain = _35reg769;
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
__arg0 = _35cc329;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc329;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc329;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val770 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg771 = makeCons(symlist, _35val770);
Obj pat = _35reg771;
Obj _35reg772 = makeCons(pat, closureRef(co, 2));
Obj _35reg773 = makeCons(act, _35reg772);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = _35reg773;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc330 = makeNative(12, clofun2, 0, 0);
Obj _35reg757 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg757) {
Obj _35reg758 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg758;
Obj _35reg759 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg759;
Obj _35reg760 = makeCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = y;
__arg2 = _35reg760;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc330;
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
Obj _35val730 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 16, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = _35val730;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val731 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = _35val731;
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
Obj _35val732 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = _35val732;
Obj _35reg733 = PRIM_ISCONS(value);
if (True == _35reg733) {
Obj _35reg734 = PRIM_CAR(value);
Obj _35reg735 = PRIM_EQ(symcons, _35reg734);
Obj _35reg736 = primNot(_35reg735);
if (True == _35reg736) {
if (True == True) {
Obj _35reg737 = primGenSym(symval);
Obj val = _35reg737;
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
Obj _35reg743 = primGenSym(symval);
Obj val = _35reg743;
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
Obj _35reg749 = primGenSym(symval);
Obj val = _35reg749;
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
Obj _35val750 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg751 = makeCons(_35val750, Nil);
Obj _35reg752 = makeCons(value, _35reg751);
Obj _35reg753 = makeCons(val, _35reg752);
Obj _35reg754 = makeCons(symlet, _35reg753);
__nargs = 2;
__arg1 = _35reg754;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35val744 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg745 = makeCons(_35val744, Nil);
Obj _35reg746 = makeCons(value, _35reg745);
Obj _35reg747 = makeCons(val, _35reg746);
Obj _35reg748 = makeCons(symlet, _35reg747);
__nargs = 2;
__arg1 = _35reg748;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35val738 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg739 = makeCons(_35val738, Nil);
Obj _35reg740 = makeCons(value, _35reg739);
Obj _35reg741 = makeCons(val, _35reg740);
Obj _35reg742 = makeCons(symlet, _35reg741);
__nargs = 2;
__arg1 = _35reg742;
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
Obj _35val678 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val678) {
Obj _35reg679 = makeCons(makeCString("no match-help found!"), Nil);
Obj _35reg680 = makeCons(symerror, _35reg679);
__nargs = 2;
__arg1 = _35reg680;
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
Obj _35val681 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val681) {
Obj _35reg682 = PRIM_CDR(rules);
PUSH_CONT(co, 28, clofun2, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = _35reg682;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj _35reg714 = PRIM_CAR(rules);
Obj pat = _35reg714;
Obj _35reg715 = primGenSym(symcc);
Obj cc = _35reg715;
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
Obj _35val716 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = _35val716;
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
Obj _35val717 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 26, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = _35val717;
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
Obj _35val718 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = _35val718;
Obj _35reg719 = PRIM_CDR(rules);
Obj _35reg720 = PRIM_CDR(_35reg719);
PUSH_CONT(co, 27, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = _35reg720;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _35val721 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = _35val721;
Obj _35reg722 = makeCons(rest, Nil);
Obj _35reg723 = makeCons(Nil, _35reg722);
Obj _35reg724 = makeCons(symlambda, _35reg723);
Obj _35reg725 = makeCons(curr, Nil);
Obj _35reg726 = makeCons(_35reg724, _35reg725);
Obj _35reg727 = makeCons(cc, _35reg726);
Obj _35reg728 = makeCons(symlet, _35reg727);
__nargs = 2;
__arg1 = _35reg728;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj _35val683 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val683) {
if (True == True) {
Obj _35reg684 = PRIM_CAR(rules);
Obj pat = _35reg684;
Obj _35reg685 = primGenSym(symcc);
Obj cc = _35reg685;
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
Obj _35reg699 = PRIM_CAR(rules);
Obj pat = _35reg699;
Obj _35reg700 = primGenSym(symcc);
Obj cc = _35reg700;
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
Obj _35val701 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = _35val701;
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
Obj _35val702 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 31, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = _35val702;
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
Obj _35val703 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = _35val703;
Obj _35reg704 = PRIM_CDR(rules);
Obj _35reg705 = PRIM_CDR(_35reg704);
PUSH_CONT(co, 32, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = _35reg705;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val706 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = _35val706;
Obj _35reg707 = makeCons(rest, Nil);
Obj _35reg708 = makeCons(Nil, _35reg707);
Obj _35reg709 = makeCons(symlambda, _35reg708);
Obj _35reg710 = makeCons(curr, Nil);
Obj _35reg711 = makeCons(_35reg709, _35reg710);
Obj _35reg712 = makeCons(cc, _35reg711);
Obj _35reg713 = makeCons(symlet, _35reg712);
__nargs = 2;
__arg1 = _35reg713;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label33:
{
Obj _35val686 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = _35val686;
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
Obj _35val687 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 35, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = _35val687;
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
Obj _35val688 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = _35val688;
Obj _35reg689 = PRIM_CDR(rules);
Obj _35reg690 = PRIM_CDR(_35reg689);
PUSH_CONT(co, 36, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = _35reg690;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35val691 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = _35val691;
Obj _35reg692 = makeCons(rest, Nil);
Obj _35reg693 = makeCons(Nil, _35reg692);
Obj _35reg694 = makeCons(symlambda, _35reg693);
Obj _35reg695 = makeCons(curr, Nil);
Obj _35reg696 = makeCons(_35reg694, _35reg695);
Obj _35reg697 = makeCons(cc, _35reg696);
Obj _35reg698 = makeCons(symlet, _35reg697);
__nargs = 2;
__arg1 = _35reg698;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj _35reg651 = PRIM_CDR(rules);
Obj _35reg652 = PRIM_CAR(_35reg651);
Obj action = _35reg652;
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
Obj _35val653 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val653) {
Obj _35reg654 = PRIM_CAR(action);
Obj _35reg655 = PRIM_EQ(_35reg654, symwhere);
if (True == _35reg655) {
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
Obj _35val670 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 40, clofun2, 2, cc, _35val670);
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
Obj _35val671 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35val670= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg672 = makeCons(cc, Nil);
Obj _35reg673 = makeCons(_35reg672, Nil);
Obj _35reg674 = makeCons(_35val671, _35reg673);
Obj _35reg675 = makeCons(_35val670, _35reg674);
Obj _35reg676 = makeCons(symif, _35reg675);
__nargs = 2;
__arg1 = _35reg676;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj _35val663 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 42, clofun2, 2, cc, _35val663);
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
Obj _35val664 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35val663= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg665 = makeCons(cc, Nil);
Obj _35reg666 = makeCons(_35reg665, Nil);
Obj _35reg667 = makeCons(_35val664, _35reg666);
Obj _35reg668 = makeCons(_35val663, _35reg667);
Obj _35reg669 = makeCons(symif, _35reg668);
__nargs = 2;
__arg1 = _35reg669;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj _35val656 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 44, clofun2, 2, cc, _35val656);
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
Obj _35val657 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35val656= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg658 = makeCons(cc, Nil);
Obj _35reg659 = makeCons(_35reg658, Nil);
Obj _35reg660 = makeCons(_35val657, _35reg659);
Obj _35reg661 = makeCons(_35val656, _35reg660);
Obj _35reg662 = makeCons(symif, _35reg661);
__nargs = 2;
__arg1 = _35reg662;
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
Obj _35val621 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _35val621) {
Obj _35reg622 = PRIM_EQ(pat, expr);
if (True == _35reg622) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg623 = makeCons(expr, Nil);
Obj _35reg624 = makeCons(pat, _35reg623);
Obj _35reg625 = makeCons(sym_61, _35reg624);
Obj _35reg626 = makeCons(cc, Nil);
Obj _35reg627 = makeCons(_35reg626, Nil);
Obj _35reg628 = makeCons(body, _35reg627);
Obj _35reg629 = makeCons(_35reg625, _35reg628);
Obj _35reg630 = makeCons(symif, _35reg629);
__nargs = 2;
__arg1 = _35reg630;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj _35reg631 = primIsSymbol(pat);
if (True == _35reg631) {
Obj _35reg632 = makeCons(body, Nil);
Obj _35reg633 = makeCons(expr, _35reg632);
Obj _35reg634 = makeCons(pat, _35reg633);
Obj _35reg635 = makeCons(symlet, _35reg634);
__nargs = 2;
__arg1 = _35reg635;
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
Obj _35val636 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _35val636) {
Obj _35reg637 = PRIM_CAR(pat);
Obj _35reg638 = PRIM_EQ(_35reg637, symquote);
if (True == _35reg638) {
Obj _35reg639 = makeCons(expr, Nil);
Obj _35reg640 = makeCons(pat, _35reg639);
Obj _35reg641 = makeCons(sym_61, _35reg640);
Obj _35reg642 = makeCons(cc, Nil);
Obj _35reg643 = makeCons(_35reg642, Nil);
Obj _35reg644 = makeCons(body, _35reg643);
Obj _35reg645 = makeCons(_35reg641, _35reg644);
Obj _35reg646 = makeCons(symif, _35reg645);
__nargs = 2;
__arg1 = _35reg646;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg647 = PRIM_CAR(pat);
Obj _35reg648 = PRIM_EQ(_35reg647, symcons);
if (True == _35reg648) {
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
Obj _35val649 = __arg1;
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = _35val649;
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
Obj _35val618 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _35val618) {
Obj _35reg619 = primIsSymbol(x);
Obj _35reg620 = primNot(_35reg619);
if (True == _35reg620) {
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
Obj _35val564 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = _35val564;
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
Obj _35val565 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = _35val565;
Obj _35reg566 = PRIM_ISCONS(expr);
if (True == _35reg566) {
Obj _35reg567 = PRIM_CAR(expr);
Obj _35reg568 = PRIM_EQ(_35reg567, symcons);
if (True == _35reg568) {
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
Obj _35reg572 = makeCons(expr, Nil);
Obj _35reg573 = makeCons(symcons_63, _35reg572);
Obj _35reg574 = makeCons(expr, Nil);
Obj _35reg575 = makeCons(symcar, _35reg574);
Obj _35reg576 = makeCons(expr, Nil);
Obj _35reg577 = makeCons(symcdr, _35reg576);
PUSH_CONT(co, 14, clofun3, 4, x, _35reg575, cc, _35reg573);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = _35reg577;
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
Obj _35reg588 = makeCons(expr, Nil);
Obj _35reg589 = makeCons(symcons_63, _35reg588);
Obj _35reg590 = makeCons(expr, Nil);
Obj _35reg591 = makeCons(symcar, _35reg590);
Obj _35reg592 = makeCons(expr, Nil);
Obj _35reg593 = makeCons(symcdr, _35reg592);
PUSH_CONT(co, 9, clofun3, 4, x, _35reg591, cc, _35reg589);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = _35reg593;
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
Obj _35reg604 = makeCons(expr, Nil);
Obj _35reg605 = makeCons(symcons_63, _35reg604);
Obj _35reg606 = makeCons(expr, Nil);
Obj _35reg607 = makeCons(symcar, _35reg606);
Obj _35reg608 = makeCons(expr, Nil);
Obj _35reg609 = makeCons(symcdr, _35reg608);
PUSH_CONT(co, 4, clofun3, 4, x, _35reg607, cc, _35reg605);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = _35reg609;
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
Obj _35val610 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg607= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg605= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 5, clofun3, 2, cc, _35reg605);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = _35reg607;
__arg3 = _35val610;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val611 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg605= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg612 = makeCons(cc, Nil);
Obj _35reg613 = makeCons(_35reg612, Nil);
Obj _35reg614 = makeCons(_35val611, _35reg613);
Obj _35reg615 = makeCons(_35reg605, _35reg614);
Obj _35reg616 = makeCons(symif, _35reg615);
__nargs = 2;
__arg1 = _35reg616;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35val601 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = _35val601;
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
Obj _35val602 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = _35val602;
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
Obj _35val603 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = _35val603;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val594 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg589= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 10, clofun3, 2, cc, _35reg589);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = _35reg591;
__arg3 = _35val594;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val595 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg589= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg596 = makeCons(cc, Nil);
Obj _35reg597 = makeCons(_35reg596, Nil);
Obj _35reg598 = makeCons(_35val595, _35reg597);
Obj _35reg599 = makeCons(_35reg589, _35reg598);
Obj _35reg600 = makeCons(symif, _35reg599);
__nargs = 2;
__arg1 = _35reg600;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35val585 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = _35val585;
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
Obj _35val586 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = _35val586;
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
Obj _35val587 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = _35val587;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val578 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg573= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 15, clofun3, 2, cc, _35reg573);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = _35reg575;
__arg3 = _35val578;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val579 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg573= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg580 = makeCons(cc, Nil);
Obj _35reg581 = makeCons(_35reg580, Nil);
Obj _35reg582 = makeCons(_35val579, _35reg581);
Obj _35reg583 = makeCons(_35reg573, _35reg582);
Obj _35reg584 = makeCons(symif, _35reg583);
__nargs = 2;
__arg1 = _35reg584;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val569 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = _35val569;
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
Obj _35val570 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = _35val570;
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
Obj _35val571 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = _35val571;
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
Obj _35reg562 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = _35reg562;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj pat = __arg1;
Obj _35reg552 = PRIM_CDR(pat);
PUSH_CONT(co, 21, clofun3, 1, pat);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = _35reg552;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _35val553 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _35val553) {
Obj _35reg554 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = _35reg554;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg555 = PRIM_CAR(pat);
Obj _35reg556 = PRIM_CDR(pat);
PUSH_CONT(co, 22, clofun3, 1, _35reg555);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = _35reg556;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35val557 = __arg1;
Obj _35reg555= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg558 = makeCons(_35val557, Nil);
Obj _35reg559 = makeCons(_35reg555, _35reg558);
Obj _35reg560 = makeCons(symcons, _35reg559);
__nargs = 2;
__arg1 = _35reg560;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x = __arg1;
Obj _35reg549 = PRIM_EQ(x, True);
if (True == _35reg549) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg550 = PRIM_EQ(x, False);
if (True == _35reg550) {
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
Obj _35reg547 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = _35reg547;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj l = __arg1;
Obj _35reg535 = PRIM_EQ(Nil, l);
if (True == _35reg535) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg536 = PRIM_CAR(l);
Obj _35reg537 = PRIM_EQ(_35reg536, False);
if (True == _35reg537) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg538 = PRIM_CDR(l);
PUSH_CONT(co, 26, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = _35reg538;
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
Obj _35val539 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = _35val539;
Obj _35reg540 = PRIM_EQ(more, False);
if (True == _35reg540) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg541 = PRIM_CAR(l);
Obj _35reg542 = makeCons(False, Nil);
Obj _35reg543 = makeCons(more, _35reg542);
Obj _35reg544 = makeCons(_35reg541, _35reg543);
Obj _35reg545 = makeCons(symif, _35reg544);
__nargs = 2;
__arg1 = _35reg545;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label27:
{
Obj exp = __arg1;
Obj _35reg533 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = _35reg533;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj l = __arg1;
Obj _35reg521 = PRIM_EQ(l, Nil);
if (True == _35reg521) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg522 = PRIM_CAR(l);
Obj _35reg523 = PRIM_EQ(_35reg522, True);
if (True == _35reg523) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg524 = PRIM_CDR(l);
PUSH_CONT(co, 29, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = _35reg524;
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
Obj _35val525 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = _35val525;
Obj _35reg526 = PRIM_EQ(more, True);
if (True == _35reg526) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg527 = PRIM_CAR(l);
Obj _35reg528 = makeCons(more, Nil);
Obj _35reg529 = makeCons(True, _35reg528);
Obj _35reg530 = makeCons(_35reg527, _35reg529);
Obj _35reg531 = makeCons(symif, _35reg530);
__nargs = 2;
__arg1 = _35reg531;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label30:
{
Obj exp = __arg1;
Obj _35reg507 = PRIM_CDR(exp);
Obj _35reg508 = PRIM_EQ(Nil, _35reg507);
if (True == _35reg508) {
Obj _35reg509 = makeCons(makeCString("no cond match"), Nil);
Obj _35reg510 = makeCons(symerror, _35reg509);
__nargs = 2;
__arg1 = _35reg510;
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
Obj _35val511 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = _35val511;
Obj _35reg512 = PRIM_CAR(curr);
PUSH_CONT(co, 32, clofun3, 2, exp, _35reg512);
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
Obj _35val513 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg512= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 33, clofun3, 2, _35val513, _35reg512);
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
Obj _35val514 = __arg1;
Obj _35val513= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg512= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg515 = makeCons(symcond, _35val514);
Obj _35reg516 = makeCons(_35reg515, Nil);
Obj _35reg517 = makeCons(_35val513, _35reg516);
Obj _35reg518 = makeCons(_35reg512, _35reg517);
Obj _35reg519 = makeCons(symif, _35reg518);
__nargs = 2;
__arg1 = _35reg519;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj exp = __arg1;
Obj _35reg505 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = _35reg505;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj exp = __arg1;
Obj _35reg493 = PRIM_CDR(exp);
PUSH_CONT(co, 36, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = _35reg493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35val494 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _35val494) {
Obj _35reg495 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = _35reg495;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg496 = PRIM_CAR(exp);
PUSH_CONT(co, 37, clofun3, 2, exp, _35reg496);
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
Obj _35val497 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg496= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 38, clofun3, 2, _35val497, _35reg496);
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
Obj _35val498 = __arg1;
Obj _35val497= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg496= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 39, clofun3, 2, _35val497, _35reg496);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = _35val498;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _35val499 = __arg1;
Obj _35val497= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg496= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg500 = makeCons(_35val499, Nil);
Obj _35reg501 = makeCons(_35val497, _35reg500);
Obj _35reg502 = makeCons(_35reg496, _35reg501);
Obj _35reg503 = makeCons(symlet, _35reg502);
__nargs = 2;
__arg1 = _35reg503;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj x = __arg1;
Obj _35reg490 = PRIM_ISCONS(x);
Obj _35reg491 = primNot(_35reg490);
__nargs = 2;
__arg1 = _35reg491;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj x = __arg1;
Obj l = __arg2;
Obj _35reg485 = PRIM_ISCONS(l);
if (True == _35reg485) {
Obj _35reg486 = PRIM_CAR(l);
Obj _35reg487 = PRIM_EQ(_35reg486, x);
if (True == _35reg487) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg488 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symelem_63);
__arg1 = x;
__arg2 = _35reg488;
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
Obj _35val475 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 44, clofun3, 2, exp, _35val475);
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
Obj _35val476 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35val475= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 45, clofun3, 2, _35val476, _35val475);
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
Obj _35val477 = __arg1;
Obj _35val476= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35val475= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg478 = makeCons(_35val477, Nil);
Obj _35reg479 = makeCons(_35val476, _35reg478);
Obj _35reg480 = makeCons(symlambda, _35reg479);
Obj _35reg481 = makeCons(_35reg480, Nil);
Obj _35reg482 = makeCons(_35val475, _35reg481);
Obj _35reg483 = makeCons(symdef, _35reg482);
__nargs = 2;
__arg1 = _35reg483;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label46:
{
Obj exp = __arg1;
Obj _35reg473 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = _35reg473;
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
Obj _35val461 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg462 = makeCons(_35val461, Nil);
Obj _35reg463 = makeCons(symquote, _35reg462);
PUSH_CONT(co, 49, clofun3, 2, exp, _35reg463);
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
Obj _35val464 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg463= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 0, clofun4, 2, _35val464, _35reg463);
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
Obj _35val465 = __arg1;
Obj _35val464= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg463= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg466 = makeCons(_35val464, _35val465);
Obj _35reg467 = makeCons(symlambda, _35reg466);
Obj _35reg468 = makeCons(_35reg467, Nil);
Obj _35reg469 = makeCons(_35reg463, _35reg468);
Obj _35reg470 = makeCons(symcora_47init_35add_45to_45_42macros_42, _35reg469);
__nargs = 2;
__arg1 = _35reg470;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj exp = __arg1;
Obj _35reg443 = PRIM_ISCONS(exp);
if (True == _35reg443) {
Obj _35reg444 = PRIM_CAR(exp);
Obj _35reg445 = PRIM_EQ(_35reg444, globalRef(sym_42protect_45symbol_42));
if (True == _35reg445) {
Obj _35reg446 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = _35reg446;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg447 = PRIM_CAR(exp);
Obj _35reg448 = PRIM_EQ(_35reg447, symlambda);
if (True == _35reg448) {
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
Obj _35reg455 = PRIM_CAR(exp);
Obj _35reg456 = PRIM_EQ(_35reg455, symquote);
if (True == _35reg456) {
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
Obj _35val458 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(3, clofun4, 1, 1, exp);
__arg1 = _35val458;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp1 = __arg1;
Obj _35reg457 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == _35reg457) {
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
Obj _35val449 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 5, clofun4, 1, _35val449);
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
Obj _35val450 = __arg1;
Obj _35val449= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 6, clofun4, 1, _35val449);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = _35val450;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val451 = __arg1;
Obj _35val449= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg452 = makeCons(_35val451, Nil);
Obj _35reg453 = makeCons(_35val449, _35reg452);
Obj _35reg454 = makeCons(symlambda, _35reg453);
__nargs = 2;
__arg1 = _35reg454;
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
Obj _35reg429 = PRIM_EQ(Nil, macros);
if (True == _35reg429) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg440 = PRIM_CAR(macros);
__nargs = 2;
__arg0 = makeNative(9, clofun4, 1, 2, exp, macros);
__arg1 = _35reg440;
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
Obj _35reg430 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg430) {
Obj _35reg431 = PRIM_CAR(closureRef(co, 0));
Obj _35reg432 = PRIM_CAR(item);
Obj _35reg433 = PRIM_EQ(_35reg431, _35reg432);
if (True == _35reg433) {
if (True == True) {
Obj _35reg434 = PRIM_CDR(item);
__nargs = 2;
__arg0 = _35reg434;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg435 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = _35reg435;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg436 = PRIM_CDR(item);
__nargs = 2;
__arg0 = _35reg436;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg437 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = _35reg437;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj _35reg438 = PRIM_CDR(item);
__nargs = 2;
__arg0 = _35reg438;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg439 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = _35reg439;
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
Obj _35reg425 = makeCons(n, v);
Obj _35reg426 = makeCons(_35reg425, globalRef(sym_42macros_42));
Obj _35reg427 = primSet(co, sym_42macros_42, _35reg426);
__nargs = 2;
__arg1 = _35reg427;
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
Obj _35reg415 = PRIM_ISCONS(l);
if (True == _35reg415) {
Obj _35reg416 = PRIM_CAR(l);
PUSH_CONT(co, 13, clofun4, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = _35reg416;
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
Obj _35val417 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg418 = makeCons(_35val417, res);
Obj _35reg419 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symmap_45h);
__arg1 = _35reg418;
__arg2 = f;
__arg3 = _35reg419;
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
Obj _35reg408 = PRIM_ISCONS(l);
if (True == _35reg408) {
Obj _35reg409 = PRIM_CAR(l);
Obj _35reg410 = makeCons(_35reg409, res);
Obj _35reg411 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35reverse_45h);
__arg1 = _35reg410;
__arg2 = _35reg411;
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
Obj _35reg406 = PRIM_ISCONS(x);
__nargs = 2;
__arg1 = _35reg406;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj exp = __arg1;
Obj _35reg398 = PRIM_ISCONS(exp);
if (True == _35reg398) {
Obj _35reg399 = PRIM_CAR(exp);
Obj _35reg400 = PRIM_CDR(exp);
PUSH_CONT(co, 17, clofun4, 1, _35reg399);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = _35reg400;
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
Obj _35val401 = __arg1;
Obj _35reg399= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg402 = makeCons(_35val401, Nil);
Obj _35reg403 = makeCons(_35reg399, _35reg402);
Obj _35reg404 = makeCons(symcons, _35reg403);
__nargs = 2;
__arg1 = _35reg404;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj x = __arg1;
Obj _35reg394 = PRIM_CDR(x);
Obj _35reg395 = PRIM_CDR(_35reg394);
Obj _35reg396 = PRIM_CDR(_35reg395);
__nargs = 2;
__arg1 = _35reg396;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj x = __arg1;
Obj _35reg389 = PRIM_CDR(x);
Obj _35reg390 = PRIM_CDR(_35reg389);
Obj _35reg391 = PRIM_CDR(_35reg390);
Obj _35reg392 = PRIM_CAR(_35reg391);
__nargs = 2;
__arg1 = _35reg392;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj x = __arg1;
Obj _35reg385 = PRIM_CDR(x);
Obj _35reg386 = PRIM_CDR(_35reg385);
Obj _35reg387 = PRIM_CAR(_35reg386);
__nargs = 2;
__arg1 = _35reg387;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label21:
{
Obj x = __arg1;
Obj _35reg382 = PRIM_CDR(x);
Obj _35reg383 = PRIM_CDR(_35reg382);
__nargs = 2;
__arg1 = _35reg383;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj x = __arg1;
Obj _35reg379 = PRIM_CAR(x);
Obj _35reg380 = PRIM_CDR(_35reg379);
__nargs = 2;
__arg1 = _35reg380;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x = __arg1;
Obj _35reg376 = PRIM_CAR(x);
Obj _35reg377 = PRIM_CAR(_35reg376);
__nargs = 2;
__arg1 = _35reg377;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj x = __arg1;
Obj _35reg373 = PRIM_CDR(x);
Obj _35reg374 = PRIM_CAR(_35reg373);
__nargs = 2;
__arg1 = _35reg374;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x = __arg1;
Obj _35reg371 = PRIM_EQ(x, Nil);
__nargs = 2;
__arg1 = _35reg371;
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

