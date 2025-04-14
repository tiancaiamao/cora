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
Obj v0x7f1f23eddf20 = primSet(co, symnull_63, makeNative(25, clofun4, 1, 0));
Obj v0x7f1f23ed5200 = primSet(co, symcadr, makeNative(24, clofun4, 1, 0));
Obj v0x7f1f23ed54e0 = primSet(co, symcaar, makeNative(23, clofun4, 1, 0));
Obj v0x7f1f23ed57c0 = primSet(co, symcdar, makeNative(22, clofun4, 1, 0));
Obj v0x7f1f23f5c360 = primSet(co, symcddr, makeNative(21, clofun4, 1, 0));
Obj v0x7f1f23f5c800 = primSet(co, symcaddr, makeNative(20, clofun4, 1, 0));
Obj v0x7f1f23f5cdc0 = primSet(co, symcadddr, makeNative(19, clofun4, 1, 0));
Obj v0x7f1f23f58240 = primSet(co, symcdddr, makeNative(18, clofun4, 1, 0));
Obj v0x7f1f23f58a40 = primSet(co, symrcons, makeNative(16, clofun4, 1, 0));
Obj v0x7f1f23f58c80 = primSet(co, sympair_63, makeNative(15, clofun4, 1, 0));
Obj v0x7f1f23f49200 = primSet(co, symcora_47init_35reverse_45h, makeNative(14, clofun4, 2, 0));
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
Obj v0x7f1f23f493c0 = __arg1;
Obj v0x7f1f23f493e0 = primSet(co, symreverse, v0x7f1f23f493c0);
Obj v0x7f1f23f49ae0 = primSet(co, symmap_45h, makeNative(12, clofun4, 3, 0));
Obj v0x7f1f23f49d20 = primSet(co, symmap, makeNative(11, clofun4, 2, 0));
Obj v0x7f1f23f49e40 = primSet(co, sym_42macros_42, Nil);
Obj v0x7f1f23f43000 = primGenSym(symprotect);
Obj v0x7f1f23f43020 = primSet(co, sym_42protect_45symbol_42, v0x7f1f23f43000);
Obj v0x7f1f23f43420 = primSet(co, symcora_47init_35add_45to_45_42macros_42, makeNative(10, clofun4, 2, 0));
Obj v0x7f1f23f3c4c0 = primSet(co, symcora_47init_35macroexpand1_45h, makeNative(8, clofun4, 2, 0));
Obj v0x7f1f23f3c6e0 = primSet(co, symcora_47init_35macroexpand1, makeNative(7, clofun4, 1, 0));
Obj v0x7f1f23efe8c0 = primSet(co, symcora_47init_35macroexpand_45boot, makeNative(1, clofun4, 1, 0));
Obj v0x7f1f23efe9e0 = primSet(co, symmacroexpand, globalRef(symcora_47init_35macroexpand_45boot));
Obj v0x7f1f23ef86a0 = primSet(co, symdefmacro_45macro, makeNative(47, clofun3, 1, 0));
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
Obj v0x7f1f23ef87c0 = __arg1;
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
Obj v0x7f1f23ef8a80 = __arg1;
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
Obj v0x7f1f23edd360 = __arg1;
Obj v0x7f1f23edd920 = primSet(co, symelem_63, makeNative(41, clofun3, 2, 0));
Obj v0x7f1f23eddc00 = primSet(co, symatom_63, makeNative(40, clofun3, 1, 0));
Obj v0x7f1f23ed5ac0 = primSet(co, symcora_47init_35rewrite_45let, makeNative(35, clofun3, 1, 0));
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
Obj v0x7f1f23ed5d80 = __arg1;
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
Obj v0x7f1f23ecca20 = __arg1;
Obj v0x7f1f23eb15a0 = primSet(co, symcora_47init_35rewrite_45or, makeNative(28, clofun3, 1, 0));
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
Obj v0x7f1f23eb1860 = __arg1;
Obj v0x7f1f23e9b3e0 = primSet(co, symcora_47init_35rewrite_45and, makeNative(25, clofun3, 1, 0));
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
Obj v0x7f1f23e9b6a0 = __arg1;
Obj v0x7f1f23f5c060 = primSet(co, symboolean_63, makeNative(23, clofun3, 1, 0));
Obj v0x7f1f23f5cea0 = primSet(co, symcora_47init_35rcons1, makeNative(20, clofun3, 1, 0));
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
Obj v0x7f1f23f58280 = __arg1;
Obj v0x7f1f23efe060 = primSet(co, symcora_47init_35match_45cons_45expander, makeNative(1, clofun3, 4, 0));
Obj v0x7f1f23edd9a0 = primSet(co, symcora_47init_35match1, makeNative(45, clofun2, 4, 0));
Obj v0x7f1f23ecc5c0 = primSet(co, symcora_47init_35extract_45rule_45action, makeNative(37, clofun2, 2, 0));
Obj v0x7f1f23f5c1a0 = primSet(co, symcora_47init_35match_45helper, makeNative(21, clofun2, 2, 0));
Obj v0x7f1f23f49840 = primSet(co, symcora_47init_35rewrite_45match, makeNative(14, clofun2, 1, 0));
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
Obj v0x7f1f23f49b60 = __arg1;
Obj v0x7f1f23edd9c0 = primSet(co, symcora_47init_35extract_45rules1, makeNative(6, clofun2, 3, 0));
Obj v0x7f1f23eddc60 = primSet(co, symcora_47init_35extract_45rules, makeNative(5, clofun2, 1, 0));
Obj v0x7f1f23ed5480 = primSet(co, symcora_47init_35rules_45patterns, makeNative(2, clofun2, 2, 0));
Obj v0x7f1f23ed5be0 = primSet(co, symcora_47init_35length_45h, makeNative(1, clofun2, 2, 0));
Obj v0x7f1f23ed5e80 = primSet(co, symlength, makeNative(0, clofun2, 1, 0));
Obj v0x7f1f23eccbc0 = primSet(co, symcora_47init_35filter_45h, makeNative(48, clofun1, 3, 0));
Obj v0x7f1f23eccec0 = primSet(co, symfilter, makeNative(47, clofun1, 2, 0));
Obj v0x7f1f23eb1640 = primSet(co, symappend, makeNative(45, clofun1, 2, 0));
Obj v0x7f1f23e9b640 = primSet(co, symcora_47init_35rules_45arg_45count, makeNative(38, clofun1, 1, 0));
Obj v0x7f1f23e9bca0 = primSet(co, symcora_47init_35gen_45paramenters, makeNative(36, clofun1, 1, 0));
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
Obj v0x7f1f23e9aa80 = __arg1;
Obj v0x7f1f23f5c960 = primSet(co, symcora_47init_35propagate_45boolean0, makeNative(18, clofun1, 1, 0));
Obj v0x7f1f2401f640 = primSet(co, symcora_47init_35propagate_45boolean, makeNative(45, clofun0, 1, 0));
Obj v0x7f1f2401f900 = primSet(co, symmacroexpand, makeNative(43, clofun0, 1, 0));
Obj v0x7f1f24024480 = primSet(co, symcora_47init_35rewrite_45begin, makeNative(38, clofun0, 1, 0));
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
Obj v0x7f1f24024740 = __arg1;
Obj v0x7f1f24022a00 = primSet(co, symcora_47init_35rewrite_45backquote, makeNative(31, clofun0, 1, 0));
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
Obj v0x7f1f24022d20 = __arg1;
Obj v0x7f1f240137e0 = primSet(co, symcora_47init_35parse_45define_45library_45h, makeNative(24, clofun0, 4, 0));
Obj v0x7f1f24013aa0 = primSet(co, symcora_47init_35parse_45define_45library, makeNative(23, clofun0, 2, 0));
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
Obj v0x7f1f23f58ee0 = __arg1;
Obj v0x7f1f23efe440 = makeCons(symappend, Nil);
Obj v0x7f1f23efe480 = makeCons(symfilter, v0x7f1f23efe440);
Obj v0x7f1f23efe500 = makeCons(symlength, v0x7f1f23efe480);
Obj v0x7f1f23efe520 = makeCons(symelem_63, v0x7f1f23efe500);
Obj v0x7f1f23efe580 = makeCons(symmacroexpand, v0x7f1f23efe520);
Obj v0x7f1f23efe680 = makeCons(symmap, v0x7f1f23efe580);
Obj v0x7f1f23efe6a0 = makeCons(symreverse, v0x7f1f23efe680);
Obj v0x7f1f23efe6c0 = makeCons(symthrow, v0x7f1f23efe6a0);
Obj v0x7f1f23efe6e0 = makeCons(symtry, v0x7f1f23efe6c0);
Obj v0x7f1f23efe720 = makeCons(symload, v0x7f1f23efe6e0);
Obj v0x7f1f23efe740 = makeCons(symimport, v0x7f1f23efe720);
Obj v0x7f1f23efe760 = makeCons(symload_45so, v0x7f1f23efe740);
Obj v0x7f1f23efe780 = makeCons(symapply, v0x7f1f23efe760);
Obj v0x7f1f23efe7e0 = makeCons(symvalue_45or, v0x7f1f23efe780);
Obj v0x7f1f23efe800 = makeCons(symvalue, v0x7f1f23efe7e0);
Obj v0x7f1f23efe840 = makeCons(symread_45file_45as_45sexp, v0x7f1f23efe800);
Obj v0x7f1f23efe860 = makeCons(symbytes_45length, v0x7f1f23efe840);
Obj v0x7f1f23efe880 = makeCons(symbytes, v0x7f1f23efe860);
Obj v0x7f1f23efe960 = makeCons(symvector_45length, v0x7f1f23efe880);
Obj v0x7f1f23efe980 = makeCons(symvector_45ref, v0x7f1f23efe960);
Obj v0x7f1f23efe9a0 = makeCons(symvector_45set_33, v0x7f1f23efe980);
Obj v0x7f1f23efe9c0 = makeCons(symvector, v0x7f1f23efe9a0);
Obj v0x7f1f23efea00 = makeCons(symsymbol_45_62string, v0x7f1f23efe9c0);
Obj v0x7f1f23efea20 = makeCons(symintern, v0x7f1f23efea00);
Obj v0x7f1f23efea40 = makeCons(symstring_45append, v0x7f1f23efea20);
Obj v0x7f1f23efea60 = makeCons(symnull_63, v0x7f1f23efea40);
Obj v0x7f1f23efea80 = makeCons(symnumber_63, v0x7f1f23efea60);
Obj v0x7f1f23efeb80 = makeCons(symboolean_63, v0x7f1f23efea80);
Obj v0x7f1f23efeba0 = makeCons(symatom_63, v0x7f1f23efeb80);
Obj v0x7f1f23efebc0 = makeCons(sympair_63, v0x7f1f23efeba0);
Obj v0x7f1f23efebe0 = makeCons(symcdddr, v0x7f1f23efebc0);
Obj v0x7f1f23efec00 = makeCons(symcadddr, v0x7f1f23efebe0);
Obj v0x7f1f23efec20 = makeCons(symcaddr, v0x7f1f23efec00);
Obj v0x7f1f23efefe0 = makeCons(symcddr, v0x7f1f23efec20);
Obj v0x7f1f23ef8000 = makeCons(symcdar, v0x7f1f23efefe0);
Obj v0x7f1f23ef8020 = makeCons(symcaar, v0x7f1f23ef8000);
Obj v0x7f1f23ef8040 = makeCons(symcadr, v0x7f1f23ef8020);
Obj v0x7f1f23ef8060 = primSet(co, symcora_47init_35_42ns_45export_42, v0x7f1f23ef8040);
Obj v0x7f1f23ef81e0 = primSet(co, symcora_47init_35cadr, globalRef(symcadr));
Obj v0x7f1f23ef85a0 = primSet(co, symcora_47init_35caar, globalRef(symcaar));
Obj v0x7f1f23ef87a0 = primSet(co, symcora_47init_35cdar, globalRef(symcdar));
Obj v0x7f1f23ef8ac0 = primSet(co, symcora_47init_35cddr, globalRef(symcddr));
Obj v0x7f1f23ef8d00 = primSet(co, symcora_47init_35caddr, globalRef(symcaddr));
Obj v0x7f1f23ef8f00 = primSet(co, symcora_47init_35cadddr, globalRef(symcadddr));
Obj v0x7f1f23edd120 = primSet(co, symcora_47init_35cdddr, globalRef(symcdddr));
Obj v0x7f1f23edd4c0 = primSet(co, symcora_47init_35pair_63, globalRef(sympair_63));
Obj v0x7f1f23edd640 = primSet(co, symcora_47init_35atom_63, globalRef(symatom_63));
Obj v0x7f1f23edd840 = primSet(co, symcora_47init_35boolean_63, globalRef(symboolean_63));
Obj v0x7f1f23eddaa0 = primSet(co, symcora_47init_35null_63, globalRef(symnull_63));
Obj v0x7f1f23eddc20 = primSet(co, symcora_47init_35number_63, globalRef(symnumber_63));
Obj v0x7f1f23eddda0 = primSet(co, symcora_47init_35string_45append, globalRef(symstring_45append));
Obj v0x7f1f23ed50a0 = primSet(co, symcora_47init_35intern, globalRef(symintern));
Obj v0x7f1f23ed52a0 = primSet(co, symcora_47init_35symbol_45_62string, globalRef(symsymbol_45_62string));
Obj v0x7f1f23ed5540 = primSet(co, symcora_47init_35vector, globalRef(symvector));
Obj v0x7f1f23ed56c0 = primSet(co, symcora_47init_35vector_45set_33, globalRef(symvector_45set_33));
Obj v0x7f1f23ed5940 = primSet(co, symcora_47init_35vector_45ref, globalRef(symvector_45ref));
Obj v0x7f1f23ed5b80 = primSet(co, symcora_47init_35vector_45length, globalRef(symvector_45length));
Obj v0x7f1f23ed5dc0 = primSet(co, symcora_47init_35bytes, globalRef(symbytes));
Obj v0x7f1f23ed5fc0 = primSet(co, symcora_47init_35bytes_45length, globalRef(symbytes_45length));
Obj v0x7f1f23ecc180 = primSet(co, symcora_47init_35value, globalRef(symvalue));
Obj v0x7f1f23ecc400 = primSet(co, symcora_47init_35value_45or, globalRef(symvalue_45or));
Obj v0x7f1f23ecc600 = primSet(co, symcora_47init_35read_45file_45as_45sexp, globalRef(symread_45file_45as_45sexp));
Obj v0x7f1f23ecc800 = primSet(co, symcora_47init_35apply, globalRef(symapply));
Obj v0x7f1f23ecca40 = primSet(co, symcora_47init_35load, globalRef(symload));
Obj v0x7f1f23ecccc0 = primSet(co, symcora_47init_35load_45so, globalRef(symload_45so));
Obj v0x7f1f23eccea0 = primSet(co, symcora_47init_35import, globalRef(symimport));
Obj v0x7f1f23eb10c0 = primSet(co, symcora_47init_35try, globalRef(symtry));
Obj v0x7f1f23eb1280 = primSet(co, symcora_47init_35throw, globalRef(symthrow));
Obj v0x7f1f23eb14c0 = primSet(co, symcora_47init_35reverse, globalRef(symreverse));
Obj v0x7f1f23eb1780 = primSet(co, symcora_47init_35map, globalRef(symmap));
Obj v0x7f1f23eb1960 = primSet(co, symcora_47init_35macroexpand, globalRef(symmacroexpand));
Obj v0x7f1f23eb1ae0 = primSet(co, symcora_47init_35elem_63, globalRef(symelem_63));
Obj v0x7f1f23eb1d40 = primSet(co, symcora_47init_35length, globalRef(symlength));
Obj v0x7f1f23eb1f40 = primSet(co, symcora_47init_35filter, globalRef(symfilter));
Obj v0x7f1f23e9b080 = primSet(co, symcora_47init_35append, globalRef(symappend));
__nargs = 2;
__arg1 = v0x7f1f23e9b080;
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
Obj v0x7f1f24013d60 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = v0x7f1f24013d60;
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
Obj v0x7f1f24013f40 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 18, clofun0, 1, path);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35parse_45define_45library);
__arg1 = v0x7f1f24013f40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj v0x7f1f24013f60 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = v0x7f1f24013f60;
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
Obj v0x7f1f23f5c6e0 = makeCons(makeCString("cora/init"), import);
pushCont(co, 20, clofun0, 3, export, body, v0x7f1f23f5c6e0);
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
Obj v0x7f1f23f58300 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23f5c6e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f1f23f58b80 = makeCons(export, Nil);
Obj v0x7f1f23f58bc0 = makeCons(symbackquote, v0x7f1f23f58b80);
Obj v0x7f1f23f58c00 = makeCons(v0x7f1f23f58bc0, Nil);
Obj v0x7f1f23f58c20 = makeCons(sym_42ns_45export_42, v0x7f1f23f58c00);
Obj v0x7f1f23f58ca0 = makeCons(symdef, v0x7f1f23f58c20);
Obj v0x7f1f23f58d20 = makeCons(v0x7f1f23f58ca0, body);
pushCont(co, 21, clofun0, 1, v0x7f1f23f5c6e0);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = v0x7f1f23f58300;
__arg2 = v0x7f1f23f58d20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj v0x7f1f23f58d40 = __arg1;
Obj v0x7f1f23f5c6e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23f58de0 = makeCons(symbegin, v0x7f1f23f58d40);
Obj v0x7f1f23f58e20 = makeCons(v0x7f1f23f58de0, Nil);
Obj v0x7f1f23f58e40 = makeCons(v0x7f1f23f5c6e0, v0x7f1f23f58e20);
Obj v0x7f1f23f58e80 = makeCons(closureRef(co, 0), v0x7f1f23f58e40);
Obj v0x7f1f23f58ea0 = makeCons(symns, v0x7f1f23f58e80);
__nargs = 2;
__arg1 = v0x7f1f23f58ea0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj imp = __arg1;
Obj v0x7f1f23f582a0 = makeCons(imp, Nil);
Obj v0x7f1f23f582c0 = makeCons(symimport, v0x7f1f23f582a0);
__nargs = 2;
__arg1 = v0x7f1f23f582c0;
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
Obj v0x7f1f23f5ca20 = __arg1;
Obj v0x7f1f23f5ca40 = __arg2;
Obj v0x7f1f23f5ca80 = __arg3;
Obj v0x7f1f23f5caa0 = co->args[4];
Obj v0x7f1f23f5cbe0 = makeNative(25, clofun0, 0, 4, v0x7f1f23f5ca20, v0x7f1f23f5ca40, v0x7f1f23f5ca80, v0x7f1f23f5caa0);
Obj v0x7f1f24017160 = PRIM_ISCONS(v0x7f1f23f5ca20);
if (True == v0x7f1f24017160) {
Obj v0x7f1f24017380 = PRIM_CAR(v0x7f1f23f5ca20);
Obj v0x7f1f240173a0 = PRIM_ISCONS(v0x7f1f24017380);
if (True == v0x7f1f240173a0) {
Obj v0x7f1f24017600 = PRIM_CAR(v0x7f1f23f5ca20);
Obj v0x7f1f24017620 = PRIM_CAR(v0x7f1f24017600);
Obj v0x7f1f24017640 = PRIM_EQ(symimport, v0x7f1f24017620);
if (True == v0x7f1f24017640) {
Obj v0x7f1f24017920 = PRIM_CAR(v0x7f1f23f5ca20);
Obj v0x7f1f24017940 = PRIM_CDR(v0x7f1f24017920);
Obj v0x7f1f24017960 = PRIM_ISCONS(v0x7f1f24017940);
if (True == v0x7f1f24017960) {
Obj v0x7f1f24017c40 = PRIM_CAR(v0x7f1f23f5ca20);
Obj v0x7f1f24017c60 = PRIM_CDR(v0x7f1f24017c40);
Obj v0x7f1f24017c80 = PRIM_CAR(v0x7f1f24017c60);
Obj lib = v0x7f1f24017c80;
Obj v0x7f1f24013040 = PRIM_CAR(v0x7f1f23f5ca20);
Obj v0x7f1f24013060 = PRIM_CDR(v0x7f1f24013040);
Obj v0x7f1f24013080 = PRIM_CDR(v0x7f1f24013060);
Obj v0x7f1f240130a0 = PRIM_EQ(Nil, v0x7f1f24013080);
if (True == v0x7f1f240130a0) {
Obj v0x7f1f240131a0 = PRIM_CDR(v0x7f1f23f5ca20);
Obj rest = v0x7f1f240131a0;
Obj imports = v0x7f1f23f5ca40;
Obj exports = v0x7f1f23f5ca80;
Obj k = v0x7f1f23f5caa0;
Obj v0x7f1f24013480 = makeCons(lib, imports);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45define_45library_45h);
__arg1 = rest;
__arg2 = v0x7f1f24013480;
__arg3 = exports;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5cbe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5cbe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5cbe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5cbe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5cbe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj v0x7f1f23f58080 = makeNative(26, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj v0x7f1f2401f520 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f2401f520) {
Obj v0x7f1f2401f6e0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f2401f700 = PRIM_ISCONS(v0x7f1f2401f6e0);
if (True == v0x7f1f2401f700) {
Obj v0x7f1f2401f9a0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f2401f9c0 = PRIM_CAR(v0x7f1f2401f9a0);
Obj v0x7f1f2401f9e0 = PRIM_EQ(symexport, v0x7f1f2401f9c0);
if (True == v0x7f1f2401f9e0) {
Obj v0x7f1f2401fb80 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f2401fba0 = PRIM_CDR(v0x7f1f2401fb80);
Obj more = v0x7f1f2401fba0;
Obj v0x7f1f2401fca0 = PRIM_CDR(closureRef(co, 0));
Obj rest = v0x7f1f2401fca0;
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
__arg0 = v0x7f1f23f58080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj v0x7f1f23f58420 = makeNative(28, clofun0, 0, 0);
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
Obj v0x7f1f2401f3a0 = __arg1;
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exports= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 4;
__arg0 = k;
__arg1 = v0x7f1f2401f3a0;
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
Obj v0x7f1f24022d00 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45backquote);
__arg1 = v0x7f1f24022d00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj v0x7f1f23f5c160 = __arg1;
Obj v0x7f1f23f5c1e0 = makeNative(32, clofun0, 0, 1, v0x7f1f23f5c160);
Obj x = v0x7f1f23f5c160;
Obj v0x7f1f24022760 = primIsSymbol(x);
if (True == v0x7f1f24022760) {
Obj v0x7f1f24022940 = makeCons(x, Nil);
Obj v0x7f1f24022960 = makeCons(symquote, v0x7f1f24022940);
__nargs = 2;
__arg1 = v0x7f1f24022960;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c1e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj v0x7f1f23f5c380 = makeNative(33, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f1f24024800 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f24024800) {
Obj v0x7f1f24024ce0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f24024d00 = PRIM_EQ(symunquote, v0x7f1f24024ce0);
if (True == v0x7f1f24024d00) {
Obj v0x7f1f24024ea0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f24024ec0 = PRIM_ISCONS(v0x7f1f24024ea0);
if (True == v0x7f1f24024ec0) {
Obj v0x7f1f24022060 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f24022080 = PRIM_CAR(v0x7f1f24022060);
Obj x = v0x7f1f24022080;
Obj v0x7f1f24022360 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f24022380 = PRIM_CDR(v0x7f1f24022360);
Obj v0x7f1f240223a0 = PRIM_EQ(Nil, v0x7f1f24022380);
if (True == v0x7f1f240223a0) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c380;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c380;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c380;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c380;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj v0x7f1f23f5c5a0 = makeNative(35, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f1f24024100 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f24024100) {
Obj v0x7f1f24024220 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f1f24024220;
Obj v0x7f1f24024320 = PRIM_CDR(closureRef(co, 0));
Obj more = v0x7f1f24024320;
Obj v0x7f1f240245e0 = makeCons(x, more);
PUSH_CONT_0(co, 34, clofun0);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35rewrite_45backquote);
__arg2 = v0x7f1f240245e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c5a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj v0x7f1f24024600 = __arg1;
Obj v0x7f1f24024620 = makeCons(symlist, v0x7f1f24024600);
__nargs = 2;
__arg1 = v0x7f1f24024620;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj v0x7f1f23f5c740 = makeNative(36, clofun0, 0, 0);
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
Obj v0x7f1f24024720 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45begin);
__arg1 = v0x7f1f24024720;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj v0x7f1f23f5cfc0 = __arg1;
Obj v0x7f1f23f58060 = makeNative(39, clofun0, 0, 1, v0x7f1f23f5cfc0);
Obj v0x7f1f24024080 = PRIM_ISCONS(v0x7f1f23f5cfc0);
if (True == v0x7f1f24024080) {
Obj v0x7f1f24024180 = PRIM_CAR(v0x7f1f23f5cfc0);
Obj x = v0x7f1f24024180;
Obj v0x7f1f24024340 = PRIM_CDR(v0x7f1f23f5cfc0);
Obj v0x7f1f24024360 = PRIM_EQ(Nil, v0x7f1f24024340);
if (True == v0x7f1f24024360) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58060;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj v0x7f1f23f581c0 = makeNative(40, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f1f24022440 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f24022440) {
Obj v0x7f1f24022540 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f1f24022540;
Obj v0x7f1f240226e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f24022700 = PRIM_ISCONS(v0x7f1f240226e0);
if (True == v0x7f1f24022700) {
Obj v0x7f1f240228a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f240228c0 = PRIM_CAR(v0x7f1f240228a0);
Obj y = v0x7f1f240228c0;
Obj v0x7f1f24022b20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f24022b40 = PRIM_CDR(v0x7f1f24022b20);
Obj v0x7f1f24022b60 = PRIM_EQ(Nil, v0x7f1f24022b40);
if (True == v0x7f1f24022b60) {
Obj v0x7f1f24022dc0 = makeCons(y, Nil);
Obj v0x7f1f24022de0 = makeCons(x, v0x7f1f24022dc0);
Obj v0x7f1f24022e00 = makeCons(symdo, v0x7f1f24022de0);
__nargs = 2;
__arg1 = v0x7f1f24022e00;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f581c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f581c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f581c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj v0x7f1f23f583c0 = makeNative(42, clofun0, 0, 0);
Obj v0x7f1f2401fd60 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f2401fd60) {
Obj v0x7f1f2401fe60 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f1f2401fe60;
Obj v0x7f1f2401ff60 = PRIM_CDR(closureRef(co, 0));
Obj y = v0x7f1f2401ff60;
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
__arg0 = v0x7f1f23f583c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj v0x7f1f24022240 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f24022280 = makeCons(v0x7f1f24022240, Nil);
Obj v0x7f1f240222a0 = makeCons(x, v0x7f1f24022280);
Obj v0x7f1f240222c0 = makeCons(symdo, v0x7f1f240222a0);
__nargs = 2;
__arg1 = v0x7f1f240222c0;
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
Obj v0x7f1f2401f8e0 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = v0x7f1f2401f8e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj v0x7f1f23f5c240 = __arg1;
Obj v0x7f1f23f5c2e0 = makeNative(46, clofun0, 0, 1, v0x7f1f23f5c240);
Obj v0x7f1f23e3f980 = PRIM_ISCONS(v0x7f1f23f5c240);
if (True == v0x7f1f23e3f980) {
Obj v0x7f1f23e3fc00 = PRIM_CAR(v0x7f1f23f5c240);
Obj v0x7f1f23e3fc20 = PRIM_EQ(symquote, v0x7f1f23e3fc00);
if (True == v0x7f1f23e3fc20) {
Obj v0x7f1f23e3fe20 = PRIM_CDR(v0x7f1f23f5c240);
Obj v0x7f1f23e3fe40 = PRIM_ISCONS(v0x7f1f23e3fe20);
if (True == v0x7f1f23e3fe40) {
Obj v0x7f1f23e3ffe0 = PRIM_CDR(v0x7f1f23f5c240);
Obj v0x7f1f23e39a20 = PRIM_CAR(v0x7f1f23e3ffe0);
Obj x = v0x7f1f23e39a20;
Obj v0x7f1f2401f220 = PRIM_CDR(v0x7f1f23f5c240);
Obj v0x7f1f2401f240 = PRIM_CDR(v0x7f1f2401f220);
Obj v0x7f1f2401f260 = PRIM_EQ(Nil, v0x7f1f2401f240);
if (True == v0x7f1f2401f260) {
Obj v0x7f1f2401f400 = makeCons(x, Nil);
Obj v0x7f1f2401f420 = makeCons(symquote, v0x7f1f2401f400);
__nargs = 2;
__arg1 = v0x7f1f2401f420;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c2e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c2e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c2e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c2e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj v0x7f1f23f5c4e0 = makeNative(48, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f1f23e5f5a0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23e5f5a0) {
Obj v0x7f1f23e5f760 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23e5f780 = PRIM_EQ(symcons_63, v0x7f1f23e5f760);
if (True == v0x7f1f23e5f780) {
Obj v0x7f1f23e5f9a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e5f9c0 = PRIM_ISCONS(v0x7f1f23e5f9a0);
if (True == v0x7f1f23e5f9c0) {
Obj v0x7f1f23e5fbe0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e5fc00 = PRIM_CAR(v0x7f1f23e5fbe0);
Obj x = v0x7f1f23e5fc00;
Obj v0x7f1f23e5fe60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e5fe80 = PRIM_CDR(v0x7f1f23e5fe60);
Obj v0x7f1f23e5fea0 = PRIM_EQ(Nil, v0x7f1f23e5fe80);
if (True == v0x7f1f23e5fea0) {
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
__arg0 = v0x7f1f23f5c4e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c4e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c4e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c4e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj v0x7f1f23e3f380 = __arg1;
Obj x1 = v0x7f1f23e3f380;
Obj v0x7f1f23e3f5c0 = makeCons(x1, Nil);
Obj v0x7f1f23e3f5e0 = makeCons(symcons_63, v0x7f1f23e3f5c0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f1f23e3f5e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj v0x7f1f23f5c6c0 = makeNative(0, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23e90420 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23e90420) {
Obj v0x7f1f23e90660 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23e90680 = PRIM_EQ(symcar, v0x7f1f23e90660);
if (True == v0x7f1f23e90680) {
Obj v0x7f1f23e90840 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e90860 = PRIM_ISCONS(v0x7f1f23e90840);
if (True == v0x7f1f23e90860) {
Obj v0x7f1f23e90ac0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e90ae0 = PRIM_CAR(v0x7f1f23e90ac0);
Obj x = v0x7f1f23e90ae0;
Obj v0x7f1f23e90e20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e90e40 = PRIM_CDR(v0x7f1f23e90e20);
Obj v0x7f1f23e90e60 = PRIM_EQ(Nil, v0x7f1f23e90e40);
if (True == v0x7f1f23e90e60) {
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
__arg0 = v0x7f1f23f5c6c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c6c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c6c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c6c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj v0x7f1f23e90f60 = __arg1;
Obj x1 = v0x7f1f23e90f60;
Obj v0x7f1f23e5f200 = makeCons(x1, Nil);
Obj v0x7f1f23e5f220 = makeCons(symcar, v0x7f1f23e5f200);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f1f23e5f220;
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
Obj v0x7f1f23f5c880 = makeNative(2, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23e960c0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23e960c0) {
Obj v0x7f1f23e96360 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23e96380 = PRIM_EQ(symcdr, v0x7f1f23e96360);
if (True == v0x7f1f23e96380) {
Obj v0x7f1f23e965c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e965e0 = PRIM_ISCONS(v0x7f1f23e965c0);
if (True == v0x7f1f23e965e0) {
Obj v0x7f1f23e96780 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e967c0 = PRIM_CAR(v0x7f1f23e96780);
Obj x = v0x7f1f23e967c0;
Obj v0x7f1f23e96b00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e96b60 = PRIM_CDR(v0x7f1f23e96b00);
Obj v0x7f1f23e96b80 = PRIM_EQ(Nil, v0x7f1f23e96b60);
if (True == v0x7f1f23e96b80) {
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
__arg0 = v0x7f1f23f5c880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj v0x7f1f23e96c80 = __arg1;
Obj x1 = v0x7f1f23e96c80;
Obj v0x7f1f23e96fe0 = makeCons(x1, Nil);
Obj v0x7f1f23e90000 = makeCons(symcdr, v0x7f1f23e96fe0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f1f23e90000;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj v0x7f1f23f5ca60 = makeNative(5, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23eb1f60 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23eb1f60) {
Obj v0x7f1f23e9b280 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23e9b2a0 = PRIM_EQ(symand, v0x7f1f23e9b280);
if (True == v0x7f1f23e9b2a0) {
Obj v0x7f1f23e9b4e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e9b500 = PRIM_ISCONS(v0x7f1f23e9b4e0);
if (True == v0x7f1f23e9b500) {
Obj v0x7f1f23e9b800 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e9b820 = PRIM_CAR(v0x7f1f23e9b800);
Obj x = v0x7f1f23e9b820;
Obj v0x7f1f23e9bae0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e9bb00 = PRIM_CDR(v0x7f1f23e9bae0);
Obj v0x7f1f23e9bb20 = PRIM_ISCONS(v0x7f1f23e9bb00);
if (True == v0x7f1f23e9bb20) {
Obj v0x7f1f23e9bec0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e9bee0 = PRIM_CDR(v0x7f1f23e9bec0);
Obj v0x7f1f23e9bf00 = PRIM_CAR(v0x7f1f23e9bee0);
Obj y = v0x7f1f23e9bf00;
Obj v0x7f1f23e9a320 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e9a420 = PRIM_CDR(v0x7f1f23e9a320);
Obj v0x7f1f23e9a440 = PRIM_CDR(v0x7f1f23e9a420);
Obj v0x7f1f23e9a460 = PRIM_EQ(Nil, v0x7f1f23e9a440);
if (True == v0x7f1f23e9a460) {
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
__arg0 = v0x7f1f23f5ca60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5ca60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5ca60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5ca60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5ca60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj v0x7f1f23e9a580 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1 = v0x7f1f23e9a580;
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
Obj v0x7f1f23e9a6c0 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y1 = v0x7f1f23e9a6c0;
Obj v0x7f1f23e9aba0 = makeCons(y1, Nil);
Obj v0x7f1f23e9abc0 = makeCons(x1, v0x7f1f23e9aba0);
Obj v0x7f1f23e9abe0 = makeCons(symand, v0x7f1f23e9abc0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f1f23e9abe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj v0x7f1f23f5c0a0 = makeNative(7, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23ecc7a0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23ecc7a0) {
Obj v0x7f1f23eccb40 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23eccb60 = PRIM_EQ(symnull_63, v0x7f1f23eccb40);
if (True == v0x7f1f23eccb60) {
Obj v0x7f1f23eccd60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23eccd80 = PRIM_ISCONS(v0x7f1f23eccd60);
if (True == v0x7f1f23eccd80) {
Obj v0x7f1f23eb1040 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23eb1080 = PRIM_CAR(v0x7f1f23eb1040);
Obj x = v0x7f1f23eb1080;
Obj v0x7f1f23eb1400 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23eb1420 = PRIM_CDR(v0x7f1f23eb1400);
Obj v0x7f1f23eb1440 = PRIM_EQ(Nil, v0x7f1f23eb1420);
if (True == v0x7f1f23eb1440) {
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
__arg0 = v0x7f1f23f5c0a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c0a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c0a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c0a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj v0x7f1f23eb16a0 = __arg1;
Obj x1 = v0x7f1f23eb16a0;
Obj v0x7f1f23eb1a00 = makeCons(x1, Nil);
Obj v0x7f1f23eb1a20 = makeCons(symnull_63, v0x7f1f23eb1a00);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f1f23eb1a20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj v0x7f1f23f5c320 = makeNative(9, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23edde20 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23edde20) {
Obj v0x7f1f23ed5220 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23ed5240 = PRIM_EQ(symnot, v0x7f1f23ed5220);
if (True == v0x7f1f23ed5240) {
Obj v0x7f1f23ed55a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23ed55c0 = PRIM_ISCONS(v0x7f1f23ed55a0);
if (True == v0x7f1f23ed55c0) {
Obj v0x7f1f23ed5880 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23ed58a0 = PRIM_CAR(v0x7f1f23ed5880);
Obj x = v0x7f1f23ed58a0;
Obj v0x7f1f23ed5c60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23ed5ca0 = PRIM_CDR(v0x7f1f23ed5c60);
Obj v0x7f1f23ed5cc0 = PRIM_EQ(Nil, v0x7f1f23ed5ca0);
if (True == v0x7f1f23ed5cc0) {
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
__arg0 = v0x7f1f23f5c320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj v0x7f1f23ed5e20 = __arg1;
Obj x1 = v0x7f1f23ed5e20;
Obj v0x7f1f23ecc1e0 = makeCons(x1, Nil);
Obj v0x7f1f23ecc200 = makeCons(symnot, v0x7f1f23ecc1e0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f1f23ecc200;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj v0x7f1f23f5c520 = makeNative(13, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23f3c4e0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23f3c4e0) {
Obj v0x7f1f23f3c780 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23f3c7a0 = PRIM_EQ(symif, v0x7f1f23f3c780);
if (True == v0x7f1f23f3c7a0) {
Obj v0x7f1f23f3ca20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f3ca40 = PRIM_ISCONS(v0x7f1f23f3ca20);
if (True == v0x7f1f23f3ca40) {
Obj v0x7f1f23f3cd20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f3cd40 = PRIM_CAR(v0x7f1f23f3cd20);
Obj x = v0x7f1f23f3cd40;
Obj v0x7f1f23efe120 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23efe180 = PRIM_CDR(v0x7f1f23efe120);
Obj v0x7f1f23efe1a0 = PRIM_ISCONS(v0x7f1f23efe180);
if (True == v0x7f1f23efe1a0) {
Obj v0x7f1f23efe5e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23efe600 = PRIM_CDR(v0x7f1f23efe5e0);
Obj v0x7f1f23efe620 = PRIM_CAR(v0x7f1f23efe600);
Obj y = v0x7f1f23efe620;
Obj v0x7f1f23efeaa0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23efeac0 = PRIM_CDR(v0x7f1f23efeaa0);
Obj v0x7f1f23efeae0 = PRIM_CDR(v0x7f1f23efeac0);
Obj v0x7f1f23efeb60 = PRIM_ISCONS(v0x7f1f23efeae0);
if (True == v0x7f1f23efeb60) {
Obj v0x7f1f23ef83a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23ef83c0 = PRIM_CDR(v0x7f1f23ef83a0);
Obj v0x7f1f23ef8480 = PRIM_CDR(v0x7f1f23ef83c0);
Obj v0x7f1f23ef84a0 = PRIM_CAR(v0x7f1f23ef8480);
Obj z = v0x7f1f23ef84a0;
Obj v0x7f1f23ef8b40 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23ef8be0 = PRIM_CDR(v0x7f1f23ef8b40);
Obj v0x7f1f23ef8c00 = PRIM_CDR(v0x7f1f23ef8be0);
Obj v0x7f1f23ef8c20 = PRIM_CDR(v0x7f1f23ef8c00);
Obj v0x7f1f23ef8c40 = PRIM_EQ(Nil, v0x7f1f23ef8c20);
if (True == v0x7f1f23ef8c40) {
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
__arg0 = v0x7f1f23f5c520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj v0x7f1f23ef8dc0 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x1 = v0x7f1f23ef8dc0;
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
Obj v0x7f1f23ef8ee0 = __arg1;
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj y1 = v0x7f1f23ef8ee0;
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
Obj v0x7f1f23edd0a0 = __arg1;
Obj y1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj z1 = v0x7f1f23edd0a0;
Obj v0x7f1f23edd7a0 = makeCons(z1, Nil);
Obj v0x7f1f23edd7c0 = makeCons(y1, v0x7f1f23edd7a0);
Obj v0x7f1f23edd7e0 = makeCons(x1, v0x7f1f23edd7c0);
Obj v0x7f1f23edd820 = makeCons(symif, v0x7f1f23edd7e0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = v0x7f1f23edd820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj v0x7f1f23f5c820 = makeNative(15, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23f49400 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23f49400) {
Obj v0x7f1f23f495c0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23f495e0 = PRIM_EQ(symlambda, v0x7f1f23f495c0);
if (True == v0x7f1f23f495e0) {
Obj v0x7f1f23f49a00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f49a60 = PRIM_ISCONS(v0x7f1f23f49a00);
if (True == v0x7f1f23f49a60) {
Obj v0x7f1f23f49ce0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f49d00 = PRIM_CAR(v0x7f1f23f49ce0);
Obj args = v0x7f1f23f49d00;
Obj v0x7f1f23f49fe0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f43040 = PRIM_CDR(v0x7f1f23f49fe0);
Obj v0x7f1f23f43060 = PRIM_ISCONS(v0x7f1f23f43040);
if (True == v0x7f1f23f43060) {
Obj v0x7f1f23f43380 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f433c0 = PRIM_CDR(v0x7f1f23f43380);
Obj v0x7f1f23f43460 = PRIM_CAR(v0x7f1f23f433c0);
Obj body = v0x7f1f23f43460;
Obj v0x7f1f23f438c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f438e0 = PRIM_CDR(v0x7f1f23f438c0);
Obj v0x7f1f23f43900 = PRIM_CDR(v0x7f1f23f438e0);
Obj v0x7f1f23f43920 = PRIM_EQ(Nil, v0x7f1f23f43900);
if (True == v0x7f1f23f43920) {
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
__arg0 = v0x7f1f23f5c820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj v0x7f1f23f43ea0 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23f43ee0 = makeCons(v0x7f1f23f43ea0, Nil);
Obj v0x7f1f23f43f00 = makeCons(args, v0x7f1f23f43ee0);
Obj v0x7f1f23f43f20 = makeCons(symlambda, v0x7f1f23f43f00);
__nargs = 2;
__arg1 = v0x7f1f23f43f20;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj v0x7f1f23f5cce0 = makeNative(16, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23f58b40 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23f58b40) {
Obj v0x7f1f23f58cc0 = PRIM_CAR(closureRef(co, 0));
Obj f = v0x7f1f23f58cc0;
Obj v0x7f1f23f58e60 = PRIM_CDR(closureRef(co, 0));
Obj args = v0x7f1f23f58e60;
Obj v0x7f1f23f49120 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35propagate_45boolean);
__arg2 = v0x7f1f23f49120;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5cce0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj v0x7f1f23f5ce40 = makeNative(17, clofun1, 0, 0);
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
Obj v0x7f1f23f5c220 = __arg1;
Obj v0x7f1f23f5c2a0 = makeNative(19, clofun1, 0, 1, v0x7f1f23f5c220);
Obj v0x7f1f24013340 = PRIM_ISCONS(v0x7f1f23f5c220);
if (True == v0x7f1f24013340) {
Obj v0x7f1f24013500 = PRIM_CAR(v0x7f1f23f5c220);
Obj v0x7f1f24013520 = PRIM_EQ(symcar, v0x7f1f24013500);
if (True == v0x7f1f24013520) {
Obj v0x7f1f240136c0 = PRIM_CDR(v0x7f1f23f5c220);
Obj v0x7f1f240136e0 = PRIM_ISCONS(v0x7f1f240136c0);
if (True == v0x7f1f240136e0) {
Obj v0x7f1f24013920 = PRIM_CDR(v0x7f1f23f5c220);
Obj v0x7f1f24013940 = PRIM_CAR(v0x7f1f24013920);
Obj v0x7f1f24013960 = PRIM_ISCONS(v0x7f1f24013940);
if (True == v0x7f1f24013960) {
Obj v0x7f1f24013c60 = PRIM_CDR(v0x7f1f23f5c220);
Obj v0x7f1f24013c80 = PRIM_CAR(v0x7f1f24013c60);
Obj v0x7f1f24013ca0 = PRIM_CAR(v0x7f1f24013c80);
Obj v0x7f1f24013cc0 = PRIM_EQ(symcons, v0x7f1f24013ca0);
if (True == v0x7f1f24013cc0) {
Obj v0x7f1f24013fa0 = PRIM_CDR(v0x7f1f23f5c220);
Obj v0x7f1f24013fc0 = PRIM_CAR(v0x7f1f24013fa0);
Obj v0x7f1f24013fe0 = PRIM_CDR(v0x7f1f24013fc0);
Obj v0x7f1f24017000 = PRIM_ISCONS(v0x7f1f24013fe0);
if (True == v0x7f1f24017000) {
Obj v0x7f1f240172e0 = PRIM_CDR(v0x7f1f23f5c220);
Obj v0x7f1f24017300 = PRIM_CAR(v0x7f1f240172e0);
Obj v0x7f1f24017320 = PRIM_CDR(v0x7f1f24017300);
Obj v0x7f1f24017340 = PRIM_CAR(v0x7f1f24017320);
Obj x = v0x7f1f24017340;
Obj v0x7f1f240176c0 = PRIM_CDR(v0x7f1f23f5c220);
Obj v0x7f1f240176e0 = PRIM_CAR(v0x7f1f240176c0);
Obj v0x7f1f24017700 = PRIM_CDR(v0x7f1f240176e0);
Obj v0x7f1f24017720 = PRIM_CDR(v0x7f1f24017700);
Obj v0x7f1f24017740 = PRIM_ISCONS(v0x7f1f24017720);
if (True == v0x7f1f24017740) {
Obj v0x7f1f24017ac0 = PRIM_CDR(v0x7f1f23f5c220);
Obj v0x7f1f24017ae0 = PRIM_CAR(v0x7f1f24017ac0);
Obj v0x7f1f24017b00 = PRIM_CDR(v0x7f1f24017ae0);
Obj v0x7f1f24017b20 = PRIM_CDR(v0x7f1f24017b00);
Obj v0x7f1f24017b40 = PRIM_CAR(v0x7f1f24017b20);
Obj __ = v0x7f1f24017b40;
Obj v0x7f1f24017f80 = PRIM_CDR(v0x7f1f23f5c220);
Obj v0x7f1f24017fa0 = PRIM_CAR(v0x7f1f24017f80);
Obj v0x7f1f24017fc0 = PRIM_CDR(v0x7f1f24017fa0);
Obj v0x7f1f24017fe0 = PRIM_CDR(v0x7f1f24017fc0);
Obj v0x7f1f24013000 = PRIM_CDR(v0x7f1f24017fe0);
Obj v0x7f1f24013020 = PRIM_EQ(Nil, v0x7f1f24013000);
if (True == v0x7f1f24013020) {
Obj v0x7f1f24013280 = PRIM_CDR(v0x7f1f23f5c220);
Obj v0x7f1f240132a0 = PRIM_CDR(v0x7f1f24013280);
Obj v0x7f1f240132c0 = PRIM_EQ(Nil, v0x7f1f240132a0);
if (True == v0x7f1f240132c0) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj v0x7f1f23f5c600 = makeNative(20, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23e90820 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23e90820) {
Obj v0x7f1f23e90a60 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23e90a80 = PRIM_EQ(symcdr, v0x7f1f23e90a60);
if (True == v0x7f1f23e90a80) {
Obj v0x7f1f23e90c20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e90c40 = PRIM_ISCONS(v0x7f1f23e90c20);
if (True == v0x7f1f23e90c40) {
Obj v0x7f1f23e5f120 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e5f140 = PRIM_CAR(v0x7f1f23e5f120);
Obj v0x7f1f23e5f160 = PRIM_ISCONS(v0x7f1f23e5f140);
if (True == v0x7f1f23e5f160) {
Obj v0x7f1f23e5f460 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e5f480 = PRIM_CAR(v0x7f1f23e5f460);
Obj v0x7f1f23e5f4a0 = PRIM_CAR(v0x7f1f23e5f480);
Obj v0x7f1f23e5f4c0 = PRIM_EQ(symcons, v0x7f1f23e5f4a0);
if (True == v0x7f1f23e5f4c0) {
Obj v0x7f1f23e5f7a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e5f7c0 = PRIM_CAR(v0x7f1f23e5f7a0);
Obj v0x7f1f23e5f7e0 = PRIM_CDR(v0x7f1f23e5f7c0);
Obj v0x7f1f23e5f800 = PRIM_ISCONS(v0x7f1f23e5f7e0);
if (True == v0x7f1f23e5f800) {
Obj v0x7f1f23e5fae0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e5fb00 = PRIM_CAR(v0x7f1f23e5fae0);
Obj v0x7f1f23e5fb20 = PRIM_CDR(v0x7f1f23e5fb00);
Obj v0x7f1f23e5fb40 = PRIM_CAR(v0x7f1f23e5fb20);
Obj __ = v0x7f1f23e5fb40;
Obj v0x7f1f23e5fec0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e5fee0 = PRIM_CAR(v0x7f1f23e5fec0);
Obj v0x7f1f23e5ff00 = PRIM_CDR(v0x7f1f23e5fee0);
Obj v0x7f1f23e5ff20 = PRIM_CDR(v0x7f1f23e5ff00);
Obj v0x7f1f23e5ff40 = PRIM_ISCONS(v0x7f1f23e5ff20);
if (True == v0x7f1f23e5ff40) {
Obj v0x7f1f23e3f600 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e3f620 = PRIM_CAR(v0x7f1f23e3f600);
Obj v0x7f1f23e3f640 = PRIM_CDR(v0x7f1f23e3f620);
Obj v0x7f1f23e3f660 = PRIM_CDR(v0x7f1f23e3f640);
Obj v0x7f1f23e3f680 = PRIM_CAR(v0x7f1f23e3f660);
Obj x = v0x7f1f23e3f680;
Obj v0x7f1f23e3fac0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e3fae0 = PRIM_CAR(v0x7f1f23e3fac0);
Obj v0x7f1f23e3fb00 = PRIM_CDR(v0x7f1f23e3fae0);
Obj v0x7f1f23e3fb20 = PRIM_CDR(v0x7f1f23e3fb00);
Obj v0x7f1f23e3fb40 = PRIM_CDR(v0x7f1f23e3fb20);
Obj v0x7f1f23e3fb60 = PRIM_EQ(Nil, v0x7f1f23e3fb40);
if (True == v0x7f1f23e3fb60) {
Obj v0x7f1f23e3fdc0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e3fde0 = PRIM_CDR(v0x7f1f23e3fdc0);
Obj v0x7f1f23e3fe00 = PRIM_EQ(Nil, v0x7f1f23e3fde0);
if (True == v0x7f1f23e3fe00) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj v0x7f1f23f5c920 = makeNative(21, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23e9bba0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23e9bba0) {
Obj v0x7f1f23e9be40 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23e9be60 = PRIM_EQ(symcons_63, v0x7f1f23e9be40);
if (True == v0x7f1f23e9be60) {
Obj v0x7f1f23e9a040 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e9a060 = PRIM_ISCONS(v0x7f1f23e9a040);
if (True == v0x7f1f23e9a060) {
Obj v0x7f1f23e9a340 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e9a360 = PRIM_CAR(v0x7f1f23e9a340);
Obj v0x7f1f23e9a380 = PRIM_ISCONS(v0x7f1f23e9a360);
if (True == v0x7f1f23e9a380) {
Obj v0x7f1f23e9a760 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e9a780 = PRIM_CAR(v0x7f1f23e9a760);
Obj v0x7f1f23e9a7a0 = PRIM_CAR(v0x7f1f23e9a780);
Obj v0x7f1f23e9a7e0 = PRIM_EQ(symcons, v0x7f1f23e9a7a0);
if (True == v0x7f1f23e9a7e0) {
Obj v0x7f1f23e9ac00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e9ac20 = PRIM_CAR(v0x7f1f23e9ac00);
Obj v0x7f1f23e9aca0 = PRIM_CDR(v0x7f1f23e9ac20);
Obj v0x7f1f23e9acc0 = PRIM_ISCONS(v0x7f1f23e9aca0);
if (True == v0x7f1f23e9acc0) {
Obj v0x7f1f23e9afa0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e9afc0 = PRIM_CAR(v0x7f1f23e9afa0);
Obj v0x7f1f23e9afe0 = PRIM_CDR(v0x7f1f23e9afc0);
Obj v0x7f1f23e96000 = PRIM_CAR(v0x7f1f23e9afe0);
Obj __ = v0x7f1f23e96000;
Obj v0x7f1f23e96460 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e96480 = PRIM_CAR(v0x7f1f23e96460);
Obj v0x7f1f23e964a0 = PRIM_CDR(v0x7f1f23e96480);
Obj v0x7f1f23e964c0 = PRIM_CDR(v0x7f1f23e964a0);
Obj v0x7f1f23e964e0 = PRIM_ISCONS(v0x7f1f23e964c0);
if (True == v0x7f1f23e964e0) {
Obj v0x7f1f23e96880 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e968a0 = PRIM_CAR(v0x7f1f23e96880);
Obj v0x7f1f23e968c0 = PRIM_CDR(v0x7f1f23e968a0);
Obj v0x7f1f23e968e0 = PRIM_CDR(v0x7f1f23e968c0);
Obj v0x7f1f23e96900 = PRIM_CAR(v0x7f1f23e968e0);
__ = v0x7f1f23e96900;
Obj v0x7f1f23e96e20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e96e40 = PRIM_CAR(v0x7f1f23e96e20);
Obj v0x7f1f23e96e60 = PRIM_CDR(v0x7f1f23e96e40);
Obj v0x7f1f23e96e80 = PRIM_CDR(v0x7f1f23e96e60);
Obj v0x7f1f23e96ea0 = PRIM_CDR(v0x7f1f23e96e80);
Obj v0x7f1f23e96ec0 = PRIM_EQ(Nil, v0x7f1f23e96ea0);
if (True == v0x7f1f23e96ec0) {
Obj v0x7f1f23e90180 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e901a0 = PRIM_CDR(v0x7f1f23e90180);
Obj v0x7f1f23e901c0 = PRIM_EQ(Nil, v0x7f1f23e901a0);
if (True == v0x7f1f23e901c0) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj v0x7f1f23f5cc40 = makeNative(22, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23eccfa0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23eccfa0) {
Obj v0x7f1f23eb1220 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23eb1240 = PRIM_EQ(symand, v0x7f1f23eb1220);
if (True == v0x7f1f23eb1240) {
Obj v0x7f1f23eb1460 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23eb1480 = PRIM_ISCONS(v0x7f1f23eb1460);
if (True == v0x7f1f23eb1480) {
Obj v0x7f1f23eb18a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23eb18c0 = PRIM_CAR(v0x7f1f23eb18a0);
Obj v0x7f1f23eb18e0 = PRIM_EQ(True, v0x7f1f23eb18c0);
if (True == v0x7f1f23eb18e0) {
Obj v0x7f1f23eb1b80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23eb1ba0 = PRIM_CDR(v0x7f1f23eb1b80);
Obj v0x7f1f23eb1bc0 = PRIM_ISCONS(v0x7f1f23eb1ba0);
if (True == v0x7f1f23eb1bc0) {
Obj v0x7f1f23e9b0a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e9b0c0 = PRIM_CDR(v0x7f1f23e9b0a0);
Obj v0x7f1f23e9b100 = PRIM_CAR(v0x7f1f23e9b0c0);
Obj v0x7f1f23e9b160 = PRIM_EQ(True, v0x7f1f23e9b100);
if (True == v0x7f1f23e9b160) {
Obj v0x7f1f23e9b5c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e9b5e0 = PRIM_CDR(v0x7f1f23e9b5c0);
Obj v0x7f1f23e9b600 = PRIM_CDR(v0x7f1f23e9b5e0);
Obj v0x7f1f23e9b620 = PRIM_EQ(Nil, v0x7f1f23e9b600);
if (True == v0x7f1f23e9b620) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5cc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5cc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5cc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5cc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5cc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5cc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5cc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj v0x7f1f23f5ce80 = makeNative(23, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23ed5d20 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23ed5d20) {
Obj v0x7f1f23ed5fe0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23ecc000 = PRIM_EQ(symnull_63, v0x7f1f23ed5fe0);
if (True == v0x7f1f23ecc000) {
Obj v0x7f1f23ecc220 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23ecc280 = PRIM_ISCONS(v0x7f1f23ecc220);
if (True == v0x7f1f23ecc280) {
Obj v0x7f1f23ecc640 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23ecc660 = PRIM_CAR(v0x7f1f23ecc640);
Obj v0x7f1f23ecc680 = PRIM_EQ(Nil, v0x7f1f23ecc660);
if (True == v0x7f1f23ecc680) {
Obj v0x7f1f23ecca60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23ecca80 = PRIM_CDR(v0x7f1f23ecca60);
Obj v0x7f1f23eccae0 = PRIM_EQ(Nil, v0x7f1f23ecca80);
if (True == v0x7f1f23eccae0) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5ce80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5ce80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5ce80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5ce80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5ce80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj v0x7f1f23f58040 = makeNative(24, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23efe2c0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23efe2c0) {
Obj v0x7f1f23efe540 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23efe560 = PRIM_EQ(symnull_63, v0x7f1f23efe540);
if (True == v0x7f1f23efe560) {
Obj v0x7f1f23efe7a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23efe7c0 = PRIM_ISCONS(v0x7f1f23efe7a0);
if (True == v0x7f1f23efe7c0) {
Obj v0x7f1f23efeb00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23efeb20 = PRIM_CAR(v0x7f1f23efeb00);
Obj v0x7f1f23efeb40 = PRIM_ISCONS(v0x7f1f23efeb20);
if (True == v0x7f1f23efeb40) {
Obj v0x7f1f23ef8320 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23ef8340 = PRIM_CAR(v0x7f1f23ef8320);
Obj v0x7f1f23ef8360 = PRIM_CAR(v0x7f1f23ef8340);
Obj v0x7f1f23ef8380 = PRIM_EQ(symcons, v0x7f1f23ef8360);
if (True == v0x7f1f23ef8380) {
Obj v0x7f1f23ef88a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23ef88c0 = PRIM_CAR(v0x7f1f23ef88a0);
Obj v0x7f1f23ef8960 = PRIM_CDR(v0x7f1f23ef88c0);
Obj v0x7f1f23ef89a0 = PRIM_ISCONS(v0x7f1f23ef8960);
if (True == v0x7f1f23ef89a0) {
Obj v0x7f1f23ef8d40 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23ef8d60 = PRIM_CAR(v0x7f1f23ef8d40);
Obj v0x7f1f23ef8d80 = PRIM_CDR(v0x7f1f23ef8d60);
Obj v0x7f1f23ef8da0 = PRIM_CAR(v0x7f1f23ef8d80);
Obj __ = v0x7f1f23ef8da0;
Obj v0x7f1f23edd400 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23edd420 = PRIM_CAR(v0x7f1f23edd400);
Obj v0x7f1f23edd440 = PRIM_CDR(v0x7f1f23edd420);
Obj v0x7f1f23edd460 = PRIM_CDR(v0x7f1f23edd440);
Obj v0x7f1f23edd480 = PRIM_ISCONS(v0x7f1f23edd460);
if (True == v0x7f1f23edd480) {
Obj v0x7f1f23edd8c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23edd8e0 = PRIM_CAR(v0x7f1f23edd8c0);
Obj v0x7f1f23edd940 = PRIM_CDR(v0x7f1f23edd8e0);
Obj v0x7f1f23edd960 = PRIM_CDR(v0x7f1f23edd940);
Obj v0x7f1f23edd9e0 = PRIM_CAR(v0x7f1f23edd960);
__ = v0x7f1f23edd9e0;
Obj v0x7f1f23eddfa0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23eddfc0 = PRIM_CAR(v0x7f1f23eddfa0);
Obj v0x7f1f23eddfe0 = PRIM_CDR(v0x7f1f23eddfc0);
Obj v0x7f1f23ed5020 = PRIM_CDR(v0x7f1f23eddfe0);
Obj v0x7f1f23ed5040 = PRIM_CDR(v0x7f1f23ed5020);
Obj v0x7f1f23ed5060 = PRIM_EQ(Nil, v0x7f1f23ed5040);
if (True == v0x7f1f23ed5060) {
Obj v0x7f1f23ed53e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23ed5420 = PRIM_CDR(v0x7f1f23ed53e0);
Obj v0x7f1f23ed5440 = PRIM_EQ(Nil, v0x7f1f23ed5420);
if (True == v0x7f1f23ed5440) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj v0x7f1f23f58360 = makeNative(25, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23f3c080 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23f3c080) {
Obj v0x7f1f23f3c300 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23f3c320 = PRIM_EQ(symnot, v0x7f1f23f3c300);
if (True == v0x7f1f23f3c320) {
Obj v0x7f1f23f3c560 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f3c580 = PRIM_ISCONS(v0x7f1f23f3c560);
if (True == v0x7f1f23f3c580) {
Obj v0x7f1f23f3c880 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f3c8a0 = PRIM_CAR(v0x7f1f23f3c880);
Obj v0x7f1f23f3c8c0 = PRIM_EQ(True, v0x7f1f23f3c8a0);
if (True == v0x7f1f23f3c8c0) {
Obj v0x7f1f23f3cc00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f3cc60 = PRIM_CDR(v0x7f1f23f3cc00);
Obj v0x7f1f23f3cc80 = PRIM_EQ(Nil, v0x7f1f23f3cc60);
if (True == v0x7f1f23f3cc80) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj v0x7f1f23f58520 = makeNative(26, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23f49f20 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23f49f20) {
Obj v0x7f1f23f43140 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23f43160 = PRIM_EQ(symnot, v0x7f1f23f43140);
if (True == v0x7f1f23f43160) {
Obj v0x7f1f23f43340 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f43360 = PRIM_ISCONS(v0x7f1f23f43340);
if (True == v0x7f1f23f43360) {
Obj v0x7f1f23f436e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f43700 = PRIM_CAR(v0x7f1f23f436e0);
Obj v0x7f1f23f43720 = PRIM_EQ(False, v0x7f1f23f43700);
if (True == v0x7f1f23f43720) {
Obj v0x7f1f23f43a60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f43a80 = PRIM_CDR(v0x7f1f23f43a60);
Obj v0x7f1f23f43aa0 = PRIM_EQ(Nil, v0x7f1f23f43a80);
if (True == v0x7f1f23f43aa0) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f58520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj v0x7f1f23f586e0 = makeNative(27, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23f5c460 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23f5c460) {
Obj v0x7f1f23f5c780 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23f5c840 = PRIM_EQ(symif, v0x7f1f23f5c780);
if (True == v0x7f1f23f5c840) {
Obj v0x7f1f23f5cb00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f5cb40 = PRIM_ISCONS(v0x7f1f23f5cb00);
if (True == v0x7f1f23f5cb40) {
Obj v0x7f1f23f58020 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f580a0 = PRIM_CAR(v0x7f1f23f58020);
Obj v0x7f1f23f580c0 = PRIM_EQ(True, v0x7f1f23f580a0);
if (True == v0x7f1f23f580c0) {
Obj v0x7f1f23f58460 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f58480 = PRIM_CDR(v0x7f1f23f58460);
Obj v0x7f1f23f584a0 = PRIM_ISCONS(v0x7f1f23f58480);
if (True == v0x7f1f23f584a0) {
Obj v0x7f1f23f58860 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f58880 = PRIM_CDR(v0x7f1f23f58860);
Obj v0x7f1f23f588a0 = PRIM_CAR(v0x7f1f23f58880);
Obj y = v0x7f1f23f588a0;
Obj v0x7f1f23f58d60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f58d80 = PRIM_CDR(v0x7f1f23f58d60);
Obj v0x7f1f23f58da0 = PRIM_CDR(v0x7f1f23f58d80);
Obj v0x7f1f23f58dc0 = PRIM_ISCONS(v0x7f1f23f58da0);
if (True == v0x7f1f23f58dc0) {
Obj v0x7f1f23f491c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f49240 = PRIM_CDR(v0x7f1f23f491c0);
Obj v0x7f1f23f49260 = PRIM_CDR(v0x7f1f23f49240);
Obj v0x7f1f23f49280 = PRIM_CAR(v0x7f1f23f49260);
Obj z = v0x7f1f23f49280;
Obj v0x7f1f23f497a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f497c0 = PRIM_CDR(v0x7f1f23f497a0);
Obj v0x7f1f23f497e0 = PRIM_CDR(v0x7f1f23f497c0);
Obj v0x7f1f23f49800 = PRIM_CDR(v0x7f1f23f497e0);
Obj v0x7f1f23f49820 = PRIM_EQ(Nil, v0x7f1f23f49800);
if (True == v0x7f1f23f49820) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f586e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f586e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f586e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f586e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f586e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f586e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f586e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj v0x7f1f23f589a0 = makeNative(28, clofun1, 0, 1, closureRef(co, 0));
Obj v0x7f1f23e967a0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23e967a0) {
Obj v0x7f1f23e96960 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23e96980 = PRIM_EQ(symif, v0x7f1f23e96960);
if (True == v0x7f1f23e96980) {
Obj v0x7f1f23e96b20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e96b40 = PRIM_ISCONS(v0x7f1f23e96b20);
if (True == v0x7f1f23e96b40) {
Obj v0x7f1f23e96da0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e96dc0 = PRIM_CAR(v0x7f1f23e96da0);
Obj v0x7f1f23e96de0 = PRIM_EQ(False, v0x7f1f23e96dc0);
if (True == v0x7f1f23e96de0) {
Obj v0x7f1f23e90020 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e90040 = PRIM_CDR(v0x7f1f23e90020);
Obj v0x7f1f23e90060 = PRIM_ISCONS(v0x7f1f23e90040);
if (True == v0x7f1f23e90060) {
Obj v0x7f1f23e902a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e902c0 = PRIM_CDR(v0x7f1f23e902a0);
Obj v0x7f1f23e902e0 = PRIM_CAR(v0x7f1f23e902c0);
Obj y = v0x7f1f23e902e0;
Obj v0x7f1f23e905c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e905e0 = PRIM_CDR(v0x7f1f23e905c0);
Obj v0x7f1f23e90600 = PRIM_CDR(v0x7f1f23e905e0);
Obj v0x7f1f23e90620 = PRIM_ISCONS(v0x7f1f23e90600);
if (True == v0x7f1f23e90620) {
Obj v0x7f1f23e90900 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e90920 = PRIM_CDR(v0x7f1f23e90900);
Obj v0x7f1f23e90940 = PRIM_CDR(v0x7f1f23e90920);
Obj v0x7f1f23e90960 = PRIM_CAR(v0x7f1f23e90940);
Obj z = v0x7f1f23e90960;
Obj v0x7f1f23e90d00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23e90d20 = PRIM_CDR(v0x7f1f23e90d00);
Obj v0x7f1f23e90d40 = PRIM_CDR(v0x7f1f23e90d20);
Obj v0x7f1f23e90d60 = PRIM_CDR(v0x7f1f23e90d40);
Obj v0x7f1f23e90d80 = PRIM_EQ(Nil, v0x7f1f23e90d60);
if (True == v0x7f1f23e90d80) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f589a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f589a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f589a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f589a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f589a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f589a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f589a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj v0x7f1f23f58c60 = makeNative(29, clofun1, 0, 0);
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
Obj v0x7f1f23e9bfe0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 32, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35extract_45rules);
__arg1 = v0x7f1f23e9bfe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj v0x7f1f23e9a000 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = v0x7f1f23e9a000;
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
Obj v0x7f1f23e9a100 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = v0x7f1f23e9a100;
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
Obj v0x7f1f23e9a200 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = v0x7f1f23e9a200;
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
Obj v0x7f1f23e9a500 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23e9a920 = makeCons(symlist, args);
Obj v0x7f1f23e9a980 = makeCons(v0x7f1f23e9a920, body);
Obj v0x7f1f23e9a9a0 = makeCons(symmatch, v0x7f1f23e9a980);
Obj v0x7f1f23e9aa00 = makeCons(v0x7f1f23e9a9a0, Nil);
Obj v0x7f1f23e9aa20 = makeCons(args, v0x7f1f23e9aa00);
Obj v0x7f1f23e9aa40 = makeCons(v0x7f1f23e9a500, v0x7f1f23e9aa20);
Obj v0x7f1f23e9aa60 = makeCons(symdefun, v0x7f1f23e9aa40);
__nargs = 2;
__arg1 = v0x7f1f23e9aa60;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj n = __arg1;
Obj v0x7f1f23e9b8e0 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == v0x7f1f23e9b8e0) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23e9ba60 = primGenSym(symp);
Obj v0x7f1f23e9bc40 = PRIM_SUB(n, MAKE_NUMBER(1));
pushCont(co, 37, clofun1, 1, v0x7f1f23e9ba60);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35gen_45paramenters);
__arg1 = v0x7f1f23e9bc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj v0x7f1f23e9bc60 = __arg1;
Obj v0x7f1f23e9ba60= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23e9bc80 = makeCons(v0x7f1f23e9ba60, v0x7f1f23e9bc60);
__nargs = 2;
__arg1 = v0x7f1f23e9bc80;
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
Obj v0x7f1f23eb1940 = __arg1;
Obj pats = v0x7f1f23eb1940;
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
Obj v0x7f1f23eb1d00 = __arg1;
Obj counts = v0x7f1f23eb1d00;
Obj v0x7f1f23eb1ec0 = PRIM_CAR(counts);
Obj n = v0x7f1f23eb1ec0;
Obj dif = makeNative(43, clofun1, 1, 1, n);
Obj v0x7f1f23e9b520 = PRIM_CDR(counts);
pushCont(co, 41, clofun1, 1, n);
__nargs = 3;
__arg0 = globalRef(symfilter);
__arg1 = dif;
__arg2 = v0x7f1f23e9b520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj v0x7f1f23e9b540 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 42, clofun1, 1, n);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = v0x7f1f23e9b540;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj v0x7f1f23e9b560 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23e9b580 = primNot(v0x7f1f23e9b560);
if (True == v0x7f1f23e9b580) {
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
Obj v0x7f1f23e9b120 = PRIM_EQ(closureRef(co, 0), x);
Obj v0x7f1f23e9b140 = primNot(v0x7f1f23e9b120);
__nargs = 2;
__arg1 = v0x7f1f23e9b140;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label44:
{
Obj x = __arg1;
Obj v0x7f1f23eb1b40 = PRIM_CDR(x);
__nargs = 2;
__arg0 = globalRef(symlength);
__arg1 = v0x7f1f23eb1b40;
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
Obj v0x7f1f23eb11e0 = PRIM_EQ(l1, Nil);
if (True == v0x7f1f23eb11e0) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23eb1380 = PRIM_CAR(l1);
Obj v0x7f1f23eb15c0 = PRIM_CDR(l1);
pushCont(co, 46, clofun1, 1, v0x7f1f23eb1380);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = v0x7f1f23eb15c0;
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
Obj v0x7f1f23eb1600 = __arg1;
Obj v0x7f1f23eb1380= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23eb1620 = makeCons(v0x7f1f23eb1380, v0x7f1f23eb1600);
__nargs = 2;
__arg1 = v0x7f1f23eb1620;
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
Obj v0x7f1f23ecc1a0 = PRIM_ISCONS(l);
if (True == v0x7f1f23ecc1a0) {
Obj v0x7f1f23ecc3c0 = PRIM_CAR(l);
pushCont(co, 49, clofun1, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = v0x7f1f23ecc3c0;
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
Obj v0x7f1f23ecc3e0 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == v0x7f1f23ecc3e0) {
Obj v0x7f1f23ecc6c0 = PRIM_CAR(l);
Obj v0x7f1f23ecc720 = makeCons(v0x7f1f23ecc6c0, res);
Obj v0x7f1f23ecc840 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = v0x7f1f23ecc720;
__arg2 = fn;
__arg3 = v0x7f1f23ecc840;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f1f23eccb00 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = res;
__arg2 = fn;
__arg3 = v0x7f1f23eccb00;
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
Obj v0x7f1f23ed5860 = PRIM_EQ(l, Nil);
if (True == v0x7f1f23ed5860) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23ed5a20 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj v0x7f1f23ed5bc0 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35length_45h);
__arg1 = v0x7f1f23ed5a20;
__arg2 = v0x7f1f23ed5bc0;
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
Obj v0x7f1f23eddf80 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f1f23eddf80) {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f1f23ed5300 = PRIM_CAR(rules);
Obj v0x7f1f23ed5340 = makeCons(v0x7f1f23ed5300, res);
pushCont(co, 4, clofun2, 1, v0x7f1f23ed5340);
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
Obj v0x7f1f23ed5460 = __arg1;
Obj v0x7f1f23ed5340= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rules_45patterns);
__arg1 = v0x7f1f23ed5340;
__arg2 = v0x7f1f23ed5460;
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
Obj v0x7f1f23f5c080 = makeNative(7, clofun2, 0, 3, input, current, result);
Obj v0x7f1f23edd800 = PRIM_EQ(Nil, input);
if (True == v0x7f1f23edd800) {
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
__arg0 = v0x7f1f23f5c080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj v0x7f1f23f5c0e0 = makeNative(9, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj v0x7f1f23f3c9c0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23f3c9c0) {
Obj v0x7f1f23f3cc20 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23f3cc40 = PRIM_EQ(sym_61_62, v0x7f1f23f3cc20);
if (True == v0x7f1f23f3cc40) {
Obj v0x7f1f23f3cea0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f3cec0 = PRIM_ISCONS(v0x7f1f23f3cea0);
if (True == v0x7f1f23f3cec0) {
Obj v0x7f1f23efe140 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23efe160 = PRIM_CAR(v0x7f1f23efe140);
Obj act = v0x7f1f23efe160;
Obj v0x7f1f23efe4a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23efe4c0 = PRIM_CDR(v0x7f1f23efe4a0);
Obj v0x7f1f23efe4e0 = PRIM_ISCONS(v0x7f1f23efe4c0);
if (True == v0x7f1f23efe4e0) {
Obj v0x7f1f23efe8e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23efe900 = PRIM_CDR(v0x7f1f23efe8e0);
Obj v0x7f1f23efe920 = PRIM_CAR(v0x7f1f23efe900);
Obj v0x7f1f23efe940 = PRIM_EQ(symwhere, v0x7f1f23efe920);
if (True == v0x7f1f23efe940) {
Obj v0x7f1f23efeca0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23efecc0 = PRIM_CDR(v0x7f1f23efeca0);
Obj v0x7f1f23efece0 = PRIM_CDR(v0x7f1f23efecc0);
Obj v0x7f1f23efed00 = PRIM_ISCONS(v0x7f1f23efece0);
if (True == v0x7f1f23efed00) {
Obj v0x7f1f23ef8400 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23ef8420 = PRIM_CDR(v0x7f1f23ef8400);
Obj v0x7f1f23ef8440 = PRIM_CDR(v0x7f1f23ef8420);
Obj v0x7f1f23ef8460 = PRIM_CAR(v0x7f1f23ef8440);
Obj pred = v0x7f1f23ef8460;
Obj v0x7f1f23ef88e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23ef8900 = PRIM_CDR(v0x7f1f23ef88e0);
Obj v0x7f1f23ef8920 = PRIM_CDR(v0x7f1f23ef8900);
Obj v0x7f1f23ef8940 = PRIM_CDR(v0x7f1f23ef8920);
Obj remain = v0x7f1f23ef8940;
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
__arg0 = v0x7f1f23f5c0e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c0e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c0e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c0e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c0e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c0e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj v0x7f1f23ef8b80 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f1f23ef8bc0 = makeCons(symlist, v0x7f1f23ef8b80);
Obj pat = v0x7f1f23ef8bc0;
Obj v0x7f1f23edd020 = makeCons(act, Nil);
Obj v0x7f1f23edd040 = makeCons(pred, v0x7f1f23edd020);
Obj v0x7f1f23edd060 = makeCons(symwhere, v0x7f1f23edd040);
Obj v0x7f1f23edd180 = makeCons(pat, closureRef(co, 2));
Obj v0x7f1f23edd1a0 = makeCons(v0x7f1f23edd060, v0x7f1f23edd180);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = v0x7f1f23edd1a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj v0x7f1f23f5c300 = makeNative(11, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj v0x7f1f23f437e0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23f437e0) {
Obj v0x7f1f23f43a00 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23f43a40 = PRIM_EQ(sym_61_62, v0x7f1f23f43a00);
if (True == v0x7f1f23f43a40) {
Obj v0x7f1f23f43cc0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f43ce0 = PRIM_ISCONS(v0x7f1f23f43cc0);
if (True == v0x7f1f23f43ce0) {
Obj v0x7f1f23f43f60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f43f80 = PRIM_CAR(v0x7f1f23f43f60);
Obj act = v0x7f1f23f43f80;
Obj v0x7f1f23f3c180 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f1f23f3c1a0 = PRIM_CDR(v0x7f1f23f3c180);
Obj remain = v0x7f1f23f3c1a0;
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
__arg0 = v0x7f1f23f5c300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj v0x7f1f23f3c3a0 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23f3c3e0 = makeCons(symlist, v0x7f1f23f3c3a0);
Obj pat = v0x7f1f23f3c3e0;
Obj v0x7f1f23f3c700 = makeCons(pat, closureRef(co, 2));
Obj v0x7f1f23f3c720 = makeCons(act, v0x7f1f23f3c700);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = v0x7f1f23f3c720;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj v0x7f1f23f5c440 = makeNative(12, clofun2, 0, 0);
Obj v0x7f1f23f431c0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23f431c0) {
Obj v0x7f1f23f432c0 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f1f23f432c0;
Obj v0x7f1f23f43440 = PRIM_CDR(closureRef(co, 0));
Obj y = v0x7f1f23f43440;
Obj v0x7f1f23f43620 = makeCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = y;
__arg2 = v0x7f1f23f43620;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f1f23f5c440;
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
Obj v0x7f1f23f5c700 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 16, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = v0x7f1f23f5c700;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj v0x7f1f23f5c720 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = v0x7f1f23f5c720;
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
Obj v0x7f1f23f5c900 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = v0x7f1f23f5c900;
Obj v0x7f1f23f5cb20 = PRIM_ISCONS(value);
if (True == v0x7f1f23f5cb20) {
Obj v0x7f1f23f5cf80 = PRIM_CAR(value);
Obj v0x7f1f23f5cfa0 = PRIM_EQ(symcons, v0x7f1f23f5cf80);
Obj v0x7f1f23f5cfe0 = primNot(v0x7f1f23f5cfa0);
if (True == v0x7f1f23f5cfe0) {
if (True == True) {
Obj v0x7f1f23f58140 = primGenSym(symval);
Obj val = v0x7f1f23f58140;
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
Obj v0x7f1f23f58a80 = primGenSym(symval);
Obj val = v0x7f1f23f58a80;
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
Obj v0x7f1f23f49220 = primGenSym(symval);
Obj val = v0x7f1f23f49220;
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
Obj v0x7f1f23f496c0 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23f49700 = makeCons(v0x7f1f23f496c0, Nil);
Obj v0x7f1f23f49720 = makeCons(value, v0x7f1f23f49700);
Obj v0x7f1f23f49740 = makeCons(val, v0x7f1f23f49720);
Obj v0x7f1f23f49760 = makeCons(symlet, v0x7f1f23f49740);
__nargs = 2;
__arg1 = v0x7f1f23f49760;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj v0x7f1f23f58f40 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23f58f80 = makeCons(v0x7f1f23f58f40, Nil);
Obj v0x7f1f23f58fa0 = makeCons(value, v0x7f1f23f58f80);
Obj v0x7f1f23f58fc0 = makeCons(val, v0x7f1f23f58fa0);
Obj v0x7f1f23f58fe0 = makeCons(symlet, v0x7f1f23f58fc0);
__nargs = 2;
__arg1 = v0x7f1f23f58fe0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj v0x7f1f23f586c0 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23f58720 = makeCons(v0x7f1f23f586c0, Nil);
Obj v0x7f1f23f58760 = makeCons(value, v0x7f1f23f58720);
Obj v0x7f1f23f58780 = makeCons(val, v0x7f1f23f58760);
Obj v0x7f1f23f587a0 = makeCons(symlet, v0x7f1f23f58780);
__nargs = 2;
__arg1 = v0x7f1f23f587a0;
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
Obj v0x7f1f23ecc820 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f1f23ecc820) {
Obj v0x7f1f23eccaa0 = makeCons(makeCString("no match-help found!"), Nil);
Obj v0x7f1f23eccac0 = makeCons(symerror, v0x7f1f23eccaa0);
__nargs = 2;
__arg1 = v0x7f1f23eccac0;
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
Obj v0x7f1f23eccc00 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f1f23eccc00) {
Obj v0x7f1f23eccdc0 = PRIM_CDR(rules);
pushCont(co, 28, clofun2, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = v0x7f1f23eccdc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj v0x7f1f23e9a5a0 = PRIM_CAR(rules);
Obj pat = v0x7f1f23e9a5a0;
Obj v0x7f1f23e9a6a0 = primGenSym(symcc);
Obj cc = v0x7f1f23e9a6a0;
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
Obj v0x7f1f23e9a7c0 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = v0x7f1f23e9a7c0;
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
Obj v0x7f1f23e9a960 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 26, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = v0x7f1f23e9a960;
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
Obj v0x7f1f23e9a9e0 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = v0x7f1f23e9a9e0;
Obj v0x7f1f23e9ac40 = PRIM_CDR(rules);
Obj v0x7f1f23e9ac60 = PRIM_CDR(v0x7f1f23e9ac40);
pushCont(co, 27, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = v0x7f1f23e9ac60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj v0x7f1f23e9ac80 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = v0x7f1f23e9ac80;
Obj v0x7f1f23e96100 = makeCons(rest, Nil);
Obj v0x7f1f23e96120 = makeCons(Nil, v0x7f1f23e96100);
Obj v0x7f1f23e96140 = makeCons(symlambda, v0x7f1f23e96120);
Obj v0x7f1f23e96240 = makeCons(curr, Nil);
Obj v0x7f1f23e96260 = makeCons(v0x7f1f23e96140, v0x7f1f23e96240);
Obj v0x7f1f23e96280 = makeCons(cc, v0x7f1f23e96260);
Obj v0x7f1f23e962a0 = makeCons(symlet, v0x7f1f23e96280);
__nargs = 2;
__arg1 = v0x7f1f23e962a0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj v0x7f1f23eccde0 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f1f23eccde0) {
if (True == True) {
Obj v0x7f1f23eccf20 = PRIM_CAR(rules);
Obj pat = v0x7f1f23eccf20;
Obj v0x7f1f23eb1060 = primGenSym(symcc);
Obj cc = v0x7f1f23eb1060;
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
Obj v0x7f1f23eb1fe0 = PRIM_CAR(rules);
Obj pat = v0x7f1f23eb1fe0;
Obj v0x7f1f23e9b0e0 = primGenSym(symcc);
Obj cc = v0x7f1f23e9b0e0;
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
Obj v0x7f1f23e9b220 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = v0x7f1f23e9b220;
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
Obj v0x7f1f23e9bac0 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 31, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = v0x7f1f23e9bac0;
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
Obj v0x7f1f23e9bb40 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = v0x7f1f23e9bb40;
Obj v0x7f1f23e9bda0 = PRIM_CDR(rules);
Obj v0x7f1f23e9bdc0 = PRIM_CDR(v0x7f1f23e9bda0);
pushCont(co, 32, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = v0x7f1f23e9bdc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj v0x7f1f23e9bde0 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = v0x7f1f23e9bde0;
Obj v0x7f1f23e9a260 = makeCons(rest, Nil);
Obj v0x7f1f23e9a280 = makeCons(Nil, v0x7f1f23e9a260);
Obj v0x7f1f23e9a2a0 = makeCons(symlambda, v0x7f1f23e9a280);
Obj v0x7f1f23e9a3a0 = makeCons(curr, Nil);
Obj v0x7f1f23e9a3c0 = makeCons(v0x7f1f23e9a2a0, v0x7f1f23e9a3a0);
Obj v0x7f1f23e9a3e0 = makeCons(cc, v0x7f1f23e9a3c0);
Obj v0x7f1f23e9a400 = makeCons(symlet, v0x7f1f23e9a3e0);
__nargs = 2;
__arg1 = v0x7f1f23e9a400;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label33:
{
Obj v0x7f1f23eb11a0 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = v0x7f1f23eb11a0;
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
Obj v0x7f1f23eb1340 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 35, clofun2, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = v0x7f1f23eb1340;
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
Obj v0x7f1f23eb13e0 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = v0x7f1f23eb13e0;
Obj v0x7f1f23eb16e0 = PRIM_CDR(rules);
Obj v0x7f1f23eb1700 = PRIM_CDR(v0x7f1f23eb16e0);
pushCont(co, 36, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = v0x7f1f23eb1700;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj v0x7f1f23eb1720 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = v0x7f1f23eb1720;
Obj v0x7f1f23eb1c00 = makeCons(rest, Nil);
Obj v0x7f1f23eb1c20 = makeCons(Nil, v0x7f1f23eb1c00);
Obj v0x7f1f23eb1c40 = makeCons(symlambda, v0x7f1f23eb1c20);
Obj v0x7f1f23eb1d80 = makeCons(curr, Nil);
Obj v0x7f1f23eb1da0 = makeCons(v0x7f1f23eb1c40, v0x7f1f23eb1d80);
Obj v0x7f1f23eb1dc0 = makeCons(cc, v0x7f1f23eb1da0);
Obj v0x7f1f23eb1de0 = makeCons(symlet, v0x7f1f23eb1dc0);
__nargs = 2;
__arg1 = v0x7f1f23eb1de0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj v0x7f1f23eddce0 = PRIM_CDR(rules);
Obj v0x7f1f23eddd00 = PRIM_CAR(v0x7f1f23eddce0);
Obj action = v0x7f1f23eddd00;
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
Obj v0x7f1f23edde40 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f1f23edde40) {
Obj v0x7f1f23ed5080 = PRIM_CAR(action);
Obj v0x7f1f23ed50c0 = PRIM_EQ(v0x7f1f23ed5080, symwhere);
if (True == v0x7f1f23ed50c0) {
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
Obj v0x7f1f23ecc160 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 40, clofun2, 2, cc, v0x7f1f23ecc160);
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
Obj v0x7f1f23ecc320 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23ecc160= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23ecc4e0 = makeCons(cc, Nil);
Obj v0x7f1f23ecc520 = makeCons(v0x7f1f23ecc4e0, Nil);
Obj v0x7f1f23ecc540 = makeCons(v0x7f1f23ecc320, v0x7f1f23ecc520);
Obj v0x7f1f23ecc560 = makeCons(v0x7f1f23ecc160, v0x7f1f23ecc540);
Obj v0x7f1f23ecc5a0 = makeCons(symif, v0x7f1f23ecc560);
__nargs = 2;
__arg1 = v0x7f1f23ecc5a0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj v0x7f1f23ed5b00 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 42, clofun2, 2, cc, v0x7f1f23ed5b00);
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
Obj v0x7f1f23ed5c80 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23ed5b00= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23ed5e60 = makeCons(cc, Nil);
Obj v0x7f1f23ed5ea0 = makeCons(v0x7f1f23ed5e60, Nil);
Obj v0x7f1f23ed5ec0 = makeCons(v0x7f1f23ed5c80, v0x7f1f23ed5ea0);
Obj v0x7f1f23ed5ee0 = makeCons(v0x7f1f23ed5b00, v0x7f1f23ed5ec0);
Obj v0x7f1f23ed5f00 = makeCons(symif, v0x7f1f23ed5ee0);
__nargs = 2;
__arg1 = v0x7f1f23ed5f00;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj v0x7f1f23ed5360 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun2, 2, cc, v0x7f1f23ed5360);
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
Obj v0x7f1f23ed5560 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23ed5360= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23ed5700 = makeCons(cc, Nil);
Obj v0x7f1f23ed5740 = makeCons(v0x7f1f23ed5700, Nil);
Obj v0x7f1f23ed5760 = makeCons(v0x7f1f23ed5560, v0x7f1f23ed5740);
Obj v0x7f1f23ed57e0 = makeCons(v0x7f1f23ed5360, v0x7f1f23ed5760);
Obj v0x7f1f23ed5800 = makeCons(symif, v0x7f1f23ed57e0);
__nargs = 2;
__arg1 = v0x7f1f23ed5800;
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
Obj v0x7f1f23efe700 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == v0x7f1f23efe700) {
Obj v0x7f1f23efe820 = PRIM_EQ(pat, expr);
if (True == v0x7f1f23efe820) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23efec40 = makeCons(expr, Nil);
Obj v0x7f1f23efec60 = makeCons(pat, v0x7f1f23efec40);
Obj v0x7f1f23efec80 = makeCons(sym_61, v0x7f1f23efec60);
Obj v0x7f1f23ef8200 = makeCons(cc, Nil);
Obj v0x7f1f23ef8280 = makeCons(v0x7f1f23ef8200, Nil);
Obj v0x7f1f23ef82a0 = makeCons(body, v0x7f1f23ef8280);
Obj v0x7f1f23ef82c0 = makeCons(v0x7f1f23efec80, v0x7f1f23ef82a0);
Obj v0x7f1f23ef82e0 = makeCons(symif, v0x7f1f23ef82c0);
__nargs = 2;
__arg1 = v0x7f1f23ef82e0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj v0x7f1f23ef83e0 = primIsSymbol(pat);
if (True == v0x7f1f23ef83e0) {
Obj v0x7f1f23ef8820 = makeCons(body, Nil);
Obj v0x7f1f23ef8840 = makeCons(expr, v0x7f1f23ef8820);
Obj v0x7f1f23ef8860 = makeCons(pat, v0x7f1f23ef8840);
Obj v0x7f1f23ef8880 = makeCons(symlet, v0x7f1f23ef8860);
__nargs = 2;
__arg1 = v0x7f1f23ef8880;
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
Obj v0x7f1f23ef8980 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == v0x7f1f23ef8980) {
Obj v0x7f1f23ef8b60 = PRIM_CAR(pat);
Obj v0x7f1f23ef8ba0 = PRIM_EQ(v0x7f1f23ef8b60, symquote);
if (True == v0x7f1f23ef8ba0) {
Obj v0x7f1f23ef8f80 = makeCons(expr, Nil);
Obj v0x7f1f23ef8fa0 = makeCons(pat, v0x7f1f23ef8f80);
Obj v0x7f1f23ef8fc0 = makeCons(sym_61, v0x7f1f23ef8fa0);
Obj v0x7f1f23edd260 = makeCons(cc, Nil);
Obj v0x7f1f23edd380 = makeCons(v0x7f1f23edd260, Nil);
Obj v0x7f1f23edd3a0 = makeCons(body, v0x7f1f23edd380);
Obj v0x7f1f23edd3c0 = makeCons(v0x7f1f23ef8fc0, v0x7f1f23edd3a0);
Obj v0x7f1f23edd3e0 = makeCons(symif, v0x7f1f23edd3c0);
__nargs = 2;
__arg1 = v0x7f1f23edd3e0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23edd580 = PRIM_CAR(pat);
Obj v0x7f1f23edd5e0 = PRIM_EQ(v0x7f1f23edd580, symcons);
if (True == v0x7f1f23edd5e0) {
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
Obj v0x7f1f23edd980 = __arg1;
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = v0x7f1f23edd980;
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
Obj v0x7f1f23efe3c0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == v0x7f1f23efe3c0) {
Obj v0x7f1f23efe5a0 = primIsSymbol(x);
Obj v0x7f1f23efe5c0 = primNot(v0x7f1f23efe5a0);
if (True == v0x7f1f23efe5c0) {
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
Obj v0x7f1f23f58560 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = v0x7f1f23f58560;
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
Obj v0x7f1f23f58660 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = v0x7f1f23f58660;
Obj v0x7f1f23f587e0 = PRIM_ISCONS(expr);
if (True == v0x7f1f23f587e0) {
Obj v0x7f1f23f58a60 = PRIM_CAR(expr);
Obj v0x7f1f23f58aa0 = PRIM_EQ(v0x7f1f23f58a60, symcons);
if (True == v0x7f1f23f58aa0) {
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
Obj v0x7f1f23f492c0 = makeCons(expr, Nil);
Obj v0x7f1f23f492e0 = makeCons(symcons_63, v0x7f1f23f492c0);
Obj v0x7f1f23f49660 = makeCons(expr, Nil);
Obj v0x7f1f23f49680 = makeCons(symcar, v0x7f1f23f49660);
Obj v0x7f1f23f49960 = makeCons(expr, Nil);
Obj v0x7f1f23f49980 = makeCons(symcdr, v0x7f1f23f49960);
pushCont(co, 14, clofun3, 4, x, v0x7f1f23f49680, cc, v0x7f1f23f492e0);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = v0x7f1f23f49980;
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
Obj v0x7f1f23f434c0 = makeCons(expr, Nil);
Obj v0x7f1f23f434e0 = makeCons(symcons_63, v0x7f1f23f434c0);
Obj v0x7f1f23f43820 = makeCons(expr, Nil);
Obj v0x7f1f23f43840 = makeCons(symcar, v0x7f1f23f43820);
Obj v0x7f1f23f43b40 = makeCons(expr, Nil);
Obj v0x7f1f23f43b60 = makeCons(symcdr, v0x7f1f23f43b40);
pushCont(co, 9, clofun3, 4, x, v0x7f1f23f43840, cc, v0x7f1f23f434e0);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = v0x7f1f23f43b60;
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
Obj v0x7f1f23f3c660 = makeCons(expr, Nil);
Obj v0x7f1f23f3c680 = makeCons(symcons_63, v0x7f1f23f3c660);
Obj v0x7f1f23f3c9e0 = makeCons(expr, Nil);
Obj v0x7f1f23f3ca00 = makeCons(symcar, v0x7f1f23f3c9e0);
Obj v0x7f1f23f3cce0 = makeCons(expr, Nil);
Obj v0x7f1f23f3cd00 = makeCons(symcdr, v0x7f1f23f3cce0);
pushCont(co, 4, clofun3, 4, x, v0x7f1f23f3ca00, cc, v0x7f1f23f3c680);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = v0x7f1f23f3cd00;
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
Obj v0x7f1f23f3cd80 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23f3ca00= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f1f23f3c680= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 5, clofun3, 2, cc, v0x7f1f23f3c680);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = v0x7f1f23f3ca00;
__arg3 = v0x7f1f23f3cd80;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj v0x7f1f23f3cde0 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23f3c680= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23f3cf80 = makeCons(cc, Nil);
Obj v0x7f1f23f3cfe0 = makeCons(v0x7f1f23f3cf80, Nil);
Obj v0x7f1f23efe000 = makeCons(v0x7f1f23f3cde0, v0x7f1f23f3cfe0);
Obj v0x7f1f23efe020 = makeCons(v0x7f1f23f3c680, v0x7f1f23efe000);
Obj v0x7f1f23efe040 = makeCons(symif, v0x7f1f23efe020);
__nargs = 2;
__arg1 = v0x7f1f23efe040;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj v0x7f1f23f43fa0 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = v0x7f1f23f43fa0;
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
Obj v0x7f1f23f3c0a0 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = v0x7f1f23f3c0a0;
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
Obj v0x7f1f23f3c2e0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = v0x7f1f23f3c2e0;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj v0x7f1f23f43bc0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23f43840= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f1f23f434e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 10, clofun3, 2, cc, v0x7f1f23f434e0);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = v0x7f1f23f43840;
__arg3 = v0x7f1f23f43bc0;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj v0x7f1f23f43c00 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23f434e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23f43dc0 = makeCons(cc, Nil);
Obj v0x7f1f23f43e20 = makeCons(v0x7f1f23f43dc0, Nil);
Obj v0x7f1f23f43e40 = makeCons(v0x7f1f23f43c00, v0x7f1f23f43e20);
Obj v0x7f1f23f43e60 = makeCons(v0x7f1f23f434e0, v0x7f1f23f43e40);
Obj v0x7f1f23f43e80 = makeCons(symif, v0x7f1f23f43e60);
__nargs = 2;
__arg1 = v0x7f1f23f43e80;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj v0x7f1f23f49dc0 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = v0x7f1f23f49dc0;
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
Obj v0x7f1f23f49ee0 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = v0x7f1f23f49ee0;
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
Obj v0x7f1f23f43120 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = v0x7f1f23f43120;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj v0x7f1f23f499e0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23f49680= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f1f23f492e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 15, clofun3, 2, cc, v0x7f1f23f492e0);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = v0x7f1f23f49680;
__arg3 = v0x7f1f23f499e0;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj v0x7f1f23f49a40 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23f492e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23f49c00 = makeCons(cc, Nil);
Obj v0x7f1f23f49c40 = makeCons(v0x7f1f23f49c00, Nil);
Obj v0x7f1f23f49c60 = makeCons(v0x7f1f23f49a40, v0x7f1f23f49c40);
Obj v0x7f1f23f49c80 = makeCons(v0x7f1f23f492e0, v0x7f1f23f49c60);
Obj v0x7f1f23f49ca0 = makeCons(symif, v0x7f1f23f49c80);
__nargs = 2;
__arg1 = v0x7f1f23f49ca0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj v0x7f1f23f58ba0 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = v0x7f1f23f58ba0;
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
Obj v0x7f1f23f58d00 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = v0x7f1f23f58d00;
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
Obj v0x7f1f23f58f20 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = v0x7f1f23f58f20;
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
Obj v0x7f1f23f58260 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = v0x7f1f23f58260;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj pat = __arg1;
Obj v0x7f1f23f5c580 = PRIM_CDR(pat);
pushCont(co, 21, clofun3, 1, pat);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = v0x7f1f23f5c580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj v0x7f1f23f5c5c0 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == v0x7f1f23f5c5c0) {
Obj v0x7f1f23f5c6a0 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = v0x7f1f23f5c6a0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23f5c9e0 = PRIM_CAR(pat);
Obj v0x7f1f23f5cd00 = PRIM_CDR(pat);
pushCont(co, 22, clofun3, 1, v0x7f1f23f5c9e0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = v0x7f1f23f5cd00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj v0x7f1f23f5cd20 = __arg1;
Obj v0x7f1f23f5c9e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23f5ce00 = makeCons(v0x7f1f23f5cd20, Nil);
Obj v0x7f1f23f5ce20 = makeCons(v0x7f1f23f5c9e0, v0x7f1f23f5ce00);
Obj v0x7f1f23f5ce60 = makeCons(symcons, v0x7f1f23f5ce20);
__nargs = 2;
__arg1 = v0x7f1f23f5ce60;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x = __arg1;
Obj v0x7f1f23e9b900 = PRIM_EQ(x, True);
if (True == v0x7f1f23e9b900) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23f5c020 = PRIM_EQ(x, False);
if (True == v0x7f1f23f5c020) {
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
Obj v0x7f1f23e9b680 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = v0x7f1f23e9b680;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj l = __arg1;
Obj v0x7f1f23eb1ac0 = PRIM_EQ(Nil, l);
if (True == v0x7f1f23eb1ac0) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23eb1c60 = PRIM_CAR(l);
Obj v0x7f1f23eb1ca0 = PRIM_EQ(v0x7f1f23eb1c60, False);
if (True == v0x7f1f23eb1ca0) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23eb1e40 = PRIM_CDR(l);
pushCont(co, 26, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = v0x7f1f23eb1e40;
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
Obj v0x7f1f23eb1e60 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = v0x7f1f23eb1e60;
Obj v0x7f1f23eb1f80 = PRIM_EQ(more, False);
if (True == v0x7f1f23eb1f80) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23e9b1a0 = PRIM_CAR(l);
Obj v0x7f1f23e9b360 = makeCons(False, Nil);
Obj v0x7f1f23e9b380 = makeCons(more, v0x7f1f23e9b360);
Obj v0x7f1f23e9b3a0 = makeCons(v0x7f1f23e9b1a0, v0x7f1f23e9b380);
Obj v0x7f1f23e9b3c0 = makeCons(symif, v0x7f1f23e9b3a0);
__nargs = 2;
__arg1 = v0x7f1f23e9b3c0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label27:
{
Obj exp = __arg1;
Obj v0x7f1f23eb1840 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = v0x7f1f23eb1840;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj l = __arg1;
Obj v0x7f1f23eccc80 = PRIM_EQ(l, Nil);
if (True == v0x7f1f23eccc80) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23ecce20 = PRIM_CAR(l);
Obj v0x7f1f23ecce60 = PRIM_EQ(v0x7f1f23ecce20, True);
if (True == v0x7f1f23ecce60) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23eb1000 = PRIM_CDR(l);
pushCont(co, 29, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = v0x7f1f23eb1000;
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
Obj v0x7f1f23eb1020 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = v0x7f1f23eb1020;
Obj v0x7f1f23eb1140 = PRIM_EQ(more, True);
if (True == v0x7f1f23eb1140) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23eb1360 = PRIM_CAR(l);
Obj v0x7f1f23eb1520 = makeCons(more, Nil);
Obj v0x7f1f23eb1540 = makeCons(True, v0x7f1f23eb1520);
Obj v0x7f1f23eb1560 = makeCons(v0x7f1f23eb1360, v0x7f1f23eb1540);
Obj v0x7f1f23eb1580 = makeCons(symif, v0x7f1f23eb1560);
__nargs = 2;
__arg1 = v0x7f1f23eb1580;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label30:
{
Obj exp = __arg1;
Obj v0x7f1f23ecc080 = PRIM_CDR(exp);
Obj v0x7f1f23ecc0a0 = PRIM_EQ(Nil, v0x7f1f23ecc080);
if (True == v0x7f1f23ecc0a0) {
Obj v0x7f1f23ecc240 = makeCons(makeCString("no cond match"), Nil);
Obj v0x7f1f23ecc260 = makeCons(symerror, v0x7f1f23ecc240);
__nargs = 2;
__arg1 = v0x7f1f23ecc260;
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
Obj v0x7f1f23ecc360 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = v0x7f1f23ecc360;
Obj v0x7f1f23ecc580 = PRIM_CAR(curr);
pushCont(co, 32, clofun3, 2, exp, v0x7f1f23ecc580);
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
Obj v0x7f1f23ecc700 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23ecc580= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun3, 2, v0x7f1f23ecc700, v0x7f1f23ecc580);
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
Obj v0x7f1f23ecc940 = __arg1;
Obj v0x7f1f23ecc700= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23ecc580= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23ecc960 = makeCons(symcond, v0x7f1f23ecc940);
Obj v0x7f1f23ecc9a0 = makeCons(v0x7f1f23ecc960, Nil);
Obj v0x7f1f23ecc9c0 = makeCons(v0x7f1f23ecc700, v0x7f1f23ecc9a0);
Obj v0x7f1f23ecc9e0 = makeCons(v0x7f1f23ecc580, v0x7f1f23ecc9c0);
Obj v0x7f1f23ecca00 = makeCons(symif, v0x7f1f23ecc9e0);
__nargs = 2;
__arg1 = v0x7f1f23ecca00;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj exp = __arg1;
Obj v0x7f1f23ed5d60 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = v0x7f1f23ed5d60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj exp = __arg1;
Obj v0x7f1f23eddee0 = PRIM_CDR(exp);
pushCont(co, 36, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = v0x7f1f23eddee0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj v0x7f1f23eddf40 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == v0x7f1f23eddf40) {
Obj v0x7f1f23ed5000 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = v0x7f1f23ed5000;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23ed5280 = PRIM_CAR(exp);
pushCont(co, 37, clofun3, 2, exp, v0x7f1f23ed5280);
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
Obj v0x7f1f23ed5400 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23ed5280= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 38, clofun3, 2, v0x7f1f23ed5400, v0x7f1f23ed5280);
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
Obj v0x7f1f23ed59e0 = __arg1;
Obj v0x7f1f23ed5400= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23ed5280= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun3, 2, v0x7f1f23ed5400, v0x7f1f23ed5280);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = v0x7f1f23ed59e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj v0x7f1f23ed5a00 = __arg1;
Obj v0x7f1f23ed5400= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23ed5280= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23ed5a40 = makeCons(v0x7f1f23ed5a00, Nil);
Obj v0x7f1f23ed5a60 = makeCons(v0x7f1f23ed5400, v0x7f1f23ed5a40);
Obj v0x7f1f23ed5a80 = makeCons(v0x7f1f23ed5280, v0x7f1f23ed5a60);
Obj v0x7f1f23ed5aa0 = makeCons(symlet, v0x7f1f23ed5a80);
__nargs = 2;
__arg1 = v0x7f1f23ed5aa0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj x = __arg1;
Obj v0x7f1f23eddbc0 = PRIM_ISCONS(x);
Obj v0x7f1f23eddbe0 = primNot(v0x7f1f23eddbc0);
__nargs = 2;
__arg1 = v0x7f1f23eddbe0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj x = __arg1;
Obj l = __arg2;
Obj v0x7f1f23edd5a0 = PRIM_ISCONS(l);
if (True == v0x7f1f23edd5a0) {
Obj v0x7f1f23edd740 = PRIM_CAR(l);
Obj v0x7f1f23edd780 = PRIM_EQ(v0x7f1f23edd740, x);
if (True == v0x7f1f23edd780) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23edd900 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symelem_63);
__arg1 = x;
__arg2 = v0x7f1f23edd900;
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
Obj v0x7f1f23ef8de0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 44, clofun3, 2, exp, v0x7f1f23ef8de0);
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
Obj v0x7f1f23edd0c0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23ef8de0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun3, 2, v0x7f1f23edd0c0, v0x7f1f23ef8de0);
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
Obj v0x7f1f23edd240 = __arg1;
Obj v0x7f1f23edd0c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23ef8de0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23edd280 = makeCons(v0x7f1f23edd240, Nil);
Obj v0x7f1f23edd2a0 = makeCons(v0x7f1f23edd0c0, v0x7f1f23edd280);
Obj v0x7f1f23edd2c0 = makeCons(symlambda, v0x7f1f23edd2a0);
Obj v0x7f1f23edd300 = makeCons(v0x7f1f23edd2c0, Nil);
Obj v0x7f1f23edd320 = makeCons(v0x7f1f23ef8de0, v0x7f1f23edd300);
Obj v0x7f1f23edd340 = makeCons(symdef, v0x7f1f23edd320);
__nargs = 2;
__arg1 = v0x7f1f23edd340;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label46:
{
Obj exp = __arg1;
Obj v0x7f1f23ef8a60 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = v0x7f1f23ef8a60;
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
Obj v0x7f1f23ef8160 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23ef81a0 = makeCons(v0x7f1f23ef8160, Nil);
Obj v0x7f1f23ef81c0 = makeCons(symquote, v0x7f1f23ef81a0);
pushCont(co, 49, clofun3, 2, exp, v0x7f1f23ef81c0);
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
Obj v0x7f1f23ef84e0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23ef81c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 0, clofun4, 2, v0x7f1f23ef84e0, v0x7f1f23ef81c0);
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
Obj v0x7f1f23ef85c0 = __arg1;
Obj v0x7f1f23ef84e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23ef81c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f1f23ef85e0 = makeCons(v0x7f1f23ef84e0, v0x7f1f23ef85c0);
Obj v0x7f1f23ef8600 = makeCons(symlambda, v0x7f1f23ef85e0);
Obj v0x7f1f23ef8640 = makeCons(v0x7f1f23ef8600, Nil);
Obj v0x7f1f23ef8660 = makeCons(v0x7f1f23ef81c0, v0x7f1f23ef8640);
Obj v0x7f1f23ef8680 = makeCons(symcora_47init_35add_45to_45_42macros_42, v0x7f1f23ef8660);
__nargs = 2;
__arg1 = v0x7f1f23ef8680;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj exp = __arg1;
Obj v0x7f1f23f3c920 = PRIM_ISCONS(exp);
if (True == v0x7f1f23f3c920) {
Obj v0x7f1f23f3cac0 = PRIM_CAR(exp);
Obj v0x7f1f23f3cb00 = PRIM_EQ(v0x7f1f23f3cac0, globalRef(sym_42protect_45symbol_42));
if (True == v0x7f1f23f3cb00) {
Obj v0x7f1f23f3cbc0 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = v0x7f1f23f3cbc0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23f3cd60 = PRIM_CAR(exp);
Obj v0x7f1f23f3cda0 = PRIM_EQ(v0x7f1f23f3cd60, symlambda);
if (True == v0x7f1f23f3cda0) {
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
Obj v0x7f1f23efe420 = PRIM_CAR(exp);
Obj v0x7f1f23efe460 = PRIM_EQ(v0x7f1f23efe420, symquote);
if (True == v0x7f1f23efe460) {
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
Obj v0x7f1f23efe8a0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(3, clofun4, 1, 1, exp);
__arg1 = v0x7f1f23efe8a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj exp1 = __arg1;
Obj v0x7f1f23efe660 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == v0x7f1f23efe660) {
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
Obj v0x7f1f23f3cfc0 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 5, clofun4, 1, v0x7f1f23f3cfc0);
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
Obj v0x7f1f23efe1e0 = __arg1;
Obj v0x7f1f23f3cfc0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 6, clofun4, 1, v0x7f1f23f3cfc0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = v0x7f1f23efe1e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj v0x7f1f23efe200 = __arg1;
Obj v0x7f1f23f3cfc0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23efe240 = makeCons(v0x7f1f23efe200, Nil);
Obj v0x7f1f23efe260 = makeCons(v0x7f1f23f3cfc0, v0x7f1f23efe240);
Obj v0x7f1f23efe280 = makeCons(symlambda, v0x7f1f23efe260);
__nargs = 2;
__arg1 = v0x7f1f23efe280;
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
Obj v0x7f1f23f43680 = PRIM_EQ(Nil, macros);
if (True == v0x7f1f23f43680) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f1f23f3c4a0 = PRIM_CAR(macros);
__nargs = 2;
__arg0 = makeNative(9, clofun4, 1, 2, exp, macros);
__arg1 = v0x7f1f23f3c4a0;
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
Obj v0x7f1f23f43880 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f1f23f43880) {
Obj v0x7f1f23f43a20 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f1f23f43b00 = PRIM_CAR(item);
Obj v0x7f1f23f43b20 = PRIM_EQ(v0x7f1f23f43a20, v0x7f1f23f43b00);
if (True == v0x7f1f23f43b20) {
if (True == True) {
Obj v0x7f1f23f43c60 = PRIM_CDR(item);
__nargs = 2;
__arg0 = v0x7f1f23f43c60;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f1f23f43e00 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = v0x7f1f23f43e00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj v0x7f1f23f43f40 = PRIM_CDR(item);
__nargs = 2;
__arg0 = v0x7f1f23f43f40;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f1f23f3c0e0 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = v0x7f1f23f3c0e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj v0x7f1f23f3c220 = PRIM_CDR(item);
__nargs = 2;
__arg0 = v0x7f1f23f3c220;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f1f23f3c3c0 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = v0x7f1f23f3c3c0;
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
Obj v0x7f1f23f433a0 = makeCons(n, v);
Obj v0x7f1f23f433e0 = makeCons(v0x7f1f23f433a0, globalRef(sym_42macros_42));
Obj v0x7f1f23f43400 = primSet(co, sym_42macros_42, v0x7f1f23f433e0);
__nargs = 2;
__arg1 = v0x7f1f23f43400;
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
Obj v0x7f1f23f49620 = PRIM_ISCONS(l);
if (True == v0x7f1f23f49620) {
Obj v0x7f1f23f498c0 = PRIM_CAR(l);
pushCont(co, 13, clofun4, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = v0x7f1f23f498c0;
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
Obj v0x7f1f23f498e0 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f1f23f49920 = makeCons(v0x7f1f23f498e0, res);
Obj v0x7f1f23f49a20 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symmap_45h);
__arg1 = v0x7f1f23f49920;
__arg2 = f;
__arg3 = v0x7f1f23f49a20;
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
Obj v0x7f1f23f58ec0 = PRIM_ISCONS(l);
if (True == v0x7f1f23f58ec0) {
Obj v0x7f1f23f490c0 = PRIM_CAR(l);
Obj v0x7f1f23f49100 = makeCons(v0x7f1f23f490c0, res);
Obj v0x7f1f23f491e0 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35reverse_45h);
__arg1 = v0x7f1f23f49100;
__arg2 = v0x7f1f23f491e0;
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
Obj v0x7f1f23f58c40 = PRIM_ISCONS(x);
__nargs = 2;
__arg1 = v0x7f1f23f58c40;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj exp = __arg1;
Obj v0x7f1f23f584e0 = PRIM_ISCONS(exp);
if (True == v0x7f1f23f584e0) {
Obj v0x7f1f23f58740 = PRIM_CAR(exp);
Obj v0x7f1f23f58960 = PRIM_CDR(exp);
pushCont(co, 17, clofun4, 1, v0x7f1f23f58740);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = v0x7f1f23f58960;
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
Obj v0x7f1f23f58980 = __arg1;
Obj v0x7f1f23f58740= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f1f23f589e0 = makeCons(v0x7f1f23f58980, Nil);
Obj v0x7f1f23f58a00 = makeCons(v0x7f1f23f58740, v0x7f1f23f589e0);
Obj v0x7f1f23f58a20 = makeCons(symcons, v0x7f1f23f58a00);
__nargs = 2;
__arg1 = v0x7f1f23f58a20;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj x = __arg1;
Obj v0x7f1f23f581e0 = PRIM_CDR(x);
Obj v0x7f1f23f58200 = PRIM_CDR(v0x7f1f23f581e0);
Obj v0x7f1f23f58220 = PRIM_CDR(v0x7f1f23f58200);
__nargs = 2;
__arg1 = v0x7f1f23f58220;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj x = __arg1;
Obj v0x7f1f23f5cd40 = PRIM_CDR(x);
Obj v0x7f1f23f5cd60 = PRIM_CDR(v0x7f1f23f5cd40);
Obj v0x7f1f23f5cd80 = PRIM_CDR(v0x7f1f23f5cd60);
Obj v0x7f1f23f5cda0 = PRIM_CAR(v0x7f1f23f5cd80);
__nargs = 2;
__arg1 = v0x7f1f23f5cda0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj x = __arg1;
Obj v0x7f1f23f5c7a0 = PRIM_CDR(x);
Obj v0x7f1f23f5c7c0 = PRIM_CDR(v0x7f1f23f5c7a0);
Obj v0x7f1f23f5c7e0 = PRIM_CAR(v0x7f1f23f5c7c0);
__nargs = 2;
__arg1 = v0x7f1f23f5c7e0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label21:
{
Obj x = __arg1;
Obj v0x7f1f23f5c2c0 = PRIM_CDR(x);
Obj v0x7f1f23f5c340 = PRIM_CDR(v0x7f1f23f5c2c0);
__nargs = 2;
__arg1 = v0x7f1f23f5c340;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj x = __arg1;
Obj v0x7f1f23ed5780 = PRIM_CAR(x);
Obj v0x7f1f23ed57a0 = PRIM_CDR(v0x7f1f23ed5780);
__nargs = 2;
__arg1 = v0x7f1f23ed57a0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x = __arg1;
Obj v0x7f1f23ed54a0 = PRIM_CAR(x);
Obj v0x7f1f23ed54c0 = PRIM_CAR(v0x7f1f23ed54a0);
__nargs = 2;
__arg1 = v0x7f1f23ed54c0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj x = __arg1;
Obj v0x7f1f23ed51c0 = PRIM_CDR(x);
Obj v0x7f1f23ed51e0 = PRIM_CAR(v0x7f1f23ed51c0);
__nargs = 2;
__arg1 = v0x7f1f23ed51e0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x = __arg1;
Obj v0x7f1f23eddf00 = PRIM_EQ(x, Nil);
__nargs = 2;
__arg1 = v0x7f1f23eddf00;
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

