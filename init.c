#include "types.h"
#include "runtime.h"

static void clofun0(struct Cora* co);
static void clofun1(struct Cora* co);
static void clofun2(struct Cora* co);
static void clofun3(struct Cora* co);
static void clofun4(struct Cora* co);
static void clofun5(struct Cora* co);


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
static Obj symvector;
static Obj symcora_47init_35_42ns_45export_42;
static Obj symnumber_63;
static Obj symcora_47init_35builtin_63;
static Obj symassq;
static Obj symstring_63;
static Obj syminteger_63;
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
static Obj symcora_47init_35parse;
static Obj symns;
static Obj symcora_47init_35rewrite_45namespace;
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
symvector = intern("vector");
symcora_47init_35_42ns_45export_42 = intern("cora/init#*ns-export*");
symnumber_63 = intern("number?");
symcora_47init_35builtin_63 = intern("cora/init#builtin?");
symassq = intern("assq");
symstring_63 = intern("string?");
syminteger_63 = intern("integer?");
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
symcora_47init_35parse = intern("cora/init#parse");
symns = intern("ns");
symcora_47init_35rewrite_45namespace = intern("cora/init#rewrite-namespace");
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
Obj x140246339622983 = primSet(co, symnull_63, makeNative(32, clofun5, 1, 0));
Obj x140246339623719 = primSet(co, symcadr, makeNative(31, clofun5, 1, 0));
Obj x140246339624455 = primSet(co, symcaar, makeNative(30, clofun5, 1, 0));
Obj x140246339371239 = primSet(co, symcdar, makeNative(29, clofun5, 1, 0));
Obj x140246339371975 = primSet(co, symcddr, makeNative(28, clofun5, 1, 0));
Obj x140246339372903 = primSet(co, symcaddr, makeNative(27, clofun5, 1, 0));
Obj x140246339374023 = primSet(co, symcadddr, makeNative(26, clofun5, 1, 0));
Obj x140246339374951 = primSet(co, symcdddr, makeNative(25, clofun5, 1, 0));
Obj x140246339319463 = primSet(co, symrcons, makeNative(23, clofun5, 1, 0));
Obj x140246339320007 = primSet(co, sympair_63, makeNative(22, clofun5, 1, 0));
Obj x140246339321415 = primSet(co, symcora_47init_35reverse_45h, makeNative(21, clofun5, 2, 0));
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
Obj x140246338969639 = __arg1;
Obj x140246338969703 = primSet(co, symreverse, x140246338969639);
Obj x140246338972327 = primSet(co, symmap_45h, makeNative(19, clofun5, 3, 0));
Obj x140246338973031 = primSet(co, symmap, makeNative(18, clofun5, 2, 0));
Obj x140246338973383 = primSet(co, sym_42macros_42, Nil);
Obj x140246338949543 = primGenSym();
Obj x140246338949607 = primSet(co, sym_42protect_45symbol_42, x140246338949543);
Obj x140246338950855 = primSet(co, symcora_47init_35add_45to_45_42macros_42, makeNative(17, clofun5, 2, 0));
Obj x140246338824519 = primSet(co, symcora_47init_35macroexpand1_45h, makeNative(15, clofun5, 2, 0));
Obj x140246338825063 = primSet(co, symcora_47init_35macroexpand1, makeNative(14, clofun5, 1, 0));
Obj x140246338702727 = primSet(co, symcora_47init_35macroexpand_45boot, makeNative(8, clofun5, 1, 0));
Obj x140246338703015 = primSet(co, symmacroexpand, globalRef(symcora_47init_35macroexpand_45boot));
Obj x140246338627719 = primSet(co, symdefmacro_45macro, makeNative(4, clofun5, 1, 0));
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
Obj x140246338628007 = __arg1;
PUSH_CONT_0(co, 3, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symlist;
__arg2 = makeNative(3, clofun5, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140246338628711 = __arg1;
PUSH_CONT_0(co, 4, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symdefun;
__arg2 = makeNative(49, clofun4, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140246338602311 = __arg1;
Obj x140246338603783 = primSet(co, symelem_63, makeNative(48, clofun4, 2, 0));
Obj x140246338551975 = primSet(co, symatom_63, makeNative(47, clofun4, 1, 0));
Obj x140246339748807 = primSet(co, symcora_47init_35rewrite_45let, makeNative(42, clofun4, 1, 0));
PUSH_CONT_0(co, 5, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symlet;
__arg2 = makeNative(41, clofun4, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140246339749511 = __arg1;
PUSH_CONT_0(co, 6, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symcond;
__arg2 = makeNative(37, clofun4, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140246339711783 = __arg1;
Obj x140246339714727 = primSet(co, symcora_47init_35rewrite_45or, makeNative(35, clofun4, 1, 0));
PUSH_CONT_0(co, 7, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symor;
__arg2 = makeNative(34, clofun4, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140246339621223 = __arg1;
Obj x140246339624327 = primSet(co, symcora_47init_35rewrite_45and, makeNative(32, clofun4, 1, 0));
PUSH_CONT_0(co, 8, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symand;
__arg2 = makeNative(31, clofun4, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140246339371271 = __arg1;
Obj x140246339372295 = primSet(co, symboolean_63, makeNative(30, clofun4, 1, 0));
Obj x140246339374823 = primSet(co, symcora_47init_35rcons1, makeNative(27, clofun4, 1, 0));
PUSH_CONT_0(co, 9, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symlist_45rest;
__arg2 = makeNative(26, clofun4, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140246339318343 = __arg1;
Obj x140246338701447 = primSet(co, symcora_47init_35match_45cons_45expander, makeNative(8, clofun4, 4, 0));
Obj x140246338552135 = primSet(co, symcora_47init_35match1, makeNative(2, clofun4, 4, 0));
Obj x140246338497895 = primSet(co, symcora_47init_35extract_45rule_45action, makeNative(44, clofun3, 2, 0));
Obj x140246339750119 = primSet(co, symcora_47init_35match_45helper, makeNative(28, clofun3, 2, 0));
Obj x140246339622599 = primSet(co, symcora_47init_35rewrite_45match, makeNative(21, clofun3, 1, 0));
PUSH_CONT_0(co, 10, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symmatch;
__arg2 = makeNative(20, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140246339623271 = __arg1;
Obj x140246338825255 = primSet(co, symcora_47init_35extract_45rules1, makeNative(13, clofun3, 3, 0));
Obj x140246338825959 = primSet(co, symcora_47init_35extract_45rules, makeNative(12, clofun3, 1, 0));
Obj x140246338701063 = primSet(co, symcora_47init_35rules_45patterns, makeNative(9, clofun3, 2, 0));
Obj x140246338702855 = primSet(co, symcora_47init_35length_45h, makeNative(8, clofun3, 2, 0));
Obj x140246338625671 = primSet(co, symlength, makeNative(7, clofun3, 1, 0));
Obj x140246338629031 = primSet(co, symcora_47init_35filter_45h, makeNative(5, clofun3, 3, 0));
Obj x140246338601063 = primSet(co, symfilter, makeNative(4, clofun3, 2, 0));
Obj x140246338602951 = primSet(co, symappend, makeNative(2, clofun3, 2, 0));
Obj x140246338554567 = primSet(co, symcora_47init_35rules_45arg_45count, makeNative(45, clofun2, 1, 0));
Obj x140246338494727 = primSet(co, symcora_47init_35gen_45paramenters, makeNative(43, clofun2, 1, 0));
PUSH_CONT_0(co, 11, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symfunc;
__arg2 = makeNative(37, clofun2, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140246338498407 = __arg1;
Obj x140246338168039 = primSet(co, symcora_47init_35propagate_45boolean0, makeNative(25, clofun2, 1, 0));
Obj x140246338495975 = primSet(co, symcora_47init_35propagate_45boolean, makeNative(2, clofun2, 1, 0));
Obj x140246338449831 = primSet(co, symcora_47init_35rewrite_45namespace, makeNative(1, clofun2, 1, 0));
Obj x140246338451047 = primSet(co, symmacroexpand, makeNative(48, clofun1, 1, 0));
Obj x140246338252295 = primSet(co, symcora_47init_35rewrite_45begin, makeNative(43, clofun1, 1, 0));
PUSH_CONT_0(co, 12, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symbegin;
__arg2 = makeNative(42, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140246338228743 = __arg1;
Obj x140246338166887 = primSet(co, symcora_47init_35rewrite_45backquote, makeNative(36, clofun1, 1, 0));
PUSH_CONT_0(co, 13, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symbackquote;
__arg2 = makeNative(34, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140246338167591 = __arg1;
Obj x140246337888199 = primSet(co, symcora_47init_35parse_45define_45library_45h, makeNative(29, clofun1, 4, 0));
Obj x140246339850791 = primSet(co, symcora_47init_35parse_45define_45library, makeNative(28, clofun1, 2, 0));
PUSH_CONT_0(co, 14, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symdefine_45library;
__arg2 = makeNative(20, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140246339859751 = __arg1;
Obj x140246339861447 = primSet(co, symcora_47init_35var_45with_45ns, makeNative(15, clofun1, 2, 0));
Obj x140246339873767 = primSet(co, symcora_47init_35lookup_45var, makeNative(5, clofun1, 3, 0));
Obj x140246339874791 = makeCons(makeCString("primSet"), Nil);
Obj x140246339858439 = makeCons(MAKE_NUMBER(2), x140246339874791);
Obj x140246339858471 = makeCons(symset, x140246339858439);
Obj x140246339859335 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x140246339859463 = makeCons(MAKE_NUMBER(1), x140246339859335);
Obj x140246339859591 = makeCons(symcar, x140246339859463);
Obj x140246339860583 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x140246339860647 = makeCons(MAKE_NUMBER(1), x140246339860583);
Obj x140246339860679 = makeCons(symcdr, x140246339860647);
Obj x140246339861607 = makeCons(makeCString("makeCons"), Nil);
Obj x140246339861639 = makeCons(MAKE_NUMBER(2), x140246339861607);
Obj x140246339861671 = makeCons(symcons, x140246339861639);
Obj x140246339862471 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x140246339862503 = makeCons(MAKE_NUMBER(1), x140246339862471);
Obj x140246339850247 = makeCons(symcons_63, x140246339862503);
Obj x140246339851079 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x140246339851111 = makeCons(MAKE_NUMBER(2), x140246339851079);
Obj x140246339851143 = makeCons(sym_43, x140246339851111);
Obj x140246339852039 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x140246339852071 = makeCons(MAKE_NUMBER(2), x140246339852039);
Obj x140246339852103 = makeCons(sym_45, x140246339852071);
Obj x140246339852935 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x140246339852967 = makeCons(MAKE_NUMBER(2), x140246339852935);
Obj x140246339852999 = makeCons(sym_42, x140246339852967);
Obj x140246339853799 = makeCons(makeCString("primDiv"), Nil);
Obj x140246339853831 = makeCons(MAKE_NUMBER(2), x140246339853799);
Obj x140246339853863 = makeCons(sym_47, x140246339853831);
Obj x140246339789223 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x140246339789255 = makeCons(MAKE_NUMBER(2), x140246339789223);
Obj x140246339789287 = makeCons(sym_61, x140246339789255);
Obj x140246339790279 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x140246339790311 = makeCons(MAKE_NUMBER(2), x140246339790279);
Obj x140246339790343 = makeCons(sym_62, x140246339790311);
Obj x140246339791399 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x140246339791431 = makeCons(MAKE_NUMBER(2), x140246339791399);
Obj x140246339791463 = makeCons(sym_60, x140246339791431);
Obj x140246339792263 = makeCons(makeCString("primGenSym"), Nil);
Obj x140246339792455 = makeCons(MAKE_NUMBER(0), x140246339792263);
Obj x140246339792487 = makeCons(symgensym, x140246339792455);
Obj x140246339748455 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x140246339748487 = makeCons(MAKE_NUMBER(1), x140246339748455);
Obj x140246339748519 = makeCons(symsymbol_63, x140246339748487);
Obj x140246339750151 = makeCons(makeCString("primNot"), Nil);
Obj x140246339750183 = makeCons(MAKE_NUMBER(1), x140246339750151);
Obj x140246339750215 = makeCons(symnot, x140246339750183);
Obj x140246339751367 = makeCons(makeCString("primIsNumber"), Nil);
Obj x140246339751431 = makeCons(MAKE_NUMBER(1), x140246339751367);
Obj x140246339751463 = makeCons(syminteger_63, x140246339751431);
Obj x140246339711975 = makeCons(makeCString("primIsString"), Nil);
Obj x140246339712007 = makeCons(MAKE_NUMBER(1), x140246339711975);
Obj x140246339712039 = makeCons(symstring_63, x140246339712007);
Obj x140246339712135 = makeCons(x140246339712039, Nil);
Obj x140246339712167 = makeCons(x140246339751463, x140246339712135);
Obj x140246339712199 = makeCons(x140246339750215, x140246339712167);
Obj x140246339712231 = makeCons(x140246339748519, x140246339712199);
Obj x140246339712263 = makeCons(x140246339792487, x140246339712231);
Obj x140246339712295 = makeCons(x140246339791463, x140246339712263);
Obj x140246339712327 = makeCons(x140246339790343, x140246339712295);
Obj x140246339712455 = makeCons(x140246339789287, x140246339712327);
Obj x140246339712487 = makeCons(x140246339853863, x140246339712455);
Obj x140246339712519 = makeCons(x140246339852999, x140246339712487);
Obj x140246339712551 = makeCons(x140246339852103, x140246339712519);
Obj x140246339712647 = makeCons(x140246339851143, x140246339712551);
Obj x140246339712679 = makeCons(x140246339850247, x140246339712647);
Obj x140246339712711 = makeCons(x140246339861671, x140246339712679);
Obj x140246339712743 = makeCons(x140246339860679, x140246339712711);
Obj x140246339712775 = makeCons(x140246339859591, x140246339712743);
Obj x140246339712839 = makeCons(x140246339858471, x140246339712775);
Obj x140246339712935 = primSet(co, symcora_47init_35_42builtin_45prims_42, x140246339712839);
Obj x140246339374503 = primSet(co, symassq, makeNative(1, clofun1, 2, 0));
Obj x140246339319015 = primSet(co, symcora_47init_35builtin_63, makeNative(48, clofun0, 1, 0));
Obj x140246339960615 = primSet(co, symcora_47init_35parse, makeNative(15, clofun0, 4, 0));
Obj x140246339988231 = makeCons(symappend, Nil);
Obj x140246339988263 = makeCons(symfilter, x140246339988231);
Obj x140246339988295 = makeCons(symlength, x140246339988263);
Obj x140246339988327 = makeCons(symelem_63, x140246339988295);
Obj x140246339988359 = makeCons(symmacroexpand, x140246339988327);
Obj x140246339988391 = makeCons(symmap, x140246339988359);
Obj x140246339988423 = makeCons(symreverse, x140246339988391);
Obj x140246339988455 = makeCons(symthrow, x140246339988423);
Obj x140246339988487 = makeCons(symtry, x140246339988455);
Obj x140246339988519 = makeCons(symload, x140246339988487);
Obj x140246339988551 = makeCons(symimport, x140246339988519);
Obj x140246339988583 = makeCons(symload_45so, x140246339988551);
Obj x140246339988615 = makeCons(symapply, x140246339988583);
Obj x140246339988647 = makeCons(symvalue_45or, x140246339988615);
Obj x140246339988679 = makeCons(symvalue, x140246339988647);
Obj x140246339988711 = makeCons(symread_45file_45as_45sexp, x140246339988679);
Obj x140246339988743 = makeCons(symbytes_45length, x140246339988711);
Obj x140246339988775 = makeCons(symbytes, x140246339988743);
Obj x140246339988807 = makeCons(symvector_45length, x140246339988775);
Obj x140246339988839 = makeCons(symvector_45ref, x140246339988807);
Obj x140246339988871 = makeCons(symvector_45set_33, x140246339988839);
Obj x140246339988903 = makeCons(symvector, x140246339988871);
Obj x140246339988935 = makeCons(symsymbol_45_62string, x140246339988903);
Obj x140246339988967 = makeCons(symintern, x140246339988935);
Obj x140246339988999 = makeCons(symstring_45append, x140246339988967);
Obj x140246339989031 = makeCons(symnull_63, x140246339988999);
Obj x140246339989063 = makeCons(symnumber_63, x140246339989031);
Obj x140246339989095 = makeCons(symboolean_63, x140246339989063);
Obj x140246339989127 = makeCons(symatom_63, x140246339989095);
Obj x140246339989159 = makeCons(sympair_63, x140246339989127);
Obj x140246339989191 = makeCons(symcdddr, x140246339989159);
Obj x140246339989223 = makeCons(symcadddr, x140246339989191);
Obj x140246339989255 = makeCons(symcaddr, x140246339989223);
Obj x140246339989287 = makeCons(symcddr, x140246339989255);
Obj x140246339989319 = makeCons(symcdar, x140246339989287);
Obj x140246339989351 = makeCons(symcaar, x140246339989319);
Obj x140246339989383 = makeCons(symcadr, x140246339989351);
Obj x140246339989415 = primSet(co, symcora_47init_35_42ns_45export_42, x140246339989383);
Obj x140246339956999 = primSet(co, symcora_47init_35cadr, globalRef(symcadr));
Obj x140246339957287 = primSet(co, symcora_47init_35caar, globalRef(symcaar));
Obj x140246339957671 = primSet(co, symcora_47init_35cdar, globalRef(symcdar));
Obj x140246339957959 = primSet(co, symcora_47init_35cddr, globalRef(symcddr));
Obj x140246339958311 = primSet(co, symcora_47init_35caddr, globalRef(symcaddr));
Obj x140246339958599 = primSet(co, symcora_47init_35cadddr, globalRef(symcadddr));
Obj x140246339958887 = primSet(co, symcora_47init_35cdddr, globalRef(symcdddr));
Obj x140246339959207 = primSet(co, symcora_47init_35pair_63, globalRef(sympair_63));
Obj x140246339959495 = primSet(co, symcora_47init_35atom_63, globalRef(symatom_63));
Obj x140246339959815 = primSet(co, symcora_47init_35boolean_63, globalRef(symboolean_63));
Obj x140246339960135 = primSet(co, symcora_47init_35null_63, globalRef(symnull_63));
Obj x140246339960455 = primSet(co, symcora_47init_35number_63, globalRef(symnumber_63));
Obj x140246339960775 = primSet(co, symcora_47init_35string_45append, globalRef(symstring_45append));
Obj x140246339940583 = primSet(co, symcora_47init_35intern, globalRef(symintern));
Obj x140246339940903 = primSet(co, symcora_47init_35symbol_45_62string, globalRef(symsymbol_45_62string));
Obj x140246339941319 = primSet(co, symcora_47init_35vector, globalRef(symvector));
Obj x140246339941607 = primSet(co, symcora_47init_35vector_45set_33, globalRef(symvector_45set_33));
Obj x140246339941895 = primSet(co, symcora_47init_35vector_45ref, globalRef(symvector_45ref));
Obj x140246339942183 = primSet(co, symcora_47init_35vector_45length, globalRef(symvector_45length));
Obj x140246339942535 = primSet(co, symcora_47init_35bytes, globalRef(symbytes));
Obj x140246339942823 = primSet(co, symcora_47init_35bytes_45length, globalRef(symbytes_45length));
Obj x140246339943111 = primSet(co, symcora_47init_35value, globalRef(symvalue));
Obj x140246339943431 = primSet(co, symcora_47init_35value_45or, globalRef(symvalue_45or));
Obj x140246339943719 = primSet(co, symcora_47init_35read_45file_45as_45sexp, globalRef(symread_45file_45as_45sexp));
Obj x140246339944071 = primSet(co, symcora_47init_35apply, globalRef(symapply));
Obj x140246339944423 = primSet(co, symcora_47init_35load, globalRef(symload));
Obj x140246339928359 = primSet(co, symcora_47init_35load_45so, globalRef(symload_45so));
Obj x140246339928711 = primSet(co, symcora_47init_35import, globalRef(symimport));
Obj x140246339928999 = primSet(co, symcora_47init_35try, globalRef(symtry));
Obj x140246339929351 = primSet(co, symcora_47init_35throw, globalRef(symthrow));
Obj x140246339929703 = primSet(co, symcora_47init_35reverse, globalRef(symreverse));
Obj x140246339929991 = primSet(co, symcora_47init_35map, globalRef(symmap));
Obj x140246339930375 = primSet(co, symcora_47init_35macroexpand, globalRef(symmacroexpand));
Obj x140246339930663 = primSet(co, symcora_47init_35elem_63, globalRef(symelem_63));
Obj x140246339931047 = primSet(co, symcora_47init_35length, globalRef(symlength));
Obj x140246339931335 = primSet(co, symcora_47init_35filter, globalRef(symfilter));
Obj x140246339931751 = primSet(co, symcora_47init_35append, globalRef(symappend));
Obj x140246339931975 = primSet(co, symcora_47init_35assq, globalRef(symassq));
__nargs = 2;
__arg1 = x140246339931975;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj x140246338949383 = __arg1;
Obj x140246338949415 = __arg2;
Obj x140246338949447 = __arg3;
Obj x140246338949479 = co->args[4];
Obj x140246338949831 = makeNative(19, clofun0, 0, 4, x140246338949383, x140246338949415, x140246338949447, x140246338949479);
Obj __ = x140246338949383;
__ = x140246338949415;
__ = x140246338949447;
Obj x = x140246338949479;
pushCont(co, 16, clofun0, 2, x, x140246338949831);
__nargs = 2;
__arg0 = globalRef(symnumber_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140246339959175 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338949831= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140246339959175) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338949831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj x140246339959559 = primIsString(x);
if (True == x140246339959559) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338949831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 17, clofun0, 2, x, x140246338949831);
__nargs = 2;
__arg0 = globalRef(symboolean_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label17:
{
Obj x140246339959943 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338949831= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140246339959943) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338949831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 18, clofun0, 2, x, x140246338949831);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj x140246339960327 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338949831= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140246339960327) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338949831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338949831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label19:
{
Obj x140246338950535 = makeNative(20, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj __ = closureRef(co, 0);
__ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj x140246339943303 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140246339943303) {
Obj x140246339943751 = PRIM_CAR(closureRef(co, 3));
Obj x140246339943783 = PRIM_EQ(symquote, x140246339943751);
if (True == x140246339943783) {
Obj x140246339944199 = PRIM_CDR(closureRef(co, 3));
Obj x140246339944231 = PRIM_ISCONS(x140246339944199);
if (True == x140246339944231) {
Obj x140246339956935 = PRIM_CDR(closureRef(co, 3));
Obj x140246339956967 = PRIM_CAR(x140246339956935);
Obj x = x140246339956967;
Obj x140246339957575 = PRIM_CDR(closureRef(co, 3));
Obj x140246339957607 = PRIM_CDR(x140246339957575);
Obj x140246339957639 = PRIM_EQ(Nil, x140246339957607);
if (True == x140246339957639) {
Obj x140246339958055 = makeCons(x, Nil);
Obj x140246339958087 = makeCons(symquote, x140246339958055);
__nargs = 2;
__arg1 = x140246339958087;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338950535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj x140246338951495 = makeNative(22, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x = closureRef(co, 3);
Obj x140246339942215 = primIsSymbol(x);
if (True == x140246339942215) {
pushCont(co, 21, clofun0, 3, x, ns, import);
__nargs = 3;
__arg0 = globalRef(symelem_63);
__arg1 = x;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338951495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj x140246339942503 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140246339942503) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 4;
__arg0 = globalRef(symcora_47init_35lookup_45var);
__arg1 = x;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj x140246338952167 = makeNative(25, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140246339928167 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140246339928167) {
Obj x140246339928615 = PRIM_CAR(closureRef(co, 3));
Obj x140246339928647 = PRIM_EQ(symlambda, x140246339928615);
if (True == x140246339928647) {
Obj x140246339929063 = PRIM_CDR(closureRef(co, 3));
Obj x140246339929095 = PRIM_ISCONS(x140246339929063);
if (True == x140246339929095) {
Obj x140246339929511 = PRIM_CDR(closureRef(co, 3));
Obj x140246339929543 = PRIM_CAR(x140246339929511);
Obj args = x140246339929543;
Obj x140246339930119 = PRIM_CDR(closureRef(co, 3));
Obj x140246339930151 = PRIM_CDR(x140246339930119);
Obj x140246339930183 = PRIM_ISCONS(x140246339930151);
if (True == x140246339930183) {
Obj x140246339930759 = PRIM_CDR(closureRef(co, 3));
Obj x140246339930791 = PRIM_CDR(x140246339930759);
Obj x140246339930823 = PRIM_CAR(x140246339930791);
Obj body = x140246339930823;
Obj x140246339931591 = PRIM_CDR(closureRef(co, 3));
Obj x140246339931623 = PRIM_CDR(x140246339931591);
Obj x140246339931655 = PRIM_CDR(x140246339931623);
Obj x140246339931687 = PRIM_EQ(Nil, x140246339931655);
if (True == x140246339931687) {
pushCont(co, 23, clofun0, 4, ns, import, body, args);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = args;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338952167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338952167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338952167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338952167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338952167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj x140246339940807 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 24, clofun0, 1, args);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = x140246339940807;
__arg2 = ns;
__arg3 = import;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140246339940935 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246339940999 = makeCons(x140246339940935, Nil);
Obj x140246339941031 = makeCons(args, x140246339940999);
Obj x140246339941063 = makeCons(symlambda, x140246339941031);
__nargs = 2;
__arg1 = x140246339941063;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x140246338822279 = makeNative(28, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140246338205447 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140246338205447) {
Obj x140246338206023 = PRIM_CAR(closureRef(co, 3));
Obj x140246338206151 = PRIM_EQ(symdo, x140246338206023);
if (True == x140246338206151) {
Obj x140246338206567 = PRIM_CDR(closureRef(co, 3));
Obj x140246338206695 = PRIM_ISCONS(x140246338206567);
if (True == x140246338206695) {
Obj x140246338207399 = PRIM_CDR(closureRef(co, 3));
Obj x140246338207431 = PRIM_CAR(x140246338207399);
Obj x140246338207463 = PRIM_ISCONS(x140246338207431);
if (True == x140246338207463) {
Obj x140246338167463 = PRIM_CDR(closureRef(co, 3));
Obj x140246338167495 = PRIM_CAR(x140246338167463);
Obj x140246338167527 = PRIM_CAR(x140246338167495);
Obj x140246338167623 = PRIM_EQ(symimport, x140246338167527);
if (True == x140246338167623) {
Obj x140246338168391 = PRIM_CDR(closureRef(co, 3));
Obj x140246338168423 = PRIM_CAR(x140246338168391);
Obj x140246338168455 = PRIM_CDR(x140246338168423);
Obj x140246338168487 = PRIM_ISCONS(x140246338168455);
if (True == x140246338168487) {
Obj x140246338169255 = PRIM_CDR(closureRef(co, 3));
Obj x140246338169287 = PRIM_CAR(x140246338169255);
Obj x140246338169319 = PRIM_CDR(x140246338169287);
Obj x140246338169351 = PRIM_CAR(x140246338169319);
Obj pkg = x140246338169351;
Obj x140246338170407 = PRIM_CDR(closureRef(co, 3));
Obj x140246338170439 = PRIM_CAR(x140246338170407);
Obj x140246338170471 = PRIM_CDR(x140246338170439);
Obj x140246338170631 = PRIM_CDR(x140246338170471);
Obj x140246338170663 = PRIM_EQ(Nil, x140246338170631);
if (True == x140246338170663) {
Obj x140246337970695 = PRIM_CDR(closureRef(co, 3));
Obj x140246337970727 = PRIM_CDR(x140246337970695);
Obj x140246337970759 = PRIM_ISCONS(x140246337970727);
if (True == x140246337970759) {
Obj x140246337971431 = PRIM_CDR(closureRef(co, 3));
Obj x140246337971463 = PRIM_CDR(x140246337971431);
Obj x140246337971495 = PRIM_CAR(x140246337971463);
Obj y = x140246337971495;
Obj x140246337972487 = PRIM_CDR(closureRef(co, 3));
Obj x140246337972519 = PRIM_CDR(x140246337972487);
Obj x140246337972551 = PRIM_CDR(x140246337972519);
Obj x140246337972583 = PRIM_EQ(Nil, x140246337972551);
if (True == x140246337972583) {
Obj x140246337972935 = primIsString(pkg);
if (True == x140246337972935) {
Obj x140246337974247 = makeCons(pkg, Nil);
Obj x140246337885159 = makeCons(symimport, x140246337974247);
pushCont(co, 26, clofun0, 5, pkg, import, env, ns, y);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = x140246337885159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338822279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338822279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338822279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338822279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338822279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338822279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338822279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338822279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338822279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338822279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj x140246337885191 = __arg1;
Obj pkg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140246337886055 = makeCons(pkg, import);
pushCont(co, 27, clofun0, 1, x140246337885191);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = x140246337886055;
co->args[4] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140246337886119 = __arg1;
Obj x140246337885191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246337886183 = makeCons(x140246337886119, Nil);
Obj x140246337886215 = makeCons(x140246337885191, x140246337886183);
Obj x140246337886247 = makeCons(symdo, x140246337886215);
__nargs = 2;
__arg1 = x140246337886247;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj x140246338823463 = makeNative(38, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140246338251239 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140246338251239) {
Obj x140246338251527 = PRIM_CAR(closureRef(co, 3));
Obj op = x140246338251527;
Obj x140246338252071 = PRIM_CDR(closureRef(co, 3));
Obj args = x140246338252071;
pushCont(co, 29, clofun0, 6, env, ns, import, args, op, x140246338823463);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35builtin_63);
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338823463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140246338252423 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140246338823463= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
if (True == x140246338252423) {
if (True == True) {
pushCont(co, 36, clofun0, 2, args, op);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338823463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj x140246338229607 = PRIM_EQ(op, symif);
if (True == x140246338229607) {
if (True == True) {
pushCont(co, 34, clofun0, 2, args, op);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338823463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj x140246338231207 = PRIM_EQ(op, symdo);
if (True == x140246338231207) {
if (True == True) {
pushCont(co, 32, clofun0, 2, args, op);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338823463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 30, clofun0, 2, args, op);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338823463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}
}

label30:
{
Obj x140246338204487 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 31, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140246338204487;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140246338204551 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338204583 = makeCons(op, x140246338204551);
__nargs = 2;
__arg1 = x140246338204583;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj x140246338232071 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140246338232071;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140246338232135 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338232167 = makeCons(op, x140246338232135);
__nargs = 2;
__arg1 = x140246338232167;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x140246338230311 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 35, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140246338230311;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140246338230375 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338230439 = makeCons(op, x140246338230375);
__nargs = 2;
__arg1 = x140246338230439;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj x140246338228839 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 37, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140246338228839;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140246338228903 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338228935 = makeCons(op, x140246338228903);
__nargs = 2;
__arg1 = x140246338228935;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
Obj x140246338824199 = makeNative(41, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140246338495751 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140246338495751) {
Obj x140246338496487 = PRIM_CAR(closureRef(co, 3));
Obj x140246338496519 = PRIM_EQ(symlet, x140246338496487);
if (True == x140246338496519) {
Obj x140246338497159 = PRIM_CDR(closureRef(co, 3));
Obj x140246338497191 = PRIM_ISCONS(x140246338497159);
if (True == x140246338497191) {
Obj x140246338498023 = PRIM_CDR(closureRef(co, 3));
Obj x140246338498055 = PRIM_CAR(x140246338498023);
Obj a = x140246338498055;
Obj x140246338449863 = PRIM_CDR(closureRef(co, 3));
Obj x140246338449895 = PRIM_CDR(x140246338449863);
Obj x140246338449927 = PRIM_ISCONS(x140246338449895);
if (True == x140246338449927) {
Obj x140246338450759 = PRIM_CDR(closureRef(co, 3));
Obj x140246338450823 = PRIM_CDR(x140246338450759);
Obj x140246338450855 = PRIM_CAR(x140246338450823);
Obj b = x140246338450855;
Obj x140246338452007 = PRIM_CDR(closureRef(co, 3));
Obj x140246338452039 = PRIM_CDR(x140246338452007);
Obj x140246338452071 = PRIM_CDR(x140246338452039);
Obj x140246338452103 = PRIM_ISCONS(x140246338452071);
if (True == x140246338452103) {
Obj x140246338453319 = PRIM_CDR(closureRef(co, 3));
Obj x140246338453351 = PRIM_CDR(x140246338453319);
Obj x140246338453415 = PRIM_CDR(x140246338453351);
Obj x140246338351143 = PRIM_CAR(x140246338453415);
Obj c = x140246338351143;
Obj x140246338352807 = PRIM_CDR(closureRef(co, 3));
Obj x140246338352839 = PRIM_CDR(x140246338352807);
Obj x140246338352871 = PRIM_CDR(x140246338352839);
Obj x140246338352903 = PRIM_CDR(x140246338352871);
Obj x140246338352967 = PRIM_EQ(Nil, x140246338352903);
if (True == x140246338352967) {
pushCont(co, 39, clofun0, 5, env, ns, import, c, a);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338824199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338824199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338824199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338824199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338824199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338824199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140246338354279 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140246338248935 = makeCons(a, env);
pushCont(co, 40, clofun0, 2, x140246338354279, a);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = x140246338248935;
__arg2 = ns;
__arg3 = import;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140246338249063 = __arg1;
Obj x140246338354279= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246338249415 = makeCons(x140246338249063, Nil);
Obj x140246338249447 = makeCons(x140246338354279, x140246338249415);
Obj x140246338249479 = makeCons(a, x140246338249447);
Obj x140246338249511 = makeCons(symlet, x140246338249479);
__nargs = 2;
__arg1 = x140246338249511;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj x140246338825287 = makeNative(42, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj __ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj x140246338625703 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140246338625703) {
Obj x140246338626375 = PRIM_CAR(closureRef(co, 3));
Obj x140246338626439 = PRIM_EQ(symns, x140246338626375);
if (True == x140246338626439) {
Obj x140246338627207 = PRIM_CDR(closureRef(co, 3));
Obj x140246338627239 = PRIM_ISCONS(x140246338627207);
if (True == x140246338627239) {
Obj x140246338628263 = PRIM_CDR(closureRef(co, 3));
Obj x140246338628295 = PRIM_CAR(x140246338628263);
Obj path = x140246338628295;
Obj x140246338629447 = PRIM_CDR(closureRef(co, 3));
Obj x140246338629479 = PRIM_CDR(x140246338629447);
Obj x140246338629511 = PRIM_ISCONS(x140246338629479);
if (True == x140246338629511) {
Obj x140246338601831 = PRIM_CDR(closureRef(co, 3));
Obj x140246338601863 = PRIM_CDR(x140246338601831);
Obj x140246338601895 = PRIM_CAR(x140246338601863);
Obj import = x140246338601895;
Obj x140246338603847 = PRIM_CDR(closureRef(co, 3));
Obj x140246338603879 = PRIM_CDR(x140246338603847);
Obj x140246338603943 = PRIM_CDR(x140246338603879);
Obj x140246338603975 = PRIM_ISCONS(x140246338603943);
if (True == x140246338603975) {
Obj x140246338552775 = PRIM_CDR(closureRef(co, 3));
Obj x140246338552807 = PRIM_CDR(x140246338552775);
Obj x140246338552839 = PRIM_CDR(x140246338552807);
Obj x140246338552871 = PRIM_CAR(x140246338552839);
Obj body = x140246338552871;
Obj x140246338554407 = PRIM_CDR(closureRef(co, 3));
Obj x140246338554439 = PRIM_CDR(x140246338554407);
Obj x140246338554471 = PRIM_CDR(x140246338554439);
Obj x140246338554599 = PRIM_CDR(x140246338554471);
Obj x140246338554631 = PRIM_EQ(Nil, x140246338554599);
if (True == x140246338554631) {
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
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
__arg0 = x140246338825287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338825287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338825287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338825287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338825287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338825287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj x140246338699399 = makeNative(45, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140246338973255 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140246338973255) {
Obj x140246338950151 = PRIM_CAR(closureRef(co, 3));
Obj x140246338950183 = PRIM_EQ(symdef, x140246338950151);
if (True == x140246338950183) {
Obj x140246338951175 = PRIM_CDR(closureRef(co, 3));
Obj x140246338951207 = PRIM_ISCONS(x140246338951175);
if (True == x140246338951207) {
Obj x140246338952103 = PRIM_CDR(closureRef(co, 3));
Obj x140246338952199 = PRIM_CAR(x140246338952103);
Obj var = x140246338952199;
Obj x140246338822343 = PRIM_CDR(closureRef(co, 3));
Obj x140246338822375 = PRIM_CDR(x140246338822343);
Obj x140246338822407 = PRIM_ISCONS(x140246338822375);
if (True == x140246338822407) {
Obj x140246338823751 = PRIM_CDR(closureRef(co, 3));
Obj x140246338823943 = PRIM_CDR(x140246338823751);
Obj x140246338823975 = PRIM_CAR(x140246338823943);
Obj val = x140246338823975;
Obj x140246338825223 = PRIM_CDR(closureRef(co, 3));
Obj x140246338825319 = PRIM_CDR(x140246338825223);
Obj x140246338825351 = PRIM_CDR(x140246338825319);
Obj x140246338825383 = PRIM_EQ(Nil, x140246338825351);
if (True == x140246338825383) {
pushCont(co, 43, clofun0, 4, env, ns, import, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35var_45with_45ns);
__arg1 = var;
__arg2 = ns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338699399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338699399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338699399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338699399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338699399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj x140246338825767 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj var1 = x140246338825767;
Obj x140246338700071 = makeCons(var1, Nil);
Obj x140246338700103 = makeCons(symquote, x140246338700071);
pushCont(co, 44, clofun0, 1, x140246338700103);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140246338701191 = __arg1;
Obj x140246338700103= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338701287 = makeCons(x140246338701191, Nil);
Obj x140246338701607 = makeCons(x140246338700103, x140246338701287);
Obj x140246338701671 = makeCons(symset, x140246338701607);
__nargs = 2;
__arg1 = x140246338701671;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj x140246338700359 = makeNative(47, clofun0, 0, 0);
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj ls = closureRef(co, 3);
pushCont(co, 46, clofun0, 1, ls);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140246338972167 = __arg1;
Obj ls= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140246338972167;
__arg2 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
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

label48:
{
Obj x = __arg1;
PUSH_CONT_0(co, 49, clofun0);
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

label49:
{
Obj x140246339318887 = __arg1;
PUSH_CONT_0(co, 0, clofun1);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140246339318887;
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
Obj x140246339318919 = __arg1;
Obj x140246339318983 = primNot(x140246339318919);
__nargs = 2;
__arg1 = x140246339318983;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x140246338970055 = __arg1;
Obj x140246338970087 = __arg2;
Obj x140246338970439 = makeNative(2, clofun1, 0, 2, x140246338970055, x140246338970087);
Obj var = x140246338970055;
Obj x140246339374279 = PRIM_EQ(Nil, x140246338970087);
if (True == x140246339374279) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338970439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj x140246338970887 = makeNative(3, clofun1, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj x140246339622823 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140246339622823) {
Obj x140246339623559 = PRIM_CAR(closureRef(co, 1));
Obj x140246339623591 = PRIM_ISCONS(x140246339623559);
if (True == x140246339623591) {
Obj x140246339624359 = PRIM_CAR(closureRef(co, 1));
Obj x140246339624487 = PRIM_CAR(x140246339624359);
Obj x = x140246339624487;
Obj x140246339371431 = PRIM_CAR(closureRef(co, 1));
Obj x140246339371463 = PRIM_CDR(x140246339371431);
Obj y = x140246339371463;
Obj x140246339371783 = PRIM_CDR(closureRef(co, 1));
Obj __ = x140246339371783;
Obj x140246339372455 = PRIM_EQ(var, x);
if (True == x140246339372455) {
Obj x140246339372775 = makeCons(x, y);
__nargs = 2;
__arg1 = x140246339372775;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338970887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj x140246338971591 = makeNative(4, clofun1, 0, 0);
Obj var = closureRef(co, 0);
Obj x140246339620871 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140246339620871) {
Obj x140246339621351 = PRIM_CAR(closureRef(co, 1));
Obj __ = x140246339621351;
Obj x140246339621607 = PRIM_CDR(closureRef(co, 1));
Obj y = x140246339621607;
__nargs = 3;
__arg0 = globalRef(symassq);
__arg1 = var;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338971591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
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

label5:
{
Obj x140246338952487 = __arg1;
Obj x140246338952519 = __arg2;
Obj x140246338952551 = __arg3;
Obj x140246338952807 = makeNative(6, clofun1, 0, 3, x140246338952487, x140246338952519, x140246338952551);
Obj s = x140246338952487;
Obj ns = x140246338952519;
Obj x140246339873415 = PRIM_EQ(Nil, x140246338952551);
if (True == x140246339873415) {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35var_45with_45ns);
__arg1 = s;
__arg2 = ns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338952807;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x140246338822215 = makeNative(14, clofun1, 0, 0);
Obj s = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj x140246339870759 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140246339870759) {
Obj x140246339871015 = PRIM_CAR(closureRef(co, 2));
Obj import = x140246339871015;
Obj x140246339871271 = PRIM_CDR(closureRef(co, 2));
Obj more = x140246339871271;
pushCont(co, 7, clofun1, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = import;
__arg2 = makeCString("#*ns-export*");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338822215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj x140246339871879 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 8, clofun1, 4, import, s, ns, more);
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140246339871879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140246339871911 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 9, clofun1, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(symvalue_45or);
__arg1 = x140246339871911;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140246339871975 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj export = x140246339871975;
pushCont(co, 10, clofun1, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(symelem_63);
__arg1 = s;
__arg2 = export;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140246339872263 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140246339872263) {
pushCont(co, 11, clofun1, 1, import);
__nargs = 2;
__arg0 = globalRef(symsymbol_45_62string);
__arg1 = s;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 4;
__arg0 = globalRef(symcora_47init_35lookup_45var);
__arg1 = s;
__arg2 = ns;
__arg3 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj x140246339872999 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 12, clofun1, 1, import);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = makeCString("#");
__arg2 = x140246339872999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140246339873031 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 13, clofun1);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = import;
__arg2 = x140246339873031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140246339873063 = __arg1;
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140246339873063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
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

label15:
{
Obj var = __arg1;
Obj ns = __arg2;
Obj x140246339860359 = PRIM_EQ(ns, makeCString(""));
if (True == x140246339860359) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 16, clofun1, 2, var, ns);
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

label16:
{
Obj x140246339860615 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140246339860615) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 17, clofun1, 1, ns);
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

label17:
{
Obj x140246339861351 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 18, clofun1, 1, ns);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = makeCString("#");
__arg2 = x140246339861351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140246339861383 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 19, clofun1);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = ns;
__arg2 = x140246339861383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140246339861415 = __arg1;
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140246339861415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj sexp = __arg1;
pushCont(co, 21, clofun1, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140246339851367 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = x140246339851367;
pushCont(co, 22, clofun1, 1, path);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140246339851847 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 23, clofun1, 1, path);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35parse_45define_45library);
__arg1 = x140246339851847;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140246339851879 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = x140246339851879;
__arg1 = makeNative(24, clofun1, 3, 1, path);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj import = __arg1;
Obj export = __arg2;
Obj body = __arg3;
Obj x140246339852743 = makeCons(makeCString("cora/init"), import);
pushCont(co, 25, clofun1, 3, export, body, x140246339852743);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = makeNative(27, clofun1, 1, 0);
__arg2 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140246339854023 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246339852743= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140246339859271 = makeCons(export, Nil);
Obj x140246339859303 = makeCons(symbackquote, x140246339859271);
Obj x140246339859367 = makeCons(x140246339859303, Nil);
Obj x140246339859399 = makeCons(sym_42ns_45export_42, x140246339859367);
Obj x140246339859431 = makeCons(symdef, x140246339859399);
Obj x140246339859495 = makeCons(x140246339859431, body);
pushCont(co, 26, clofun1, 1, x140246339852743);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = x140246339854023;
__arg2 = x140246339859495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140246339859527 = __arg1;
Obj x140246339852743= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246339859559 = makeCons(symbegin, x140246339859527);
Obj x140246339859623 = makeCons(x140246339859559, Nil);
Obj x140246339859655 = makeCons(x140246339852743, x140246339859623);
Obj x140246339859687 = makeCons(closureRef(co, 0), x140246339859655);
Obj x140246339859719 = makeCons(symns, x140246339859687);
__nargs = 2;
__arg1 = x140246339859719;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj imp = __arg1;
Obj x140246339853927 = makeCons(imp, Nil);
Obj x140246339853959 = makeCons(symimport, x140246339853927);
__nargs = 2;
__arg1 = x140246339853959;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
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
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x140246338973671 = __arg1;
Obj x140246338949127 = __arg2;
Obj x140246338949159 = __arg3;
Obj x140246338949223 = co->args[4];
Obj x140246338949575 = makeNative(30, clofun1, 0, 4, x140246338973671, x140246338949127, x140246338949159, x140246338949223);
Obj x140246337971911 = PRIM_ISCONS(x140246338973671);
if (True == x140246337971911) {
Obj x140246337972391 = PRIM_CAR(x140246338973671);
Obj x140246337972423 = PRIM_ISCONS(x140246337972391);
if (True == x140246337972423) {
Obj x140246337973127 = PRIM_CAR(x140246338973671);
Obj x140246337973159 = PRIM_CAR(x140246337973127);
Obj x140246337973191 = PRIM_EQ(symimport, x140246337973159);
if (True == x140246337973191) {
Obj x140246337973863 = PRIM_CAR(x140246338973671);
Obj x140246337973895 = PRIM_CDR(x140246337973863);
Obj x140246337973927 = PRIM_ISCONS(x140246337973895);
if (True == x140246337973927) {
Obj x140246337885383 = PRIM_CAR(x140246338973671);
Obj x140246337885415 = PRIM_CDR(x140246337885383);
Obj x140246337885447 = PRIM_CAR(x140246337885415);
Obj lib = x140246337885447;
Obj x140246337886343 = PRIM_CAR(x140246338973671);
Obj x140246337886375 = PRIM_CDR(x140246337886343);
Obj x140246337886407 = PRIM_CDR(x140246337886375);
Obj x140246337886439 = PRIM_EQ(Nil, x140246337886407);
if (True == x140246337886439) {
Obj x140246337886695 = PRIM_CDR(x140246338973671);
Obj rest = x140246337886695;
Obj imports = x140246338949127;
Obj exports = x140246338949159;
Obj k = x140246338949223;
Obj x140246337887399 = makeCons(lib, imports);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45define_45library_45h);
__arg1 = rest;
__arg2 = x140246337887399;
__arg3 = exports;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338949575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj x140246338950663 = makeNative(31, clofun1, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140246338169415 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338169415) {
Obj x140246338169831 = PRIM_CAR(closureRef(co, 0));
Obj x140246338169863 = PRIM_ISCONS(x140246338169831);
if (True == x140246338169863) {
Obj x140246338170535 = PRIM_CAR(closureRef(co, 0));
Obj x140246338170567 = PRIM_CAR(x140246338170535);
Obj x140246338170599 = PRIM_EQ(symexport, x140246338170567);
if (True == x140246338170599) {
Obj x140246337970343 = PRIM_CAR(closureRef(co, 0));
Obj x140246337970375 = PRIM_CDR(x140246337970343);
Obj more = x140246337970375;
Obj x140246337970663 = PRIM_CDR(closureRef(co, 0));
Obj rest = x140246337970663;
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
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338950663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj x140246338951559 = makeNative(33, clofun1, 0, 0);
Obj body = closureRef(co, 0);
Obj imports = closureRef(co, 1);
Obj exports = closureRef(co, 2);
Obj k = closureRef(co, 3);
pushCont(co, 32, clofun1, 3, k, exports, body);
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = imports;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140246338169095 = __arg1;
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exports= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 4;
__arg0 = k;
__arg1 = x140246338169095;
__arg2 = exports;
__arg3 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
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

label34:
{
Obj exp = __arg1;
PUSH_CONT_0(co, 35, clofun1);
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
Obj x140246338167559 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45backquote);
__arg1 = x140246338167559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140246338971655 = __arg1;
Obj x140246338971815 = makeNative(37, clofun1, 0, 1, x140246338971655);
Obj x = x140246338971655;
Obj x140246338207047 = primIsSymbol(x);
if (True == x140246338207047) {
Obj x140246338207559 = makeCons(x, Nil);
Obj x140246338207591 = makeCons(symquote, x140246338207559);
__nargs = 2;
__arg1 = x140246338207591;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338971815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj x140246338972071 = makeNative(38, clofun1, 0, 1, closureRef(co, 0));
Obj x140246338203751 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338203751) {
Obj x140246338204359 = PRIM_CAR(closureRef(co, 0));
Obj x140246338204391 = PRIM_EQ(symunquote, x140246338204359);
if (True == x140246338204391) {
Obj x140246338204807 = PRIM_CDR(closureRef(co, 0));
Obj x140246338204839 = PRIM_ISCONS(x140246338204807);
if (True == x140246338204839) {
Obj x140246338205287 = PRIM_CDR(closureRef(co, 0));
Obj x140246338205319 = PRIM_CAR(x140246338205287);
Obj x = x140246338205319;
Obj x140246338206055 = PRIM_CDR(closureRef(co, 0));
Obj x140246338206087 = PRIM_CDR(x140246338206055);
Obj x140246338206119 = PRIM_EQ(Nil, x140246338206087);
if (True == x140246338206119) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338972071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj x140246338972551 = makeNative(40, clofun1, 0, 1, closureRef(co, 0));
Obj x140246338230407 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338230407) {
Obj x140246338230791 = PRIM_CAR(closureRef(co, 0));
Obj x = x140246338230791;
Obj x140246338231239 = PRIM_CDR(closureRef(co, 0));
Obj more = x140246338231239;
Obj x140246338231975 = makeCons(x, more);
PUSH_CONT_0(co, 39, clofun1);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35rewrite_45backquote);
__arg2 = x140246338231975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338972551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140246338232007 = __arg1;
Obj x140246338232039 = makeCons(symlist, x140246338232007);
__nargs = 2;
__arg1 = x140246338232039;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj x140246338972967 = makeNative(41, clofun1, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
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

label42:
{
Obj exp = __arg1;
Obj x140246338228711 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45begin);
__arg1 = x140246338228711;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140246338969895 = __arg1;
Obj x140246338970023 = makeNative(44, clofun1, 0, 1, x140246338969895);
Obj x140246338251047 = PRIM_ISCONS(x140246338969895);
if (True == x140246338251047) {
Obj x140246338251303 = PRIM_CAR(x140246338969895);
Obj x = x140246338251303;
Obj x140246338251911 = PRIM_CDR(x140246338969895);
Obj x140246338251943 = PRIM_EQ(Nil, x140246338251911);
if (True == x140246338251943) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338970023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj x140246338970535 = makeNative(45, clofun1, 0, 1, closureRef(co, 0));
Obj x140246338352935 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338352935) {
Obj x140246338353287 = PRIM_CAR(closureRef(co, 0));
Obj x = x140246338353287;
Obj x140246338353991 = PRIM_CDR(closureRef(co, 0));
Obj x140246338354023 = PRIM_ISCONS(x140246338353991);
if (True == x140246338354023) {
Obj x140246338354631 = PRIM_CDR(closureRef(co, 0));
Obj x140246338354663 = PRIM_CAR(x140246338354631);
Obj y = x140246338354663;
Obj x140246338249095 = PRIM_CDR(closureRef(co, 0));
Obj x140246338249127 = PRIM_CDR(x140246338249095);
Obj x140246338249159 = PRIM_EQ(Nil, x140246338249127);
if (True == x140246338249159) {
Obj x140246338250151 = makeCons(y, Nil);
Obj x140246338250183 = makeCons(x, x140246338250151);
Obj x140246338250215 = makeCons(symdo, x140246338250183);
__nargs = 2;
__arg1 = x140246338250215;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338970535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj x140246338971079 = makeNative(47, clofun1, 0, 0);
Obj x140246338452615 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338452615) {
Obj x140246338453127 = PRIM_CAR(closureRef(co, 0));
Obj x = x140246338453127;
Obj x140246338453383 = PRIM_CDR(closureRef(co, 0));
Obj y = x140246338453383;
pushCont(co, 46, clofun1, 1, x);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45begin);
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338971079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj x140246338352263 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338352359 = makeCons(x140246338352263, Nil);
Obj x140246338352391 = makeCons(x, x140246338352359);
Obj x140246338352423 = makeCons(symdo, x140246338352391);
__nargs = 2;
__arg1 = x140246338352423;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label47:
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

label48:
{
Obj exp = __arg1;
PUSH_CONT_0(co, 49, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140246338450951 = __arg1;
PUSH_CONT_0(co, 0, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45namespace);
__arg1 = x140246338450951;
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
Obj x140246338450983 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x140246338450983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj exp = __arg1;
Obj x140246338496999 = PRIM_ISCONS(exp);
if (True == x140246338496999) {
Obj x140246338497479 = PRIM_CAR(exp);
Obj x140246338497511 = PRIM_EQ(symns, x140246338497479);
if (True == x140246338497511) {
if (True == True) {
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = Nil;
__arg2 = makeCString("");
__arg3 = Nil;
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
if (True == False) {
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = Nil;
__arg2 = makeCString("");
__arg3 = Nil;
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
} else {
if (True == False) {
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = Nil;
__arg2 = makeCString("");
__arg3 = Nil;
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label2:
{
Obj x140246338970183 = __arg1;
Obj x140246338970343 = makeNative(3, clofun2, 0, 1, x140246338970183);
Obj x140246338552967 = PRIM_ISCONS(x140246338970183);
if (True == x140246338552967) {
Obj x140246338553511 = PRIM_CAR(x140246338970183);
Obj x140246338553543 = PRIM_EQ(symquote, x140246338553511);
if (True == x140246338553543) {
Obj x140246338554087 = PRIM_CDR(x140246338970183);
Obj x140246338554119 = PRIM_ISCONS(x140246338554087);
if (True == x140246338554119) {
Obj x140246338554855 = PRIM_CDR(x140246338970183);
Obj x140246338554887 = PRIM_CAR(x140246338554855);
Obj x = x140246338554887;
Obj x140246338555655 = PRIM_CDR(x140246338970183);
Obj x140246338555687 = PRIM_CDR(x140246338555655);
Obj x140246338555751 = PRIM_EQ(Nil, x140246338555687);
if (True == x140246338555751) {
Obj x140246338495111 = makeCons(x, Nil);
Obj x140246338495143 = makeCons(symquote, x140246338495111);
__nargs = 2;
__arg1 = x140246338495143;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338970343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj x140246338970855 = makeNative(5, clofun2, 0, 1, closureRef(co, 0));
Obj x140246338627815 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338627815) {
Obj x140246338628423 = PRIM_CAR(closureRef(co, 0));
Obj x140246338628455 = PRIM_EQ(symcons_63, x140246338628423);
if (True == x140246338628455) {
Obj x140246338629319 = PRIM_CDR(closureRef(co, 0));
Obj x140246338629351 = PRIM_ISCONS(x140246338629319);
if (True == x140246338629351) {
Obj x140246338601223 = PRIM_CDR(closureRef(co, 0));
Obj x140246338601255 = PRIM_CAR(x140246338601223);
Obj x = x140246338601255;
Obj x140246338602471 = PRIM_CDR(closureRef(co, 0));
Obj x140246338602503 = PRIM_CDR(x140246338602471);
Obj x140246338602535 = PRIM_EQ(Nil, x140246338602503);
if (True == x140246338602535) {
PUSH_CONT_0(co, 4, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338970855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj x140246338602823 = __arg1;
Obj x1 = x140246338602823;
Obj x140246338604103 = makeCons(x1, Nil);
Obj x140246338604839 = makeCons(symcons_63, x140246338604103);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140246338604839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140246338971335 = makeNative(7, clofun2, 0, 1, closureRef(co, 0));
Obj x140246338826215 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338826215) {
Obj x140246338699975 = PRIM_CAR(closureRef(co, 0));
Obj x140246338700007 = PRIM_EQ(symcar, x140246338699975);
if (True == x140246338700007) {
Obj x140246338700711 = PRIM_CDR(closureRef(co, 0));
Obj x140246338700775 = PRIM_ISCONS(x140246338700711);
if (True == x140246338700775) {
Obj x140246338701767 = PRIM_CDR(closureRef(co, 0));
Obj x140246338701799 = PRIM_CAR(x140246338701767);
Obj x = x140246338701799;
Obj x140246338702791 = PRIM_CDR(closureRef(co, 0));
Obj x140246338702887 = PRIM_CDR(x140246338702791);
Obj x140246338702919 = PRIM_EQ(Nil, x140246338702887);
if (True == x140246338702919) {
PUSH_CONT_0(co, 6, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338971335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x140246338703239 = __arg1;
Obj x1 = x140246338703239;
Obj x140246338626183 = makeCons(x1, Nil);
Obj x140246338626215 = makeCons(symcar, x140246338626183);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140246338626215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140246338971783 = makeNative(9, clofun2, 0, 1, closureRef(co, 0));
Obj x140246338951111 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338951111) {
Obj x140246338951975 = PRIM_CAR(closureRef(co, 0));
Obj x140246338952007 = PRIM_EQ(symcdr, x140246338951975);
if (True == x140246338952007) {
Obj x140246338952679 = PRIM_CDR(closureRef(co, 0));
Obj x140246338952743 = PRIM_ISCONS(x140246338952679);
if (True == x140246338952743) {
Obj x140246338822439 = PRIM_CDR(closureRef(co, 0));
Obj x140246338822471 = PRIM_CAR(x140246338822439);
Obj x = x140246338822471;
Obj x140246338823783 = PRIM_CDR(closureRef(co, 0));
Obj x140246338823847 = PRIM_CDR(x140246338823783);
Obj x140246338823879 = PRIM_EQ(Nil, x140246338823847);
if (True == x140246338823879) {
PUSH_CONT_0(co, 8, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338971783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj x140246338824231 = __arg1;
Obj x1 = x140246338824231;
Obj x140246338825127 = makeCons(x1, Nil);
Obj x140246338825159 = makeCons(symcdr, x140246338825127);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140246338825159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140246338972263 = makeNative(12, clofun2, 0, 1, closureRef(co, 0));
Obj x140246339373639 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246339373639) {
Obj x140246339374599 = PRIM_CAR(closureRef(co, 0));
Obj x140246339374695 = PRIM_EQ(symand, x140246339374599);
if (True == x140246339374695) {
Obj x140246339318215 = PRIM_CDR(closureRef(co, 0));
Obj x140246339318247 = PRIM_ISCONS(x140246339318215);
if (True == x140246339318247) {
Obj x140246339318823 = PRIM_CDR(closureRef(co, 0));
Obj x140246339318855 = PRIM_CAR(x140246339318823);
Obj x = x140246339318855;
Obj x140246339319783 = PRIM_CDR(closureRef(co, 0));
Obj x140246339319847 = PRIM_CDR(x140246339319783);
Obj x140246339319879 = PRIM_ISCONS(x140246339319847);
if (True == x140246339319879) {
Obj x140246339320839 = PRIM_CDR(closureRef(co, 0));
Obj x140246339320871 = PRIM_CDR(x140246339320839);
Obj x140246339320903 = PRIM_CAR(x140246339320871);
Obj y = x140246339320903;
Obj x140246338970247 = PRIM_CDR(closureRef(co, 0));
Obj x140246338970311 = PRIM_CDR(x140246338970247);
Obj x140246338970407 = PRIM_CDR(x140246338970311);
Obj x140246338970471 = PRIM_EQ(Nil, x140246338970407);
if (True == x140246338970471) {
pushCont(co, 10, clofun2, 1, y);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338972263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj x140246338971047 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1 = x140246338971047;
pushCont(co, 11, clofun2, 1, x1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140246338971495 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y1 = x140246338971495;
Obj x140246338973159 = makeCons(y1, Nil);
Obj x140246338973191 = makeCons(x1, x140246338973159);
Obj x140246338973223 = makeCons(symand, x140246338973191);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140246338973223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140246338972871 = makeNative(14, clofun2, 0, 1, closureRef(co, 0));
Obj x140246339621671 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246339621671) {
Obj x140246339622503 = PRIM_CAR(closureRef(co, 0));
Obj x140246339622535 = PRIM_EQ(symnull_63, x140246339622503);
if (True == x140246339622535) {
Obj x140246339623143 = PRIM_CDR(closureRef(co, 0));
Obj x140246339623335 = PRIM_ISCONS(x140246339623143);
if (True == x140246339623335) {
Obj x140246339623879 = PRIM_CDR(closureRef(co, 0));
Obj x140246339623911 = PRIM_CAR(x140246339623879);
Obj x = x140246339623911;
Obj x140246339371015 = PRIM_CDR(closureRef(co, 0));
Obj x140246339371047 = PRIM_CDR(x140246339371015);
Obj x140246339371079 = PRIM_EQ(Nil, x140246339371047);
if (True == x140246339371079) {
PUSH_CONT_0(co, 13, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338972871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj x140246339371527 = __arg1;
Obj x1 = x140246339371527;
Obj x140246339372519 = makeCons(x1, Nil);
Obj x140246339372551 = makeCons(symnull_63, x140246339372519);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140246339372551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140246338973351 = makeNative(16, clofun2, 0, 1, closureRef(co, 0));
Obj x140246339751399 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246339751399) {
Obj x140246339711079 = PRIM_CAR(closureRef(co, 0));
Obj x140246339711111 = PRIM_EQ(symnot, x140246339711079);
if (True == x140246339711111) {
Obj x140246339711879 = PRIM_CDR(closureRef(co, 0));
Obj x140246339711911 = PRIM_ISCONS(x140246339711879);
if (True == x140246339711911) {
Obj x140246339712359 = PRIM_CDR(closureRef(co, 0));
Obj x140246339712423 = PRIM_CAR(x140246339712359);
Obj x = x140246339712423;
Obj x140246339713447 = PRIM_CDR(closureRef(co, 0));
Obj x140246339713479 = PRIM_CDR(x140246339713447);
Obj x140246339713511 = PRIM_EQ(Nil, x140246339713479);
if (True == x140246339713511) {
PUSH_CONT_0(co, 15, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338973351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338973351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338973351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338973351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj x140246339713831 = __arg1;
Obj x1 = x140246339713831;
Obj x140246339714535 = makeCons(x1, Nil);
Obj x140246339714759 = makeCons(symnot, x140246339714535);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140246339714759;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140246338949255 = makeNative(20, clofun2, 0, 1, closureRef(co, 0));
Obj x140246337886887 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246337886887) {
Obj x140246337887335 = PRIM_CAR(closureRef(co, 0));
Obj x140246337887367 = PRIM_EQ(symif, x140246337887335);
if (True == x140246337887367) {
Obj x140246337887783 = PRIM_CDR(closureRef(co, 0));
Obj x140246337887815 = PRIM_ISCONS(x140246337887783);
if (True == x140246337887815) {
Obj x140246337888231 = PRIM_CDR(closureRef(co, 0));
Obj x140246337862215 = PRIM_CAR(x140246337888231);
Obj x = x140246337862215;
Obj x140246339789319 = PRIM_CDR(closureRef(co, 0));
Obj x140246339789351 = PRIM_CDR(x140246339789319);
Obj x140246339789383 = PRIM_ISCONS(x140246339789351);
if (True == x140246339789383) {
Obj x140246339789959 = PRIM_CDR(closureRef(co, 0));
Obj x140246339789991 = PRIM_CDR(x140246339789959);
Obj x140246339790023 = PRIM_CAR(x140246339789991);
Obj y = x140246339790023;
Obj x140246339790439 = PRIM_CDR(closureRef(co, 0));
Obj x140246339790471 = PRIM_CDR(x140246339790439);
Obj x140246339790503 = PRIM_CDR(x140246339790471);
Obj x140246339790535 = PRIM_ISCONS(x140246339790503);
if (True == x140246339790535) {
Obj x140246339791271 = PRIM_CDR(closureRef(co, 0));
Obj x140246339791303 = PRIM_CDR(x140246339791271);
Obj x140246339791335 = PRIM_CDR(x140246339791303);
Obj x140246339791367 = PRIM_CAR(x140246339791335);
Obj z = x140246339791367;
Obj x140246339792295 = PRIM_CDR(closureRef(co, 0));
Obj x140246339792327 = PRIM_CDR(x140246339792295);
Obj x140246339792359 = PRIM_CDR(x140246339792327);
Obj x140246339792391 = PRIM_CDR(x140246339792359);
Obj x140246339792423 = PRIM_EQ(Nil, x140246339792391);
if (True == x140246339792423) {
pushCont(co, 17, clofun2, 2, y, z);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338949255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj x140246339792679 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x1 = x140246339792679;
pushCont(co, 18, clofun2, 2, z, x1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140246339747879 = __arg1;
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj y1 = x140246339747879;
pushCont(co, 19, clofun2, 2, y1, x1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = z;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140246339748263 = __arg1;
Obj y1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj z1 = x140246339748263;
Obj x140246339749703 = makeCons(z1, Nil);
Obj x140246339749735 = makeCons(y1, x140246339749703);
Obj x140246339749767 = makeCons(x1, x140246339749735);
Obj x140246339749799 = makeCons(symif, x140246339749767);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140246339749799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140246338949959 = makeNative(22, clofun2, 0, 1, closureRef(co, 0));
Obj x140246337970855 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246337970855) {
Obj x140246337971303 = PRIM_CAR(closureRef(co, 0));
Obj x140246337971335 = PRIM_EQ(symlambda, x140246337971303);
if (True == x140246337971335) {
Obj x140246337971751 = PRIM_CDR(closureRef(co, 0));
Obj x140246337971783 = PRIM_ISCONS(x140246337971751);
if (True == x140246337971783) {
Obj x140246337972199 = PRIM_CDR(closureRef(co, 0));
Obj x140246337972231 = PRIM_CAR(x140246337972199);
Obj args = x140246337972231;
Obj x140246337972807 = PRIM_CDR(closureRef(co, 0));
Obj x140246337972839 = PRIM_CDR(x140246337972807);
Obj x140246337972871 = PRIM_ISCONS(x140246337972839);
if (True == x140246337972871) {
Obj x140246337973447 = PRIM_CDR(closureRef(co, 0));
Obj x140246337973479 = PRIM_CDR(x140246337973447);
Obj x140246337973511 = PRIM_CAR(x140246337973479);
Obj body = x140246337973511;
Obj x140246337885031 = PRIM_CDR(closureRef(co, 0));
Obj x140246337885063 = PRIM_CDR(x140246337885031);
Obj x140246337885095 = PRIM_CDR(x140246337885063);
Obj x140246337885127 = PRIM_EQ(Nil, x140246337885095);
if (True == x140246337885127) {
pushCont(co, 21, clofun2, 1, args);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338949959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj x140246337885863 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246337885927 = makeCons(x140246337885863, Nil);
Obj x140246337885959 = makeCons(args, x140246337885927);
Obj x140246337885991 = makeCons(symlambda, x140246337885959);
__nargs = 2;
__arg1 = x140246337885991;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj x140246338950599 = makeNative(23, clofun2, 0, 1, closureRef(co, 0));
Obj x140246338170247 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338170247) {
Obj x140246338170503 = PRIM_CAR(closureRef(co, 0));
Obj f = x140246338170503;
Obj x140246338170759 = PRIM_CDR(closureRef(co, 0));
Obj args = x140246338170759;
Obj x140246337970471 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35propagate_45boolean);
__arg2 = x140246337970471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338950599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj x140246338950983 = makeNative(24, clofun2, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
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

label25:
{
Obj x140246338970151 = __arg1;
Obj x140246338970279 = makeNative(26, clofun2, 0, 1, x140246338970151);
Obj x140246338353223 = PRIM_ISCONS(x140246338970151);
if (True == x140246338353223) {
Obj x140246338353895 = PRIM_CAR(x140246338970151);
Obj x140246338353927 = PRIM_EQ(symcar, x140246338353895);
if (True == x140246338353927) {
Obj x140246338354343 = PRIM_CDR(x140246338970151);
Obj x140246338354375 = PRIM_ISCONS(x140246338354343);
if (True == x140246338354375) {
Obj x140246338355175 = PRIM_CDR(x140246338970151);
Obj x140246338248711 = PRIM_CAR(x140246338355175);
Obj x140246338248743 = PRIM_ISCONS(x140246338248711);
if (True == x140246338248743) {
Obj x140246338249895 = PRIM_CDR(x140246338970151);
Obj x140246338249927 = PRIM_CAR(x140246338249895);
Obj x140246338249959 = PRIM_CAR(x140246338249927);
Obj x140246338249991 = PRIM_EQ(symcons, x140246338249959);
if (True == x140246338249991) {
Obj x140246338250791 = PRIM_CDR(x140246338970151);
Obj x140246338250823 = PRIM_CAR(x140246338250791);
Obj x140246338250855 = PRIM_CDR(x140246338250823);
Obj x140246338250887 = PRIM_ISCONS(x140246338250855);
if (True == x140246338250887) {
Obj x140246338251655 = PRIM_CDR(x140246338970151);
Obj x140246338251687 = PRIM_CAR(x140246338251655);
Obj x140246338251719 = PRIM_CDR(x140246338251687);
Obj x140246338251751 = PRIM_CAR(x140246338251719);
Obj x = x140246338251751;
Obj x140246338252775 = PRIM_CDR(x140246338970151);
Obj x140246338228231 = PRIM_CAR(x140246338252775);
Obj x140246338228263 = PRIM_CDR(x140246338228231);
Obj x140246338228295 = PRIM_CDR(x140246338228263);
Obj x140246338228327 = PRIM_ISCONS(x140246338228295);
if (True == x140246338228327) {
Obj x140246338229415 = PRIM_CDR(x140246338970151);
Obj x140246338229447 = PRIM_CAR(x140246338229415);
Obj x140246338229479 = PRIM_CDR(x140246338229447);
Obj x140246338229511 = PRIM_CDR(x140246338229479);
Obj x140246338229543 = PRIM_CAR(x140246338229511);
Obj __ = x140246338229543;
Obj x140246338230855 = PRIM_CDR(x140246338970151);
Obj x140246338230887 = PRIM_CAR(x140246338230855);
Obj x140246338230919 = PRIM_CDR(x140246338230887);
Obj x140246338230951 = PRIM_CDR(x140246338230919);
Obj x140246338230983 = PRIM_CDR(x140246338230951);
Obj x140246338231015 = PRIM_EQ(Nil, x140246338230983);
if (True == x140246338231015) {
Obj x140246338166791 = PRIM_CDR(x140246338970151);
Obj x140246338166823 = PRIM_CDR(x140246338166791);
Obj x140246338166855 = PRIM_EQ(Nil, x140246338166823);
if (True == x140246338166855) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338970279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj x140246338971143 = makeNative(27, clofun2, 0, 1, closureRef(co, 0));
Obj x140246338553831 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338553831) {
Obj x140246338554503 = PRIM_CAR(closureRef(co, 0));
Obj x140246338554535 = PRIM_EQ(symcdr, x140246338554503);
if (True == x140246338554535) {
Obj x140246338555047 = PRIM_CDR(closureRef(co, 0));
Obj x140246338555079 = PRIM_ISCONS(x140246338555047);
if (True == x140246338555079) {
Obj x140246338555783 = PRIM_CDR(closureRef(co, 0));
Obj x140246338555815 = PRIM_CAR(x140246338555783);
Obj x140246338555847 = PRIM_ISCONS(x140246338555815);
if (True == x140246338555847) {
Obj x140246338495495 = PRIM_CDR(closureRef(co, 0));
Obj x140246338495527 = PRIM_CAR(x140246338495495);
Obj x140246338495559 = PRIM_CAR(x140246338495527);
Obj x140246338495591 = PRIM_EQ(symcons, x140246338495559);
if (True == x140246338495591) {
Obj x140246338496647 = PRIM_CDR(closureRef(co, 0));
Obj x140246338496679 = PRIM_CAR(x140246338496647);
Obj x140246338496711 = PRIM_CDR(x140246338496679);
Obj x140246338496743 = PRIM_ISCONS(x140246338496711);
if (True == x140246338496743) {
Obj x140246338497575 = PRIM_CDR(closureRef(co, 0));
Obj x140246338497607 = PRIM_CAR(x140246338497575);
Obj x140246338497639 = PRIM_CDR(x140246338497607);
Obj x140246338497671 = PRIM_CAR(x140246338497639);
Obj __ = x140246338497671;
Obj x140246338449959 = PRIM_CDR(closureRef(co, 0));
Obj x140246338449991 = PRIM_CAR(x140246338449959);
Obj x140246338450023 = PRIM_CDR(x140246338449991);
Obj x140246338450055 = PRIM_CDR(x140246338450023);
Obj x140246338450119 = PRIM_ISCONS(x140246338450055);
if (True == x140246338450119) {
Obj x140246338451143 = PRIM_CDR(closureRef(co, 0));
Obj x140246338451175 = PRIM_CAR(x140246338451143);
Obj x140246338451207 = PRIM_CDR(x140246338451175);
Obj x140246338451239 = PRIM_CDR(x140246338451207);
Obj x140246338451271 = PRIM_CAR(x140246338451239);
Obj x = x140246338451271;
Obj x140246338452647 = PRIM_CDR(closureRef(co, 0));
Obj x140246338452679 = PRIM_CAR(x140246338452647);
Obj x140246338452711 = PRIM_CDR(x140246338452679);
Obj x140246338452743 = PRIM_CDR(x140246338452711);
Obj x140246338452775 = PRIM_CDR(x140246338452743);
Obj x140246338452871 = PRIM_EQ(Nil, x140246338452775);
if (True == x140246338452871) {
Obj x140246338351175 = PRIM_CDR(closureRef(co, 0));
Obj x140246338351207 = PRIM_CDR(x140246338351175);
Obj x140246338351239 = PRIM_EQ(Nil, x140246338351207);
if (True == x140246338351239) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338971143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj x140246338971943 = makeNative(28, clofun2, 0, 1, closureRef(co, 0));
Obj x140246338825991 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338825991) {
Obj x140246338699591 = PRIM_CAR(closureRef(co, 0));
Obj x140246338699623 = PRIM_EQ(symcons_63, x140246338699591);
if (True == x140246338699623) {
Obj x140246338700199 = PRIM_CDR(closureRef(co, 0));
Obj x140246338700231 = PRIM_ISCONS(x140246338700199);
if (True == x140246338700231) {
Obj x140246338701479 = PRIM_CDR(closureRef(co, 0));
Obj x140246338701511 = PRIM_CAR(x140246338701479);
Obj x140246338701543 = PRIM_ISCONS(x140246338701511);
if (True == x140246338701543) {
Obj x140246338702503 = PRIM_CDR(closureRef(co, 0));
Obj x140246338702535 = PRIM_CAR(x140246338702503);
Obj x140246338702567 = PRIM_CAR(x140246338702535);
Obj x140246338702599 = PRIM_EQ(symcons, x140246338702567);
if (True == x140246338702599) {
Obj x140246338625831 = PRIM_CDR(closureRef(co, 0));
Obj x140246338625863 = PRIM_CAR(x140246338625831);
Obj x140246338625895 = PRIM_CDR(x140246338625863);
Obj x140246338625927 = PRIM_ISCONS(x140246338625895);
if (True == x140246338625927) {
Obj x140246338626951 = PRIM_CDR(closureRef(co, 0));
Obj x140246338626983 = PRIM_CAR(x140246338626951);
Obj x140246338627015 = PRIM_CDR(x140246338626983);
Obj x140246338627047 = PRIM_CAR(x140246338627015);
Obj __ = x140246338627047;
Obj x140246338628519 = PRIM_CDR(closureRef(co, 0));
Obj x140246338628551 = PRIM_CAR(x140246338628519);
Obj x140246338628583 = PRIM_CDR(x140246338628551);
Obj x140246338628615 = PRIM_CDR(x140246338628583);
Obj x140246338628743 = PRIM_ISCONS(x140246338628615);
if (True == x140246338628743) {
Obj x140246338601287 = PRIM_CDR(closureRef(co, 0));
Obj x140246338601319 = PRIM_CAR(x140246338601287);
Obj x140246338601351 = PRIM_CDR(x140246338601319);
Obj x140246338601383 = PRIM_CDR(x140246338601351);
Obj x140246338601415 = PRIM_CAR(x140246338601383);
__ = x140246338601415;
Obj x140246338603271 = PRIM_CDR(closureRef(co, 0));
Obj x140246338603335 = PRIM_CAR(x140246338603271);
Obj x140246338603399 = PRIM_CDR(x140246338603335);
Obj x140246338603431 = PRIM_CDR(x140246338603399);
Obj x140246338603463 = PRIM_CDR(x140246338603431);
Obj x140246338603495 = PRIM_EQ(Nil, x140246338603463);
if (True == x140246338603495) {
Obj x140246338604967 = PRIM_CDR(closureRef(co, 0));
Obj x140246338604999 = PRIM_CDR(x140246338604967);
Obj x140246338605031 = PRIM_EQ(Nil, x140246338604999);
if (True == x140246338605031) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338971943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338971943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj x140246338972743 = makeNative(29, clofun2, 0, 1, closureRef(co, 0));
Obj x140246338973127 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338973127) {
Obj x140246338949863 = PRIM_CAR(closureRef(co, 0));
Obj x140246338949895 = PRIM_EQ(symand, x140246338949863);
if (True == x140246338949895) {
Obj x140246338950407 = PRIM_CDR(closureRef(co, 0));
Obj x140246338950471 = PRIM_ISCONS(x140246338950407);
if (True == x140246338950471) {
Obj x140246338951655 = PRIM_CDR(closureRef(co, 0));
Obj x140246338951687 = PRIM_CAR(x140246338951655);
Obj x140246338951719 = PRIM_EQ(True, x140246338951687);
if (True == x140246338951719) {
Obj x140246338952775 = PRIM_CDR(closureRef(co, 0));
Obj x140246338952839 = PRIM_CDR(x140246338952775);
Obj x140246338952871 = PRIM_ISCONS(x140246338952839);
if (True == x140246338952871) {
Obj x140246338822919 = PRIM_CDR(closureRef(co, 0));
Obj x140246338823111 = PRIM_CDR(x140246338822919);
Obj x140246338823143 = PRIM_CAR(x140246338823111);
Obj x140246338823175 = PRIM_EQ(True, x140246338823143);
if (True == x140246338823175) {
Obj x140246338824391 = PRIM_CDR(closureRef(co, 0));
Obj x140246338824423 = PRIM_CDR(x140246338824391);
Obj x140246338824455 = PRIM_CDR(x140246338824423);
Obj x140246338824551 = PRIM_EQ(Nil, x140246338824455);
if (True == x140246338824551) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338972743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338972743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140246338973319 = makeNative(30, clofun2, 0, 1, closureRef(co, 0));
Obj x140246339319815 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246339319815) {
Obj x140246339320423 = PRIM_CAR(closureRef(co, 0));
Obj x140246339320455 = PRIM_EQ(symnull_63, x140246339320423);
if (True == x140246339320455) {
Obj x140246339321031 = PRIM_CDR(closureRef(co, 0));
Obj x140246339321063 = PRIM_ISCONS(x140246339321031);
if (True == x140246339321063) {
Obj x140246338969927 = PRIM_CDR(closureRef(co, 0));
Obj x140246338969959 = PRIM_CAR(x140246338969927);
Obj x140246338969991 = PRIM_EQ(Nil, x140246338969959);
if (True == x140246338969991) {
Obj x140246338971271 = PRIM_CDR(closureRef(co, 0));
Obj x140246338971303 = PRIM_CDR(x140246338971271);
Obj x140246338971367 = PRIM_EQ(Nil, x140246338971303);
if (True == x140246338971367) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338973319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338973319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338973319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338973319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338973319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj x140246338949191 = makeNative(31, clofun2, 0, 1, closureRef(co, 0));
Obj x140246339712103 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246339712103) {
Obj x140246339712583 = PRIM_CAR(closureRef(co, 0));
Obj x140246339712615 = PRIM_EQ(symnull_63, x140246339712583);
if (True == x140246339712615) {
Obj x140246339713255 = PRIM_CDR(closureRef(co, 0));
Obj x140246339713351 = PRIM_ISCONS(x140246339713255);
if (True == x140246339713351) {
Obj x140246339713991 = PRIM_CDR(closureRef(co, 0));
Obj x140246339714023 = PRIM_CAR(x140246339713991);
Obj x140246339714055 = PRIM_ISCONS(x140246339714023);
if (True == x140246339714055) {
Obj x140246339620967 = PRIM_CDR(closureRef(co, 0));
Obj x140246339620999 = PRIM_CAR(x140246339620967);
Obj x140246339621031 = PRIM_CAR(x140246339620999);
Obj x140246339621063 = PRIM_EQ(symcons, x140246339621031);
if (True == x140246339621063) {
Obj x140246339621927 = PRIM_CDR(closureRef(co, 0));
Obj x140246339621959 = PRIM_CAR(x140246339621927);
Obj x140246339621991 = PRIM_CDR(x140246339621959);
Obj x140246339622023 = PRIM_ISCONS(x140246339621991);
if (True == x140246339622023) {
Obj x140246339623175 = PRIM_CDR(closureRef(co, 0));
Obj x140246339623207 = PRIM_CAR(x140246339623175);
Obj x140246339623239 = PRIM_CDR(x140246339623207);
Obj x140246339623303 = PRIM_CAR(x140246339623239);
Obj __ = x140246339623303;
Obj x140246339624583 = PRIM_CDR(closureRef(co, 0));
Obj x140246339624615 = PRIM_CAR(x140246339624583);
Obj x140246339624647 = PRIM_CDR(x140246339624615);
Obj x140246339624679 = PRIM_CDR(x140246339624647);
Obj x140246339624711 = PRIM_ISCONS(x140246339624679);
if (True == x140246339624711) {
Obj x140246339372039 = PRIM_CDR(closureRef(co, 0));
Obj x140246339372071 = PRIM_CAR(x140246339372039);
Obj x140246339372103 = PRIM_CDR(x140246339372071);
Obj x140246339372135 = PRIM_CDR(x140246339372103);
Obj x140246339372199 = PRIM_CAR(x140246339372135);
__ = x140246339372199;
Obj x140246339373671 = PRIM_CDR(closureRef(co, 0));
Obj x140246339373703 = PRIM_CAR(x140246339373671);
Obj x140246339373735 = PRIM_CDR(x140246339373703);
Obj x140246339373831 = PRIM_CDR(x140246339373735);
Obj x140246339373863 = PRIM_CDR(x140246339373831);
Obj x140246339374055 = PRIM_EQ(Nil, x140246339373863);
if (True == x140246339374055) {
Obj x140246339375079 = PRIM_CDR(closureRef(co, 0));
Obj x140246339317767 = PRIM_CDR(x140246339375079);
Obj x140246339317799 = PRIM_EQ(Nil, x140246339317767);
if (True == x140246339317799) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338949191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj x140246338949991 = makeNative(32, clofun2, 0, 1, closureRef(co, 0));
Obj x140246339748871 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246339748871) {
Obj x140246339749319 = PRIM_CAR(closureRef(co, 0));
Obj x140246339749351 = PRIM_EQ(symnot, x140246339749319);
if (True == x140246339749351) {
Obj x140246339750055 = PRIM_CDR(closureRef(co, 0));
Obj x140246339750087 = PRIM_ISCONS(x140246339750055);
if (True == x140246339750087) {
Obj x140246339750855 = PRIM_CDR(closureRef(co, 0));
Obj x140246339750887 = PRIM_CAR(x140246339750855);
Obj x140246339750919 = PRIM_EQ(True, x140246339750887);
if (True == x140246339750919) {
Obj x140246339751719 = PRIM_CDR(closureRef(co, 0));
Obj x140246339751751 = PRIM_CDR(x140246339751719);
Obj x140246339751783 = PRIM_EQ(Nil, x140246339751751);
if (True == x140246339751783) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338949991;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949991;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949991;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949991;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338949991;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj x140246338950439 = makeNative(33, clofun2, 0, 1, closureRef(co, 0));
Obj x140246338205063 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338205063) {
Obj x140246338205511 = PRIM_CAR(closureRef(co, 0));
Obj x140246338205543 = PRIM_EQ(symnot, x140246338205511);
if (True == x140246338205543) {
Obj x140246338205959 = PRIM_CDR(closureRef(co, 0));
Obj x140246338205991 = PRIM_ISCONS(x140246338205959);
if (True == x140246338205991) {
Obj x140246338206599 = PRIM_CDR(closureRef(co, 0));
Obj x140246338206631 = PRIM_CAR(x140246338206599);
Obj x140246338206663 = PRIM_EQ(False, x140246338206631);
if (True == x140246338206663) {
Obj x140246338207271 = PRIM_CDR(closureRef(co, 0));
Obj x140246338207303 = PRIM_CDR(x140246338207271);
Obj x140246338207335 = PRIM_EQ(Nil, x140246338207303);
if (True == x140246338207335) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338950439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x140246338950887 = makeNative(34, clofun2, 0, 1, closureRef(co, 0));
Obj x140246338251559 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338251559) {
Obj x140246338252007 = PRIM_CAR(closureRef(co, 0));
Obj x140246338252039 = PRIM_EQ(symif, x140246338252007);
if (True == x140246338252039) {
Obj x140246338252455 = PRIM_CDR(closureRef(co, 0));
Obj x140246338252487 = PRIM_ISCONS(x140246338252455);
if (True == x140246338252487) {
Obj x140246338228519 = PRIM_CDR(closureRef(co, 0));
Obj x140246338228551 = PRIM_CAR(x140246338228519);
Obj x140246338228583 = PRIM_EQ(True, x140246338228551);
if (True == x140246338228583) {
Obj x140246338229159 = PRIM_CDR(closureRef(co, 0));
Obj x140246338229191 = PRIM_CDR(x140246338229159);
Obj x140246338229223 = PRIM_ISCONS(x140246338229191);
if (True == x140246338229223) {
Obj x140246338229799 = PRIM_CDR(closureRef(co, 0));
Obj x140246338229831 = PRIM_CDR(x140246338229799);
Obj x140246338229863 = PRIM_CAR(x140246338229831);
Obj y = x140246338229863;
Obj x140246338230599 = PRIM_CDR(closureRef(co, 0));
Obj x140246338230631 = PRIM_CDR(x140246338230599);
Obj x140246338230663 = PRIM_CDR(x140246338230631);
Obj x140246338230695 = PRIM_ISCONS(x140246338230663);
if (True == x140246338230695) {
Obj x140246338231431 = PRIM_CDR(closureRef(co, 0));
Obj x140246338231463 = PRIM_CDR(x140246338231431);
Obj x140246338231495 = PRIM_CDR(x140246338231463);
Obj x140246338231527 = PRIM_CAR(x140246338231495);
Obj z = x140246338231527;
Obj x140246338203783 = PRIM_CDR(closureRef(co, 0));
Obj x140246338203815 = PRIM_CDR(x140246338203783);
Obj x140246338203847 = PRIM_CDR(x140246338203815);
Obj x140246338203879 = PRIM_CDR(x140246338203847);
Obj x140246338203911 = PRIM_EQ(Nil, x140246338203879);
if (True == x140246338203911) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338950887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338950887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj x140246338951591 = makeNative(35, clofun2, 0, 1, closureRef(co, 0));
Obj x140246338451783 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338451783) {
Obj x140246338452263 = PRIM_CAR(closureRef(co, 0));
Obj x140246338452295 = PRIM_EQ(symif, x140246338452263);
if (True == x140246338452295) {
Obj x140246338452807 = PRIM_CDR(closureRef(co, 0));
Obj x140246338452839 = PRIM_ISCONS(x140246338452807);
if (True == x140246338452839) {
Obj x140246338453447 = PRIM_CDR(closureRef(co, 0));
Obj x140246338453479 = PRIM_CAR(x140246338453447);
Obj x140246338351111 = PRIM_EQ(False, x140246338453479);
if (True == x140246338351111) {
Obj x140246338351911 = PRIM_CDR(closureRef(co, 0));
Obj x140246338351943 = PRIM_CDR(x140246338351911);
Obj x140246338351975 = PRIM_ISCONS(x140246338351943);
if (True == x140246338351975) {
Obj x140246338352647 = PRIM_CDR(closureRef(co, 0));
Obj x140246338352679 = PRIM_CDR(x140246338352647);
Obj x140246338352711 = PRIM_CAR(x140246338352679);
Obj y = x140246338352711;
Obj x140246338353511 = PRIM_CDR(closureRef(co, 0));
Obj x140246338353543 = PRIM_CDR(x140246338353511);
Obj x140246338353575 = PRIM_CDR(x140246338353543);
Obj x140246338353607 = PRIM_ISCONS(x140246338353575);
if (True == x140246338353607) {
Obj x140246338354439 = PRIM_CDR(closureRef(co, 0));
Obj x140246338354471 = PRIM_CDR(x140246338354439);
Obj x140246338354503 = PRIM_CDR(x140246338354471);
Obj x140246338354535 = PRIM_CAR(x140246338354503);
Obj z = x140246338354535;
Obj x140246338249191 = PRIM_CDR(closureRef(co, 0));
Obj x140246338249223 = PRIM_CDR(x140246338249191);
Obj x140246338249255 = PRIM_CDR(x140246338249223);
Obj x140246338249287 = PRIM_CDR(x140246338249255);
Obj x140246338249351 = PRIM_EQ(Nil, x140246338249287);
if (True == x140246338249351) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140246338951591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338951591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338951591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338951591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338951591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338951591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338951591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj x140246338952295 = makeNative(36, clofun2, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
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
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj exp = __arg1;
pushCont(co, 38, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140246338495623 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 39, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35extract_45rules);
__arg1 = x140246338495623;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140246338495655 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = x140246338495655;
pushCont(co, 40, clofun2, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rules_45arg_45count);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140246338495943 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = x140246338495943;
pushCont(co, 41, clofun2, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35gen_45paramenters);
__arg1 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140246338496231 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = x140246338496231;
pushCont(co, 42, clofun2, 2, body, args);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140246338496935 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246338498119 = makeCons(symlist, args);
Obj x140246338498183 = makeCons(x140246338498119, body);
Obj x140246338498215 = makeCons(symmatch, x140246338498183);
Obj x140246338498279 = makeCons(x140246338498215, Nil);
Obj x140246338498311 = makeCons(args, x140246338498279);
Obj x140246338498343 = makeCons(x140246338496935, x140246338498311);
Obj x140246338498375 = makeCons(symdefun, x140246338498343);
__nargs = 2;
__arg1 = x140246338498375;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj n = __arg1;
Obj x140246338555239 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == x140246338555239) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246338555591 = primGenSym();
Obj x140246338494599 = PRIM_SUB(n, MAKE_NUMBER(1));
pushCont(co, 44, clofun2, 1, x140246338555591);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35gen_45paramenters);
__arg1 = x140246338494599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj x140246338494631 = __arg1;
Obj x140246338555591= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338494663 = makeCons(x140246338555591, x140246338494631);
__nargs = 2;
__arg1 = x140246338494663;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj rules = __arg1;
PUSH_CONT_0(co, 46, clofun2);
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

label46:
{
Obj x140246338603911 = __arg1;
Obj pats = x140246338603911;
Obj len = makeNative(1, clofun3, 1, 0);
PUSH_CONT_0(co, 47, clofun2);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = len;
__arg2 = pats;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140246338552487 = __arg1;
Obj counts = x140246338552487;
Obj x140246338552743 = PRIM_CAR(counts);
Obj n = x140246338552743;
Obj dif = makeNative(0, clofun3, 1, 1, n);
Obj x140246338554247 = PRIM_CDR(counts);
pushCont(co, 48, clofun2, 1, n);
__nargs = 3;
__arg0 = globalRef(symfilter);
__arg1 = dif;
__arg2 = x140246338554247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj x140246338554279 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun2, 1, n);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140246338554279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140246338554343 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338554375 = primNot(x140246338554343);
if (True == x140246338554375) {
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
Obj x = __arg1;
Obj x140246338553351 = PRIM_EQ(closureRef(co, 0), x);
Obj x140246338553383 = primNot(x140246338553351);
__nargs = 2;
__arg1 = x140246338553383;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x = __arg1;
Obj x140246338551847 = PRIM_CDR(x);
__nargs = 2;
__arg0 = globalRef(symlength);
__arg1 = x140246338551847;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj x140246338601703 = PRIM_EQ(l1, Nil);
if (True == x140246338601703) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246338602407 = PRIM_CAR(l1);
Obj x140246338602791 = PRIM_CDR(l1);
pushCont(co, 3, clofun3, 1, x140246338602407);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = x140246338602791;
__arg2 = l2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj x140246338602855 = __arg1;
Obj x140246338602407= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338602919 = makeCons(x140246338602407, x140246338602855);
__nargs = 2;
__arg1 = x140246338602919;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
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
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj res = __arg1;
Obj fn = __arg2;
Obj l = __arg3;
Obj x140246338626247 = PRIM_ISCONS(l);
if (True == x140246338626247) {
Obj x140246338626855 = PRIM_CAR(l);
pushCont(co, 6, clofun3, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = x140246338626855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x140246338626887 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140246338626887) {
Obj x140246338627847 = PRIM_CAR(l);
Obj x140246338627911 = makeCons(x140246338627847, res);
Obj x140246338628231 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = x140246338627911;
__arg2 = fn;
__arg3 = x140246338628231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140246338628647 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = res;
__arg2 = fn;
__arg3 = x140246338628647;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj l = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47init_35length_45h);
__arg1 = MAKE_NUMBER(0);
__arg2 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj i = __arg1;
Obj l = __arg2;
Obj x140246338702023 = PRIM_EQ(l, Nil);
if (True == x140246338702023) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246338702471 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj x140246338702823 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35length_45h);
__arg1 = x140246338702471;
__arg2 = x140246338702823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj res = __arg1;
Obj rules = __arg2;
pushCont(co, 10, clofun3, 2, res, rules);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140246338699751 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140246338699751) {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140246338700647 = PRIM_CAR(rules);
Obj x140246338700743 = makeCons(x140246338700647, res);
pushCont(co, 11, clofun3, 1, x140246338700743);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj x140246338700967 = __arg1;
Obj x140246338700743= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rules_45patterns);
__arg1 = x140246338700743;
__arg2 = x140246338700967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
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
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj input = __arg1;
Obj current = __arg2;
Obj result = __arg3;
Obj x140246338969735 = makeNative(14, clofun3, 0, 3, input, current, result);
Obj x140246338824903 = PRIM_EQ(Nil, input);
if (True == x140246338824903) {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = result;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338969735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj x140246338969831 = makeNative(16, clofun3, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140246339320135 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246339320135) {
Obj x140246339320711 = PRIM_CAR(closureRef(co, 0));
Obj x140246339320743 = PRIM_EQ(sym_61_62, x140246339320711);
if (True == x140246339320743) {
Obj x140246339321255 = PRIM_CDR(closureRef(co, 0));
Obj x140246339321287 = PRIM_ISCONS(x140246339321255);
if (True == x140246339321287) {
Obj x140246339321799 = PRIM_CDR(closureRef(co, 0));
Obj x140246339321831 = PRIM_CAR(x140246339321799);
Obj act = x140246339321831;
Obj x140246338970823 = PRIM_CDR(closureRef(co, 0));
Obj x140246338970919 = PRIM_CDR(x140246338970823);
Obj x140246338970951 = PRIM_ISCONS(x140246338970919);
if (True == x140246338970951) {
Obj x140246338972199 = PRIM_CDR(closureRef(co, 0));
Obj x140246338972231 = PRIM_CDR(x140246338972199);
Obj x140246338972295 = PRIM_CAR(x140246338972231);
Obj x140246338972359 = PRIM_EQ(symwhere, x140246338972295);
if (True == x140246338972359) {
Obj x140246338973479 = PRIM_CDR(closureRef(co, 0));
Obj x140246338973543 = PRIM_CDR(x140246338973479);
Obj x140246338949319 = PRIM_CDR(x140246338973543);
Obj x140246338949351 = PRIM_ISCONS(x140246338949319);
if (True == x140246338949351) {
Obj x140246338950503 = PRIM_CDR(closureRef(co, 0));
Obj x140246338950567 = PRIM_CDR(x140246338950503);
Obj x140246338950631 = PRIM_CDR(x140246338950567);
Obj x140246338950695 = PRIM_CAR(x140246338950631);
Obj pred = x140246338950695;
Obj x140246338951783 = PRIM_CDR(closureRef(co, 0));
Obj x140246338951815 = PRIM_CDR(x140246338951783);
Obj x140246338951847 = PRIM_CDR(x140246338951815);
Obj x140246338951943 = PRIM_CDR(x140246338951847);
Obj remain = x140246338951943;
pushCont(co, 15, clofun3, 3, act, pred, remain);
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338969831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338969831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338969831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338969831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338969831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338969831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj x140246338952583 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140246338952615 = makeCons(symlist, x140246338952583);
Obj pat = x140246338952615;
Obj x140246338822983 = makeCons(act, Nil);
Obj x140246338823015 = makeCons(pred, x140246338822983);
Obj x140246338823079 = makeCons(symwhere, x140246338823015);
Obj x140246338823335 = makeCons(pat, closureRef(co, 2));
Obj x140246338823367 = makeCons(x140246338823079, x140246338823335);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = x140246338823367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140246338970375 = makeNative(18, clofun3, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140246339372647 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246339372647) {
Obj x140246339373287 = PRIM_CAR(closureRef(co, 0));
Obj x140246339373319 = PRIM_EQ(sym_61_62, x140246339373287);
if (True == x140246339373319) {
Obj x140246339373767 = PRIM_CDR(closureRef(co, 0));
Obj x140246339373799 = PRIM_ISCONS(x140246339373767);
if (True == x140246339373799) {
Obj x140246339374407 = PRIM_CDR(closureRef(co, 0));
Obj x140246339374439 = PRIM_CAR(x140246339374407);
Obj act = x140246339374439;
Obj x140246339317831 = PRIM_CDR(closureRef(co, 0));
Obj x140246339317863 = PRIM_CDR(x140246339317831);
Obj remain = x140246339317863;
pushCont(co, 17, clofun3, 2, act, remain);
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338970375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140246338970375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj x140246339318407 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246339318439 = makeCons(symlist, x140246339318407);
Obj pat = x140246339318439;
Obj x140246339319143 = makeCons(pat, closureRef(co, 2));
Obj x140246339319175 = makeCons(act, x140246339319143);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = x140246339319175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140246338970695 = makeNative(19, clofun3, 0, 0);
Obj x140246339624903 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246339624903) {
Obj x140246339371367 = PRIM_CAR(closureRef(co, 0));
Obj x = x140246339371367;
Obj x140246339371623 = PRIM_CDR(closureRef(co, 0));
Obj y = x140246339371623;
Obj x140246339372167 = makeCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = y;
__arg2 = x140246339372167;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140246338970695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj exp = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45match);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj exp = __arg1;
pushCont(co, 22, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140246339750983 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 23, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = x140246339750983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140246339751047 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = x140246339751047;
pushCont(co, 24, clofun3, 1, value);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140246339751303 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = x140246339751303;
Obj x140246339751655 = PRIM_ISCONS(value);
if (True == x140246339751655) {
Obj x140246339711335 = PRIM_CAR(value);
Obj x140246339711367 = PRIM_EQ(symcons, x140246339711335);
Obj x140246339711399 = primNot(x140246339711367);
if (True == x140246339711399) {
if (True == True) {
Obj x140246339711847 = primGenSym();
Obj val = x140246339711847;
pushCont(co, 27, clofun3, 2, value, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj x140246339713543 = primGenSym();
Obj val = x140246339713543;
pushCont(co, 26, clofun3, 2, value, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj x140246339621095 = primGenSym();
Obj val = x140246339621095;
pushCont(co, 25, clofun3, 2, value, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = val;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label25:
{
Obj x140246339622151 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246339622215 = makeCons(x140246339622151, Nil);
Obj x140246339622279 = makeCons(value, x140246339622215);
Obj x140246339622343 = makeCons(val, x140246339622279);
Obj x140246339622375 = makeCons(symlet, x140246339622343);
__nargs = 2;
__arg1 = x140246339622375;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj x140246339714567 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246339714791 = makeCons(x140246339714567, Nil);
Obj x140246339714823 = makeCons(value, x140246339714791);
Obj x140246339714855 = makeCons(val, x140246339714823);
Obj x140246339714887 = makeCons(symlet, x140246339714855);
__nargs = 2;
__arg1 = x140246339714887;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj x140246339712903 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246339712967 = makeCons(x140246339712903, Nil);
Obj x140246339712999 = makeCons(value, x140246339712967);
Obj x140246339713031 = makeCons(val, x140246339712999);
Obj x140246339713063 = makeCons(symlet, x140246339713031);
__nargs = 2;
__arg1 = x140246339713063;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj value = __arg1;
Obj rules = __arg2;
pushCont(co, 29, clofun3, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x140246338498471 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140246338498471) {
Obj x140246338449735 = makeCons(makeCString("no match-help found!"), Nil);
Obj x140246338449767 = makeCons(symerror, x140246338449735);
__nargs = 2;
__arg1 = x140246338449767;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 30, clofun3, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj x140246338450087 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140246338450087) {
Obj x140246338450503 = PRIM_CDR(rules);
pushCont(co, 35, clofun3, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = x140246338450503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj x140246338249319 = PRIM_CAR(rules);
Obj pat = x140246338249319;
Obj x140246338249543 = primGenSym();
Obj cc = x140246338249543;
pushCont(co, 31, clofun3, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35extract_45rule_45action);
__arg1 = rules;
__arg2 = cc;
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
}

label31:
{
Obj x140246338249831 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = x140246338249831;
pushCont(co, 32, clofun3, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140246338250247 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 33, clofun3, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x140246338250247;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140246338250375 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = x140246338250375;
Obj x140246339747975 = PRIM_CDR(rules);
Obj x140246339748007 = PRIM_CDR(x140246339747975);
pushCont(co, 34, clofun3, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = x140246339748007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140246339748071 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140246339748071;
Obj x140246339749447 = makeCons(rest, Nil);
Obj x140246339749543 = makeCons(Nil, x140246339749447);
Obj x140246339749575 = makeCons(symlambda, x140246339749543);
Obj x140246339749831 = makeCons(curr, Nil);
Obj x140246339749863 = makeCons(x140246339749575, x140246339749831);
Obj x140246339749895 = makeCons(cc, x140246339749863);
Obj x140246339749927 = makeCons(symlet, x140246339749895);
__nargs = 2;
__arg1 = x140246339749927;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj x140246338450535 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140246338450535) {
if (True == True) {
Obj x140246338450791 = PRIM_CAR(rules);
Obj pat = x140246338450791;
Obj x140246338451015 = primGenSym();
Obj cc = x140246338451015;
pushCont(co, 40, clofun3, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35extract_45rule_45action);
__arg1 = rules;
__arg2 = cc;
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
} else {
if (True == False) {
Obj x140246338352103 = PRIM_CAR(rules);
Obj pat = x140246338352103;
Obj x140246338352327 = primGenSym();
Obj cc = x140246338352327;
pushCont(co, 36, clofun3, 4, pat, rules, value, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35extract_45rule_45action);
__arg1 = rules;
__arg2 = cc;
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
}

label36:
{
Obj x140246338352615 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = x140246338352615;
pushCont(co, 37, clofun3, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140246338353031 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 38, clofun3, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x140246338353031;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140246338353159 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = x140246338353159;
Obj x140246338353767 = PRIM_CDR(rules);
Obj x140246338353799 = PRIM_CDR(x140246338353767);
pushCont(co, 39, clofun3, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = x140246338353799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140246338353831 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140246338353831;
Obj x140246338354983 = makeCons(rest, Nil);
Obj x140246338355015 = makeCons(Nil, x140246338354983);
Obj x140246338355047 = makeCons(symlambda, x140246338355015);
Obj x140246338248807 = makeCons(curr, Nil);
Obj x140246338248839 = makeCons(x140246338355047, x140246338248807);
Obj x140246338248871 = makeCons(cc, x140246338248839);
Obj x140246338248903 = makeCons(symlet, x140246338248871);
__nargs = 2;
__arg1 = x140246338248903;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj x140246338451303 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = x140246338451303;
pushCont(co, 41, clofun3, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140246338451719 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 42, clofun3, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x140246338451719;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140246338451847 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = x140246338451847;
Obj x140246338452455 = PRIM_CDR(rules);
Obj x140246338452487 = PRIM_CDR(x140246338452455);
pushCont(co, 43, clofun3, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = x140246338452487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140246338452519 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140246338452519;
Obj x140246338351271 = makeCons(rest, Nil);
Obj x140246338351303 = makeCons(Nil, x140246338351271);
Obj x140246338351335 = makeCons(symlambda, x140246338351303);
Obj x140246338351591 = makeCons(curr, Nil);
Obj x140246338351623 = makeCons(x140246338351335, x140246338351591);
Obj x140246338351655 = makeCons(cc, x140246338351623);
Obj x140246338351687 = makeCons(symlet, x140246338351655);
__nargs = 2;
__arg1 = x140246338351687;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label44:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj x140246338553959 = PRIM_CDR(rules);
Obj x140246338553991 = PRIM_CAR(x140246338553959);
Obj action = x140246338553991;
pushCont(co, 45, clofun3, 2, cc, action);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140246338554311 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140246338554311) {
Obj x140246338554727 = PRIM_CAR(action);
Obj x140246338554791 = PRIM_EQ(x140246338554727, symwhere);
if (True == x140246338554791) {
if (True == True) {
pushCont(co, 0, clofun4, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
if (True == False) {
pushCont(co, 48, clofun3, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
} else {
if (True == False) {
pushCont(co, 46, clofun3, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label46:
{
Obj x140246338496903 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 47, clofun3, 2, cc, x140246338496903);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140246338497287 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338496903= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246338497703 = makeCons(cc, Nil);
Obj x140246338497767 = makeCons(x140246338497703, Nil);
Obj x140246338497799 = makeCons(x140246338497287, x140246338497767);
Obj x140246338497831 = makeCons(x140246338496903, x140246338497799);
Obj x140246338497863 = makeCons(symif, x140246338497831);
__nargs = 2;
__arg1 = x140246338497863;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label48:
{
Obj x140246338495399 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 49, clofun3, 2, cc, x140246338495399);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140246338495783 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338495399= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246338496199 = makeCons(cc, Nil);
Obj x140246338496263 = makeCons(x140246338496199, Nil);
Obj x140246338496295 = makeCons(x140246338495783, x140246338496263);
Obj x140246338496327 = makeCons(x140246338495399, x140246338496295);
Obj x140246338496359 = makeCons(symif, x140246338496327);
__nargs = 2;
__arg1 = x140246338496359;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
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

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140246338555335 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 1, clofun4, 2, cc, x140246338555335);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x140246338555719 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338555335= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246338494695 = makeCons(cc, Nil);
Obj x140246338494759 = makeCons(x140246338494695, Nil);
Obj x140246338494791 = makeCons(x140246338555719, x140246338494759);
Obj x140246338494823 = makeCons(x140246338555335, x140246338494791);
Obj x140246338494855 = makeCons(symif, x140246338494823);
__nargs = 2;
__arg1 = x140246338494855;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
Obj literal_63 = makeNative(6, clofun4, 1, 0);
pushCont(co, 3, clofun4, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = literal_63;
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140246338703047 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140246338703047) {
Obj x140246338703335 = PRIM_EQ(pat, expr);
if (True == x140246338703335) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246338626567 = makeCons(expr, Nil);
Obj x140246338626599 = makeCons(pat, x140246338626567);
Obj x140246338626631 = makeCons(sym_61, x140246338626599);
Obj x140246338627303 = makeCons(cc, Nil);
Obj x140246338627367 = makeCons(x140246338627303, Nil);
Obj x140246338627399 = makeCons(body, x140246338627367);
Obj x140246338627431 = makeCons(x140246338626631, x140246338627399);
Obj x140246338627463 = makeCons(symif, x140246338627431);
__nargs = 2;
__arg1 = x140246338627463;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj x140246338627943 = primIsSymbol(pat);
if (True == x140246338627943) {
Obj x140246338628839 = makeCons(body, Nil);
Obj x140246338628871 = makeCons(expr, x140246338628839);
Obj x140246338628903 = makeCons(pat, x140246338628871);
Obj x140246338628935 = makeCons(symlet, x140246338628903);
__nargs = 2;
__arg1 = x140246338628935;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 4, clofun4, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label4:
{
Obj x140246338629191 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140246338629191) {
Obj x140246338600967 = PRIM_CAR(pat);
Obj x140246338601031 = PRIM_EQ(x140246338600967, symquote);
if (True == x140246338601031) {
Obj x140246338602055 = makeCons(expr, Nil);
Obj x140246338602183 = makeCons(pat, x140246338602055);
Obj x140246338602343 = makeCons(sym_61, x140246338602183);
Obj x140246338602983 = makeCons(cc, Nil);
Obj x140246338603047 = makeCons(x140246338602983, Nil);
Obj x140246338603079 = makeCons(body, x140246338603047);
Obj x140246338603111 = makeCons(x140246338602343, x140246338603079);
Obj x140246338603143 = makeCons(symif, x140246338603111);
__nargs = 2;
__arg1 = x140246338603143;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246338603623 = PRIM_CAR(pat);
Obj x140246338603687 = PRIM_EQ(x140246338603623, symcons);
if (True == x140246338603687) {
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match_45cons_45expander);
__arg1 = pat;
__arg2 = expr;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
PUSH_CONT_0(co, 5, clofun4);
__nargs = 3;
__arg0 = globalRef(symstr);
__arg1 = makeCString("match fail ");
__arg2 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj x140246338552103 = __arg1;
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = x140246338552103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x = __arg1;
pushCont(co, 7, clofun4, 1, x);
__nargs = 2;
__arg0 = globalRef(symatom_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140246338702247 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140246338702247) {
Obj x140246338702663 = primIsSymbol(x);
Obj x140246338702759 = primNot(x140246338702663);
if (True == x140246338702759) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label8:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 9, clofun4, 4, pat, expr, body, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140246339318951 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = x140246339318951;
pushCont(co, 10, clofun4, 4, expr, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140246339319207 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = x140246339319207;
Obj x140246339319719 = PRIM_ISCONS(expr);
if (True == x140246339319719) {
Obj x140246339320199 = PRIM_CAR(expr);
Obj x140246339320263 = PRIM_EQ(x140246339320199, symcons);
if (True == x140246339320263) {
if (True == True) {
pushCont(co, 23, clofun4, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140246338970503 = makeCons(expr, Nil);
Obj x140246338970567 = makeCons(symcons_63, x140246338970503);
Obj x140246338971751 = makeCons(expr, Nil);
Obj x140246338971847 = makeCons(symcar, x140246338971751);
Obj x140246338972679 = makeCons(expr, Nil);
Obj x140246338972711 = makeCons(symcdr, x140246338972679);
pushCont(co, 21, clofun4, 4, x, x140246338971847, cc, x140246338970567);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = x140246338972711;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 18, clofun4, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140246338951879 = makeCons(expr, Nil);
Obj x140246338951911 = makeCons(symcons_63, x140246338951879);
Obj x140246338953031 = makeCons(expr, Nil);
Obj x140246338953063 = makeCons(symcar, x140246338953031);
Obj x140246338822759 = makeCons(expr, Nil);
Obj x140246338822791 = makeCons(symcdr, x140246338822759);
pushCont(co, 16, clofun4, 4, x, x140246338953063, cc, x140246338951911);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = x140246338822791;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
pushCont(co, 13, clofun4, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140246338825703 = makeCons(expr, Nil);
Obj x140246338825735 = makeCons(symcons_63, x140246338825703);
Obj x140246338699687 = makeCons(expr, Nil);
Obj x140246338699719 = makeCons(symcar, x140246338699687);
Obj x140246338700487 = makeCons(expr, Nil);
Obj x140246338700519 = makeCons(symcdr, x140246338700487);
pushCont(co, 11, clofun4, 4, x, x140246338699719, cc, x140246338825735);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = x140246338700519;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label11:
{
Obj x140246338700615 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338699719= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140246338825735= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 12, clofun4, 2, cc, x140246338825735);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = x140246338699719;
__arg3 = x140246338700615;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140246338700679 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338825735= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246338701255 = makeCons(cc, Nil);
Obj x140246338701319 = makeCons(x140246338701255, Nil);
Obj x140246338701351 = makeCons(x140246338700679, x140246338701319);
Obj x140246338701383 = makeCons(x140246338825735, x140246338701351);
Obj x140246338701415 = makeCons(symif, x140246338701383);
__nargs = 2;
__arg1 = x140246338701415;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj x140246338823911 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = x140246338823911;
pushCont(co, 14, clofun4, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140246338824167 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = x140246338824167;
pushCont(co, 15, clofun4, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140246338824807 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = x140246338824807;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140246338822887 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338953063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140246338951911= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 17, clofun4, 2, cc, x140246338951911);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = x140246338953063;
__arg3 = x140246338822887;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140246338822951 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338951911= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246338823399 = makeCons(cc, Nil);
Obj x140246338823527 = makeCons(x140246338823399, Nil);
Obj x140246338823559 = makeCons(x140246338822951, x140246338823527);
Obj x140246338823591 = makeCons(x140246338951911, x140246338823559);
Obj x140246338823623 = makeCons(symif, x140246338823591);
__nargs = 2;
__arg1 = x140246338823623;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj x140246338949767 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = x140246338949767;
pushCont(co, 19, clofun4, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140246338950119 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = x140246338950119;
pushCont(co, 20, clofun4, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140246338950919 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = x140246338950919;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140246338972839 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338971847= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140246338970567= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 22, clofun4, 2, cc, x140246338970567);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = x140246338971847;
__arg3 = x140246338972839;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140246338972935 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338970567= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246338973511 = makeCons(cc, Nil);
Obj x140246338973575 = makeCons(x140246338973511, Nil);
Obj x140246338973607 = makeCons(x140246338972935, x140246338973575);
Obj x140246338973639 = makeCons(x140246338970567, x140246338973607);
Obj x140246338949287 = makeCons(symif, x140246338973639);
__nargs = 2;
__arg1 = x140246338949287;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x140246339320519 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = x140246339320519;
pushCont(co, 24, clofun4, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140246339320807 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = x140246339320807;
pushCont(co, 25, clofun4, 3, x, e1, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = e2;
__arg3 = body;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140246339321447 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = x140246339321447;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj exp = __arg1;
Obj x140246339318311 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = x140246339318311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj pat = __arg1;
Obj x140246339373159 = PRIM_CDR(pat);
pushCont(co, 28, clofun4, 1, pat);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140246339373159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140246339373191 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140246339373191) {
Obj x140246339373383 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = x140246339373383;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246339374087 = PRIM_CAR(pat);
Obj x140246339374631 = PRIM_CDR(pat);
pushCont(co, 29, clofun4, 1, x140246339374087);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = x140246339374631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140246339374663 = __arg1;
Obj x140246339374087= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246339374727 = makeCons(x140246339374663, Nil);
Obj x140246339374759 = makeCons(x140246339374087, x140246339374727);
Obj x140246339374791 = makeCons(symcons, x140246339374759);
__nargs = 2;
__arg1 = x140246339374791;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x = __arg1;
Obj x140246339371879 = PRIM_EQ(x, True);
if (True == x140246339371879) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246339372263 = PRIM_EQ(x, False);
if (True == x140246339372263) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label31:
{
Obj exp = __arg1;
Obj x140246339371143 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = x140246339371143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj l = __arg1;
Obj x140246339621831 = PRIM_EQ(Nil, l);
if (True == x140246339621831) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246339622247 = PRIM_CAR(l);
Obj x140246339622311 = PRIM_EQ(x140246339622247, False);
if (True == x140246339622311) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246339622727 = PRIM_CDR(l);
pushCont(co, 33, clofun4, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = x140246339622727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label33:
{
Obj x140246339622759 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = x140246339622759;
Obj x140246339623111 = PRIM_EQ(more, False);
if (True == x140246339623111) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246339623751 = PRIM_CAR(l);
Obj x140246339624199 = makeCons(False, Nil);
Obj x140246339624231 = makeCons(more, x140246339624199);
Obj x140246339624263 = makeCons(x140246339623751, x140246339624231);
Obj x140246339624295 = makeCons(symif, x140246339624263);
__nargs = 2;
__arg1 = x140246339624295;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label34:
{
Obj exp = __arg1;
Obj x140246339621191 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = x140246339621191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj l = __arg1;
Obj x140246339712391 = PRIM_EQ(l, Nil);
if (True == x140246339712391) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246339712807 = PRIM_CAR(l);
Obj x140246339712871 = PRIM_EQ(x140246339712807, True);
if (True == x140246339712871) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246339713287 = PRIM_CDR(l);
pushCont(co, 36, clofun4, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = x140246339713287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label36:
{
Obj x140246339713319 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = x140246339713319;
Obj x140246339713607 = PRIM_EQ(more, True);
if (True == x140246339713607) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246339714151 = PRIM_CAR(l);
Obj x140246339714599 = makeCons(more, Nil);
Obj x140246339714631 = makeCons(True, x140246339714599);
Obj x140246339714663 = makeCons(x140246339714151, x140246339714631);
Obj x140246339714695 = makeCons(symif, x140246339714663);
__nargs = 2;
__arg1 = x140246339714695;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label37:
{
Obj exp = __arg1;
Obj x140246339750279 = PRIM_CDR(exp);
Obj x140246339750311 = PRIM_EQ(Nil, x140246339750279);
if (True == x140246339750311) {
Obj x140246339750727 = makeCons(makeCString("no cond match"), Nil);
Obj x140246339750759 = makeCons(symerror, x140246339750727);
__nargs = 2;
__arg1 = x140246339750759;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 38, clofun4, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj x140246339751015 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = x140246339751015;
Obj x140246339751559 = PRIM_CAR(curr);
pushCont(co, 39, clofun4, 2, exp, x140246339751559);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = curr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140246339710983 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246339751559= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 40, clofun4, 2, x140246339710983, x140246339751559);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140246339711559 = __arg1;
Obj x140246339710983= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246339751559= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246339711591 = makeCons(symcond, x140246339711559);
Obj x140246339711655 = makeCons(x140246339711591, Nil);
Obj x140246339711687 = makeCons(x140246339710983, x140246339711655);
Obj x140246339711719 = makeCons(x140246339751559, x140246339711687);
Obj x140246339711751 = makeCons(symif, x140246339711719);
__nargs = 2;
__arg1 = x140246339711751;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj exp = __arg1;
Obj x140246339749479 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = x140246339749479;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj exp = __arg1;
Obj x140246338552903 = PRIM_CDR(exp);
pushCont(co, 43, clofun4, 1, exp);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140246338552903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140246338552935 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140246338552935) {
Obj x140246338553127 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = x140246338553127;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246338553671 = PRIM_CAR(exp);
pushCont(co, 44, clofun4, 2, exp, x140246338553671);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj x140246339748039 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338553671= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun4, 2, x140246339748039, x140246338553671);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140246339748583 = __arg1;
Obj x140246339748039= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338553671= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 46, clofun4, 2, x140246339748039, x140246338553671);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = x140246339748583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140246339748615 = __arg1;
Obj x140246339748039= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338553671= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246339748679 = makeCons(x140246339748615, Nil);
Obj x140246339748711 = makeCons(x140246339748039, x140246339748679);
Obj x140246339748743 = makeCons(x140246338553671, x140246339748711);
Obj x140246339748775 = makeCons(symlet, x140246339748743);
__nargs = 2;
__arg1 = x140246339748775;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label47:
{
Obj x = __arg1;
Obj x140246338551911 = PRIM_ISCONS(x);
Obj x140246338551943 = primNot(x140246338551911);
__nargs = 2;
__arg1 = x140246338551943;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label48:
{
Obj x = __arg1;
Obj l = __arg2;
Obj x140246338602887 = PRIM_ISCONS(l);
if (True == x140246338602887) {
Obj x140246338603303 = PRIM_CAR(l);
Obj x140246338603367 = PRIM_EQ(x140246338603303, x);
if (True == x140246338603367) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246338603751 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symelem_63);
__arg1 = x;
__arg2 = x140246338603751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label49:
{
Obj exp = __arg1;
pushCont(co, 0, clofun5, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun5(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140246338629575 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 1, clofun5, 2, exp, x140246338629575);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x140246338601639 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338629575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 2, clofun5, 2, x140246338601639, x140246338629575);
__nargs = 2;
__arg0 = globalRef(symcadddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x140246338602023 = __arg1;
Obj x140246338601639= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338629575= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246338602087 = makeCons(x140246338602023, Nil);
Obj x140246338602119 = makeCons(x140246338601639, x140246338602087);
Obj x140246338602151 = makeCons(symlambda, x140246338602119);
Obj x140246338602215 = makeCons(x140246338602151, Nil);
Obj x140246338602247 = makeCons(x140246338629575, x140246338602215);
Obj x140246338602279 = makeCons(symdef, x140246338602247);
__nargs = 2;
__arg1 = x140246338602279;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj exp = __arg1;
Obj x140246338628679 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = x140246338628679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj exp = __arg1;
pushCont(co, 5, clofun5, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140246338626407 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338626471 = makeCons(x140246338626407, Nil);
Obj x140246338626503 = makeCons(symquote, x140246338626471);
pushCont(co, 6, clofun5, 2, exp, x140246338626503);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140246338627271 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338626503= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 7, clofun5, 2, x140246338627271, x140246338626503);
__nargs = 2;
__arg0 = globalRef(symcdddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140246338627495 = __arg1;
Obj x140246338627271= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338626503= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140246338627527 = makeCons(x140246338627271, x140246338627495);
Obj x140246338627559 = makeCons(symlambda, x140246338627527);
Obj x140246338627623 = makeCons(x140246338627559, Nil);
Obj x140246338627655 = makeCons(x140246338626503, x140246338627623);
Obj x140246338627687 = makeCons(symcora_47init_35add_45to_45_42macros_42, x140246338627655);
__nargs = 2;
__arg1 = x140246338627687;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj exp = __arg1;
Obj x140246338825671 = PRIM_ISCONS(exp);
if (True == x140246338825671) {
Obj x140246338826087 = PRIM_CAR(exp);
Obj x140246338826151 = PRIM_EQ(x140246338826087, globalRef(sym_42protect_45symbol_42));
if (True == x140246338826151) {
Obj x140246338699367 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = x140246338699367;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246338699815 = PRIM_CAR(exp);
Obj x140246338699879 = PRIM_EQ(x140246338699815, symlambda);
if (True == x140246338699879) {
pushCont(co, 11, clofun5, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140246338701575 = PRIM_CAR(exp);
Obj x140246338701639 = PRIM_EQ(x140246338701575, symquote);
if (True == x140246338701639) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 9, clofun5, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand1);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label9:
{
Obj x140246338702695 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(10, clofun5, 1, 1, exp);
__arg1 = x140246338702695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj exp1 = __arg1;
Obj x140246338702119 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == x140246338702119) {
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35macroexpand_45boot);
__arg2 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = exp1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj x140246338700455 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 12, clofun5, 1, x140246338700455);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140246338700999 = __arg1;
Obj x140246338700455= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 13, clofun5, 1, x140246338700455);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = x140246338700999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140246338701031 = __arg1;
Obj x140246338700455= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246338701095 = makeCons(x140246338701031, Nil);
Obj x140246338701127 = makeCons(x140246338700455, x140246338701095);
Obj x140246338701159 = makeCons(symlambda, x140246338701127);
__nargs = 2;
__arg1 = x140246338701159;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = exp;
__arg2 = globalRef(sym_42macros_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj exp = __arg1;
Obj macros = __arg2;
Obj x140246338951623 = PRIM_EQ(Nil, macros);
if (True == x140246338951623) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140246338824487 = PRIM_CAR(macros);
__nargs = 2;
__arg0 = makeNative(16, clofun5, 1, 2, exp, macros);
__arg1 = x140246338824487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj item = __arg1;
Obj x140246338952135 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140246338952135) {
Obj x140246338952711 = PRIM_CAR(closureRef(co, 0));
Obj x140246338952967 = PRIM_CAR(item);
Obj x140246338952999 = PRIM_EQ(x140246338952711, x140246338952967);
if (True == x140246338952999) {
if (True == True) {
Obj x140246338822311 = PRIM_CDR(item);
__nargs = 2;
__arg0 = x140246338822311;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140246338822727 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = x140246338822727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj x140246338823047 = PRIM_CDR(item);
__nargs = 2;
__arg0 = x140246338823047;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140246338823495 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = x140246338823495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj x140246338823815 = PRIM_CDR(item);
__nargs = 2;
__arg0 = x140246338823815;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140246338824263 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = x140246338824263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label17:
{
Obj n = __arg1;
Obj v = __arg2;
Obj x140246338950727 = makeCons(n, v);
Obj x140246338950791 = makeCons(x140246338950727, globalRef(sym_42macros_42));
Obj x140246338950823 = primSet(co, sym_42macros_42, x140246338950791);
__nargs = 2;
__arg1 = x140246338950823;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
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
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj res = __arg1;
Obj f = __arg2;
Obj l = __arg3;
Obj x140246338970727 = PRIM_ISCONS(l);
if (True == x140246338970727) {
Obj x140246338971559 = PRIM_CAR(l);
pushCont(co, 20, clofun5, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = x140246338971559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj x140246338971623 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140246338971719 = makeCons(x140246338971623, res);
Obj x140246338972103 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symmap_45h);
__arg1 = x140246338971719;
__arg2 = f;
__arg3 = x140246338972103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj res = __arg1;
Obj l = __arg2;
Obj x140246339320583 = PRIM_ISCONS(l);
if (True == x140246339320583) {
Obj x140246339321095 = PRIM_CAR(l);
Obj x140246339321159 = makeCons(x140246339321095, res);
Obj x140246339321383 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35reverse_45h);
__arg1 = x140246339321159;
__arg2 = x140246339321383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label22:
{
Obj x = __arg1;
Obj x140246339319975 = PRIM_ISCONS(x);
__nargs = 2;
__arg1 = x140246339319975;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj exp = __arg1;
Obj x140246339318183 = PRIM_ISCONS(exp);
if (True == x140246339318183) {
Obj x140246339318727 = PRIM_CAR(exp);
Obj x140246339319271 = PRIM_CDR(exp);
pushCont(co, 24, clofun5, 1, x140246339318727);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = x140246339319271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label24:
{
Obj x140246339319303 = __arg1;
Obj x140246339318727= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140246339319367 = makeCons(x140246339319303, Nil);
Obj x140246339319399 = makeCons(x140246339318727, x140246339319367);
Obj x140246339319431 = makeCons(symcons, x140246339319399);
__nargs = 2;
__arg1 = x140246339319431;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x = __arg1;
Obj x140246339374855 = PRIM_CDR(x);
Obj x140246339374887 = PRIM_CDR(x140246339374855);
Obj x140246339374919 = PRIM_CDR(x140246339374887);
__nargs = 2;
__arg1 = x140246339374919;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj x = __arg1;
Obj x140246339373895 = PRIM_CDR(x);
Obj x140246339373927 = PRIM_CDR(x140246339373895);
Obj x140246339373959 = PRIM_CDR(x140246339373927);
Obj x140246339373991 = PRIM_CAR(x140246339373959);
__nargs = 2;
__arg1 = x140246339373991;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj x = __arg1;
Obj x140246339372807 = PRIM_CDR(x);
Obj x140246339372839 = PRIM_CDR(x140246339372807);
Obj x140246339372871 = PRIM_CAR(x140246339372839);
__nargs = 2;
__arg1 = x140246339372871;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj x = __arg1;
Obj x140246339371911 = PRIM_CDR(x);
Obj x140246339371943 = PRIM_CDR(x140246339371911);
__nargs = 2;
__arg1 = x140246339371943;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
Obj x = __arg1;
Obj x140246339371175 = PRIM_CAR(x);
Obj x140246339371207 = PRIM_CDR(x140246339371175);
__nargs = 2;
__arg1 = x140246339371207;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x = __arg1;
Obj x140246339624391 = PRIM_CAR(x);
Obj x140246339624423 = PRIM_CAR(x140246339624391);
__nargs = 2;
__arg1 = x140246339624423;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj x = __arg1;
Obj x140246339623655 = PRIM_CDR(x);
Obj x140246339623687 = PRIM_CAR(x140246339623655);
__nargs = 2;
__arg1 = x140246339623687;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj x = __arg1;
Obj x140246339622951 = PRIM_EQ(x, Nil);
__nargs = 2;
__arg1 = x140246339622951;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

