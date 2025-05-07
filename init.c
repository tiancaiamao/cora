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
static Obj symns;
static Obj sympackage;
static Obj symcora_47init_35parse_45package;
static Obj symimport;
static Obj symexport;
static Obj symcora_47init_35parse_45package_45h;
static Obj symbackquote;
static Obj symunquote;
static Obj symcora_47init_35rewrite_45backquote;
static Obj symbegin;
static Obj symdo;
static Obj symcora_47init_35rewrite_45begin;
static Obj symcora_47init_35parse;
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
symns = intern("ns");
sympackage = intern("package");
symcora_47init_35parse_45package = intern("cora/init#parse-package");
symimport = intern("import");
symexport = intern("export");
symcora_47init_35parse_45package_45h = intern("cora/init#parse-package-h");
symbackquote = intern("backquote");
symunquote = intern("unquote");
symcora_47init_35rewrite_45backquote = intern("cora/init#rewrite-backquote");
symbegin = intern("begin");
symdo = intern("do");
symcora_47init_35rewrite_45begin = intern("cora/init#rewrite-begin");
symcora_47init_35parse = intern("cora/init#parse");
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
Obj x140580600240167 = primSet(co, symnull_63, makeNative(32, clofun5, 1, 0));
Obj x140580600240903 = primSet(co, symcadr, makeNative(31, clofun5, 1, 0));
Obj x140580600241639 = primSet(co, symcaar, makeNative(30, clofun5, 1, 0));
Obj x140580599955655 = primSet(co, symcdar, makeNative(29, clofun5, 1, 0));
Obj x140580599956423 = primSet(co, symcddr, makeNative(28, clofun5, 1, 0));
Obj x140580599957447 = primSet(co, symcaddr, makeNative(27, clofun5, 1, 0));
Obj x140580599958631 = primSet(co, symcadddr, makeNative(26, clofun5, 1, 0));
Obj x140580599939143 = primSet(co, symcdddr, makeNative(25, clofun5, 1, 0));
Obj x140580599941031 = primSet(co, symrcons, makeNative(23, clofun5, 1, 0));
Obj x140580599941607 = primSet(co, sympair_63, makeNative(22, clofun5, 1, 0));
Obj x140580599943047 = primSet(co, symcora_47init_35reverse_45h, makeNative(21, clofun5, 2, 0));
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
Obj x140580599910727 = __arg1;
Obj x140580599910759 = primSet(co, symreverse, x140580599910727);
Obj x140580599912615 = primSet(co, symmap_45h, makeNative(19, clofun5, 3, 0));
Obj x140580599913223 = primSet(co, symmap, makeNative(18, clofun5, 2, 0));
Obj x140580599913511 = primSet(co, sym_42macros_42, Nil);
Obj x140580599913959 = primGenSym();
Obj x140580599913991 = primSet(co, sym_42protect_45symbol_42, x140580599913959);
Obj x140580600856647 = primSet(co, symcora_47init_35add_45to_45_42macros_42, makeNative(17, clofun5, 2, 0));
Obj x140580600820231 = primSet(co, symcora_47init_35macroexpand1_45h, makeNative(15, clofun5, 2, 0));
Obj x140580600820775 = primSet(co, symcora_47init_35macroexpand1, makeNative(14, clofun5, 1, 0));
Obj x140580600797095 = primSet(co, symcora_47init_35macroexpand_45boot, makeNative(8, clofun5, 1, 0));
Obj x140580600797415 = primSet(co, symmacroexpand, globalRef(symcora_47init_35macroexpand_45boot));
Obj x140580600755143 = primSet(co, symdefmacro_45macro, makeNative(4, clofun5, 1, 0));
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
Obj x140580600755463 = __arg1;
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
Obj x140580600756263 = __arg1;
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
Obj x140580600701319 = __arg1;
Obj x140580600702951 = primSet(co, symelem_63, makeNative(48, clofun4, 2, 0));
Obj x140580600703719 = primSet(co, symatom_63, makeNative(47, clofun4, 1, 0));
Obj x140580600661351 = primSet(co, symcora_47init_35rewrite_45let, makeNative(42, clofun4, 1, 0));
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
Obj x140580600662055 = __arg1;
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
Obj x140580600632615 = __arg1;
Obj x140580600586471 = primSet(co, symcora_47init_35rewrite_45or, makeNative(35, clofun4, 1, 0));
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
Obj x140580600587175 = __arg1;
Obj x140580600238119 = primSet(co, symcora_47init_35rewrite_45and, makeNative(32, clofun4, 1, 0));
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
Obj x140580600238823 = __arg1;
Obj x140580600239751 = primSet(co, symboolean_63, makeNative(30, clofun4, 1, 0));
Obj x140580599955527 = primSet(co, symcora_47init_35rcons1, makeNative(27, clofun4, 1, 0));
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
Obj x140580599956487 = __arg1;
Obj x140580599878727 = primSet(co, symcora_47init_35match_45cons_45expander, makeNative(8, clofun4, 4, 0));
Obj x140580600857959 = primSet(co, symcora_47init_35match1, makeNative(2, clofun4, 4, 0));
Obj x140580600795815 = primSet(co, symcora_47init_35extract_45rule_45action, makeNative(44, clofun3, 2, 0));
Obj x140580600631303 = primSet(co, symcora_47init_35match_45helper, makeNative(28, clofun3, 2, 0));
Obj x140580600590087 = primSet(co, symcora_47init_35rewrite_45match, makeNative(21, clofun3, 1, 0));
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
Obj x140580600238503 = __arg1;
Obj x140580599897063 = primSet(co, symcora_47init_35extract_45rules1, makeNative(13, clofun3, 3, 0));
Obj x140580599897639 = primSet(co, symcora_47init_35extract_45rules, makeNative(12, clofun3, 1, 0));
Obj x140580599879111 = primSet(co, symcora_47init_35rules_45patterns, makeNative(9, clofun3, 2, 0));
Obj x140580599880519 = primSet(co, symcora_47init_35length_45h, makeNative(8, clofun3, 2, 0));
Obj x140580599881063 = primSet(co, symlength, makeNative(7, clofun3, 1, 0));
Obj x140580599789767 = primSet(co, symcora_47init_35filter_45h, makeNative(5, clofun3, 3, 0));
Obj x140580599790407 = primSet(co, symfilter, makeNative(4, clofun3, 2, 0));
Obj x140580599760039 = primSet(co, symappend, makeNative(2, clofun3, 2, 0));
Obj x140580599726407 = primSet(co, symcora_47init_35rules_45arg_45count, makeNative(45, clofun2, 1, 0));
Obj x140580599727847 = primSet(co, symcora_47init_35gen_45paramenters, makeNative(43, clofun2, 1, 0));
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
Obj x140580600859527 = __arg1;
Obj x140580600821287 = primSet(co, symcora_47init_35propagate_45boolean0, makeNative(25, clofun2, 1, 0));
Obj x140580599696039 = primSet(co, symcora_47init_35propagate_45boolean, makeNative(2, clofun2, 1, 0));
Obj x140580599696743 = primSet(co, symcora_47init_35rewrite_45namespace, makeNative(1, clofun2, 1, 0));
Obj x140580599513575 = primSet(co, symmacroexpand, makeNative(48, clofun1, 1, 0));
Obj x140580599371527 = primSet(co, symcora_47init_35rewrite_45begin, makeNative(43, clofun1, 1, 0));
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
Obj x140580599372231 = __arg1;
Obj x140580600858631 = primSet(co, symcora_47init_35rewrite_45backquote, makeNative(36, clofun1, 1, 0));
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
Obj x140580600860167 = __arg1;
Obj x140580600704967 = primSet(co, symcora_47init_35parse_45package_45h, makeNative(29, clofun1, 4, 0));
Obj x140580600660967 = primSet(co, symcora_47init_35parse_45package, makeNative(28, clofun1, 2, 0));
PUSH_CONT_0(co, 14, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = sympackage;
__arg2 = makeNative(20, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140580600587623 = __arg1;
Obj x140580600238439 = primSet(co, symcora_47init_35var_45with_45ns, makeNative(15, clofun1, 2, 0));
Obj x140580599939751 = primSet(co, symcora_47init_35lookup_45var, makeNative(5, clofun1, 3, 0));
Obj x140580599941735 = makeCons(makeCString("primSet"), Nil);
Obj x140580599941831 = makeCons(MAKE_NUMBER(2), x140580599941735);
Obj x140580599941863 = makeCons(symset, x140580599941831);
Obj x140580599911079 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x140580599911111 = makeCons(MAKE_NUMBER(1), x140580599911079);
Obj x140580599911143 = makeCons(symcar, x140580599911111);
Obj x140580599912487 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x140580599912519 = makeCons(MAKE_NUMBER(1), x140580599912487);
Obj x140580599912711 = makeCons(symcdr, x140580599912519);
Obj x140580599914279 = makeCons(makeCString("makeCons"), Nil);
Obj x140580599914311 = makeCons(MAKE_NUMBER(2), x140580599914279);
Obj x140580599914375 = makeCons(symcons, x140580599914311);
Obj x140580599895367 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x140580599895399 = makeCons(MAKE_NUMBER(1), x140580599895367);
Obj x140580599895431 = makeCons(symcons_63, x140580599895399);
Obj x140580599896647 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x140580599896711 = makeCons(MAKE_NUMBER(2), x140580599896647);
Obj x140580599896743 = makeCons(sym_43, x140580599896711);
Obj x140580599897991 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x140580599898023 = makeCons(MAKE_NUMBER(2), x140580599897991);
Obj x140580599898055 = makeCons(sym_45, x140580599898023);
Obj x140580599878919 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x140580599878951 = makeCons(MAKE_NUMBER(2), x140580599878919);
Obj x140580599878983 = makeCons(sym_42, x140580599878951);
Obj x140580599880391 = makeCons(makeCString("primDiv"), Nil);
Obj x140580599880455 = makeCons(MAKE_NUMBER(2), x140580599880391);
Obj x140580599880551 = makeCons(sym_47, x140580599880455);
Obj x140580599787591 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x140580599787655 = makeCons(MAKE_NUMBER(2), x140580599787591);
Obj x140580599787687 = makeCons(sym_61, x140580599787655);
Obj x140580599788903 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x140580599788935 = makeCons(MAKE_NUMBER(2), x140580599788903);
Obj x140580599788967 = makeCons(sym_62, x140580599788935);
Obj x140580599790311 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x140580599790343 = makeCons(MAKE_NUMBER(2), x140580599790311);
Obj x140580599790375 = makeCons(sym_60, x140580599790343);
Obj x140580599759047 = makeCons(makeCString("primGenSym"), Nil);
Obj x140580599759079 = makeCons(MAKE_NUMBER(0), x140580599759047);
Obj x140580599759111 = makeCons(symgensym, x140580599759079);
Obj x140580599760359 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x140580599760391 = makeCons(MAKE_NUMBER(1), x140580599760359);
Obj x140580599760423 = makeCons(symsymbol_63, x140580599760391);
Obj x140580599761511 = makeCons(makeCString("primNot"), Nil);
Obj x140580599761543 = makeCons(MAKE_NUMBER(1), x140580599761511);
Obj x140580599761575 = makeCons(symnot, x140580599761543);
Obj x140580599762727 = makeCons(makeCString("primIsNumber"), Nil);
Obj x140580599762759 = makeCons(MAKE_NUMBER(1), x140580599762727);
Obj x140580599762791 = makeCons(syminteger_63, x140580599762759);
Obj x140580599727207 = makeCons(makeCString("primIsString"), Nil);
Obj x140580599727239 = makeCons(MAKE_NUMBER(1), x140580599727207);
Obj x140580599727271 = makeCons(symstring_63, x140580599727239);
Obj x140580599727367 = makeCons(x140580599727271, Nil);
Obj x140580599727399 = makeCons(x140580599762791, x140580599727367);
Obj x140580599727431 = makeCons(x140580599761575, x140580599727399);
Obj x140580599727463 = makeCons(x140580599760423, x140580599727431);
Obj x140580599727495 = makeCons(x140580599759111, x140580599727463);
Obj x140580599727623 = makeCons(x140580599790375, x140580599727495);
Obj x140580599727655 = makeCons(x140580599788967, x140580599727623);
Obj x140580599727687 = makeCons(x140580599787687, x140580599727655);
Obj x140580599727719 = makeCons(x140580599880551, x140580599727687);
Obj x140580599727879 = makeCons(x140580599878983, x140580599727719);
Obj x140580599727911 = makeCons(x140580599898055, x140580599727879);
Obj x140580599727943 = makeCons(x140580599896743, x140580599727911);
Obj x140580599728007 = makeCons(x140580599895431, x140580599727943);
Obj x140580599728039 = makeCons(x140580599914375, x140580599728007);
Obj x140580599728071 = makeCons(x140580599912711, x140580599728039);
Obj x140580599728103 = makeCons(x140580599911143, x140580599728071);
Obj x140580599728135 = makeCons(x140580599941863, x140580599728103);
Obj x140580599728167 = primSet(co, symcora_47init_35_42builtin_45prims_42, x140580599728135);
Obj x140580599513799 = primSet(co, symassq, makeNative(1, clofun1, 2, 0));
Obj x140580599514919 = primSet(co, symcora_47init_35builtin_63, makeNative(48, clofun0, 1, 0));
Obj x140580599941671 = primSet(co, symcora_47init_35parse, makeNative(15, clofun0, 4, 0));
Obj x140580599788391 = makeCons(symappend, Nil);
Obj x140580599788423 = makeCons(symfilter, x140580599788391);
Obj x140580599788519 = makeCons(symlength, x140580599788423);
Obj x140580599788551 = makeCons(symelem_63, x140580599788519);
Obj x140580599788583 = makeCons(symmacroexpand, x140580599788551);
Obj x140580599788647 = makeCons(symmap, x140580599788583);
Obj x140580599788711 = makeCons(symreverse, x140580599788647);
Obj x140580599788775 = makeCons(symthrow, x140580599788711);
Obj x140580599788807 = makeCons(symtry, x140580599788775);
Obj x140580599788839 = makeCons(symload, x140580599788807);
Obj x140580599788871 = makeCons(symimport, x140580599788839);
Obj x140580599789031 = makeCons(symload_45so, x140580599788871);
Obj x140580599789191 = makeCons(symapply, x140580599789031);
Obj x140580599789223 = makeCons(symvalue_45or, x140580599789191);
Obj x140580599789255 = makeCons(symvalue, x140580599789223);
Obj x140580599789351 = makeCons(symread_45file_45as_45sexp, x140580599789255);
Obj x140580599789383 = makeCons(symbytes_45length, x140580599789351);
Obj x140580599789447 = makeCons(symbytes, x140580599789383);
Obj x140580599789479 = makeCons(symvector_45length, x140580599789447);
Obj x140580599789511 = makeCons(symvector_45ref, x140580599789479);
Obj x140580599789543 = makeCons(symvector_45set_33, x140580599789511);
Obj x140580599789607 = makeCons(symvector, x140580599789543);
Obj x140580599789671 = makeCons(symsymbol_45_62string, x140580599789607);
Obj x140580599789703 = makeCons(symintern, x140580599789671);
Obj x140580599789735 = makeCons(symstring_45append, x140580599789703);
Obj x140580599789799 = makeCons(symnull_63, x140580599789735);
Obj x140580599789959 = makeCons(symnumber_63, x140580599789799);
Obj x140580599789991 = makeCons(symboolean_63, x140580599789959);
Obj x140580599790023 = makeCons(symatom_63, x140580599789991);
Obj x140580599790055 = makeCons(sympair_63, x140580599790023);
Obj x140580599790087 = makeCons(symcdddr, x140580599790055);
Obj x140580599790119 = makeCons(symcadddr, x140580599790087);
Obj x140580599790151 = makeCons(symcaddr, x140580599790119);
Obj x140580599790183 = makeCons(symcddr, x140580599790151);
Obj x140580599790215 = makeCons(symcdar, x140580599790183);
Obj x140580599790439 = makeCons(symcaar, x140580599790215);
Obj x140580599790471 = makeCons(symcadr, x140580599790439);
Obj x140580599790503 = primSet(co, symcora_47init_35_42ns_45export_42, x140580599790471);
Obj x140580599791047 = primSet(co, symcora_47init_35cadr, globalRef(symcadr));
Obj x140580599791335 = primSet(co, symcora_47init_35caar, globalRef(symcaar));
Obj x140580599759335 = primSet(co, symcora_47init_35cdar, globalRef(symcdar));
Obj x140580599759879 = primSet(co, symcora_47init_35cddr, globalRef(symcddr));
Obj x140580599760327 = primSet(co, symcora_47init_35caddr, globalRef(symcaddr));
Obj x140580599760871 = primSet(co, symcora_47init_35cadddr, globalRef(symcadddr));
Obj x140580599761255 = primSet(co, symcora_47init_35cdddr, globalRef(symcdddr));
Obj x140580599761703 = primSet(co, symcora_47init_35pair_63, globalRef(sympair_63));
Obj x140580599762247 = primSet(co, symcora_47init_35atom_63, globalRef(symatom_63));
Obj x140580599762599 = primSet(co, symcora_47init_35boolean_63, globalRef(symboolean_63));
Obj x140580599726503 = primSet(co, symcora_47init_35null_63, globalRef(symnull_63));
Obj x140580599726791 = primSet(co, symcora_47init_35number_63, globalRef(symnumber_63));
Obj x140580599727175 = primSet(co, symcora_47init_35string_45append, globalRef(symstring_45append));
Obj x140580599728423 = primSet(co, symcora_47init_35intern, globalRef(symintern));
Obj x140580599728839 = primSet(co, symcora_47init_35symbol_45_62string, globalRef(symsymbol_45_62string));
Obj x140580599729127 = primSet(co, symcora_47init_35vector, globalRef(symvector));
Obj x140580599729639 = primSet(co, symcora_47init_35vector_45set_33, globalRef(symvector_45set_33));
Obj x140580599730087 = primSet(co, symcora_47init_35vector_45ref, globalRef(symvector_45ref));
Obj x140580599693607 = primSet(co, symcora_47init_35vector_45length, globalRef(symvector_45length));
Obj x140580599693959 = primSet(co, symcora_47init_35bytes, globalRef(symbytes));
Obj x140580599694343 = primSet(co, symcora_47init_35bytes_45length, globalRef(symbytes_45length));
Obj x140580599694663 = primSet(co, symcora_47init_35value, globalRef(symvalue));
Obj x140580599695175 = primSet(co, symcora_47init_35value_45or, globalRef(symvalue_45or));
Obj x140580599695655 = primSet(co, symcora_47init_35read_45file_45as_45sexp, globalRef(symread_45file_45as_45sexp));
Obj x140580599696007 = primSet(co, symcora_47init_35apply, globalRef(symapply));
Obj x140580599696455 = primSet(co, symcora_47init_35load, globalRef(symload));
Obj x140580599696807 = primSet(co, symcora_47init_35load_45so, globalRef(symload_45so));
Obj x140580599697255 = primSet(co, symcora_47init_35import, globalRef(symimport));
Obj x140580599513223 = primSet(co, symcora_47init_35try, globalRef(symtry));
Obj x140580599513767 = primSet(co, symcora_47init_35throw, globalRef(symthrow));
Obj x140580599514087 = primSet(co, symcora_47init_35reverse, globalRef(symreverse));
Obj x140580599514503 = primSet(co, symcora_47init_35map, globalRef(symmap));
Obj x140580599514951 = primSet(co, symcora_47init_35macroexpand, globalRef(symmacroexpand));
Obj x140580599515431 = primSet(co, symcora_47init_35elem_63, globalRef(symelem_63));
Obj x140580599515751 = primSet(co, symcora_47init_35length, globalRef(symlength));
Obj x140580599516039 = primSet(co, symcora_47init_35filter, globalRef(symfilter));
Obj x140580599516615 = primSet(co, symcora_47init_35append, globalRef(symappend));
Obj x140580599516839 = primSet(co, symcora_47init_35assq, globalRef(symassq));
__nargs = 2;
__arg1 = x140580599516839;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj x140580600754983 = __arg1;
Obj x140580600755015 = __arg2;
Obj x140580600755047 = __arg3;
Obj x140580600755079 = co->args[4];
Obj x140580600755943 = makeNative(19, clofun0, 0, 4, x140580600754983, x140580600755015, x140580600755047, x140580600755079);
Obj __ = x140580600754983;
__ = x140580600755015;
__ = x140580600755047;
Obj x = x140580600755079;
pushCont(co, 16, clofun0, 2, x, x140580600755943);
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
Obj x140580599959239 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600755943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140580599959239) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580600755943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj x140580599939591 = primIsString(x);
if (True == x140580599939591) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580600755943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 17, clofun0, 2, x, x140580600755943);
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
Obj x140580599940327 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600755943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140580599940327) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580600755943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 18, clofun0, 2, x, x140580600755943);
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
Obj x140580599941319 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600755943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140580599941319) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580600755943;
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
__arg0 = x140580600755943;
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
Obj x140580600757159 = makeNative(20, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj __ = closureRef(co, 0);
__ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj x140580600238567 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140580600238567) {
Obj x140580600239175 = PRIM_CAR(closureRef(co, 3));
Obj x140580600239207 = PRIM_EQ(symquote, x140580600239175);
if (True == x140580600239207) {
Obj x140580600240007 = PRIM_CDR(closureRef(co, 3));
Obj x140580600240039 = PRIM_ISCONS(x140580600240007);
if (True == x140580600240039) {
Obj x140580600240711 = PRIM_CDR(closureRef(co, 3));
Obj x140580600240967 = PRIM_CAR(x140580600240711);
Obj x = x140580600240967;
Obj x140580600242119 = PRIM_CDR(closureRef(co, 3));
Obj x140580599955719 = PRIM_CDR(x140580600242119);
Obj x140580599955815 = PRIM_EQ(Nil, x140580599955719);
if (True == x140580599955815) {
Obj x140580599956903 = makeCons(x, Nil);
Obj x140580599956935 = makeCons(symquote, x140580599956903);
__nargs = 2;
__arg1 = x140580599956935;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580600757159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600757159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600757159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600757159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj x140580600702503 = makeNative(22, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x = closureRef(co, 3);
Obj x140580600588807 = primIsSymbol(x);
if (True == x140580600588807) {
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
__arg0 = x140580600702503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj x140580600589319 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140580600589319) {
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
Obj x140580600703495 = makeNative(25, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140580600703943 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140580600703943) {
Obj x140580600704839 = PRIM_CAR(closureRef(co, 3));
Obj x140580600704871 = PRIM_EQ(symlambda, x140580600704839);
if (True == x140580600704871) {
Obj x140580600660647 = PRIM_CDR(closureRef(co, 3));
Obj x140580600660679 = PRIM_ISCONS(x140580600660647);
if (True == x140580600660679) {
Obj x140580600661607 = PRIM_CDR(closureRef(co, 3));
Obj x140580600661639 = PRIM_CAR(x140580600661607);
Obj args = x140580600661639;
Obj x140580600662471 = PRIM_CDR(closureRef(co, 3));
Obj x140580600662503 = PRIM_CDR(x140580600662471);
Obj x140580600662663 = PRIM_ISCONS(x140580600662503);
if (True == x140580600662663) {
Obj x140580600663975 = PRIM_CDR(closureRef(co, 3));
Obj x140580600664007 = PRIM_CDR(x140580600663975);
Obj x140580600664039 = PRIM_CAR(x140580600664007);
Obj body = x140580600664039;
Obj x140580600632711 = PRIM_CDR(closureRef(co, 3));
Obj x140580600632743 = PRIM_CDR(x140580600632711);
Obj x140580600632775 = PRIM_CDR(x140580600632743);
Obj x140580600632807 = PRIM_EQ(Nil, x140580600632775);
if (True == x140580600632807) {
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
__arg0 = x140580600703495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600703495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600703495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600703495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600703495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj x140580600634503 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 24, clofun0, 1, args);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = x140580600634503;
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
Obj x140580600634727 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600634791 = makeCons(x140580600634727, Nil);
Obj x140580600634983 = makeCons(args, x140580600634791);
Obj x140580600635111 = makeCons(symlambda, x140580600634983);
__nargs = 2;
__arg1 = x140580600635111;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x140580600660295 = makeNative(28, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140580598615367 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140580598615367) {
Obj x140580598615815 = PRIM_CAR(closureRef(co, 3));
Obj x140580598615847 = PRIM_EQ(symdo, x140580598615815);
if (True == x140580598615847) {
Obj x140580598554823 = PRIM_CDR(closureRef(co, 3));
Obj x140580598554855 = PRIM_ISCONS(x140580598554823);
if (True == x140580598554855) {
Obj x140580600856903 = PRIM_CDR(closureRef(co, 3));
Obj x140580600856999 = PRIM_CAR(x140580600856903);
Obj x140580600857063 = PRIM_ISCONS(x140580600856999);
if (True == x140580600857063) {
Obj x140580600858279 = PRIM_CDR(closureRef(co, 3));
Obj x140580600858407 = PRIM_CAR(x140580600858279);
Obj x140580600858439 = PRIM_CAR(x140580600858407);
Obj x140580600858471 = PRIM_EQ(symimport, x140580600858439);
if (True == x140580600858471) {
Obj x140580600860231 = PRIM_CDR(closureRef(co, 3));
Obj x140580600860263 = PRIM_CAR(x140580600860231);
Obj x140580600860295 = PRIM_CDR(x140580600860263);
Obj x140580600860359 = PRIM_ISCONS(x140580600860295);
if (True == x140580600860359) {
Obj x140580600820455 = PRIM_CDR(closureRef(co, 3));
Obj x140580600820519 = PRIM_CAR(x140580600820455);
Obj x140580600820679 = PRIM_CDR(x140580600820519);
Obj x140580600820711 = PRIM_CAR(x140580600820679);
Obj pkg = x140580600820711;
Obj x140580600822151 = PRIM_CDR(closureRef(co, 3));
Obj x140580600822279 = PRIM_CAR(x140580600822151);
Obj x140580600822311 = PRIM_CDR(x140580600822279);
Obj x140580600822375 = PRIM_CDR(x140580600822311);
Obj x140580600822567 = PRIM_EQ(Nil, x140580600822375);
if (True == x140580600822567) {
Obj x140580600823431 = PRIM_CDR(closureRef(co, 3));
Obj x140580600823463 = PRIM_CDR(x140580600823431);
Obj x140580600823495 = PRIM_ISCONS(x140580600823463);
if (True == x140580600823495) {
Obj x140580600796391 = PRIM_CDR(closureRef(co, 3));
Obj x140580600796455 = PRIM_CDR(x140580600796391);
Obj x140580600796583 = PRIM_CAR(x140580600796455);
Obj y = x140580600796583;
Obj x140580600797799 = PRIM_CDR(closureRef(co, 3));
Obj x140580600797831 = PRIM_CDR(x140580600797799);
Obj x140580600797863 = PRIM_CDR(x140580600797831);
Obj x140580600797991 = PRIM_EQ(Nil, x140580600797863);
if (True == x140580600797991) {
Obj x140580600798535 = primIsString(pkg);
if (True == x140580600798535) {
Obj x140580600755783 = makeCons(pkg, Nil);
Obj x140580600756039 = makeCons(symimport, x140580600755783);
pushCont(co, 26, clofun0, 5, pkg, import, env, ns, y);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = x140580600756039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140580600660295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600660295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600660295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600660295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600660295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600660295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600660295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600660295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600660295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600660295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj x140580600756071 = __arg1;
Obj pkg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140580600757127 = makeCons(pkg, import);
pushCont(co, 27, clofun0, 1, x140580600756071);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = x140580600757127;
co->args[4] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140580600757383 = __arg1;
Obj x140580600756071= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600757479 = makeCons(x140580600757383, Nil);
Obj x140580600757511 = makeCons(x140580600756071, x140580600757479);
Obj x140580600757543 = makeCons(symdo, x140580600757511);
__nargs = 2;
__arg1 = x140580600757543;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj x140580600662535 = makeNative(38, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140580598782087 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140580598782087) {
Obj x140580598782343 = PRIM_CAR(closureRef(co, 3));
Obj op = x140580598782343;
Obj x140580598782599 = PRIM_CDR(closureRef(co, 3));
Obj args = x140580598782599;
pushCont(co, 29, clofun0, 6, env, ns, import, args, op, x140580600662535);
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
__arg0 = x140580600662535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140580598782919 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140580600662535= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
if (True == x140580598782919) {
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
__arg0 = x140580600662535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj x140580598612007 = PRIM_EQ(op, symif);
if (True == x140580598612007) {
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
__arg0 = x140580600662535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj x140580598613127 = PRIM_EQ(op, symdo);
if (True == x140580598613127) {
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
__arg0 = x140580600662535;
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
__arg0 = x140580600662535;
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
Obj x140580598614567 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 31, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140580598614567;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140580598614631 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580598614663 = makeCons(op, x140580598614631);
__nargs = 2;
__arg1 = x140580598614663;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj x140580598613735 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140580598613735;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140580598613799 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580598613831 = makeCons(op, x140580598613799);
__nargs = 2;
__arg1 = x140580598613831;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x140580598612615 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 35, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140580598612615;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140580598612679 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580598612711 = makeCons(op, x140580598612679);
__nargs = 2;
__arg1 = x140580598612711;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj x140580598783527 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 37, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140580598783527;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140580598783591 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580598783623 = makeCons(op, x140580598783591);
__nargs = 2;
__arg1 = x140580598783623;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
Obj x140580600663911 = makeNative(41, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140580599183399 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140580599183399) {
Obj x140580599183847 = PRIM_CAR(closureRef(co, 3));
Obj x140580599183879 = PRIM_EQ(symlet, x140580599183847);
if (True == x140580599183879) {
Obj x140580599184295 = PRIM_CDR(closureRef(co, 3));
Obj x140580599184327 = PRIM_ISCONS(x140580599184295);
if (True == x140580599184327) {
Obj x140580599184743 = PRIM_CDR(closureRef(co, 3));
Obj x140580599184775 = PRIM_CAR(x140580599184743);
Obj a = x140580599184775;
Obj x140580599185351 = PRIM_CDR(closureRef(co, 3));
Obj x140580599185383 = PRIM_CDR(x140580599185351);
Obj x140580598829063 = PRIM_ISCONS(x140580599185383);
if (True == x140580598829063) {
Obj x140580598829639 = PRIM_CDR(closureRef(co, 3));
Obj x140580598829671 = PRIM_CDR(x140580598829639);
Obj x140580598829703 = PRIM_CAR(x140580598829671);
Obj b = x140580598829703;
Obj x140580598830439 = PRIM_CDR(closureRef(co, 3));
Obj x140580598830471 = PRIM_CDR(x140580598830439);
Obj x140580598830503 = PRIM_CDR(x140580598830471);
Obj x140580598830535 = PRIM_ISCONS(x140580598830503);
if (True == x140580598830535) {
Obj x140580598831271 = PRIM_CDR(closureRef(co, 3));
Obj x140580598831303 = PRIM_CDR(x140580598831271);
Obj x140580598831335 = PRIM_CDR(x140580598831303);
Obj x140580598831367 = PRIM_CAR(x140580598831335);
Obj c = x140580598831367;
Obj x140580598832295 = PRIM_CDR(closureRef(co, 3));
Obj x140580598832327 = PRIM_CDR(x140580598832295);
Obj x140580598832359 = PRIM_CDR(x140580598832327);
Obj x140580598832391 = PRIM_CDR(x140580598832359);
Obj x140580598832423 = PRIM_EQ(Nil, x140580598832391);
if (True == x140580598832423) {
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
__arg0 = x140580600663911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600663911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600663911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600663911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600663911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600663911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140580598780007 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140580598780583 = makeCons(a, env);
pushCont(co, 40, clofun0, 2, x140580598780007, a);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = x140580598780583;
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
Obj x140580598780711 = __arg1;
Obj x140580598780007= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580598780775 = makeCons(x140580598780711, Nil);
Obj x140580598780807 = makeCons(x140580598780007, x140580598780775);
Obj x140580598780839 = makeCons(a, x140580598780807);
Obj x140580598780871 = makeCons(symlet, x140580598780839);
__nargs = 2;
__arg1 = x140580598780871;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj x140580600633127 = makeNative(42, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj __ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj x140580599370471 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140580599370471) {
Obj x140580599370983 = PRIM_CAR(closureRef(co, 3));
Obj x140580599371015 = PRIM_EQ(symns, x140580599370983);
if (True == x140580599371015) {
Obj x140580599371495 = PRIM_CDR(closureRef(co, 3));
Obj x140580599371559 = PRIM_ISCONS(x140580599371495);
if (True == x140580599371559) {
Obj x140580599371975 = PRIM_CDR(closureRef(co, 3));
Obj x140580599372007 = PRIM_CAR(x140580599371975);
Obj path = x140580599372007;
Obj x140580599372647 = PRIM_CDR(closureRef(co, 3));
Obj x140580599372679 = PRIM_CDR(x140580599372647);
Obj x140580599372711 = PRIM_ISCONS(x140580599372679);
if (True == x140580599372711) {
Obj x140580599373287 = PRIM_CDR(closureRef(co, 3));
Obj x140580599373319 = PRIM_CDR(x140580599373287);
Obj x140580599373351 = PRIM_CAR(x140580599373319);
Obj import = x140580599373351;
Obj x140580599206247 = PRIM_CDR(closureRef(co, 3));
Obj x140580599206279 = PRIM_CDR(x140580599206247);
Obj x140580599206311 = PRIM_CDR(x140580599206279);
Obj x140580599206343 = PRIM_ISCONS(x140580599206311);
if (True == x140580599206343) {
Obj x140580599209447 = PRIM_CDR(closureRef(co, 3));
Obj x140580599209479 = PRIM_CDR(x140580599209447);
Obj x140580599209511 = PRIM_CDR(x140580599209479);
Obj x140580599209543 = PRIM_CAR(x140580599209511);
Obj body = x140580599209543;
Obj x140580599181799 = PRIM_CDR(closureRef(co, 3));
Obj x140580599181831 = PRIM_CDR(x140580599181799);
Obj x140580599181863 = PRIM_CDR(x140580599181831);
Obj x140580599181895 = PRIM_CDR(x140580599181863);
Obj x140580599181927 = PRIM_EQ(Nil, x140580599181895);
if (True == x140580599181927) {
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
__arg0 = x140580600633127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600633127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600633127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600633127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600633127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600633127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj x140580600635047 = makeNative(45, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140580599461479 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140580599461479) {
Obj x140580599462023 = PRIM_CAR(closureRef(co, 3));
Obj x140580599462055 = PRIM_EQ(symdef, x140580599462023);
if (True == x140580599462055) {
Obj x140580599462503 = PRIM_CDR(closureRef(co, 3));
Obj x140580599462535 = PRIM_ISCONS(x140580599462503);
if (True == x140580599462535) {
Obj x140580599463015 = PRIM_CDR(closureRef(co, 3));
Obj x140580599463047 = PRIM_CAR(x140580599463015);
Obj var = x140580599463047;
Obj x140580599463687 = PRIM_CDR(closureRef(co, 3));
Obj x140580599463719 = PRIM_CDR(x140580599463687);
Obj x140580599463751 = PRIM_ISCONS(x140580599463719);
if (True == x140580599463751) {
Obj x140580599419367 = PRIM_CDR(closureRef(co, 3));
Obj x140580599419399 = PRIM_CDR(x140580599419367);
Obj x140580599419431 = PRIM_CAR(x140580599419399);
Obj val = x140580599419431;
Obj x140580599420327 = PRIM_CDR(closureRef(co, 3));
Obj x140580599420359 = PRIM_CDR(x140580599420327);
Obj x140580599420391 = PRIM_CDR(x140580599420359);
Obj x140580599420423 = PRIM_EQ(Nil, x140580599420391);
if (True == x140580599420423) {
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
__arg0 = x140580600635047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600635047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600635047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600635047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600635047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj x140580599420839 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj var1 = x140580599420839;
Obj x140580599421735 = makeCons(var1, Nil);
Obj x140580599421767 = makeCons(symquote, x140580599421735);
pushCont(co, 44, clofun0, 1, x140580599421767);
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
Obj x140580599422247 = __arg1;
Obj x140580599421767= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580599422471 = makeCons(x140580599422247, Nil);
Obj x140580599422503 = makeCons(x140580599421767, x140580599422471);
Obj x140580599422535 = makeCons(symset, x140580599422503);
__nargs = 2;
__arg1 = x140580599422535;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj x140580600587527 = makeNative(47, clofun0, 0, 0);
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
Obj x140580599460839 = __arg1;
Obj ls= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140580599460839;
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
Obj x140580599514791 = __arg1;
PUSH_CONT_0(co, 0, clofun1);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140580599514791;
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
Obj x140580599514855 = __arg1;
Obj x140580599514887 = primNot(x140580599514855);
__nargs = 2;
__arg1 = x140580599514887;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x140580600823783 = __arg1;
Obj x140580600795143 = __arg2;
Obj x140580600795559 = makeNative(2, clofun1, 0, 2, x140580600823783, x140580600795143);
Obj var = x140580600823783;
Obj x140580599513639 = PRIM_EQ(Nil, x140580600795143);
if (True == x140580599513639) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580600795559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj x140580600796295 = makeNative(3, clofun1, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj x140580599694279 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140580599694279) {
Obj x140580599694727 = PRIM_CAR(closureRef(co, 1));
Obj x140580599694759 = PRIM_ISCONS(x140580599694727);
if (True == x140580599694759) {
Obj x140580599695335 = PRIM_CAR(closureRef(co, 1));
Obj x140580599695367 = PRIM_CAR(x140580599695335);
Obj x = x140580599695367;
Obj x140580599695911 = PRIM_CAR(closureRef(co, 1));
Obj x140580599695943 = PRIM_CDR(x140580599695911);
Obj y = x140580599695943;
Obj x140580599696327 = PRIM_CDR(closureRef(co, 1));
Obj __ = x140580599696327;
Obj x140580599696615 = PRIM_EQ(var, x);
if (True == x140580599696615) {
Obj x140580599696871 = makeCons(x, y);
__nargs = 2;
__arg1 = x140580599696871;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580600796295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600796295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600796295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj x140580600797447 = makeNative(4, clofun1, 0, 0);
Obj var = closureRef(co, 0);
Obj x140580599729703 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140580599729703) {
Obj x140580599730055 = PRIM_CAR(closureRef(co, 1));
Obj __ = x140580599730055;
Obj x140580599693511 = PRIM_CDR(closureRef(co, 1));
Obj y = x140580599693511;
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
__arg0 = x140580600797447;
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
Obj x140580600820807 = __arg1;
Obj x140580600820871 = __arg2;
Obj x140580600820903 = __arg3;
Obj x140580600821511 = makeNative(6, clofun1, 0, 3, x140580600820807, x140580600820871, x140580600820903);
Obj s = x140580600820807;
Obj ns = x140580600820871;
Obj x140580599939239 = PRIM_EQ(Nil, x140580600820903);
if (True == x140580599939239) {
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
__arg0 = x140580600821511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x140580600822439 = makeNative(14, clofun1, 0, 0);
Obj s = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj x140580600240199 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140580600240199) {
Obj x140580600240519 = PRIM_CAR(closureRef(co, 2));
Obj import = x140580600240519;
Obj x140580600241191 = PRIM_CDR(closureRef(co, 2));
Obj more = x140580600241191;
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
__arg0 = x140580600822439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj x140580599955751 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 8, clofun1, 4, import, s, ns, more);
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140580599955751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140580599955783 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 9, clofun1, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(symvalue_45or);
__arg1 = x140580599955783;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140580599955911 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj export = x140580599955911;
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
Obj x140580599956263 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140580599956263) {
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
Obj x140580599957799 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 12, clofun1, 1, import);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = makeCString("#");
__arg2 = x140580599957799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140580599957831 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 13, clofun1);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = import;
__arg2 = x140580599957831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140580599957895 = __arg1;
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140580599957895;
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
Obj x140580600588903 = PRIM_EQ(ns, makeCString(""));
if (True == x140580600588903) {
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
Obj x140580600589351 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140580600589351) {
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
Obj x140580600238343 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 18, clofun1, 1, ns);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = makeCString("#");
__arg2 = x140580600238343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140580600238375 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 19, clofun1);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = ns;
__arg2 = x140580600238375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140580600238407 = __arg1;
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140580600238407;
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
Obj x140580600662183 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = x140580600662183;
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
Obj x140580600663015 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 23, clofun1, 1, path);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35parse_45package);
__arg1 = x140580600663015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140580600663047 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = x140580600663047;
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
Obj x140580600631655 = makeCons(makeCString("cora/init"), import);
pushCont(co, 25, clofun1, 3, export, body, x140580600631655);
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
Obj x140580600634087 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580600631655= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140580600586951 = makeCons(export, Nil);
Obj x140580600586983 = makeCons(symbackquote, x140580600586951);
Obj x140580600587079 = makeCons(x140580600586983, Nil);
Obj x140580600587111 = makeCons(sym_42ns_45export_42, x140580600587079);
Obj x140580600587207 = makeCons(symdef, x140580600587111);
Obj x140580600587271 = makeCons(x140580600587207, body);
pushCont(co, 26, clofun1, 1, x140580600631655);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = x140580600634087;
__arg2 = x140580600587271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140580600587303 = __arg1;
Obj x140580600631655= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600587335 = makeCons(symbegin, x140580600587303);
Obj x140580600587463 = makeCons(x140580600587335, Nil);
Obj x140580600587495 = makeCons(x140580600631655, x140580600587463);
Obj x140580600587559 = makeCons(closureRef(co, 0), x140580600587495);
Obj x140580600587591 = makeCons(symns, x140580600587559);
__nargs = 2;
__arg1 = x140580600587591;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj imp = __arg1;
Obj x140580600633991 = makeCons(imp, Nil);
Obj x140580600634023 = makeCons(symimport, x140580600633991);
__nargs = 2;
__arg1 = x140580600634023;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
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

label29:
{
Obj x140580600701543 = __arg1;
Obj x140580600701575 = __arg2;
Obj x140580600701607 = __arg3;
Obj x140580600701639 = co->args[4];
Obj x140580600856967 = makeNative(30, clofun1, 0, 4, x140580600701543, x140580600701575, x140580600701607, x140580600701639);
Obj x140580600798343 = PRIM_ISCONS(x140580600701543);
if (True == x140580600798343) {
Obj x140580600799015 = PRIM_CAR(x140580600701543);
Obj x140580600799047 = PRIM_ISCONS(x140580600799015);
if (True == x140580600799047) {
Obj x140580600755367 = PRIM_CAR(x140580600701543);
Obj x140580600755399 = PRIM_CAR(x140580600755367);
Obj x140580600755559 = PRIM_EQ(symimport, x140580600755399);
if (True == x140580600755559) {
Obj x140580600756519 = PRIM_CAR(x140580600701543);
Obj x140580600756583 = PRIM_CDR(x140580600756519);
Obj x140580600756615 = PRIM_ISCONS(x140580600756583);
if (True == x140580600756615) {
Obj x140580600757735 = PRIM_CAR(x140580600701543);
Obj x140580600757767 = PRIM_CDR(x140580600757735);
Obj x140580600757831 = PRIM_CAR(x140580600757767);
Obj lib = x140580600757831;
Obj x140580600702119 = PRIM_CAR(x140580600701543);
Obj x140580600702151 = PRIM_CDR(x140580600702119);
Obj x140580600702183 = PRIM_CDR(x140580600702151);
Obj x140580600702215 = PRIM_EQ(Nil, x140580600702183);
if (True == x140580600702215) {
Obj x140580600702663 = PRIM_CDR(x140580600701543);
Obj rest = x140580600702663;
Obj imports = x140580600701575;
Obj exports = x140580600701607;
Obj k = x140580600701639;
Obj x140580600703783 = makeCons(lib, imports);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45package_45h);
__arg1 = rest;
__arg2 = x140580600703783;
__arg3 = exports;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140580600856967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600856967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600856967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600856967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600856967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj x140580600858759 = makeNative(31, clofun1, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140580600821895 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580600821895) {
Obj x140580600822695 = PRIM_CAR(closureRef(co, 0));
Obj x140580600822791 = PRIM_ISCONS(x140580600822695);
if (True == x140580600822791) {
Obj x140580600823559 = PRIM_CAR(closureRef(co, 0));
Obj x140580600823591 = PRIM_CAR(x140580600823559);
Obj x140580600823655 = PRIM_EQ(symexport, x140580600823591);
if (True == x140580600823655) {
Obj x140580600796007 = PRIM_CAR(closureRef(co, 0));
Obj x140580600796039 = PRIM_CDR(x140580600796007);
Obj more = x140580600796039;
Obj x140580600796519 = PRIM_CDR(closureRef(co, 0));
Obj rest = x140580600796519;
Obj imports = closureRef(co, 1);
Obj exports = closureRef(co, 2);
Obj k = closureRef(co, 3);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45package_45h);
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
__arg0 = x140580600858759;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600858759;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600858759;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj x140580600860327 = makeNative(33, clofun1, 0, 0);
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
Obj x140580600821415 = __arg1;
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exports= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 4;
__arg0 = k;
__arg1 = x140580600821415;
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
Obj x140580600860071 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45backquote);
__arg1 = x140580600860071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140580600756007 = __arg1;
Obj x140580600756231 = makeNative(37, clofun1, 0, 1, x140580600756007);
Obj x = x140580600756007;
Obj x140580600857735 = primIsSymbol(x);
if (True == x140580600857735) {
Obj x140580600858311 = makeCons(x, Nil);
Obj x140580600858343 = makeCons(symquote, x140580600858311);
__nargs = 2;
__arg1 = x140580600858343;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580600756231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj x140580600756551 = makeNative(38, clofun1, 0, 1, closureRef(co, 0));
Obj x140580599207175 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580599207175) {
Obj x140580599207623 = PRIM_CAR(closureRef(co, 0));
Obj x140580599207655 = PRIM_EQ(symunquote, x140580599207623);
if (True == x140580599207655) {
Obj x140580599208071 = PRIM_CDR(closureRef(co, 0));
Obj x140580599208103 = PRIM_ISCONS(x140580599208071);
if (True == x140580599208103) {
Obj x140580599208519 = PRIM_CDR(closureRef(co, 0));
Obj x140580599208551 = PRIM_CAR(x140580599208519);
Obj x = x140580599208551;
Obj x140580599209159 = PRIM_CDR(closureRef(co, 0));
Obj x140580599209191 = PRIM_CDR(x140580599209159);
Obj x140580599209223 = PRIM_EQ(Nil, x140580599209191);
if (True == x140580599209223) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580600756551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600756551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600756551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600756551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj x140580600757415 = makeNative(40, clofun1, 0, 1, closureRef(co, 0));
Obj x140580599373543 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580599373543) {
Obj x140580599373799 = PRIM_CAR(closureRef(co, 0));
Obj x = x140580599373799;
Obj x140580599206119 = PRIM_CDR(closureRef(co, 0));
Obj more = x140580599206119;
Obj x140580599206727 = makeCons(x, more);
PUSH_CONT_0(co, 39, clofun1);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35rewrite_45backquote);
__arg2 = x140580599206727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140580600757415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140580599206759 = __arg1;
Obj x140580599206791 = makeCons(symlist, x140580599206759);
__nargs = 2;
__arg1 = x140580599206791;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj x140580600758119 = makeNative(41, clofun1, 0, 0);
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
Obj x140580599372199 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45begin);
__arg1 = x140580599372199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140580600798471 = __arg1;
Obj x140580600798695 = makeNative(44, clofun1, 0, 1, x140580600798471);
Obj x140580599370503 = PRIM_ISCONS(x140580600798471);
if (True == x140580599370503) {
Obj x140580599370759 = PRIM_CAR(x140580600798471);
Obj x = x140580599370759;
Obj x140580599371207 = PRIM_CDR(x140580600798471);
Obj x140580599371239 = PRIM_EQ(Nil, x140580599371207);
if (True == x140580599371239) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580600798695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600798695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj x140580600754311 = makeNative(45, clofun1, 0, 1, closureRef(co, 0));
Obj x140580599516903 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580599516903) {
Obj x140580599517159 = PRIM_CAR(closureRef(co, 0));
Obj x = x140580599517159;
Obj x140580599460423 = PRIM_CDR(closureRef(co, 0));
Obj x140580599460455 = PRIM_ISCONS(x140580599460423);
if (True == x140580599460455) {
Obj x140580599460871 = PRIM_CDR(closureRef(co, 0));
Obj x140580599460999 = PRIM_CAR(x140580599460871);
Obj y = x140580599460999;
Obj x140580599461607 = PRIM_CDR(closureRef(co, 0));
Obj x140580599461639 = PRIM_CDR(x140580599461607);
Obj x140580599461671 = PRIM_EQ(Nil, x140580599461639);
if (True == x140580599461671) {
Obj x140580599369799 = makeCons(y, Nil);
Obj x140580599369831 = makeCons(x, x140580599369799);
Obj x140580599369863 = makeCons(symdo, x140580599369831);
__nargs = 2;
__arg1 = x140580599369863;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580600754311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600754311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600754311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj x140580600755175 = makeNative(47, clofun1, 0, 0);
Obj x140580599514823 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580599514823) {
Obj x140580599515079 = PRIM_CAR(closureRef(co, 0));
Obj x = x140580599515079;
Obj x140580599515495 = PRIM_CDR(closureRef(co, 0));
Obj y = x140580599515495;
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
__arg0 = x140580600755175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj x140580599516231 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580599516455 = makeCons(x140580599516231, Nil);
Obj x140580599516487 = makeCons(x, x140580599516455);
Obj x140580599516519 = makeCons(symdo, x140580599516487);
__nargs = 2;
__arg1 = x140580599516519;
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
Obj x140580599513383 = __arg1;
PUSH_CONT_0(co, 0, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45namespace);
__arg1 = x140580599513383;
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
Obj x140580599513543 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x140580599513543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
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
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x140580600858375 = __arg1;
Obj x140580600858599 = makeNative(3, clofun2, 0, 1, x140580600858375);
Obj x140580599729607 = PRIM_ISCONS(x140580600858375);
if (True == x140580599729607) {
Obj x140580599730151 = PRIM_CAR(x140580600858375);
Obj x140580599693319 = PRIM_EQ(symquote, x140580599730151);
if (True == x140580599693319) {
Obj x140580599693735 = PRIM_CDR(x140580600858375);
Obj x140580599693767 = PRIM_ISCONS(x140580599693735);
if (True == x140580599693767) {
Obj x140580599694183 = PRIM_CDR(x140580600858375);
Obj x140580599694215 = PRIM_CAR(x140580599694183);
Obj x = x140580599694215;
Obj x140580599694855 = PRIM_CDR(x140580600858375);
Obj x140580599694887 = PRIM_CDR(x140580599694855);
Obj x140580599694919 = PRIM_EQ(Nil, x140580599694887);
if (True == x140580599694919) {
Obj x140580599695399 = makeCons(x, Nil);
Obj x140580599695431 = makeCons(symquote, x140580599695399);
__nargs = 2;
__arg1 = x140580599695431;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580600858599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600858599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600858599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600858599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj x140580600859367 = makeNative(5, clofun2, 0, 1, closureRef(co, 0));
Obj x140580599761799 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580599761799) {
Obj x140580599762471 = PRIM_CAR(closureRef(co, 0));
Obj x140580599762503 = PRIM_EQ(symcons_63, x140580599762471);
if (True == x140580599762503) {
Obj x140580599726343 = PRIM_CDR(closureRef(co, 0));
Obj x140580599726375 = PRIM_ISCONS(x140580599726343);
if (True == x140580599726375) {
Obj x140580599726823 = PRIM_CDR(closureRef(co, 0));
Obj x140580599726855 = PRIM_CAR(x140580599726823);
Obj x = x140580599726855;
Obj x140580599727527 = PRIM_CDR(closureRef(co, 0));
Obj x140580599727559 = PRIM_CDR(x140580599727527);
Obj x140580599727591 = PRIM_EQ(Nil, x140580599727559);
if (True == x140580599727591) {
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
__arg0 = x140580600859367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600859367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600859367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600859367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj x140580599727975 = __arg1;
Obj x1 = x140580599727975;
Obj x140580599728551 = makeCons(x1, Nil);
Obj x140580599728647 = makeCons(symcons_63, x140580599728551);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140580599728647;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140580600860135 = makeNative(7, clofun2, 0, 1, closureRef(co, 0));
Obj x140580599789639 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580599789639) {
Obj x140580599790247 = PRIM_CAR(closureRef(co, 0));
Obj x140580599790279 = PRIM_EQ(symcar, x140580599790247);
if (True == x140580599790279) {
Obj x140580599790823 = PRIM_CDR(closureRef(co, 0));
Obj x140580599790951 = PRIM_ISCONS(x140580599790823);
if (True == x140580599790951) {
Obj x140580599791367 = PRIM_CDR(closureRef(co, 0));
Obj x140580599791399 = PRIM_CAR(x140580599791367);
Obj x = x140580599791399;
Obj x140580599759591 = PRIM_CDR(closureRef(co, 0));
Obj x140580599759623 = PRIM_CDR(x140580599759591);
Obj x140580599759655 = PRIM_EQ(Nil, x140580599759623);
if (True == x140580599759655) {
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
__arg0 = x140580600860135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600860135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600860135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600860135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x140580599760167 = __arg1;
Obj x1 = x140580599760167;
Obj x140580599760903 = makeCons(x1, Nil);
Obj x140580599760935 = makeCons(symcar, x140580599760903);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140580599760935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140580600820007 = makeNative(9, clofun2, 0, 1, closureRef(co, 0));
Obj x140580599878407 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580599878407) {
Obj x140580599879271 = PRIM_CAR(closureRef(co, 0));
Obj x140580599879303 = PRIM_EQ(symcdr, x140580599879271);
if (True == x140580599879303) {
Obj x140580599879783 = PRIM_CDR(closureRef(co, 0));
Obj x140580599879815 = PRIM_ISCONS(x140580599879783);
if (True == x140580599879815) {
Obj x140580599880583 = PRIM_CDR(closureRef(co, 0));
Obj x140580599880615 = PRIM_CAR(x140580599880583);
Obj x = x140580599880615;
Obj x140580599881479 = PRIM_CDR(closureRef(co, 0));
Obj x140580599881511 = PRIM_CDR(x140580599881479);
Obj x140580599881543 = PRIM_EQ(Nil, x140580599881511);
if (True == x140580599881543) {
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
__arg0 = x140580600820007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600820007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600820007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600820007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj x140580599787623 = __arg1;
Obj x1 = x140580599787623;
Obj x140580599788455 = makeCons(x1, Nil);
Obj x140580599788487 = makeCons(symcdr, x140580599788455);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140580599788487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140580600820839 = makeNative(12, clofun2, 0, 1, closureRef(co, 0));
Obj x140580599910855 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580599910855) {
Obj x140580599911463 = PRIM_CAR(closureRef(co, 0));
Obj x140580599911655 = PRIM_EQ(symand, x140580599911463);
if (True == x140580599911655) {
Obj x140580599912135 = PRIM_CDR(closureRef(co, 0));
Obj x140580599912199 = PRIM_ISCONS(x140580599912135);
if (True == x140580599912199) {
Obj x140580599912871 = PRIM_CDR(closureRef(co, 0));
Obj x140580599912903 = PRIM_CAR(x140580599912871);
Obj x = x140580599912903;
Obj x140580599913895 = PRIM_CDR(closureRef(co, 0));
Obj x140580599914055 = PRIM_CDR(x140580599913895);
Obj x140580599914087 = PRIM_ISCONS(x140580599914055);
if (True == x140580599914087) {
Obj x140580599894407 = PRIM_CDR(closureRef(co, 0));
Obj x140580599894439 = PRIM_CDR(x140580599894407);
Obj x140580599894503 = PRIM_CAR(x140580599894439);
Obj y = x140580599894503;
Obj x140580599895879 = PRIM_CDR(closureRef(co, 0));
Obj x140580599895911 = PRIM_CDR(x140580599895879);
Obj x140580599895943 = PRIM_CDR(x140580599895911);
Obj x140580599895975 = PRIM_EQ(Nil, x140580599895943);
if (True == x140580599895975) {
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
__arg0 = x140580600820839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600820839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600820839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600820839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600820839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj x140580599896263 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1 = x140580599896263;
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
Obj x140580599896519 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y1 = x140580599896519;
Obj x140580599897511 = makeCons(y1, Nil);
Obj x140580599897543 = makeCons(x1, x140580599897511);
Obj x140580599897575 = makeCons(symand, x140580599897543);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140580599897575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140580600821863 = makeNative(14, clofun2, 0, 1, closureRef(co, 0));
Obj x140580599957223 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580599957223) {
Obj x140580599958183 = PRIM_CAR(closureRef(co, 0));
Obj x140580599958215 = PRIM_EQ(symnull_63, x140580599958183);
if (True == x140580599958215) {
Obj x140580599958919 = PRIM_CDR(closureRef(co, 0));
Obj x140580599958951 = PRIM_ISCONS(x140580599958919);
if (True == x140580599958951) {
Obj x140580599939335 = PRIM_CDR(closureRef(co, 0));
Obj x140580599939367 = PRIM_CAR(x140580599939335);
Obj x = x140580599939367;
Obj x140580599940199 = PRIM_CDR(closureRef(co, 0));
Obj x140580599940231 = PRIM_CDR(x140580599940199);
Obj x140580599940263 = PRIM_EQ(Nil, x140580599940231);
if (True == x140580599940263) {
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
__arg0 = x140580600821863;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600821863;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600821863;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600821863;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj x140580599940775 = __arg1;
Obj x1 = x140580599940775;
Obj x140580599941767 = makeCons(x1, Nil);
Obj x140580599941799 = makeCons(symnull_63, x140580599941767);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140580599941799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140580600822727 = makeNative(16, clofun2, 0, 1, closureRef(co, 0));
Obj x140580600238215 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580600238215) {
Obj x140580600238695 = PRIM_CAR(closureRef(co, 0));
Obj x140580600238727 = PRIM_EQ(symnot, x140580600238695);
if (True == x140580600238727) {
Obj x140580600239239 = PRIM_CDR(closureRef(co, 0));
Obj x140580600239271 = PRIM_ISCONS(x140580600239239);
if (True == x140580600239271) {
Obj x140580600239847 = PRIM_CDR(closureRef(co, 0));
Obj x140580600239879 = PRIM_CAR(x140580600239847);
Obj x = x140580600239879;
Obj x140580600240999 = PRIM_CDR(closureRef(co, 0));
Obj x140580600241031 = PRIM_CDR(x140580600240999);
Obj x140580600241063 = PRIM_EQ(Nil, x140580600241031);
if (True == x140580600241063) {
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
__arg0 = x140580600822727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600822727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600822727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600822727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj x140580600241351 = __arg1;
Obj x1 = x140580600241351;
Obj x140580599955847 = makeCons(x1, Nil);
Obj x140580599955879 = makeCons(symnot, x140580599955847);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140580599955879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140580600823527 = makeNative(20, clofun2, 0, 1, closureRef(co, 0));
Obj x140580600704743 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580600704743) {
Obj x140580600660199 = PRIM_CAR(closureRef(co, 0));
Obj x140580600660423 = PRIM_EQ(symif, x140580600660199);
if (True == x140580600660423) {
Obj x140580600660903 = PRIM_CDR(closureRef(co, 0));
Obj x140580600660935 = PRIM_ISCONS(x140580600660903);
if (True == x140580600660935) {
Obj x140580600661767 = PRIM_CDR(closureRef(co, 0));
Obj x140580600661799 = PRIM_CAR(x140580600661767);
Obj x = x140580600661799;
Obj x140580600662567 = PRIM_CDR(closureRef(co, 0));
Obj x140580600662599 = PRIM_CDR(x140580600662567);
Obj x140580600662631 = PRIM_ISCONS(x140580600662599);
if (True == x140580600662631) {
Obj x140580600663591 = PRIM_CDR(closureRef(co, 0));
Obj x140580600663655 = PRIM_CDR(x140580600663591);
Obj x140580600663687 = PRIM_CAR(x140580600663655);
Obj y = x140580600663687;
Obj x140580600631943 = PRIM_CDR(closureRef(co, 0));
Obj x140580600631975 = PRIM_CDR(x140580600631943);
Obj x140580600632007 = PRIM_CDR(x140580600631975);
Obj x140580600632039 = PRIM_ISCONS(x140580600632007);
if (True == x140580600632039) {
Obj x140580600633319 = PRIM_CDR(closureRef(co, 0));
Obj x140580600633351 = PRIM_CDR(x140580600633319);
Obj x140580600633383 = PRIM_CDR(x140580600633351);
Obj x140580600633415 = PRIM_CAR(x140580600633383);
Obj z = x140580600633415;
Obj x140580600634823 = PRIM_CDR(closureRef(co, 0));
Obj x140580600634855 = PRIM_CDR(x140580600634823);
Obj x140580600634887 = PRIM_CDR(x140580600634855);
Obj x140580600634919 = PRIM_CDR(x140580600634887);
Obj x140580600634951 = PRIM_EQ(Nil, x140580600634919);
if (True == x140580600634951) {
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
__arg0 = x140580600823527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600823527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600823527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600823527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600823527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600823527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj x140580600586279 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x1 = x140580600586279;
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
Obj x140580600586727 = __arg1;
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj y1 = x140580600586727;
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
Obj x140580600587015 = __arg1;
Obj y1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj z1 = x140580600587015;
Obj x140580600588679 = makeCons(z1, Nil);
Obj x140580600588711 = makeCons(y1, x140580600588679);
Obj x140580600588743 = makeCons(x1, x140580600588711);
Obj x140580600588775 = makeCons(symif, x140580600588743);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140580600588775;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140580600796231 = makeNative(22, clofun2, 0, 1, closureRef(co, 0));
Obj x140580600798407 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580600798407) {
Obj x140580600799079 = PRIM_CAR(closureRef(co, 0));
Obj x140580600799111 = PRIM_EQ(symlambda, x140580600799079);
if (True == x140580600799111) {
Obj x140580600754727 = PRIM_CDR(closureRef(co, 0));
Obj x140580600754759 = PRIM_ISCONS(x140580600754727);
if (True == x140580600754759) {
Obj x140580600755687 = PRIM_CDR(closureRef(co, 0));
Obj x140580600755719 = PRIM_CAR(x140580600755687);
Obj args = x140580600755719;
Obj x140580600756647 = PRIM_CDR(closureRef(co, 0));
Obj x140580600756679 = PRIM_CDR(x140580600756647);
Obj x140580600756711 = PRIM_ISCONS(x140580600756679);
if (True == x140580600756711) {
Obj x140580600757639 = PRIM_CDR(closureRef(co, 0));
Obj x140580600757671 = PRIM_CDR(x140580600757639);
Obj x140580600757703 = PRIM_CAR(x140580600757671);
Obj body = x140580600757703;
Obj x140580600701799 = PRIM_CDR(closureRef(co, 0));
Obj x140580600701863 = PRIM_CDR(x140580600701799);
Obj x140580600701895 = PRIM_CDR(x140580600701863);
Obj x140580600701927 = PRIM_EQ(Nil, x140580600701895);
if (True == x140580600701927) {
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
__arg0 = x140580600796231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600796231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600796231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600796231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580600796231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj x140580600703079 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600703143 = makeCons(x140580600703079, Nil);
Obj x140580600703175 = makeCons(args, x140580600703143);
Obj x140580600703207 = makeCons(symlambda, x140580600703175);
__nargs = 2;
__arg1 = x140580600703207;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj x140580600797255 = makeNative(23, clofun2, 0, 1, closureRef(co, 0));
Obj x140580600796423 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580600796423) {
Obj x140580600796743 = PRIM_CAR(closureRef(co, 0));
Obj f = x140580600796743;
Obj x140580600797223 = PRIM_CDR(closureRef(co, 0));
Obj args = x140580600797223;
Obj x140580600797767 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35propagate_45boolean);
__arg2 = x140580600797767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140580600797255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj x140580600797927 = makeNative(24, clofun2, 0, 0);
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
Obj x140580599958759 = __arg1;
Obj x140580599958983 = makeNative(26, clofun2, 0, 1, x140580599958759);
Obj x140580599462375 = PRIM_ISCONS(x140580599958759);
if (True == x140580599462375) {
Obj x140580599462823 = PRIM_CAR(x140580599958759);
Obj x140580599462855 = PRIM_EQ(symcar, x140580599462823);
if (True == x140580599462855) {
Obj x140580599463271 = PRIM_CDR(x140580599958759);
Obj x140580599463303 = PRIM_ISCONS(x140580599463271);
if (True == x140580599463303) {
Obj x140580599463879 = PRIM_CDR(x140580599958759);
Obj x140580599463911 = PRIM_CAR(x140580599463879);
Obj x140580599418887 = PRIM_ISCONS(x140580599463911);
if (True == x140580599418887) {
Obj x140580599419655 = PRIM_CDR(x140580599958759);
Obj x140580599419687 = PRIM_CAR(x140580599419655);
Obj x140580599419719 = PRIM_CAR(x140580599419687);
Obj x140580599419751 = PRIM_EQ(symcons, x140580599419719);
if (True == x140580599419751) {
Obj x140580599420487 = PRIM_CDR(x140580599958759);
Obj x140580599420519 = PRIM_CAR(x140580599420487);
Obj x140580599420551 = PRIM_CDR(x140580599420519);
Obj x140580599420583 = PRIM_ISCONS(x140580599420551);
if (True == x140580599420583) {
Obj x140580599421319 = PRIM_CDR(x140580599958759);
Obj x140580599421351 = PRIM_CAR(x140580599421319);
Obj x140580599421383 = PRIM_CDR(x140580599421351);
Obj x140580599421415 = PRIM_CAR(x140580599421383);
Obj x = x140580599421415;
Obj x140580599422311 = PRIM_CDR(x140580599958759);
Obj x140580599422343 = PRIM_CAR(x140580599422311);
Obj x140580599422375 = PRIM_CDR(x140580599422343);
Obj x140580599422407 = PRIM_CDR(x140580599422375);
Obj x140580599422439 = PRIM_ISCONS(x140580599422407);
if (True == x140580599422439) {
Obj x140580600857479 = PRIM_CDR(x140580599958759);
Obj x140580600857511 = PRIM_CAR(x140580600857479);
Obj x140580600857543 = PRIM_CDR(x140580600857511);
Obj x140580600857575 = PRIM_CDR(x140580600857543);
Obj x140580600857607 = PRIM_CAR(x140580600857575);
Obj __ = x140580600857607;
Obj x140580600859175 = PRIM_CDR(x140580599958759);
Obj x140580600859303 = PRIM_CAR(x140580600859175);
Obj x140580600859559 = PRIM_CDR(x140580600859303);
Obj x140580600859591 = PRIM_CDR(x140580600859559);
Obj x140580600859623 = PRIM_CDR(x140580600859591);
Obj x140580600859655 = PRIM_EQ(Nil, x140580600859623);
if (True == x140580600859655) {
Obj x140580600860455 = PRIM_CDR(x140580599958759);
Obj x140580600860551 = PRIM_CDR(x140580600860455);
Obj x140580600860583 = PRIM_EQ(Nil, x140580600860551);
if (True == x140580600860583) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580599958983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599958983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599958983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599958983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599958983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599958983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599958983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599958983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599958983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj x140580599939879 = makeNative(27, clofun2, 0, 1, closureRef(co, 0));
Obj x140580599694567 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580599694567) {
Obj x140580599695015 = PRIM_CAR(closureRef(co, 0));
Obj x140580599695047 = PRIM_EQ(symcdr, x140580599695015);
if (True == x140580599695047) {
Obj x140580599695463 = PRIM_CDR(closureRef(co, 0));
Obj x140580599695495 = PRIM_ISCONS(x140580599695463);
if (True == x140580599695495) {
Obj x140580599696071 = PRIM_CDR(closureRef(co, 0));
Obj x140580599696103 = PRIM_CAR(x140580599696071);
Obj x140580599696135 = PRIM_ISCONS(x140580599696103);
if (True == x140580599696135) {
Obj x140580599696903 = PRIM_CDR(closureRef(co, 0));
Obj x140580599696935 = PRIM_CAR(x140580599696903);
Obj x140580599696967 = PRIM_CAR(x140580599696935);
Obj x140580599696999 = PRIM_EQ(symcons, x140580599696967);
if (True == x140580599696999) {
Obj x140580599513415 = PRIM_CDR(closureRef(co, 0));
Obj x140580599513447 = PRIM_CAR(x140580599513415);
Obj x140580599513479 = PRIM_CDR(x140580599513447);
Obj x140580599513511 = PRIM_ISCONS(x140580599513479);
if (True == x140580599513511) {
Obj x140580599514247 = PRIM_CDR(closureRef(co, 0));
Obj x140580599514279 = PRIM_CAR(x140580599514247);
Obj x140580599514311 = PRIM_CDR(x140580599514279);
Obj x140580599514343 = PRIM_CAR(x140580599514311);
Obj __ = x140580599514343;
Obj x140580599515239 = PRIM_CDR(closureRef(co, 0));
Obj x140580599515271 = PRIM_CAR(x140580599515239);
Obj x140580599515303 = PRIM_CDR(x140580599515271);
Obj x140580599515335 = PRIM_CDR(x140580599515303);
Obj x140580599515367 = PRIM_ISCONS(x140580599515335);
if (True == x140580599515367) {
Obj x140580599516263 = PRIM_CDR(closureRef(co, 0));
Obj x140580599516295 = PRIM_CAR(x140580599516263);
Obj x140580599516327 = PRIM_CDR(x140580599516295);
Obj x140580599516359 = PRIM_CDR(x140580599516327);
Obj x140580599516391 = PRIM_CAR(x140580599516359);
Obj x = x140580599516391;
Obj x140580599460135 = PRIM_CDR(closureRef(co, 0));
Obj x140580599460167 = PRIM_CAR(x140580599460135);
Obj x140580599460199 = PRIM_CDR(x140580599460167);
Obj x140580599460231 = PRIM_CDR(x140580599460199);
Obj x140580599460263 = PRIM_CDR(x140580599460231);
Obj x140580599460295 = PRIM_EQ(Nil, x140580599460263);
if (True == x140580599460295) {
Obj x140580599460903 = PRIM_CDR(closureRef(co, 0));
Obj x140580599460935 = PRIM_CDR(x140580599460903);
Obj x140580599460967 = PRIM_EQ(Nil, x140580599460935);
if (True == x140580599460967) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580599939879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599939879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599939879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599939879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599939879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599939879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599939879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599939879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599939879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj x140580599941255 = makeNative(28, clofun2, 0, 1, closureRef(co, 0));
Obj x140580599788615 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580599788615) {
Obj x140580599789287 = PRIM_CAR(closureRef(co, 0));
Obj x140580599789319 = PRIM_EQ(symcons_63, x140580599789287);
if (True == x140580599789319) {
Obj x140580599789863 = PRIM_CDR(closureRef(co, 0));
Obj x140580599789927 = PRIM_ISCONS(x140580599789863);
if (True == x140580599789927) {
Obj x140580599790535 = PRIM_CDR(closureRef(co, 0));
Obj x140580599790567 = PRIM_CAR(x140580599790535);
Obj x140580599790599 = PRIM_ISCONS(x140580599790567);
if (True == x140580599790599) {
Obj x140580599791463 = PRIM_CDR(closureRef(co, 0));
Obj x140580599791495 = PRIM_CAR(x140580599791463);
Obj x140580599791559 = PRIM_CAR(x140580599791495);
Obj x140580599758951 = PRIM_EQ(symcons, x140580599791559);
if (True == x140580599758951) {
Obj x140580599759751 = PRIM_CDR(closureRef(co, 0));
Obj x140580599759783 = PRIM_CAR(x140580599759751);
Obj x140580599759815 = PRIM_CDR(x140580599759783);
Obj x140580599759847 = PRIM_ISCONS(x140580599759815);
if (True == x140580599759847) {
Obj x140580599760743 = PRIM_CDR(closureRef(co, 0));
Obj x140580599760775 = PRIM_CAR(x140580599760743);
Obj x140580599760807 = PRIM_CDR(x140580599760775);
Obj x140580599760839 = PRIM_CAR(x140580599760807);
Obj __ = x140580599760839;
Obj x140580599761831 = PRIM_CDR(closureRef(co, 0));
Obj x140580599761863 = PRIM_CAR(x140580599761831);
Obj x140580599761895 = PRIM_CDR(x140580599761863);
Obj x140580599761927 = PRIM_CDR(x140580599761895);
Obj x140580599761959 = PRIM_ISCONS(x140580599761927);
if (True == x140580599761959) {
Obj x140580599762919 = PRIM_CDR(closureRef(co, 0));
Obj x140580599726087 = PRIM_CAR(x140580599762919);
Obj x140580599726247 = PRIM_CDR(x140580599726087);
Obj x140580599726279 = PRIM_CDR(x140580599726247);
Obj x140580599726311 = PRIM_CAR(x140580599726279);
__ = x140580599726311;
Obj x140580599729191 = PRIM_CDR(closureRef(co, 0));
Obj x140580599729223 = PRIM_CAR(x140580599729191);
Obj x140580599729255 = PRIM_CDR(x140580599729223);
Obj x140580599729287 = PRIM_CDR(x140580599729255);
Obj x140580599729319 = PRIM_CDR(x140580599729287);
Obj x140580599729351 = PRIM_EQ(Nil, x140580599729319);
if (True == x140580599729351) {
Obj x140580599729959 = PRIM_CDR(closureRef(co, 0));
Obj x140580599729991 = PRIM_CDR(x140580599729959);
Obj x140580599730023 = PRIM_EQ(Nil, x140580599729991);
if (True == x140580599730023) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580599941255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599941255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599941255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599941255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599941255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599941255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599941255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599941255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599941255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj x140580599942631 = makeNative(29, clofun2, 0, 1, closureRef(co, 0));
Obj x140580599896807 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580599896807) {
Obj x140580599897351 = PRIM_CAR(closureRef(co, 0));
Obj x140580599897383 = PRIM_EQ(symand, x140580599897351);
if (True == x140580599897383) {
Obj x140580599897895 = PRIM_CDR(closureRef(co, 0));
Obj x140580599897927 = PRIM_ISCONS(x140580599897895);
if (True == x140580599897927) {
Obj x140580599878215 = PRIM_CDR(closureRef(co, 0));
Obj x140580599878247 = PRIM_CAR(x140580599878215);
Obj x140580599878279 = PRIM_EQ(True, x140580599878247);
if (True == x140580599878279) {
Obj x140580599879175 = PRIM_CDR(closureRef(co, 0));
Obj x140580599879207 = PRIM_CDR(x140580599879175);
Obj x140580599879239 = PRIM_ISCONS(x140580599879207);
if (True == x140580599879239) {
Obj x140580599880167 = PRIM_CDR(closureRef(co, 0));
Obj x140580599880199 = PRIM_CDR(x140580599880167);
Obj x140580599880263 = PRIM_CAR(x140580599880199);
Obj x140580599880295 = PRIM_EQ(True, x140580599880263);
if (True == x140580599880295) {
Obj x140580599881191 = PRIM_CDR(closureRef(co, 0));
Obj x140580599881223 = PRIM_CDR(x140580599881191);
Obj x140580599881255 = PRIM_CDR(x140580599881223);
Obj x140580599881287 = PRIM_EQ(Nil, x140580599881255);
if (True == x140580599881287) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580599942631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599942631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599942631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599942631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599942631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599942631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599942631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140580599910823 = makeNative(30, clofun2, 0, 1, closureRef(co, 0));
Obj x140580599913031 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580599913031) {
Obj x140580599913767 = PRIM_CAR(closureRef(co, 0));
Obj x140580599913799 = PRIM_EQ(symnull_63, x140580599913767);
if (True == x140580599913799) {
Obj x140580599894023 = PRIM_CDR(closureRef(co, 0));
Obj x140580599894055 = PRIM_ISCONS(x140580599894023);
if (True == x140580599894055) {
Obj x140580599894695 = PRIM_CDR(closureRef(co, 0));
Obj x140580599894727 = PRIM_CAR(x140580599894695);
Obj x140580599894759 = PRIM_EQ(Nil, x140580599894727);
if (True == x140580599894759) {
Obj x140580599895783 = PRIM_CDR(closureRef(co, 0));
Obj x140580599895815 = PRIM_CDR(x140580599895783);
Obj x140580599895847 = PRIM_EQ(Nil, x140580599895815);
if (True == x140580599895847) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580599910823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599910823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599910823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599910823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599910823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj x140580599911559 = makeNative(31, clofun2, 0, 1, closureRef(co, 0));
Obj x140580600238919 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580600238919) {
Obj x140580600239367 = PRIM_CAR(closureRef(co, 0));
Obj x140580600239399 = PRIM_EQ(symnull_63, x140580600239367);
if (True == x140580600239399) {
Obj x140580600239943 = PRIM_CDR(closureRef(co, 0));
Obj x140580600239975 = PRIM_ISCONS(x140580600239943);
if (True == x140580600239975) {
Obj x140580600240743 = PRIM_CDR(closureRef(co, 0));
Obj x140580600240807 = PRIM_CAR(x140580600240743);
Obj x140580600240935 = PRIM_ISCONS(x140580600240807);
if (True == x140580600240935) {
Obj x140580600241895 = PRIM_CDR(closureRef(co, 0));
Obj x140580600241927 = PRIM_CAR(x140580600241895);
Obj x140580600241959 = PRIM_CAR(x140580600241927);
Obj x140580600241991 = PRIM_EQ(symcons, x140580600241959);
if (True == x140580600241991) {
Obj x140580599956711 = PRIM_CDR(closureRef(co, 0));
Obj x140580599956743 = PRIM_CAR(x140580599956711);
Obj x140580599956775 = PRIM_CDR(x140580599956743);
Obj x140580599956807 = PRIM_ISCONS(x140580599956775);
if (True == x140580599956807) {
Obj x140580599957927 = PRIM_CDR(closureRef(co, 0));
Obj x140580599957959 = PRIM_CAR(x140580599957927);
Obj x140580599957991 = PRIM_CDR(x140580599957959);
Obj x140580599958119 = PRIM_CAR(x140580599957991);
Obj __ = x140580599958119;
Obj x140580599959431 = PRIM_CDR(closureRef(co, 0));
Obj x140580599959463 = PRIM_CAR(x140580599959431);
Obj x140580599959495 = PRIM_CDR(x140580599959463);
Obj x140580599939175 = PRIM_CDR(x140580599959495);
Obj x140580599939207 = PRIM_ISCONS(x140580599939175);
if (True == x140580599939207) {
Obj x140580599940391 = PRIM_CDR(closureRef(co, 0));
Obj x140580599940423 = PRIM_CAR(x140580599940391);
Obj x140580599940455 = PRIM_CDR(x140580599940423);
Obj x140580599940551 = PRIM_CDR(x140580599940455);
Obj x140580599940583 = PRIM_CAR(x140580599940551);
__ = x140580599940583;
Obj x140580599942343 = PRIM_CDR(closureRef(co, 0));
Obj x140580599942375 = PRIM_CAR(x140580599942343);
Obj x140580599942407 = PRIM_CDR(x140580599942375);
Obj x140580599942439 = PRIM_CDR(x140580599942407);
Obj x140580599942471 = PRIM_CDR(x140580599942439);
Obj x140580599942503 = PRIM_EQ(Nil, x140580599942471);
if (True == x140580599942503) {
Obj x140580599910951 = PRIM_CDR(closureRef(co, 0));
Obj x140580599910983 = PRIM_CDR(x140580599910951);
Obj x140580599911015 = PRIM_EQ(Nil, x140580599910983);
if (True == x140580599911015) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580599911559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599911559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599911559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599911559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599911559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599911559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599911559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599911559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599911559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj x140580599912935 = makeNative(32, clofun2, 0, 1, closureRef(co, 0));
Obj x140580600586855 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580600586855) {
Obj x140580600587367 = PRIM_CAR(closureRef(co, 0));
Obj x140580600587399 = PRIM_EQ(symnot, x140580600587367);
if (True == x140580600587399) {
Obj x140580600588039 = PRIM_CDR(closureRef(co, 0));
Obj x140580600588263 = PRIM_ISCONS(x140580600588039);
if (True == x140580600588263) {
Obj x140580600589031 = PRIM_CDR(closureRef(co, 0));
Obj x140580600589063 = PRIM_CAR(x140580600589031);
Obj x140580600589095 = PRIM_EQ(True, x140580600589063);
if (True == x140580600589095) {
Obj x140580600589927 = PRIM_CDR(closureRef(co, 0));
Obj x140580600589959 = PRIM_CDR(x140580600589927);
Obj x140580600589991 = PRIM_EQ(Nil, x140580600589959);
if (True == x140580600589991) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580599912935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599912935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599912935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599912935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599912935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj x140580599913671 = makeNative(33, clofun2, 0, 1, closureRef(co, 0));
Obj x140580600631687 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580600631687) {
Obj x140580600632231 = PRIM_CAR(closureRef(co, 0));
Obj x140580600632263 = PRIM_EQ(symnot, x140580600632231);
if (True == x140580600632263) {
Obj x140580600632967 = PRIM_CDR(closureRef(co, 0));
Obj x140580600632999 = PRIM_ISCONS(x140580600632967);
if (True == x140580600632999) {
Obj x140580600633831 = PRIM_CDR(closureRef(co, 0));
Obj x140580600633863 = PRIM_CAR(x140580600633831);
Obj x140580600633895 = PRIM_EQ(False, x140580600633863);
if (True == x140580600633895) {
Obj x140580600634631 = PRIM_CDR(closureRef(co, 0));
Obj x140580600634663 = PRIM_CDR(x140580600634631);
Obj x140580600634695 = PRIM_EQ(Nil, x140580600634663);
if (True == x140580600634695) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580599913671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599913671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599913671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599913671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599913671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x140580599914407 = makeNative(34, clofun2, 0, 1, closureRef(co, 0));
Obj x140580600757607 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580600757607) {
Obj x140580600758183 = PRIM_CAR(closureRef(co, 0));
Obj x140580600758215 = PRIM_EQ(symif, x140580600758183);
if (True == x140580600758215) {
Obj x140580600701703 = PRIM_CDR(closureRef(co, 0));
Obj x140580600701735 = PRIM_ISCONS(x140580600701703);
if (True == x140580600701735) {
Obj x140580600702471 = PRIM_CDR(closureRef(co, 0));
Obj x140580600702567 = PRIM_CAR(x140580600702471);
Obj x140580600702599 = PRIM_EQ(True, x140580600702567);
if (True == x140580600702599) {
Obj x140580600703335 = PRIM_CDR(closureRef(co, 0));
Obj x140580600703367 = PRIM_CDR(x140580600703335);
Obj x140580600703399 = PRIM_ISCONS(x140580600703367);
if (True == x140580600703399) {
Obj x140580600704199 = PRIM_CDR(closureRef(co, 0));
Obj x140580600704231 = PRIM_CDR(x140580600704199);
Obj x140580600704263 = PRIM_CAR(x140580600704231);
Obj y = x140580600704263;
Obj x140580600660263 = PRIM_CDR(closureRef(co, 0));
Obj x140580600660327 = PRIM_CDR(x140580600660263);
Obj x140580600660359 = PRIM_CDR(x140580600660327);
Obj x140580600660391 = PRIM_ISCONS(x140580600660359);
if (True == x140580600660391) {
Obj x140580600661479 = PRIM_CDR(closureRef(co, 0));
Obj x140580600661511 = PRIM_CDR(x140580600661479);
Obj x140580600661543 = PRIM_CDR(x140580600661511);
Obj x140580600661575 = PRIM_CAR(x140580600661543);
Obj z = x140580600661575;
Obj x140580600662695 = PRIM_CDR(closureRef(co, 0));
Obj x140580600662727 = PRIM_CDR(x140580600662695);
Obj x140580600662759 = PRIM_CDR(x140580600662727);
Obj x140580600662791 = PRIM_CDR(x140580600662759);
Obj x140580600662823 = PRIM_EQ(Nil, x140580600662791);
if (True == x140580600662823) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580599914407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599914407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599914407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599914407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599914407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599914407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599914407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj x140580599895111 = makeNative(35, clofun2, 0, 1, closureRef(co, 0));
Obj x140580600821607 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580600821607) {
Obj x140580600822183 = PRIM_CAR(closureRef(co, 0));
Obj x140580600822247 = PRIM_EQ(symif, x140580600822183);
if (True == x140580600822247) {
Obj x140580600822951 = PRIM_CDR(closureRef(co, 0));
Obj x140580600822983 = PRIM_ISCONS(x140580600822951);
if (True == x140580600822983) {
Obj x140580600823719 = PRIM_CDR(closureRef(co, 0));
Obj x140580600823751 = PRIM_CAR(x140580600823719);
Obj x140580600795175 = PRIM_EQ(False, x140580600823751);
if (True == x140580600795175) {
Obj x140580600796199 = PRIM_CDR(closureRef(co, 0));
Obj x140580600796263 = PRIM_CDR(x140580600796199);
Obj x140580600796327 = PRIM_ISCONS(x140580600796263);
if (True == x140580600796327) {
Obj x140580600797031 = PRIM_CDR(closureRef(co, 0));
Obj x140580600797127 = PRIM_CDR(x140580600797031);
Obj x140580600797159 = PRIM_CAR(x140580600797127);
Obj y = x140580600797159;
Obj x140580600798119 = PRIM_CDR(closureRef(co, 0));
Obj x140580600798151 = PRIM_CDR(x140580600798119);
Obj x140580600798183 = PRIM_CDR(x140580600798151);
Obj x140580600798247 = PRIM_ISCONS(x140580600798183);
if (True == x140580600798247) {
Obj x140580600799207 = PRIM_CDR(closureRef(co, 0));
Obj x140580600754183 = PRIM_CDR(x140580600799207);
Obj x140580600754215 = PRIM_CDR(x140580600754183);
Obj x140580600754279 = PRIM_CAR(x140580600754215);
Obj z = x140580600754279;
Obj x140580600755815 = PRIM_CDR(closureRef(co, 0));
Obj x140580600755847 = PRIM_CDR(x140580600755815);
Obj x140580600755879 = PRIM_CDR(x140580600755847);
Obj x140580600755911 = PRIM_CDR(x140580600755879);
Obj x140580600755975 = PRIM_EQ(Nil, x140580600755911);
if (True == x140580600755975) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140580599895111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599895111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599895111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599895111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599895111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599895111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599895111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj x140580600857639 = makeNative(36, clofun2, 0, 0);
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
Obj x140580599728583 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 39, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35extract_45rules);
__arg1 = x140580599728583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140580599728615 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = x140580599728615;
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
Obj x140580600856839 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = x140580600856839;
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
Obj x140580600857191 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = x140580600857191;
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
Obj x140580600857799 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580600859143 = makeCons(symlist, args);
Obj x140580600859207 = makeCons(x140580600859143, body);
Obj x140580600859239 = makeCons(symmatch, x140580600859207);
Obj x140580600859399 = makeCons(x140580600859239, Nil);
Obj x140580600859431 = makeCons(args, x140580600859399);
Obj x140580600859463 = makeCons(x140580600857799, x140580600859431);
Obj x140580600859495 = makeCons(symdefun, x140580600859463);
__nargs = 2;
__arg1 = x140580600859495;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj n = __arg1;
Obj x140580599727015 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == x140580599727015) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580599727335 = primGenSym();
Obj x140580599727751 = PRIM_SUB(n, MAKE_NUMBER(1));
pushCont(co, 44, clofun2, 1, x140580599727335);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35gen_45paramenters);
__arg1 = x140580599727751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj x140580599727783 = __arg1;
Obj x140580599727335= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580599727815 = makeCons(x140580599727335, x140580599727783);
__nargs = 2;
__arg1 = x140580599727815;
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
Obj x140580599760647 = __arg1;
Obj pats = x140580599760647;
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
Obj x140580599761415 = __arg1;
Obj counts = x140580599761415;
Obj x140580599761671 = PRIM_CAR(counts);
Obj n = x140580599761671;
Obj dif = makeNative(0, clofun3, 1, 1, n);
Obj x140580599726119 = PRIM_CDR(counts);
pushCont(co, 48, clofun2, 1, n);
__nargs = 3;
__arg0 = globalRef(symfilter);
__arg1 = dif;
__arg2 = x140580599726119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj x140580599726151 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun2, 1, n);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140580599726151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140580599726183 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580599726215 = primNot(x140580599726183);
if (True == x140580599726215) {
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
Obj x140580599762183 = PRIM_EQ(closureRef(co, 0), x);
Obj x140580599762215 = primNot(x140580599762183);
__nargs = 2;
__arg1 = x140580599762215;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x = __arg1;
Obj x140580599761127 = PRIM_CDR(x);
__nargs = 2;
__arg0 = globalRef(symlength);
__arg1 = x140580599761127;
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
Obj x140580599759175 = PRIM_EQ(l1, Nil);
if (True == x140580599759175) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580599759527 = PRIM_CAR(l1);
Obj x140580599759911 = PRIM_CDR(l1);
pushCont(co, 3, clofun3, 1, x140580599759527);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = x140580599759911;
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
Obj x140580599759975 = __arg1;
Obj x140580599759527= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580599760007 = makeCons(x140580599759527, x140580599759975);
__nargs = 2;
__arg1 = x140580599760007;
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
Obj x140580599787527 = PRIM_ISCONS(l);
if (True == x140580599787527) {
Obj x140580599788103 = PRIM_CAR(l);
pushCont(co, 6, clofun3, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = x140580599788103;
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
Obj x140580599788135 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140580599788135) {
Obj x140580599788679 = PRIM_CAR(l);
Obj x140580599788743 = makeCons(x140580599788679, res);
Obj x140580599788999 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = x140580599788743;
__arg2 = fn;
__arg3 = x140580599788999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140580599789575 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = res;
__arg2 = fn;
__arg3 = x140580599789575;
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
Obj x140580599879751 = PRIM_EQ(l, Nil);
if (True == x140580599879751) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580599880231 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj x140580599880487 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35length_45h);
__arg1 = x140580599880231;
__arg2 = x140580599880487;
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
Obj x140580599877799 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140580599877799) {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140580599878791 = PRIM_CAR(rules);
Obj x140580599878855 = makeCons(x140580599878791, res);
pushCont(co, 11, clofun3, 1, x140580599878855);
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
Obj x140580599879079 = __arg1;
Obj x140580599878855= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rules_45patterns);
__arg1 = x140580599878855;
__arg2 = x140580599879079;
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
Obj x140580599956519 = makeNative(14, clofun3, 0, 3, input, current, result);
Obj x140580599896679 = PRIM_EQ(Nil, input);
if (True == x140580599896679) {
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
__arg0 = x140580599956519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj x140580599956615 = makeNative(16, clofun3, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140580599939431 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580599939431) {
Obj x140580599939943 = PRIM_CAR(closureRef(co, 0));
Obj x140580599939975 = PRIM_EQ(sym_61_62, x140580599939943);
if (True == x140580599939975) {
Obj x140580599940487 = PRIM_CDR(closureRef(co, 0));
Obj x140580599940519 = PRIM_ISCONS(x140580599940487);
if (True == x140580599940519) {
Obj x140580599941127 = PRIM_CDR(closureRef(co, 0));
Obj x140580599941159 = PRIM_CAR(x140580599941127);
Obj act = x140580599941159;
Obj x140580599941895 = PRIM_CDR(closureRef(co, 0));
Obj x140580599941927 = PRIM_CDR(x140580599941895);
Obj x140580599942023 = PRIM_ISCONS(x140580599941927);
if (True == x140580599942023) {
Obj x140580599910471 = PRIM_CDR(closureRef(co, 0));
Obj x140580599910503 = PRIM_CDR(x140580599910471);
Obj x140580599910535 = PRIM_CAR(x140580599910503);
Obj x140580599910567 = PRIM_EQ(symwhere, x140580599910535);
if (True == x140580599910567) {
Obj x140580599911495 = PRIM_CDR(closureRef(co, 0));
Obj x140580599911527 = PRIM_CDR(x140580599911495);
Obj x140580599911591 = PRIM_CDR(x140580599911527);
Obj x140580599911623 = PRIM_ISCONS(x140580599911591);
if (True == x140580599911623) {
Obj x140580599912551 = PRIM_CDR(closureRef(co, 0));
Obj x140580599912583 = PRIM_CDR(x140580599912551);
Obj x140580599912647 = PRIM_CDR(x140580599912583);
Obj x140580599912679 = PRIM_CAR(x140580599912647);
Obj pred = x140580599912679;
Obj x140580599913575 = PRIM_CDR(closureRef(co, 0));
Obj x140580599913607 = PRIM_CDR(x140580599913575);
Obj x140580599913639 = PRIM_CDR(x140580599913607);
Obj x140580599913703 = PRIM_CDR(x140580599913639);
Obj remain = x140580599913703;
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
__arg0 = x140580599956615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599956615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599956615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599956615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599956615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599956615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj x140580599914343 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140580599914439 = makeCons(symlist, x140580599914343);
Obj pat = x140580599914439;
Obj x140580599895175 = makeCons(act, Nil);
Obj x140580599895207 = makeCons(pred, x140580599895175);
Obj x140580599895239 = makeCons(symwhere, x140580599895207);
Obj x140580599895527 = makeCons(pat, closureRef(co, 2));
Obj x140580599895559 = makeCons(x140580599895239, x140580599895527);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = x140580599895559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140580599957543 = makeNative(18, clofun3, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140580600241543 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580600241543) {
Obj x140580599955559 = PRIM_CAR(closureRef(co, 0));
Obj x140580599955687 = PRIM_EQ(sym_61_62, x140580599955559);
if (True == x140580599955687) {
Obj x140580599956103 = PRIM_CDR(closureRef(co, 0));
Obj x140580599956135 = PRIM_ISCONS(x140580599956103);
if (True == x140580599956135) {
Obj x140580599956839 = PRIM_CDR(closureRef(co, 0));
Obj x140580599956871 = PRIM_CAR(x140580599956839);
Obj act = x140580599956871;
Obj x140580599957319 = PRIM_CDR(closureRef(co, 0));
Obj x140580599957479 = PRIM_CDR(x140580599957319);
Obj remain = x140580599957479;
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
__arg0 = x140580599957543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599957543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140580599957543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj x140580599958023 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580599958087 = makeCons(symlist, x140580599958023);
Obj pat = x140580599958087;
Obj x140580599959047 = makeCons(pat, closureRef(co, 2));
Obj x140580599959079 = makeCons(act, x140580599959047);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = x140580599959079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140580599958055 = makeNative(19, clofun3, 0, 0);
Obj x140580600239911 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580600239911) {
Obj x140580600240231 = PRIM_CAR(closureRef(co, 0));
Obj x = x140580600240231;
Obj x140580600240487 = PRIM_CDR(closureRef(co, 0));
Obj y = x140580600240487;
Obj x140580600241095 = makeCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = y;
__arg2 = x140580600241095;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140580599958055;
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
Obj x140580600632103 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 23, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = x140580600632103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140580600632135 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = x140580600632135;
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
Obj x140580600632455 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = x140580600632455;
Obj x140580600632935 = PRIM_ISCONS(value);
if (True == x140580600632935) {
Obj x140580600633607 = PRIM_CAR(value);
Obj x140580600633639 = PRIM_EQ(symcons, x140580600633607);
Obj x140580600633703 = primNot(x140580600633639);
if (True == x140580600633703) {
if (True == True) {
Obj x140580600633959 = primGenSym();
Obj val = x140580600633959;
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
Obj x140580600586663 = primGenSym();
Obj val = x140580600586663;
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
Obj x140580600588583 = primGenSym();
Obj val = x140580600588583;
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
Obj x140580600589671 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580600589735 = makeCons(x140580600589671, Nil);
Obj x140580600589767 = makeCons(value, x140580600589735);
Obj x140580600589831 = makeCons(val, x140580600589767);
Obj x140580600589863 = makeCons(symlet, x140580600589831);
__nargs = 2;
__arg1 = x140580600589863;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj x140580600587719 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580600587783 = makeCons(x140580600587719, Nil);
Obj x140580600587847 = makeCons(value, x140580600587783);
Obj x140580600587879 = makeCons(val, x140580600587847);
Obj x140580600587911 = makeCons(symlet, x140580600587879);
__nargs = 2;
__arg1 = x140580600587911;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj x140580600635079 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580600635143 = makeCons(x140580600635079, Nil);
Obj x140580600635175 = makeCons(value, x140580600635143);
Obj x140580600635207 = makeCons(val, x140580600635175);
Obj x140580600635239 = makeCons(symlet, x140580600635207);
__nargs = 2;
__arg1 = x140580600635239;
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
Obj x140580600796551 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140580600796551) {
Obj x140580600796967 = makeCons(makeCString("no match-help found!"), Nil);
Obj x140580600796999 = makeCons(symerror, x140580600796967);
__nargs = 2;
__arg1 = x140580600796999;
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
Obj x140580600797479 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140580600797479) {
Obj x140580600797895 = PRIM_CDR(rules);
pushCont(co, 35, clofun3, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = x140580600797895;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj x140580600659975 = PRIM_CAR(rules);
Obj pat = x140580600659975;
Obj x140580600660231 = primGenSym();
Obj cc = x140580600660231;
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
Obj x140580600660551 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = x140580600660551;
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
Obj x140580600660999 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 33, clofun3, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x140580600660999;
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
Obj x140580600661191 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = x140580600661191;
Obj x140580600661959 = PRIM_CDR(rules);
Obj x140580600661991 = PRIM_CDR(x140580600661959);
pushCont(co, 34, clofun3, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = x140580600661991;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140580600662087 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140580600662087;
Obj x140580600663399 = makeCons(rest, Nil);
Obj x140580600663431 = makeCons(Nil, x140580600663399);
Obj x140580600663463 = makeCons(symlambda, x140580600663431);
Obj x140580600663751 = makeCons(curr, Nil);
Obj x140580600663783 = makeCons(x140580600663463, x140580600663751);
Obj x140580600663815 = makeCons(cc, x140580600663783);
Obj x140580600663847 = makeCons(symlet, x140580600663815);
__nargs = 2;
__arg1 = x140580600663847;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj x140580600797959 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140580600797959) {
if (True == True) {
Obj x140580600798215 = PRIM_CAR(rules);
Obj pat = x140580600798215;
Obj x140580600798439 = primGenSym();
Obj cc = x140580600798439;
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
Obj x140580600757799 = PRIM_CAR(rules);
Obj pat = x140580600757799;
Obj x140580600758055 = primGenSym();
Obj cc = x140580600758055;
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
Obj x140580600701063 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = x140580600701063;
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
Obj x140580600701831 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 38, clofun3, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x140580600701831;
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
Obj x140580600701959 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = x140580600701959;
Obj x140580600702695 = PRIM_CDR(rules);
Obj x140580600702727 = PRIM_CDR(x140580600702695);
pushCont(co, 39, clofun3, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = x140580600702727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140580600702759 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140580600702759;
Obj x140580600704103 = makeCons(rest, Nil);
Obj x140580600704135 = makeCons(Nil, x140580600704103);
Obj x140580600704167 = makeCons(symlambda, x140580600704135);
Obj x140580600704423 = makeCons(curr, Nil);
Obj x140580600704519 = makeCons(x140580600704167, x140580600704423);
Obj x140580600704551 = makeCons(cc, x140580600704519);
Obj x140580600704583 = makeCons(symlet, x140580600704551);
__nargs = 2;
__arg1 = x140580600704583;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj x140580600798887 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = x140580600798887;
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
Obj x140580600754247 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 42, clofun3, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x140580600754247;
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
Obj x140580600754407 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = x140580600754407;
Obj x140580600755431 = PRIM_CDR(rules);
Obj x140580600755495 = PRIM_CDR(x140580600755431);
pushCont(co, 43, clofun3, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = x140580600755495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140580600755527 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140580600755527;
Obj x140580600756871 = makeCons(rest, Nil);
Obj x140580600756903 = makeCons(Nil, x140580600756871);
Obj x140580600756935 = makeCons(symlambda, x140580600756903);
Obj x140580600757255 = makeCons(curr, Nil);
Obj x140580600757287 = makeCons(x140580600756935, x140580600757255);
Obj x140580600757319 = makeCons(cc, x140580600757287);
Obj x140580600757351 = makeCons(symlet, x140580600757319);
__nargs = 2;
__arg1 = x140580600757351;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label44:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj x140580600858887 = PRIM_CDR(rules);
Obj x140580600858951 = PRIM_CAR(x140580600858887);
Obj action = x140580600858951;
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
Obj x140580600859271 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140580600859271) {
Obj x140580600859783 = PRIM_CAR(action);
Obj x140580600859847 = PRIM_EQ(x140580600859783, symwhere);
if (True == x140580600859847) {
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
Obj x140580600823175 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 47, clofun3, 2, cc, x140580600823175);
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
Obj x140580600823623 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600823175= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580600795623 = makeCons(cc, Nil);
Obj x140580600795687 = makeCons(x140580600795623, Nil);
Obj x140580600795719 = makeCons(x140580600823623, x140580600795687);
Obj x140580600795751 = makeCons(x140580600823175, x140580600795719);
Obj x140580600795783 = makeCons(symif, x140580600795751);
__nargs = 2;
__arg1 = x140580600795783;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label48:
{
Obj x140580600821351 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 49, clofun3, 2, cc, x140580600821351);
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
Obj x140580600821799 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600821351= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580600822343 = makeCons(cc, Nil);
Obj x140580600822407 = makeCons(x140580600822343, Nil);
Obj x140580600822471 = makeCons(x140580600821799, x140580600822407);
Obj x140580600822503 = makeCons(x140580600821351, x140580600822471);
Obj x140580600822535 = makeCons(symif, x140580600822503);
__nargs = 2;
__arg1 = x140580600822535;
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
Obj x140580600860519 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 1, clofun4, 2, cc, x140580600860519);
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
Obj x140580600819975 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600860519= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580600820487 = makeCons(cc, Nil);
Obj x140580600820551 = makeCons(x140580600820487, Nil);
Obj x140580600820583 = makeCons(x140580600819975, x140580600820551);
Obj x140580600820615 = makeCons(x140580600860519, x140580600820583);
Obj x140580600820647 = makeCons(symif, x140580600820615);
__nargs = 2;
__arg1 = x140580600820647;
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
Obj x140580599880135 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140580599880135) {
Obj x140580599880423 = PRIM_EQ(pat, expr);
if (True == x140580599880423) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580599881383 = makeCons(expr, Nil);
Obj x140580599881415 = makeCons(pat, x140580599881383);
Obj x140580599881447 = makeCons(sym_61, x140580599881415);
Obj x140580599787847 = makeCons(cc, Nil);
Obj x140580599787911 = makeCons(x140580599787847, Nil);
Obj x140580599787943 = makeCons(body, x140580599787911);
Obj x140580599787975 = makeCons(x140580599881447, x140580599787943);
Obj x140580599788007 = makeCons(symif, x140580599787975);
__nargs = 2;
__arg1 = x140580599788007;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj x140580599788263 = primIsSymbol(pat);
if (True == x140580599788263) {
Obj x140580599789063 = makeCons(body, Nil);
Obj x140580599789095 = makeCons(expr, x140580599789063);
Obj x140580599789127 = makeCons(pat, x140580599789095);
Obj x140580599789159 = makeCons(symlet, x140580599789127);
__nargs = 2;
__arg1 = x140580599789159;
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
Obj x140580599789415 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140580599789415) {
Obj x140580599789831 = PRIM_CAR(pat);
Obj x140580599789895 = PRIM_EQ(x140580599789831, symquote);
if (True == x140580599789895) {
Obj x140580599790855 = makeCons(expr, Nil);
Obj x140580599790887 = makeCons(pat, x140580599790855);
Obj x140580599790919 = makeCons(sym_61, x140580599790887);
Obj x140580599791527 = makeCons(cc, Nil);
Obj x140580599791591 = makeCons(x140580599791527, Nil);
Obj x140580599758855 = makeCons(body, x140580599791591);
Obj x140580599758887 = makeCons(x140580599790919, x140580599758855);
Obj x140580599758919 = makeCons(symif, x140580599758887);
__nargs = 2;
__arg1 = x140580599758919;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580600856935 = PRIM_CAR(pat);
Obj x140580600857031 = PRIM_EQ(x140580600856935, symcons);
if (True == x140580600857031) {
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
Obj x140580600857927 = __arg1;
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = x140580600857927;
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
Obj x140580599879431 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140580599879431) {
Obj x140580599879847 = primIsSymbol(x);
Obj x140580599879879 = primNot(x140580599879847);
if (True == x140580599879879) {
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
Obj x140580599957127 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = x140580599957127;
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
Obj x140580599957511 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = x140580599957511;
Obj x140580599957863 = PRIM_ISCONS(expr);
if (True == x140580599957863) {
Obj x140580599958311 = PRIM_CAR(expr);
Obj x140580599958375 = PRIM_EQ(x140580599958311, symcons);
if (True == x140580599958375) {
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
Obj x140580599940135 = makeCons(expr, Nil);
Obj x140580599940167 = makeCons(symcons_63, x140580599940135);
Obj x140580599941191 = makeCons(expr, Nil);
Obj x140580599941223 = makeCons(symcar, x140580599941191);
Obj x140580599941959 = makeCons(expr, Nil);
Obj x140580599941991 = makeCons(symcdr, x140580599941959);
pushCont(co, 21, clofun4, 4, x, x140580599941223, cc, x140580599940167);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = x140580599941991;
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
Obj x140580599912231 = makeCons(expr, Nil);
Obj x140580599912263 = makeCons(symcons_63, x140580599912231);
Obj x140580599913159 = makeCons(expr, Nil);
Obj x140580599913191 = makeCons(symcar, x140580599913159);
Obj x140580599913927 = makeCons(expr, Nil);
Obj x140580599914023 = makeCons(symcdr, x140580599913927);
pushCont(co, 16, clofun4, 4, x, x140580599913191, cc, x140580599912263);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = x140580599914023;
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
Obj x140580599896903 = makeCons(expr, Nil);
Obj x140580599896935 = makeCons(symcons_63, x140580599896903);
Obj x140580599897735 = makeCons(expr, Nil);
Obj x140580599897767 = makeCons(symcar, x140580599897735);
Obj x140580599877927 = makeCons(expr, Nil);
Obj x140580599877959 = makeCons(symcdr, x140580599877927);
pushCont(co, 11, clofun4, 4, x, x140580599897767, cc, x140580599896935);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = x140580599877959;
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
Obj x140580599878055 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580599897767= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140580599896935= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 12, clofun4, 2, cc, x140580599896935);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = x140580599897767;
__arg3 = x140580599878055;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140580599878119 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580599896935= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580599878535 = makeCons(cc, Nil);
Obj x140580599878599 = makeCons(x140580599878535, Nil);
Obj x140580599878631 = makeCons(x140580599878119, x140580599878599);
Obj x140580599878663 = makeCons(x140580599896935, x140580599878631);
Obj x140580599878695 = makeCons(symif, x140580599878663);
__nargs = 2;
__arg1 = x140580599878695;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj x140580599895335 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = x140580599895335;
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
Obj x140580599895591 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = x140580599895591;
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
Obj x140580599896103 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = x140580599896103;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140580599914119 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580599913191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140580599912263= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 17, clofun4, 2, cc, x140580599912263);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = x140580599913191;
__arg3 = x140580599914119;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140580599914215 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580599912263= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580599894887 = makeCons(cc, Nil);
Obj x140580599894951 = makeCons(x140580599894887, Nil);
Obj x140580599894983 = makeCons(x140580599914215, x140580599894951);
Obj x140580599895015 = makeCons(x140580599912263, x140580599894983);
Obj x140580599895047 = makeCons(symif, x140580599895015);
__nargs = 2;
__arg1 = x140580599895047;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj x140580599910407 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = x140580599910407;
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
Obj x140580599910663 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = x140580599910663;
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
Obj x140580599911271 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = x140580599911271;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140580599942087 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580599941223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140580599940167= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 22, clofun4, 2, cc, x140580599940167);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = x140580599941223;
__arg3 = x140580599942087;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140580599942151 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580599940167= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580599942599 = makeCons(cc, Nil);
Obj x140580599942695 = makeCons(x140580599942599, Nil);
Obj x140580599942759 = makeCons(x140580599942151, x140580599942695);
Obj x140580599942823 = makeCons(x140580599940167, x140580599942759);
Obj x140580599942855 = makeCons(symif, x140580599942823);
__nargs = 2;
__arg1 = x140580599942855;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x140580599958823 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = x140580599958823;
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
Obj x140580599959111 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = x140580599959111;
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
Obj x140580599939271 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = x140580599939271;
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
Obj x140580599956295 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = x140580599956295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj pat = __arg1;
Obj x140580600240551 = PRIM_CDR(pat);
pushCont(co, 28, clofun4, 1, pat);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140580600240551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140580600240583 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140580600240583) {
Obj x140580600240775 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = x140580600240775;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580600241415 = PRIM_CAR(pat);
Obj x140580600242055 = PRIM_CDR(pat);
pushCont(co, 29, clofun4, 1, x140580600241415);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = x140580600242055;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140580600242087 = __arg1;
Obj x140580600241415= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600242151 = makeCons(x140580600242087, Nil);
Obj x140580599955463 = makeCons(x140580600241415, x140580600242151);
Obj x140580599955495 = makeCons(symcons, x140580599955463);
__nargs = 2;
__arg1 = x140580599955495;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x = __arg1;
Obj x140580600239431 = PRIM_EQ(x, True);
if (True == x140580600239431) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580600239719 = PRIM_EQ(x, False);
if (True == x140580600239719) {
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
Obj x140580600238791 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = x140580600238791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj l = __arg1;
Obj x140580600587815 = PRIM_EQ(Nil, l);
if (True == x140580600587815) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580600588423 = PRIM_CAR(l);
Obj x140580600588487 = PRIM_EQ(x140580600588423, False);
if (True == x140580600588487) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580600588935 = PRIM_CDR(l);
pushCont(co, 33, clofun4, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = x140580600588935;
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
Obj x140580600588967 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = x140580600588967;
Obj x140580600589255 = PRIM_EQ(more, False);
if (True == x140580600589255) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580600589799 = PRIM_CAR(l);
Obj x140580600590247 = makeCons(False, Nil);
Obj x140580600590279 = makeCons(more, x140580600590247);
Obj x140580600590311 = makeCons(x140580600589799, x140580600590279);
Obj x140580600238087 = makeCons(symif, x140580600590311);
__nargs = 2;
__arg1 = x140580600238087;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label34:
{
Obj exp = __arg1;
Obj x140580600587143 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = x140580600587143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj l = __arg1;
Obj x140580600633255 = PRIM_EQ(l, Nil);
if (True == x140580600633255) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580600633671 = PRIM_CAR(l);
Obj x140580600633735 = PRIM_EQ(x140580600633671, True);
if (True == x140580600633735) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580600634151 = PRIM_CDR(l);
pushCont(co, 36, clofun4, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = x140580600634151;
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
Obj x140580600634183 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = x140580600634183;
Obj x140580600634471 = PRIM_EQ(more, True);
if (True == x140580600634471) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580600635015 = PRIM_CAR(l);
Obj x140580600586343 = makeCons(more, Nil);
Obj x140580600586375 = makeCons(True, x140580600586343);
Obj x140580600586407 = makeCons(x140580600635015, x140580600586375);
Obj x140580600586439 = makeCons(symif, x140580600586407);
__nargs = 2;
__arg1 = x140580600586439;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label37:
{
Obj exp = __arg1;
Obj x140580600662855 = PRIM_CDR(exp);
Obj x140580600662887 = PRIM_EQ(Nil, x140580600662855);
if (True == x140580600662887) {
Obj x140580600663303 = makeCons(makeCString("no cond match"), Nil);
Obj x140580600663335 = makeCons(symerror, x140580600663303);
__nargs = 2;
__arg1 = x140580600663335;
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
Obj x140580600663623 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = x140580600663623;
Obj x140580600631431 = PRIM_CAR(curr);
pushCont(co, 39, clofun4, 2, exp, x140580600631431);
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
Obj x140580600631815 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600631431= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 40, clofun4, 2, x140580600631815, x140580600631431);
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
Obj x140580600632391 = __arg1;
Obj x140580600631815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600631431= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580600632423 = makeCons(symcond, x140580600632391);
Obj x140580600632487 = makeCons(x140580600632423, Nil);
Obj x140580600632519 = makeCons(x140580600631815, x140580600632487);
Obj x140580600632551 = makeCons(x140580600631431, x140580600632519);
Obj x140580600632583 = makeCons(symif, x140580600632551);
__nargs = 2;
__arg1 = x140580600632583;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj exp = __arg1;
Obj x140580600662023 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = x140580600662023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj exp = __arg1;
Obj x140580600704455 = PRIM_CDR(exp);
pushCont(co, 43, clofun4, 1, exp);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140580600704455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140580600704487 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140580600704487) {
Obj x140580600704679 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = x140580600704679;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580600660167 = PRIM_CAR(exp);
pushCont(co, 44, clofun4, 2, exp, x140580600660167);
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
Obj x140580600660583 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600660167= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun4, 2, x140580600660583, x140580600660167);
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
Obj x140580600661127 = __arg1;
Obj x140580600660583= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600660167= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 46, clofun4, 2, x140580600660583, x140580600660167);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = x140580600661127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140580600661159 = __arg1;
Obj x140580600660583= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600660167= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580600661223 = makeCons(x140580600661159, Nil);
Obj x140580600661255 = makeCons(x140580600660583, x140580600661223);
Obj x140580600661287 = makeCons(x140580600660167, x140580600661255);
Obj x140580600661319 = makeCons(symlet, x140580600661287);
__nargs = 2;
__arg1 = x140580600661319;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label47:
{
Obj x = __arg1;
Obj x140580600703655 = PRIM_ISCONS(x);
Obj x140580600703687 = primNot(x140580600703655);
__nargs = 2;
__arg1 = x140580600703687;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label48:
{
Obj x = __arg1;
Obj l = __arg2;
Obj x140580600702023 = PRIM_ISCONS(l);
if (True == x140580600702023) {
Obj x140580600702439 = PRIM_CAR(l);
Obj x140580600702535 = PRIM_EQ(x140580600702439, x);
if (True == x140580600702535) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580600702919 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symelem_63);
__arg1 = x;
__arg2 = x140580600702919;
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
Obj x140580600757191 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 1, clofun5, 2, exp, x140580600757191);
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
Obj x140580600757959 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600757191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 2, clofun5, 2, x140580600757959, x140580600757191);
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
Obj x140580600701031 = __arg1;
Obj x140580600757959= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600757191= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580600701095 = makeCons(x140580600701031, Nil);
Obj x140580600701127 = makeCons(x140580600757959, x140580600701095);
Obj x140580600701159 = makeCons(symlambda, x140580600701127);
Obj x140580600701223 = makeCons(x140580600701159, Nil);
Obj x140580600701255 = makeCons(x140580600757191, x140580600701223);
Obj x140580600701287 = makeCons(symdef, x140580600701255);
__nargs = 2;
__arg1 = x140580600701287;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj exp = __arg1;
Obj x140580600756199 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = x140580600756199;
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
Obj x140580600798759 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600798823 = makeCons(x140580600798759, Nil);
Obj x140580600798855 = makeCons(symquote, x140580600798823);
pushCont(co, 6, clofun5, 2, exp, x140580600798855);
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
Obj x140580600754567 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600798855= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 7, clofun5, 2, x140580600754567, x140580600798855);
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
Obj x140580600754791 = __arg1;
Obj x140580600754567= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600798855= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140580600754823 = makeCons(x140580600754567, x140580600754791);
Obj x140580600754855 = makeCons(symlambda, x140580600754823);
Obj x140580600754919 = makeCons(x140580600754855, Nil);
Obj x140580600754951 = makeCons(x140580600798855, x140580600754919);
Obj x140580600755111 = makeCons(symcora_47init_35add_45to_45_42macros_42, x140580600754951);
__nargs = 2;
__arg1 = x140580600755111;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj exp = __arg1;
Obj x140580600821479 = PRIM_ISCONS(exp);
if (True == x140580600821479) {
Obj x140580600821959 = PRIM_CAR(exp);
Obj x140580600822023 = PRIM_EQ(x140580600821959, globalRef(sym_42protect_45symbol_42));
if (True == x140580600822023) {
Obj x140580600822215 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = x140580600822215;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580600822663 = PRIM_CAR(exp);
Obj x140580600822759 = PRIM_EQ(x140580600822663, symlambda);
if (True == x140580600822759) {
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
Obj x140580600795879 = PRIM_CAR(exp);
Obj x140580600795943 = PRIM_EQ(x140580600795879, symquote);
if (True == x140580600795943) {
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
Obj x140580600797063 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(10, clofun5, 1, 1, exp);
__arg1 = x140580600797063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj exp1 = __arg1;
Obj x140580600796487 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == x140580600796487) {
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
Obj x140580600823303 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 12, clofun5, 1, x140580600823303);
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
Obj x140580600795271 = __arg1;
Obj x140580600823303= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 13, clofun5, 1, x140580600823303);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = x140580600795271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140580600795303 = __arg1;
Obj x140580600823303= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580600795367 = makeCons(x140580600795303, Nil);
Obj x140580600795399 = makeCons(x140580600823303, x140580600795367);
Obj x140580600795431 = makeCons(symlambda, x140580600795399);
__nargs = 2;
__arg1 = x140580600795431;
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
Obj x140580600857287 = PRIM_EQ(Nil, macros);
if (True == x140580600857287) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140580600820199 = PRIM_CAR(macros);
__nargs = 2;
__arg0 = makeNative(16, clofun5, 1, 2, exp, macros);
__arg1 = x140580600820199;
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
Obj x140580600857831 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140580600857831) {
Obj x140580600858247 = PRIM_CAR(closureRef(co, 0));
Obj x140580600858503 = PRIM_CAR(item);
Obj x140580600858535 = PRIM_EQ(x140580600858247, x140580600858503);
if (True == x140580600858535) {
if (True == True) {
Obj x140580600858919 = PRIM_CDR(item);
__nargs = 2;
__arg0 = x140580600858919;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140580600859335 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = x140580600859335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj x140580600859687 = PRIM_CDR(item);
__nargs = 2;
__arg0 = x140580600859687;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140580600860103 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = x140580600860103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj x140580600860487 = PRIM_CDR(item);
__nargs = 2;
__arg0 = x140580600860487;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140580600819943 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = x140580600819943;
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
Obj x140580599894471 = makeCons(n, v);
Obj x140580600856583 = makeCons(x140580599894471, globalRef(sym_42macros_42));
Obj x140580600856615 = primSet(co, sym_42macros_42, x140580600856583);
__nargs = 2;
__arg1 = x140580600856615;
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
Obj x140580599911367 = PRIM_ISCONS(l);
if (True == x140580599911367) {
Obj x140580599912071 = PRIM_CAR(l);
pushCont(co, 20, clofun5, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = x140580599912071;
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
Obj x140580599912103 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140580599912167 = makeCons(x140580599912103, res);
Obj x140580599912423 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symmap_45h);
__arg1 = x140580599912167;
__arg2 = f;
__arg3 = x140580599912423;
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
Obj x140580599942183 = PRIM_ISCONS(l);
if (True == x140580599942183) {
Obj x140580599942727 = PRIM_CAR(l);
Obj x140580599942791 = makeCons(x140580599942727, res);
Obj x140580599943015 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35reverse_45h);
__arg1 = x140580599942791;
__arg2 = x140580599943015;
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
Obj x140580599941575 = PRIM_ISCONS(x);
__nargs = 2;
__arg1 = x140580599941575;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj exp = __arg1;
Obj x140580599939719 = PRIM_ISCONS(exp);
if (True == x140580599939719) {
Obj x140580599940295 = PRIM_CAR(exp);
Obj x140580599940839 = PRIM_CDR(exp);
pushCont(co, 24, clofun5, 1, x140580599940295);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = x140580599940839;
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
Obj x140580599940871 = __arg1;
Obj x140580599940295= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140580599940935 = makeCons(x140580599940871, Nil);
Obj x140580599940967 = makeCons(x140580599940295, x140580599940935);
Obj x140580599940999 = makeCons(symcons, x140580599940967);
__nargs = 2;
__arg1 = x140580599940999;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x = __arg1;
Obj x140580599959527 = PRIM_CDR(x);
Obj x140580599939079 = PRIM_CDR(x140580599959527);
Obj x140580599939111 = PRIM_CDR(x140580599939079);
__nargs = 2;
__arg1 = x140580599939111;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj x = __arg1;
Obj x140580599958503 = PRIM_CDR(x);
Obj x140580599958535 = PRIM_CDR(x140580599958503);
Obj x140580599958567 = PRIM_CDR(x140580599958535);
Obj x140580599958599 = PRIM_CAR(x140580599958567);
__nargs = 2;
__arg1 = x140580599958599;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj x = __arg1;
Obj x140580599957351 = PRIM_CDR(x);
Obj x140580599957383 = PRIM_CDR(x140580599957351);
Obj x140580599957415 = PRIM_CAR(x140580599957383);
__nargs = 2;
__arg1 = x140580599957415;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj x = __arg1;
Obj x140580599956327 = PRIM_CDR(x);
Obj x140580599956359 = PRIM_CDR(x140580599956327);
__nargs = 2;
__arg1 = x140580599956359;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
Obj x = __arg1;
Obj x140580599955591 = PRIM_CAR(x);
Obj x140580599955623 = PRIM_CDR(x140580599955591);
__nargs = 2;
__arg1 = x140580599955623;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x = __arg1;
Obj x140580600241575 = PRIM_CAR(x);
Obj x140580600241607 = PRIM_CAR(x140580600241575);
__nargs = 2;
__arg1 = x140580600241607;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj x = __arg1;
Obj x140580600240839 = PRIM_CDR(x);
Obj x140580600240871 = PRIM_CAR(x140580600240839);
__nargs = 2;
__arg1 = x140580600240871;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj x = __arg1;
Obj x140580600240135 = PRIM_EQ(x, Nil);
__nargs = 2;
__arg1 = x140580600240135;
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

