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
static Obj symcora_47init_35rewrite_45match;
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
symcora_47init_35rewrite_45match = intern("cora/init#rewrite-match");
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
Obj v0x7f7507ec5420 = primSet(co, symnull_63, makeNative(25, clofun4, 1, 0));
Obj v0x7f75080ab2c0 = primSet(co, symcadr, makeNative(24, clofun4, 1, 0));
Obj v0x7f75080ab5e0 = primSet(co, symcaar, makeNative(23, clofun4, 1, 0));
Obj v0x7f75080ab8e0 = primSet(co, symcdar, makeNative(22, clofun4, 1, 0));
Obj v0x7f75080abc00 = primSet(co, symcddr, makeNative(21, clofun4, 1, 0));
Obj v0x7f75080abfe0 = primSet(co, symcaddr, makeNative(20, clofun4, 1, 0));
Obj v0x7f75080a6480 = primSet(co, symcadddr, makeNative(19, clofun4, 1, 0));
Obj v0x7f75080a68a0 = primSet(co, symcdddr, makeNative(18, clofun4, 1, 0));
Obj v0x7f7507ff6080 = primSet(co, symrcons, makeNative(16, clofun4, 1, 0));
Obj v0x7f7507ff62c0 = primSet(co, sympair_63, makeNative(15, clofun4, 1, 0));
Obj v0x7f7507ff6900 = primSet(co, symcora_47init_35reverse_45h, makeNative(14, clofun4, 2, 0));
PUSH_CONT_0(co, 1, clofun0);
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
Obj v0x7f7507ff6ac0 = __arg1;
Obj v0x7f7507ff6ae0 = primSet(co, symreverse, v0x7f7507ff6ac0);
Obj v0x7f7507ff5200 = primSet(co, symmap_45h, makeNative(12, clofun4, 3, 0));
Obj v0x7f7507ff5440 = primSet(co, symmap, makeNative(11, clofun4, 2, 0));
Obj v0x7f7507ff5560 = primSet(co, sym_42macros_42, Nil);
Obj v0x7f7507ff5700 = primGenSym();
Obj v0x7f7507ff5720 = primSet(co, sym_42protect_45symbol_42, v0x7f7507ff5700);
Obj v0x7f7507ff5b20 = primSet(co, symcora_47init_35add_45to_45_42macros_42, makeNative(10, clofun4, 2, 0));
Obj v0x7f7507ff2bc0 = primSet(co, symcora_47init_35macroexpand1_45h, makeNative(8, clofun4, 2, 0));
Obj v0x7f7507ff2de0 = primSet(co, symcora_47init_35macroexpand1, makeNative(7, clofun4, 1, 0));
Obj v0x7f7507feafa0 = primSet(co, symcora_47init_35macroexpand_45boot, makeNative(1, clofun4, 1, 0));
Obj v0x7f7507fe60c0 = primSet(co, symmacroexpand, globalRef(symcora_47init_35macroexpand_45boot));
Obj v0x7f7507fe6a80 = primSet(co, symdefmacro_45macro, makeNative(47, clofun3, 1, 0));
PUSH_CONT_0(co, 2, clofun0);
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
Obj v0x7f7507fe6ba0 = __arg1;
PUSH_CONT_0(co, 3, clofun0);
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
Obj v0x7f7507fe6e60 = __arg1;
PUSH_CONT_0(co, 4, clofun0);
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
Obj v0x7f7507fc0740 = __arg1;
Obj v0x7f7507fc0d00 = primSet(co, symelem_63, makeNative(41, clofun3, 2, 0));
Obj v0x7f7507fc0fe0 = primSet(co, symatom_63, makeNative(40, clofun3, 1, 0));
Obj v0x7f7507f75a40 = primSet(co, symcora_47init_35rewrite_45let, makeNative(35, clofun3, 1, 0));
PUSH_CONT_0(co, 5, clofun0);
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
Obj v0x7f7507f75d00 = __arg1;
PUSH_CONT_0(co, 6, clofun0);
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
Obj v0x7f7507eef9a0 = __arg1;
Obj v0x7f7507ee5520 = primSet(co, symcora_47init_35rewrite_45or, makeNative(28, clofun3, 1, 0));
PUSH_CONT_0(co, 7, clofun0);
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
Obj v0x7f7507ee57e0 = __arg1;
Obj v0x7f7507ee3360 = primSet(co, symcora_47init_35rewrite_45and, makeNative(25, clofun3, 1, 0));
PUSH_CONT_0(co, 8, clofun0);
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
Obj v0x7f7507ee3620 = __arg1;
Obj v0x7f7507ee39c0 = primSet(co, symboolean_63, makeNative(23, clofun3, 1, 0));
Obj v0x7f7507ed7280 = primSet(co, symcora_47init_35rcons1, makeNative(20, clofun3, 1, 0));
PUSH_CONT_0(co, 9, clofun0);
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
Obj v0x7f7507ed7540 = __arg1;
Obj v0x7f7507ff6660 = primSet(co, symcora_47init_35match_45cons_45expander, makeNative(1, clofun3, 4, 0));
Obj v0x7f7507ff2be0 = primSet(co, symcora_47init_35match1, makeNative(45, clofun2, 4, 0));
Obj v0x7f7507fe6680 = primSet(co, symcora_47init_35extract_45rule_45action, makeNative(37, clofun2, 2, 0));
Obj v0x7f7507ee5100 = primSet(co, symcora_47init_35match_45helper, makeNative(21, clofun2, 2, 0));
Obj v0x7f7507ee3ea0 = primSet(co, symcora_47init_35rewrite_45match, makeNative(14, clofun2, 1, 0));
PUSH_CONT_0(co, 10, clofun0);
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
Obj v0x7f7507ed70c0 = __arg1;
Obj v0x7f75080ab6c0 = primSet(co, symcora_47init_35extract_45rules1, makeNative(6, clofun2, 3, 0));
Obj v0x7f75080ab9e0 = primSet(co, symcora_47init_35extract_45rules, makeNative(5, clofun2, 1, 0));
Obj v0x7f75080a62e0 = primSet(co, symcora_47init_35rules_45patterns, makeNative(2, clofun2, 2, 0));
Obj v0x7f75080a69c0 = primSet(co, symcora_47init_35length_45h, makeNative(1, clofun2, 2, 0));
Obj v0x7f75080a6c80 = primSet(co, symlength, makeNative(0, clofun2, 1, 0));
Obj v0x7f7507ff6b00 = primSet(co, symcora_47init_35filter_45h, makeNative(48, clofun1, 3, 0));
Obj v0x7f7507ff6de0 = primSet(co, symfilter, makeNative(47, clofun1, 2, 0));
Obj v0x7f7507ff54e0 = primSet(co, symappend, makeNative(45, clofun1, 2, 0));
Obj v0x7f7507ff2540 = primSet(co, symcora_47init_35rules_45arg_45count, makeNative(38, clofun1, 1, 0));
Obj v0x7f7507ff2cc0 = primSet(co, symcora_47init_35gen_45paramenters, makeNative(36, clofun1, 1, 0));
PUSH_CONT_0(co, 11, clofun0);
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
Obj v0x7f7507feac40 = __arg1;
Obj v0x7f7507ec56e0 = primSet(co, symcora_47init_35propagate_45boolean0, makeNative(18, clofun1, 1, 0));
Obj v0x7f7507eefee0 = primSet(co, symcora_47init_35propagate_45boolean, makeNative(45, clofun0, 1, 0));
Obj v0x7f7507ee5360 = primSet(co, symmacroexpand, makeNative(43, clofun0, 1, 0));
Obj v0x7f7507ec51c0 = primSet(co, symcora_47init_35rewrite_45begin, makeNative(38, clofun0, 1, 0));
PUSH_CONT_0(co, 12, clofun0);
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
Obj v0x7f7507ec55e0 = __arg1;
Obj v0x7f7507eb5800 = primSet(co, symcora_47init_35rewrite_45backquote, makeNative(31, clofun0, 1, 0));
PUSH_CONT_0(co, 13, clofun0);
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
Obj v0x7f7507eb5c80 = __arg1;
Obj v0x7f7507e8c040 = primSet(co, symcora_47init_35parse_45define_45library_45h, makeNative(24, clofun0, 4, 0));
Obj v0x7f7507e8cc20 = primSet(co, symcora_47init_35parse_45define_45library, makeNative(23, clofun0, 2, 0));
PUSH_CONT_0(co, 14, clofun0);
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
Obj v0x7f7507e77020 = __arg1;
Obj v0x7f7507e6ee80 = makeCons(symappend, Nil);
Obj v0x7f7507e6eea0 = makeCons(symfilter, v0x7f7507e6ee80);
Obj v0x7f7507e6eec0 = makeCons(symlength, v0x7f7507e6eea0);
Obj v0x7f7507e6eee0 = makeCons(symelem_63, v0x7f7507e6eec0);
Obj v0x7f7507e6ef00 = makeCons(symmacroexpand, v0x7f7507e6eee0);
Obj v0x7f7507e6ef20 = makeCons(symmap, v0x7f7507e6ef00);
Obj v0x7f7507e6ef40 = makeCons(symreverse, v0x7f7507e6ef20);
Obj v0x7f7507e6ef60 = makeCons(symthrow, v0x7f7507e6ef40);
Obj v0x7f7507e6ef80 = makeCons(symtry, v0x7f7507e6ef60);
Obj v0x7f7507e6efa0 = makeCons(symload, v0x7f7507e6ef80);
Obj v0x7f7507e6efc0 = makeCons(symimport, v0x7f7507e6efa0);
Obj v0x7f7507e6efe0 = makeCons(symload_45so, v0x7f7507e6efc0);
Obj v0x7f7507e62000 = makeCons(symapply, v0x7f7507e6efe0);
Obj v0x7f7507e62020 = makeCons(symvalue_45or, v0x7f7507e62000);
Obj v0x7f7507e62040 = makeCons(symvalue, v0x7f7507e62020);
Obj v0x7f7507e62060 = makeCons(symread_45file_45as_45sexp, v0x7f7507e62040);
Obj v0x7f7507e62080 = makeCons(symbytes_45length, v0x7f7507e62060);
Obj v0x7f7507e620a0 = makeCons(symbytes, v0x7f7507e62080);
Obj v0x7f7507e620c0 = makeCons(symvector_45length, v0x7f7507e620a0);
Obj v0x7f7507e620e0 = makeCons(symvector_45ref, v0x7f7507e620c0);
Obj v0x7f7507e62100 = makeCons(symvector_45set_33, v0x7f7507e620e0);
Obj v0x7f7507e62120 = makeCons(symvector, v0x7f7507e62100);
Obj v0x7f7507e62140 = makeCons(symsymbol_45_62string, v0x7f7507e62120);
Obj v0x7f7507e62160 = makeCons(symintern, v0x7f7507e62140);
Obj v0x7f7507e62180 = makeCons(symstring_45append, v0x7f7507e62160);
Obj v0x7f7507e621a0 = makeCons(symnull_63, v0x7f7507e62180);
Obj v0x7f7507e621c0 = makeCons(symnumber_63, v0x7f7507e621a0);
Obj v0x7f7507e621e0 = makeCons(symboolean_63, v0x7f7507e621c0);
Obj v0x7f7507e62200 = makeCons(symatom_63, v0x7f7507e621e0);
Obj v0x7f7507e62220 = makeCons(sympair_63, v0x7f7507e62200);
Obj v0x7f7507e62240 = makeCons(symcdddr, v0x7f7507e62220);
Obj v0x7f7507e62260 = makeCons(symcadddr, v0x7f7507e62240);
Obj v0x7f7507e62280 = makeCons(symcaddr, v0x7f7507e62260);
Obj v0x7f7507e622a0 = makeCons(symcddr, v0x7f7507e62280);
Obj v0x7f7507e622c0 = makeCons(symcdar, v0x7f7507e622a0);
Obj v0x7f7507e622e0 = makeCons(symcaar, v0x7f7507e622c0);
Obj v0x7f7507e62300 = makeCons(symcadr, v0x7f7507e622e0);
Obj v0x7f7507e62320 = primSet(co, symcora_47init_35_42ns_45export_42, v0x7f7507e62300);
Obj v0x7f7507e62440 = primSet(co, symcora_47init_35cadr, globalRef(symcadr));
Obj v0x7f7507e62560 = primSet(co, symcora_47init_35caar, globalRef(symcaar));
Obj v0x7f7507e62680 = primSet(co, symcora_47init_35cdar, globalRef(symcdar));
Obj v0x7f7507e627a0 = primSet(co, symcora_47init_35cddr, globalRef(symcddr));
Obj v0x7f7507e628c0 = primSet(co, symcora_47init_35caddr, globalRef(symcaddr));
Obj v0x7f7507e629e0 = primSet(co, symcora_47init_35cadddr, globalRef(symcadddr));
Obj v0x7f75080ab0c0 = primSet(co, symcora_47init_35cdddr, globalRef(symcdddr));
Obj v0x7f75080ab240 = primSet(co, symcora_47init_35pair_63, globalRef(sympair_63));
Obj v0x7f75080ab460 = primSet(co, symcora_47init_35atom_63, globalRef(symatom_63));
Obj v0x7f75080ab6a0 = primSet(co, symcora_47init_35boolean_63, globalRef(symboolean_63));
Obj v0x7f75080ab880 = primSet(co, symcora_47init_35null_63, globalRef(symnull_63));
Obj v0x7f75080aba80 = primSet(co, symcora_47init_35number_63, globalRef(symnumber_63));
Obj v0x7f75080abcc0 = primSet(co, symcora_47init_35string_45append, globalRef(symstring_45append));
Obj v0x7f75080abf20 = primSet(co, symcora_47init_35intern, globalRef(symintern));
Obj v0x7f75080a6240 = primSet(co, symcora_47init_35symbol_45_62string, globalRef(symsymbol_45_62string));
Obj v0x7f75080a64e0 = primSet(co, symcora_47init_35vector, globalRef(symvector));
Obj v0x7f75080a6660 = primSet(co, symcora_47init_35vector_45set_33, globalRef(symvector_45set_33));
Obj v0x7f75080a67e0 = primSet(co, symcora_47init_35vector_45ref, globalRef(symvector_45ref));
Obj v0x7f75080a6a80 = primSet(co, symcora_47init_35vector_45length, globalRef(symvector_45length));
Obj v0x7f75080a6ce0 = primSet(co, symcora_47init_35bytes, globalRef(symbytes));
Obj v0x7f75080a6e40 = primSet(co, symcora_47init_35bytes_45length, globalRef(symbytes_45length));
Obj v0x7f7507ff6160 = primSet(co, symcora_47init_35value, globalRef(symvalue));
Obj v0x7f7507ff64a0 = primSet(co, symcora_47init_35value_45or, globalRef(symvalue_45or));
Obj v0x7f7507ff6700 = primSet(co, symcora_47init_35read_45file_45as_45sexp, globalRef(symread_45file_45as_45sexp));
Obj v0x7f7507ff69e0 = primSet(co, symcora_47init_35apply, globalRef(symapply));
Obj v0x7f7507ff6b80 = primSet(co, symcora_47init_35load, globalRef(symload));
Obj v0x7f7507ff6da0 = primSet(co, symcora_47init_35load_45so, globalRef(symload_45so));
Obj v0x7f7507ff6f80 = primSet(co, symcora_47init_35import, globalRef(symimport));
Obj v0x7f7507ff51c0 = primSet(co, symcora_47init_35try, globalRef(symtry));
Obj v0x7f7507ff53a0 = primSet(co, symcora_47init_35throw, globalRef(symthrow));
Obj v0x7f7507ff5660 = primSet(co, symcora_47init_35reverse, globalRef(symreverse));
Obj v0x7f7507ff5820 = primSet(co, symcora_47init_35map, globalRef(symmap));
Obj v0x7f7507ff5960 = primSet(co, symcora_47init_35macroexpand, globalRef(symmacroexpand));
Obj v0x7f7507ff5c60 = primSet(co, symcora_47init_35elem_63, globalRef(symelem_63));
Obj v0x7f7507ff5e80 = primSet(co, symcora_47init_35length, globalRef(symlength));
Obj v0x7f7507ff5fc0 = primSet(co, symcora_47init_35filter, globalRef(symfilter));
Obj v0x7f7507ff2100 = primSet(co, symcora_47init_35append, globalRef(symappend));
__nargs = 2;
__arg1 = v0x7f7507ff2100;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj sexp = __arg1;
pushCont(co, 16, clofun0, 1, sexp);
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
Obj v0x7f7507e8cea0 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = v0x7f7507e8cea0;
pushCont(co, 17, clofun0, 1, path);
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
Obj v0x7f7507e82080 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 18, clofun0, 1, path);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35parse_45define_45library);
__arg1 = v0x7f7507e82080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj v0x7f7507e820a0 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = v0x7f7507e820a0;
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
Obj v0x7f7507e82400 = makeCons(makeCString("cora/init"), import);
pushCont(co, 20, clofun0, 3, export, body, v0x7f7507e82400);
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
Obj v0x7f7507e82900 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507e82400= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f7507e82e20 = makeCons(export, Nil);
Obj v0x7f7507e82e40 = makeCons(symbackquote, v0x7f7507e82e20);
Obj v0x7f7507e82e80 = makeCons(v0x7f7507e82e40, Nil);
Obj v0x7f7507e82ea0 = makeCons(sym_42ns_45export_42, v0x7f7507e82e80);
Obj v0x7f7507e82ec0 = makeCons(symdef, v0x7f7507e82ea0);
Obj v0x7f7507e82f20 = makeCons(v0x7f7507e82ec0, body);
pushCont(co, 21, clofun0, 1, v0x7f7507e82400);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = v0x7f7507e82900;
__arg2 = v0x7f7507e82f20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj v0x7f7507e82f40 = __arg1;
Obj v0x7f7507e82400= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507e82f60 = makeCons(symbegin, v0x7f7507e82f40);
Obj v0x7f7507e82fa0 = makeCons(v0x7f7507e82f60, Nil);
Obj v0x7f7507e82fc0 = makeCons(v0x7f7507e82400, v0x7f7507e82fa0);
Obj v0x7f7507e82fe0 = makeCons(closureRef(co, 0), v0x7f7507e82fc0);
Obj v0x7f7507e77000 = makeCons(symns, v0x7f7507e82fe0);
__nargs = 2;
__arg1 = v0x7f7507e77000;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj imp = __arg1;
Obj v0x7f7507e828a0 = makeCons(imp, Nil);
Obj v0x7f7507e828c0 = makeCons(symimport, v0x7f7507e828a0);
__nargs = 2;
__arg1 = v0x7f7507e828c0;
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
Obj v0x7f7507ff6340 = __arg1;
Obj v0x7f7507ff6360 = __arg2;
Obj v0x7f7507ff6380 = __arg3;
Obj v0x7f7507ff63a0 = co->args[4];
Obj v0x7f7507ff64e0 = makeNative(25, clofun0, 0, 4, v0x7f7507ff6340, v0x7f7507ff6360, v0x7f7507ff6380, v0x7f7507ff63a0);
Obj v0x7f7507ea5340 = PRIM_ISCONS(v0x7f7507ff6340);
if (True == v0x7f7507ea5340) {
Obj v0x7f7507ea54e0 = PRIM_CAR(v0x7f7507ff6340);
Obj v0x7f7507ea5500 = PRIM_ISCONS(v0x7f7507ea54e0);
if (True == v0x7f7507ea5500) {
Obj v0x7f7507ea57e0 = PRIM_CAR(v0x7f7507ff6340);
Obj v0x7f7507ea5800 = PRIM_CAR(v0x7f7507ea57e0);
Obj v0x7f7507ea5820 = PRIM_EQ(symimport, v0x7f7507ea5800);
if (True == v0x7f7507ea5820) {
Obj v0x7f7507ea5b00 = PRIM_CAR(v0x7f7507ff6340);
Obj v0x7f7507ea5b20 = PRIM_CDR(v0x7f7507ea5b00);
Obj v0x7f7507ea5b60 = PRIM_ISCONS(v0x7f7507ea5b20);
if (True == v0x7f7507ea5b60) {
Obj v0x7f7507ea5de0 = PRIM_CAR(v0x7f7507ff6340);
Obj v0x7f7507ea5e00 = PRIM_CDR(v0x7f7507ea5de0);
Obj v0x7f7507ea5e20 = PRIM_CAR(v0x7f7507ea5e00);
Obj lib = v0x7f7507ea5e20;
Obj v0x7f7507e951a0 = PRIM_CAR(v0x7f7507ff6340);
Obj v0x7f7507e951c0 = PRIM_CDR(v0x7f7507e951a0);
Obj v0x7f7507e951e0 = PRIM_CDR(v0x7f7507e951c0);
Obj v0x7f7507e95200 = PRIM_EQ(Nil, v0x7f7507e951e0);
if (True == v0x7f7507e95200) {
Obj v0x7f7507e95300 = PRIM_CDR(v0x7f7507ff6340);
Obj rest = v0x7f7507e95300;
Obj imports = v0x7f7507ff6360;
Obj exports = v0x7f7507ff6380;
Obj k = v0x7f7507ff63a0;
Obj v0x7f7507e95580 = makeCons(lib, imports);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45define_45library_45h);
__arg1 = rest;
__arg2 = v0x7f7507e95580;
__arg3 = exports;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f7507ff64e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507ff64e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507ff64e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507ff64e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507ff64e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj v0x7f7507ff68a0 = makeNative(26, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj v0x7f7507eae5c0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507eae5c0) {
Obj v0x7f7507eae800 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507eae820 = PRIM_ISCONS(v0x7f7507eae800);
if (True == v0x7f7507eae820) {
Obj v0x7f7507eaeac0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507eaeae0 = PRIM_CAR(v0x7f7507eaeac0);
Obj v0x7f7507eaeb00 = PRIM_EQ(symexport, v0x7f7507eaeae0);
if (True == v0x7f7507eaeb00) {
Obj v0x7f7507eaeca0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507eaecc0 = PRIM_CDR(v0x7f7507eaeca0);
Obj more = v0x7f7507eaecc0;
Obj v0x7f7507eaee20 = PRIM_CDR(closureRef(co, 0));
Obj rest = v0x7f7507eaee20;
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
__arg0 = v0x7f7507ff68a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507ff68a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507ff68a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj v0x7f7507ff6be0 = makeNative(28, clofun0, 0, 0);
Obj body = closureRef(co, 0);
Obj imports = closureRef(co, 1);
Obj exports = closureRef(co, 2);
Obj k = closureRef(co, 3);
pushCont(co, 27, clofun0, 3, k, exports, body);
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
Obj v0x7f7507eae380 = __arg1;
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exports= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 4;
__arg0 = k;
__arg1 = v0x7f7507eae380;
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
PUSH_CONT_0(co, 30, clofun0);
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
Obj v0x7f7507eb5c60 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45backquote);
__arg1 = v0x7f7507eb5c60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj v0x7f75080a6c40 = __arg1;
Obj v0x7f75080a6cc0 = makeNative(32, clofun0, 0, 1, v0x7f75080a6c40);
Obj x = v0x7f75080a6c40;
Obj v0x7f7507eb5500 = primIsSymbol(x);
if (True == v0x7f7507eb5500) {
Obj v0x7f7507eb5740 = makeCons(x, Nil);
Obj v0x7f7507eb5760 = makeCons(symquote, v0x7f7507eb5740);
__nargs = 2;
__arg1 = v0x7f7507eb5760;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f75080a6cc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj v0x7f75080a6da0 = makeNative(33, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f7507ebb600 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ebb600) {
Obj v0x7f7507ebb840 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507ebb860 = PRIM_EQ(symunquote, v0x7f7507ebb840);
if (True == v0x7f7507ebb860) {
Obj v0x7f7507ebbaa0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ebbac0 = PRIM_ISCONS(v0x7f7507ebbaa0);
if (True == v0x7f7507ebbac0) {
Obj v0x7f7507ebbd20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ebbd40 = PRIM_CAR(v0x7f7507ebbd20);
Obj x = v0x7f7507ebbd40;
Obj v0x7f7507eb50a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eb50c0 = PRIM_CDR(v0x7f7507eb50a0);
Obj v0x7f7507eb50e0 = PRIM_EQ(Nil, v0x7f7507eb50c0);
if (True == v0x7f7507eb50e0) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f75080a6da0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080a6da0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080a6da0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080a6da0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj v0x7f75080a6f60 = makeNative(35, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f7507ec5da0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ec5da0) {
Obj v0x7f7507ec5f40 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f7507ec5f40;
Obj v0x7f7507ebb080 = PRIM_CDR(closureRef(co, 0));
Obj more = v0x7f7507ebb080;
Obj v0x7f7507ebb400 = makeCons(x, more);
PUSH_CONT_0(co, 34, clofun0);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35rewrite_45backquote);
__arg2 = v0x7f7507ebb400;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f75080a6f60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj v0x7f7507ebb420 = __arg1;
Obj v0x7f7507ebb440 = makeCons(symlist, v0x7f7507ebb420);
__nargs = 2;
__arg1 = v0x7f7507ebb440;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj v0x7f7507ff60c0 = makeNative(36, clofun0, 0, 0);
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
Obj v0x7f7507ec55c0 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45begin);
__arg1 = v0x7f7507ec55c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj v0x7f75080a6680 = __arg1;
Obj v0x7f75080a6700 = makeNative(39, clofun0, 0, 1, v0x7f75080a6680);
Obj v0x7f7507ed7ac0 = PRIM_ISCONS(v0x7f75080a6680);
if (True == v0x7f7507ed7ac0) {
Obj v0x7f7507ed7d20 = PRIM_CAR(v0x7f75080a6680);
Obj x = v0x7f7507ed7d20;
Obj v0x7f7507ed7f80 = PRIM_CDR(v0x7f75080a6680);
Obj v0x7f7507ed7fc0 = PRIM_EQ(Nil, v0x7f7507ed7f80);
if (True == v0x7f7507ed7fc0) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f75080a6700;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080a6700;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj v0x7f75080a6860 = makeNative(40, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f7507ee3740 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ee3740) {
Obj v0x7f7507ee3840 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f7507ee3840;
Obj v0x7f7507ee3b40 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ee3b60 = PRIM_ISCONS(v0x7f7507ee3b40);
if (True == v0x7f7507ee3b60) {
Obj v0x7f7507ee3e20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ee3e40 = PRIM_CAR(v0x7f7507ee3e20);
Obj y = v0x7f7507ee3e40;
Obj v0x7f7507ed72e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ed7300 = PRIM_CDR(v0x7f7507ed72e0);
Obj v0x7f7507ed7320 = PRIM_EQ(Nil, v0x7f7507ed7300);
if (True == v0x7f7507ed7320) {
Obj v0x7f7507ed76e0 = makeCons(y, Nil);
Obj v0x7f7507ed7700 = makeCons(x, v0x7f7507ed76e0);
Obj v0x7f7507ed7720 = makeCons(symdo, v0x7f7507ed7700);
__nargs = 2;
__arg1 = v0x7f7507ed7720;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f75080a6860;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080a6860;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080a6860;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj v0x7f75080a6a40 = makeNative(42, clofun0, 0, 0);
Obj v0x7f7507ee5ac0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ee5ac0) {
Obj v0x7f7507ee5c80 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f7507ee5c80;
Obj v0x7f7507ee5e00 = PRIM_CDR(closureRef(co, 0));
Obj y = v0x7f7507ee5e00;
pushCont(co, 41, clofun0, 1, x);
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
__arg0 = v0x7f75080a6a40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj v0x7f7507ee3380 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507ee33c0 = makeCons(v0x7f7507ee3380, Nil);
Obj v0x7f7507ee33e0 = makeCons(x, v0x7f7507ee33c0);
Obj v0x7f7507ee3400 = makeCons(symdo, v0x7f7507ee33e0);
__nargs = 2;
__arg1 = v0x7f7507ee3400;
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
PUSH_CONT_0(co, 44, clofun0);
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
Obj v0x7f7507ee5340 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = v0x7f7507ee5340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj v0x7f75080ab180 = __arg1;
Obj v0x7f75080ab200 = makeNative(46, clofun0, 0, 1, v0x7f75080ab180);
Obj v0x7f7507f75a60 = PRIM_ISCONS(v0x7f75080ab180);
if (True == v0x7f7507f75a60) {
Obj v0x7f7507f75c40 = PRIM_CAR(v0x7f75080ab180);
Obj v0x7f7507f75ca0 = PRIM_EQ(symquote, v0x7f7507f75c40);
if (True == v0x7f7507f75ca0) {
Obj v0x7f7507eef080 = PRIM_CDR(v0x7f75080ab180);
Obj v0x7f7507eef0a0 = PRIM_ISCONS(v0x7f7507eef080);
if (True == v0x7f7507eef0a0) {
Obj v0x7f7507eef340 = PRIM_CDR(v0x7f75080ab180);
Obj v0x7f7507eef360 = PRIM_CAR(v0x7f7507eef340);
Obj x = v0x7f7507eef360;
Obj v0x7f7507eef780 = PRIM_CDR(v0x7f75080ab180);
Obj v0x7f7507eef7a0 = PRIM_CDR(v0x7f7507eef780);
Obj v0x7f7507eef7c0 = PRIM_EQ(Nil, v0x7f7507eef7a0);
if (True == v0x7f7507eef7c0) {
Obj v0x7f7507eefb60 = makeCons(x, Nil);
Obj v0x7f7507eefb80 = makeCons(symquote, v0x7f7507eefb60);
__nargs = 2;
__arg1 = v0x7f7507eefb80;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f75080ab200;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab200;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab200;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab200;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj v0x7f75080ab3c0 = makeNative(48, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f7507fc00a0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507fc00a0) {
Obj v0x7f7507fc0320 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507fc03c0 = PRIM_EQ(symcons_63, v0x7f7507fc0320);
if (True == v0x7f7507fc03c0) {
Obj v0x7f7507fc0600 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fc0640 = PRIM_ISCONS(v0x7f7507fc0600);
if (True == v0x7f7507fc0640) {
Obj v0x7f7507fc09c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fc09e0 = PRIM_CAR(v0x7f7507fc09c0);
Obj x = v0x7f7507fc09e0;
Obj v0x7f7507fc0e20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fc0f40 = PRIM_CDR(v0x7f7507fc0e20);
Obj v0x7f7507fc0f60 = PRIM_EQ(Nil, v0x7f7507fc0f40);
if (True == v0x7f7507fc0f60) {
PUSH_CONT_0(co, 47, clofun0);
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
__arg0 = v0x7f75080ab3c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab3c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab3c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab3c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj v0x7f7507f750e0 = __arg1;
Obj x1 = v0x7f7507f750e0;
Obj v0x7f7507f75500 = makeCons(x1, Nil);
Obj v0x7f7507f75540 = makeCons(symcons_63, v0x7f7507f75500);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f7507f75540;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj v0x7f75080ab580 = makeNative(0, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f7507fea800 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507fea800) {
Obj v0x7f7507feac60 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507feac80 = PRIM_EQ(symcar, v0x7f7507feac60);
if (True == v0x7f7507feac80) {
Obj v0x7f7507feaf40 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fe6020 = PRIM_ISCONS(v0x7f7507feaf40);
if (True == v0x7f7507fe6020) {
Obj v0x7f7507fe61e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fe6200 = PRIM_CAR(v0x7f7507fe61e0);
Obj x = v0x7f7507fe6200;
Obj v0x7f7507fe6500 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fe6520 = PRIM_CDR(v0x7f7507fe6500);
Obj v0x7f7507fe6540 = PRIM_EQ(Nil, v0x7f7507fe6520);
if (True == v0x7f7507fe6540) {
PUSH_CONT_0(co, 49, clofun0);
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
__arg0 = v0x7f75080ab580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj v0x7f7507fe6760 = __arg1;
Obj x1 = v0x7f7507fe6760;
Obj v0x7f7507fe6b40 = makeCons(x1, Nil);
Obj v0x7f7507fe6bc0 = makeCons(symcar, v0x7f7507fe6b40);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f7507fe6bc0;
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
Obj v0x7f75080ab740 = makeNative(2, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f7507ff5fe0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ff5fe0) {
Obj v0x7f7507ff2320 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507ff2340 = PRIM_EQ(symcdr, v0x7f7507ff2320);
if (True == v0x7f7507ff2340) {
Obj v0x7f7507ff2680 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff26a0 = PRIM_ISCONS(v0x7f7507ff2680);
if (True == v0x7f7507ff26a0) {
Obj v0x7f7507ff2960 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff2980 = PRIM_CAR(v0x7f7507ff2960);
Obj x = v0x7f7507ff2980;
Obj v0x7f7507ff2da0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff2dc0 = PRIM_CDR(v0x7f7507ff2da0);
Obj v0x7f7507ff2e00 = PRIM_EQ(Nil, v0x7f7507ff2dc0);
if (True == v0x7f7507ff2e00) {
PUSH_CONT_0(co, 1, clofun1);
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
__arg0 = v0x7f75080ab740;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab740;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab740;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab740;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj v0x7f7507ff2f40 = __arg1;
Obj x1 = v0x7f7507ff2f40;
Obj v0x7f7507fea380 = makeCons(x1, Nil);
Obj v0x7f7507fea3a0 = makeCons(symcdr, v0x7f7507fea380);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f7507fea3a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj v0x7f75080ab900 = makeNative(5, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f75080a6980 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f75080a6980) {
Obj v0x7f75080a6c60 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f75080a6ca0 = PRIM_EQ(symand, v0x7f75080a6c60);
if (True == v0x7f75080a6ca0) {
Obj v0x7f75080a6f40 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f75080a6fa0 = PRIM_ISCONS(v0x7f75080a6f40);
if (True == v0x7f75080a6fa0) {
Obj v0x7f7507ff62e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff6320 = PRIM_CAR(v0x7f7507ff62e0);
Obj x = v0x7f7507ff6320;
Obj v0x7f7507ff6800 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff6820 = PRIM_CDR(v0x7f7507ff6800);
Obj v0x7f7507ff6840 = PRIM_ISCONS(v0x7f7507ff6820);
if (True == v0x7f7507ff6840) {
Obj v0x7f7507ff6c60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff6c80 = PRIM_CDR(v0x7f7507ff6c60);
Obj v0x7f7507ff6ca0 = PRIM_CAR(v0x7f7507ff6c80);
Obj y = v0x7f7507ff6ca0;
Obj v0x7f7507ff5120 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff5160 = PRIM_CDR(v0x7f7507ff5120);
Obj v0x7f7507ff5180 = PRIM_CDR(v0x7f7507ff5160);
Obj v0x7f7507ff51a0 = PRIM_EQ(Nil, v0x7f7507ff5180);
if (True == v0x7f7507ff51a0) {
pushCont(co, 3, clofun1, 1, y);
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
__arg0 = v0x7f75080ab900;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab900;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab900;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab900;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080ab900;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj v0x7f7507ff5340 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1 = v0x7f7507ff5340;
pushCont(co, 4, clofun1, 1, x1);
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
Obj v0x7f7507ff5500 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y1 = v0x7f7507ff5500;
Obj v0x7f7507ff5980 = makeCons(y1, Nil);
Obj v0x7f7507ff59e0 = makeCons(x1, v0x7f7507ff5980);
Obj v0x7f7507ff5a00 = makeCons(symand, v0x7f7507ff59e0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f7507ff5a00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj v0x7f75080abb40 = makeNative(7, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f75080ab100 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f75080ab100) {
Obj v0x7f75080ab3a0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f75080ab3e0 = PRIM_EQ(symnull_63, v0x7f75080ab3a0);
if (True == v0x7f75080ab3e0) {
Obj v0x7f75080ab660 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f75080ab680 = PRIM_ISCONS(v0x7f75080ab660);
if (True == v0x7f75080ab680) {
Obj v0x7f75080ab960 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f75080ab980 = PRIM_CAR(v0x7f75080ab960);
Obj x = v0x7f75080ab980;
Obj v0x7f75080abd60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f75080abd80 = PRIM_CDR(v0x7f75080abd60);
Obj v0x7f75080abda0 = PRIM_EQ(Nil, v0x7f75080abd80);
if (True == v0x7f75080abda0) {
PUSH_CONT_0(co, 6, clofun1);
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
__arg0 = v0x7f75080abb40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080abb40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080abb40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080abb40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj v0x7f75080abf40 = __arg1;
Obj x1 = v0x7f75080abf40;
Obj v0x7f75080a64a0 = makeCons(x1, Nil);
Obj v0x7f75080a64c0 = makeCons(symnull_63, v0x7f75080a64a0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f75080a64c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj v0x7f75080abd00 = makeNative(9, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f7507e95560 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507e95560) {
Obj v0x7f7507e95720 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507e95740 = PRIM_EQ(symnot, v0x7f7507e95720);
if (True == v0x7f7507e95740) {
Obj v0x7f7507e958e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507e8c020 = PRIM_ISCONS(v0x7f7507e958e0);
if (True == v0x7f7507e8c020) {
Obj v0x7f7507e8c1c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507e8c1e0 = PRIM_CAR(v0x7f7507e8c1c0);
Obj x = v0x7f7507e8c1e0;
Obj v0x7f7507e8c440 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507e8c460 = PRIM_CDR(v0x7f7507e8c440);
Obj v0x7f7507e8c480 = PRIM_EQ(Nil, v0x7f7507e8c460);
if (True == v0x7f7507e8c480) {
PUSH_CONT_0(co, 8, clofun1);
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
__arg0 = v0x7f75080abd00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080abd00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080abd00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080abd00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj v0x7f7507e8c580 = __arg1;
Obj x1 = v0x7f7507e8c580;
Obj v0x7f7507e8c7c0 = makeCons(x1, Nil);
Obj v0x7f7507e8c7e0 = makeCons(symnot, v0x7f7507e8c7c0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f7507e8c7e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj v0x7f75080abec0 = makeNative(13, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f7507eae1e0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507eae1e0) {
Obj v0x7f7507eae3a0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507eae3c0 = PRIM_EQ(symif, v0x7f7507eae3a0);
if (True == v0x7f7507eae3c0) {
Obj v0x7f7507eae620 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eae640 = PRIM_ISCONS(v0x7f7507eae620);
if (True == v0x7f7507eae640) {
Obj v0x7f7507eae840 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eae860 = PRIM_CAR(v0x7f7507eae840);
Obj x = v0x7f7507eae860;
Obj v0x7f7507eaece0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eaed00 = PRIM_CDR(v0x7f7507eaece0);
Obj v0x7f7507eaed20 = PRIM_ISCONS(v0x7f7507eaed00);
if (True == v0x7f7507eaed20) {
Obj v0x7f7507eaef60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eaef80 = PRIM_CDR(v0x7f7507eaef60);
Obj v0x7f7507eaefa0 = PRIM_CAR(v0x7f7507eaef80);
Obj y = v0x7f7507eaefa0;
Obj v0x7f7507ea5280 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ea52a0 = PRIM_CDR(v0x7f7507ea5280);
Obj v0x7f7507ea52c0 = PRIM_CDR(v0x7f7507ea52a0);
Obj v0x7f7507ea52e0 = PRIM_ISCONS(v0x7f7507ea52c0);
if (True == v0x7f7507ea52e0) {
Obj v0x7f7507ea55c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ea55e0 = PRIM_CDR(v0x7f7507ea55c0);
Obj v0x7f7507ea5600 = PRIM_CDR(v0x7f7507ea55e0);
Obj v0x7f7507ea5620 = PRIM_CAR(v0x7f7507ea5600);
Obj z = v0x7f7507ea5620;
Obj v0x7f7507ea59c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ea59e0 = PRIM_CDR(v0x7f7507ea59c0);
Obj v0x7f7507ea5a00 = PRIM_CDR(v0x7f7507ea59e0);
Obj v0x7f7507ea5a20 = PRIM_CDR(v0x7f7507ea5a00);
Obj v0x7f7507ea5a40 = PRIM_EQ(Nil, v0x7f7507ea5a20);
if (True == v0x7f7507ea5a40) {
pushCont(co, 10, clofun1, 2, y, z);
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
__arg0 = v0x7f75080abec0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080abec0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080abec0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080abec0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080abec0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080abec0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj v0x7f7507ea5b40 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x1 = v0x7f7507ea5b40;
pushCont(co, 11, clofun1, 2, z, x1);
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
Obj v0x7f7507ea5c40 = __arg1;
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj y1 = v0x7f7507ea5c40;
pushCont(co, 12, clofun1, 2, y1, x1);
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
Obj v0x7f7507ea5d40 = __arg1;
Obj y1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj z1 = v0x7f7507ea5d40;
Obj v0x7f7507e95100 = makeCons(z1, Nil);
Obj v0x7f7507e95120 = makeCons(y1, v0x7f7507e95100);
Obj v0x7f7507e95140 = makeCons(x1, v0x7f7507e95120);
Obj v0x7f7507e95160 = makeCons(symif, v0x7f7507e95140);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f7507e95160;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj v0x7f75080a6180 = makeNative(15, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f7507ebb920 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ebb920) {
Obj v0x7f7507ebbb60 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507ebbb80 = PRIM_EQ(symlambda, v0x7f7507ebbb60);
if (True == v0x7f7507ebbb80) {
Obj v0x7f7507ebbda0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ebbdc0 = PRIM_ISCONS(v0x7f7507ebbda0);
if (True == v0x7f7507ebbdc0) {
Obj v0x7f7507ebbf60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ebbf80 = PRIM_CAR(v0x7f7507ebbf60);
Obj args = v0x7f7507ebbf80;
Obj v0x7f7507eb5240 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eb5260 = PRIM_CDR(v0x7f7507eb5240);
Obj v0x7f7507eb5280 = PRIM_ISCONS(v0x7f7507eb5260);
if (True == v0x7f7507eb5280) {
Obj v0x7f7507eb5580 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eb55a0 = PRIM_CDR(v0x7f7507eb5580);
Obj v0x7f7507eb55c0 = PRIM_CAR(v0x7f7507eb55a0);
Obj body = v0x7f7507eb55c0;
Obj v0x7f7507eb58c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eb58e0 = PRIM_CDR(v0x7f7507eb58c0);
Obj v0x7f7507eb5900 = PRIM_CDR(v0x7f7507eb58e0);
Obj v0x7f7507eb5920 = PRIM_EQ(Nil, v0x7f7507eb5900);
if (True == v0x7f7507eb5920) {
pushCont(co, 14, clofun1, 1, args);
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
__arg0 = v0x7f75080a6180;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080a6180;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080a6180;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080a6180;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f75080a6180;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj v0x7f7507eb5d40 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507eb5d80 = makeCons(v0x7f7507eb5d40, Nil);
Obj v0x7f7507eb5da0 = makeCons(args, v0x7f7507eb5d80);
Obj v0x7f7507eb5dc0 = makeCons(symlambda, v0x7f7507eb5da0);
__nargs = 2;
__arg1 = v0x7f7507eb5dc0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj v0x7f75080a63c0 = makeNative(16, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f7507ebb360 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ebb360) {
Obj v0x7f7507ebb4a0 = PRIM_CAR(closureRef(co, 0));
Obj f = v0x7f7507ebb4a0;
Obj v0x7f7507ebb5a0 = PRIM_CDR(closureRef(co, 0));
Obj args = v0x7f7507ebb5a0;
Obj v0x7f7507ebb7a0 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35propagate_45boolean);
__arg2 = v0x7f7507ebb7a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f75080a63c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj v0x7f75080a6520 = makeNative(17, clofun1, 0, 0);
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
Obj v0x7f7507e77160 = __arg1;
Obj v0x7f7507e771e0 = makeNative(19, clofun1, 0, 1, v0x7f7507e77160);
Obj v0x7f7507ee5300 = PRIM_ISCONS(v0x7f7507e77160);
if (True == v0x7f7507ee5300) {
Obj v0x7f7507ee55a0 = PRIM_CAR(v0x7f7507e77160);
Obj v0x7f7507ee55e0 = PRIM_EQ(symcar, v0x7f7507ee55a0);
if (True == v0x7f7507ee55e0) {
Obj v0x7f7507ee5880 = PRIM_CDR(v0x7f7507e77160);
Obj v0x7f7507ee58a0 = PRIM_ISCONS(v0x7f7507ee5880);
if (True == v0x7f7507ee58a0) {
Obj v0x7f7507ee5b80 = PRIM_CDR(v0x7f7507e77160);
Obj v0x7f7507ee5ba0 = PRIM_CAR(v0x7f7507ee5b80);
Obj v0x7f7507ee5bc0 = PRIM_ISCONS(v0x7f7507ee5ba0);
if (True == v0x7f7507ee5bc0) {
Obj v0x7f7507ee3080 = PRIM_CDR(v0x7f7507e77160);
Obj v0x7f7507ee30a0 = PRIM_CAR(v0x7f7507ee3080);
Obj v0x7f7507ee30c0 = PRIM_CAR(v0x7f7507ee30a0);
Obj v0x7f7507ee30e0 = PRIM_EQ(symcons, v0x7f7507ee30c0);
if (True == v0x7f7507ee30e0) {
Obj v0x7f7507ee34e0 = PRIM_CDR(v0x7f7507e77160);
Obj v0x7f7507ee3560 = PRIM_CAR(v0x7f7507ee34e0);
Obj v0x7f7507ee3580 = PRIM_CDR(v0x7f7507ee3560);
Obj v0x7f7507ee35a0 = PRIM_ISCONS(v0x7f7507ee3580);
if (True == v0x7f7507ee35a0) {
Obj v0x7f7507ee3a40 = PRIM_CDR(v0x7f7507e77160);
Obj v0x7f7507ee3a60 = PRIM_CAR(v0x7f7507ee3a40);
Obj v0x7f7507ee3a80 = PRIM_CDR(v0x7f7507ee3a60);
Obj v0x7f7507ee3aa0 = PRIM_CAR(v0x7f7507ee3a80);
Obj x = v0x7f7507ee3aa0;
Obj v0x7f7507ee3f60 = PRIM_CDR(v0x7f7507e77160);
Obj v0x7f7507ee3f80 = PRIM_CAR(v0x7f7507ee3f60);
Obj v0x7f7507ed7000 = PRIM_CDR(v0x7f7507ee3f80);
Obj v0x7f7507ed7020 = PRIM_CDR(v0x7f7507ed7000);
Obj v0x7f7507ed7040 = PRIM_ISCONS(v0x7f7507ed7020);
if (True == v0x7f7507ed7040) {
Obj v0x7f7507ed7580 = PRIM_CDR(v0x7f7507e77160);
Obj v0x7f7507ed75a0 = PRIM_CAR(v0x7f7507ed7580);
Obj v0x7f7507ed75c0 = PRIM_CDR(v0x7f7507ed75a0);
Obj v0x7f7507ed75e0 = PRIM_CDR(v0x7f7507ed75c0);
Obj v0x7f7507ed7600 = PRIM_CAR(v0x7f7507ed75e0);
Obj __ = v0x7f7507ed7600;
Obj v0x7f7507ed7bc0 = PRIM_CDR(v0x7f7507e77160);
Obj v0x7f7507ed7be0 = PRIM_CAR(v0x7f7507ed7bc0);
Obj v0x7f7507ed7c00 = PRIM_CDR(v0x7f7507ed7be0);
Obj v0x7f7507ed7c20 = PRIM_CDR(v0x7f7507ed7c00);
Obj v0x7f7507ed7c40 = PRIM_CDR(v0x7f7507ed7c20);
Obj v0x7f7507ed7c60 = PRIM_EQ(Nil, v0x7f7507ed7c40);
if (True == v0x7f7507ed7c60) {
Obj v0x7f7507ed7fe0 = PRIM_CDR(v0x7f7507e77160);
Obj v0x7f7507ec5000 = PRIM_CDR(v0x7f7507ed7fe0);
Obj v0x7f7507ec5020 = PRIM_EQ(Nil, v0x7f7507ec5000);
if (True == v0x7f7507ec5020) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f7507e771e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e771e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e771e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e771e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e771e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e771e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e771e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e771e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e771e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj v0x7f7507e77500 = makeNative(20, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f7507fe6ae0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507fe6ae0) {
Obj v0x7f7507fe6d60 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507fe6d80 = PRIM_EQ(symcdr, v0x7f7507fe6d60);
if (True == v0x7f7507fe6d80) {
Obj v0x7f7507fc0020 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fc0040 = PRIM_ISCONS(v0x7f7507fc0020);
if (True == v0x7f7507fc0040) {
Obj v0x7f7507fc0340 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fc0360 = PRIM_CAR(v0x7f7507fc0340);
Obj v0x7f7507fc0380 = PRIM_ISCONS(v0x7f7507fc0360);
if (True == v0x7f7507fc0380) {
Obj v0x7f7507fc08a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fc08c0 = PRIM_CAR(v0x7f7507fc08a0);
Obj v0x7f7507fc08e0 = PRIM_CAR(v0x7f7507fc08c0);
Obj v0x7f7507fc0900 = PRIM_EQ(symcons, v0x7f7507fc08e0);
if (True == v0x7f7507fc0900) {
Obj v0x7f7507fc0d60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fc0d80 = PRIM_CAR(v0x7f7507fc0d60);
Obj v0x7f7507fc0da0 = PRIM_CDR(v0x7f7507fc0d80);
Obj v0x7f7507fc0dc0 = PRIM_ISCONS(v0x7f7507fc0da0);
if (True == v0x7f7507fc0dc0) {
Obj v0x7f7507f75240 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507f75260 = PRIM_CAR(v0x7f7507f75240);
Obj v0x7f7507f75280 = PRIM_CDR(v0x7f7507f75260);
Obj v0x7f7507f75300 = PRIM_CAR(v0x7f7507f75280);
Obj __ = v0x7f7507f75300;
Obj v0x7f7507f75820 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507f75840 = PRIM_CAR(v0x7f7507f75820);
Obj v0x7f7507f75860 = PRIM_CDR(v0x7f7507f75840);
Obj v0x7f7507f75880 = PRIM_CDR(v0x7f7507f75860);
Obj v0x7f7507f758a0 = PRIM_ISCONS(v0x7f7507f75880);
if (True == v0x7f7507f758a0) {
Obj v0x7f7507f75e00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507f75e20 = PRIM_CAR(v0x7f7507f75e00);
Obj v0x7f7507f75e40 = PRIM_CDR(v0x7f7507f75e20);
Obj v0x7f7507f75e60 = PRIM_CDR(v0x7f7507f75e40);
Obj v0x7f7507f75e80 = PRIM_CAR(v0x7f7507f75e60);
Obj x = v0x7f7507f75e80;
Obj v0x7f7507eef4e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eef520 = PRIM_CAR(v0x7f7507eef4e0);
Obj v0x7f7507eef560 = PRIM_CDR(v0x7f7507eef520);
Obj v0x7f7507eef600 = PRIM_CDR(v0x7f7507eef560);
Obj v0x7f7507eef620 = PRIM_CDR(v0x7f7507eef600);
Obj v0x7f7507eef640 = PRIM_EQ(Nil, v0x7f7507eef620);
if (True == v0x7f7507eef640) {
Obj v0x7f7507eefa60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eefa80 = PRIM_CDR(v0x7f7507eefa60);
Obj v0x7f7507eefaa0 = PRIM_EQ(Nil, v0x7f7507eefa80);
if (True == v0x7f7507eefaa0) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f7507e77500;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77500;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77500;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77500;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77500;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77500;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77500;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77500;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77500;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj v0x7f7507e77820 = makeNative(21, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f7507ff5480 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ff5480) {
Obj v0x7f7507ff57c0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507ff57e0 = PRIM_EQ(symcons_63, v0x7f7507ff57c0);
if (True == v0x7f7507ff57e0) {
Obj v0x7f7507ff59a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff59c0 = PRIM_ISCONS(v0x7f7507ff59a0);
if (True == v0x7f7507ff59c0) {
Obj v0x7f7507ff5d60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff5dc0 = PRIM_CAR(v0x7f7507ff5d60);
Obj v0x7f7507ff5de0 = PRIM_ISCONS(v0x7f7507ff5dc0);
if (True == v0x7f7507ff5de0) {
Obj v0x7f7507ff21a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff21c0 = PRIM_CAR(v0x7f7507ff21a0);
Obj v0x7f7507ff21e0 = PRIM_CAR(v0x7f7507ff21c0);
Obj v0x7f7507ff2240 = PRIM_EQ(symcons, v0x7f7507ff21e0);
if (True == v0x7f7507ff2240) {
Obj v0x7f7507ff2720 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff2740 = PRIM_CAR(v0x7f7507ff2720);
Obj v0x7f7507ff2760 = PRIM_CDR(v0x7f7507ff2740);
Obj v0x7f7507ff2780 = PRIM_ISCONS(v0x7f7507ff2760);
if (True == v0x7f7507ff2780) {
Obj v0x7f7507ff2b40 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff2b60 = PRIM_CAR(v0x7f7507ff2b40);
Obj v0x7f7507ff2c00 = PRIM_CDR(v0x7f7507ff2b60);
Obj v0x7f7507ff2c20 = PRIM_CAR(v0x7f7507ff2c00);
Obj __ = v0x7f7507ff2c20;
Obj v0x7f7507fea100 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fea120 = PRIM_CAR(v0x7f7507fea100);
Obj v0x7f7507fea140 = PRIM_CDR(v0x7f7507fea120);
Obj v0x7f7507fea180 = PRIM_CDR(v0x7f7507fea140);
Obj v0x7f7507fea1a0 = PRIM_ISCONS(v0x7f7507fea180);
if (True == v0x7f7507fea1a0) {
Obj v0x7f7507fea660 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fea6a0 = PRIM_CAR(v0x7f7507fea660);
Obj v0x7f7507fea6e0 = PRIM_CDR(v0x7f7507fea6a0);
Obj v0x7f7507fea700 = PRIM_CDR(v0x7f7507fea6e0);
Obj v0x7f7507fea720 = PRIM_CAR(v0x7f7507fea700);
__ = v0x7f7507fea720;
Obj v0x7f7507feae40 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507feae60 = PRIM_CAR(v0x7f7507feae40);
Obj v0x7f7507feae80 = PRIM_CDR(v0x7f7507feae60);
Obj v0x7f7507feaea0 = PRIM_CDR(v0x7f7507feae80);
Obj v0x7f7507feaec0 = PRIM_CDR(v0x7f7507feaea0);
Obj v0x7f7507feaee0 = PRIM_EQ(Nil, v0x7f7507feaec0);
if (True == v0x7f7507feaee0) {
Obj v0x7f7507fe6260 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fe6280 = PRIM_CDR(v0x7f7507fe6260);
Obj v0x7f7507fe62a0 = PRIM_EQ(Nil, v0x7f7507fe6280);
if (True == v0x7f7507fe62a0) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f7507e77820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj v0x7f7507e77b40 = makeNative(22, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f75080a6600 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f75080a6600) {
Obj v0x7f75080a6900 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f75080a6920 = PRIM_EQ(symand, v0x7f75080a6900);
if (True == v0x7f75080a6920) {
Obj v0x7f75080a6b80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f75080a6ba0 = PRIM_ISCONS(v0x7f75080a6b80);
if (True == v0x7f75080a6ba0) {
Obj v0x7f75080a6ee0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f75080a6f00 = PRIM_CAR(v0x7f75080a6ee0);
Obj v0x7f75080a6f20 = PRIM_EQ(True, v0x7f75080a6f00);
if (True == v0x7f75080a6f20) {
Obj v0x7f7507ff6400 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff6420 = PRIM_CDR(v0x7f7507ff6400);
Obj v0x7f7507ff6440 = PRIM_ISCONS(v0x7f7507ff6420);
if (True == v0x7f7507ff6440) {
Obj v0x7f7507ff6940 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff6960 = PRIM_CDR(v0x7f7507ff6940);
Obj v0x7f7507ff6980 = PRIM_CAR(v0x7f7507ff6960);
Obj v0x7f7507ff69a0 = PRIM_EQ(True, v0x7f7507ff6980);
if (True == v0x7f7507ff69a0) {
Obj v0x7f7507ff6e00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ff6e40 = PRIM_CDR(v0x7f7507ff6e00);
Obj v0x7f7507ff6e60 = PRIM_CDR(v0x7f7507ff6e40);
Obj v0x7f7507ff6e80 = PRIM_EQ(Nil, v0x7f7507ff6e60);
if (True == v0x7f7507ff6e80) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f7507e77b40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77b40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77b40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77b40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77b40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77b40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77b40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj v0x7f7507e77d80 = makeNative(23, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f75080ab340 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f75080ab340) {
Obj v0x7f75080ab540 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f75080ab560 = PRIM_EQ(symnull_63, v0x7f75080ab540);
if (True == v0x7f75080ab560) {
Obj v0x7f75080ab800 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f75080ab820 = PRIM_ISCONS(v0x7f75080ab800);
if (True == v0x7f75080ab820) {
Obj v0x7f75080abb80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f75080abba0 = PRIM_CAR(v0x7f75080abb80);
Obj v0x7f75080abc20 = PRIM_EQ(Nil, v0x7f75080abba0);
if (True == v0x7f75080abc20) {
Obj v0x7f75080abf60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f75080a6000 = PRIM_CDR(v0x7f75080abf60);
Obj v0x7f75080a6020 = PRIM_EQ(Nil, v0x7f75080a6000);
if (True == v0x7f75080a6020) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f7507e77d80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77d80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77d80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77d80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77d80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj v0x7f7507e77f40 = makeNative(24, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f7507ed7ce0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ed7ce0) {
Obj v0x7f7507ed7f00 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507ed7f20 = PRIM_EQ(symnull_63, v0x7f7507ed7f00);
if (True == v0x7f7507ed7f20) {
Obj v0x7f7507ec5120 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ec5140 = PRIM_ISCONS(v0x7f7507ec5120);
if (True == v0x7f7507ec5140) {
Obj v0x7f7507ec53c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ec5460 = PRIM_CAR(v0x7f7507ec53c0);
Obj v0x7f7507ec5480 = PRIM_ISCONS(v0x7f7507ec5460);
if (True == v0x7f7507ec5480) {
Obj v0x7f7507ec5800 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ec5820 = PRIM_CAR(v0x7f7507ec5800);
Obj v0x7f7507ec5840 = PRIM_CAR(v0x7f7507ec5820);
Obj v0x7f7507ec5860 = PRIM_EQ(symcons, v0x7f7507ec5840);
if (True == v0x7f7507ec5860) {
Obj v0x7f7507ec5c60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ec5c80 = PRIM_CAR(v0x7f7507ec5c60);
Obj v0x7f7507ec5ca0 = PRIM_CDR(v0x7f7507ec5c80);
Obj v0x7f7507ec5cc0 = PRIM_ISCONS(v0x7f7507ec5ca0);
if (True == v0x7f7507ec5cc0) {
Obj v0x7f7507ebb0a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ebb0c0 = PRIM_CAR(v0x7f7507ebb0a0);
Obj v0x7f7507ebb0e0 = PRIM_CDR(v0x7f7507ebb0c0);
Obj v0x7f7507ebb100 = PRIM_CAR(v0x7f7507ebb0e0);
Obj __ = v0x7f7507ebb100;
Obj v0x7f7507eb5bc0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eb5be0 = PRIM_CAR(v0x7f7507eb5bc0);
Obj v0x7f7507eb5c00 = PRIM_CDR(v0x7f7507eb5be0);
Obj v0x7f7507eb5c20 = PRIM_CDR(v0x7f7507eb5c00);
Obj v0x7f7507eb5c40 = PRIM_ISCONS(v0x7f7507eb5c20);
if (True == v0x7f7507eb5c40) {
Obj v0x7f7507eb5fc0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eb5fe0 = PRIM_CAR(v0x7f7507eb5fc0);
Obj v0x7f7507eae000 = PRIM_CDR(v0x7f7507eb5fe0);
Obj v0x7f7507eae020 = PRIM_CDR(v0x7f7507eae000);
Obj v0x7f7507eae040 = PRIM_CAR(v0x7f7507eae020);
__ = v0x7f7507eae040;
Obj v0x7f7507eae480 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eae4a0 = PRIM_CAR(v0x7f7507eae480);
Obj v0x7f7507eae4c0 = PRIM_CDR(v0x7f7507eae4a0);
Obj v0x7f7507eae4e0 = PRIM_CDR(v0x7f7507eae4c0);
Obj v0x7f7507eae500 = PRIM_CDR(v0x7f7507eae4e0);
Obj v0x7f7507eae520 = PRIM_EQ(Nil, v0x7f7507eae500);
if (True == v0x7f7507eae520) {
Obj v0x7f7507eae780 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eae7a0 = PRIM_CDR(v0x7f7507eae780);
Obj v0x7f7507eae7c0 = PRIM_EQ(Nil, v0x7f7507eae7a0);
if (True == v0x7f7507eae7c0) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f7507e77f40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77f40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77f40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77f40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77f40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77f40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77f40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77f40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e77f40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj v0x7f7507e6e260 = makeNative(25, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f7507ee3d20 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ee3d20) {
Obj v0x7f7507ee3fc0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507ee3fe0 = PRIM_EQ(symnot, v0x7f7507ee3fc0);
if (True == v0x7f7507ee3fe0) {
Obj v0x7f7507ed71a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ed7200 = PRIM_ISCONS(v0x7f7507ed71a0);
if (True == v0x7f7507ed7200) {
Obj v0x7f7507ed74e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ed7500 = PRIM_CAR(v0x7f7507ed74e0);
Obj v0x7f7507ed7560 = PRIM_EQ(True, v0x7f7507ed7500);
if (True == v0x7f7507ed7560) {
Obj v0x7f7507ed7820 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ed7840 = PRIM_CDR(v0x7f7507ed7820);
Obj v0x7f7507ed7860 = PRIM_EQ(Nil, v0x7f7507ed7840);
if (True == v0x7f7507ed7860) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e260;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e260;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e260;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e260;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e260;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj v0x7f7507e6e420 = makeNative(26, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f7507ee5d00 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ee5d00) {
Obj v0x7f7507ee5f40 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507ee5f80 = PRIM_EQ(symnot, v0x7f7507ee5f40);
if (True == v0x7f7507ee5f80) {
Obj v0x7f7507ee31e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ee3200 = PRIM_ISCONS(v0x7f7507ee31e0);
if (True == v0x7f7507ee3200) {
Obj v0x7f7507ee3500 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ee3520 = PRIM_CAR(v0x7f7507ee3500);
Obj v0x7f7507ee3540 = PRIM_EQ(False, v0x7f7507ee3520);
if (True == v0x7f7507ee3540) {
Obj v0x7f7507ee38a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ee38e0 = PRIM_CDR(v0x7f7507ee38a0);
Obj v0x7f7507ee3900 = PRIM_EQ(Nil, v0x7f7507ee38e0);
if (True == v0x7f7507ee3900) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj v0x7f7507e6e5e0 = makeNative(27, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f7507f75aa0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507f75aa0) {
Obj v0x7f7507f75c60 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507f75c80 = PRIM_EQ(symif, v0x7f7507f75c60);
if (True == v0x7f7507f75c80) {
Obj v0x7f7507f75ec0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507f75f60 = PRIM_ISCONS(v0x7f7507f75ec0);
if (True == v0x7f7507f75f60) {
Obj v0x7f7507eef280 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eef2a0 = PRIM_CAR(v0x7f7507eef280);
Obj v0x7f7507eef2c0 = PRIM_EQ(True, v0x7f7507eef2a0);
if (True == v0x7f7507eef2c0) {
Obj v0x7f7507eef580 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eef5a0 = PRIM_CDR(v0x7f7507eef580);
Obj v0x7f7507eef5e0 = PRIM_ISCONS(v0x7f7507eef5a0);
if (True == v0x7f7507eef5e0) {
Obj v0x7f7507eef8a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eef900 = PRIM_CDR(v0x7f7507eef8a0);
Obj v0x7f7507eef9c0 = PRIM_CAR(v0x7f7507eef900);
Obj y = v0x7f7507eef9c0;
Obj v0x7f7507eefcc0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eefce0 = PRIM_CDR(v0x7f7507eefcc0);
Obj v0x7f7507eefd00 = PRIM_CDR(v0x7f7507eefce0);
Obj v0x7f7507eefd20 = PRIM_ISCONS(v0x7f7507eefd00);
if (True == v0x7f7507eefd20) {
Obj v0x7f7507ee51a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ee51c0 = PRIM_CDR(v0x7f7507ee51a0);
Obj v0x7f7507ee51e0 = PRIM_CDR(v0x7f7507ee51c0);
Obj v0x7f7507ee5200 = PRIM_CAR(v0x7f7507ee51e0);
Obj z = v0x7f7507ee5200;
Obj v0x7f7507ee56c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ee56e0 = PRIM_CDR(v0x7f7507ee56c0);
Obj v0x7f7507ee5720 = PRIM_CDR(v0x7f7507ee56e0);
Obj v0x7f7507ee5740 = PRIM_CDR(v0x7f7507ee5720);
Obj v0x7f7507ee5760 = PRIM_EQ(Nil, v0x7f7507ee5740);
if (True == v0x7f7507ee5760) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e5e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e5e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e5e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e5e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e5e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e5e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e5e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj v0x7f7507e6e8a0 = makeNative(28, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f7507fe6780 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507fe6780) {
Obj v0x7f7507fe6980 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507fe6a00 = PRIM_EQ(symif, v0x7f7507fe6980);
if (True == v0x7f7507fe6a00) {
Obj v0x7f7507fe6c80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fe6ca0 = PRIM_ISCONS(v0x7f7507fe6c80);
if (True == v0x7f7507fe6ca0) {
Obj v0x7f7507fe6fa0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fe6fc0 = PRIM_CAR(v0x7f7507fe6fa0);
Obj v0x7f7507fc0000 = PRIM_EQ(False, v0x7f7507fe6fc0);
if (True == v0x7f7507fc0000) {
Obj v0x7f7507fc02a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fc02c0 = PRIM_CDR(v0x7f7507fc02a0);
Obj v0x7f7507fc02e0 = PRIM_ISCONS(v0x7f7507fc02c0);
if (True == v0x7f7507fc02e0) {
Obj v0x7f7507fc0580 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fc05a0 = PRIM_CDR(v0x7f7507fc0580);
Obj v0x7f7507fc05c0 = PRIM_CAR(v0x7f7507fc05a0);
Obj y = v0x7f7507fc05c0;
Obj v0x7f7507fc0a20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fc0a40 = PRIM_CDR(v0x7f7507fc0a20);
Obj v0x7f7507fc0a60 = PRIM_CDR(v0x7f7507fc0a40);
Obj v0x7f7507fc0a80 = PRIM_ISCONS(v0x7f7507fc0a60);
if (True == v0x7f7507fc0a80) {
Obj v0x7f7507fc0ec0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507fc0ee0 = PRIM_CDR(v0x7f7507fc0ec0);
Obj v0x7f7507fc0f00 = PRIM_CDR(v0x7f7507fc0ee0);
Obj v0x7f7507fc0f20 = PRIM_CAR(v0x7f7507fc0f00);
Obj z = v0x7f7507fc0f20;
Obj v0x7f7507f753e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507f75400 = PRIM_CDR(v0x7f7507f753e0);
Obj v0x7f7507f75420 = PRIM_CDR(v0x7f7507f75400);
Obj v0x7f7507f75440 = PRIM_CDR(v0x7f7507f75420);
Obj v0x7f7507f75460 = PRIM_EQ(Nil, v0x7f7507f75440);
if (True == v0x7f7507f75460) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e8a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e8a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e8a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e8a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e8a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e8a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e6e8a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj v0x7f7507e6eb60 = makeNative(29, clofun1, 0, 0);
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
pushCont(co, 31, clofun1, 1, exp);
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
Obj v0x7f7507fea000 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 32, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35extract_45rules);
__arg1 = v0x7f7507fea000;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj v0x7f7507fea040 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = v0x7f7507fea040;
pushCont(co, 33, clofun1, 2, exp, body);
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
Obj v0x7f7507fea160 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = v0x7f7507fea160;
pushCont(co, 34, clofun1, 2, exp, body);
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
Obj v0x7f7507fea300 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = v0x7f7507fea300;
pushCont(co, 35, clofun1, 2, body, args);
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
Obj v0x7f7507fea580 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507feaac0 = makeCons(symlist, args);
Obj v0x7f7507feab00 = makeCons(v0x7f7507feaac0, body);
Obj v0x7f7507feab40 = makeCons(symmatch, v0x7f7507feab00);
Obj v0x7f7507feaba0 = makeCons(v0x7f7507feab40, Nil);
Obj v0x7f7507feabc0 = makeCons(args, v0x7f7507feaba0);
Obj v0x7f7507feac00 = makeCons(v0x7f7507fea580, v0x7f7507feabc0);
Obj v0x7f7507feac20 = makeCons(symdefun, v0x7f7507feac00);
__nargs = 2;
__arg1 = v0x7f7507feac20;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj n = __arg1;
Obj v0x7f7507ff28c0 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == v0x7f7507ff28c0) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507ff2a20 = primGenSym();
Obj v0x7f7507ff2c60 = PRIM_SUB(n, MAKE_NUMBER(1));
pushCont(co, 37, clofun1, 1, v0x7f7507ff2a20);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35gen_45paramenters);
__arg1 = v0x7f7507ff2c60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj v0x7f7507ff2c80 = __arg1;
Obj v0x7f7507ff2a20= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507ff2ca0 = makeCons(v0x7f7507ff2a20, v0x7f7507ff2c80);
__nargs = 2;
__arg1 = v0x7f7507ff2ca0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
Obj rules = __arg1;
PUSH_CONT_0(co, 39, clofun1);
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
Obj v0x7f7507ff5860 = __arg1;
Obj pats = v0x7f7507ff5860;
Obj len = makeNative(44, clofun1, 1, 0);
PUSH_CONT_0(co, 40, clofun1);
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
Obj v0x7f7507ff5c80 = __arg1;
Obj counts = v0x7f7507ff5c80;
Obj v0x7f7507ff5da0 = PRIM_CAR(counts);
Obj n = v0x7f7507ff5da0;
Obj dif = makeNative(43, clofun1, 1, 1, n);
Obj v0x7f7507ff2400 = PRIM_CDR(counts);
pushCont(co, 41, clofun1, 1, n);
__nargs = 3;
__arg0 = globalRef(symfilter);
__arg1 = dif;
__arg2 = v0x7f7507ff2400;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj v0x7f7507ff2420 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 42, clofun1, 1, n);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = v0x7f7507ff2420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj v0x7f7507ff2440 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507ff2460 = primNot(v0x7f7507ff2440);
if (True == v0x7f7507ff2460) {
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
Obj v0x7f7507ff2000 = PRIM_EQ(closureRef(co, 0), x);
Obj v0x7f7507ff2020 = primNot(v0x7f7507ff2000);
__nargs = 2;
__arg1 = v0x7f7507ff2020;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label44:
{
Obj x = __arg1;
Obj v0x7f7507ff5a40 = PRIM_CDR(x);
__nargs = 2;
__arg0 = globalRef(symlength);
__arg1 = v0x7f7507ff5a40;
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
Obj v0x7f7507ff50c0 = PRIM_EQ(l1, Nil);
if (True == v0x7f7507ff50c0) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507ff5260 = PRIM_CAR(l1);
Obj v0x7f7507ff5460 = PRIM_CDR(l1);
pushCont(co, 46, clofun1, 1, v0x7f7507ff5260);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = v0x7f7507ff5460;
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
Obj v0x7f7507ff54a0 = __arg1;
Obj v0x7f7507ff5260= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507ff54c0 = makeCons(v0x7f7507ff5260, v0x7f7507ff54a0);
__nargs = 2;
__arg1 = v0x7f7507ff54c0;
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
Obj v0x7f75080a6f80 = PRIM_ISCONS(l);
if (True == v0x7f75080a6f80) {
Obj v0x7f7507ff6200 = PRIM_CAR(l);
pushCont(co, 49, clofun1, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = v0x7f7507ff6200;
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
Obj v0x7f7507ff6220 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == v0x7f7507ff6220) {
Obj v0x7f7507ff65c0 = PRIM_CAR(l);
Obj v0x7f7507ff66a0 = makeCons(v0x7f7507ff65c0, res);
Obj v0x7f7507ff67c0 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = v0x7f7507ff66a0;
__arg2 = fn;
__arg3 = v0x7f7507ff67c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f7507ff6a00 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = res;
__arg2 = fn;
__arg3 = v0x7f7507ff6a00;
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
Obj v0x7f75080a6640 = PRIM_EQ(l, Nil);
if (True == v0x7f75080a6640) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f75080a68c0 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj v0x7f75080a69a0 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35length_45h);
__arg1 = v0x7f75080a68c0;
__arg2 = v0x7f75080a69a0;
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
pushCont(co, 3, clofun2, 2, res, rules);
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
Obj v0x7f75080abce0 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f75080abce0) {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f75080a60c0 = PRIM_CAR(rules);
Obj v0x7f75080a6120 = makeCons(v0x7f75080a60c0, res);
pushCont(co, 4, clofun2, 1, v0x7f75080a6120);
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
Obj v0x7f75080a62a0 = __arg1;
Obj v0x7f75080a6120= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rules_45patterns);
__arg1 = v0x7f75080a6120;
__arg2 = v0x7f75080a62a0;
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
Obj v0x7f7507e82b40 = makeNative(7, clofun2, 0, 3, input, current, result);
Obj v0x7f75080ab500 = PRIM_EQ(Nil, input);
if (True == v0x7f75080ab500) {
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
__arg0 = v0x7f7507e82b40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj v0x7f7507e82ba0 = makeNative(9, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj v0x7f7507ec5c40 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ec5c40) {
Obj v0x7f7507ebb040 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507ebb060 = PRIM_EQ(sym_61_62, v0x7f7507ebb040);
if (True == v0x7f7507ebb060) {
Obj v0x7f7507ebb200 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ebb220 = PRIM_ISCONS(v0x7f7507ebb200);
if (True == v0x7f7507ebb220) {
Obj v0x7f7507ebb3c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ebb3e0 = PRIM_CAR(v0x7f7507ebb3c0);
Obj act = v0x7f7507ebb3e0;
Obj v0x7f7507ebb620 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ebb640 = PRIM_CDR(v0x7f7507ebb620);
Obj v0x7f7507ebb660 = PRIM_ISCONS(v0x7f7507ebb640);
if (True == v0x7f7507ebb660) {
Obj v0x7f7507ebb960 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ebb980 = PRIM_CDR(v0x7f7507ebb960);
Obj v0x7f7507ebb9a0 = PRIM_CAR(v0x7f7507ebb980);
Obj v0x7f7507ebb9c0 = PRIM_EQ(symwhere, v0x7f7507ebb9a0);
if (True == v0x7f7507ebb9c0) {
Obj v0x7f7507ebbca0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ebbcc0 = PRIM_CDR(v0x7f7507ebbca0);
Obj v0x7f7507ebbce0 = PRIM_CDR(v0x7f7507ebbcc0);
Obj v0x7f7507ebbd00 = PRIM_ISCONS(v0x7f7507ebbce0);
if (True == v0x7f7507ebbd00) {
Obj v0x7f7507ebbfe0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eb5000 = PRIM_CDR(v0x7f7507ebbfe0);
Obj v0x7f7507eb5020 = PRIM_CDR(v0x7f7507eb5000);
Obj v0x7f7507eb5040 = PRIM_CAR(v0x7f7507eb5020);
Obj pred = v0x7f7507eb5040;
Obj v0x7f7507eb5320 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507eb5340 = PRIM_CDR(v0x7f7507eb5320);
Obj v0x7f7507eb5360 = PRIM_CDR(v0x7f7507eb5340);
Obj v0x7f7507eb5380 = PRIM_CDR(v0x7f7507eb5360);
Obj remain = v0x7f7507eb5380;
pushCont(co, 8, clofun2, 3, act, pred, remain);
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
__arg0 = v0x7f7507e82ba0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e82ba0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e82ba0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e82ba0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e82ba0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e82ba0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj v0x7f7507eb5540 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f7507eb5560 = makeCons(symlist, v0x7f7507eb5540);
Obj pat = v0x7f7507eb5560;
Obj v0x7f7507eb5940 = makeCons(act, Nil);
Obj v0x7f7507eb5960 = makeCons(pred, v0x7f7507eb5940);
Obj v0x7f7507eb5980 = makeCons(symwhere, v0x7f7507eb5960);
Obj v0x7f7507eb5a80 = makeCons(pat, closureRef(co, 2));
Obj v0x7f7507eb5aa0 = makeCons(v0x7f7507eb5980, v0x7f7507eb5a80);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = v0x7f7507eb5aa0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj v0x7f7507e82dc0 = makeNative(11, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj v0x7f7507ed7c80 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ed7c80) {
Obj v0x7f7507ed7e80 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507ed7ea0 = PRIM_EQ(sym_61_62, v0x7f7507ed7e80);
if (True == v0x7f7507ed7ea0) {
Obj v0x7f7507ec5060 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ec5080 = PRIM_ISCONS(v0x7f7507ec5060);
if (True == v0x7f7507ec5080) {
Obj v0x7f7507ec5220 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ec5240 = PRIM_CAR(v0x7f7507ec5220);
Obj act = v0x7f7507ec5240;
Obj v0x7f7507ec53e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f7507ec5440 = PRIM_CDR(v0x7f7507ec53e0);
Obj remain = v0x7f7507ec5440;
pushCont(co, 10, clofun2, 2, act, remain);
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
__arg0 = v0x7f7507e82dc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e82dc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f7507e82dc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj v0x7f7507ec5640 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507ec5660 = makeCons(symlist, v0x7f7507ec5640);
Obj pat = v0x7f7507ec5660;
Obj v0x7f7507ec5920 = makeCons(pat, closureRef(co, 2));
Obj v0x7f7507ec5940 = makeCons(act, v0x7f7507ec5920);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = v0x7f7507ec5940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj v0x7f7507e82f00 = makeNative(12, clofun2, 0, 0);
Obj v0x7f7507ed76a0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ed76a0) {
Obj v0x7f7507ed77c0 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f7507ed77c0;
Obj v0x7f7507ed78e0 = PRIM_CDR(closureRef(co, 0));
Obj y = v0x7f7507ed78e0;
Obj v0x7f7507ed7aa0 = makeCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = y;
__arg2 = v0x7f7507ed7aa0;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f7507e82f00;
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
pushCont(co, 15, clofun2, 1, exp);
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
Obj v0x7f7507ee5400 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 16, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = v0x7f7507ee5400;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj v0x7f7507ee5420 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = v0x7f7507ee5420;
pushCont(co, 17, clofun2, 1, value);
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
Obj v0x7f7507ee55c0 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = v0x7f7507ee55c0;
Obj v0x7f7507ee5700 = PRIM_ISCONS(value);
if (True == v0x7f7507ee5700) {
Obj v0x7f7507ee59a0 = PRIM_CAR(value);
Obj v0x7f7507ee59c0 = PRIM_EQ(symcons, v0x7f7507ee59a0);
Obj v0x7f7507ee59e0 = primNot(v0x7f7507ee59c0);
if (True == v0x7f7507ee59e0) {
if (True == True) {
Obj v0x7f7507ee5ae0 = primGenSym();
Obj val = v0x7f7507ee5ae0;
pushCont(co, 20, clofun2, 2, value, val);
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
Obj v0x7f7507ee31c0 = primGenSym();
Obj val = v0x7f7507ee31c0;
pushCont(co, 19, clofun2, 2, value, val);
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
Obj v0x7f7507ee38c0 = primGenSym();
Obj val = v0x7f7507ee38c0;
pushCont(co, 18, clofun2, 2, value, val);
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
Obj v0x7f7507ee3d00 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507ee3d40 = makeCons(v0x7f7507ee3d00, Nil);
Obj v0x7f7507ee3d60 = makeCons(value, v0x7f7507ee3d40);
Obj v0x7f7507ee3da0 = makeCons(val, v0x7f7507ee3d60);
Obj v0x7f7507ee3dc0 = makeCons(symlet, v0x7f7507ee3da0);
__nargs = 2;
__arg1 = v0x7f7507ee3dc0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj v0x7f7507ee3660 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507ee36a0 = makeCons(v0x7f7507ee3660, Nil);
Obj v0x7f7507ee36c0 = makeCons(value, v0x7f7507ee36a0);
Obj v0x7f7507ee36e0 = makeCons(val, v0x7f7507ee36c0);
Obj v0x7f7507ee3700 = makeCons(symlet, v0x7f7507ee36e0);
__nargs = 2;
__arg1 = v0x7f7507ee3700;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj v0x7f7507ee5f60 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507ee5fa0 = makeCons(v0x7f7507ee5f60, Nil);
Obj v0x7f7507ee5fc0 = makeCons(value, v0x7f7507ee5fa0);
Obj v0x7f7507ee5fe0 = makeCons(val, v0x7f7507ee5fc0);
Obj v0x7f7507ee3000 = makeCons(symlet, v0x7f7507ee5fe0);
__nargs = 2;
__arg1 = v0x7f7507ee3000;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label21:
{
Obj value = __arg1;
Obj rules = __arg2;
pushCont(co, 22, clofun2, 2, rules, value);
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
Obj v0x7f7507fe68e0 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f7507fe68e0) {
Obj v0x7f7507fe6b60 = makeCons(makeCString("no match-help found!"), Nil);
Obj v0x7f7507fe6b80 = makeCons(symerror, v0x7f7507fe6b60);
__nargs = 2;
__arg1 = v0x7f7507fe6b80;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 23, clofun2, 2, rules, value);
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
Obj v0x7f7507fe6ce0 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f7507fe6ce0) {
Obj v0x7f7507fe6ec0 = PRIM_CDR(rules);
pushCont(co, 28, clofun2, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = v0x7f7507fe6ec0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj v0x7f7507eef120 = PRIM_CAR(rules);
Obj pat = v0x7f7507eef120;
Obj v0x7f7507eef240 = primGenSym();
Obj cc = v0x7f7507eef240;
pushCont(co, 24, clofun2, 4, pat, rules, value, cc);
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
Obj v0x7f7507eef380 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = v0x7f7507eef380;
pushCont(co, 25, clofun2, 4, action, rules, value, cc);
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
Obj v0x7f7507eef540 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 26, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = v0x7f7507eef540;
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
Obj v0x7f7507eef5c0 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = v0x7f7507eef5c0;
Obj v0x7f7507eef840 = PRIM_CDR(rules);
Obj v0x7f7507eef860 = PRIM_CDR(v0x7f7507eef840);
pushCont(co, 27, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = v0x7f7507eef860;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj v0x7f7507eef880 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = v0x7f7507eef880;
Obj v0x7f7507eefe40 = makeCons(rest, Nil);
Obj v0x7f7507eefe60 = makeCons(Nil, v0x7f7507eefe40);
Obj v0x7f7507eefe80 = makeCons(symlambda, v0x7f7507eefe60);
Obj v0x7f7507eeffc0 = makeCons(curr, Nil);
Obj v0x7f7507eeffe0 = makeCons(v0x7f7507eefe80, v0x7f7507eeffc0);
Obj v0x7f7507ee5000 = makeCons(cc, v0x7f7507eeffe0);
Obj v0x7f7507ee5020 = makeCons(symlet, v0x7f7507ee5000);
__nargs = 2;
__arg1 = v0x7f7507ee5020;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj v0x7f7507fe6ee0 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f7507fe6ee0) {
if (True == True) {
Obj v0x7f7507fe6fe0 = PRIM_CAR(rules);
Obj pat = v0x7f7507fe6fe0;
Obj v0x7f7507fc00c0 = primGenSym();
Obj cc = v0x7f7507fc00c0;
pushCont(co, 33, clofun2, 4, pat, rules, value, cc);
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
Obj v0x7f7507f750a0 = PRIM_CAR(rules);
Obj pat = v0x7f7507f750a0;
Obj v0x7f7507f75180 = primGenSym();
Obj cc = v0x7f7507f75180;
pushCont(co, 29, clofun2, 4, pat, rules, value, cc);
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
Obj v0x7f7507f752a0 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = v0x7f7507f752a0;
pushCont(co, 30, clofun2, 4, action, rules, value, cc);
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
Obj v0x7f7507f754a0 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 31, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = v0x7f7507f754a0;
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
Obj v0x7f7507f75520 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = v0x7f7507f75520;
Obj v0x7f7507f757c0 = PRIM_CDR(rules);
Obj v0x7f7507f757e0 = PRIM_CDR(v0x7f7507f757c0);
pushCont(co, 32, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = v0x7f7507f757e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj v0x7f7507f75800 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = v0x7f7507f75800;
Obj v0x7f7507f75da0 = makeCons(rest, Nil);
Obj v0x7f7507f75dc0 = makeCons(Nil, v0x7f7507f75da0);
Obj v0x7f7507f75de0 = makeCons(symlambda, v0x7f7507f75dc0);
Obj v0x7f7507f75ee0 = makeCons(curr, Nil);
Obj v0x7f7507f75f00 = makeCons(v0x7f7507f75de0, v0x7f7507f75ee0);
Obj v0x7f7507f75f20 = makeCons(cc, v0x7f7507f75f00);
Obj v0x7f7507f75f40 = makeCons(symlet, v0x7f7507f75f20);
__nargs = 2;
__arg1 = v0x7f7507f75f40;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label33:
{
Obj v0x7f7507fc0200 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = v0x7f7507fc0200;
pushCont(co, 34, clofun2, 4, action, rules, value, cc);
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
Obj v0x7f7507fc03a0 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 35, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = v0x7f7507fc03a0;
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
Obj v0x7f7507fc0420 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = v0x7f7507fc0420;
Obj v0x7f7507fc07a0 = PRIM_CDR(rules);
Obj v0x7f7507fc07c0 = PRIM_CDR(v0x7f7507fc07a0);
pushCont(co, 36, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = v0x7f7507fc07c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj v0x7f7507fc07e0 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = v0x7f7507fc07e0;
Obj v0x7f7507fc0cc0 = makeCons(rest, Nil);
Obj v0x7f7507fc0d20 = makeCons(Nil, v0x7f7507fc0cc0);
Obj v0x7f7507fc0d40 = makeCons(symlambda, v0x7f7507fc0d20);
Obj v0x7f7507fc0e40 = makeCons(curr, Nil);
Obj v0x7f7507fc0e60 = makeCons(v0x7f7507fc0d40, v0x7f7507fc0e40);
Obj v0x7f7507fc0e80 = makeCons(cc, v0x7f7507fc0e60);
Obj v0x7f7507fc0ea0 = makeCons(symlet, v0x7f7507fc0e80);
__nargs = 2;
__arg1 = v0x7f7507fc0ea0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj v0x7f7507ff2ee0 = PRIM_CDR(rules);
Obj v0x7f7507ff2f00 = PRIM_CAR(v0x7f7507ff2ee0);
Obj action = v0x7f7507ff2f00;
pushCont(co, 38, clofun2, 2, cc, action);
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
Obj v0x7f7507fea060 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f7507fea060) {
Obj v0x7f7507fea240 = PRIM_CAR(action);
Obj v0x7f7507fea280 = PRIM_EQ(v0x7f7507fea240, symwhere);
if (True == v0x7f7507fea280) {
if (True == True) {
pushCont(co, 43, clofun2, 2, action, cc);
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
pushCont(co, 41, clofun2, 2, action, cc);
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
pushCont(co, 39, clofun2, 2, action, cc);
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
Obj v0x7f7507fe6240 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 40, clofun2, 2, cc, v0x7f7507fe6240);
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
Obj v0x7f7507fe63c0 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507fe6240= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507fe6560 = makeCons(cc, Nil);
Obj v0x7f7507fe6600 = makeCons(v0x7f7507fe6560, Nil);
Obj v0x7f7507fe6620 = makeCons(v0x7f7507fe63c0, v0x7f7507fe6600);
Obj v0x7f7507fe6640 = makeCons(v0x7f7507fe6240, v0x7f7507fe6620);
Obj v0x7f7507fe6660 = makeCons(symif, v0x7f7507fe6640);
__nargs = 2;
__arg1 = v0x7f7507fe6660;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj v0x7f7507feabe0 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 42, clofun2, 2, cc, v0x7f7507feabe0);
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
Obj v0x7f7507fead80 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507feabe0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507feaf20 = makeCons(cc, Nil);
Obj v0x7f7507feaf60 = makeCons(v0x7f7507feaf20, Nil);
Obj v0x7f7507feafc0 = makeCons(v0x7f7507fead80, v0x7f7507feaf60);
Obj v0x7f7507feafe0 = makeCons(v0x7f7507feabe0, v0x7f7507feafc0);
Obj v0x7f7507fe6000 = makeCons(symif, v0x7f7507feafe0);
__nargs = 2;
__arg1 = v0x7f7507fe6000;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj v0x7f7507fea500 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun2, 2, cc, v0x7f7507fea500);
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
Obj v0x7f7507fea680 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507fea500= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507fea840 = makeCons(cc, Nil);
Obj v0x7f7507fea880 = makeCons(v0x7f7507fea840, Nil);
Obj v0x7f7507fea8a0 = makeCons(v0x7f7507fea680, v0x7f7507fea880);
Obj v0x7f7507fea8c0 = makeCons(v0x7f7507fea500, v0x7f7507fea8a0);
Obj v0x7f7507fea920 = makeCons(symif, v0x7f7507fea8c0);
__nargs = 2;
__arg1 = v0x7f7507fea920;
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
pushCont(co, 46, clofun2, 4, expr, body, cc, pat);
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
Obj v0x7f7507ff6ce0 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == v0x7f7507ff6ce0) {
Obj v0x7f7507ff6e20 = PRIM_EQ(pat, expr);
if (True == v0x7f7507ff6e20) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507ff5280 = makeCons(expr, Nil);
Obj v0x7f7507ff52a0 = makeCons(pat, v0x7f7507ff5280);
Obj v0x7f7507ff52c0 = makeCons(sym_61, v0x7f7507ff52a0);
Obj v0x7f7507ff5540 = makeCons(cc, Nil);
Obj v0x7f7507ff55a0 = makeCons(v0x7f7507ff5540, Nil);
Obj v0x7f7507ff55c0 = makeCons(body, v0x7f7507ff55a0);
Obj v0x7f7507ff55e0 = makeCons(v0x7f7507ff52c0, v0x7f7507ff55c0);
Obj v0x7f7507ff5600 = makeCons(symif, v0x7f7507ff55e0);
__nargs = 2;
__arg1 = v0x7f7507ff5600;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj v0x7f7507ff5740 = primIsSymbol(pat);
if (True == v0x7f7507ff5740) {
Obj v0x7f7507ff5a60 = makeCons(body, Nil);
Obj v0x7f7507ff5a80 = makeCons(expr, v0x7f7507ff5a60);
Obj v0x7f7507ff5ac0 = makeCons(pat, v0x7f7507ff5a80);
Obj v0x7f7507ff5b40 = makeCons(symlet, v0x7f7507ff5ac0);
__nargs = 2;
__arg1 = v0x7f7507ff5b40;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 47, clofun2, 4, expr, body, cc, pat);
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
Obj v0x7f7507ff5c40 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == v0x7f7507ff5c40) {
Obj v0x7f7507ff5e00 = PRIM_CAR(pat);
Obj v0x7f7507ff5e40 = PRIM_EQ(v0x7f7507ff5e00, symquote);
if (True == v0x7f7507ff5e40) {
Obj v0x7f7507ff2280 = makeCons(expr, Nil);
Obj v0x7f7507ff22a0 = makeCons(pat, v0x7f7507ff2280);
Obj v0x7f7507ff22c0 = makeCons(sym_61, v0x7f7507ff22a0);
Obj v0x7f7507ff2560 = makeCons(cc, Nil);
Obj v0x7f7507ff25a0 = makeCons(v0x7f7507ff2560, Nil);
Obj v0x7f7507ff25c0 = makeCons(body, v0x7f7507ff25a0);
Obj v0x7f7507ff25e0 = makeCons(v0x7f7507ff22c0, v0x7f7507ff25c0);
Obj v0x7f7507ff2600 = makeCons(symif, v0x7f7507ff25e0);
__nargs = 2;
__arg1 = v0x7f7507ff2600;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507ff27c0 = PRIM_CAR(pat);
Obj v0x7f7507ff2820 = PRIM_EQ(v0x7f7507ff27c0, symcons);
if (True == v0x7f7507ff2820) {
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
PUSH_CONT_0(co, 48, clofun2);
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
Obj v0x7f7507ff2b80 = __arg1;
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = v0x7f7507ff2b80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x = __arg1;
pushCont(co, 0, clofun3, 1, x);
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
Obj v0x7f7507ff69c0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == v0x7f7507ff69c0) {
Obj v0x7f7507ff6ba0 = primIsSymbol(x);
Obj v0x7f7507ff6bc0 = primNot(v0x7f7507ff6ba0);
if (True == v0x7f7507ff6bc0) {
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
pushCont(co, 2, clofun3, 4, pat, expr, body, cc);
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
Obj v0x7f7507ed7780 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = v0x7f7507ed7780;
pushCont(co, 3, clofun3, 4, expr, body, x, cc);
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
Obj v0x7f7507ed7880 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = v0x7f7507ed7880;
Obj v0x7f7507ed79c0 = PRIM_ISCONS(expr);
if (True == v0x7f7507ed79c0) {
Obj v0x7f7507ed7b60 = PRIM_CAR(expr);
Obj v0x7f7507ed7ba0 = PRIM_EQ(v0x7f7507ed7b60, symcons);
if (True == v0x7f7507ed7ba0) {
if (True == True) {
pushCont(co, 16, clofun3, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f7507ec5540 = makeCons(expr, Nil);
Obj v0x7f7507ec5560 = makeCons(symcons_63, v0x7f7507ec5540);
Obj v0x7f7507ec5880 = makeCons(expr, Nil);
Obj v0x7f7507ec58a0 = makeCons(symcar, v0x7f7507ec5880);
Obj v0x7f7507ec5b20 = makeCons(expr, Nil);
Obj v0x7f7507ec5b40 = makeCons(symcdr, v0x7f7507ec5b20);
pushCont(co, 14, clofun3, 4, x, v0x7f7507ec58a0, cc, v0x7f7507ec5560);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = v0x7f7507ec5b40;
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
pushCont(co, 11, clofun3, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f75080ab6e0 = makeCons(expr, Nil);
Obj v0x7f75080ab700 = makeCons(symcons_63, v0x7f75080ab6e0);
Obj v0x7f75080abac0 = makeCons(expr, Nil);
Obj v0x7f75080abae0 = makeCons(symcar, v0x7f75080abac0);
Obj v0x7f75080abe00 = makeCons(expr, Nil);
Obj v0x7f75080abe20 = makeCons(symcdr, v0x7f75080abe00);
pushCont(co, 9, clofun3, 4, x, v0x7f75080abae0, cc, v0x7f75080ab700);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = v0x7f75080abe20;
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
pushCont(co, 6, clofun3, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f75080a6ac0 = makeCons(expr, Nil);
Obj v0x7f75080a6ae0 = makeCons(symcons_63, v0x7f75080a6ac0);
Obj v0x7f75080a6ea0 = makeCons(expr, Nil);
Obj v0x7f75080a6ec0 = makeCons(symcar, v0x7f75080a6ea0);
Obj v0x7f7507ff6240 = makeCons(expr, Nil);
Obj v0x7f7507ff6260 = makeCons(symcdr, v0x7f7507ff6240);
pushCont(co, 4, clofun3, 4, x, v0x7f75080a6ec0, cc, v0x7f75080a6ae0);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = v0x7f7507ff6260;
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
Obj v0x7f7507ff6300 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f75080a6ec0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f75080a6ae0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 5, clofun3, 2, cc, v0x7f75080a6ae0);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = v0x7f75080a6ec0;
__arg3 = v0x7f7507ff6300;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj v0x7f7507ff63c0 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f75080a6ae0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507ff6580 = makeCons(cc, Nil);
Obj v0x7f7507ff65e0 = makeCons(v0x7f7507ff6580, Nil);
Obj v0x7f7507ff6600 = makeCons(v0x7f7507ff63c0, v0x7f7507ff65e0);
Obj v0x7f7507ff6620 = makeCons(v0x7f75080a6ae0, v0x7f7507ff6600);
Obj v0x7f7507ff6640 = makeCons(symif, v0x7f7507ff6620);
__nargs = 2;
__arg1 = v0x7f7507ff6640;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj v0x7f75080a62c0 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = v0x7f75080a62c0;
pushCont(co, 7, clofun3, 5, y, body, x, e1, cc);
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
Obj v0x7f75080a63e0 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = v0x7f75080a63e0;
pushCont(co, 8, clofun3, 3, x, e1, cc);
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
Obj v0x7f75080a66c0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = v0x7f75080a66c0;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj v0x7f75080abe80 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f75080abae0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f75080ab700= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 10, clofun3, 2, cc, v0x7f75080ab700);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = v0x7f75080abae0;
__arg3 = v0x7f75080abe80;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj v0x7f75080abee0 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f75080ab700= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f75080a6100 = makeCons(cc, Nil);
Obj v0x7f75080a6140 = makeCons(v0x7f75080a6100, Nil);
Obj v0x7f75080a6160 = makeCons(v0x7f75080abee0, v0x7f75080a6140);
Obj v0x7f75080a61a0 = makeCons(v0x7f75080ab700, v0x7f75080a6160);
Obj v0x7f75080a61c0 = makeCons(symif, v0x7f75080a61a0);
__nargs = 2;
__arg1 = v0x7f75080a61c0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj v0x7f7507ec5f20 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = v0x7f7507ec5f20;
pushCont(co, 12, clofun3, 5, y, body, x, e1, cc);
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
Obj v0x7f75080ab080 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = v0x7f75080ab080;
pushCont(co, 13, clofun3, 3, x, e1, cc);
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
Obj v0x7f75080ab320 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = v0x7f75080ab320;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj v0x7f7507ec5ba0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507ec58a0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f7507ec5560= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 15, clofun3, 2, cc, v0x7f7507ec5560);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = v0x7f7507ec58a0;
__arg3 = v0x7f7507ec5ba0;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj v0x7f7507ec5be0 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507ec5560= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507ec5d80 = makeCons(cc, Nil);
Obj v0x7f7507ec5dc0 = makeCons(v0x7f7507ec5d80, Nil);
Obj v0x7f7507ec5de0 = makeCons(v0x7f7507ec5be0, v0x7f7507ec5dc0);
Obj v0x7f7507ec5e00 = makeCons(v0x7f7507ec5560, v0x7f7507ec5de0);
Obj v0x7f7507ec5e20 = makeCons(symif, v0x7f7507ec5e00);
__nargs = 2;
__arg1 = v0x7f7507ec5e20;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj v0x7f7507ed7ca0 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = v0x7f7507ed7ca0;
pushCont(co, 17, clofun3, 5, y, body, x, e1, cc);
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
Obj v0x7f7507ed7da0 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = v0x7f7507ed7da0;
pushCont(co, 18, clofun3, 3, x, e1, cc);
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
Obj v0x7f7507ed7fa0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = v0x7f7507ed7fa0;
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
Obj v0x7f7507ed7520 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = v0x7f7507ed7520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj pat = __arg1;
Obj v0x7f7507ee3ca0 = PRIM_CDR(pat);
pushCont(co, 21, clofun3, 1, pat);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = v0x7f7507ee3ca0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj v0x7f7507ee3cc0 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == v0x7f7507ee3cc0) {
Obj v0x7f7507ee3d80 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = v0x7f7507ee3d80;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507ee3fa0 = PRIM_CAR(pat);
Obj v0x7f7507ed71c0 = PRIM_CDR(pat);
pushCont(co, 22, clofun3, 1, v0x7f7507ee3fa0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = v0x7f7507ed71c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj v0x7f7507ed71e0 = __arg1;
Obj v0x7f7507ee3fa0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507ed7220 = makeCons(v0x7f7507ed71e0, Nil);
Obj v0x7f7507ed7240 = makeCons(v0x7f7507ee3fa0, v0x7f7507ed7220);
Obj v0x7f7507ed7260 = makeCons(symcons, v0x7f7507ed7240);
__nargs = 2;
__arg1 = v0x7f7507ed7260;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x = __arg1;
Obj v0x7f7507ee3880 = PRIM_EQ(x, True);
if (True == v0x7f7507ee3880) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507ee39a0 = PRIM_EQ(x, False);
if (True == v0x7f7507ee39a0) {
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
Obj v0x7f7507ee3600 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = v0x7f7507ee3600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj l = __arg1;
Obj v0x7f7507ee5a40 = PRIM_EQ(Nil, l);
if (True == v0x7f7507ee5a40) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507ee5be0 = PRIM_CAR(l);
Obj v0x7f7507ee5c20 = PRIM_EQ(v0x7f7507ee5be0, False);
if (True == v0x7f7507ee5c20) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507ee5dc0 = PRIM_CDR(l);
pushCont(co, 26, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = v0x7f7507ee5dc0;
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
Obj v0x7f7507ee5de0 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = v0x7f7507ee5de0;
Obj v0x7f7507ee5f00 = PRIM_EQ(more, False);
if (True == v0x7f7507ee5f00) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507ee3120 = PRIM_CAR(l);
Obj v0x7f7507ee32e0 = makeCons(False, Nil);
Obj v0x7f7507ee3300 = makeCons(more, v0x7f7507ee32e0);
Obj v0x7f7507ee3320 = makeCons(v0x7f7507ee3120, v0x7f7507ee3300);
Obj v0x7f7507ee3340 = makeCons(symif, v0x7f7507ee3320);
__nargs = 2;
__arg1 = v0x7f7507ee3340;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label27:
{
Obj exp = __arg1;
Obj v0x7f7507ee57c0 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = v0x7f7507ee57c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj l = __arg1;
Obj v0x7f7507eefc00 = PRIM_EQ(l, Nil);
if (True == v0x7f7507eefc00) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507eefda0 = PRIM_CAR(l);
Obj v0x7f7507eefde0 = PRIM_EQ(v0x7f7507eefda0, True);
if (True == v0x7f7507eefde0) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507eeff80 = PRIM_CDR(l);
pushCont(co, 29, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = v0x7f7507eeff80;
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
Obj v0x7f7507eeffa0 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = v0x7f7507eeffa0;
Obj v0x7f7507ee50c0 = PRIM_EQ(more, True);
if (True == v0x7f7507ee50c0) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507ee52e0 = PRIM_CAR(l);
Obj v0x7f7507ee54a0 = makeCons(more, Nil);
Obj v0x7f7507ee54c0 = makeCons(True, v0x7f7507ee54a0);
Obj v0x7f7507ee54e0 = makeCons(v0x7f7507ee52e0, v0x7f7507ee54c0);
Obj v0x7f7507ee5500 = makeCons(symif, v0x7f7507ee54e0);
__nargs = 2;
__arg1 = v0x7f7507ee5500;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label30:
{
Obj exp = __arg1;
Obj v0x7f7507eef000 = PRIM_CDR(exp);
Obj v0x7f7507eef020 = PRIM_EQ(Nil, v0x7f7507eef000);
if (True == v0x7f7507eef020) {
Obj v0x7f7507eef1c0 = makeCons(makeCString("no cond match"), Nil);
Obj v0x7f7507eef1e0 = makeCons(symerror, v0x7f7507eef1c0);
__nargs = 2;
__arg1 = v0x7f7507eef1e0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 31, clofun3, 1, exp);
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
Obj v0x7f7507eef2e0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = v0x7f7507eef2e0;
Obj v0x7f7507eef500 = PRIM_CAR(curr);
pushCont(co, 32, clofun3, 2, exp, v0x7f7507eef500);
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
Obj v0x7f7507eef680 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507eef500= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun3, 2, v0x7f7507eef680, v0x7f7507eef500);
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
Obj v0x7f7507eef8c0 = __arg1;
Obj v0x7f7507eef680= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507eef500= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507eef8e0 = makeCons(symcond, v0x7f7507eef8c0);
Obj v0x7f7507eef920 = makeCons(v0x7f7507eef8e0, Nil);
Obj v0x7f7507eef940 = makeCons(v0x7f7507eef680, v0x7f7507eef920);
Obj v0x7f7507eef960 = makeCons(v0x7f7507eef500, v0x7f7507eef940);
Obj v0x7f7507eef980 = makeCons(symif, v0x7f7507eef960);
__nargs = 2;
__arg1 = v0x7f7507eef980;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj exp = __arg1;
Obj v0x7f7507f75ce0 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = v0x7f7507f75ce0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj exp = __arg1;
Obj v0x7f7507f752c0 = PRIM_CDR(exp);
pushCont(co, 36, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = v0x7f7507f752c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj v0x7f7507f752e0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == v0x7f7507f752e0) {
Obj v0x7f7507f753a0 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = v0x7f7507f753a0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507f755c0 = PRIM_CAR(exp);
pushCont(co, 37, clofun3, 2, exp, v0x7f7507f755c0);
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
Obj v0x7f7507f75740 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507f755c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 38, clofun3, 2, v0x7f7507f75740, v0x7f7507f755c0);
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
Obj v0x7f7507f75960 = __arg1;
Obj v0x7f7507f75740= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507f755c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun3, 2, v0x7f7507f75740, v0x7f7507f755c0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = v0x7f7507f75960;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj v0x7f7507f75980 = __arg1;
Obj v0x7f7507f75740= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507f755c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507f759c0 = makeCons(v0x7f7507f75980, Nil);
Obj v0x7f7507f759e0 = makeCons(v0x7f7507f75740, v0x7f7507f759c0);
Obj v0x7f7507f75a00 = makeCons(v0x7f7507f755c0, v0x7f7507f759e0);
Obj v0x7f7507f75a20 = makeCons(symlet, v0x7f7507f75a00);
__nargs = 2;
__arg1 = v0x7f7507f75a20;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj x = __arg1;
Obj v0x7f7507fc0fa0 = PRIM_ISCONS(x);
Obj v0x7f7507fc0fc0 = primNot(v0x7f7507fc0fa0);
__nargs = 2;
__arg1 = v0x7f7507fc0fc0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj x = __arg1;
Obj l = __arg2;
Obj v0x7f7507fc0980 = PRIM_ISCONS(l);
if (True == v0x7f7507fc0980) {
Obj v0x7f7507fc0b20 = PRIM_CAR(l);
Obj v0x7f7507fc0b60 = PRIM_EQ(v0x7f7507fc0b20, x);
if (True == v0x7f7507fc0b60) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507fc0ce0 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symelem_63);
__arg1 = x;
__arg2 = v0x7f7507fc0ce0;
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
pushCont(co, 43, clofun3, 1, exp);
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
Obj v0x7f7507fc01c0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 44, clofun3, 2, exp, v0x7f7507fc01c0);
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
Obj v0x7f7507fc04a0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507fc01c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun3, 2, v0x7f7507fc04a0, v0x7f7507fc01c0);
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
Obj v0x7f7507fc0620 = __arg1;
Obj v0x7f7507fc04a0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507fc01c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507fc0660 = makeCons(v0x7f7507fc0620, Nil);
Obj v0x7f7507fc0680 = makeCons(v0x7f7507fc04a0, v0x7f7507fc0660);
Obj v0x7f7507fc06a0 = makeCons(symlambda, v0x7f7507fc0680);
Obj v0x7f7507fc06e0 = makeCons(v0x7f7507fc06a0, Nil);
Obj v0x7f7507fc0700 = makeCons(v0x7f7507fc01c0, v0x7f7507fc06e0);
Obj v0x7f7507fc0720 = makeCons(symdef, v0x7f7507fc0700);
__nargs = 2;
__arg1 = v0x7f7507fc0720;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label46:
{
Obj exp = __arg1;
Obj v0x7f7507fe6e40 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = v0x7f7507fe6e40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj exp = __arg1;
pushCont(co, 48, clofun3, 1, exp);
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
Obj v0x7f7507fe6580 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507fe65c0 = makeCons(v0x7f7507fe6580, Nil);
Obj v0x7f7507fe65e0 = makeCons(symquote, v0x7f7507fe65c0);
pushCont(co, 49, clofun3, 2, exp, v0x7f7507fe65e0);
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
Obj v0x7f7507fe68c0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507fe65e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 0, clofun4, 2, v0x7f7507fe68c0, v0x7f7507fe65e0);
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
Obj v0x7f7507fe69a0 = __arg1;
Obj v0x7f7507fe68c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507fe65e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f7507fe69c0 = makeCons(v0x7f7507fe68c0, v0x7f7507fe69a0);
Obj v0x7f7507fe69e0 = makeCons(symlambda, v0x7f7507fe69c0);
Obj v0x7f7507fe6a20 = makeCons(v0x7f7507fe69e0, Nil);
Obj v0x7f7507fe6a40 = makeCons(v0x7f7507fe65e0, v0x7f7507fe6a20);
Obj v0x7f7507fe6a60 = makeCons(symcora_47init_35add_45to_45_42macros_42, v0x7f7507fe6a40);
__nargs = 2;
__arg1 = v0x7f7507fe6a60;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj exp = __arg1;
Obj v0x7f7507fea020 = PRIM_ISCONS(exp);
if (True == v0x7f7507fea020) {
Obj v0x7f7507fea1c0 = PRIM_CAR(exp);
Obj v0x7f7507fea200 = PRIM_EQ(v0x7f7507fea1c0, globalRef(sym_42protect_45symbol_42));
if (True == v0x7f7507fea200) {
Obj v0x7f7507fea2c0 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = v0x7f7507fea2c0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507fea460 = PRIM_CAR(exp);
Obj v0x7f7507fea4a0 = PRIM_EQ(v0x7f7507fea460, symlambda);
if (True == v0x7f7507fea4a0) {
pushCont(co, 4, clofun4, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f7507feab20 = PRIM_CAR(exp);
Obj v0x7f7507feab60 = PRIM_EQ(v0x7f7507feab20, symquote);
if (True == v0x7f7507feab60) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 2, clofun4, 1, exp);
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
Obj v0x7f7507feaf80 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(3, clofun4, 1, 1, exp);
__arg1 = v0x7f7507feaf80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp1 = __arg1;
Obj v0x7f7507fead40 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == v0x7f7507fead40) {
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
Obj v0x7f7507fea6c0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 5, clofun4, 1, v0x7f7507fea6c0);
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
Obj v0x7f7507fea8e0 = __arg1;
Obj v0x7f7507fea6c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 6, clofun4, 1, v0x7f7507fea6c0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = v0x7f7507fea8e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj v0x7f7507fea900 = __arg1;
Obj v0x7f7507fea6c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507fea940 = makeCons(v0x7f7507fea900, Nil);
Obj v0x7f7507fea960 = makeCons(v0x7f7507fea6c0, v0x7f7507fea940);
Obj v0x7f7507fea980 = makeCons(symlambda, v0x7f7507fea960);
__nargs = 2;
__arg1 = v0x7f7507fea980;
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
Obj v0x7f7507ff5d80 = PRIM_EQ(Nil, macros);
if (True == v0x7f7507ff5d80) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f7507ff2ba0 = PRIM_CAR(macros);
__nargs = 2;
__arg0 = makeNative(9, clofun4, 1, 2, exp, macros);
__arg1 = v0x7f7507ff2ba0;
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
Obj v0x7f7507ff5f80 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f7507ff5f80) {
Obj v0x7f7507ff2120 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f7507ff2200 = PRIM_CAR(item);
Obj v0x7f7507ff2220 = PRIM_EQ(v0x7f7507ff2120, v0x7f7507ff2200);
if (True == v0x7f7507ff2220) {
if (True == True) {
Obj v0x7f7507ff2360 = PRIM_CDR(item);
__nargs = 2;
__arg0 = v0x7f7507ff2360;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f7507ff2500 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = v0x7f7507ff2500;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj v0x7f7507ff2640 = PRIM_CDR(item);
__nargs = 2;
__arg0 = v0x7f7507ff2640;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f7507ff27e0 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = v0x7f7507ff27e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj v0x7f7507ff2920 = PRIM_CDR(item);
__nargs = 2;
__arg0 = v0x7f7507ff2920;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f7507ff2ac0 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = v0x7f7507ff2ac0;
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
Obj v0x7f7507ff5aa0 = makeCons(n, v);
Obj v0x7f7507ff5ae0 = makeCons(v0x7f7507ff5aa0, globalRef(sym_42macros_42));
Obj v0x7f7507ff5b00 = primSet(co, sym_42macros_42, v0x7f7507ff5ae0);
__nargs = 2;
__arg1 = v0x7f7507ff5b00;
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
Obj v0x7f7507ff6d40 = PRIM_ISCONS(l);
if (True == v0x7f7507ff6d40) {
Obj v0x7f7507ff6fe0 = PRIM_CAR(l);
pushCont(co, 13, clofun4, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = v0x7f7507ff6fe0;
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
Obj v0x7f7507ff5000 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f7507ff5040 = makeCons(v0x7f7507ff5000, res);
Obj v0x7f7507ff5140 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symmap_45h);
__arg1 = v0x7f7507ff5040;
__arg2 = f;
__arg3 = v0x7f7507ff5140;
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
Obj v0x7f7507ff65a0 = PRIM_ISCONS(l);
if (True == v0x7f7507ff65a0) {
Obj v0x7f7507ff67a0 = PRIM_CAR(l);
Obj v0x7f7507ff67e0 = makeCons(v0x7f7507ff67a0, res);
Obj v0x7f7507ff68e0 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35reverse_45h);
__arg1 = v0x7f7507ff67e0;
__arg2 = v0x7f7507ff68e0;
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
Obj v0x7f7507ff62a0 = PRIM_ISCONS(x);
__nargs = 2;
__arg1 = v0x7f7507ff62a0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj exp = __arg1;
Obj v0x7f75080a6b00 = PRIM_ISCONS(exp);
if (True == v0x7f75080a6b00) {
Obj v0x7f75080a6d60 = PRIM_CAR(exp);
Obj v0x7f75080a6fc0 = PRIM_CDR(exp);
pushCont(co, 17, clofun4, 1, v0x7f75080a6d60);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = v0x7f75080a6fc0;
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
Obj v0x7f75080a6fe0 = __arg1;
Obj v0x7f75080a6d60= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f7507ff6020 = makeCons(v0x7f75080a6fe0, Nil);
Obj v0x7f7507ff6040 = makeCons(v0x7f75080a6d60, v0x7f7507ff6020);
Obj v0x7f7507ff6060 = makeCons(symcons, v0x7f7507ff6040);
__nargs = 2;
__arg1 = v0x7f7507ff6060;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj x = __arg1;
Obj v0x7f75080a6820 = PRIM_CDR(x);
Obj v0x7f75080a6840 = PRIM_CDR(v0x7f75080a6820);
Obj v0x7f75080a6880 = PRIM_CDR(v0x7f75080a6840);
__nargs = 2;
__arg1 = v0x7f75080a6880;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj x = __arg1;
Obj v0x7f75080a6400 = PRIM_CDR(x);
Obj v0x7f75080a6420 = PRIM_CDR(v0x7f75080a6400);
Obj v0x7f75080a6440 = PRIM_CDR(v0x7f75080a6420);
Obj v0x7f75080a6460 = PRIM_CAR(v0x7f75080a6440);
__nargs = 2;
__arg1 = v0x7f75080a6460;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj x = __arg1;
Obj v0x7f75080abf80 = PRIM_CDR(x);
Obj v0x7f75080abfa0 = PRIM_CDR(v0x7f75080abf80);
Obj v0x7f75080abfc0 = PRIM_CAR(v0x7f75080abfa0);
__nargs = 2;
__arg1 = v0x7f75080abfc0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label21:
{
Obj x = __arg1;
Obj v0x7f75080abbc0 = PRIM_CDR(x);
Obj v0x7f75080abbe0 = PRIM_CDR(v0x7f75080abbc0);
__nargs = 2;
__arg1 = v0x7f75080abbe0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj x = __arg1;
Obj v0x7f75080ab8a0 = PRIM_CAR(x);
Obj v0x7f75080ab8c0 = PRIM_CDR(v0x7f75080ab8a0);
__nargs = 2;
__arg1 = v0x7f75080ab8c0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x = __arg1;
Obj v0x7f75080ab5a0 = PRIM_CAR(x);
Obj v0x7f75080ab5c0 = PRIM_CAR(v0x7f75080ab5a0);
__nargs = 2;
__arg1 = v0x7f75080ab5c0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj x = __arg1;
Obj v0x7f75080ab280 = PRIM_CDR(x);
Obj v0x7f75080ab2a0 = PRIM_CAR(v0x7f75080ab280);
__nargs = 2;
__arg1 = v0x7f75080ab2a0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x = __arg1;
Obj v0x7f7507ec5400 = PRIM_EQ(x, Nil);
__nargs = 2;
__arg1 = v0x7f7507ec5400;
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

