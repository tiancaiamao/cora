#include "types.h"
#include "runtime.h"

static void clofun0(struct Cora* co);
static void clofun1(struct Cora* co);
static void clofun2(struct Cora* co);
static void clofun3(struct Cora* co);
static void clofun4(struct Cora* co);


static Obj symcora_47init_35assq;
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
static Obj symcora_47init_35vector_63;
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
static Obj symvalue;
static Obj symread_45file_45as_45sexp;
static Obj symbytes_45length;
static Obj symbytes;
static Obj symvector_45length;
static Obj symvector_45ref;
static Obj symvector_45set_33;
static Obj symvector_63;
static Obj symvector;
static Obj symcora_47init_35_42ns_45export_42;
static Obj symnumber_63;
static Obj symcora_47init_35builtin_63;
static Obj symassq;
static Obj symstring_63;
static Obj syminteger_63;
static Obj symnot;
static Obj symsymbol_63;
static Obj symgensym;
static Obj sym_60;
static Obj sym_62;
static Obj sym_47;
static Obj sym_42;
static Obj sym_45;
static Obj sym_43;
static Obj symset;
static Obj symcora_47init_35_42builtin_45prims_42;
static Obj symvalue_45or;
static Obj symcora_47init_35lookup_45var;
static Obj symsymbol_45_62string;
static Obj symstring_45append;
static Obj symintern;
static Obj symsymbol_45cooked_63;
static Obj symcora_47init_35var_45with_45ns;
static Obj sym_42ns_45export_42;
static Obj symns;
static Obj sympackage;
static Obj symcora_47init_35parse_45package;
static Obj symimport;
static Obj symexport;
static Obj symcora_47init_35parse_45package_45h;
static Obj symfold_45apply;
static Obj symcora_47init_35rewrite_45fold_45apply;
static Obj symbackquote;
static Obj symunquote;
static Obj symcora_47init_35rewrite_45backquote;
static Obj symbegin;
static Obj symdo;
static Obj symcora_47init_35rewrite_45begin;
static Obj symcora_47init_35peval;
static Obj symcora_47init_35parse;
static Obj symcora_47init_35rewrite_45namespace;
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
symcora_47init_35assq = intern("cora/init#assq");
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
symcora_47init_35vector_63 = intern("cora/init#vector?");
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
symvalue = intern("value");
symread_45file_45as_45sexp = intern("read-file-as-sexp");
symbytes_45length = intern("bytes-length");
symbytes = intern("bytes");
symvector_45length = intern("vector-length");
symvector_45ref = intern("vector-ref");
symvector_45set_33 = intern("vector-set!");
symvector_63 = intern("vector?");
symvector = intern("vector");
symcora_47init_35_42ns_45export_42 = intern("cora/init#*ns-export*");
symnumber_63 = intern("number?");
symcora_47init_35builtin_63 = intern("cora/init#builtin?");
symassq = intern("assq");
symstring_63 = intern("string?");
syminteger_63 = intern("integer?");
symnot = intern("not");
symsymbol_63 = intern("symbol?");
symgensym = intern("gensym");
sym_60 = intern("<");
sym_62 = intern(">");
sym_47 = intern("/");
sym_42 = intern("*");
sym_45 = intern("-");
sym_43 = intern("+");
symset = intern("set");
symcora_47init_35_42builtin_45prims_42 = intern("cora/init#*builtin-prims*");
symvalue_45or = intern("value-or");
symcora_47init_35lookup_45var = intern("cora/init#lookup-var");
symsymbol_45_62string = intern("symbol->string");
symstring_45append = intern("string-append");
symintern = intern("intern");
symsymbol_45cooked_63 = intern("symbol-cooked?");
symcora_47init_35var_45with_45ns = intern("cora/init#var-with-ns");
sym_42ns_45export_42 = intern("*ns-export*");
symns = intern("ns");
sympackage = intern("package");
symcora_47init_35parse_45package = intern("cora/init#parse-package");
symimport = intern("import");
symexport = intern("export");
symcora_47init_35parse_45package_45h = intern("cora/init#parse-package-h");
symfold_45apply = intern("fold-apply");
symcora_47init_35rewrite_45fold_45apply = intern("cora/init#rewrite-fold-apply");
symbackquote = intern("backquote");
symunquote = intern("unquote");
symcora_47init_35rewrite_45backquote = intern("cora/init#rewrite-backquote");
symbegin = intern("begin");
symdo = intern("do");
symcora_47init_35rewrite_45begin = intern("cora/init#rewrite-begin");
symcora_47init_35peval = intern("cora/init#peval");
symcora_47init_35parse = intern("cora/init#parse");
symcora_47init_35rewrite_45namespace = intern("cora/init#rewrite-namespace");
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
Obj x140338842594023 = primSet(co, symnull_63, makeNative(20, clofun4, 1, 0));
Obj x140338842594439 = primSet(co, symcadr, makeNative(19, clofun4, 1, 0));
Obj x140338842594855 = primSet(co, symcaar, makeNative(18, clofun4, 1, 0));
Obj x140338842595271 = primSet(co, symcdar, makeNative(17, clofun4, 1, 0));
Obj x140338842587495 = primSet(co, symcddr, makeNative(16, clofun4, 1, 0));
Obj x140338842588007 = primSet(co, symcaddr, makeNative(15, clofun4, 1, 0));
Obj x140338842588615 = primSet(co, symcadddr, makeNative(14, clofun4, 1, 0));
Obj x140338842589127 = primSet(co, symcdddr, makeNative(13, clofun4, 1, 0));
Obj x140338842590087 = primSet(co, symrcons, makeNative(11, clofun4, 1, 0));
Obj x140338842590407 = primSet(co, sympair_63, makeNative(10, clofun4, 1, 0));
Obj x140338842591143 = primSet(co, symcora_47init_35reverse_45h, makeNative(9, clofun4, 2, 0));
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
Obj x140338842538119 = __arg1;
Obj x140338842538151 = primSet(co, symreverse, x140338842538119);
Obj x140338842539047 = primSet(co, symmap_45h, makeNative(7, clofun4, 3, 0));
Obj x140338842539335 = primSet(co, symmap, makeNative(6, clofun4, 2, 0));
Obj x140338842539495 = primSet(co, sym_42macros_42, Nil);
Obj x140338842539719 = primGenSym();
Obj x140338842539751 = primSet(co, sym_42protect_45symbol_42, x140338842539719);
Obj x140338842540263 = primSet(co, symcora_47init_35add_45to_45_42macros_42, makeNative(5, clofun4, 2, 0));
Obj x140338842480711 = primSet(co, symcora_47init_35macroexpand1_45h, makeNative(2, clofun4, 2, 0));
Obj x140338842480999 = primSet(co, symcora_47init_35macroexpand1, makeNative(1, clofun4, 1, 0));
Obj x140338842483367 = primSet(co, symcora_47init_35macroexpand_45boot, makeNative(45, clofun3, 1, 0));
Obj x140338842483527 = primSet(co, symmacroexpand, globalRef(symcora_47init_35macroexpand_45boot));
Obj x140338842484711 = primSet(co, symdefmacro_45macro, makeNative(41, clofun3, 1, 0));
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
Obj x140338842464391 = __arg1;
PUSH_CONT_0(co, 3, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symlist;
__arg2 = makeNative(40, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140338842464775 = __arg1;
PUSH_CONT_0(co, 4, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symdefun;
__arg2 = makeNative(36, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140338842467431 = __arg1;
Obj x140338842468231 = primSet(co, symelem_63, makeNative(35, clofun3, 2, 0));
Obj x140338842452263 = primSet(co, symatom_63, makeNative(34, clofun3, 1, 0));
Obj x140338842453607 = primSet(co, symcora_47init_35rewrite_45let, makeNative(29, clofun3, 1, 0));
PUSH_CONT_0(co, 5, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symlet;
__arg2 = makeNative(28, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140338842453991 = __arg1;
PUSH_CONT_0(co, 6, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symcond;
__arg2 = makeNative(24, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140338842455591 = __arg1;
Obj x140338842407975 = primSet(co, symcora_47init_35rewrite_45or, makeNative(22, clofun3, 1, 0));
PUSH_CONT_0(co, 7, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symor;
__arg2 = makeNative(21, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140338842408359 = __arg1;
Obj x140338842409895 = primSet(co, symcora_47init_35rewrite_45and, makeNative(19, clofun3, 1, 0));
PUSH_CONT_0(co, 8, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symand;
__arg2 = makeNative(18, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140338842771975 = __arg1;
Obj x140338842773223 = primSet(co, symboolean_63, makeNative(17, clofun3, 1, 0));
Obj x140338842775047 = primSet(co, symcora_47init_35rcons1, makeNative(14, clofun3, 1, 0));
PUSH_CONT_0(co, 9, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symlist_45rest;
__arg2 = makeNative(13, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140338842775463 = __arg1;
Obj x140338842697159 = primSet(co, symcora_47init_35match_45cons_45expander, makeNative(4, clofun3, 4, 0));
Obj x140338842624231 = primSet(co, symcora_47init_35match1, makeNative(48, clofun2, 4, 0));
Obj x140338842626183 = primSet(co, symcora_47init_35extract_45rule_45action, makeNative(43, clofun2, 2, 0));
Obj x140338842592551 = primSet(co, symcora_47init_35match_45helper, makeNative(34, clofun2, 2, 0));
Obj x140338842595047 = primSet(co, symcora_47init_35rewrite_45match, makeNative(28, clofun2, 1, 0));
PUSH_CONT_0(co, 10, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symmatch;
__arg2 = makeNative(27, clofun2, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140338842587239 = __arg1;
Obj x140338842482695 = primSet(co, symcora_47init_35extract_45rules1, makeNative(22, clofun2, 3, 0));
Obj x140338842483047 = primSet(co, symcora_47init_35extract_45rules, makeNative(21, clofun2, 1, 0));
Obj x140338842483975 = primSet(co, symcora_47init_35rules_45patterns, makeNative(18, clofun2, 2, 0));
Obj x140338842464519 = primSet(co, symcora_47init_35length_45h, makeNative(17, clofun2, 2, 0));
Obj x140338842464871 = primSet(co, symlength, makeNative(16, clofun2, 1, 0));
Obj x140338842466087 = primSet(co, symcora_47init_35filter_45h, makeNative(14, clofun2, 3, 0));
Obj x140338842466375 = primSet(co, symfilter, makeNative(13, clofun2, 2, 0));
Obj x140338842467463 = primSet(co, symappend, makeNative(11, clofun2, 2, 0));
Obj x140338842453223 = primSet(co, symcora_47init_35rules_45arg_45count, makeNative(4, clofun2, 1, 0));
Obj x140338842454279 = primSet(co, symcora_47init_35gen_45paramenters, makeNative(2, clofun2, 1, 0));
PUSH_CONT_0(co, 11, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symfunc;
__arg2 = makeNative(46, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140338842407239 = __arg1;
Obj x140338842407623 = primSet(co, symcora_47init_35rewrite_45namespace, makeNative(45, clofun1, 1, 0));
Obj x140338842408039 = primSet(co, symcora_47init_35peval, makeNative(44, clofun1, 1, 0));
Obj x140338842408583 = primSet(co, symmacroexpand, makeNative(41, clofun1, 1, 0));
Obj x140338842339495 = primSet(co, symcora_47init_35rewrite_45begin, makeNative(37, clofun1, 1, 0));
PUSH_CONT_0(co, 12, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symbegin;
__arg2 = makeNative(36, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140338842339879 = __arg1;
Obj x140338842318439 = primSet(co, symcora_47init_35rewrite_45backquote, makeNative(33, clofun1, 1, 0));
PUSH_CONT_0(co, 13, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symbackquote;
__arg2 = makeNative(31, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140338842318823 = __arg1;
Obj x140338842320359 = primSet(co, symcora_47init_35rewrite_45fold_45apply, makeNative(26, clofun1, 2, 0));
PUSH_CONT_0(co, 14, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symfold_45apply;
__arg2 = makeNative(23, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140338842320839 = __arg1;
Obj x140338842772615 = primSet(co, symcora_47init_35parse_45package_45h, makeNative(19, clofun1, 4, 0));
Obj x140338842773159 = primSet(co, symcora_47init_35parse_45package, makeNative(18, clofun1, 2, 0));
PUSH_CONT_0(co, 15, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = sympackage;
__arg2 = makeNative(10, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140338842694983 = __arg1;
Obj x140338842696071 = primSet(co, symcora_47init_35var_45with_45ns, makeNative(5, clofun1, 2, 0));
Obj x140338842629671 = primSet(co, symcora_47init_35lookup_45var, makeNative(47, clofun0, 3, 0));
Obj x140338842630343 = makeCons(makeCString("primSet"), Nil);
Obj x140338842630375 = makeCons(MAKE_NUMBER(2), x140338842630343);
Obj x140338842630471 = makeCons(symset, x140338842630375);
Obj x140338842630983 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x140338842631015 = makeCons(MAKE_NUMBER(1), x140338842630983);
Obj x140338842631111 = makeCons(symcar, x140338842631015);
Obj x140338842631399 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x140338842631527 = makeCons(MAKE_NUMBER(1), x140338842631399);
Obj x140338842631559 = makeCons(symcdr, x140338842631527);
Obj x140338842632007 = makeCons(makeCString("makeCons"), Nil);
Obj x140338842632039 = makeCons(MAKE_NUMBER(2), x140338842632007);
Obj x140338842632135 = makeCons(symcons, x140338842632039);
Obj x140338842624295 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x140338842624327 = makeCons(MAKE_NUMBER(1), x140338842624295);
Obj x140338842624359 = makeCons(symcons_63, x140338842624327);
Obj x140338842624711 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x140338842624743 = makeCons(MAKE_NUMBER(2), x140338842624711);
Obj x140338842624775 = makeCons(sym_43, x140338842624743);
Obj x140338842625063 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x140338842625095 = makeCons(MAKE_NUMBER(2), x140338842625063);
Obj x140338842625159 = makeCons(sym_45, x140338842625095);
Obj x140338842625479 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x140338842625671 = makeCons(MAKE_NUMBER(2), x140338842625479);
Obj x140338842625703 = makeCons(sym_42, x140338842625671);
Obj x140338842626023 = makeCons(makeCString("primDiv"), Nil);
Obj x140338842626055 = makeCons(MAKE_NUMBER(2), x140338842626023);
Obj x140338842626087 = makeCons(sym_47, x140338842626055);
Obj x140338842626471 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x140338842626503 = makeCons(MAKE_NUMBER(2), x140338842626471);
Obj x140338842626567 = makeCons(sym_61, x140338842626503);
Obj x140338842626919 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x140338842626951 = makeCons(MAKE_NUMBER(2), x140338842626919);
Obj x140338842626983 = makeCons(sym_62, x140338842626951);
Obj x140338842627335 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x140338842627367 = makeCons(MAKE_NUMBER(2), x140338842627335);
Obj x140338842627399 = makeCons(sym_60, x140338842627367);
Obj x140338842627783 = makeCons(makeCString("primGenSym"), Nil);
Obj x140338842627815 = makeCons(MAKE_NUMBER(0), x140338842627783);
Obj x140338842627847 = makeCons(symgensym, x140338842627815);
Obj x140338842591367 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x140338842591399 = makeCons(MAKE_NUMBER(1), x140338842591367);
Obj x140338842591431 = makeCons(symsymbol_63, x140338842591399);
Obj x140338842591815 = makeCons(makeCString("primNot"), Nil);
Obj x140338842591847 = makeCons(MAKE_NUMBER(1), x140338842591815);
Obj x140338842592007 = makeCons(symnot, x140338842591847);
Obj x140338842592327 = makeCons(makeCString("primIsNumber"), Nil);
Obj x140338842592359 = makeCons(MAKE_NUMBER(1), x140338842592327);
Obj x140338842592391 = makeCons(syminteger_63, x140338842592359);
Obj x140338842592775 = makeCons(makeCString("primIsString"), Nil);
Obj x140338842592807 = makeCons(MAKE_NUMBER(1), x140338842592775);
Obj x140338842592839 = makeCons(symstring_63, x140338842592807);
Obj x140338842592871 = makeCons(x140338842592839, Nil);
Obj x140338842592903 = makeCons(x140338842592391, x140338842592871);
Obj x140338842592935 = makeCons(x140338842592007, x140338842592903);
Obj x140338842593031 = makeCons(x140338842591431, x140338842592935);
Obj x140338842593063 = makeCons(x140338842627847, x140338842593031);
Obj x140338842593095 = makeCons(x140338842627399, x140338842593063);
Obj x140338842593127 = makeCons(x140338842626983, x140338842593095);
Obj x140338842593191 = makeCons(x140338842626567, x140338842593127);
Obj x140338842593223 = makeCons(x140338842626087, x140338842593191);
Obj x140338842593255 = makeCons(x140338842625703, x140338842593223);
Obj x140338842593287 = makeCons(x140338842625159, x140338842593255);
Obj x140338842593319 = makeCons(x140338842624775, x140338842593287);
Obj x140338842593351 = makeCons(x140338842624359, x140338842593319);
Obj x140338842593383 = makeCons(x140338842632135, x140338842593351);
Obj x140338842593415 = makeCons(x140338842631559, x140338842593383);
Obj x140338842593447 = makeCons(x140338842631111, x140338842593415);
Obj x140338842593479 = makeCons(x140338842630471, x140338842593447);
Obj x140338842593543 = primSet(co, symcora_47init_35_42builtin_45prims_42, x140338842593479);
Obj x140338842589575 = primSet(co, symassq, makeNative(45, clofun0, 2, 0));
Obj x140338842590503 = primSet(co, symcora_47init_35builtin_63, makeNative(42, clofun0, 1, 0));
Obj x140338841904967 = primSet(co, symcora_47init_35parse, makeNative(16, clofun0, 4, 0));
Obj x140338841514343 = makeCons(symappend, Nil);
Obj x140338841514375 = makeCons(symfilter, x140338841514343);
Obj x140338841514407 = makeCons(symlength, x140338841514375);
Obj x140338841514439 = makeCons(symelem_63, x140338841514407);
Obj x140338841514471 = makeCons(symmacroexpand, x140338841514439);
Obj x140338841514503 = makeCons(symmap, x140338841514471);
Obj x140338841514535 = makeCons(symreverse, x140338841514503);
Obj x140338841514567 = makeCons(symthrow, x140338841514535);
Obj x140338841514599 = makeCons(symtry, x140338841514567);
Obj x140338841514631 = makeCons(symload, x140338841514599);
Obj x140338841514663 = makeCons(symimport, x140338841514631);
Obj x140338841514695 = makeCons(symload_45so, x140338841514663);
Obj x140338841514727 = makeCons(symapply, x140338841514695);
Obj x140338841514759 = makeCons(symvalue_45or, x140338841514727);
Obj x140338841514791 = makeCons(symvalue, x140338841514759);
Obj x140338841514823 = makeCons(symread_45file_45as_45sexp, x140338841514791);
Obj x140338841514855 = makeCons(symbytes_45length, x140338841514823);
Obj x140338841515015 = makeCons(symbytes, x140338841514855);
Obj x140338841515047 = makeCons(symvector_45length, x140338841515015);
Obj x140338841515079 = makeCons(symvector_45ref, x140338841515047);
Obj x140338841515111 = makeCons(symvector_45set_33, x140338841515079);
Obj x140338841515143 = makeCons(symvector_63, x140338841515111);
Obj x140338841515175 = makeCons(symvector, x140338841515143);
Obj x140338841515207 = makeCons(symsymbol_45_62string, x140338841515175);
Obj x140338841515239 = makeCons(symintern, x140338841515207);
Obj x140338841515271 = makeCons(symstring_45append, x140338841515239);
Obj x140338841515303 = makeCons(symnull_63, x140338841515271);
Obj x140338841515335 = makeCons(symnumber_63, x140338841515303);
Obj x140338841515367 = makeCons(symboolean_63, x140338841515335);
Obj x140338841515399 = makeCons(symatom_63, x140338841515367);
Obj x140338841515431 = makeCons(sympair_63, x140338841515399);
Obj x140338841515463 = makeCons(symcdddr, x140338841515431);
Obj x140338841515495 = makeCons(symcadddr, x140338841515463);
Obj x140338841515527 = makeCons(symcaddr, x140338841515495);
Obj x140338841515559 = makeCons(symcddr, x140338841515527);
Obj x140338841515591 = makeCons(symcdar, x140338841515559);
Obj x140338841515623 = makeCons(symcaar, x140338841515591);
Obj x140338841515655 = makeCons(symcadr, x140338841515623);
Obj x140338841515687 = primSet(co, symcora_47init_35_42ns_45export_42, x140338841515655);
Obj x140338841515847 = primSet(co, symcora_47init_35cadr, globalRef(symcadr));
Obj x140338841516007 = primSet(co, symcora_47init_35caar, globalRef(symcaar));
Obj x140338841516167 = primSet(co, symcora_47init_35cdar, globalRef(symcdar));
Obj x140338841516327 = primSet(co, symcora_47init_35cddr, globalRef(symcddr));
Obj x140338841516487 = primSet(co, symcora_47init_35caddr, globalRef(symcaddr));
Obj x140338841516647 = primSet(co, symcora_47init_35cadddr, globalRef(symcadddr));
Obj x140338841516807 = primSet(co, symcora_47init_35cdddr, globalRef(symcdddr));
Obj x140338841516967 = primSet(co, symcora_47init_35pair_63, globalRef(sympair_63));
Obj x140338841517127 = primSet(co, symcora_47init_35atom_63, globalRef(symatom_63));
Obj x140338841517287 = primSet(co, symcora_47init_35boolean_63, globalRef(symboolean_63));
Obj x140338841517447 = primSet(co, symcora_47init_35null_63, globalRef(symnull_63));
Obj x140338841517607 = primSet(co, symcora_47init_35number_63, globalRef(symnumber_63));
Obj x140338841517767 = primSet(co, symcora_47init_35string_45append, globalRef(symstring_45append));
Obj x140338841517927 = primSet(co, symcora_47init_35intern, globalRef(symintern));
Obj x140338841493511 = primSet(co, symcora_47init_35symbol_45_62string, globalRef(symsymbol_45_62string));
Obj x140338841493671 = primSet(co, symcora_47init_35vector, globalRef(symvector));
Obj x140338841493831 = primSet(co, symcora_47init_35vector_63, globalRef(symvector_63));
Obj x140338841493991 = primSet(co, symcora_47init_35vector_45set_33, globalRef(symvector_45set_33));
Obj x140338841494151 = primSet(co, symcora_47init_35vector_45ref, globalRef(symvector_45ref));
Obj x140338841494311 = primSet(co, symcora_47init_35vector_45length, globalRef(symvector_45length));
Obj x140338841494471 = primSet(co, symcora_47init_35bytes, globalRef(symbytes));
Obj x140338841494631 = primSet(co, symcora_47init_35bytes_45length, globalRef(symbytes_45length));
Obj x140338841494791 = primSet(co, symcora_47init_35value, globalRef(symvalue));
Obj x140338841494951 = primSet(co, symcora_47init_35value_45or, globalRef(symvalue_45or));
Obj x140338841495111 = primSet(co, symcora_47init_35read_45file_45as_45sexp, globalRef(symread_45file_45as_45sexp));
Obj x140338841495271 = primSet(co, symcora_47init_35apply, globalRef(symapply));
Obj x140338841495431 = primSet(co, symcora_47init_35load, globalRef(symload));
Obj x140338841495591 = primSet(co, symcora_47init_35load_45so, globalRef(symload_45so));
Obj x140338841495751 = primSet(co, symcora_47init_35import, globalRef(symimport));
Obj x140338842771847 = primSet(co, symcora_47init_35try, globalRef(symtry));
Obj x140338842772647 = primSet(co, symcora_47init_35throw, globalRef(symthrow));
Obj x140338842773031 = primSet(co, symcora_47init_35reverse, globalRef(symreverse));
Obj x140338842773319 = primSet(co, symcora_47init_35map, globalRef(symmap));
Obj x140338842773511 = primSet(co, symcora_47init_35macroexpand, globalRef(symmacroexpand));
Obj x140338842774343 = primSet(co, symcora_47init_35elem_63, globalRef(symelem_63));
Obj x140338842774663 = primSet(co, symcora_47init_35length, globalRef(symlength));
Obj x140338842774823 = primSet(co, symcora_47init_35filter, globalRef(symfilter));
Obj x140338842775271 = primSet(co, symcora_47init_35append, globalRef(symappend));
Obj x140338842775367 = primSet(co, symcora_47init_35assq, globalRef(symassq));
__nargs = 2;
__arg1 = x140338842775367;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x140338842773703 = __arg1;
Obj x140338842773767 = __arg2;
Obj x140338842773799 = __arg3;
Obj x140338842773831 = co->args[4];
Obj x140338842772263 = makeNative(20, clofun0, 1, 4, x140338842773703, x140338842773767, x140338842773799, x140338842773831);
pushCont(co, 17, clofun0, 2, x140338842773831, x140338842772263);
__nargs = 2;
__arg0 = globalRef(symnumber_63);
__arg1 = x140338842773831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140338841904455 = __arg1;
Obj x140338842773831= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842772263= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140338841904455) {
__nargs = 2;
__arg0 = x140338842772263;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140338841904615 = primIsString(x140338842773831);
if (True == x140338841904615) {
__nargs = 2;
__arg0 = x140338842772263;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 18, clofun0, 2, x140338842773831, x140338842772263);
__nargs = 2;
__arg0 = globalRef(symboolean_63);
__arg1 = x140338842773831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label18:
{
Obj x140338841904775 = __arg1;
Obj x140338842773831= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842772263= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140338841904775) {
__nargs = 2;
__arg0 = x140338842772263;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 19, clofun0, 1, x140338842772263);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140338842773831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj x140338841904935 = __arg1;
Obj x140338842772263= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140338841904935) {
__nargs = 2;
__arg0 = x140338842772263;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140338842772263;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj x140338842772295 = __arg1;
if (True == x140338842772295) {
__nargs = 2;
__arg1 = closureRef(co, 3);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842772903 = makeNative(21, clofun0, 0, 4, closureRef(co, 3), closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140338842164679 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140338842164679) {
Obj x140338842164935 = PRIM_CAR(closureRef(co, 3));
Obj x140338842164967 = PRIM_EQ(symquote, x140338842164935);
if (True == x140338842164967) {
Obj x140338842165223 = PRIM_CDR(closureRef(co, 3));
Obj x140338841903111 = PRIM_ISCONS(x140338842165223);
if (True == x140338841903111) {
Obj x140338841903367 = PRIM_CDR(closureRef(co, 3));
Obj x140338841903399 = PRIM_CAR(x140338841903367);
Obj x = x140338841903399;
Obj x140338841903719 = PRIM_CDR(closureRef(co, 3));
Obj x140338841903751 = PRIM_CDR(x140338841903719);
Obj x140338841903783 = PRIM_EQ(Nil, x140338841903751);
if (True == x140338841903783) {
Obj x140338841903943 = makeCons(x, Nil);
Obj x140338841903975 = makeCons(symquote, x140338841903943);
__nargs = 2;
__arg1 = x140338841903975;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140338842772903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label21:
{
Obj x140338842538407 = primIsSymbol(closureRef(co, 0));
if (True == x140338842538407) {
PUSH_CONT_0(co, 40, clofun0);
__nargs = 3;
__arg0 = globalRef(symelem_63);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140338842774855 = makeNative(24, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140338842184935 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140338842184935) {
Obj x140338842161735 = PRIM_CAR(closureRef(co, 0));
Obj x140338842161767 = PRIM_EQ(symlambda, x140338842161735);
if (True == x140338842161767) {
Obj x140338842162023 = PRIM_CDR(closureRef(co, 0));
Obj x140338842162055 = PRIM_ISCONS(x140338842162023);
if (True == x140338842162055) {
Obj x140338842162311 = PRIM_CDR(closureRef(co, 0));
Obj x140338842162343 = PRIM_CAR(x140338842162311);
Obj args = x140338842162343;
Obj x140338842162663 = PRIM_CDR(closureRef(co, 0));
Obj x140338842162695 = PRIM_CDR(x140338842162663);
Obj x140338842162727 = PRIM_ISCONS(x140338842162695);
if (True == x140338842162727) {
Obj x140338842163047 = PRIM_CDR(closureRef(co, 0));
Obj x140338842163079 = PRIM_CDR(x140338842163047);
Obj x140338842163111 = PRIM_CAR(x140338842163079);
Obj body = x140338842163111;
Obj x140338842163495 = PRIM_CDR(closureRef(co, 0));
Obj x140338842163527 = PRIM_CDR(x140338842163495);
Obj x140338842163559 = PRIM_CDR(x140338842163527);
Obj x140338842163591 = PRIM_EQ(Nil, x140338842163559);
if (True == x140338842163591) {
pushCont(co, 22, clofun0, 2, body, args);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = args;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140338842774855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842774855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842774855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842774855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842774855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label22:
{
Obj x140338842163975 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 23, clofun0, 1, args);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = x140338842163975;
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140338842164071 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842164103 = makeCons(x140338842164071, Nil);
Obj x140338842164135 = makeCons(args, x140338842164103);
Obj x140338842164167 = makeCons(symlambda, x140338842164135);
__nargs = 2;
__arg1 = x140338842164167;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj x140338842693767 = makeNative(27, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140338842340999 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140338842340999) {
Obj x140338842341287 = PRIM_CAR(closureRef(co, 0));
Obj x140338842341319 = PRIM_EQ(symdo, x140338842341287);
if (True == x140338842341319) {
Obj x140338842317127 = PRIM_CDR(closureRef(co, 0));
Obj x140338842317159 = PRIM_ISCONS(x140338842317127);
if (True == x140338842317159) {
Obj x140338842317607 = PRIM_CDR(closureRef(co, 0));
Obj x140338842317639 = PRIM_CAR(x140338842317607);
Obj x140338842317671 = PRIM_ISCONS(x140338842317639);
if (True == x140338842317671) {
Obj x140338842318215 = PRIM_CDR(closureRef(co, 0));
Obj x140338842318247 = PRIM_CAR(x140338842318215);
Obj x140338842318279 = PRIM_CAR(x140338842318247);
Obj x140338842318311 = PRIM_EQ(symimport, x140338842318279);
if (True == x140338842318311) {
Obj x140338842318727 = PRIM_CDR(closureRef(co, 0));
Obj x140338842318759 = PRIM_CAR(x140338842318727);
Obj x140338842318855 = PRIM_CDR(x140338842318759);
Obj x140338842318887 = PRIM_ISCONS(x140338842318855);
if (True == x140338842318887) {
Obj x140338842319335 = PRIM_CDR(closureRef(co, 0));
Obj x140338842319367 = PRIM_CAR(x140338842319335);
Obj x140338842319399 = PRIM_CDR(x140338842319367);
Obj x140338842319431 = PRIM_CAR(x140338842319399);
Obj pkg = x140338842319431;
Obj x140338842320071 = PRIM_CDR(closureRef(co, 0));
Obj x140338842320103 = PRIM_CAR(x140338842320071);
Obj x140338842320135 = PRIM_CDR(x140338842320103);
Obj x140338842320167 = PRIM_CDR(x140338842320135);
Obj x140338842320391 = PRIM_EQ(Nil, x140338842320167);
if (True == x140338842320391) {
Obj x140338842320743 = PRIM_CDR(closureRef(co, 0));
Obj x140338842320775 = PRIM_CDR(x140338842320743);
Obj x140338842320871 = PRIM_ISCONS(x140338842320775);
if (True == x140338842320871) {
Obj x140338842181927 = PRIM_CDR(closureRef(co, 0));
Obj x140338842181959 = PRIM_CDR(x140338842181927);
Obj x140338842181991 = PRIM_CAR(x140338842181959);
Obj y = x140338842181991;
Obj x140338842182407 = PRIM_CDR(closureRef(co, 0));
Obj x140338842182439 = PRIM_CDR(x140338842182407);
Obj x140338842182471 = PRIM_CDR(x140338842182439);
Obj x140338842182535 = PRIM_EQ(Nil, x140338842182471);
if (True == x140338842182535) {
Obj x140338842182695 = primIsString(pkg);
if (True == x140338842182695) {
Obj x140338842183303 = makeCons(pkg, Nil);
Obj x140338842183335 = makeCons(symimport, x140338842183303);
pushCont(co, 25, clofun0, 2, pkg, y);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = x140338842183335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140338842693767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842693767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842693767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842693767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842693767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842693767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842693767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842693767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842693767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842693767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj x140338842183367 = __arg1;
Obj pkg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842183783 = makeCons(pkg, closureRef(co, 3));
pushCont(co, 26, clofun0, 1, x140338842183367);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = x140338842183783;
co->args[4] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140338842183815 = __arg1;
Obj x140338842183367= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842183847 = makeCons(x140338842183815, Nil);
Obj x140338842183879 = makeCons(x140338842183367, x140338842183847);
Obj x140338842183911 = makeCons(symdo, x140338842183879);
__nargs = 2;
__arg1 = x140338842183911;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj x140338842694823 = makeNative(31, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140338842338855 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140338842338855) {
Obj x140338842339111 = PRIM_CAR(closureRef(co, 0));
Obj op = x140338842339111;
Obj x140338842339367 = PRIM_CDR(closureRef(co, 0));
Obj args = x140338842339367;
Obj x140338842772455 = makeNative(28, clofun0, 1, 6, op, closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), args, x140338842694823);
Obj x140338842340519 = PRIM_EQ(op, symif);
if (True == x140338842340519) {
__nargs = 2;
__arg0 = x140338842772455;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140338842340679 = PRIM_EQ(op, symdo);
if (True == x140338842340679) {
__nargs = 2;
__arg0 = x140338842772455;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140338842772455;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
__nargs = 1;
__arg0 = x140338842694823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj x140338842772519 = __arg1;
if (True == x140338842772519) {
PUSH_CONT_0(co, 29, clofun0);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = closureRef(co, 5);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140338842340007 = __arg1;
PUSH_CONT_0(co, 30, clofun0);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140338842340007;
__arg2 = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140338842340071 = __arg1;
Obj x140338842340103 = makeCons(closureRef(co, 0), x140338842340071);
__nargs = 2;
__arg1 = x140338842340103;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj x140338842695399 = makeNative(34, clofun0, 0, 4, closureRef(co, 2), closureRef(co, 3), closureRef(co, 0), closureRef(co, 1));
Obj x140338842454823 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140338842454823) {
Obj x140338842455239 = PRIM_CAR(closureRef(co, 0));
Obj x140338842455303 = PRIM_EQ(symlet, x140338842455239);
if (True == x140338842455303) {
Obj x140338842455815 = PRIM_CDR(closureRef(co, 0));
Obj x140338842455847 = PRIM_ISCONS(x140338842455815);
if (True == x140338842455847) {
Obj x140338842407367 = PRIM_CDR(closureRef(co, 0));
Obj x140338842407399 = PRIM_CAR(x140338842407367);
Obj a = x140338842407399;
Obj x140338842407815 = PRIM_CDR(closureRef(co, 0));
Obj x140338842408007 = PRIM_CDR(x140338842407815);
Obj x140338842408071 = PRIM_ISCONS(x140338842408007);
if (True == x140338842408071) {
Obj x140338842408455 = PRIM_CDR(closureRef(co, 0));
Obj x140338842408487 = PRIM_CDR(x140338842408455);
Obj x140338842408615 = PRIM_CAR(x140338842408487);
Obj b = x140338842408615;
Obj x140338842409095 = PRIM_CDR(closureRef(co, 0));
Obj x140338842409127 = PRIM_CDR(x140338842409095);
Obj x140338842409159 = PRIM_CDR(x140338842409127);
Obj x140338842409255 = PRIM_ISCONS(x140338842409159);
if (True == x140338842409255) {
Obj x140338842409927 = PRIM_CDR(closureRef(co, 0));
Obj x140338842409959 = PRIM_CDR(x140338842409927);
Obj x140338842409991 = PRIM_CDR(x140338842409959);
Obj x140338842410023 = PRIM_CAR(x140338842409991);
Obj c = x140338842410023;
Obj x140338842410631 = PRIM_CDR(closureRef(co, 0));
Obj x140338842410663 = PRIM_CDR(x140338842410631);
Obj x140338842410695 = PRIM_CDR(x140338842410663);
Obj x140338842410727 = PRIM_CDR(x140338842410695);
Obj x140338842410759 = PRIM_EQ(Nil, x140338842410727);
if (True == x140338842410759) {
pushCont(co, 32, clofun0, 2, c, a);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140338842695399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842695399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842695399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842695399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842695399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842695399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj x140338842337479 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842337799 = makeCons(a, closureRef(co, 1));
pushCont(co, 33, clofun0, 2, x140338842337479, a);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = x140338842337799;
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140338842337959 = __arg1;
Obj x140338842337479= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842337991 = makeCons(x140338842337959, Nil);
Obj x140338842338023 = makeCons(x140338842337479, x140338842337991);
Obj x140338842338055 = makeCons(a, x140338842338023);
Obj x140338842338087 = makeCons(symlet, x140338842338055);
__nargs = 2;
__arg1 = x140338842338087;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x140338842772839 = makeNative(35, clofun0, 0, 4, closureRef(co, 2), closureRef(co, 3), closureRef(co, 0), closureRef(co, 1));
Obj x140338842465159 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140338842465159) {
Obj x140338842465511 = PRIM_CAR(closureRef(co, 2));
Obj x140338842465543 = PRIM_EQ(symns, x140338842465511);
if (True == x140338842465543) {
Obj x140338842465895 = PRIM_CDR(closureRef(co, 2));
Obj x140338842465927 = PRIM_ISCONS(x140338842465895);
if (True == x140338842465927) {
Obj x140338842466247 = PRIM_CDR(closureRef(co, 2));
Obj x140338842466279 = PRIM_CAR(x140338842466247);
Obj path = x140338842466279;
Obj x140338842466631 = PRIM_CDR(closureRef(co, 2));
Obj x140338842466663 = PRIM_CDR(x140338842466631);
Obj x140338842466695 = PRIM_ISCONS(x140338842466663);
if (True == x140338842466695) {
Obj x140338842467527 = PRIM_CDR(closureRef(co, 2));
Obj x140338842467559 = PRIM_CDR(x140338842467527);
Obj x140338842467591 = PRIM_CAR(x140338842467559);
Obj import = x140338842467591;
Obj x140338842468103 = PRIM_CDR(closureRef(co, 2));
Obj x140338842468135 = PRIM_CDR(x140338842468103);
Obj x140338842468167 = PRIM_CDR(x140338842468135);
Obj x140338842468263 = PRIM_ISCONS(x140338842468167);
if (True == x140338842468263) {
Obj x140338842452455 = PRIM_CDR(closureRef(co, 2));
Obj x140338842452487 = PRIM_CDR(x140338842452455);
Obj x140338842452519 = PRIM_CDR(x140338842452487);
Obj x140338842452551 = PRIM_CAR(x140338842452519);
Obj body = x140338842452551;
Obj x140338842453383 = PRIM_CDR(closureRef(co, 2));
Obj x140338842453639 = PRIM_CDR(x140338842453383);
Obj x140338842453671 = PRIM_CDR(x140338842453639);
Obj x140338842453703 = PRIM_CDR(x140338842453671);
Obj x140338842453735 = PRIM_EQ(Nil, x140338842453703);
if (True == x140338842453735) {
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = closureRef(co, 3);
__arg2 = path;
__arg3 = import;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140338842772839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj x140338842774599 = makeNative(38, clofun0, 0, 4, closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 0));
Obj x140338842541479 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140338842541479) {
Obj x140338842541767 = PRIM_CAR(closureRef(co, 0));
Obj x140338842541959 = PRIM_EQ(symdef, x140338842541767);
if (True == x140338842541959) {
Obj x140338842480903 = PRIM_CDR(closureRef(co, 0));
Obj x140338842480935 = PRIM_ISCONS(x140338842480903);
if (True == x140338842480935) {
Obj x140338842481447 = PRIM_CDR(closureRef(co, 0));
Obj x140338842481479 = PRIM_CAR(x140338842481447);
Obj var = x140338842481479;
Obj x140338842482119 = PRIM_CDR(closureRef(co, 0));
Obj x140338842482151 = PRIM_CDR(x140338842482119);
Obj x140338842482215 = PRIM_ISCONS(x140338842482151);
if (True == x140338842482215) {
Obj x140338842482727 = PRIM_CDR(closureRef(co, 0));
Obj x140338842482823 = PRIM_CDR(x140338842482727);
Obj x140338842482855 = PRIM_CAR(x140338842482823);
Obj val = x140338842482855;
Obj x140338842483303 = PRIM_CDR(closureRef(co, 0));
Obj x140338842483399 = PRIM_CDR(x140338842483303);
Obj x140338842483431 = PRIM_CDR(x140338842483399);
Obj x140338842483463 = PRIM_EQ(Nil, x140338842483431);
if (True == x140338842483463) {
pushCont(co, 36, clofun0, 1, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35var_45with_45ns);
__arg1 = var;
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140338842774599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842774599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842774599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842774599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842774599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj x140338842483719 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj var1 = x140338842483719;
Obj x140338842484231 = makeCons(var1, Nil);
Obj x140338842484263 = makeCons(symquote, x140338842484231);
pushCont(co, 37, clofun0, 1, x140338842484263);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140338842464327 = __arg1;
Obj x140338842484263= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842464423 = makeCons(x140338842464327, Nil);
Obj x140338842464455 = makeCons(x140338842484263, x140338842464423);
Obj x140338842464551 = makeCons(symset, x140338842464455);
__nargs = 2;
__arg1 = x140338842464551;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
PUSH_CONT_0(co, 39, clofun0);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140338842541063 = __arg1;
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140338842541063;
__arg2 = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140338842538727 = __arg1;
if (True == x140338842538727) {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT_0(co, 41, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35builtin_63);
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj x140338842539143 = __arg1;
if (True == x140338842539143) {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 4;
__arg0 = globalRef(symcora_47init_35lookup_45var);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj x = __arg1;
PUSH_CONT_0(co, 43, clofun0);
__nargs = 3;
__arg0 = globalRef(symassq);
__arg1 = x;
__arg2 = globalRef(symcora_47init_35_42builtin_45prims_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140338842590343 = __arg1;
PUSH_CONT_0(co, 44, clofun0);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140338842590343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140338842590439 = __arg1;
Obj x140338842590471 = primNot(x140338842590439);
__nargs = 2;
__arg1 = x140338842590471;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj x140338842771495 = __arg1;
Obj x140338842771527 = __arg2;
Obj x140338842593895 = PRIM_EQ(Nil, x140338842771527);
if (True == x140338842593895) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842772487 = makeNative(46, clofun0, 0, 2, x140338842771527, x140338842771495);
Obj x140338842587527 = PRIM_ISCONS(x140338842771527);
if (True == x140338842587527) {
Obj x140338842587783 = PRIM_CAR(x140338842771527);
Obj x140338842587815 = PRIM_ISCONS(x140338842587783);
if (True == x140338842587815) {
Obj x140338842588167 = PRIM_CAR(x140338842771527);
Obj x140338842588199 = PRIM_CAR(x140338842588167);
Obj x = x140338842588199;
Obj x140338842588455 = PRIM_CAR(x140338842771527);
Obj x140338842588647 = PRIM_CDR(x140338842588455);
Obj y = x140338842588647;
Obj x140338842588839 = PRIM_CDR(x140338842771527);
Obj x140338842589159 = PRIM_EQ(x140338842771495, x);
if (True == x140338842589159) {
Obj x140338842589287 = makeCons(x, y);
__nargs = 2;
__arg1 = x140338842589287;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140338842772487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label46:
{
Obj x140338842594535 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140338842594535) {
Obj x140338842594759 = PRIM_CAR(closureRef(co, 0));
Obj x140338842595175 = PRIM_CDR(closureRef(co, 0));
Obj y = x140338842595175;
__nargs = 3;
__arg0 = globalRef(symassq);
__arg1 = closureRef(co, 1);
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj x140338842772071 = __arg1;
Obj x140338842772103 = __arg2;
Obj x140338842772135 = __arg3;
Obj x140338842696711 = PRIM_EQ(Nil, x140338842772135);
if (True == x140338842696711) {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35var_45with_45ns);
__arg1 = x140338842772071;
__arg2 = x140338842772103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140338842696967 = PRIM_ISCONS(x140338842772135);
if (True == x140338842696967) {
Obj x140338842697223 = PRIM_CAR(x140338842772135);
Obj import = x140338842697223;
Obj x140338842697383 = PRIM_CDR(x140338842772135);
Obj more = x140338842697383;
pushCont(co, 48, clofun0, 4, import, x140338842772071, x140338842772103, more);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = import;
__arg2 = makeCString("#*ns-export*");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label48:
{
Obj x140338842697671 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842772071= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842772103= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 49, clofun0, 4, import, x140338842772071, x140338842772103, more);
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140338842697671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140338842628103 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842772071= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842772103= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 0, clofun1, 4, import, x140338842772071, x140338842772103, more);
__nargs = 3;
__arg0 = globalRef(symvalue_45or);
__arg1 = x140338842628103;
__arg2 = Nil;
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
Obj x140338842628135 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842772071= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842772103= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj export = x140338842628135;
pushCont(co, 1, clofun1, 4, import, x140338842772071, x140338842772103, more);
__nargs = 3;
__arg0 = globalRef(symelem_63);
__arg1 = x140338842772071;
__arg2 = export;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x140338842628391 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842772071= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842772103= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140338842628391) {
pushCont(co, 2, clofun1, 1, import);
__nargs = 2;
__arg0 = globalRef(symsymbol_45_62string);
__arg1 = x140338842772071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 4;
__arg0 = globalRef(symcora_47init_35lookup_45var);
__arg1 = x140338842772071;
__arg2 = x140338842772103;
__arg3 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj x140338842628743 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 3, clofun1, 1, import);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = makeCString("#");
__arg2 = x140338842628743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140338842628935 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 4, clofun1);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = import;
__arg2 = x140338842628935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140338842628967 = __arg1;
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140338842628967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj var = __arg1;
Obj ns = __arg2;
Obj x140338842695367 = PRIM_EQ(ns, makeCString(""));
if (True == x140338842695367) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 6, clofun1, 2, var, ns);
__nargs = 2;
__arg0 = globalRef(symsymbol_45cooked_63);
__arg1 = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x140338842695623 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140338842695623) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 7, clofun1, 1, ns);
__nargs = 2;
__arg0 = globalRef(symsymbol_45_62string);
__arg1 = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj x140338842695975 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun1, 1, ns);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = makeCString("#");
__arg2 = x140338842695975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140338842696007 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 9, clofun1);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = ns;
__arg2 = x140338842696007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140338842696039 = __arg1;
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140338842696039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj sexp = __arg1;
pushCont(co, 11, clofun1, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140338842773607 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = x140338842773607;
pushCont(co, 12, clofun1, 1, path);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140338842774503 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 13, clofun1, 1, path);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35parse_45package);
__arg1 = x140338842774503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140338842774535 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = x140338842774535;
__arg1 = makeNative(14, clofun1, 3, 1, path);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj import = __arg1;
Obj export = __arg2;
Obj body = __arg3;
Obj x140338842775239 = makeCons(makeCString("cora/init"), import);
pushCont(co, 15, clofun1, 3, export, body, x140338842775239);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = makeNative(17, clofun1, 1, 0);
__arg2 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140338842694055 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842775239= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140338842694503 = makeCons(export, Nil);
Obj x140338842694567 = makeCons(symbackquote, x140338842694503);
Obj x140338842694599 = makeCons(x140338842694567, Nil);
Obj x140338842694631 = makeCons(sym_42ns_45export_42, x140338842694599);
Obj x140338842694663 = makeCons(symdef, x140338842694631);
Obj x140338842694695 = makeCons(x140338842694663, body);
pushCont(co, 16, clofun1, 1, x140338842775239);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = x140338842694055;
__arg2 = x140338842694695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140338842694759 = __arg1;
Obj x140338842775239= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842694791 = makeCons(symbegin, x140338842694759);
Obj x140338842694855 = makeCons(x140338842694791, Nil);
Obj x140338842694887 = makeCons(x140338842775239, x140338842694855);
Obj x140338842694919 = makeCons(closureRef(co, 0), x140338842694887);
Obj x140338842694951 = makeCons(symns, x140338842694919);
__nargs = 2;
__arg1 = x140338842694951;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj imp = __arg1;
Obj x140338842693895 = makeCons(imp, Nil);
Obj x140338842694023 = makeCons(symimport, x140338842693895);
__nargs = 2;
__arg1 = x140338842694023;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj data = __arg1;
Obj k = __arg2;
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45package_45h);
__arg1 = data;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140338842772679 = __arg1;
Obj x140338842772711 = __arg2;
Obj x140338842772775 = __arg3;
Obj x140338842772871 = co->args[4];
Obj x140338842773127 = makeNative(20, clofun1, 0, 4, x140338842772775, x140338842772679, x140338842772711, x140338842772871);
Obj x140338842184135 = PRIM_ISCONS(x140338842772679);
if (True == x140338842184135) {
Obj x140338842184359 = PRIM_CAR(x140338842772679);
Obj x140338842184391 = PRIM_ISCONS(x140338842184359);
if (True == x140338842184391) {
Obj x140338842184679 = PRIM_CAR(x140338842772679);
Obj x140338842184711 = PRIM_CAR(x140338842184679);
Obj x140338842184743 = PRIM_EQ(symimport, x140338842184711);
if (True == x140338842184743) {
Obj x140338842185031 = PRIM_CAR(x140338842772679);
Obj x140338842185063 = PRIM_CDR(x140338842185031);
Obj x140338842185095 = PRIM_ISCONS(x140338842185063);
if (True == x140338842185095) {
Obj x140338842185383 = PRIM_CAR(x140338842772679);
Obj x140338842185415 = PRIM_CDR(x140338842185383);
Obj x140338842185447 = PRIM_CAR(x140338842185415);
Obj lib = x140338842185447;
Obj x140338842161223 = PRIM_CAR(x140338842772679);
Obj x140338842161255 = PRIM_CDR(x140338842161223);
Obj x140338842161287 = PRIM_CDR(x140338842161255);
Obj x140338842161319 = PRIM_EQ(Nil, x140338842161287);
if (True == x140338842161319) {
Obj x140338842161479 = PRIM_CDR(x140338842772679);
Obj rest = x140338842161479;
Obj x140338842161639 = makeCons(lib, x140338842772711);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45package_45h);
__arg1 = rest;
__arg2 = x140338842161639;
__arg3 = x140338842772775;
co->args[4] = x140338842772871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140338842773127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842773127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842773127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842773127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842773127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj x140338842775207 = makeNative(21, clofun1, 0, 4, closureRef(co, 3), closureRef(co, 2), closureRef(co, 0), closureRef(co, 1));
Obj x140338842182503 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140338842182503) {
Obj x140338842182759 = PRIM_CAR(closureRef(co, 1));
Obj x140338842182791 = PRIM_ISCONS(x140338842182759);
if (True == x140338842182791) {
Obj x140338842183111 = PRIM_CAR(closureRef(co, 1));
Obj x140338842183143 = PRIM_CAR(x140338842183111);
Obj x140338842183175 = PRIM_EQ(symexport, x140338842183143);
if (True == x140338842183175) {
Obj x140338842183431 = PRIM_CAR(closureRef(co, 1));
Obj x140338842183463 = PRIM_CDR(x140338842183431);
Obj more = x140338842183463;
Obj x140338842183655 = PRIM_CDR(closureRef(co, 1));
Obj rest = x140338842183655;
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45package_45h);
__arg1 = rest;
__arg2 = closureRef(co, 2);
__arg3 = more;
co->args[4] = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140338842775207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842775207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842775207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
PUSH_CONT_0(co, 22, clofun1);
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140338842182247 = __arg1;
__nargs = 4;
__arg0 = closureRef(co, 0);
__arg1 = x140338842182247;
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj exp = __arg1;
pushCont(co, 24, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140338842320711 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 25, clofun1, 1, x140338842320711);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140338842320807 = __arg1;
Obj x140338842320711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rewrite_45fold_45apply);
__arg1 = x140338842320711;
__arg2 = x140338842320807;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj fn = __arg1;
Obj arglist = __arg2;
pushCont(co, 27, clofun1, 2, arglist, fn);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = arglist;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140338842319239 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 28, clofun1, 2, arglist, fn);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140338842319239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140338842319271 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140338842319271) {
Obj x140338842319495 = PRIM_CAR(arglist);
pushCont(co, 30, clofun1, 2, x140338842319495, fn);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = arglist;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140338842319975 = PRIM_CAR(arglist);
Obj x140338842320199 = PRIM_CDR(arglist);
pushCont(co, 29, clofun1, 2, x140338842319975, fn);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rewrite_45fold_45apply);
__arg1 = fn;
__arg2 = x140338842320199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140338842320231 = __arg1;
Obj x140338842319975= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842320263 = makeCons(x140338842320231, Nil);
Obj x140338842320295 = makeCons(x140338842319975, x140338842320263);
Obj x140338842320327 = makeCons(fn, x140338842320295);
__nargs = 2;
__arg1 = x140338842320327;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x140338842319655 = __arg1;
Obj x140338842319495= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842319687 = makeCons(x140338842319655, Nil);
Obj x140338842319719 = makeCons(x140338842319495, x140338842319687);
Obj x140338842319751 = makeCons(fn, x140338842319719);
__nargs = 2;
__arg1 = x140338842319751;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj exp = __arg1;
PUSH_CONT_0(co, 32, clofun1);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140338842318791 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45backquote);
__arg1 = x140338842318791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140338842773351 = __arg1;
Obj x140338842340231 = primIsSymbol(x140338842773351);
if (True == x140338842340231) {
Obj x140338842340391 = makeCons(x140338842773351, Nil);
Obj x140338842340423 = makeCons(symquote, x140338842340391);
__nargs = 2;
__arg1 = x140338842340423;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842773735 = makeNative(34, clofun1, 0, 1, x140338842773351);
Obj x140338842317031 = PRIM_ISCONS(x140338842773351);
if (True == x140338842317031) {
Obj x140338842317255 = PRIM_CAR(x140338842773351);
Obj x140338842317287 = PRIM_EQ(symunquote, x140338842317255);
if (True == x140338842317287) {
Obj x140338842317511 = PRIM_CDR(x140338842773351);
Obj x140338842317543 = PRIM_ISCONS(x140338842317511);
if (True == x140338842317543) {
Obj x140338842317767 = PRIM_CDR(x140338842773351);
Obj x140338842317799 = PRIM_CAR(x140338842317767);
Obj x = x140338842317799;
Obj x140338842318087 = PRIM_CDR(x140338842773351);
Obj x140338842318119 = PRIM_CDR(x140338842318087);
Obj x140338842318151 = PRIM_EQ(Nil, x140338842318119);
if (True == x140338842318151) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140338842773735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842773735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842773735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842773735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label34:
{
Obj x140338842340743 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140338842340743) {
Obj x140338842340935 = PRIM_CAR(closureRef(co, 0));
Obj x = x140338842340935;
Obj x140338842341127 = PRIM_CDR(closureRef(co, 0));
Obj more = x140338842341127;
Obj x140338842341351 = makeCons(x, more);
PUSH_CONT_0(co, 35, clofun1);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35rewrite_45backquote);
__arg2 = x140338842341351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label35:
{
Obj x140338842316807 = __arg1;
Obj x140338842316839 = makeCons(symlist, x140338842316807);
__nargs = 2;
__arg1 = x140338842316839;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj exp = __arg1;
Obj x140338842339847 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45begin);
__arg1 = x140338842339847;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140338842771911 = __arg1;
Obj x140338842772039 = makeNative(38, clofun1, 0, 1, x140338842771911);
Obj x140338842338919 = PRIM_ISCONS(x140338842771911);
if (True == x140338842338919) {
Obj x140338842339079 = PRIM_CAR(x140338842771911);
Obj x = x140338842339079;
Obj x140338842339303 = PRIM_CDR(x140338842771911);
Obj x140338842339335 = PRIM_EQ(Nil, x140338842339303);
if (True == x140338842339335) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140338842772039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj x140338842772391 = makeNative(39, clofun1, 0, 1, closureRef(co, 0));
Obj x140338842410855 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140338842410855) {
Obj x140338842337319 = PRIM_CAR(closureRef(co, 0));
Obj x = x140338842337319;
Obj x140338842337575 = PRIM_CDR(closureRef(co, 0));
Obj x140338842337607 = PRIM_ISCONS(x140338842337575);
if (True == x140338842337607) {
Obj x140338842337863 = PRIM_CDR(closureRef(co, 0));
Obj x140338842337895 = PRIM_CAR(x140338842337863);
Obj y = x140338842337895;
Obj x140338842338215 = PRIM_CDR(closureRef(co, 0));
Obj x140338842338247 = PRIM_CDR(x140338842338215);
Obj x140338842338279 = PRIM_EQ(Nil, x140338842338247);
if (True == x140338842338279) {
Obj x140338842338503 = makeCons(y, Nil);
Obj x140338842338535 = makeCons(x, x140338842338503);
Obj x140338842338567 = makeCons(symdo, x140338842338535);
__nargs = 2;
__arg1 = x140338842338567;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140338842772391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140338842409415 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140338842409415) {
Obj x140338842409639 = PRIM_CAR(closureRef(co, 0));
Obj x = x140338842409639;
Obj x140338842410215 = PRIM_CDR(closureRef(co, 0));
Obj y = x140338842410215;
pushCont(co, 40, clofun1, 1, x);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45begin);
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj x140338842410503 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842410535 = makeCons(x140338842410503, Nil);
Obj x140338842410567 = makeCons(x, x140338842410535);
Obj x140338842410599 = makeCons(symdo, x140338842410567);
__nargs = 2;
__arg1 = x140338842410599;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj exp = __arg1;
PUSH_CONT_0(co, 42, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140338842408519 = __arg1;
PUSH_CONT_0(co, 43, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45namespace);
__arg1 = x140338842408519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140338842408551 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35peval);
__arg1 = x140338842408551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x = __arg1;
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj exp = __arg1;
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = Nil;
__arg2 = makeCString("");
__arg3 = Nil;
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj exp = __arg1;
pushCont(co, 47, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140338842454855 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 48, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35extract_45rules);
__arg1 = x140338842454855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj x140338842454887 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = x140338842454887;
pushCont(co, 49, clofun1, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rules_45arg_45count);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140338842455079 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = x140338842455079;
pushCont(co, 0, clofun2, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35gen_45paramenters);
__arg1 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
Obj x140338842455271 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = x140338842455271;
pushCont(co, 1, clofun2, 2, body, args);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x140338842455719 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842406951 = makeCons(symlist, args);
Obj x140338842406983 = makeCons(x140338842406951, body);
Obj x140338842407079 = makeCons(symmatch, x140338842406983);
Obj x140338842407111 = makeCons(x140338842407079, Nil);
Obj x140338842407143 = makeCons(args, x140338842407111);
Obj x140338842407175 = makeCons(x140338842455719, x140338842407143);
Obj x140338842407207 = makeCons(symdefun, x140338842407175);
__nargs = 2;
__arg1 = x140338842407207;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj n = __arg1;
Obj x140338842453799 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == x140338842453799) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842454023 = primGenSym();
Obj x140338842454183 = PRIM_SUB(n, MAKE_NUMBER(1));
pushCont(co, 3, clofun2, 1, x140338842454023);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35gen_45paramenters);
__arg1 = x140338842454183;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj x140338842454215 = __arg1;
Obj x140338842454023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842454247 = makeCons(x140338842454023, x140338842454215);
__nargs = 2;
__arg1 = x140338842454247;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj rules = __arg1;
PUSH_CONT_0(co, 5, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rules_45patterns);
__arg1 = Nil;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140338842467847 = __arg1;
Obj pats = x140338842467847;
PUSH_CONT_0(co, 6, clofun2);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = makeNative(10, clofun2, 1, 0);
__arg2 = pats;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140338842451975 = __arg1;
Obj counts = x140338842451975;
Obj x140338842452135 = PRIM_CAR(counts);
Obj n = x140338842452135;
Obj x140338842452967 = PRIM_CDR(counts);
pushCont(co, 7, clofun2, 1, n);
__nargs = 3;
__arg0 = globalRef(symfilter);
__arg1 = makeNative(9, clofun2, 1, 1, n);
__arg2 = x140338842452967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140338842452999 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun2, 1, n);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140338842452999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140338842453063 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842453095 = primNot(x140338842453063);
if (True == x140338842453095) {
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("inconsistent func rule args count");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = n;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label9:
{
Obj x = __arg1;
Obj x140338842452839 = PRIM_EQ(closureRef(co, 0), x);
Obj x140338842452871 = primNot(x140338842452839);
__nargs = 2;
__arg1 = x140338842452871;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj x = __arg1;
Obj x140338842468327 = PRIM_CDR(x);
__nargs = 2;
__arg0 = globalRef(symlength);
__arg1 = x140338842468327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj x140338842466727 = PRIM_EQ(l1, Nil);
if (True == x140338842466727) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842466919 = PRIM_CAR(l1);
Obj x140338842467111 = PRIM_CDR(l1);
pushCont(co, 12, clofun2, 1, x140338842466919);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = x140338842467111;
__arg2 = l2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj x140338842467143 = __arg1;
Obj x140338842466919= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842467175 = makeCons(x140338842466919, x140338842467143);
__nargs = 2;
__arg1 = x140338842467175;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
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
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj res = __arg1;
Obj fn = __arg2;
Obj l = __arg3;
Obj x140338842465223 = PRIM_ISCONS(l);
if (True == x140338842465223) {
Obj x140338842465447 = PRIM_CAR(l);
pushCont(co, 15, clofun2, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = x140338842465447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj x140338842465479 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140338842465479) {
Obj x140338842465703 = PRIM_CAR(l);
Obj x140338842465735 = makeCons(x140338842465703, res);
Obj x140338842465831 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = x140338842465735;
__arg2 = fn;
__arg3 = x140338842465831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140338842465991 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = res;
__arg2 = fn;
__arg3 = x140338842465991;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
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

label17:
{
Obj i = __arg1;
Obj l = __arg2;
Obj x140338842484455 = PRIM_EQ(l, Nil);
if (True == x140338842484455) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842464359 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj x140338842464487 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35length_45h);
__arg1 = x140338842464359;
__arg2 = x140338842464487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj res = __arg1;
Obj rules = __arg2;
pushCont(co, 19, clofun2, 2, res, rules);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140338842483495 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140338842483495) {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140338842483815 = PRIM_CAR(rules);
Obj x140338842483847 = makeCons(x140338842483815, res);
pushCont(co, 20, clofun2, 1, x140338842483847);
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

label20:
{
Obj x140338842483943 = __arg1;
Obj x140338842483847= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rules_45patterns);
__arg1 = x140338842483847;
__arg2 = x140338842483943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
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

label22:
{
Obj input = __arg1;
Obj current = __arg2;
Obj result = __arg3;
Obj x140338842587687 = PRIM_EQ(Nil, input);
if (True == x140338842587687) {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = result;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140338842771943 = makeNative(24, clofun2, 0, 3, input, current, result);
Obj x140338842539015 = PRIM_ISCONS(input);
if (True == x140338842539015) {
Obj x140338842539271 = PRIM_CAR(input);
Obj x140338842539303 = PRIM_EQ(sym_61_62, x140338842539271);
if (True == x140338842539303) {
Obj x140338842539591 = PRIM_CDR(input);
Obj x140338842539623 = PRIM_ISCONS(x140338842539591);
if (True == x140338842539623) {
Obj x140338842539911 = PRIM_CDR(input);
Obj x140338842539943 = PRIM_CAR(x140338842539911);
Obj act = x140338842539943;
Obj x140338842540359 = PRIM_CDR(input);
Obj x140338842540391 = PRIM_CDR(x140338842540359);
Obj x140338842540423 = PRIM_ISCONS(x140338842540391);
if (True == x140338842540423) {
Obj x140338842540807 = PRIM_CDR(input);
Obj x140338842540839 = PRIM_CDR(x140338842540807);
Obj x140338842540871 = PRIM_CAR(x140338842540839);
Obj x140338842540903 = PRIM_EQ(symwhere, x140338842540871);
if (True == x140338842540903) {
Obj x140338842541287 = PRIM_CDR(input);
Obj x140338842541319 = PRIM_CDR(x140338842541287);
Obj x140338842541351 = PRIM_CDR(x140338842541319);
Obj x140338842541415 = PRIM_ISCONS(x140338842541351);
if (True == x140338842541415) {
Obj x140338842541799 = PRIM_CDR(input);
Obj x140338842541831 = PRIM_CDR(x140338842541799);
Obj x140338842541863 = PRIM_CDR(x140338842541831);
Obj x140338842541927 = PRIM_CAR(x140338842541863);
Obj pred = x140338842541927;
Obj x140338842480967 = PRIM_CDR(input);
Obj x140338842481031 = PRIM_CDR(x140338842480967);
Obj x140338842481063 = PRIM_CDR(x140338842481031);
Obj x140338842481095 = PRIM_CDR(x140338842481063);
Obj remain = x140338842481095;
pushCont(co, 23, clofun2, 4, act, pred, result, remain);
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = current;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140338842771943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842771943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842771943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842771943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842771943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842771943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label23:
{
Obj x140338842481319 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj result= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140338842481383 = makeCons(symlist, x140338842481319);
Obj pat = x140338842481383;
Obj x140338842481831 = makeCons(act, Nil);
Obj x140338842481863 = makeCons(pred, x140338842481831);
Obj x140338842481895 = makeCons(symwhere, x140338842481863);
Obj x140338842482055 = makeCons(pat, result);
Obj x140338842482087 = makeCons(x140338842481895, x140338842482055);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = x140338842482087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140338842772423 = makeNative(26, clofun2, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140338842589511 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140338842589511) {
Obj x140338842589799 = PRIM_CAR(closureRef(co, 0));
Obj x140338842589831 = PRIM_EQ(sym_61_62, x140338842589799);
if (True == x140338842589831) {
Obj x140338842590279 = PRIM_CDR(closureRef(co, 0));
Obj x140338842590311 = PRIM_ISCONS(x140338842590279);
if (True == x140338842590311) {
Obj x140338842590631 = PRIM_CDR(closureRef(co, 0));
Obj x140338842590663 = PRIM_CAR(x140338842590631);
Obj act = x140338842590663;
Obj x140338842590951 = PRIM_CDR(closureRef(co, 0));
Obj x140338842591047 = PRIM_CDR(x140338842590951);
Obj remain = x140338842591047;
pushCont(co, 25, clofun2, 2, act, remain);
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
__arg0 = x140338842772423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140338842772423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj x140338842538183 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842538215 = makeCons(symlist, x140338842538183);
Obj pat = x140338842538215;
Obj x140338842538471 = makeCons(pat, closureRef(co, 2));
Obj x140338842538535 = makeCons(act, x140338842538471);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = x140338842538535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140338842588327 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140338842588327) {
Obj x140338842588679 = PRIM_CAR(closureRef(co, 0));
Obj x = x140338842588679;
Obj x140338842588871 = PRIM_CDR(closureRef(co, 0));
Obj y = x140338842588871;
Obj x140338842589191 = makeCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = y;
__arg2 = x140338842589191;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
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

label28:
{
Obj exp = __arg1;
pushCont(co, 29, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x140338842592967 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = x140338842592967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140338842592999 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = x140338842592999;
pushCont(co, 31, clofun2, 1, value);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140338842593159 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = x140338842593159;
Obj x140338842772199 = makeNative(32, clofun2, 1, 2, value, rules);
Obj x140338842594567 = PRIM_ISCONS(value);
if (True == x140338842594567) {
Obj x140338842594951 = PRIM_CAR(value);
Obj x140338842594983 = PRIM_EQ(symcons, x140338842594951);
Obj x140338842595015 = primNot(x140338842594983);
if (True == x140338842595015) {
__nargs = 2;
__arg0 = x140338842772199;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140338842772199;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = x140338842772199;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj x140338842772231 = __arg1;
if (True == x140338842772231) {
Obj x140338842593511 = primGenSym();
Obj val = x140338842593511;
pushCont(co, 33, clofun2, 1, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = val;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x140338842593927 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842593959 = makeCons(x140338842593927, Nil);
Obj x140338842594055 = makeCons(closureRef(co, 0), x140338842593959);
Obj x140338842594087 = makeCons(val, x140338842594055);
Obj x140338842594119 = makeCons(symlet, x140338842594087);
__nargs = 2;
__arg1 = x140338842594119;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj value = __arg1;
Obj rules = __arg2;
pushCont(co, 35, clofun2, 2, value, rules);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140338842626535 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140338842626535) {
Obj x140338842626695 = makeCons(makeCString("no match-help found!"), Nil);
Obj x140338842626727 = makeCons(symerror, x140338842626695);
__nargs = 2;
__arg1 = x140338842626727;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842772007 = makeNative(38, clofun2, 1, 2, value, rules);
pushCont(co, 36, clofun2, 2, rules, x140338842772007);
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

label36:
{
Obj x140338842592263 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842772007= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140338842592263) {
Obj x140338842592487 = PRIM_CDR(rules);
pushCont(co, 37, clofun2, 1, x140338842772007);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = x140338842592487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140338842772007;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj x140338842592519 = __arg1;
Obj x140338842772007= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140338842592519) {
__nargs = 2;
__arg0 = x140338842772007;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140338842772007;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj x140338842772167 = __arg1;
if (True == x140338842772167) {
Obj x140338842627111 = PRIM_CAR(closureRef(co, 1));
Obj pat = x140338842627111;
Obj x140338842627271 = primGenSym();
Obj cc = x140338842627271;
pushCont(co, 39, clofun2, 2, pat, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35extract_45rule_45action);
__arg1 = closureRef(co, 1);
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

label39:
{
Obj x140338842627463 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj action = x140338842627463;
pushCont(co, 40, clofun2, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140338842627687 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 41, clofun2, 1, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x140338842627687;
__arg2 = closureRef(co, 0);
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140338842627751 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = x140338842627751;
Obj x140338842591239 = PRIM_CDR(closureRef(co, 1));
Obj x140338842591271 = PRIM_CDR(x140338842591239);
pushCont(co, 42, clofun2, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = closureRef(co, 0);
__arg2 = x140338842591271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140338842591303 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140338842591303;
Obj x140338842591719 = makeCons(rest, Nil);
Obj x140338842591751 = makeCons(Nil, x140338842591719);
Obj x140338842591783 = makeCons(symlambda, x140338842591751);
Obj x140338842591879 = makeCons(curr, Nil);
Obj x140338842591911 = makeCons(x140338842591783, x140338842591879);
Obj x140338842591943 = makeCons(cc, x140338842591911);
Obj x140338842591975 = makeCons(symlet, x140338842591943);
__nargs = 2;
__arg1 = x140338842591975;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj x140338842624647 = PRIM_CDR(rules);
Obj x140338842624679 = PRIM_CAR(x140338842624647);
Obj action = x140338842624679;
Obj x140338842771623 = makeNative(45, clofun2, 1, 2, cc, action);
pushCont(co, 44, clofun2, 2, action, x140338842771623);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140338842625895 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842771623= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140338842625895) {
Obj x140338842626119 = PRIM_CAR(action);
Obj x140338842626151 = PRIM_EQ(x140338842626119, symwhere);
if (True == x140338842626151) {
__nargs = 2;
__arg0 = x140338842771623;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140338842771623;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = x140338842771623;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj x140338842771719 = __arg1;
if (True == x140338842771719) {
PUSH_CONT_0(co, 46, clofun2);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = closureRef(co, 1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label46:
{
Obj x140338842625127 = __arg1;
pushCont(co, 47, clofun2, 1, x140338842625127);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140338842625319 = __arg1;
Obj x140338842625127= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842625511 = makeCons(closureRef(co, 0), Nil);
Obj x140338842625543 = makeCons(x140338842625511, Nil);
Obj x140338842625575 = makeCons(x140338842625319, x140338842625543);
Obj x140338842625607 = makeCons(x140338842625127, x140338842625575);
Obj x140338842625639 = makeCons(symif, x140338842625607);
__nargs = 2;
__arg1 = x140338842625639;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label48:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 49, clofun2, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = makeNative(2, clofun3, 1, 0);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140338842628359 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140338842628359) {
Obj x140338842628519 = PRIM_EQ(pat, expr);
if (True == x140338842628519) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842629063 = makeCons(expr, Nil);
Obj x140338842629095 = makeCons(pat, x140338842629063);
Obj x140338842629127 = makeCons(sym_61, x140338842629095);
Obj x140338842629799 = makeCons(cc, Nil);
Obj x140338842629831 = makeCons(x140338842629799, Nil);
Obj x140338842629863 = makeCons(body, x140338842629831);
Obj x140338842629895 = makeCons(x140338842629127, x140338842629863);
Obj x140338842629927 = makeCons(symif, x140338842629895);
__nargs = 2;
__arg1 = x140338842629927;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj x140338842630087 = primIsSymbol(pat);
if (True == x140338842630087) {
Obj x140338842630503 = makeCons(body, Nil);
Obj x140338842630535 = makeCons(expr, x140338842630503);
Obj x140338842630567 = makeCons(pat, x140338842630535);
Obj x140338842630663 = makeCons(symlet, x140338842630567);
__nargs = 2;
__arg1 = x140338842630663;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 0, clofun3, 4, expr, body, cc, pat);
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
Obj x140338842630823 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140338842630823) {
Obj x140338842631047 = PRIM_CAR(pat);
Obj x140338842631079 = PRIM_EQ(x140338842631047, symquote);
if (True == x140338842631079) {
Obj x140338842631431 = makeCons(expr, Nil);
Obj x140338842631463 = makeCons(pat, x140338842631431);
Obj x140338842631495 = makeCons(sym_61, x140338842631463);
Obj x140338842631719 = makeCons(cc, Nil);
Obj x140338842631751 = makeCons(x140338842631719, Nil);
Obj x140338842631783 = makeCons(body, x140338842631751);
Obj x140338842631815 = makeCons(x140338842631495, x140338842631783);
Obj x140338842631847 = makeCons(symif, x140338842631815);
__nargs = 2;
__arg1 = x140338842631847;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842632071 = PRIM_CAR(pat);
Obj x140338842632103 = PRIM_EQ(x140338842632071, symcons);
if (True == x140338842632103) {
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match_45cons_45expander);
__arg1 = pat;
__arg2 = expr;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
PUSH_CONT_0(co, 1, clofun3);
__nargs = 3;
__arg0 = globalRef(symstr);
__arg1 = makeCString("match fail ");
__arg2 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj x140338842624199 = __arg1;
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = x140338842624199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x = __arg1;
pushCont(co, 3, clofun3, 1, x);
__nargs = 2;
__arg0 = globalRef(symatom_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140338842697703 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140338842697703) {
Obj x140338842628295 = primIsSymbol(x);
Obj x140338842628327 = primNot(x140338842628295);
if (True == x140338842628327) {
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

label4:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 5, clofun3, 4, pat, body, cc, expr);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140338842693991 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = x140338842693991;
pushCont(co, 6, clofun3, 4, x, body, cc, expr);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140338842694151 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = x140338842694151;
Obj x140338842771559 = makeNative(7, clofun3, 1, 5, x, y, expr, body, cc);
Obj x140338842696871 = PRIM_ISCONS(expr);
if (True == x140338842696871) {
Obj x140338842697095 = PRIM_CAR(expr);
Obj x140338842697127 = PRIM_EQ(x140338842697095, symcons);
if (True == x140338842697127) {
__nargs = 2;
__arg0 = x140338842771559;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140338842771559;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = x140338842771559;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj x140338842771591 = __arg1;
if (True == x140338842771591) {
PUSH_CONT_0(co, 10, clofun3);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140338842695431 = makeCons(closureRef(co, 2), Nil);
Obj x140338842695463 = makeCons(symcons_63, x140338842695431);
Obj x140338842695815 = makeCons(closureRef(co, 2), Nil);
Obj x140338842695847 = makeCons(symcar, x140338842695815);
Obj x140338842696135 = makeCons(closureRef(co, 2), Nil);
Obj x140338842696167 = makeCons(symcdr, x140338842696135);
pushCont(co, 8, clofun3, 2, x140338842695847, x140338842695463);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = closureRef(co, 1);
__arg2 = x140338842696167;
__arg3 = closureRef(co, 3);
co->args[4] = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj x140338842696263 = __arg1;
Obj x140338842695847= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842695463= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 9, clofun3, 1, x140338842695463);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = closureRef(co, 0);
__arg2 = x140338842695847;
__arg3 = x140338842696263;
co->args[4] = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140338842696327 = __arg1;
Obj x140338842695463= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842696519 = makeCons(closureRef(co, 4), Nil);
Obj x140338842696551 = makeCons(x140338842696519, Nil);
Obj x140338842696583 = makeCons(x140338842696327, x140338842696551);
Obj x140338842696615 = makeCons(x140338842695463, x140338842696583);
Obj x140338842696647 = makeCons(symif, x140338842696615);
__nargs = 2;
__arg1 = x140338842696647;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj x140338842694535 = __arg1;
Obj e1 = x140338842694535;
pushCont(co, 11, clofun3, 1, e1);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140338842694727 = __arg1;
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e2 = x140338842694727;
pushCont(co, 12, clofun3, 1, e1);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = closureRef(co, 1);
__arg2 = e2;
__arg3 = closureRef(co, 3);
co->args[4] = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140338842695047 = __arg1;
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = closureRef(co, 0);
__arg2 = e1;
__arg3 = x140338842695047;
co->args[4] = closureRef(co, 4);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj exp = __arg1;
Obj x140338842775431 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = x140338842775431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj pat = __arg1;
Obj x140338842773671 = PRIM_CDR(pat);
pushCont(co, 15, clofun3, 1, pat);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140338842773671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140338842773863 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140338842773863) {
Obj x140338842774375 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = x140338842774375;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842774631 = PRIM_CAR(pat);
Obj x140338842774887 = PRIM_CDR(pat);
pushCont(co, 16, clofun3, 1, x140338842774631);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = x140338842774887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj x140338842774919 = __arg1;
Obj x140338842774631= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842774951 = makeCons(x140338842774919, Nil);
Obj x140338842774983 = makeCons(x140338842774631, x140338842774951);
Obj x140338842775015 = makeCons(symcons, x140338842774983);
__nargs = 2;
__arg1 = x140338842775015;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj x = __arg1;
Obj x140338842772999 = PRIM_EQ(x, True);
if (True == x140338842772999) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842773191 = PRIM_EQ(x, False);
if (True == x140338842773191) {
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

label18:
{
Obj exp = __arg1;
Obj x140338842771879 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = x140338842771879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj l = __arg1;
Obj x140338842408711 = PRIM_EQ(Nil, l);
if (True == x140338842408711) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842408935 = PRIM_CAR(l);
Obj x140338842408967 = PRIM_EQ(x140338842408935, False);
if (True == x140338842408967) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842409191 = PRIM_CDR(l);
pushCont(co, 20, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = x140338842409191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label20:
{
Obj x140338842409223 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = x140338842409223;
Obj x140338842409383 = PRIM_EQ(more, False);
if (True == x140338842409383) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842409607 = PRIM_CAR(l);
Obj x140338842409767 = makeCons(False, Nil);
Obj x140338842409799 = makeCons(more, x140338842409767);
Obj x140338842409831 = makeCons(x140338842409607, x140338842409799);
Obj x140338842409863 = makeCons(symif, x140338842409831);
__nargs = 2;
__arg1 = x140338842409863;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label21:
{
Obj exp = __arg1;
Obj x140338842408327 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = x140338842408327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj l = __arg1;
Obj x140338842455943 = PRIM_EQ(l, Nil);
if (True == x140338842455943) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842407015 = PRIM_CAR(l);
Obj x140338842407047 = PRIM_EQ(x140338842407015, True);
if (True == x140338842407047) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842407271 = PRIM_CDR(l);
pushCont(co, 23, clofun3, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = x140338842407271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label23:
{
Obj x140338842407303 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = x140338842407303;
Obj x140338842407463 = PRIM_EQ(more, True);
if (True == x140338842407463) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842407687 = PRIM_CAR(l);
Obj x140338842407847 = makeCons(more, Nil);
Obj x140338842407879 = makeCons(True, x140338842407847);
Obj x140338842407911 = makeCons(x140338842407687, x140338842407879);
Obj x140338842407943 = makeCons(symif, x140338842407911);
__nargs = 2;
__arg1 = x140338842407943;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label24:
{
Obj exp = __arg1;
Obj x140338842454407 = PRIM_CDR(exp);
Obj x140338842454439 = PRIM_EQ(Nil, x140338842454407);
if (True == x140338842454439) {
Obj x140338842454599 = makeCons(makeCString("no cond match"), Nil);
Obj x140338842454631 = makeCons(symerror, x140338842454599);
__nargs = 2;
__arg1 = x140338842454631;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 25, clofun3, 1, exp);
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

label25:
{
Obj x140338842454791 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = x140338842454791;
Obj x140338842455015 = PRIM_CAR(curr);
pushCont(co, 26, clofun3, 2, exp, x140338842455015);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = curr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140338842455175 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842455015= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun3, 2, x140338842455175, x140338842455015);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140338842455399 = __arg1;
Obj x140338842455175= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842455015= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842455431 = makeCons(symcond, x140338842455399);
Obj x140338842455463 = makeCons(x140338842455431, Nil);
Obj x140338842455495 = makeCons(x140338842455175, x140338842455463);
Obj x140338842455527 = makeCons(x140338842455015, x140338842455495);
Obj x140338842455559 = makeCons(symif, x140338842455527);
__nargs = 2;
__arg1 = x140338842455559;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj exp = __arg1;
Obj x140338842453959 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = x140338842453959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj exp = __arg1;
Obj x140338842452679 = PRIM_CDR(exp);
pushCont(co, 30, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140338842452679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140338842452711 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140338842452711) {
Obj x140338842452807 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = x140338842452807;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842453031 = PRIM_CAR(exp);
pushCont(co, 31, clofun3, 2, exp, x140338842453031);
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
Obj x140338842453191 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842453031= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 32, clofun3, 2, x140338842453191, x140338842453031);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140338842453415 = __arg1;
Obj x140338842453191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842453031= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun3, 2, x140338842453191, x140338842453031);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = x140338842453415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140338842453447 = __arg1;
Obj x140338842453191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842453031= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842453479 = makeCons(x140338842453447, Nil);
Obj x140338842453511 = makeCons(x140338842453191, x140338842453479);
Obj x140338842453543 = makeCons(x140338842453031, x140338842453511);
Obj x140338842453575 = makeCons(symlet, x140338842453543);
__nargs = 2;
__arg1 = x140338842453575;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x = __arg1;
Obj x140338842452199 = PRIM_ISCONS(x);
Obj x140338842452231 = primNot(x140338842452199);
__nargs = 2;
__arg1 = x140338842452231;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj x = __arg1;
Obj l = __arg2;
Obj x140338842467783 = PRIM_ISCONS(l);
if (True == x140338842467783) {
Obj x140338842468007 = PRIM_CAR(l);
Obj x140338842468039 = PRIM_EQ(x140338842468007, x);
if (True == x140338842468039) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842468199 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symelem_63);
__arg1 = x;
__arg2 = x140338842468199;
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

label36:
{
Obj exp = __arg1;
pushCont(co, 37, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140338842466759 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 38, clofun3, 2, exp, x140338842466759);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140338842467047 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842466759= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun3, 2, x140338842467047, x140338842466759);
__nargs = 2;
__arg0 = globalRef(symcadddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140338842467207 = __arg1;
Obj x140338842467047= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842466759= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842467239 = makeCons(x140338842467207, Nil);
Obj x140338842467271 = makeCons(x140338842467047, x140338842467239);
Obj x140338842467303 = makeCons(symlambda, x140338842467271);
Obj x140338842467335 = makeCons(x140338842467303, Nil);
Obj x140338842467367 = makeCons(x140338842466759, x140338842467335);
Obj x140338842467399 = makeCons(symdef, x140338842467367);
__nargs = 2;
__arg1 = x140338842467399;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj exp = __arg1;
Obj x140338842464743 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = x140338842464743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj exp = __arg1;
pushCont(co, 42, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140338842484071 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842484103 = makeCons(x140338842484071, Nil);
Obj x140338842484135 = makeCons(symquote, x140338842484103);
pushCont(co, 43, clofun3, 2, exp, x140338842484135);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140338842484423 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842484135= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun3, 2, x140338842484423, x140338842484135);
__nargs = 2;
__arg0 = globalRef(symcdddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140338842484519 = __arg1;
Obj x140338842484423= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842484135= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140338842484551 = makeCons(x140338842484423, x140338842484519);
Obj x140338842484583 = makeCons(symlambda, x140338842484551);
Obj x140338842484615 = makeCons(x140338842484583, Nil);
Obj x140338842484647 = makeCons(x140338842484135, x140338842484615);
Obj x140338842484679 = makeCons(symcora_47init_35add_45to_45_42macros_42, x140338842484647);
__nargs = 2;
__arg1 = x140338842484679;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj exp = __arg1;
Obj x140338842481351 = PRIM_ISCONS(exp);
if (True == x140338842481351) {
Obj x140338842481575 = PRIM_CAR(exp);
Obj x140338842481607 = PRIM_EQ(x140338842481575, globalRef(sym_42protect_45symbol_42));
if (True == x140338842481607) {
Obj x140338842481703 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = x140338842481703;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842481927 = PRIM_CAR(exp);
Obj x140338842481959 = PRIM_EQ(x140338842481927, symlambda);
if (True == x140338842481959) {
pushCont(co, 48, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140338842482759 = PRIM_CAR(exp);
Obj x140338842482791 = PRIM_EQ(x140338842482759, symquote);
if (True == x140338842482791) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 46, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand1);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label46:
{
Obj x140338842483335 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(47, clofun3, 1, 1, exp);
__arg1 = x140338842483335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj exp1 = __arg1;
Obj x140338842483111 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == x140338842483111) {
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35macroexpand_45boot);
__arg2 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj x140338842482183 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun3, 1, x140338842482183);
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
Obj x140338842482407 = __arg1;
Obj x140338842482183= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 0, clofun4, 1, x140338842482183);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = x140338842482407;
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

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140338842482439 = __arg1;
Obj x140338842482183= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842482471 = makeCons(x140338842482439, Nil);
Obj x140338842482503 = makeCons(x140338842482183, x140338842482471);
Obj x140338842482535 = makeCons(symlambda, x140338842482503);
__nargs = 2;
__arg1 = x140338842482535;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
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

label2:
{
Obj exp = __arg1;
Obj macros = __arg2;
Obj x140338842540615 = PRIM_EQ(Nil, macros);
if (True == x140338842540615) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140338842480679 = PRIM_CAR(macros);
__nargs = 2;
__arg0 = makeNative(3, clofun4, 1, 2, macros, exp);
__arg1 = x140338842480679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj item = __arg1;
Obj x140338842693927 = makeNative(4, clofun4, 1, 3, item, closureRef(co, 1), closureRef(co, 0));
Obj x140338842541639 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140338842541639) {
Obj x140338842541895 = PRIM_CAR(closureRef(co, 1));
Obj x140338842541991 = PRIM_CAR(item);
Obj x140338842542023 = PRIM_EQ(x140338842541895, x140338842541991);
if (True == x140338842542023) {
__nargs = 2;
__arg0 = x140338842693927;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x140338842693927;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = x140338842693927;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj x140338842693959 = __arg1;
if (True == x140338842693959) {
Obj x140338842541127 = PRIM_CDR(closureRef(co, 0));
__nargs = 2;
__arg0 = x140338842541127;
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140338842541383 = PRIM_CDR(closureRef(co, 2));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 1);
__arg2 = x140338842541383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj n = __arg1;
Obj v = __arg2;
Obj x140338842540167 = makeCons(n, v);
Obj x140338842540199 = makeCons(x140338842540167, globalRef(sym_42macros_42));
Obj x140338842540231 = primSet(co, sym_42macros_42, x140338842540199);
__nargs = 2;
__arg1 = x140338842540231;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
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

label7:
{
Obj res = __arg1;
Obj f = __arg2;
Obj l = __arg3;
Obj x140338842538503 = PRIM_ISCONS(l);
if (True == x140338842538503) {
Obj x140338842538791 = PRIM_CAR(l);
pushCont(co, 8, clofun4, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = x140338842538791;
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

label8:
{
Obj x140338842538823 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140338842538855 = makeCons(x140338842538823, res);
Obj x140338842538951 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symmap_45h);
__arg1 = x140338842538855;
__arg2 = f;
__arg3 = x140338842538951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj res = __arg1;
Obj l = __arg2;
Obj x140338842590759 = PRIM_ISCONS(l);
if (True == x140338842590759) {
Obj x140338842590983 = PRIM_CAR(l);
Obj x140338842591015 = makeCons(x140338842590983, res);
Obj x140338842591111 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35reverse_45h);
__arg1 = x140338842591015;
__arg2 = x140338842591111;
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

label10:
{
Obj x = __arg1;
Obj x140338842590375 = PRIM_ISCONS(x);
__nargs = 2;
__arg1 = x140338842590375;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj exp = __arg1;
Obj x140338842589479 = PRIM_ISCONS(exp);
if (True == x140338842589479) {
Obj x140338842589703 = PRIM_CAR(exp);
Obj x140338842589927 = PRIM_CDR(exp);
pushCont(co, 12, clofun4, 1, x140338842589703);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = x140338842589927;
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

label12:
{
Obj x140338842589959 = __arg1;
Obj x140338842589703= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140338842589991 = makeCons(x140338842589959, Nil);
Obj x140338842590023 = makeCons(x140338842589703, x140338842589991);
Obj x140338842590055 = makeCons(symcons, x140338842590023);
__nargs = 2;
__arg1 = x140338842590055;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj x = __arg1;
Obj x140338842589031 = PRIM_CDR(x);
Obj x140338842589063 = PRIM_CDR(x140338842589031);
Obj x140338842589095 = PRIM_CDR(x140338842589063);
__nargs = 2;
__arg1 = x140338842589095;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj x = __arg1;
Obj x140338842588487 = PRIM_CDR(x);
Obj x140338842588519 = PRIM_CDR(x140338842588487);
Obj x140338842588551 = PRIM_CDR(x140338842588519);
Obj x140338842588583 = PRIM_CAR(x140338842588551);
__nargs = 2;
__arg1 = x140338842588583;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj x = __arg1;
Obj x140338842587911 = PRIM_CDR(x);
Obj x140338842587943 = PRIM_CDR(x140338842587911);
Obj x140338842587975 = PRIM_CAR(x140338842587943);
__nargs = 2;
__arg1 = x140338842587975;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x = __arg1;
Obj x140338842587431 = PRIM_CDR(x);
Obj x140338842587463 = PRIM_CDR(x140338842587431);
__nargs = 2;
__arg1 = x140338842587463;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj x = __arg1;
Obj x140338842595207 = PRIM_CAR(x);
Obj x140338842595239 = PRIM_CDR(x140338842595207);
__nargs = 2;
__arg1 = x140338842595239;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj x = __arg1;
Obj x140338842594791 = PRIM_CAR(x);
Obj x140338842594823 = PRIM_CAR(x140338842594791);
__nargs = 2;
__arg1 = x140338842594823;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj x = __arg1;
Obj x140338842594375 = PRIM_CDR(x);
Obj x140338842594407 = PRIM_CAR(x140338842594375);
__nargs = 2;
__arg1 = x140338842594407;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj x = __arg1;
Obj x140338842593991 = PRIM_EQ(x, Nil);
__nargs = 2;
__arg1 = x140338842593991;
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

