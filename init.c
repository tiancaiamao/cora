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
Obj v0x7f41124ebf40 = primSet(co, symnull_63, makeNative(25, clofun4, 1, 0));
Obj v0x7f41124d9220 = primSet(co, symcadr, makeNative(24, clofun4, 1, 0));
Obj v0x7f41124d9500 = primSet(co, symcaar, makeNative(23, clofun4, 1, 0));
Obj v0x7f41124d97e0 = primSet(co, symcdar, makeNative(22, clofun4, 1, 0));
Obj v0x7f41124d9ac0 = primSet(co, symcddr, makeNative(21, clofun4, 1, 0));
Obj v0x7f41124d9e60 = primSet(co, symcaddr, makeNative(20, clofun4, 1, 0));
Obj v0x7f41124cb2c0 = primSet(co, symcadddr, makeNative(19, clofun4, 1, 0));
Obj v0x7f41124cb660 = primSet(co, symcdddr, makeNative(18, clofun4, 1, 0));
Obj v0x7f41124cbda0 = primSet(co, symrcons, makeNative(16, clofun4, 1, 0));
Obj v0x7f4112570020 = primSet(co, sympair_63, makeNative(15, clofun4, 1, 0));
Obj v0x7f41125705a0 = primSet(co, symcora_47init_35reverse_45h, makeNative(14, clofun4, 2, 0));
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
Obj v0x7f4112570760 = __arg1;
Obj v0x7f4112570780 = primSet(co, symreverse, v0x7f4112570760);
Obj v0x7f4112570e80 = primSet(co, symmap_45h, makeNative(12, clofun4, 3, 0));
Obj v0x7f41125630c0 = primSet(co, symmap, makeNative(11, clofun4, 2, 0));
Obj v0x7f41125631e0 = primSet(co, sym_42macros_42, Nil);
Obj v0x7f4112563380 = primGenSym();
Obj v0x7f41125633a0 = primSet(co, sym_42protect_45symbol_42, v0x7f4112563380);
Obj v0x7f41125637a0 = primSet(co, symcora_47init_35add_45to_45_42macros_42, makeNative(10, clofun4, 2, 0));
Obj v0x7f411252cb60 = primSet(co, symcora_47init_35macroexpand1_45h, makeNative(8, clofun4, 2, 0));
Obj v0x7f411252ce00 = primSet(co, symcora_47init_35macroexpand1, makeNative(7, clofun4, 1, 0));
Obj v0x7f4112512500 = primSet(co, symcora_47init_35macroexpand_45boot, makeNative(1, clofun4, 1, 0));
Obj v0x7f4112512620 = primSet(co, symmacroexpand, globalRef(symcora_47init_35macroexpand_45boot));
Obj v0x7f4112512fe0 = primSet(co, symdefmacro_45macro, makeNative(47, clofun3, 1, 0));
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
Obj v0x7f41124eb100 = __arg1;
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
Obj v0x7f41124eb3c0 = __arg1;
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
Obj v0x7f41124ebca0 = __arg1;
Obj v0x7f41124d9300 = primSet(co, symelem_63, makeNative(41, clofun3, 2, 0));
Obj v0x7f41124d9640 = primSet(co, symatom_63, makeNative(40, clofun3, 1, 0));
Obj v0x7f41124cb200 = primSet(co, symcora_47init_35rewrite_45let, makeNative(35, clofun3, 1, 0));
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
Obj v0x7f41124c41e0 = __arg1;
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
Obj v0x7f41124c4e80 = __arg1;
Obj v0x7f41124ada00 = primSet(co, symcora_47init_35rewrite_45or, makeNative(28, clofun3, 1, 0));
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
Obj v0x7f41124adcc0 = __arg1;
Obj v0x7f411248c840 = primSet(co, symcora_47init_35rewrite_45and, makeNative(25, clofun3, 1, 0));
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
Obj v0x7f411248cb00 = __arg1;
Obj v0x7f4112570220 = primSet(co, symboolean_63, makeNative(23, clofun3, 1, 0));
Obj v0x7f4112570be0 = primSet(co, symcora_47init_35rcons1, makeNative(20, clofun3, 1, 0));
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
Obj v0x7f4112570f40 = __arg1;
Obj v0x7f41124eb560 = primSet(co, symcora_47init_35match_45cons_45expander, makeNative(1, clofun3, 4, 0));
Obj v0x7f41124cbea0 = primSet(co, symcora_47init_35match1, makeNative(45, clofun2, 4, 0));
Obj v0x7f41124ad960 = primSet(co, symcora_47init_35extract_45rule_45action, makeNative(37, clofun2, 2, 0));
Obj v0x7f4112570280 = primSet(co, symcora_47init_35match_45helper, makeNative(21, clofun2, 2, 0));
Obj v0x7f411252c4a0 = primSet(co, symcora_47init_35rewrite_45match, makeNative(14, clofun2, 1, 0));
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
Obj v0x7f411252c820 = __arg1;
Obj v0x7f41124cbd20 = primSet(co, symcora_47init_35extract_45rules1, makeNative(6, clofun2, 3, 0));
Obj v0x7f41124c4020 = primSet(co, symcora_47init_35extract_45rules, makeNative(5, clofun2, 1, 0));
Obj v0x7f41124c47e0 = primSet(co, symcora_47init_35rules_45patterns, makeNative(2, clofun2, 2, 0));
Obj v0x7f41124c4ea0 = primSet(co, symcora_47init_35length_45h, makeNative(1, clofun2, 2, 0));
Obj v0x7f41124ad120 = primSet(co, symlength, makeNative(0, clofun2, 1, 0));
Obj v0x7f41124ade60 = primSet(co, symcora_47init_35filter_45h, makeNative(48, clofun1, 3, 0));
Obj v0x7f411248c120 = primSet(co, symfilter, makeNative(47, clofun1, 2, 0));
Obj v0x7f411248c8e0 = primSet(co, symappend, makeNative(45, clofun1, 2, 0));
Obj v0x7f411248a760 = primSet(co, symcora_47init_35rules_45arg_45count, makeNative(38, clofun1, 1, 0));
Obj v0x7f411248ada0 = primSet(co, symcora_47init_35gen_45paramenters, makeNative(36, clofun1, 1, 0));
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
Obj v0x7f4112485060 = __arg1;
Obj v0x7f4112563280 = primSet(co, symcora_47init_35propagate_45boolean0, makeNative(18, clofun1, 1, 0));
Obj v0x7f41125cfaa0 = primSet(co, symcora_47init_35propagate_45boolean, makeNative(45, clofun0, 1, 0));
Obj v0x7f41125cfd60 = primSet(co, symmacroexpand, makeNative(43, clofun0, 1, 0));
Obj v0x7f41125d68e0 = primSet(co, symcora_47init_35rewrite_45begin, makeNative(38, clofun0, 1, 0));
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
Obj v0x7f41125d6ba0 = __arg1;
Obj v0x7f41125cfa20 = primSet(co, symcora_47init_35rewrite_45backquote, makeNative(31, clofun0, 1, 0));
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
Obj v0x7f41125cfd00 = __arg1;
Obj v0x7f41125c0860 = primSet(co, symcora_47init_35parse_45define_45library_45h, makeNative(24, clofun0, 4, 0));
Obj v0x7f41125c0c00 = primSet(co, symcora_47init_35parse_45define_45library, makeNative(23, clofun0, 2, 0));
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
Obj v0x7f4112563d40 = __arg1;
Obj v0x7f41124ebae0 = makeCons(symappend, Nil);
Obj v0x7f41124ebb00 = makeCons(symfilter, v0x7f41124ebae0);
Obj v0x7f41124ebb40 = makeCons(symlength, v0x7f41124ebb00);
Obj v0x7f41124ebb60 = makeCons(symelem_63, v0x7f41124ebb40);
Obj v0x7f41124ebba0 = makeCons(symmacroexpand, v0x7f41124ebb60);
Obj v0x7f41124ebdc0 = makeCons(symmap, v0x7f41124ebba0);
Obj v0x7f41124ebde0 = makeCons(symreverse, v0x7f41124ebdc0);
Obj v0x7f41124ebe00 = makeCons(symthrow, v0x7f41124ebde0);
Obj v0x7f41124ebe20 = makeCons(symtry, v0x7f41124ebe00);
Obj v0x7f41124ebe40 = makeCons(symload, v0x7f41124ebe20);
Obj v0x7f41124ebe60 = makeCons(symimport, v0x7f41124ebe40);
Obj v0x7f41124ebe80 = makeCons(symload_45so, v0x7f41124ebe60);
Obj v0x7f41124ebea0 = makeCons(symapply, v0x7f41124ebe80);
Obj v0x7f41124ebec0 = makeCons(symvalue_45or, v0x7f41124ebea0);
Obj v0x7f41124ebf00 = makeCons(symvalue, v0x7f41124ebec0);
Obj v0x7f41124ebf60 = makeCons(symread_45file_45as_45sexp, v0x7f41124ebf00);
Obj v0x7f41124ebfc0 = makeCons(symbytes_45length, v0x7f41124ebf60);
Obj v0x7f41124ebfe0 = makeCons(symbytes, v0x7f41124ebfc0);
Obj v0x7f41124d9000 = makeCons(symvector_45length, v0x7f41124ebfe0);
Obj v0x7f41124d9020 = makeCons(symvector_45ref, v0x7f41124d9000);
Obj v0x7f41124d9040 = makeCons(symvector_45set_33, v0x7f41124d9020);
Obj v0x7f41124d9060 = makeCons(symvector, v0x7f41124d9040);
Obj v0x7f41124d9260 = makeCons(symsymbol_45_62string, v0x7f41124d9060);
Obj v0x7f41124d9280 = makeCons(symintern, v0x7f41124d9260);
Obj v0x7f41124d92a0 = makeCons(symstring_45append, v0x7f41124d9280);
Obj v0x7f41124d92c0 = makeCons(symnull_63, v0x7f41124d92a0);
Obj v0x7f41124d9320 = makeCons(symnumber_63, v0x7f41124d92c0);
Obj v0x7f41124d9340 = makeCons(symboolean_63, v0x7f41124d9320);
Obj v0x7f41124d9360 = makeCons(symatom_63, v0x7f41124d9340);
Obj v0x7f41124d9380 = makeCons(sympair_63, v0x7f41124d9360);
Obj v0x7f41124d9400 = makeCons(symcdddr, v0x7f41124d9380);
Obj v0x7f41124d9420 = makeCons(symcadddr, v0x7f41124d9400);
Obj v0x7f41124d9440 = makeCons(symcaddr, v0x7f41124d9420);
Obj v0x7f41124d9460 = makeCons(symcddr, v0x7f41124d9440);
Obj v0x7f41124d9480 = makeCons(symcdar, v0x7f41124d9460);
Obj v0x7f41124d94a0 = makeCons(symcaar, v0x7f41124d9480);
Obj v0x7f41124d9520 = makeCons(symcadr, v0x7f41124d94a0);
Obj v0x7f41124d9560 = primSet(co, symcora_47init_35_42ns_45export_42, v0x7f41124d9520);
Obj v0x7f41124d98c0 = primSet(co, symcora_47init_35cadr, globalRef(symcadr));
Obj v0x7f41124d9c20 = primSet(co, symcora_47init_35caar, globalRef(symcaar));
Obj v0x7f41124d9ec0 = primSet(co, symcora_47init_35cdar, globalRef(symcdar));
Obj v0x7f41124cb0c0 = primSet(co, symcora_47init_35cddr, globalRef(symcddr));
Obj v0x7f41124cb360 = primSet(co, symcora_47init_35caddr, globalRef(symcaddr));
Obj v0x7f41124cb700 = primSet(co, symcora_47init_35cadddr, globalRef(symcadddr));
Obj v0x7f41124cb8e0 = primSet(co, symcora_47init_35cdddr, globalRef(symcdddr));
Obj v0x7f41124cba00 = primSet(co, symcora_47init_35pair_63, globalRef(sympair_63));
Obj v0x7f41124cbde0 = primSet(co, symcora_47init_35atom_63, globalRef(symatom_63));
Obj v0x7f41124cbf60 = primSet(co, symcora_47init_35boolean_63, globalRef(symboolean_63));
Obj v0x7f41124c4160 = primSet(co, symcora_47init_35null_63, globalRef(symnull_63));
Obj v0x7f41124c4340 = primSet(co, symcora_47init_35number_63, globalRef(symnumber_63));
Obj v0x7f41124c4460 = primSet(co, symcora_47init_35string_45append, globalRef(symstring_45append));
Obj v0x7f41124c4840 = primSet(co, symcora_47init_35intern, globalRef(symintern));
Obj v0x7f41124c4980 = primSet(co, symcora_47init_35symbol_45_62string, globalRef(symsymbol_45_62string));
Obj v0x7f41124c4c00 = primSet(co, symcora_47init_35vector, globalRef(symvector));
Obj v0x7f41124c4d40 = primSet(co, symcora_47init_35vector_45set_33, globalRef(symvector_45set_33));
Obj v0x7f41124c4fc0 = primSet(co, symcora_47init_35vector_45ref, globalRef(symvector_45ref));
Obj v0x7f41124ad180 = primSet(co, symcora_47init_35vector_45length, globalRef(symvector_45length));
Obj v0x7f41124ad3e0 = primSet(co, symcora_47init_35bytes, globalRef(symbytes));
Obj v0x7f41124ad580 = primSet(co, symcora_47init_35bytes_45length, globalRef(symbytes_45length));
Obj v0x7f41124ad7a0 = primSet(co, symcora_47init_35value, globalRef(symvalue));
Obj v0x7f41124adac0 = primSet(co, symcora_47init_35value_45or, globalRef(symvalue_45or));
Obj v0x7f41124adc80 = primSet(co, symcora_47init_35read_45file_45as_45sexp, globalRef(symread_45file_45as_45sexp));
Obj v0x7f41124adee0 = primSet(co, symcora_47init_35apply, globalRef(symapply));
Obj v0x7f411248c140 = primSet(co, symcora_47init_35load, globalRef(symload));
Obj v0x7f411248c300 = primSet(co, symcora_47init_35load_45so, globalRef(symload_45so));
Obj v0x7f411248c480 = primSet(co, symcora_47init_35import, globalRef(symimport));
Obj v0x7f411248c640 = primSet(co, symcora_47init_35try, globalRef(symtry));
Obj v0x7f411248c940 = primSet(co, symcora_47init_35throw, globalRef(symthrow));
Obj v0x7f411248cac0 = primSet(co, symcora_47init_35reverse, globalRef(symreverse));
Obj v0x7f411248ccc0 = primSet(co, symcora_47init_35map, globalRef(symmap));
Obj v0x7f411248cea0 = primSet(co, symcora_47init_35macroexpand, globalRef(symmacroexpand));
Obj v0x7f411248a000 = primSet(co, symcora_47init_35elem_63, globalRef(symelem_63));
Obj v0x7f411248a300 = primSet(co, symcora_47init_35length, globalRef(symlength));
Obj v0x7f411248a440 = primSet(co, symcora_47init_35filter, globalRef(symfilter));
Obj v0x7f411248a560 = primSet(co, symcora_47init_35append, globalRef(symappend));
__nargs = 2;
__arg1 = v0x7f411248a560;
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
Obj v0x7f41125c0fa0 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = v0x7f41125c0fa0;
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
Obj v0x7f4112570320 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 18, clofun0, 1, path);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35parse_45define_45library);
__arg1 = v0x7f4112570320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj v0x7f4112570340 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = v0x7f4112570340;
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
Obj v0x7f4112570940 = makeCons(makeCString("cora/init"), import);
pushCont(co, 20, clofun0, 3, export, body, v0x7f4112570940);
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
Obj v0x7f4112563220 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112570940= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f41125639c0 = makeCons(export, Nil);
Obj v0x7f4112563a20 = makeCons(symbackquote, v0x7f41125639c0);
Obj v0x7f4112563b00 = makeCons(v0x7f4112563a20, Nil);
Obj v0x7f4112563b20 = makeCons(sym_42ns_45export_42, v0x7f4112563b00);
Obj v0x7f4112563b40 = makeCons(symdef, v0x7f4112563b20);
Obj v0x7f4112563b80 = makeCons(v0x7f4112563b40, body);
pushCont(co, 21, clofun0, 1, v0x7f4112570940);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = v0x7f4112563220;
__arg2 = v0x7f4112563b80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj v0x7f4112563c40 = __arg1;
Obj v0x7f4112570940= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112563c60 = makeCons(symbegin, v0x7f4112563c40);
Obj v0x7f4112563cc0 = makeCons(v0x7f4112563c60, Nil);
Obj v0x7f4112563ce0 = makeCons(v0x7f4112570940, v0x7f4112563cc0);
Obj v0x7f4112563d00 = makeCons(closureRef(co, 0), v0x7f4112563ce0);
Obj v0x7f4112563d20 = makeCons(symns, v0x7f4112563d00);
__nargs = 2;
__arg1 = v0x7f4112563d20;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj imp = __arg1;
Obj v0x7f4112563180 = makeCons(imp, Nil);
Obj v0x7f41125631c0 = makeCons(symimport, v0x7f4112563180);
__nargs = 2;
__arg1 = v0x7f41125631c0;
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
Obj v0x7f411252cfe0 = __arg1;
Obj v0x7f4112529000 = __arg2;
Obj v0x7f4112529020 = __arg3;
Obj v0x7f4112529060 = co->args[4];
Obj v0x7f41125291c0 = makeNative(25, clofun0, 0, 4, v0x7f411252cfe0, v0x7f4112529000, v0x7f4112529020, v0x7f4112529060);
Obj v0x7f41125c1160 = PRIM_ISCONS(v0x7f411252cfe0);
if (True == v0x7f41125c1160) {
Obj v0x7f41125c13a0 = PRIM_CAR(v0x7f411252cfe0);
Obj v0x7f41125c13c0 = PRIM_ISCONS(v0x7f41125c13a0);
if (True == v0x7f41125c13c0) {
Obj v0x7f41125c1620 = PRIM_CAR(v0x7f411252cfe0);
Obj v0x7f41125c1640 = PRIM_CAR(v0x7f41125c1620);
Obj v0x7f41125c1660 = PRIM_EQ(symimport, v0x7f41125c1640);
if (True == v0x7f41125c1660) {
Obj v0x7f41125c1900 = PRIM_CAR(v0x7f411252cfe0);
Obj v0x7f41125c1920 = PRIM_CDR(v0x7f41125c1900);
Obj v0x7f41125c1940 = PRIM_ISCONS(v0x7f41125c1920);
if (True == v0x7f41125c1940) {
Obj v0x7f41125c1be0 = PRIM_CAR(v0x7f411252cfe0);
Obj v0x7f41125c1c00 = PRIM_CDR(v0x7f41125c1be0);
Obj v0x7f41125c1c20 = PRIM_CAR(v0x7f41125c1c00);
Obj lib = v0x7f41125c1c20;
Obj v0x7f41125c1fa0 = PRIM_CAR(v0x7f411252cfe0);
Obj v0x7f41125c1fc0 = PRIM_CDR(v0x7f41125c1fa0);
Obj v0x7f41125c1fe0 = PRIM_CDR(v0x7f41125c1fc0);
Obj v0x7f41125c0000 = PRIM_EQ(Nil, v0x7f41125c1fe0);
if (True == v0x7f41125c0000) {
Obj v0x7f41125c0100 = PRIM_CDR(v0x7f411252cfe0);
Obj rest = v0x7f41125c0100;
Obj imports = v0x7f4112529000;
Obj exports = v0x7f4112529020;
Obj k = v0x7f4112529060;
Obj v0x7f41125c0460 = makeCons(lib, imports);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45define_45library_45h);
__arg1 = rest;
__arg2 = v0x7f41125c0460;
__arg3 = exports;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f41125291c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125291c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125291c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125291c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125291c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj v0x7f411252c580 = makeNative(26, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj v0x7f41125cd4e0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125cd4e0) {
Obj v0x7f41125cd6c0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125cd6e0 = PRIM_ISCONS(v0x7f41125cd6c0);
if (True == v0x7f41125cd6e0) {
Obj v0x7f41125cd9c0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125cd9e0 = PRIM_CAR(v0x7f41125cd9c0);
Obj v0x7f41125cda00 = PRIM_EQ(symexport, v0x7f41125cd9e0);
if (True == v0x7f41125cda00) {
Obj v0x7f41125cdbe0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125cdc00 = PRIM_CDR(v0x7f41125cdbe0);
Obj more = v0x7f41125cdc00;
Obj v0x7f41125cdd00 = PRIM_CDR(closureRef(co, 0));
Obj rest = v0x7f41125cdd00;
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
__arg0 = v0x7f411252c580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj v0x7f411252c9c0 = makeNative(28, clofun0, 0, 0);
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
Obj v0x7f41125cd360 = __arg1;
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exports= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 4;
__arg0 = k;
__arg1 = v0x7f41125cd360;
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
Obj v0x7f41125cfce0 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45backquote);
__arg1 = v0x7f41125cfce0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj v0x7f411252c800 = __arg1;
Obj v0x7f411252c8a0 = makeNative(32, clofun0, 0, 1, v0x7f411252c800);
Obj x = v0x7f411252c800;
Obj v0x7f41125cf780 = primIsSymbol(x);
if (True == v0x7f41125cf780) {
Obj v0x7f41125cf960 = makeCons(x, Nil);
Obj v0x7f41125cf980 = makeCons(symquote, v0x7f41125cf960);
__nargs = 2;
__arg1 = v0x7f41125cf980;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411252c8a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj v0x7f411252c9a0 = makeNative(33, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f41125d27c0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125d27c0) {
Obj v0x7f41125d29c0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125d29e0 = PRIM_EQ(symunquote, v0x7f41125d29c0);
if (True == v0x7f41125d29e0) {
Obj v0x7f41125d2bc0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d2be0 = PRIM_ISCONS(v0x7f41125d2bc0);
if (True == v0x7f41125d2be0) {
Obj v0x7f41125cf060 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cf0c0 = PRIM_CAR(v0x7f41125cf060);
Obj x = v0x7f41125cf0c0;
Obj v0x7f41125cf360 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cf380 = PRIM_CDR(v0x7f41125cf360);
Obj v0x7f41125cf3a0 = PRIM_EQ(Nil, v0x7f41125cf380);
if (True == v0x7f41125cf3a0) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411252c9a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c9a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c9a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c9a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj v0x7f411252cb80 = makeNative(35, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f41125d20c0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125d20c0) {
Obj v0x7f41125d21e0 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f41125d21e0;
Obj v0x7f41125d2300 = PRIM_CDR(closureRef(co, 0));
Obj more = v0x7f41125d2300;
Obj v0x7f41125d2580 = makeCons(x, more);
PUSH_CONT_0(co, 34, clofun0);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35rewrite_45backquote);
__arg2 = v0x7f41125d2580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f411252cb80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj v0x7f41125d25a0 = __arg1;
Obj v0x7f41125d25c0 = makeCons(symlist, v0x7f41125d25a0);
__nargs = 2;
__arg1 = v0x7f41125d25c0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj v0x7f411252cd20 = makeNative(36, clofun0, 0, 0);
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
Obj v0x7f41125d6b80 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45begin);
__arg1 = v0x7f41125d6b80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj v0x7f411252c120 = __arg1;
Obj v0x7f411252c1a0 = makeNative(39, clofun0, 0, 1, v0x7f411252c120);
Obj v0x7f41125d64e0 = PRIM_ISCONS(v0x7f411252c120);
if (True == v0x7f41125d64e0) {
Obj v0x7f41125d65e0 = PRIM_CAR(v0x7f411252c120);
Obj x = v0x7f41125d65e0;
Obj v0x7f41125d67a0 = PRIM_CDR(v0x7f411252c120);
Obj v0x7f41125d67c0 = PRIM_EQ(Nil, v0x7f41125d67a0);
if (True == v0x7f41125d67c0) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411252c1a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c1a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj v0x7f411252c3a0 = makeNative(40, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f41125d28a0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125d28a0) {
Obj v0x7f41125d29a0 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f41125d29a0;
Obj v0x7f41125d2b40 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d2b60 = PRIM_ISCONS(v0x7f41125d2b40);
if (True == v0x7f41125d2b60) {
Obj v0x7f41125d2d00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d2d20 = PRIM_CAR(v0x7f41125d2d00);
Obj y = v0x7f41125d2d20;
Obj v0x7f41125d2f80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d2fa0 = PRIM_CDR(v0x7f41125d2f80);
Obj v0x7f41125d2fc0 = PRIM_EQ(Nil, v0x7f41125d2fa0);
if (True == v0x7f41125d2fc0) {
Obj v0x7f41125d6220 = makeCons(y, Nil);
Obj v0x7f41125d6240 = makeCons(x, v0x7f41125d6220);
Obj v0x7f41125d6260 = makeCons(symdo, v0x7f41125d6240);
__nargs = 2;
__arg1 = v0x7f41125d6260;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411252c3a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c3a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c3a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj v0x7f411252c5c0 = makeNative(42, clofun0, 0, 0);
Obj v0x7f41125d21c0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125d21c0) {
Obj v0x7f41125d22c0 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f41125d22c0;
Obj v0x7f41125d23c0 = PRIM_CDR(closureRef(co, 0));
Obj y = v0x7f41125d23c0;
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
__arg0 = v0x7f411252c5c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj v0x7f41125d26a0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41125d26e0 = makeCons(v0x7f41125d26a0, Nil);
Obj v0x7f41125d2700 = makeCons(x, v0x7f41125d26e0);
Obj v0x7f41125d2720 = makeCons(symdo, v0x7f41125d2700);
__nargs = 2;
__arg1 = v0x7f41125d2720;
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
Obj v0x7f41125cfd40 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = v0x7f41125cfd40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj v0x7f411252c240 = __arg1;
Obj v0x7f411252c2e0 = makeNative(46, clofun0, 0, 1, v0x7f411252c240);
Obj v0x7f41125cdec0 = PRIM_ISCONS(v0x7f411252c240);
if (True == v0x7f41125cdec0) {
Obj v0x7f41125cf080 = PRIM_CAR(v0x7f411252c240);
Obj v0x7f41125cf0a0 = PRIM_EQ(symquote, v0x7f41125cf080);
if (True == v0x7f41125cf0a0) {
Obj v0x7f41125cf240 = PRIM_CDR(v0x7f411252c240);
Obj v0x7f41125cf260 = PRIM_ISCONS(v0x7f41125cf240);
if (True == v0x7f41125cf260) {
Obj v0x7f41125cf400 = PRIM_CDR(v0x7f411252c240);
Obj v0x7f41125cf420 = PRIM_CAR(v0x7f41125cf400);
Obj x = v0x7f41125cf420;
Obj v0x7f41125cf680 = PRIM_CDR(v0x7f411252c240);
Obj v0x7f41125cf6a0 = PRIM_CDR(v0x7f41125cf680);
Obj v0x7f41125cf6c0 = PRIM_EQ(Nil, v0x7f41125cf6a0);
if (True == v0x7f41125cf6c0) {
Obj v0x7f41125cf860 = makeCons(x, Nil);
Obj v0x7f41125cf880 = makeCons(symquote, v0x7f41125cf860);
__nargs = 2;
__arg1 = v0x7f41125cf880;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411252c2e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c2e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c2e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c2e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj v0x7f411252c4e0 = makeNative(48, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f41125cd060 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125cd060) {
Obj v0x7f41125cd220 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125cd240 = PRIM_EQ(symcons_63, v0x7f41125cd220);
if (True == v0x7f41125cd240) {
Obj v0x7f41125cd3e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cd400 = PRIM_ISCONS(v0x7f41125cd3e0);
if (True == v0x7f41125cd400) {
Obj v0x7f41125cd5a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cd5c0 = PRIM_CAR(v0x7f41125cd5a0);
Obj x = v0x7f41125cd5c0;
Obj v0x7f41125cd820 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cd840 = PRIM_CDR(v0x7f41125cd820);
Obj v0x7f41125cd860 = PRIM_EQ(Nil, v0x7f41125cd840);
if (True == v0x7f41125cd860) {
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
__arg0 = v0x7f411252c4e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c4e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c4e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c4e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj v0x7f41125cd960 = __arg1;
Obj x1 = v0x7f41125cd960;
Obj v0x7f41125cdba0 = makeCons(x1, Nil);
Obj v0x7f41125cdbc0 = makeCons(symcons_63, v0x7f41125cdba0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f41125cdbc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj v0x7f411252c6c0 = makeNative(0, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f411245bca0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f411245bca0) {
Obj v0x7f411245bec0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f411245bee0 = PRIM_EQ(symcar, v0x7f411245bec0);
if (True == v0x7f411245bee0) {
Obj v0x7f411243c3e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411243c400 = PRIM_ISCONS(v0x7f411243c3e0);
if (True == v0x7f411243c400) {
Obj v0x7f411243c5e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411243c640 = PRIM_CAR(v0x7f411243c5e0);
Obj x = v0x7f411243c640;
Obj v0x7f411243c900 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411243c920 = PRIM_CDR(v0x7f411243c900);
Obj v0x7f411243c940 = PRIM_EQ(Nil, v0x7f411243c920);
if (True == v0x7f411243c940) {
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
__arg0 = v0x7f411252c6c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c6c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c6c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c6c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj v0x7f411243ca40 = __arg1;
Obj x1 = v0x7f411243ca40;
Obj v0x7f411243cd00 = makeCons(x1, Nil);
Obj v0x7f411243cd20 = makeCons(symcar, v0x7f411243cd00);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f411243cd20;
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
Obj v0x7f411252c880 = makeNative(2, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f41124859e0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41124859e0) {
Obj v0x7f4112485cc0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112485ce0 = PRIM_EQ(symcdr, v0x7f4112485cc0);
if (True == v0x7f4112485ce0) {
Obj v0x7f4112485e80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112485ea0 = PRIM_ISCONS(v0x7f4112485e80);
if (True == v0x7f4112485ea0) {
Obj v0x7f411245b0a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411245b0c0 = PRIM_CAR(v0x7f411245b0a0);
Obj x = v0x7f411245b0c0;
Obj v0x7f411245b4a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411245b520 = PRIM_CDR(v0x7f411245b4a0);
Obj v0x7f411245b540 = PRIM_EQ(Nil, v0x7f411245b520);
if (True == v0x7f411245b540) {
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
__arg0 = v0x7f411252c880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj v0x7f411245b640 = __arg1;
Obj x1 = v0x7f411245b640;
Obj v0x7f411245b900 = makeCons(x1, Nil);
Obj v0x7f411245b920 = makeCons(symcdr, v0x7f411245b900);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f411245b920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj v0x7f411252ca60 = makeNative(5, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f411248abc0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f411248abc0) {
Obj v0x7f411248ae00 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f411248ae20 = PRIM_EQ(symand, v0x7f411248ae00);
if (True == v0x7f411248ae20) {
Obj v0x7f4112487020 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112487060 = PRIM_ISCONS(v0x7f4112487020);
if (True == v0x7f4112487060) {
Obj v0x7f4112487340 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112487360 = PRIM_CAR(v0x7f4112487340);
Obj x = v0x7f4112487360;
Obj v0x7f4112487660 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124876a0 = PRIM_CDR(v0x7f4112487660);
Obj v0x7f41124876c0 = PRIM_ISCONS(v0x7f41124876a0);
if (True == v0x7f41124876c0) {
Obj v0x7f41124879e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112487a00 = PRIM_CDR(v0x7f41124879e0);
Obj v0x7f4112487a20 = PRIM_CAR(v0x7f4112487a00);
Obj y = v0x7f4112487a20;
Obj v0x7f4112487da0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112487dc0 = PRIM_CDR(v0x7f4112487da0);
Obj v0x7f4112487de0 = PRIM_CDR(v0x7f4112487dc0);
Obj v0x7f4112487e00 = PRIM_EQ(Nil, v0x7f4112487de0);
if (True == v0x7f4112487e00) {
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
__arg0 = v0x7f411252ca60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252ca60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252ca60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252ca60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252ca60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj v0x7f41124850e0 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1 = v0x7f41124850e0;
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
Obj v0x7f41124851e0 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y1 = v0x7f41124851e0;
Obj v0x7f4112485560 = makeCons(y1, Nil);
Obj v0x7f4112485580 = makeCons(x1, v0x7f4112485560);
Obj v0x7f41124855a0 = makeCons(symand, v0x7f4112485580);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f41124855a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj v0x7f411252ccc0 = makeNative(7, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f411248c540 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f411248c540) {
Obj v0x7f411248c7a0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f411248c880 = PRIM_EQ(symnull_63, v0x7f411248c7a0);
if (True == v0x7f411248c880) {
Obj v0x7f411248cba0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411248cbc0 = PRIM_ISCONS(v0x7f411248cba0);
if (True == v0x7f411248cbc0) {
Obj v0x7f411248cd80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411248cda0 = PRIM_CAR(v0x7f411248cd80);
Obj x = v0x7f411248cda0;
Obj v0x7f411248a0c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411248a1a0 = PRIM_CDR(v0x7f411248a0c0);
Obj v0x7f411248a1c0 = PRIM_EQ(Nil, v0x7f411248a1a0);
if (True == v0x7f411248a1c0) {
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
__arg0 = v0x7f411252ccc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252ccc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252ccc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252ccc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj v0x7f411248a380 = __arg1;
Obj x1 = v0x7f411248a380;
Obj v0x7f411248a720 = makeCons(x1, Nil);
Obj v0x7f411248a740 = makeCons(symnull_63, v0x7f411248a720);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f411248a740;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj v0x7f411252cea0 = makeNative(9, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f41124c4d80 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41124c4d80) {
Obj v0x7f41124ad0a0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41124ad0c0 = PRIM_EQ(symnot, v0x7f41124ad0a0);
if (True == v0x7f41124ad0c0) {
Obj v0x7f41124ad380 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124ad3a0 = PRIM_ISCONS(v0x7f41124ad380);
if (True == v0x7f41124ad3a0) {
Obj v0x7f41124ad600 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124ad6a0 = PRIM_CAR(v0x7f41124ad600);
Obj x = v0x7f41124ad6a0;
Obj v0x7f41124adb20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124adb40 = PRIM_CDR(v0x7f41124adb20);
Obj v0x7f41124adb80 = PRIM_EQ(Nil, v0x7f41124adb40);
if (True == v0x7f41124adb80) {
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
__arg0 = v0x7f411252cea0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252cea0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252cea0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252cea0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj v0x7f41124adce0 = __arg1;
Obj x1 = v0x7f41124adce0;
Obj v0x7f411248c040 = makeCons(x1, Nil);
Obj v0x7f411248c0e0 = makeCons(symnot, v0x7f411248c040);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f411248c0e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj v0x7f4112529080 = makeNative(13, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f41124eb380 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41124eb380) {
Obj v0x7f41124eb6e0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41124eb700 = PRIM_EQ(symif, v0x7f41124eb6e0);
if (True == v0x7f41124eb700) {
Obj v0x7f41124eb940 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124eb960 = PRIM_ISCONS(v0x7f41124eb940);
if (True == v0x7f41124eb960) {
Obj v0x7f41124ebc20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124ebda0 = PRIM_CAR(v0x7f41124ebc20);
Obj x = v0x7f41124ebda0;
Obj v0x7f41124d9140 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124d9160 = PRIM_CDR(v0x7f41124d9140);
Obj v0x7f41124d9180 = PRIM_ISCONS(v0x7f41124d9160);
if (True == v0x7f41124d9180) {
Obj v0x7f41124d9700 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124d9720 = PRIM_CDR(v0x7f41124d9700);
Obj v0x7f41124d9760 = PRIM_CAR(v0x7f41124d9720);
Obj y = v0x7f41124d9760;
Obj v0x7f41124d9d20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124d9d40 = PRIM_CDR(v0x7f41124d9d20);
Obj v0x7f41124d9d60 = PRIM_CDR(v0x7f41124d9d40);
Obj v0x7f41124d9d80 = PRIM_ISCONS(v0x7f41124d9d60);
if (True == v0x7f41124d9d80) {
Obj v0x7f41124cb380 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124cb3a0 = PRIM_CDR(v0x7f41124cb380);
Obj v0x7f41124cb3c0 = PRIM_CDR(v0x7f41124cb3a0);
Obj v0x7f41124cb3e0 = PRIM_CAR(v0x7f41124cb3c0);
Obj z = v0x7f41124cb3e0;
Obj v0x7f41124cba60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124cbaa0 = PRIM_CDR(v0x7f41124cba60);
Obj v0x7f41124cbb80 = PRIM_CDR(v0x7f41124cbaa0);
Obj v0x7f41124cbbc0 = PRIM_CDR(v0x7f41124cbb80);
Obj v0x7f41124cbbe0 = PRIM_EQ(Nil, v0x7f41124cbbc0);
if (True == v0x7f41124cbbe0) {
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
__arg0 = v0x7f4112529080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj v0x7f41124cbdc0 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x1 = v0x7f41124cbdc0;
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
Obj v0x7f41124cbf00 = __arg1;
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj y1 = v0x7f41124cbf00;
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
Obj v0x7f41124c4000 = __arg1;
Obj y1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj z1 = v0x7f41124c4000;
Obj v0x7f41124c45c0 = makeCons(z1, Nil);
Obj v0x7f41124c45e0 = makeCons(y1, v0x7f41124c45c0);
Obj v0x7f41124c4600 = makeCons(x1, v0x7f41124c45e0);
Obj v0x7f41124c4640 = makeCons(symif, v0x7f41124c4600);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f41124c4640;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj v0x7f4112529340 = makeNative(15, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f411252cd80 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f411252cd80) {
Obj v0x7f411252cfc0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125290c0 = PRIM_EQ(symlambda, v0x7f411252cfc0);
if (True == v0x7f41125290c0) {
Obj v0x7f41125293a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125293c0 = PRIM_ISCONS(v0x7f41125293a0);
if (True == v0x7f41125293c0) {
Obj v0x7f41125296a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125296c0 = PRIM_CAR(v0x7f41125296a0);
Obj args = v0x7f41125296c0;
Obj v0x7f4112529a20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112529ae0 = PRIM_CDR(v0x7f4112529a20);
Obj v0x7f4112529b00 = PRIM_ISCONS(v0x7f4112529ae0);
if (True == v0x7f4112529b00) {
Obj v0x7f4112512360 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112512380 = PRIM_CDR(v0x7f4112512360);
Obj v0x7f41125123a0 = PRIM_CAR(v0x7f4112512380);
Obj body = v0x7f41125123a0;
Obj v0x7f4112512800 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112512820 = PRIM_CDR(v0x7f4112512800);
Obj v0x7f4112512840 = PRIM_CDR(v0x7f4112512820);
Obj v0x7f4112512860 = PRIM_EQ(Nil, v0x7f4112512840);
if (True == v0x7f4112512860) {
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
__arg0 = v0x7f4112529340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj v0x7f4112512ca0 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112512ce0 = makeCons(v0x7f4112512ca0, Nil);
Obj v0x7f4112512d00 = makeCons(args, v0x7f4112512ce0);
Obj v0x7f4112512d20 = makeCons(symlambda, v0x7f4112512d00);
__nargs = 2;
__arg1 = v0x7f4112512d20;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj v0x7f41125295c0 = makeNative(16, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f411252c180 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f411252c180) {
Obj v0x7f411252c4c0 = PRIM_CAR(closureRef(co, 0));
Obj f = v0x7f411252c4c0;
Obj v0x7f411252c640 = PRIM_CDR(closureRef(co, 0));
Obj args = v0x7f411252c640;
Obj v0x7f411252caa0 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35propagate_45boolean);
__arg2 = v0x7f411252caa0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f41125295c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj v0x7f4112529740 = makeNative(17, clofun1, 0, 0);
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
Obj v0x7f411252c220 = __arg1;
Obj v0x7f411252c2a0 = makeNative(19, clofun1, 0, 1, v0x7f411252c220);
Obj v0x7f41125c1740 = PRIM_ISCONS(v0x7f411252c220);
if (True == v0x7f41125c1740) {
Obj v0x7f41125c11e0 = PRIM_CAR(v0x7f411252c220);
Obj v0x7f41125c1200 = PRIM_EQ(symcar, v0x7f41125c11e0);
if (True == v0x7f41125c1200) {
Obj v0x7f41125c1840 = PRIM_CDR(v0x7f411252c220);
Obj v0x7f41125c1860 = PRIM_ISCONS(v0x7f41125c1840);
if (True == v0x7f41125c1860) {
Obj v0x7f41125c1aa0 = PRIM_CDR(v0x7f411252c220);
Obj v0x7f41125c1ac0 = PRIM_CAR(v0x7f41125c1aa0);
Obj v0x7f41125c1ae0 = PRIM_ISCONS(v0x7f41125c1ac0);
if (True == v0x7f41125c1ae0) {
Obj v0x7f41125c1de0 = PRIM_CDR(v0x7f411252c220);
Obj v0x7f41125c1e00 = PRIM_CAR(v0x7f41125c1de0);
Obj v0x7f41125c1e20 = PRIM_CAR(v0x7f41125c1e00);
Obj v0x7f41125c1e40 = PRIM_EQ(symcons, v0x7f41125c1e20);
if (True == v0x7f41125c1e40) {
Obj v0x7f41125c0120 = PRIM_CDR(v0x7f411252c220);
Obj v0x7f41125c0140 = PRIM_CAR(v0x7f41125c0120);
Obj v0x7f41125c0160 = PRIM_CDR(v0x7f41125c0140);
Obj v0x7f41125c0180 = PRIM_ISCONS(v0x7f41125c0160);
if (True == v0x7f41125c0180) {
Obj v0x7f41125c04e0 = PRIM_CDR(v0x7f411252c220);
Obj v0x7f41125c0500 = PRIM_CAR(v0x7f41125c04e0);
Obj v0x7f41125c0520 = PRIM_CDR(v0x7f41125c0500);
Obj v0x7f41125c0540 = PRIM_CAR(v0x7f41125c0520);
Obj x = v0x7f41125c0540;
Obj v0x7f41125c0960 = PRIM_CDR(v0x7f411252c220);
Obj v0x7f41125c0980 = PRIM_CAR(v0x7f41125c0960);
Obj v0x7f41125c09a0 = PRIM_CDR(v0x7f41125c0980);
Obj v0x7f41125c0a60 = PRIM_CDR(v0x7f41125c09a0);
Obj v0x7f41125c0a80 = PRIM_ISCONS(v0x7f41125c0a60);
if (True == v0x7f41125c0a80) {
Obj v0x7f41125c0e00 = PRIM_CDR(v0x7f411252c220);
Obj v0x7f41125c0e20 = PRIM_CAR(v0x7f41125c0e00);
Obj v0x7f41125c0e40 = PRIM_CDR(v0x7f41125c0e20);
Obj v0x7f41125c0e60 = PRIM_CDR(v0x7f41125c0e40);
Obj v0x7f41125c0f40 = PRIM_CAR(v0x7f41125c0e60);
Obj __ = v0x7f41125c0f40;
Obj v0x7f41125705e0 = PRIM_CDR(v0x7f411252c220);
Obj v0x7f4112570600 = PRIM_CAR(v0x7f41125705e0);
Obj v0x7f4112570660 = PRIM_CDR(v0x7f4112570600);
Obj v0x7f41125706a0 = PRIM_CDR(v0x7f4112570660);
Obj v0x7f41125706c0 = PRIM_CDR(v0x7f41125706a0);
Obj v0x7f41125706e0 = PRIM_EQ(Nil, v0x7f41125706c0);
if (True == v0x7f41125706e0) {
Obj v0x7f4112570a60 = PRIM_CDR(v0x7f411252c220);
Obj v0x7f4112570a80 = PRIM_CDR(v0x7f4112570a60);
Obj v0x7f4112570aa0 = PRIM_EQ(Nil, v0x7f4112570a80);
if (True == v0x7f4112570aa0) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411252c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj v0x7f411252c600 = makeNative(20, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f411245bf40 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f411245bf40) {
Obj v0x7f411243c440 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f411243c460 = PRIM_EQ(symcdr, v0x7f411243c440);
if (True == v0x7f411243c460) {
Obj v0x7f411243c600 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411243c620 = PRIM_ISCONS(v0x7f411243c600);
if (True == v0x7f411243c620) {
Obj v0x7f411243c860 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411243c880 = PRIM_CAR(v0x7f411243c860);
Obj v0x7f411243c8a0 = PRIM_ISCONS(v0x7f411243c880);
if (True == v0x7f411243c8a0) {
Obj v0x7f411243cba0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411243cbc0 = PRIM_CAR(v0x7f411243cba0);
Obj v0x7f411243cbe0 = PRIM_CAR(v0x7f411243cbc0);
Obj v0x7f411243cc00 = PRIM_EQ(symcons, v0x7f411243cbe0);
if (True == v0x7f411243cc00) {
Obj v0x7f411243cee0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411243cf00 = PRIM_CAR(v0x7f411243cee0);
Obj v0x7f411243cf20 = PRIM_CDR(v0x7f411243cf00);
Obj v0x7f411243cf40 = PRIM_ISCONS(v0x7f411243cf20);
if (True == v0x7f411243cf40) {
Obj v0x7f41125c01e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c0200 = PRIM_CAR(v0x7f41125c01e0);
Obj v0x7f41125c0220 = PRIM_CDR(v0x7f41125c0200);
Obj v0x7f41125c0240 = PRIM_CAR(v0x7f41125c0220);
Obj __ = v0x7f41125c0240;
Obj v0x7f41125c05c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c05e0 = PRIM_CAR(v0x7f41125c05c0);
Obj v0x7f41125c0600 = PRIM_CDR(v0x7f41125c05e0);
Obj v0x7f41125c0620 = PRIM_CDR(v0x7f41125c0600);
Obj v0x7f41125c0640 = PRIM_ISCONS(v0x7f41125c0620);
if (True == v0x7f41125c0640) {
Obj v0x7f41125c09c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c09e0 = PRIM_CAR(v0x7f41125c09c0);
Obj v0x7f41125c0a00 = PRIM_CDR(v0x7f41125c09e0);
Obj v0x7f41125c0a20 = PRIM_CDR(v0x7f41125c0a00);
Obj v0x7f41125c0a40 = PRIM_CAR(v0x7f41125c0a20);
Obj x = v0x7f41125c0a40;
Obj v0x7f41125c0e80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c0ea0 = PRIM_CAR(v0x7f41125c0e80);
Obj v0x7f41125c0ec0 = PRIM_CDR(v0x7f41125c0ea0);
Obj v0x7f41125c0ee0 = PRIM_CDR(v0x7f41125c0ec0);
Obj v0x7f41125c0f00 = PRIM_CDR(v0x7f41125c0ee0);
Obj v0x7f41125c0f20 = PRIM_EQ(Nil, v0x7f41125c0f00);
if (True == v0x7f41125c0f20) {
Obj v0x7f41125c1180 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c11a0 = PRIM_CDR(v0x7f41125c1180);
Obj v0x7f41125c11c0 = PRIM_EQ(Nil, v0x7f41125c11a0);
if (True == v0x7f41125c11c0) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411252c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj v0x7f411252c920 = makeNative(21, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f4112487040 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112487040) {
Obj v0x7f4112487300 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112487320 = PRIM_EQ(symcons_63, v0x7f4112487300);
if (True == v0x7f4112487320) {
Obj v0x7f4112487520 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112487540 = PRIM_ISCONS(v0x7f4112487520);
if (True == v0x7f4112487540) {
Obj v0x7f41124877e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112487800 = PRIM_CAR(v0x7f41124877e0);
Obj v0x7f4112487820 = PRIM_ISCONS(v0x7f4112487800);
if (True == v0x7f4112487820) {
Obj v0x7f4112487b80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112487ba0 = PRIM_CAR(v0x7f4112487b80);
Obj v0x7f4112487bc0 = PRIM_CAR(v0x7f4112487ba0);
Obj v0x7f4112487be0 = PRIM_EQ(symcons, v0x7f4112487bc0);
if (True == v0x7f4112487be0) {
Obj v0x7f4112487f20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112487f60 = PRIM_CAR(v0x7f4112487f20);
Obj v0x7f4112487fc0 = PRIM_CDR(v0x7f4112487f60);
Obj v0x7f4112485080 = PRIM_ISCONS(v0x7f4112487fc0);
if (True == v0x7f4112485080) {
Obj v0x7f4112485360 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112485380 = PRIM_CAR(v0x7f4112485360);
Obj v0x7f41124853a0 = PRIM_CDR(v0x7f4112485380);
Obj v0x7f41124853c0 = PRIM_CAR(v0x7f41124853a0);
Obj __ = v0x7f41124853c0;
Obj v0x7f4112485740 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112485760 = PRIM_CAR(v0x7f4112485740);
Obj v0x7f4112485780 = PRIM_CDR(v0x7f4112485760);
Obj v0x7f41124857a0 = PRIM_CDR(v0x7f4112485780);
Obj v0x7f41124857c0 = PRIM_ISCONS(v0x7f41124857a0);
if (True == v0x7f41124857c0) {
Obj v0x7f4112485ba0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112485bc0 = PRIM_CAR(v0x7f4112485ba0);
Obj v0x7f4112485be0 = PRIM_CDR(v0x7f4112485bc0);
Obj v0x7f4112485c00 = PRIM_CDR(v0x7f4112485be0);
Obj v0x7f4112485c20 = PRIM_CAR(v0x7f4112485c00);
__ = v0x7f4112485c20;
Obj v0x7f411245b100 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411245b120 = PRIM_CAR(v0x7f411245b100);
Obj v0x7f411245b140 = PRIM_CDR(v0x7f411245b120);
Obj v0x7f411245b160 = PRIM_CDR(v0x7f411245b140);
Obj v0x7f411245b1e0 = PRIM_CDR(v0x7f411245b160);
Obj v0x7f411245b200 = PRIM_EQ(Nil, v0x7f411245b1e0);
if (True == v0x7f411245b200) {
Obj v0x7f411245b4c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411245b4e0 = PRIM_CDR(v0x7f411245b4c0);
Obj v0x7f411245b500 = PRIM_EQ(Nil, v0x7f411245b4e0);
if (True == v0x7f411245b500) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411252c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj v0x7f411252cc40 = makeNative(22, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f411248c5a0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f411248c5a0) {
Obj v0x7f411248c900 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f411248c920 = PRIM_EQ(symand, v0x7f411248c900);
if (True == v0x7f411248c920) {
Obj v0x7f411248cb60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411248cb80 = PRIM_ISCONS(v0x7f411248cb60);
if (True == v0x7f411248cb80) {
Obj v0x7f411248ce20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411248ce40 = PRIM_CAR(v0x7f411248ce20);
Obj v0x7f411248ce60 = PRIM_EQ(True, v0x7f411248ce40);
if (True == v0x7f411248ce60) {
Obj v0x7f411248a0e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411248a100 = PRIM_CDR(v0x7f411248a0e0);
Obj v0x7f411248a180 = PRIM_ISCONS(v0x7f411248a100);
if (True == v0x7f411248a180) {
Obj v0x7f411248a580 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411248a5a0 = PRIM_CDR(v0x7f411248a580);
Obj v0x7f411248a5c0 = PRIM_CAR(v0x7f411248a5a0);
Obj v0x7f411248a5e0 = PRIM_EQ(True, v0x7f411248a5c0);
if (True == v0x7f411248a5e0) {
Obj v0x7f411248a9e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411248aa20 = PRIM_CDR(v0x7f411248a9e0);
Obj v0x7f411248aa40 = PRIM_CDR(v0x7f411248aa20);
Obj v0x7f411248aa60 = PRIM_EQ(Nil, v0x7f411248aa40);
if (True == v0x7f411248aa60) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411252cc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252cc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252cc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252cc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252cc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252cc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252cc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj v0x7f411252ce80 = makeNative(23, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f41124ad3c0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41124ad3c0) {
Obj v0x7f41124ad620 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41124ad640 = PRIM_EQ(symnull_63, v0x7f41124ad620);
if (True == v0x7f41124ad640) {
Obj v0x7f41124ad860 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124ad880 = PRIM_ISCONS(v0x7f41124ad860);
if (True == v0x7f41124ad880) {
Obj v0x7f41124add00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124add20 = PRIM_CAR(v0x7f41124add00);
Obj v0x7f41124add40 = PRIM_EQ(Nil, v0x7f41124add20);
if (True == v0x7f41124add40) {
Obj v0x7f411248c060 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411248c080 = PRIM_CDR(v0x7f411248c060);
Obj v0x7f411248c0a0 = PRIM_EQ(Nil, v0x7f411248c080);
if (True == v0x7f411248c0a0) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411252ce80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252ce80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252ce80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252ce80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252ce80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj v0x7f4112529040 = makeNative(24, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f41124eb980 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41124eb980) {
Obj v0x7f41124ebd60 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41124ebd80 = PRIM_EQ(symnull_63, v0x7f41124ebd60);
if (True == v0x7f41124ebd80) {
Obj v0x7f41124ebf80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124ebfa0 = PRIM_ISCONS(v0x7f41124ebf80);
if (True == v0x7f41124ebfa0) {
Obj v0x7f41124d93a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124d93c0 = PRIM_CAR(v0x7f41124d93a0);
Obj v0x7f41124d93e0 = PRIM_ISCONS(v0x7f41124d93c0);
if (True == v0x7f41124d93e0) {
Obj v0x7f41124d9940 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124d9960 = PRIM_CAR(v0x7f41124d9940);
Obj v0x7f41124d99c0 = PRIM_CAR(v0x7f41124d9960);
Obj v0x7f41124d99e0 = PRIM_EQ(symcons, v0x7f41124d99c0);
if (True == v0x7f41124d99e0) {
Obj v0x7f41124d9fa0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124d9fc0 = PRIM_CAR(v0x7f41124d9fa0);
Obj v0x7f41124d9fe0 = PRIM_CDR(v0x7f41124d9fc0);
Obj v0x7f41124cb000 = PRIM_ISCONS(v0x7f41124d9fe0);
if (True == v0x7f41124cb000) {
Obj v0x7f41124cb520 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124cb540 = PRIM_CAR(v0x7f41124cb520);
Obj v0x7f41124cb560 = PRIM_CDR(v0x7f41124cb540);
Obj v0x7f41124cb580 = PRIM_CAR(v0x7f41124cb560);
Obj __ = v0x7f41124cb580;
Obj v0x7f41124cbae0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124cbb00 = PRIM_CAR(v0x7f41124cbae0);
Obj v0x7f41124cbb20 = PRIM_CDR(v0x7f41124cbb00);
Obj v0x7f41124cbb40 = PRIM_CDR(v0x7f41124cbb20);
Obj v0x7f41124cbb60 = PRIM_ISCONS(v0x7f41124cbb40);
if (True == v0x7f41124cbb60) {
Obj v0x7f41124c4040 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124c4060 = PRIM_CAR(v0x7f41124c4040);
Obj v0x7f41124c4080 = PRIM_CDR(v0x7f41124c4060);
Obj v0x7f41124c40a0 = PRIM_CDR(v0x7f41124c4080);
Obj v0x7f41124c40c0 = PRIM_CAR(v0x7f41124c40a0);
__ = v0x7f41124c40c0;
Obj v0x7f41124c4680 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124c46e0 = PRIM_CAR(v0x7f41124c4680);
Obj v0x7f41124c4700 = PRIM_CDR(v0x7f41124c46e0);
Obj v0x7f41124c4720 = PRIM_CDR(v0x7f41124c4700);
Obj v0x7f41124c4740 = PRIM_CDR(v0x7f41124c4720);
Obj v0x7f41124c4760 = PRIM_EQ(Nil, v0x7f41124c4740);
if (True == v0x7f41124c4760) {
Obj v0x7f41124c4aa0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124c4ac0 = PRIM_CDR(v0x7f41124c4aa0);
Obj v0x7f41124c4ae0 = PRIM_EQ(Nil, v0x7f41124c4ac0);
if (True == v0x7f41124c4ae0) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112529040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj v0x7f4112529360 = makeNative(25, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f41125127e0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125127e0) {
Obj v0x7f41125129a0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125129c0 = PRIM_EQ(symnot, v0x7f41125129a0);
if (True == v0x7f41125129c0) {
Obj v0x7f4112512c40 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112512c60 = PRIM_ISCONS(v0x7f4112512c40);
if (True == v0x7f4112512c60) {
Obj v0x7f41124eb020 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124eb080 = PRIM_CAR(v0x7f41124eb020);
Obj v0x7f41124eb0a0 = PRIM_EQ(True, v0x7f41124eb080);
if (True == v0x7f41124eb0a0) {
Obj v0x7f41124eb420 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124eb440 = PRIM_CDR(v0x7f41124eb420);
Obj v0x7f41124eb460 = PRIM_EQ(Nil, v0x7f41124eb440);
if (True == v0x7f41124eb460) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112529360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj v0x7f4112529520 = makeNative(26, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f4112529160 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112529160) {
Obj v0x7f4112529400 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112529420 = PRIM_EQ(symnot, v0x7f4112529400);
if (True == v0x7f4112529420) {
Obj v0x7f4112529700 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112529720 = PRIM_ISCONS(v0x7f4112529700);
if (True == v0x7f4112529720) {
Obj v0x7f4112529a80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112529aa0 = PRIM_CAR(v0x7f4112529a80);
Obj v0x7f4112529ac0 = PRIM_EQ(False, v0x7f4112529aa0);
if (True == v0x7f4112529ac0) {
Obj v0x7f41125121a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125121c0 = PRIM_CDR(v0x7f41125121a0);
Obj v0x7f41125121e0 = PRIM_EQ(Nil, v0x7f41125121c0);
if (True == v0x7f41125121e0) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112529520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112529520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj v0x7f41125296e0 = makeNative(27, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f4112570720 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112570720) {
Obj v0x7f4112570980 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125709a0 = PRIM_EQ(symif, v0x7f4112570980);
if (True == v0x7f41125709a0) {
Obj v0x7f4112570c20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112570d00 = PRIM_ISCONS(v0x7f4112570c20);
if (True == v0x7f4112570d00) {
Obj v0x7f4112563000 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112563020 = PRIM_CAR(v0x7f4112563000);
Obj v0x7f4112563040 = PRIM_EQ(True, v0x7f4112563020);
if (True == v0x7f4112563040) {
Obj v0x7f41125633e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112563400 = PRIM_CDR(v0x7f41125633e0);
Obj v0x7f4112563420 = PRIM_ISCONS(v0x7f4112563400);
if (True == v0x7f4112563420) {
Obj v0x7f41125636e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112563700 = PRIM_CDR(v0x7f41125636e0);
Obj v0x7f41125637c0 = PRIM_CAR(v0x7f4112563700);
Obj y = v0x7f41125637c0;
Obj v0x7f4112563ba0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112563bc0 = PRIM_CDR(v0x7f4112563ba0);
Obj v0x7f4112563be0 = PRIM_CDR(v0x7f4112563bc0);
Obj v0x7f4112563c20 = PRIM_ISCONS(v0x7f4112563be0);
if (True == v0x7f4112563c20) {
Obj v0x7f4112563fc0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411252c020 = PRIM_CDR(v0x7f4112563fc0);
Obj v0x7f411252c060 = PRIM_CDR(v0x7f411252c020);
Obj v0x7f411252c0a0 = PRIM_CAR(v0x7f411252c060);
Obj z = v0x7f411252c0a0;
Obj v0x7f411252c860 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411252c8c0 = PRIM_CDR(v0x7f411252c860);
Obj v0x7f411252c8e0 = PRIM_CDR(v0x7f411252c8c0);
Obj v0x7f411252c900 = PRIM_CDR(v0x7f411252c8e0);
Obj v0x7f411252c940 = PRIM_EQ(Nil, v0x7f411252c900);
if (True == v0x7f411252c940) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f41125296e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125296e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125296e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125296e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125296e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125296e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125296e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj v0x7f41125299a0 = makeNative(28, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f4112485900 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112485900) {
Obj v0x7f4112485ac0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112485ae0 = PRIM_EQ(symif, v0x7f4112485ac0);
if (True == v0x7f4112485ae0) {
Obj v0x7f4112485c80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112485ca0 = PRIM_ISCONS(v0x7f4112485c80);
if (True == v0x7f4112485ca0) {
Obj v0x7f4112485f00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112485f20 = PRIM_CAR(v0x7f4112485f00);
Obj v0x7f4112485f40 = PRIM_EQ(False, v0x7f4112485f20);
if (True == v0x7f4112485f40) {
Obj v0x7f411245b180 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411245b1a0 = PRIM_CDR(v0x7f411245b180);
Obj v0x7f411245b1c0 = PRIM_ISCONS(v0x7f411245b1a0);
if (True == v0x7f411245b1c0) {
Obj v0x7f411245b400 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411245b420 = PRIM_CDR(v0x7f411245b400);
Obj v0x7f411245b440 = PRIM_CAR(v0x7f411245b420);
Obj y = v0x7f411245b440;
Obj v0x7f411245b720 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411245b740 = PRIM_CDR(v0x7f411245b720);
Obj v0x7f411245b760 = PRIM_CDR(v0x7f411245b740);
Obj v0x7f411245b780 = PRIM_ISCONS(v0x7f411245b760);
if (True == v0x7f411245b780) {
Obj v0x7f411245ba60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411245ba80 = PRIM_CDR(v0x7f411245ba60);
Obj v0x7f411245baa0 = PRIM_CDR(v0x7f411245ba80);
Obj v0x7f411245bac0 = PRIM_CAR(v0x7f411245baa0);
Obj z = v0x7f411245bac0;
Obj v0x7f411245be60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411245be80 = PRIM_CDR(v0x7f411245be60);
Obj v0x7f411245bea0 = PRIM_CDR(v0x7f411245be80);
Obj v0x7f4112570040 = PRIM_CDR(v0x7f411245bea0);
Obj v0x7f4112570060 = PRIM_EQ(Nil, v0x7f4112570040);
if (True == v0x7f4112570060) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f41125299a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125299a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125299a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125299a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125299a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125299a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41125299a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj v0x7f4112529f20 = makeNative(29, clofun1, 0, 0);
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
Obj v0x7f4112487160 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 32, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35extract_45rules);
__arg1 = v0x7f4112487160;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj v0x7f4112487180 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = v0x7f4112487180;
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
Obj v0x7f4112487280 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = v0x7f4112487280;
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
Obj v0x7f41124873a0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = v0x7f41124873a0;
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
Obj v0x7f4112487600 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112487f40 = makeCons(symlist, args);
Obj v0x7f4112487f80 = makeCons(v0x7f4112487f40, body);
Obj v0x7f4112487fa0 = makeCons(symmatch, v0x7f4112487f80);
Obj v0x7f4112487fe0 = makeCons(v0x7f4112487fa0, Nil);
Obj v0x7f4112485000 = makeCons(args, v0x7f4112487fe0);
Obj v0x7f4112485020 = makeCons(v0x7f4112487600, v0x7f4112485000);
Obj v0x7f4112485040 = makeCons(symdefun, v0x7f4112485020);
__nargs = 2;
__arg1 = v0x7f4112485040;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj n = __arg1;
Obj v0x7f411248aa00 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == v0x7f411248aa00) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f411248aba0 = primGenSym();
Obj v0x7f411248ad40 = PRIM_SUB(n, MAKE_NUMBER(1));
pushCont(co, 37, clofun1, 1, v0x7f411248aba0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35gen_45paramenters);
__arg1 = v0x7f411248ad40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj v0x7f411248ad60 = __arg1;
Obj v0x7f411248aba0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f411248ad80 = makeCons(v0x7f411248aba0, v0x7f411248ad60);
__nargs = 2;
__arg1 = v0x7f411248ad80;
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
Obj v0x7f411248cbe0 = __arg1;
Obj pats = v0x7f411248cbe0;
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
Obj v0x7f411248cee0 = __arg1;
Obj counts = v0x7f411248cee0;
Obj v0x7f411248cfe0 = PRIM_CAR(counts);
Obj n = v0x7f411248cfe0;
Obj dif = makeNative(43, clofun1, 1, 1, n);
Obj v0x7f411248a620 = PRIM_CDR(counts);
pushCont(co, 41, clofun1, 1, n);
__nargs = 3;
__arg0 = globalRef(symfilter);
__arg1 = dif;
__arg2 = v0x7f411248a620;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj v0x7f411248a640 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 42, clofun1, 1, n);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = v0x7f411248a640;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj v0x7f411248a680 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f411248a6a0 = primNot(v0x7f411248a680);
if (True == v0x7f411248a6a0) {
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
Obj v0x7f411248a240 = PRIM_EQ(closureRef(co, 0), x);
Obj v0x7f411248a2e0 = primNot(v0x7f411248a240);
__nargs = 2;
__arg1 = v0x7f411248a2e0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label44:
{
Obj x = __arg1;
Obj v0x7f411248cdc0 = PRIM_CDR(x);
__nargs = 2;
__arg0 = globalRef(symlength);
__arg1 = v0x7f411248cdc0;
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
Obj v0x7f411248c460 = PRIM_EQ(l1, Nil);
if (True == v0x7f411248c460) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f411248c5e0 = PRIM_CAR(l1);
Obj v0x7f411248c860 = PRIM_CDR(l1);
pushCont(co, 46, clofun1, 1, v0x7f411248c5e0);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = v0x7f411248c860;
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
Obj v0x7f411248c8a0 = __arg1;
Obj v0x7f411248c5e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f411248c8c0 = makeCons(v0x7f411248c5e0, v0x7f411248c8a0);
__nargs = 2;
__arg1 = v0x7f411248c8c0;
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
Obj v0x7f41124ad440 = PRIM_ISCONS(l);
if (True == v0x7f41124ad440) {
Obj v0x7f41124ad660 = PRIM_CAR(l);
pushCont(co, 49, clofun1, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = v0x7f41124ad660;
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
Obj v0x7f41124ad680 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == v0x7f41124ad680) {
Obj v0x7f41124ada20 = PRIM_CAR(l);
Obj v0x7f41124ada60 = makeCons(v0x7f41124ada20, res);
Obj v0x7f41124adb60 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = v0x7f41124ada60;
__arg2 = fn;
__arg3 = v0x7f41124adb60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f41124add60 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = res;
__arg2 = fn;
__arg3 = v0x7f41124add60;
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
Obj v0x7f41124c4a80 = PRIM_EQ(l, Nil);
if (True == v0x7f41124c4a80) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f41124c4cc0 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj v0x7f41124c4de0 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35length_45h);
__arg1 = v0x7f41124c4cc0;
__arg2 = v0x7f41124c4de0;
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
Obj v0x7f41124c42e0 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f41124c42e0) {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f41124c4620 = PRIM_CAR(rules);
Obj v0x7f41124c4660 = makeCons(v0x7f41124c4620, res);
pushCont(co, 4, clofun2, 1, v0x7f41124c4660);
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
Obj v0x7f41124c4780 = __arg1;
Obj v0x7f41124c4660= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rules_45patterns);
__arg1 = v0x7f41124c4660;
__arg2 = v0x7f41124c4780;
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
Obj v0x7f411252c080 = makeNative(7, clofun2, 0, 3, input, current, result);
Obj v0x7f41124cbba0 = PRIM_EQ(Nil, input);
if (True == v0x7f41124cbba0) {
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
__arg0 = v0x7f411252c080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj v0x7f411252c0e0 = makeNative(9, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj v0x7f4112512d40 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112512d40) {
Obj v0x7f41124eb040 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41124eb060 = PRIM_EQ(sym_61_62, v0x7f41124eb040);
if (True == v0x7f41124eb060) {
Obj v0x7f41124eb260 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124eb2a0 = PRIM_ISCONS(v0x7f41124eb260);
if (True == v0x7f41124eb2a0) {
Obj v0x7f41124eb4c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124eb580 = PRIM_CAR(v0x7f41124eb4c0);
Obj act = v0x7f41124eb580;
Obj v0x7f41124eb7e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124eb800 = PRIM_CDR(v0x7f41124eb7e0);
Obj v0x7f41124eb820 = PRIM_ISCONS(v0x7f41124eb800);
if (True == v0x7f41124eb820) {
Obj v0x7f41124ebcc0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124ebce0 = PRIM_CDR(v0x7f41124ebcc0);
Obj v0x7f41124ebd00 = PRIM_CAR(v0x7f41124ebce0);
Obj v0x7f41124ebd20 = PRIM_EQ(symwhere, v0x7f41124ebd00);
if (True == v0x7f41124ebd20) {
Obj v0x7f41124d9080 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124d90a0 = PRIM_CDR(v0x7f41124d9080);
Obj v0x7f41124d90e0 = PRIM_CDR(v0x7f41124d90a0);
Obj v0x7f41124d9120 = PRIM_ISCONS(v0x7f41124d90e0);
if (True == v0x7f41124d9120) {
Obj v0x7f41124d9660 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124d9680 = PRIM_CDR(v0x7f41124d9660);
Obj v0x7f41124d96a0 = PRIM_CDR(v0x7f41124d9680);
Obj v0x7f41124d96c0 = PRIM_CAR(v0x7f41124d96a0);
Obj pred = v0x7f41124d96c0;
Obj v0x7f41124d9ae0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124d9b00 = PRIM_CDR(v0x7f41124d9ae0);
Obj v0x7f41124d9b20 = PRIM_CDR(v0x7f41124d9b00);
Obj v0x7f41124d9b40 = PRIM_CDR(v0x7f41124d9b20);
Obj remain = v0x7f41124d9b40;
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
__arg0 = v0x7f411252c0e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c0e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c0e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c0e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c0e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c0e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj v0x7f41124d9dc0 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f41124d9de0 = makeCons(symlist, v0x7f41124d9dc0);
Obj pat = v0x7f41124d9de0;
Obj v0x7f41124cb420 = makeCons(act, Nil);
Obj v0x7f41124cb440 = makeCons(pred, v0x7f41124cb420);
Obj v0x7f41124cb460 = makeCons(symwhere, v0x7f41124cb440);
Obj v0x7f41124cb5c0 = makeCons(pat, closureRef(co, 2));
Obj v0x7f41124cb5e0 = makeCons(v0x7f41124cb460, v0x7f41124cb5c0);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = v0x7f41124cb5e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj v0x7f411252c300 = makeNative(11, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj v0x7f4112529800 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112529800) {
Obj v0x7f4112529a40 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112529a60 = PRIM_EQ(sym_61_62, v0x7f4112529a40);
if (True == v0x7f4112529a60) {
Obj v0x7f4112529fc0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112529fe0 = PRIM_ISCONS(v0x7f4112529fc0);
if (True == v0x7f4112529fe0) {
Obj v0x7f4112512200 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112512240 = PRIM_CAR(v0x7f4112512200);
Obj act = v0x7f4112512240;
Obj v0x7f4112512520 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112512540 = PRIM_CDR(v0x7f4112512520);
Obj remain = v0x7f4112512540;
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
__arg0 = v0x7f411252c300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411252c300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj v0x7f4112512740 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112512760 = makeCons(symlist, v0x7f4112512740);
Obj pat = v0x7f4112512760;
Obj v0x7f4112512a00 = makeCons(pat, closureRef(co, 2));
Obj v0x7f4112512a20 = makeCons(act, v0x7f4112512a00);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = v0x7f4112512a20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj v0x7f411252c440 = makeNative(12, clofun2, 0, 0);
Obj v0x7f41125290a0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125290a0) {
Obj v0x7f4112529200 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f4112529200;
Obj v0x7f4112529320 = PRIM_CDR(closureRef(co, 0));
Obj y = v0x7f4112529320;
Obj v0x7f41125295a0 = makeCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = y;
__arg2 = v0x7f41125295a0;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f411252c440;
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
Obj v0x7f4112570620 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 16, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = v0x7f4112570620;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj v0x7f4112570640 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = v0x7f4112570640;
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
Obj v0x7f41125707a0 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = v0x7f41125707a0;
Obj v0x7f4112570900 = PRIM_ISCONS(value);
if (True == v0x7f4112570900) {
Obj v0x7f4112570c40 = PRIM_CAR(value);
Obj v0x7f4112570ca0 = PRIM_EQ(symcons, v0x7f4112570c40);
Obj v0x7f4112570ce0 = primNot(v0x7f4112570ca0);
if (True == v0x7f4112570ce0) {
if (True == True) {
Obj v0x7f4112570de0 = primGenSym();
Obj val = v0x7f4112570de0;
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
Obj v0x7f4112563520 = primGenSym();
Obj val = v0x7f4112563520;
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
Obj v0x7f4112563c80 = primGenSym();
Obj val = v0x7f4112563c80;
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
Obj v0x7f411252c1c0 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f411252c200 = makeCons(v0x7f411252c1c0, Nil);
Obj v0x7f411252c260 = makeCons(value, v0x7f411252c200);
Obj v0x7f411252c2c0 = makeCons(val, v0x7f411252c260);
Obj v0x7f411252c320 = makeCons(symlet, v0x7f411252c2c0);
__nargs = 2;
__arg1 = v0x7f411252c320;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj v0x7f41125639e0 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112563a40 = makeCons(v0x7f41125639e0, Nil);
Obj v0x7f4112563a60 = makeCons(value, v0x7f4112563a40);
Obj v0x7f4112563a80 = makeCons(val, v0x7f4112563a60);
Obj v0x7f4112563aa0 = makeCons(symlet, v0x7f4112563a80);
__nargs = 2;
__arg1 = v0x7f4112563aa0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj v0x7f4112563260 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41125632a0 = makeCons(v0x7f4112563260, Nil);
Obj v0x7f41125632e0 = makeCons(value, v0x7f41125632a0);
Obj v0x7f4112563300 = makeCons(val, v0x7f41125632e0);
Obj v0x7f4112563320 = makeCons(symlet, v0x7f4112563300);
__nargs = 2;
__arg1 = v0x7f4112563320;
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
Obj v0x7f41124adc40 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f41124adc40) {
Obj v0x7f41124ade20 = makeCons(makeCString("no match-help found!"), Nil);
Obj v0x7f41124ade40 = makeCons(symerror, v0x7f41124ade20);
__nargs = 2;
__arg1 = v0x7f41124ade40;
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
Obj v0x7f41124adfa0 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f41124adfa0) {
Obj v0x7f411248c180 = PRIM_CDR(rules);
pushCont(co, 28, clofun2, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = v0x7f411248c180;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj v0x7f41124872e0 = PRIM_CAR(rules);
Obj pat = v0x7f41124872e0;
Obj v0x7f41124873c0 = primGenSym();
Obj cc = v0x7f41124873c0;
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
Obj v0x7f41124874e0 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = v0x7f41124874e0;
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
Obj v0x7f4112487680 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 26, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = v0x7f4112487680;
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
Obj v0x7f4112487700 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = v0x7f4112487700;
Obj v0x7f4112487960 = PRIM_CDR(rules);
Obj v0x7f4112487980 = PRIM_CDR(v0x7f4112487960);
pushCont(co, 27, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = v0x7f4112487980;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj v0x7f41124879a0 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = v0x7f41124879a0;
Obj v0x7f4112487e20 = makeCons(rest, Nil);
Obj v0x7f4112487e40 = makeCons(Nil, v0x7f4112487e20);
Obj v0x7f4112487e60 = makeCons(symlambda, v0x7f4112487e40);
Obj v0x7f4112570100 = makeCons(curr, Nil);
Obj v0x7f4112570120 = makeCons(v0x7f4112487e60, v0x7f4112570100);
Obj v0x7f4112570140 = makeCons(cc, v0x7f4112570120);
Obj v0x7f4112570160 = makeCons(symlet, v0x7f4112570140);
__nargs = 2;
__arg1 = v0x7f4112570160;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj v0x7f411248c1a0 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f411248c1a0) {
if (True == True) {
Obj v0x7f411248c2e0 = PRIM_CAR(rules);
Obj pat = v0x7f411248c2e0;
Obj v0x7f411248c3c0 = primGenSym();
Obj cc = v0x7f411248c3c0;
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
Obj v0x7f411248a460 = PRIM_CAR(rules);
Obj pat = v0x7f411248a460;
Obj v0x7f411248a540 = primGenSym();
Obj cc = v0x7f411248a540;
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
Obj v0x7f411248a660 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = v0x7f411248a660;
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
Obj v0x7f411248a800 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 31, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = v0x7f411248a800;
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
Obj v0x7f411248a880 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = v0x7f411248a880;
Obj v0x7f411248aae0 = PRIM_CDR(rules);
Obj v0x7f411248ab00 = PRIM_CDR(v0x7f411248aae0);
pushCont(co, 32, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = v0x7f411248ab00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj v0x7f411248ab20 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = v0x7f411248ab20;
Obj v0x7f411248afa0 = makeCons(rest, Nil);
Obj v0x7f411248afc0 = makeCons(Nil, v0x7f411248afa0);
Obj v0x7f411248afe0 = makeCons(symlambda, v0x7f411248afc0);
Obj v0x7f41124870e0 = makeCons(curr, Nil);
Obj v0x7f4112487100 = makeCons(v0x7f411248afe0, v0x7f41124870e0);
Obj v0x7f4112487120 = makeCons(cc, v0x7f4112487100);
Obj v0x7f4112487140 = makeCons(symlet, v0x7f4112487120);
__nargs = 2;
__arg1 = v0x7f4112487140;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label33:
{
Obj v0x7f411248c500 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = v0x7f411248c500;
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
Obj v0x7f411248c6c0 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 35, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = v0x7f411248c6c0;
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
Obj v0x7f411248c740 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = v0x7f411248c740;
Obj v0x7f411248ca40 = PRIM_CDR(rules);
Obj v0x7f411248ca60 = PRIM_CDR(v0x7f411248ca40);
pushCont(co, 36, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = v0x7f411248ca60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj v0x7f411248caa0 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = v0x7f411248caa0;
Obj v0x7f411248a120 = makeCons(rest, Nil);
Obj v0x7f411248a140 = makeCons(Nil, v0x7f411248a120);
Obj v0x7f411248a160 = makeCons(symlambda, v0x7f411248a140);
Obj v0x7f411248a260 = makeCons(curr, Nil);
Obj v0x7f411248a280 = makeCons(v0x7f411248a160, v0x7f411248a260);
Obj v0x7f411248a2a0 = makeCons(cc, v0x7f411248a280);
Obj v0x7f411248a2c0 = makeCons(symlet, v0x7f411248a2a0);
__nargs = 2;
__arg1 = v0x7f411248a2c0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj v0x7f41124c4180 = PRIM_CDR(rules);
Obj v0x7f41124c41a0 = PRIM_CAR(v0x7f41124c4180);
Obj action = v0x7f41124c41a0;
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
Obj v0x7f41124c4320 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f41124c4320) {
Obj v0x7f41124c44c0 = PRIM_CAR(action);
Obj v0x7f41124c4540 = PRIM_EQ(v0x7f41124c44c0, symwhere);
if (True == v0x7f41124c4540) {
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
Obj v0x7f41124ad540 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 40, clofun2, 2, cc, v0x7f41124ad540);
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
Obj v0x7f41124ad6e0 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41124ad540= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41124ad8a0 = makeCons(cc, Nil);
Obj v0x7f41124ad8e0 = makeCons(v0x7f41124ad8a0, Nil);
Obj v0x7f41124ad900 = makeCons(v0x7f41124ad6e0, v0x7f41124ad8e0);
Obj v0x7f41124ad920 = makeCons(v0x7f41124ad540, v0x7f41124ad900);
Obj v0x7f41124ad940 = makeCons(symif, v0x7f41124ad920);
__nargs = 2;
__arg1 = v0x7f41124ad940;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj v0x7f41124c4ec0 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 42, clofun2, 2, cc, v0x7f41124c4ec0);
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
Obj v0x7f41124ad040 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41124c4ec0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41124ad200 = makeCons(cc, Nil);
Obj v0x7f41124ad240 = makeCons(v0x7f41124ad200, Nil);
Obj v0x7f41124ad260 = makeCons(v0x7f41124ad040, v0x7f41124ad240);
Obj v0x7f41124ad2a0 = makeCons(v0x7f41124c4ec0, v0x7f41124ad260);
Obj v0x7f41124ad2e0 = makeCons(symif, v0x7f41124ad2a0);
__nargs = 2;
__arg1 = v0x7f41124ad2e0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj v0x7f41124c47a0 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun2, 2, cc, v0x7f41124c47a0);
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
Obj v0x7f41124c4940 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41124c47a0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41124c4b00 = makeCons(cc, Nil);
Obj v0x7f41124c4b40 = makeCons(v0x7f41124c4b00, Nil);
Obj v0x7f41124c4b80 = makeCons(v0x7f41124c4940, v0x7f41124c4b40);
Obj v0x7f41124c4ba0 = makeCons(v0x7f41124c47a0, v0x7f41124c4b80);
Obj v0x7f41124c4bc0 = makeCons(symif, v0x7f41124c4ba0);
__nargs = 2;
__arg1 = v0x7f41124c4bc0;
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
Obj v0x7f41124ebb20 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == v0x7f41124ebb20) {
Obj v0x7f41124ebd40 = PRIM_EQ(pat, expr);
if (True == v0x7f41124ebd40) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f41124d91a0 = makeCons(expr, Nil);
Obj v0x7f41124d91c0 = makeCons(pat, v0x7f41124d91a0);
Obj v0x7f41124d9240 = makeCons(sym_61, v0x7f41124d91c0);
Obj v0x7f41124d9540 = makeCons(cc, Nil);
Obj v0x7f41124d9580 = makeCons(v0x7f41124d9540, Nil);
Obj v0x7f41124d95a0 = makeCons(body, v0x7f41124d9580);
Obj v0x7f41124d95c0 = makeCons(v0x7f41124d9240, v0x7f41124d95a0);
Obj v0x7f41124d95e0 = makeCons(symif, v0x7f41124d95c0);
__nargs = 2;
__arg1 = v0x7f41124d95e0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj v0x7f41124d9740 = primIsSymbol(pat);
if (True == v0x7f41124d9740) {
Obj v0x7f41124d9b80 = makeCons(body, Nil);
Obj v0x7f41124d9ba0 = makeCons(expr, v0x7f41124d9b80);
Obj v0x7f41124d9bc0 = makeCons(pat, v0x7f41124d9ba0);
Obj v0x7f41124d9be0 = makeCons(symlet, v0x7f41124d9bc0);
__nargs = 2;
__arg1 = v0x7f41124d9be0;
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
Obj v0x7f41124d9d00 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == v0x7f41124d9d00) {
Obj v0x7f41124d9f40 = PRIM_CAR(pat);
Obj v0x7f41124d9f80 = PRIM_EQ(v0x7f41124d9f40, symquote);
if (True == v0x7f41124d9f80) {
Obj v0x7f41124cb4c0 = makeCons(expr, Nil);
Obj v0x7f41124cb4e0 = makeCons(pat, v0x7f41124cb4c0);
Obj v0x7f41124cb500 = makeCons(sym_61, v0x7f41124cb4e0);
Obj v0x7f41124cb7e0 = makeCons(cc, Nil);
Obj v0x7f41124cb820 = makeCons(v0x7f41124cb7e0, Nil);
Obj v0x7f41124cb840 = makeCons(body, v0x7f41124cb820);
Obj v0x7f41124cb860 = makeCons(v0x7f41124cb500, v0x7f41124cb840);
Obj v0x7f41124cb880 = makeCons(symif, v0x7f41124cb860);
__nargs = 2;
__arg1 = v0x7f41124cb880;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f41124cba40 = PRIM_CAR(pat);
Obj v0x7f41124cba80 = PRIM_EQ(v0x7f41124cba40, symcons);
if (True == v0x7f41124cba80) {
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
Obj v0x7f41124cbe80 = __arg1;
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = v0x7f41124cbe80;
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
Obj v0x7f41124eb840 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == v0x7f41124eb840) {
Obj v0x7f41124eb9e0 = primIsSymbol(x);
Obj v0x7f41124eba20 = primNot(v0x7f41124eb9e0);
if (True == v0x7f41124eba20) {
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
Obj v0x7f41125631a0 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = v0x7f41125631a0;
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
Obj v0x7f41125632c0 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = v0x7f41125632c0;
Obj v0x7f4112563440 = PRIM_ISCONS(expr);
if (True == v0x7f4112563440) {
Obj v0x7f41125635e0 = PRIM_CAR(expr);
Obj v0x7f4112563620 = PRIM_EQ(v0x7f41125635e0, symcons);
if (True == v0x7f4112563620) {
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
Obj v0x7f4112563e20 = makeCons(expr, Nil);
Obj v0x7f4112563e40 = makeCons(symcons_63, v0x7f4112563e20);
Obj v0x7f411252c340 = makeCons(expr, Nil);
Obj v0x7f411252c360 = makeCons(symcar, v0x7f411252c340);
Obj v0x7f411252c700 = makeCons(expr, Nil);
Obj v0x7f411252c720 = makeCons(symcdr, v0x7f411252c700);
pushCont(co, 14, clofun3, 4, x, v0x7f411252c360, cc, v0x7f4112563e40);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = v0x7f411252c720;
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
Obj v0x7f4112529500 = makeCons(expr, Nil);
Obj v0x7f4112529540 = makeCons(symcons_63, v0x7f4112529500);
Obj v0x7f4112529940 = makeCons(expr, Nil);
Obj v0x7f4112529960 = makeCons(symcar, v0x7f4112529940);
Obj v0x7f4112529f80 = makeCons(expr, Nil);
Obj v0x7f4112529fa0 = makeCons(symcdr, v0x7f4112529f80);
pushCont(co, 9, clofun3, 4, x, v0x7f4112529960, cc, v0x7f4112529540);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = v0x7f4112529fa0;
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
Obj v0x7f4112512aa0 = makeCons(expr, Nil);
Obj v0x7f4112512ac0 = makeCons(symcons_63, v0x7f4112512aa0);
Obj v0x7f4112512e60 = makeCons(expr, Nil);
Obj v0x7f4112512e80 = makeCons(symcar, v0x7f4112512e60);
Obj v0x7f41124eb200 = makeCons(expr, Nil);
Obj v0x7f41124eb220 = makeCons(symcdr, v0x7f41124eb200);
pushCont(co, 4, clofun3, 4, x, v0x7f4112512e80, cc, v0x7f4112512ac0);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = v0x7f41124eb220;
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
Obj v0x7f41124eb280 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112512e80= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f4112512ac0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 5, clofun3, 2, cc, v0x7f4112512ac0);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = v0x7f4112512e80;
__arg3 = v0x7f41124eb280;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj v0x7f41124eb2c0 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112512ac0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41124eb4a0 = makeCons(cc, Nil);
Obj v0x7f41124eb4e0 = makeCons(v0x7f41124eb4a0, Nil);
Obj v0x7f41124eb500 = makeCons(v0x7f41124eb2c0, v0x7f41124eb4e0);
Obj v0x7f41124eb520 = makeCons(v0x7f4112512ac0, v0x7f41124eb500);
Obj v0x7f41124eb540 = makeCons(symif, v0x7f41124eb520);
__nargs = 2;
__arg1 = v0x7f41124eb540;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj v0x7f4112512420 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = v0x7f4112512420;
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
Obj v0x7f4112512560 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = v0x7f4112512560;
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
Obj v0x7f4112512780 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = v0x7f4112512780;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj v0x7f4112512000 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112529960= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f4112529540= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 10, clofun3, 2, cc, v0x7f4112529540);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = v0x7f4112529960;
__arg3 = v0x7f4112512000;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj v0x7f4112512060 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112529540= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112512220 = makeCons(cc, Nil);
Obj v0x7f4112512280 = makeCons(v0x7f4112512220, Nil);
Obj v0x7f41125122a0 = makeCons(v0x7f4112512060, v0x7f4112512280);
Obj v0x7f4112512300 = makeCons(v0x7f4112529540, v0x7f41125122a0);
Obj v0x7f4112512320 = makeCons(symif, v0x7f4112512300);
__nargs = 2;
__arg1 = v0x7f4112512320;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj v0x7f411252cca0 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = v0x7f411252cca0;
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
Obj v0x7f411252cde0 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = v0x7f411252cde0;
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
Obj v0x7f4112529100 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = v0x7f4112529100;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj v0x7f411252c780 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f411252c360= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f4112563e40= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 15, clofun3, 2, cc, v0x7f4112563e40);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = v0x7f411252c360;
__arg3 = v0x7f411252c780;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj v0x7f411252c7c0 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112563e40= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f411252ca80 = makeCons(cc, Nil);
Obj v0x7f411252cac0 = makeCons(v0x7f411252ca80, Nil);
Obj v0x7f411252cae0 = makeCons(v0x7f411252c7c0, v0x7f411252cac0);
Obj v0x7f411252cb00 = makeCons(v0x7f4112563e40, v0x7f411252cae0);
Obj v0x7f411252cb20 = makeCons(symif, v0x7f411252cb00);
__nargs = 2;
__arg1 = v0x7f411252cb20;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj v0x7f4112563740 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = v0x7f4112563740;
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
Obj v0x7f41125638a0 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = v0x7f41125638a0;
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
Obj v0x7f4112563ac0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = v0x7f4112563ac0;
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
Obj v0x7f4112570f20 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = v0x7f4112570f20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj pat = __arg1;
Obj v0x7f4112570560 = PRIM_CDR(pat);
pushCont(co, 21, clofun3, 1, pat);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = v0x7f4112570560;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj v0x7f41125705c0 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == v0x7f41125705c0) {
Obj v0x7f4112570680 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = v0x7f4112570680;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f41125708e0 = PRIM_CAR(pat);
Obj v0x7f4112570b20 = PRIM_CDR(pat);
pushCont(co, 22, clofun3, 1, v0x7f41125708e0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = v0x7f4112570b20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj v0x7f4112570b40 = __arg1;
Obj v0x7f41125708e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112570b80 = makeCons(v0x7f4112570b40, Nil);
Obj v0x7f4112570ba0 = makeCons(v0x7f41125708e0, v0x7f4112570b80);
Obj v0x7f4112570bc0 = makeCons(symcons, v0x7f4112570ba0);
__nargs = 2;
__arg1 = v0x7f4112570bc0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x = __arg1;
Obj v0x7f41125700e0 = PRIM_EQ(x, True);
if (True == v0x7f41125700e0) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f4112570200 = PRIM_EQ(x, False);
if (True == v0x7f4112570200) {
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
Obj v0x7f411248cae0 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = v0x7f411248cae0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj l = __arg1;
Obj v0x7f41124adf20 = PRIM_EQ(Nil, l);
if (True == v0x7f41124adf20) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f411248c0c0 = PRIM_CAR(l);
Obj v0x7f411248c100 = PRIM_EQ(v0x7f411248c0c0, False);
if (True == v0x7f411248c100) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f411248c2a0 = PRIM_CDR(l);
pushCont(co, 26, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = v0x7f411248c2a0;
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
Obj v0x7f411248c2c0 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = v0x7f411248c2c0;
Obj v0x7f411248c3e0 = PRIM_EQ(more, False);
if (True == v0x7f411248c3e0) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f411248c600 = PRIM_CAR(l);
Obj v0x7f411248c7c0 = makeCons(False, Nil);
Obj v0x7f411248c7e0 = makeCons(more, v0x7f411248c7c0);
Obj v0x7f411248c800 = makeCons(v0x7f411248c600, v0x7f411248c7e0);
Obj v0x7f411248c820 = makeCons(symif, v0x7f411248c800);
__nargs = 2;
__arg1 = v0x7f411248c820;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label27:
{
Obj exp = __arg1;
Obj v0x7f41124adca0 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = v0x7f41124adca0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj l = __arg1;
Obj v0x7f41124ad0e0 = PRIM_EQ(l, Nil);
if (True == v0x7f41124ad0e0) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f41124ad280 = PRIM_CAR(l);
Obj v0x7f41124ad2c0 = PRIM_EQ(v0x7f41124ad280, True);
if (True == v0x7f41124ad2c0) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f41124ad460 = PRIM_CDR(l);
pushCont(co, 29, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = v0x7f41124ad460;
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
Obj v0x7f41124ad480 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = v0x7f41124ad480;
Obj v0x7f41124ad5a0 = PRIM_EQ(more, True);
if (True == v0x7f41124ad5a0) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f41124ad7c0 = PRIM_CAR(l);
Obj v0x7f41124ad980 = makeCons(more, Nil);
Obj v0x7f41124ad9a0 = makeCons(True, v0x7f41124ad980);
Obj v0x7f41124ad9c0 = makeCons(v0x7f41124ad7c0, v0x7f41124ad9a0);
Obj v0x7f41124ad9e0 = makeCons(symif, v0x7f41124ad9c0);
__nargs = 2;
__arg1 = v0x7f41124ad9e0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label30:
{
Obj exp = __arg1;
Obj v0x7f41124c44e0 = PRIM_CDR(exp);
Obj v0x7f41124c4500 = PRIM_EQ(Nil, v0x7f41124c44e0);
if (True == v0x7f41124c4500) {
Obj v0x7f41124c46a0 = makeCons(makeCString("no cond match"), Nil);
Obj v0x7f41124c46c0 = makeCons(symerror, v0x7f41124c46a0);
__nargs = 2;
__arg1 = v0x7f41124c46c0;
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
Obj v0x7f41124c47c0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = v0x7f41124c47c0;
Obj v0x7f41124c49e0 = PRIM_CAR(curr);
pushCont(co, 32, clofun3, 2, exp, v0x7f41124c49e0);
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
Obj v0x7f41124c4b60 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41124c49e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun3, 2, v0x7f41124c4b60, v0x7f41124c49e0);
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
Obj v0x7f41124c4da0 = __arg1;
Obj v0x7f41124c4b60= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41124c49e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41124c4dc0 = makeCons(symcond, v0x7f41124c4da0);
Obj v0x7f41124c4e00 = makeCons(v0x7f41124c4dc0, Nil);
Obj v0x7f41124c4e20 = makeCons(v0x7f41124c4b60, v0x7f41124c4e00);
Obj v0x7f41124c4e40 = makeCons(v0x7f41124c49e0, v0x7f41124c4e20);
Obj v0x7f41124c4e60 = makeCons(symif, v0x7f41124c4e40);
__nargs = 2;
__arg1 = v0x7f41124c4e60;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj exp = __arg1;
Obj v0x7f41124c41c0 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = v0x7f41124c41c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj exp = __arg1;
Obj v0x7f41124d9980 = PRIM_CDR(exp);
pushCont(co, 36, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = v0x7f41124d9980;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj v0x7f41124d99a0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == v0x7f41124d99a0) {
Obj v0x7f41124d9a60 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = v0x7f41124d9a60;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f41124d9ce0 = PRIM_CAR(exp);
pushCont(co, 37, clofun3, 2, exp, v0x7f41124d9ce0);
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
Obj v0x7f41124d9ee0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41124d9ce0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 38, clofun3, 2, v0x7f41124d9ee0, v0x7f41124d9ce0);
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
Obj v0x7f41124cb100 = __arg1;
Obj v0x7f41124d9ee0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41124d9ce0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun3, 2, v0x7f41124d9ee0, v0x7f41124d9ce0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = v0x7f41124cb100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj v0x7f41124cb120 = __arg1;
Obj v0x7f41124d9ee0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41124d9ce0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41124cb160 = makeCons(v0x7f41124cb120, Nil);
Obj v0x7f41124cb180 = makeCons(v0x7f41124d9ee0, v0x7f41124cb160);
Obj v0x7f41124cb1a0 = makeCons(v0x7f41124d9ce0, v0x7f41124cb180);
Obj v0x7f41124cb1c0 = makeCons(symlet, v0x7f41124cb1a0);
__nargs = 2;
__arg1 = v0x7f41124cb1c0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj x = __arg1;
Obj v0x7f41124d9600 = PRIM_ISCONS(x);
Obj v0x7f41124d9620 = primNot(v0x7f41124d9600);
__nargs = 2;
__arg1 = v0x7f41124d9620;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj x = __arg1;
Obj l = __arg2;
Obj v0x7f41124ebee0 = PRIM_ISCONS(l);
if (True == v0x7f41124ebee0) {
Obj v0x7f41124d90c0 = PRIM_CAR(l);
Obj v0x7f41124d9100 = PRIM_EQ(v0x7f41124d90c0, x);
if (True == v0x7f41124d9100) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f41124d92e0 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symelem_63);
__arg1 = x;
__arg2 = v0x7f41124d92e0;
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
Obj v0x7f41124eb720 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 44, clofun3, 2, exp, v0x7f41124eb720);
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
Obj v0x7f41124eba00 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41124eb720= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun3, 2, v0x7f41124eba00, v0x7f41124eb720);
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
Obj v0x7f41124ebb80 = __arg1;
Obj v0x7f41124eba00= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41124eb720= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41124ebbc0 = makeCons(v0x7f41124ebb80, Nil);
Obj v0x7f41124ebbe0 = makeCons(v0x7f41124eba00, v0x7f41124ebbc0);
Obj v0x7f41124ebc00 = makeCons(symlambda, v0x7f41124ebbe0);
Obj v0x7f41124ebc40 = makeCons(v0x7f41124ebc00, Nil);
Obj v0x7f41124ebc60 = makeCons(v0x7f41124eb720, v0x7f41124ebc40);
Obj v0x7f41124ebc80 = makeCons(symdef, v0x7f41124ebc60);
__nargs = 2;
__arg1 = v0x7f41124ebc80;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label46:
{
Obj exp = __arg1;
Obj v0x7f41124eb3a0 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = v0x7f41124eb3a0;
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
Obj v0x7f4112512ae0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112512b20 = makeCons(v0x7f4112512ae0, Nil);
Obj v0x7f4112512b40 = makeCons(symquote, v0x7f4112512b20);
pushCont(co, 49, clofun3, 2, exp, v0x7f4112512b40);
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
Obj v0x7f4112512e20 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112512b40= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 0, clofun4, 2, v0x7f4112512e20, v0x7f4112512b40);
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
Obj v0x7f4112512f00 = __arg1;
Obj v0x7f4112512e20= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112512b40= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112512f20 = makeCons(v0x7f4112512e20, v0x7f4112512f00);
Obj v0x7f4112512f40 = makeCons(symlambda, v0x7f4112512f20);
Obj v0x7f4112512f80 = makeCons(v0x7f4112512f40, Nil);
Obj v0x7f4112512fa0 = makeCons(v0x7f4112512b40, v0x7f4112512f80);
Obj v0x7f4112512fc0 = makeCons(symcora_47init_35add_45to_45_42macros_42, v0x7f4112512fa0);
__nargs = 2;
__arg1 = v0x7f4112512fc0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj exp = __arg1;
Obj v0x7f4112529140 = PRIM_ISCONS(exp);
if (True == v0x7f4112529140) {
Obj v0x7f4112529300 = PRIM_CAR(exp);
Obj v0x7f4112529380 = PRIM_EQ(v0x7f4112529300, globalRef(sym_42protect_45symbol_42));
if (True == v0x7f4112529380) {
Obj v0x7f4112529440 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = v0x7f4112529440;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f4112529640 = PRIM_CAR(exp);
Obj v0x7f4112529680 = PRIM_EQ(v0x7f4112529640, symlambda);
if (True == v0x7f4112529680) {
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
Obj v0x7f4112512040 = PRIM_CAR(exp);
Obj v0x7f4112512080 = PRIM_EQ(v0x7f4112512040, symquote);
if (True == v0x7f4112512080) {
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
Obj v0x7f41125124e0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(3, clofun4, 1, 1, exp);
__arg1 = v0x7f41125124e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp1 = __arg1;
Obj v0x7f4112512260 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == v0x7f4112512260) {
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
Obj v0x7f41125298e0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 5, clofun4, 1, v0x7f41125298e0);
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
Obj v0x7f4112529b20 = __arg1;
Obj v0x7f41125298e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 6, clofun4, 1, v0x7f41125298e0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = v0x7f4112529b20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj v0x7f4112529b40 = __arg1;
Obj v0x7f41125298e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112529b80 = makeCons(v0x7f4112529b40, Nil);
Obj v0x7f4112529ba0 = makeCons(v0x7f41125298e0, v0x7f4112529b80);
Obj v0x7f4112529bc0 = makeCons(symlambda, v0x7f4112529ba0);
__nargs = 2;
__arg1 = v0x7f4112529bc0;
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
Obj v0x7f4112563a00 = PRIM_EQ(Nil, macros);
if (True == v0x7f4112563a00) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f411252cb40 = PRIM_CAR(macros);
__nargs = 2;
__arg0 = makeNative(9, clofun4, 1, 2, exp, macros);
__arg1 = v0x7f411252cb40;
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
Obj v0x7f4112563c00 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112563c00) {
Obj v0x7f4112563da0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112563e80 = PRIM_CAR(item);
Obj v0x7f4112563ea0 = PRIM_EQ(v0x7f4112563da0, v0x7f4112563e80);
if (True == v0x7f4112563ea0) {
if (True == True) {
Obj v0x7f4112563fe0 = PRIM_CDR(item);
__nargs = 2;
__arg0 = v0x7f4112563fe0;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f411252c280 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = v0x7f411252c280;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj v0x7f411252c460 = PRIM_CDR(item);
__nargs = 2;
__arg0 = v0x7f411252c460;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f411252c680 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = v0x7f411252c680;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj v0x7f411252c7e0 = PRIM_CDR(item);
__nargs = 2;
__arg0 = v0x7f411252c7e0;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f411252ca40 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = v0x7f411252ca40;
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
Obj v0x7f4112563720 = makeCons(n, v);
Obj v0x7f4112563760 = makeCons(v0x7f4112563720, globalRef(sym_42macros_42));
Obj v0x7f4112563780 = primSet(co, sym_42macros_42, v0x7f4112563760);
__nargs = 2;
__arg1 = v0x7f4112563780;
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
Obj v0x7f41125709c0 = PRIM_ISCONS(l);
if (True == v0x7f41125709c0) {
Obj v0x7f4112570c60 = PRIM_CAR(l);
pushCont(co, 13, clofun4, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = v0x7f4112570c60;
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
Obj v0x7f4112570c80 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f4112570cc0 = makeCons(v0x7f4112570c80, res);
Obj v0x7f4112570dc0 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symmap_45h);
__arg1 = v0x7f4112570cc0;
__arg2 = f;
__arg3 = v0x7f4112570dc0;
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
Obj v0x7f4112570260 = PRIM_ISCONS(l);
if (True == v0x7f4112570260) {
Obj v0x7f4112570460 = PRIM_CAR(l);
Obj v0x7f41125704a0 = makeCons(v0x7f4112570460, res);
Obj v0x7f4112570580 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35reverse_45h);
__arg1 = v0x7f41125704a0;
__arg2 = v0x7f4112570580;
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
Obj v0x7f4112570000 = PRIM_ISCONS(x);
__nargs = 2;
__arg1 = v0x7f4112570000;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj exp = __arg1;
Obj v0x7f41124cb8a0 = PRIM_ISCONS(exp);
if (True == v0x7f41124cb8a0) {
Obj v0x7f41124cbac0 = PRIM_CAR(exp);
Obj v0x7f41124cbce0 = PRIM_CDR(exp);
pushCont(co, 17, clofun4, 1, v0x7f41124cbac0);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = v0x7f41124cbce0;
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
Obj v0x7f41124cbd00 = __arg1;
Obj v0x7f41124cbac0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41124cbd40 = makeCons(v0x7f41124cbd00, Nil);
Obj v0x7f41124cbd60 = makeCons(v0x7f41124cbac0, v0x7f41124cbd40);
Obj v0x7f41124cbd80 = makeCons(symcons, v0x7f41124cbd60);
__nargs = 2;
__arg1 = v0x7f41124cbd80;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj x = __arg1;
Obj v0x7f41124cb600 = PRIM_CDR(x);
Obj v0x7f41124cb620 = PRIM_CDR(v0x7f41124cb600);
Obj v0x7f41124cb640 = PRIM_CDR(v0x7f41124cb620);
__nargs = 2;
__arg1 = v0x7f41124cb640;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj x = __arg1;
Obj v0x7f41124cb240 = PRIM_CDR(x);
Obj v0x7f41124cb260 = PRIM_CDR(v0x7f41124cb240);
Obj v0x7f41124cb280 = PRIM_CDR(v0x7f41124cb260);
Obj v0x7f41124cb2a0 = PRIM_CAR(v0x7f41124cb280);
__nargs = 2;
__arg1 = v0x7f41124cb2a0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj x = __arg1;
Obj v0x7f41124d9e00 = PRIM_CDR(x);
Obj v0x7f41124d9e20 = PRIM_CDR(v0x7f41124d9e00);
Obj v0x7f41124d9e40 = PRIM_CAR(v0x7f41124d9e20);
__nargs = 2;
__arg1 = v0x7f41124d9e40;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label21:
{
Obj x = __arg1;
Obj v0x7f41124d9a80 = PRIM_CDR(x);
Obj v0x7f41124d9aa0 = PRIM_CDR(v0x7f41124d9a80);
__nargs = 2;
__arg1 = v0x7f41124d9aa0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj x = __arg1;
Obj v0x7f41124d97a0 = PRIM_CAR(x);
Obj v0x7f41124d97c0 = PRIM_CDR(v0x7f41124d97a0);
__nargs = 2;
__arg1 = v0x7f41124d97c0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x = __arg1;
Obj v0x7f41124d94c0 = PRIM_CAR(x);
Obj v0x7f41124d94e0 = PRIM_CAR(v0x7f41124d94c0);
__nargs = 2;
__arg1 = v0x7f41124d94e0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj x = __arg1;
Obj v0x7f41124d91e0 = PRIM_CDR(x);
Obj v0x7f41124d9200 = PRIM_CAR(v0x7f41124d91e0);
__nargs = 2;
__arg1 = v0x7f41124d9200;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x = __arg1;
Obj v0x7f41124ebf20 = PRIM_EQ(x, Nil);
__nargs = 2;
__arg1 = v0x7f41124ebf20;
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

