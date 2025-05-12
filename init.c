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
static Obj symfold_45apply;
static Obj symcora_47init_35rewrite_45fold_45apply;
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
symfold_45apply = intern("fold-apply");
symcora_47init_35rewrite_45fold_45apply = intern("cora/init#rewrite-fold-apply");
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
Obj x140663454886791 = primSet(co, symnull_63, makeNative(39, clofun5, 1, 0));
Obj x140663454887527 = primSet(co, symcadr, makeNative(38, clofun5, 1, 0));
Obj x140663454601543 = primSet(co, symcaar, makeNative(37, clofun5, 1, 0));
Obj x140663454602279 = primSet(co, symcdar, makeNative(36, clofun5, 1, 0));
Obj x140663454603015 = primSet(co, symcddr, makeNative(35, clofun5, 1, 0));
Obj x140663454603943 = primSet(co, symcaddr, makeNative(34, clofun5, 1, 0));
Obj x140663454605063 = primSet(co, symcadddr, makeNative(33, clofun5, 1, 0));
Obj x140663454581415 = primSet(co, symcdddr, makeNative(32, clofun5, 1, 0));
Obj x140663454583271 = primSet(co, symrcons, makeNative(30, clofun5, 1, 0));
Obj x140663454583815 = primSet(co, sympair_63, makeNative(29, clofun5, 1, 0));
Obj x140663454540167 = primSet(co, symcora_47init_35reverse_45h, makeNative(28, clofun5, 2, 0));
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
Obj x140663454540615 = __arg1;
Obj x140663454540647 = primSet(co, symreverse, x140663454540615);
Obj x140663454542439 = primSet(co, symmap_45h, makeNative(26, clofun5, 3, 0));
Obj x140663454543015 = primSet(co, symmap, makeNative(25, clofun5, 2, 0));
Obj x140663454543303 = primSet(co, sym_42macros_42, Nil);
Obj x140663454543719 = primGenSym();
Obj x140663454543751 = primSet(co, sym_42protect_45symbol_42, x140663454543719);
Obj x140663454499719 = primSet(co, symcora_47init_35add_45to_45_42macros_42, makeNative(24, clofun5, 2, 0));
Obj x140663453988519 = primSet(co, symcora_47init_35macroexpand1_45h, makeNative(22, clofun5, 2, 0));
Obj x140663453989063 = primSet(co, symcora_47init_35macroexpand1, makeNative(21, clofun5, 1, 0));
Obj x140663453949127 = primSet(co, symcora_47init_35macroexpand_45boot, makeNative(15, clofun5, 1, 0));
Obj x140663453949447 = primSet(co, symmacroexpand, globalRef(symcora_47init_35macroexpand_45boot));
Obj x140663453911143 = primSet(co, symdefmacro_45macro, makeNative(11, clofun5, 1, 0));
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
Obj x140663453911463 = __arg1;
PUSH_CONT_0(co, 3, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symlist;
__arg2 = makeNative(10, clofun5, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140663453912423 = __arg1;
PUSH_CONT_0(co, 4, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symdefun;
__arg2 = makeNative(6, clofun5, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140663453906567 = __arg1;
Obj x140663454973959 = primSet(co, symelem_63, makeNative(5, clofun5, 2, 0));
Obj x140663454974695 = primSet(co, symatom_63, makeNative(4, clofun5, 1, 0));
Obj x140663454977351 = primSet(co, symcora_47init_35rewrite_45let, makeNative(49, clofun4, 1, 0));
PUSH_CONT_0(co, 5, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symlet;
__arg2 = makeNative(48, clofun4, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140663454945287 = __arg1;
PUSH_CONT_0(co, 6, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symcond;
__arg2 = makeNative(44, clofun4, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140663454948519 = __arg1;
Obj x140663454918727 = primSet(co, symcora_47init_35rewrite_45or, makeNative(42, clofun4, 1, 0));
PUSH_CONT_0(co, 7, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symor;
__arg2 = makeNative(41, clofun4, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140663454919431 = __arg1;
Obj x140663454897799 = primSet(co, symcora_47init_35rewrite_45and, makeNative(39, clofun4, 1, 0));
PUSH_CONT_0(co, 8, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symand;
__arg2 = makeNative(38, clofun4, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140663454898503 = __arg1;
Obj x140663454899431 = primSet(co, symboolean_63, makeNative(37, clofun4, 1, 0));
Obj x140663454885319 = primSet(co, symcora_47init_35rcons1, makeNative(34, clofun4, 1, 0));
PUSH_CONT_0(co, 9, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symlist_45rest;
__arg2 = makeNative(33, clofun4, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140663454886023 = __arg1;
Obj x140663454500455 = primSet(co, symcora_47init_35match_45cons_45expander, makeNative(15, clofun4, 4, 0));
Obj x140663453909063 = primSet(co, symcora_47init_35match1, makeNative(9, clofun4, 4, 0));
Obj x140663453880583 = primSet(co, symcora_47init_35extract_45rule_45action, makeNative(1, clofun4, 2, 0));
Obj x140663454974279 = primSet(co, symcora_47init_35match_45helper, makeNative(35, clofun3, 2, 0));
Obj x140663454949191 = primSet(co, symcora_47init_35rewrite_45match, makeNative(28, clofun3, 1, 0));
PUSH_CONT_0(co, 10, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symmatch;
__arg2 = makeNative(27, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140663454916999 = __arg1;
Obj x140663454582471 = primSet(co, symcora_47init_35extract_45rules1, makeNative(20, clofun3, 3, 0));
Obj x140663454583143 = primSet(co, symcora_47init_35extract_45rules, makeNative(19, clofun3, 1, 0));
Obj x140663454540231 = primSet(co, symcora_47init_35rules_45patterns, makeNative(16, clofun3, 2, 0));
Obj x140663454541831 = primSet(co, symcora_47init_35length_45h, makeNative(15, clofun3, 2, 0));
Obj x140663454542567 = primSet(co, symlength, makeNative(14, clofun3, 1, 0));
Obj x140663454500711 = primSet(co, symcora_47init_35filter_45h, makeNative(12, clofun3, 3, 0));
Obj x140663454501383 = primSet(co, symfilter, makeNative(11, clofun3, 2, 0));
Obj x140663453987367 = primSet(co, symappend, makeNative(9, clofun3, 2, 0));
Obj x140663453947175 = primSet(co, symcora_47init_35rules_45arg_45count, makeNative(2, clofun3, 1, 0));
Obj x140663453949511 = primSet(co, symcora_47init_35gen_45paramenters, makeNative(0, clofun3, 1, 0));
PUSH_CONT_0(co, 11, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symfunc;
__arg2 = makeNative(44, clofun2, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140663453912807 = __arg1;
Obj x140663453668455 = primSet(co, symcora_47init_35propagate_45boolean0, makeNative(32, clofun2, 1, 0));
Obj x140663453989479 = primSet(co, symcora_47init_35propagate_45boolean, makeNative(9, clofun2, 1, 0));
Obj x140663453990599 = primSet(co, symcora_47init_35rewrite_45namespace, makeNative(8, clofun2, 1, 0));
Obj x140663453947111 = primSet(co, symmacroexpand, makeNative(5, clofun2, 1, 0));
Obj x140663453882183 = primSet(co, symcora_47init_35rewrite_45begin, makeNative(0, clofun2, 1, 0));
PUSH_CONT_0(co, 12, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symbegin;
__arg2 = makeNative(49, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140663453883239 = __arg1;
Obj x140663453668359 = primSet(co, symcora_47init_35rewrite_45backquote, makeNative(43, clofun1, 1, 0));
PUSH_CONT_0(co, 13, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symbackquote;
__arg2 = makeNative(41, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140663453669191 = __arg1;
Obj x140663453640135 = primSet(co, symcora_47init_35rewrite_45fold_45apply, makeNative(36, clofun1, 2, 0));
PUSH_CONT_0(co, 14, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = symfold_45apply;
__arg2 = makeNative(33, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140663453641415 = __arg1;
Obj x140663453333319 = primSet(co, symcora_47init_35parse_45package_45h, makeNative(28, clofun1, 4, 0));
Obj x140663453333927 = primSet(co, symcora_47init_35parse_45package, makeNative(27, clofun1, 2, 0));
PUSH_CONT_0(co, 15, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = sympackage;
__arg2 = makeNative(19, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140663455197799 = __arg1;
Obj x140663455162631 = primSet(co, symcora_47init_35var_45with_45ns, makeNative(14, clofun1, 2, 0));
Obj x140663455146695 = primSet(co, symcora_47init_35lookup_45var, makeNative(4, clofun1, 3, 0));
Obj x140663455147719 = makeCons(makeCString("primSet"), Nil);
Obj x140663455147751 = makeCons(MAKE_NUMBER(2), x140663455147719);
Obj x140663455147783 = makeCons(symset, x140663455147751);
Obj x140663455148583 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x140663455148615 = makeCons(MAKE_NUMBER(1), x140663455148583);
Obj x140663455148647 = makeCons(symcar, x140663455148615);
Obj x140663455149447 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x140663455149479 = makeCons(MAKE_NUMBER(1), x140663455149447);
Obj x140663455149511 = makeCons(symcdr, x140663455149479);
Obj x140663455138023 = makeCons(makeCString("makeCons"), Nil);
Obj x140663455138055 = makeCons(MAKE_NUMBER(2), x140663455138023);
Obj x140663455138087 = makeCons(symcons, x140663455138055);
Obj x140663455138887 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x140663455138919 = makeCons(MAKE_NUMBER(1), x140663455138887);
Obj x140663455138951 = makeCons(symcons_63, x140663455138919);
Obj x140663455139751 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x140663455139783 = makeCons(MAKE_NUMBER(2), x140663455139751);
Obj x140663455139815 = makeCons(sym_43, x140663455139783);
Obj x140663455140615 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x140663455140647 = makeCons(MAKE_NUMBER(2), x140663455140615);
Obj x140663455140679 = makeCons(sym_45, x140663455140647);
Obj x140663455141479 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x140663455195143 = makeCons(MAKE_NUMBER(2), x140663455141479);
Obj x140663455195175 = makeCons(sym_42, x140663455195143);
Obj x140663455195975 = makeCons(makeCString("primDiv"), Nil);
Obj x140663455196007 = makeCons(MAKE_NUMBER(2), x140663455195975);
Obj x140663455196039 = makeCons(sym_47, x140663455196007);
Obj x140663455196935 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x140663455196967 = makeCons(MAKE_NUMBER(2), x140663455196935);
Obj x140663455196999 = makeCons(sym_61, x140663455196967);
Obj x140663455198215 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x140663455198247 = makeCons(MAKE_NUMBER(2), x140663455198215);
Obj x140663455198279 = makeCons(sym_62, x140663455198247);
Obj x140663455199143 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x140663455199175 = makeCons(MAKE_NUMBER(2), x140663455199143);
Obj x140663455199207 = makeCons(sym_60, x140663455199175);
Obj x140663455163271 = makeCons(makeCString("primGenSym"), Nil);
Obj x140663455163303 = makeCons(MAKE_NUMBER(0), x140663455163271);
Obj x140663455163335 = makeCons(symgensym, x140663455163303);
Obj x140663455164199 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x140663455164231 = makeCons(MAKE_NUMBER(1), x140663455164199);
Obj x140663455164295 = makeCons(symsymbol_63, x140663455164231);
Obj x140663455165191 = makeCons(makeCString("primNot"), Nil);
Obj x140663455165223 = makeCons(MAKE_NUMBER(1), x140663455165191);
Obj x140663455165287 = makeCons(symnot, x140663455165223);
Obj x140663455166183 = makeCons(makeCString("primIsNumber"), Nil);
Obj x140663455166215 = makeCons(MAKE_NUMBER(1), x140663455166183);
Obj x140663455166247 = makeCons(syminteger_63, x140663455166215);
Obj x140663455146599 = makeCons(makeCString("primIsString"), Nil);
Obj x140663455146631 = makeCons(MAKE_NUMBER(1), x140663455146599);
Obj x140663455146663 = makeCons(symstring_63, x140663455146631);
Obj x140663455146759 = makeCons(x140663455146663, Nil);
Obj x140663455146791 = makeCons(x140663455166247, x140663455146759);
Obj x140663455146823 = makeCons(x140663455165287, x140663455146791);
Obj x140663455146855 = makeCons(x140663455164295, x140663455146823);
Obj x140663455146887 = makeCons(x140663455163335, x140663455146855);
Obj x140663455146919 = makeCons(x140663455199207, x140663455146887);
Obj x140663455146951 = makeCons(x140663455198279, x140663455146919);
Obj x140663455146983 = makeCons(x140663455196999, x140663455146951);
Obj x140663455147015 = makeCons(x140663455196039, x140663455146983);
Obj x140663455147047 = makeCons(x140663455195175, x140663455147015);
Obj x140663455147079 = makeCons(x140663455140679, x140663455147047);
Obj x140663455147111 = makeCons(x140663455139815, x140663455147079);
Obj x140663455147143 = makeCons(x140663455138951, x140663455147111);
Obj x140663455147175 = makeCons(x140663455138087, x140663455147143);
Obj x140663455147207 = makeCons(x140663455149511, x140663455147175);
Obj x140663455147239 = makeCons(x140663455148647, x140663455147207);
Obj x140663455147271 = makeCons(x140663455147783, x140663455147239);
Obj x140663455147303 = primSet(co, symcora_47init_35_42builtin_45prims_42, x140663455147271);
Obj x140663454974599 = primSet(co, symassq, makeNative(0, clofun1, 2, 0));
Obj x140663454976135 = primSet(co, symcora_47init_35builtin_63, makeNative(47, clofun0, 1, 0));
Obj x140663455354983 = primSet(co, symcora_47init_35parse, makeNative(16, clofun0, 4, 0));
Obj x140663455366471 = makeCons(symappend, Nil);
Obj x140663455366503 = makeCons(symfilter, x140663455366471);
Obj x140663455366535 = makeCons(symlength, x140663455366503);
Obj x140663455366567 = makeCons(symelem_63, x140663455366535);
Obj x140663455366599 = makeCons(symmacroexpand, x140663455366567);
Obj x140663455366631 = makeCons(symmap, x140663455366599);
Obj x140663455366663 = makeCons(symreverse, x140663455366631);
Obj x140663455366695 = makeCons(symthrow, x140663455366663);
Obj x140663455366727 = makeCons(symtry, x140663455366695);
Obj x140663455366759 = makeCons(symload, x140663455366727);
Obj x140663455366791 = makeCons(symimport, x140663455366759);
Obj x140663455366823 = makeCons(symload_45so, x140663455366791);
Obj x140663455366855 = makeCons(symapply, x140663455366823);
Obj x140663455366887 = makeCons(symvalue_45or, x140663455366855);
Obj x140663455366919 = makeCons(symvalue, x140663455366887);
Obj x140663455366951 = makeCons(symread_45file_45as_45sexp, x140663455366919);
Obj x140663455366983 = makeCons(symbytes_45length, x140663455366951);
Obj x140663455367015 = makeCons(symbytes, x140663455366983);
Obj x140663455367047 = makeCons(symvector_45length, x140663455367015);
Obj x140663455367079 = makeCons(symvector_45ref, x140663455367047);
Obj x140663455367111 = makeCons(symvector_45set_33, x140663455367079);
Obj x140663455367143 = makeCons(symvector, x140663455367111);
Obj x140663455371271 = makeCons(symsymbol_45_62string, x140663455367143);
Obj x140663455371303 = makeCons(symintern, x140663455371271);
Obj x140663455371335 = makeCons(symstring_45append, x140663455371303);
Obj x140663455371367 = makeCons(symnull_63, x140663455371335);
Obj x140663455371399 = makeCons(symnumber_63, x140663455371367);
Obj x140663455371431 = makeCons(symboolean_63, x140663455371399);
Obj x140663455371463 = makeCons(symatom_63, x140663455371431);
Obj x140663455371495 = makeCons(sympair_63, x140663455371463);
Obj x140663455371527 = makeCons(symcdddr, x140663455371495);
Obj x140663455371559 = makeCons(symcadddr, x140663455371527);
Obj x140663455371591 = makeCons(symcaddr, x140663455371559);
Obj x140663455371623 = makeCons(symcddr, x140663455371591);
Obj x140663455371655 = makeCons(symcdar, x140663455371623);
Obj x140663455371687 = makeCons(symcaar, x140663455371655);
Obj x140663455371719 = makeCons(symcadr, x140663455371687);
Obj x140663455371751 = primSet(co, symcora_47init_35_42ns_45export_42, x140663455371719);
Obj x140663455372039 = primSet(co, symcora_47init_35cadr, globalRef(symcadr));
Obj x140663455372327 = primSet(co, symcora_47init_35caar, globalRef(symcaar));
Obj x140663455372615 = primSet(co, symcora_47init_35cdar, globalRef(symcdar));
Obj x140663455372903 = primSet(co, symcora_47init_35cddr, globalRef(symcddr));
Obj x140663455373191 = primSet(co, symcora_47init_35caddr, globalRef(symcaddr));
Obj x140663455373479 = primSet(co, symcora_47init_35cadddr, globalRef(symcadddr));
Obj x140663455373767 = primSet(co, symcora_47init_35cdddr, globalRef(symcdddr));
Obj x140663455374055 = primSet(co, symcora_47init_35pair_63, globalRef(sympair_63));
Obj x140663455374343 = primSet(co, symcora_47init_35atom_63, globalRef(symatom_63));
Obj x140663455374631 = primSet(co, symcora_47init_35boolean_63, globalRef(symboolean_63));
Obj x140663455374919 = primSet(co, symcora_47init_35null_63, globalRef(symnull_63));
Obj x140663455375207 = primSet(co, symcora_47init_35number_63, globalRef(symnumber_63));
Obj x140663455379591 = primSet(co, symcora_47init_35string_45append, globalRef(symstring_45append));
Obj x140663455379879 = primSet(co, symcora_47init_35intern, globalRef(symintern));
Obj x140663455380167 = primSet(co, symcora_47init_35symbol_45_62string, globalRef(symsymbol_45_62string));
Obj x140663455380455 = primSet(co, symcora_47init_35vector, globalRef(symvector));
Obj x140663455380743 = primSet(co, symcora_47init_35vector_45set_33, globalRef(symvector_45set_33));
Obj x140663455381031 = primSet(co, symcora_47init_35vector_45ref, globalRef(symvector_45ref));
Obj x140663455381319 = primSet(co, symcora_47init_35vector_45length, globalRef(symvector_45length));
Obj x140663455381607 = primSet(co, symcora_47init_35bytes, globalRef(symbytes));
Obj x140663455381895 = primSet(co, symcora_47init_35bytes_45length, globalRef(symbytes_45length));
Obj x140663455382183 = primSet(co, symcora_47init_35value, globalRef(symvalue));
Obj x140663455382471 = primSet(co, symcora_47init_35value_45or, globalRef(symvalue_45or));
Obj x140663455382759 = primSet(co, symcora_47init_35read_45file_45as_45sexp, globalRef(symread_45file_45as_45sexp));
Obj x140663455383047 = primSet(co, symcora_47init_35apply, globalRef(symapply));
Obj x140663455383335 = primSet(co, symcora_47init_35load, globalRef(symload));
Obj x140663455387719 = primSet(co, symcora_47init_35load_45so, globalRef(symload_45so));
Obj x140663455388007 = primSet(co, symcora_47init_35import, globalRef(symimport));
Obj x140663455388295 = primSet(co, symcora_47init_35try, globalRef(symtry));
Obj x140663455388583 = primSet(co, symcora_47init_35throw, globalRef(symthrow));
Obj x140663455388871 = primSet(co, symcora_47init_35reverse, globalRef(symreverse));
Obj x140663455389159 = primSet(co, symcora_47init_35map, globalRef(symmap));
Obj x140663455389447 = primSet(co, symcora_47init_35macroexpand, globalRef(symmacroexpand));
Obj x140663455389735 = primSet(co, symcora_47init_35elem_63, globalRef(symelem_63));
Obj x140663455390023 = primSet(co, symcora_47init_35length, globalRef(symlength));
Obj x140663455390311 = primSet(co, symcora_47init_35filter, globalRef(symfilter));
Obj x140663455390599 = primSet(co, symcora_47init_35append, globalRef(symappend));
Obj x140663455390823 = primSet(co, symcora_47init_35assq, globalRef(symassq));
__nargs = 2;
__arg1 = x140663455390823;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x140663453912167 = __arg1;
Obj x140663453912199 = __arg2;
Obj x140663453912263 = __arg3;
Obj x140663453912295 = co->args[4];
Obj x140663453907239 = makeNative(20, clofun0, 0, 4, x140663453912167, x140663453912199, x140663453912263, x140663453912295);
Obj __ = x140663453912167;
__ = x140663453912199;
__ = x140663453912263;
Obj x = x140663453912295;
pushCont(co, 17, clofun0, 2, x, x140663453907239);
__nargs = 2;
__arg0 = globalRef(symnumber_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140663453285063 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453907239= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140663453285063) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453907239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj x140663453285543 = primIsString(x);
if (True == x140663453285543) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453907239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 18, clofun0, 2, x, x140663453907239);
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

label18:
{
Obj x140663453285959 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453907239= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140663453285959) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453907239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 19, clofun0, 2, x, x140663453907239);
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

label19:
{
Obj x140663453286375 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453907239= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140663453286375) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453907239;
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
__arg0 = x140663453907239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label20:
{
Obj x140663453882119 = makeNative(21, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj __ = closureRef(co, 0);
__ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj x140663453332839 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140663453332839) {
Obj x140663453333383 = PRIM_CAR(closureRef(co, 3));
Obj x140663453333415 = PRIM_EQ(symquote, x140663453333383);
if (True == x140663453333415) {
Obj x140663453333831 = PRIM_CDR(closureRef(co, 3));
Obj x140663453333863 = PRIM_ISCONS(x140663453333831);
if (True == x140663453333863) {
Obj x140663453334439 = PRIM_CDR(closureRef(co, 3));
Obj x140663453334471 = PRIM_CAR(x140663453334439);
Obj x = x140663453334471;
Obj x140663453335175 = PRIM_CDR(closureRef(co, 3));
Obj x140663453335207 = PRIM_CDR(x140663453335175);
Obj x140663453335239 = PRIM_EQ(Nil, x140663453335207);
if (True == x140663453335239) {
Obj x140663453283751 = makeCons(x, Nil);
Obj x140663453283783 = makeCons(symquote, x140663453283751);
__nargs = 2;
__arg1 = x140663453283783;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453882119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453882119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453882119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453882119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj x140663453791815 = makeNative(24, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x = closureRef(co, 3);
Obj x140663453384231 = primIsSymbol(x);
if (True == x140663453384231) {
pushCont(co, 22, clofun0, 3, x, ns, import);
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
__arg0 = x140663453791815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj x140663453331527 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140663453331527) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 23, clofun0, 3, x, ns, import);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35builtin_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj x140663453331815 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140663453331815) {
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

label24:
{
Obj x140663453743079 = makeNative(27, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140663453454375 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140663453454375) {
Obj x140663453454919 = PRIM_CAR(closureRef(co, 3));
Obj x140663453454951 = PRIM_EQ(symlambda, x140663453454919);
if (True == x140663453454951) {
Obj x140663453455591 = PRIM_CDR(closureRef(co, 3));
Obj x140663453455719 = PRIM_ISCONS(x140663453455591);
if (True == x140663453455719) {
Obj x140663453456199 = PRIM_CDR(closureRef(co, 3));
Obj x140663453456231 = PRIM_CAR(x140663453456199);
Obj args = x140663453456231;
Obj x140663453456999 = PRIM_CDR(closureRef(co, 3));
Obj x140663453457031 = PRIM_CDR(x140663453456999);
Obj x140663453457063 = PRIM_ISCONS(x140663453457031);
if (True == x140663453457063) {
Obj x140663453457863 = PRIM_CDR(closureRef(co, 3));
Obj x140663453457895 = PRIM_CDR(x140663453457863);
Obj x140663453457927 = PRIM_CAR(x140663453457895);
Obj body = x140663453457927;
Obj x140663453380999 = PRIM_CDR(closureRef(co, 3));
Obj x140663453381031 = PRIM_CDR(x140663453380999);
Obj x140663453381063 = PRIM_CDR(x140663453381031);
Obj x140663453381095 = PRIM_EQ(Nil, x140663453381063);
if (True == x140663453381095) {
pushCont(co, 25, clofun0, 4, ns, import, body, args);
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
__arg0 = x140663453743079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453743079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453743079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453743079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453743079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj x140663453382407 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 26, clofun0, 1, args);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = x140663453382407;
__arg2 = ns;
__arg3 = import;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140663453382535 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453382599 = makeCons(x140663453382535, Nil);
Obj x140663453382631 = makeCons(args, x140663453382599);
Obj x140663453382663 = makeCons(symlambda, x140663453382631);
__nargs = 2;
__arg1 = x140663453382663;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj x140663453947367 = makeNative(30, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140663453882631 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140663453882631) {
Obj x140663453883463 = PRIM_CAR(closureRef(co, 3));
Obj x140663453883495 = PRIM_EQ(symdo, x140663453883463);
if (True == x140663453883495) {
Obj x140663453884263 = PRIM_CDR(closureRef(co, 3));
Obj x140663453884295 = PRIM_ISCONS(x140663453884263);
if (True == x140663453884295) {
Obj x140663453791047 = PRIM_CDR(closureRef(co, 3));
Obj x140663453791079 = PRIM_CAR(x140663453791047);
Obj x140663453791143 = PRIM_ISCONS(x140663453791079);
if (True == x140663453791143) {
Obj x140663453792583 = PRIM_CDR(closureRef(co, 3));
Obj x140663453792615 = PRIM_CAR(x140663453792583);
Obj x140663453792647 = PRIM_CAR(x140663453792615);
Obj x140663453792711 = PRIM_EQ(symimport, x140663453792647);
if (True == x140663453792711) {
Obj x140663453793927 = PRIM_CDR(closureRef(co, 3));
Obj x140663453793959 = PRIM_CAR(x140663453793927);
Obj x140663453793991 = PRIM_CDR(x140663453793959);
Obj x140663453794023 = PRIM_ISCONS(x140663453793991);
if (True == x140663453794023) {
Obj x140663453742055 = PRIM_CDR(closureRef(co, 3));
Obj x140663453742183 = PRIM_CAR(x140663453742055);
Obj x140663453742215 = PRIM_CDR(x140663453742183);
Obj x140663453742247 = PRIM_CAR(x140663453742215);
Obj pkg = x140663453742247;
Obj x140663453744711 = PRIM_CDR(closureRef(co, 3));
Obj x140663453744967 = PRIM_CAR(x140663453744711);
Obj x140663453744999 = PRIM_CDR(x140663453744967);
Obj x140663453745031 = PRIM_CDR(x140663453744999);
Obj x140663453745063 = PRIM_EQ(Nil, x140663453745031);
if (True == x140663453745063) {
Obj x140663453668007 = PRIM_CDR(closureRef(co, 3));
Obj x140663453668039 = PRIM_CDR(x140663453668007);
Obj x140663453668071 = PRIM_ISCONS(x140663453668039);
if (True == x140663453668071) {
Obj x140663453668871 = PRIM_CDR(closureRef(co, 3));
Obj x140663453668903 = PRIM_CDR(x140663453668871);
Obj x140663453668935 = PRIM_CAR(x140663453668903);
Obj y = x140663453668935;
Obj x140663453669895 = PRIM_CDR(closureRef(co, 3));
Obj x140663453669927 = PRIM_CDR(x140663453669895);
Obj x140663453669959 = PRIM_CDR(x140663453669927);
Obj x140663453669991 = PRIM_EQ(Nil, x140663453669959);
if (True == x140663453669991) {
Obj x140663453670311 = primIsString(pkg);
if (True == x140663453670311) {
Obj x140663453639015 = makeCons(pkg, Nil);
Obj x140663453639047 = makeCons(symimport, x140663453639015);
pushCont(co, 28, clofun0, 5, pkg, import, env, ns, y);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = x140663453639047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140663453947367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453947367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453947367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453947367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453947367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453947367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453947367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453947367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453947367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453947367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj x140663453639079 = __arg1;
Obj pkg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140663453639911 = makeCons(pkg, import);
pushCont(co, 29, clofun0, 1, x140663453639079);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = x140663453639911;
co->args[4] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x140663453640295 = __arg1;
Obj x140663453639079= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453640359 = makeCons(x140663453640295, Nil);
Obj x140663453640391 = makeCons(x140663453639079, x140663453640359);
Obj x140663453640423 = makeCons(symdo, x140663453640391);
__nargs = 2;
__arg1 = x140663453640423;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x140663453911879 = makeNative(37, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140663453911367 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140663453911367) {
Obj x140663453911751 = PRIM_CAR(closureRef(co, 3));
Obj op = x140663453911751;
Obj x140663453912647 = PRIM_CDR(closureRef(co, 3));
Obj args = x140663453912647;
Obj x140663453905255 = PRIM_EQ(op, symif);
if (True == x140663453905255) {
if (True == True) {
pushCont(co, 35, clofun0, 2, args, op);
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
__arg0 = x140663453911879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj x140663453907463 = PRIM_EQ(op, symdo);
if (True == x140663453907463) {
if (True == True) {
pushCont(co, 33, clofun0, 2, args, op);
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
__arg0 = x140663453911879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 31, clofun0, 2, args, op);
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
__arg0 = x140663453911879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 1;
__arg0 = x140663453911879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj x140663453881191 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 32, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140663453881191;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140663453881351 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453881479 = makeCons(op, x140663453881351);
__nargs = 2;
__arg1 = x140663453881479;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label33:
{
Obj x140663453908519 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 34, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140663453908519;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140663453908583 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453908615 = makeCons(op, x140663453908583);
__nargs = 2;
__arg1 = x140663453908615;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj x140663453906215 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 36, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140663453906215;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140663453906599 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453906791 = makeCons(op, x140663453906599);
__nargs = 2;
__arg1 = x140663453906791;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj x140663453908167 = makeNative(40, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140663454541703 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140663454541703) {
Obj x140663454542503 = PRIM_CAR(closureRef(co, 3));
Obj x140663454542535 = PRIM_EQ(symlet, x140663454542503);
if (True == x140663454542535) {
Obj x140663454543335 = PRIM_CDR(closureRef(co, 3));
Obj x140663454543367 = PRIM_ISCONS(x140663454543335);
if (True == x140663454543367) {
Obj x140663454498983 = PRIM_CDR(closureRef(co, 3));
Obj x140663454499175 = PRIM_CAR(x140663454498983);
Obj a = x140663454499175;
Obj x140663454500135 = PRIM_CDR(closureRef(co, 3));
Obj x140663454500167 = PRIM_CDR(x140663454500135);
Obj x140663454500199 = PRIM_ISCONS(x140663454500167);
if (True == x140663454500199) {
Obj x140663454501447 = PRIM_CDR(closureRef(co, 3));
Obj x140663454501543 = PRIM_CDR(x140663454501447);
Obj x140663454501639 = PRIM_CAR(x140663454501543);
Obj b = x140663454501639;
Obj x140663454502823 = PRIM_CDR(closureRef(co, 3));
Obj x140663454502855 = PRIM_CDR(x140663454502823);
Obj x140663454502887 = PRIM_CDR(x140663454502855);
Obj x140663453986983 = PRIM_ISCONS(x140663454502887);
if (True == x140663453986983) {
Obj x140663453988967 = PRIM_CDR(closureRef(co, 3));
Obj x140663453988999 = PRIM_CDR(x140663453988967);
Obj x140663453989031 = PRIM_CDR(x140663453988999);
Obj x140663453989095 = PRIM_CAR(x140663453989031);
Obj c = x140663453989095;
Obj x140663453990887 = PRIM_CDR(closureRef(co, 3));
Obj x140663453946087 = PRIM_CDR(x140663453990887);
Obj x140663453946183 = PRIM_CDR(x140663453946087);
Obj x140663453946247 = PRIM_CDR(x140663453946183);
Obj x140663453946279 = PRIM_EQ(Nil, x140663453946247);
if (True == x140663453946279) {
pushCont(co, 38, clofun0, 5, env, ns, import, c, a);
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
__arg0 = x140663453908167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453908167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453908167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453908167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453908167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453908167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj x140663453948007 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140663453949255 = makeCons(a, env);
pushCont(co, 39, clofun0, 2, x140663453948007, a);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = x140663453949255;
__arg2 = ns;
__arg3 = import;
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140663453949543 = __arg1;
Obj x140663453948007= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663453949639 = makeCons(x140663453949543, Nil);
Obj x140663453949671 = makeCons(x140663453948007, x140663453949639);
Obj x140663453949703 = makeCons(a, x140663453949671);
Obj x140663453949735 = makeCons(symlet, x140663453949703);
__nargs = 2;
__arg1 = x140663453949735;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj x140663453790951 = makeNative(41, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj __ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj x140663454885063 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140663454885063) {
Obj x140663454885927 = PRIM_CAR(closureRef(co, 3));
Obj x140663454885959 = PRIM_EQ(symns, x140663454885927);
if (True == x140663454885959) {
Obj x140663454886887 = PRIM_CDR(closureRef(co, 3));
Obj x140663454886951 = PRIM_ISCONS(x140663454886887);
if (True == x140663454886951) {
Obj x140663454887719 = PRIM_CDR(closureRef(co, 3));
Obj x140663454887783 = PRIM_CAR(x140663454887719);
Obj path = x140663454887783;
Obj x140663454602023 = PRIM_CDR(closureRef(co, 3));
Obj x140663454602183 = PRIM_CDR(x140663454602023);
Obj x140663454602343 = PRIM_ISCONS(x140663454602183);
if (True == x140663454602343) {
Obj x140663454603303 = PRIM_CDR(closureRef(co, 3));
Obj x140663454603527 = PRIM_CDR(x140663454603303);
Obj x140663454603559 = PRIM_CAR(x140663454603527);
Obj import = x140663454603559;
Obj x140663454604711 = PRIM_CDR(closureRef(co, 3));
Obj x140663454604743 = PRIM_CDR(x140663454604711);
Obj x140663454604775 = PRIM_CDR(x140663454604743);
Obj x140663454604807 = PRIM_ISCONS(x140663454604775);
if (True == x140663454604807) {
Obj x140663454581895 = PRIM_CDR(closureRef(co, 3));
Obj x140663454581927 = PRIM_CDR(x140663454581895);
Obj x140663454582055 = PRIM_CDR(x140663454581927);
Obj x140663454582087 = PRIM_CAR(x140663454582055);
Obj body = x140663454582087;
Obj x140663454583591 = PRIM_CDR(closureRef(co, 3));
Obj x140663454583623 = PRIM_CDR(x140663454583591);
Obj x140663454583655 = PRIM_CDR(x140663454583623);
Obj x140663454583687 = PRIM_CDR(x140663454583655);
Obj x140663454583719 = PRIM_EQ(Nil, x140663454583687);
if (True == x140663454583719) {
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
__arg0 = x140663453790951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453790951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453790951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453790951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453790951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453790951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj x140663453743591 = makeNative(44, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140663454948231 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140663454948231) {
Obj x140663454949319 = PRIM_CAR(closureRef(co, 3));
Obj x140663454949351 = PRIM_EQ(symdef, x140663454949319);
if (True == x140663454949351) {
Obj x140663454917383 = PRIM_CDR(closureRef(co, 3));
Obj x140663454917415 = PRIM_ISCONS(x140663454917383);
if (True == x140663454917415) {
Obj x140663454917991 = PRIM_CDR(closureRef(co, 3));
Obj x140663454918023 = PRIM_CAR(x140663454917991);
Obj var = x140663454918023;
Obj x140663454919175 = PRIM_CDR(closureRef(co, 3));
Obj x140663454919207 = PRIM_CDR(x140663454919175);
Obj x140663454919239 = PRIM_ISCONS(x140663454919207);
if (True == x140663454919239) {
Obj x140663454920167 = PRIM_CDR(closureRef(co, 3));
Obj x140663454920199 = PRIM_CDR(x140663454920167);
Obj x140663454920231 = PRIM_CAR(x140663454920199);
Obj val = x140663454920231;
Obj x140663454896967 = PRIM_CDR(closureRef(co, 3));
Obj x140663454896999 = PRIM_CDR(x140663454896967);
Obj x140663454897031 = PRIM_CDR(x140663454896999);
Obj x140663454897063 = PRIM_EQ(Nil, x140663454897031);
if (True == x140663454897063) {
pushCont(co, 42, clofun0, 4, env, ns, import, val);
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
__arg0 = x140663453743591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453743591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453743591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453743591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453743591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj x140663454897543 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj var1 = x140663454897543;
Obj x140663454898823 = makeCons(var1, Nil);
Obj x140663454898951 = makeCons(symquote, x140663454898823);
pushCont(co, 43, clofun0, 1, x140663454898951);
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

label43:
{
Obj x140663454899559 = __arg1;
Obj x140663454898951= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663454899623 = makeCons(x140663454899559, Nil);
Obj x140663454899751 = makeCons(x140663454898951, x140663454899623);
Obj x140663454899815 = makeCons(symset, x140663454899751);
__nargs = 2;
__arg1 = x140663454899815;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label44:
{
Obj x140663453671047 = makeNative(46, clofun0, 0, 0);
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj ls = closureRef(co, 3);
pushCont(co, 45, clofun0, 1, ls);
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

label45:
{
Obj x140663454947751 = __arg1;
Obj ls= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140663454947751;
__arg2 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
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

label47:
{
Obj x = __arg1;
PUSH_CONT_0(co, 48, clofun0);
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

label48:
{
Obj x140663454976039 = __arg1;
PUSH_CONT_0(co, 49, clofun0);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140663454976039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140663454976071 = __arg1;
Obj x140663454976103 = primNot(x140663454976071);
__nargs = 2;
__arg1 = x140663454976103;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
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
Obj x140663453987303 = __arg1;
Obj x140663453987335 = __arg2;
Obj x140663453989223 = makeNative(1, clofun1, 0, 2, x140663453987303, x140663453987335);
Obj var = x140663453987303;
Obj x140663454974439 = PRIM_EQ(Nil, x140663453987335);
if (True == x140663454974439) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453989223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj x140663453990503 = makeNative(2, clofun1, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj x140663455149927 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140663455149927) {
Obj x140663455138151 = PRIM_CAR(closureRef(co, 1));
Obj x140663455138183 = PRIM_ISCONS(x140663455138151);
if (True == x140663455138183) {
Obj x140663455138599 = PRIM_CAR(closureRef(co, 1));
Obj x140663455138631 = PRIM_CAR(x140663455138599);
Obj x = x140663455138631;
Obj x140663455139143 = PRIM_CAR(closureRef(co, 1));
Obj x140663455139175 = PRIM_CDR(x140663455139143);
Obj y = x140663455139175;
Obj x140663455139431 = PRIM_CDR(closureRef(co, 1));
Obj __ = x140663455139431;
Obj x140663455139719 = PRIM_EQ(var, x);
if (True == x140663455139719) {
Obj x140663455140039 = makeCons(x, y);
__nargs = 2;
__arg1 = x140663455140039;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453990503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453990503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453990503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj x140663453949063 = makeNative(3, clofun1, 0, 0);
Obj var = closureRef(co, 0);
Obj x140663455148679 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140663455148679) {
Obj x140663455148935 = PRIM_CAR(closureRef(co, 1));
Obj __ = x140663455148935;
Obj x140663455149191 = PRIM_CDR(closureRef(co, 1));
Obj y = x140663455149191;
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
__arg0 = x140663453949063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
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

label4:
{
Obj x140663453881255 = __arg1;
Obj x140663453881287 = __arg2;
Obj x140663453881319 = __arg3;
Obj x140663453883655 = makeNative(5, clofun1, 0, 3, x140663453881255, x140663453881287, x140663453881319);
Obj s = x140663453881255;
Obj ns = x140663453881287;
Obj x140663455146343 = PRIM_EQ(Nil, x140663453881319);
if (True == x140663455146343) {
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
__arg0 = x140663453883655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj x140663453791399 = makeNative(13, clofun1, 0, 0);
Obj s = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj x140663455163751 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140663455163751) {
Obj x140663455164007 = PRIM_CAR(closureRef(co, 2));
Obj import = x140663455164007;
Obj x140663455164263 = PRIM_CDR(closureRef(co, 2));
Obj more = x140663455164263;
pushCont(co, 6, clofun1, 4, import, s, ns, more);
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
__arg0 = x140663453791399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x140663455164871 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 7, clofun1, 4, import, s, ns, more);
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140663455164871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140663455164903 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 8, clofun1, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(symvalue_45or);
__arg1 = x140663455164903;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140663455164967 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj export = x140663455164967;
pushCont(co, 9, clofun1, 4, import, s, ns, more);
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

label9:
{
Obj x140663455165255 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140663455165255) {
pushCont(co, 10, clofun1, 1, import);
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

label10:
{
Obj x140663455165991 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 11, clofun1, 1, import);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = makeCString("#");
__arg2 = x140663455165991;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140663455166023 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 12, clofun1);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = import;
__arg2 = x140663455166023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140663455166055 = __arg1;
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140663455166055;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
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

label14:
{
Obj var = __arg1;
Obj ns = __arg2;
Obj x140663455198407 = PRIM_EQ(ns, makeCString(""));
if (True == x140663455198407) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 15, clofun1, 2, var, ns);
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

label15:
{
Obj x140663455198663 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140663455198663) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 16, clofun1, 1, ns);
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

label16:
{
Obj x140663455162535 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 17, clofun1, 1, ns);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = makeCString("#");
__arg2 = x140663455162535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140663455162567 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 18, clofun1);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = ns;
__arg2 = x140663455162567;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140663455162599 = __arg1;
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140663455162599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj sexp = __arg1;
pushCont(co, 20, clofun1, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140663453334631 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = x140663453334631;
pushCont(co, 21, clofun1, 1, path);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140663453335111 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 22, clofun1, 1, path);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35parse_45package);
__arg1 = x140663453335111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140663453335143 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = x140663453335143;
__arg1 = makeNative(23, clofun1, 3, 1, path);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj import = __arg1;
Obj export = __arg2;
Obj body = __arg3;
Obj x140663453286311 = makeCons(makeCString("cora/init"), import);
pushCont(co, 24, clofun1, 3, export, body, x140663453286311);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = makeNative(26, clofun1, 1, 0);
__arg2 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140663455196167 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663453286311= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140663455197319 = makeCons(export, Nil);
Obj x140663455197351 = makeCons(symbackquote, x140663455197319);
Obj x140663455197415 = makeCons(x140663455197351, Nil);
Obj x140663455197447 = makeCons(sym_42ns_45export_42, x140663455197415);
Obj x140663455197479 = makeCons(symdef, x140663455197447);
Obj x140663455197543 = makeCons(x140663455197479, body);
pushCont(co, 25, clofun1, 1, x140663453286311);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = x140663455196167;
__arg2 = x140663455197543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140663455197575 = __arg1;
Obj x140663453286311= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663455197607 = makeCons(symbegin, x140663455197575);
Obj x140663455197671 = makeCons(x140663455197607, Nil);
Obj x140663455197703 = makeCons(x140663453286311, x140663455197671);
Obj x140663455197735 = makeCons(closureRef(co, 0), x140663455197703);
Obj x140663455197767 = makeCons(symns, x140663455197735);
__nargs = 2;
__arg1 = x140663455197767;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj imp = __arg1;
Obj x140663455196071 = makeCons(imp, Nil);
Obj x140663455196103 = makeCons(symimport, x140663455196071);
__nargs = 2;
__arg1 = x140663455196103;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
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

label28:
{
Obj x140663453987559 = __arg1;
Obj x140663453987591 = __arg2;
Obj x140663453987655 = __arg3;
Obj x140663453987687 = co->args[4];
Obj x140663453945895 = makeNative(29, clofun1, 0, 4, x140663453987559, x140663453987591, x140663453987655, x140663453987687);
Obj x140663453380871 = PRIM_ISCONS(x140663453987559);
if (True == x140663453380871) {
Obj x140663453381351 = PRIM_CAR(x140663453987559);
Obj x140663453381383 = PRIM_ISCONS(x140663453381351);
if (True == x140663453381383) {
Obj x140663453382055 = PRIM_CAR(x140663453987559);
Obj x140663453382087 = PRIM_CAR(x140663453382055);
Obj x140663453382119 = PRIM_EQ(symimport, x140663453382087);
if (True == x140663453382119) {
Obj x140663453382791 = PRIM_CAR(x140663453987559);
Obj x140663453382823 = PRIM_CDR(x140663453382791);
Obj x140663453382855 = PRIM_ISCONS(x140663453382823);
if (True == x140663453382855) {
Obj x140663453383527 = PRIM_CAR(x140663453987559);
Obj x140663453383559 = PRIM_CDR(x140663453383527);
Obj x140663453383591 = PRIM_CAR(x140663453383559);
Obj lib = x140663453383591;
Obj x140663453384487 = PRIM_CAR(x140663453987559);
Obj x140663453384519 = PRIM_CDR(x140663453384487);
Obj x140663453384679 = PRIM_CDR(x140663453384519);
Obj x140663453331463 = PRIM_EQ(Nil, x140663453384679);
if (True == x140663453331463) {
Obj x140663453331719 = PRIM_CDR(x140663453987559);
Obj rest = x140663453331719;
Obj imports = x140663453987591;
Obj exports = x140663453987655;
Obj k = x140663453987687;
Obj x140663453332487 = makeCons(lib, imports);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45package_45h);
__arg1 = rest;
__arg2 = x140663453332487;
__arg3 = exports;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140663453945895;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453945895;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453945895;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453945895;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453945895;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140663453909863 = makeNative(30, clofun1, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140663453455367 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663453455367) {
Obj x140663453455879 = PRIM_CAR(closureRef(co, 0));
Obj x140663453455911 = PRIM_ISCONS(x140663453455879);
if (True == x140663453455911) {
Obj x140663453456615 = PRIM_CAR(closureRef(co, 0));
Obj x140663453456647 = PRIM_CAR(x140663453456615);
Obj x140663453456679 = PRIM_EQ(symexport, x140663453456647);
if (True == x140663453456679) {
Obj x140663453457095 = PRIM_CAR(closureRef(co, 0));
Obj x140663453457159 = PRIM_CDR(x140663453457095);
Obj more = x140663453457159;
Obj x140663453457511 = PRIM_CDR(closureRef(co, 0));
Obj rest = x140663453457511;
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
__arg0 = x140663453909863;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453909863;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453909863;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj x140663453906247 = makeNative(32, clofun1, 0, 0);
Obj body = closureRef(co, 0);
Obj imports = closureRef(co, 1);
Obj exports = closureRef(co, 2);
Obj k = closureRef(co, 3);
pushCont(co, 31, clofun1, 3, k, exports, body);
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = imports;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140663453454855 = __arg1;
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exports= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 4;
__arg0 = k;
__arg1 = x140663453454855;
__arg2 = exports;
__arg3 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
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

label33:
{
Obj exp = __arg1;
pushCont(co, 34, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140663453641095 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 35, clofun1, 1, x140663453641095);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140663453641383 = __arg1;
Obj x140663453641095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rewrite_45fold_45apply);
__arg1 = x140663453641095;
__arg2 = x140663453641383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj fn = __arg1;
Obj arglist = __arg2;
pushCont(co, 37, clofun1, 2, arglist, fn);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = arglist;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140663453670055 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 38, clofun1, 2, arglist, fn);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140663453670055;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140663453670087 = __arg1;
Obj arglist= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140663453670087) {
Obj x140663453670631 = PRIM_CAR(arglist);
pushCont(co, 40, clofun1, 2, x140663453670631, fn);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = arglist;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140663453639207 = PRIM_CAR(arglist);
Obj x140663453639943 = PRIM_CDR(arglist);
pushCont(co, 39, clofun1, 2, x140663453639207, fn);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rewrite_45fold_45apply);
__arg1 = fn;
__arg2 = x140663453639943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140663453639975 = __arg1;
Obj x140663453639207= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663453640039 = makeCons(x140663453639975, Nil);
Obj x140663453640071 = makeCons(x140663453639207, x140663453640039);
Obj x140663453640103 = makeCons(fn, x140663453640071);
__nargs = 2;
__arg1 = x140663453640103;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj x140663453671239 = __arg1;
Obj x140663453670631= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663453671303 = makeCons(x140663453671239, Nil);
Obj x140663453671367 = makeCons(x140663453670631, x140663453671303);
Obj x140663453671399 = makeCons(fn, x140663453671367);
__nargs = 2;
__arg1 = x140663453671399;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj exp = __arg1;
PUSH_CONT_0(co, 42, clofun1);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140663453669159 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45backquote);
__arg1 = x140663453669159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140663453948327 = __arg1;
Obj x140663453949191 = makeNative(44, clofun1, 0, 1, x140663453948327);
Obj x = x140663453948327;
Obj x140663453667687 = primIsSymbol(x);
if (True == x140663453667687) {
Obj x140663453668167 = makeCons(x, Nil);
Obj x140663453668199 = makeCons(symquote, x140663453668167);
__nargs = 2;
__arg1 = x140663453668199;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453949191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj x140663453909127 = makeNative(45, clofun1, 0, 1, closureRef(co, 0));
Obj x140663453793607 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663453793607) {
Obj x140663453794279 = PRIM_CAR(closureRef(co, 0));
Obj x140663453741063 = PRIM_EQ(symunquote, x140663453794279);
if (True == x140663453741063) {
Obj x140663453741735 = PRIM_CDR(closureRef(co, 0));
Obj x140663453741767 = PRIM_ISCONS(x140663453741735);
if (True == x140663453741767) {
Obj x140663453742279 = PRIM_CDR(closureRef(co, 0));
Obj x140663453742535 = PRIM_CAR(x140663453742279);
Obj x = x140663453742535;
Obj x140663453743559 = PRIM_CDR(closureRef(co, 0));
Obj x140663453743623 = PRIM_CDR(x140663453743559);
Obj x140663453743655 = PRIM_EQ(Nil, x140663453743623);
if (True == x140663453743655) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453909127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453909127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453909127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453909127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj x140663453910567 = makeNative(47, clofun1, 0, 1, closureRef(co, 0));
Obj x140663453791111 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663453791111) {
Obj x140663453791367 = PRIM_CAR(closureRef(co, 0));
Obj x = x140663453791367;
Obj x140663453792071 = PRIM_CDR(closureRef(co, 0));
Obj more = x140663453792071;
Obj x140663453792871 = makeCons(x, more);
PUSH_CONT_0(co, 46, clofun1);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35rewrite_45backquote);
__arg2 = x140663453792871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140663453910567;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj x140663453792903 = __arg1;
Obj x140663453792935 = makeCons(symlist, x140663453792903);
__nargs = 2;
__arg1 = x140663453792935;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label47:
{
Obj x140663453912359 = makeNative(48, clofun1, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label48:
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

label49:
{
Obj exp = __arg1;
Obj x140663453883207 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45begin);
__arg1 = x140663453883207;
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
Obj x140663453987175 = __arg1;
Obj x140663453988103 = makeNative(1, clofun2, 0, 1, x140663453987175);
Obj x140663453880327 = PRIM_ISCONS(x140663453987175);
if (True == x140663453880327) {
Obj x140663453880807 = PRIM_CAR(x140663453987175);
Obj x = x140663453880807;
Obj x140663453881575 = PRIM_CDR(x140663453987175);
Obj x140663453881607 = PRIM_EQ(Nil, x140663453881575);
if (True == x140663453881607) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453988103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453988103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj x140663453989319 = makeNative(2, clofun2, 0, 1, closureRef(co, 0));
Obj x140663453911687 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663453911687) {
Obj x140663453912007 = PRIM_CAR(closureRef(co, 0));
Obj x = x140663453912007;
Obj x140663453905159 = PRIM_CDR(closureRef(co, 0));
Obj x140663453905191 = PRIM_ISCONS(x140663453905159);
if (True == x140663453905191) {
Obj x140663453905639 = PRIM_CDR(closureRef(co, 0));
Obj x140663453905671 = PRIM_CAR(x140663453905639);
Obj y = x140663453905671;
Obj x140663453907015 = PRIM_CDR(closureRef(co, 0));
Obj x140663453907047 = PRIM_CDR(x140663453907015);
Obj x140663453907079 = PRIM_EQ(Nil, x140663453907047);
if (True == x140663453907079) {
Obj x140663453908007 = makeCons(y, Nil);
Obj x140663453908039 = makeCons(x, x140663453908007);
Obj x140663453908071 = makeCons(symdo, x140663453908039);
__nargs = 2;
__arg1 = x140663453908071;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453989319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453989319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453989319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj x140663453946375 = makeNative(4, clofun2, 0, 0);
Obj x140663453949607 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663453949607) {
Obj x140663453949863 = PRIM_CAR(closureRef(co, 0));
Obj x = x140663453949863;
Obj x140663453909447 = PRIM_CDR(closureRef(co, 0));
Obj y = x140663453909447;
pushCont(co, 3, clofun2, 1, x);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45begin);
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140663453946375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj x140663453910759 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453910887 = makeCons(x140663453910759, Nil);
Obj x140663453911175 = makeCons(x, x140663453910887);
Obj x140663453911207 = makeCons(symdo, x140663453911175);
__nargs = 2;
__arg1 = x140663453911207;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
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

label5:
{
Obj exp = __arg1;
PUSH_CONT_0(co, 6, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140663453946983 = __arg1;
PUSH_CONT_0(co, 7, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45namespace);
__arg1 = x140663453946983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140663453947079 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x140663453947079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
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

label9:
{
Obj x140663453987463 = __arg1;
Obj x140663453988359 = makeNative(10, clofun2, 0, 1, x140663453987463);
Obj x140663454500007 = PRIM_ISCONS(x140663453987463);
if (True == x140663454500007) {
Obj x140663454500743 = PRIM_CAR(x140663453987463);
Obj x140663454500775 = PRIM_EQ(symquote, x140663454500743);
if (True == x140663454500775) {
Obj x140663454501575 = PRIM_CDR(x140663453987463);
Obj x140663454501607 = PRIM_ISCONS(x140663454501575);
if (True == x140663454501607) {
Obj x140663454502311 = PRIM_CDR(x140663453987463);
Obj x140663454502375 = PRIM_CAR(x140663454502311);
Obj x = x140663454502375;
Obj x140663453987399 = PRIM_CDR(x140663453987463);
Obj x140663453987495 = PRIM_CDR(x140663453987399);
Obj x140663453987527 = PRIM_EQ(Nil, x140663453987495);
if (True == x140663453987527) {
Obj x140663453988391 = makeCons(x, Nil);
Obj x140663453988423 = makeCons(symquote, x140663453988391);
__nargs = 2;
__arg1 = x140663453988423;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453988359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453988359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453988359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453988359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj x140663453989767 = makeNative(12, clofun2, 0, 1, closureRef(co, 0));
Obj x140663454583847 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663454583847) {
Obj x140663454584551 = PRIM_CAR(closureRef(co, 0));
Obj x140663454584583 = PRIM_EQ(symcons_63, x140663454584551);
if (True == x140663454584583) {
Obj x140663454540455 = PRIM_CDR(closureRef(co, 0));
Obj x140663454540487 = PRIM_ISCONS(x140663454540455);
if (True == x140663454540487) {
Obj x140663454541191 = PRIM_CDR(closureRef(co, 0));
Obj x140663454541255 = PRIM_CAR(x140663454541191);
Obj x = x140663454541255;
Obj x140663454542279 = PRIM_CDR(closureRef(co, 0));
Obj x140663454542311 = PRIM_CDR(x140663454542279);
Obj x140663454542343 = PRIM_EQ(Nil, x140663454542311);
if (True == x140663454542343) {
PUSH_CONT_0(co, 11, clofun2);
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
__arg0 = x140663453989767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453989767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453989767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453989767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj x140663454542663 = __arg1;
Obj x1 = x140663454542663;
Obj x140663454543559 = makeCons(x1, Nil);
Obj x140663454543591 = makeCons(symcons_63, x140663454543559);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140663454543591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140663453946151 = makeNative(14, clofun2, 0, 1, closureRef(co, 0));
Obj x140663454602503 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663454602503) {
Obj x140663454603175 = PRIM_CAR(closureRef(co, 0));
Obj x140663454603271 = PRIM_EQ(symcar, x140663454603175);
if (True == x140663454603271) {
Obj x140663454604007 = PRIM_CDR(closureRef(co, 0));
Obj x140663454604039 = PRIM_ISCONS(x140663454604007);
if (True == x140663454604039) {
Obj x140663454604519 = PRIM_CDR(closureRef(co, 0));
Obj x140663454604551 = PRIM_CAR(x140663454604519);
Obj x = x140663454604551;
Obj x140663454581223 = PRIM_CDR(closureRef(co, 0));
Obj x140663454581255 = PRIM_CDR(x140663454581223);
Obj x140663454581287 = PRIM_EQ(Nil, x140663454581255);
if (True == x140663454581287) {
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
__arg0 = x140663453946151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453946151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453946151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453946151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj x140663454581767 = __arg1;
Obj x1 = x140663454581767;
Obj x140663454582599 = makeCons(x1, Nil);
Obj x140663454582631 = makeCons(symcar, x140663454582599);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140663454582631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140663453947591 = makeNative(16, clofun2, 0, 1, closureRef(co, 0));
Obj x140663454899783 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663454899783) {
Obj x140663454883975 = PRIM_CAR(closureRef(co, 0));
Obj x140663454884039 = PRIM_EQ(symcdr, x140663454883975);
if (True == x140663454884039) {
Obj x140663454884551 = PRIM_CDR(closureRef(co, 0));
Obj x140663454884679 = PRIM_ISCONS(x140663454884551);
if (True == x140663454884679) {
Obj x140663454885351 = PRIM_CDR(closureRef(co, 0));
Obj x140663454885383 = PRIM_CAR(x140663454885351);
Obj x = x140663454885383;
Obj x140663454886215 = PRIM_CDR(closureRef(co, 0));
Obj x140663454886247 = PRIM_CDR(x140663454886215);
Obj x140663454886279 = PRIM_EQ(Nil, x140663454886247);
if (True == x140663454886279) {
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
__arg0 = x140663453947591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453947591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453947591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453947591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj x140663454886855 = __arg1;
Obj x1 = x140663454886855;
Obj x140663454887879 = makeCons(x1, Nil);
Obj x140663454887911 = makeCons(symcdr, x140663454887879);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140663454887911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140663453948999 = makeNative(19, clofun2, 0, 1, closureRef(co, 0));
Obj x140663454948807 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663454948807) {
Obj x140663454916679 = PRIM_CAR(closureRef(co, 0));
Obj x140663454916711 = PRIM_EQ(symand, x140663454916679);
if (True == x140663454916711) {
Obj x140663454917447 = PRIM_CDR(closureRef(co, 0));
Obj x140663454917479 = PRIM_ISCONS(x140663454917447);
if (True == x140663454917479) {
Obj x140663454917927 = PRIM_CDR(closureRef(co, 0));
Obj x140663454917959 = PRIM_CAR(x140663454917927);
Obj x = x140663454917959;
Obj x140663454918983 = PRIM_CDR(closureRef(co, 0));
Obj x140663454919015 = PRIM_CDR(x140663454918983);
Obj x140663454919079 = PRIM_ISCONS(x140663454919015);
if (True == x140663454919079) {
Obj x140663454919847 = PRIM_CDR(closureRef(co, 0));
Obj x140663454919879 = PRIM_CDR(x140663454919847);
Obj x140663454919911 = PRIM_CAR(x140663454919879);
Obj y = x140663454919911;
Obj x140663454896295 = PRIM_CDR(closureRef(co, 0));
Obj x140663454896327 = PRIM_CDR(x140663454896295);
Obj x140663454896487 = PRIM_CDR(x140663454896327);
Obj x140663454896519 = PRIM_EQ(Nil, x140663454896487);
if (True == x140663454896519) {
pushCont(co, 17, clofun2, 1, y);
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
__arg0 = x140663453948999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453948999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453948999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453948999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453948999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj x140663454896839 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1 = x140663454896839;
pushCont(co, 18, clofun2, 1, x1);
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
Obj x140663454897159 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y1 = x140663454897159;
Obj x140663454898375 = makeCons(y1, Nil);
Obj x140663454898407 = makeCons(x1, x140663454898375);
Obj x140663454898439 = makeCons(symand, x140663454898407);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140663454898439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140663453910215 = makeNative(21, clofun2, 0, 1, closureRef(co, 0));
Obj x140663454975847 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663454975847) {
Obj x140663454976391 = PRIM_CAR(closureRef(co, 0));
Obj x140663454976423 = PRIM_EQ(symnull_63, x140663454976391);
if (True == x140663454976423) {
Obj x140663454977095 = PRIM_CDR(closureRef(co, 0));
Obj x140663454977191 = PRIM_ISCONS(x140663454977095);
if (True == x140663454977191) {
Obj x140663454977895 = PRIM_CDR(closureRef(co, 0));
Obj x140663454977927 = PRIM_CAR(x140663454977895);
Obj x = x140663454977927;
Obj x140663454946023 = PRIM_CDR(closureRef(co, 0));
Obj x140663454946247 = PRIM_CDR(x140663454946023);
Obj x140663454946279 = PRIM_EQ(Nil, x140663454946247);
if (True == x140663454946279) {
PUSH_CONT_0(co, 20, clofun2);
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
__arg0 = x140663453910215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453910215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453910215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453910215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj x140663454946599 = __arg1;
Obj x1 = x140663454946599;
Obj x140663454947527 = makeCons(x1, Nil);
Obj x140663454947591 = makeCons(symnull_63, x140663454947527);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140663454947591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140663453911655 = makeNative(23, clofun2, 0, 1, closureRef(co, 0));
Obj x140663453335303 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663453335303) {
Obj x140663453283815 = PRIM_CAR(closureRef(co, 0));
Obj x140663453283847 = PRIM_EQ(symnot, x140663453283815);
if (True == x140663453283847) {
Obj x140663453284263 = PRIM_CDR(closureRef(co, 0));
Obj x140663453284295 = PRIM_ISCONS(x140663453284263);
if (True == x140663453284295) {
Obj x140663453284711 = PRIM_CDR(closureRef(co, 0));
Obj x140663453284743 = PRIM_CAR(x140663453284711);
Obj x = x140663453284743;
Obj x140663453285351 = PRIM_CDR(closureRef(co, 0));
Obj x140663453285383 = PRIM_CDR(x140663453285351);
Obj x140663453285415 = PRIM_EQ(Nil, x140663453285383);
if (True == x140663453285415) {
PUSH_CONT_0(co, 22, clofun2);
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
__arg0 = x140663453911655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453911655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453911655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453911655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj x140663453285671 = __arg1;
Obj x1 = x140663453285671;
Obj x140663454974727 = makeCons(x1, Nil);
Obj x140663454974791 = makeCons(symnot, x140663454974727);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140663454974791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140663453913063 = makeNative(27, clofun2, 0, 1, closureRef(co, 0));
Obj x140663453458151 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663453458151) {
Obj x140663453380775 = PRIM_CAR(closureRef(co, 0));
Obj x140663453380807 = PRIM_EQ(symif, x140663453380775);
if (True == x140663453380807) {
Obj x140663453381223 = PRIM_CDR(closureRef(co, 0));
Obj x140663453381255 = PRIM_ISCONS(x140663453381223);
if (True == x140663453381255) {
Obj x140663453381671 = PRIM_CDR(closureRef(co, 0));
Obj x140663453381703 = PRIM_CAR(x140663453381671);
Obj x = x140663453381703;
Obj x140663453382279 = PRIM_CDR(closureRef(co, 0));
Obj x140663453382311 = PRIM_CDR(x140663453382279);
Obj x140663453382343 = PRIM_ISCONS(x140663453382311);
if (True == x140663453382343) {
Obj x140663453382919 = PRIM_CDR(closureRef(co, 0));
Obj x140663453382951 = PRIM_CDR(x140663453382919);
Obj x140663453382983 = PRIM_CAR(x140663453382951);
Obj y = x140663453382983;
Obj x140663453383719 = PRIM_CDR(closureRef(co, 0));
Obj x140663453383751 = PRIM_CDR(x140663453383719);
Obj x140663453383783 = PRIM_CDR(x140663453383751);
Obj x140663453383815 = PRIM_ISCONS(x140663453383783);
if (True == x140663453383815) {
Obj x140663453384551 = PRIM_CDR(closureRef(co, 0));
Obj x140663453384583 = PRIM_CDR(x140663453384551);
Obj x140663453384615 = PRIM_CDR(x140663453384583);
Obj x140663453384647 = PRIM_CAR(x140663453384615);
Obj z = x140663453384647;
Obj x140663453332327 = PRIM_CDR(closureRef(co, 0));
Obj x140663453332359 = PRIM_CDR(x140663453332327);
Obj x140663453332391 = PRIM_CDR(x140663453332359);
Obj x140663453332423 = PRIM_CDR(x140663453332391);
Obj x140663453332455 = PRIM_EQ(Nil, x140663453332423);
if (True == x140663453332455) {
pushCont(co, 24, clofun2, 2, y, z);
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
__arg0 = x140663453913063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453913063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453913063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453913063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453913063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453913063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj x140663453332711 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x1 = x140663453332711;
pushCont(co, 25, clofun2, 2, z, x1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140663453332967 = __arg1;
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj y1 = x140663453332967;
pushCont(co, 26, clofun2, 2, y1, x1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = z;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140663453333223 = __arg1;
Obj y1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj z1 = x140663453333223;
Obj x140663453334183 = makeCons(z1, Nil);
Obj x140663453334215 = makeCons(y1, x140663453334183);
Obj x140663453334247 = makeCons(x1, x140663453334215);
Obj x140663453334279 = makeCons(symif, x140663453334247);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140663453334279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140663453907911 = makeNative(29, clofun2, 0, 1, closureRef(co, 0));
Obj x140663453639655 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663453639655) {
Obj x140663453640167 = PRIM_CAR(closureRef(co, 0));
Obj x140663453640199 = PRIM_EQ(symlambda, x140663453640167);
if (True == x140663453640199) {
Obj x140663453640679 = PRIM_CDR(closureRef(co, 0));
Obj x140663453640711 = PRIM_ISCONS(x140663453640679);
if (True == x140663453640711) {
Obj x140663453641223 = PRIM_CDR(closureRef(co, 0));
Obj x140663453641255 = PRIM_CAR(x140663453641223);
Obj args = x140663453641255;
Obj x140663453641927 = PRIM_CDR(closureRef(co, 0));
Obj x140663453641959 = PRIM_CDR(x140663453641927);
Obj x140663453641991 = PRIM_ISCONS(x140663453641959);
if (True == x140663453641991) {
Obj x140663453642599 = PRIM_CDR(closureRef(co, 0));
Obj x140663453642631 = PRIM_CDR(x140663453642599);
Obj x140663453642663 = PRIM_CAR(x140663453642631);
Obj body = x140663453642663;
Obj x140663453455143 = PRIM_CDR(closureRef(co, 0));
Obj x140663453455175 = PRIM_CDR(x140663453455143);
Obj x140663453455207 = PRIM_CDR(x140663453455175);
Obj x140663453455239 = PRIM_EQ(Nil, x140663453455207);
if (True == x140663453455239) {
pushCont(co, 28, clofun2, 1, args);
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
__arg0 = x140663453907911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453907911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453907911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453907911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453907911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj x140663453457127 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453457191 = makeCons(x140663453457127, Nil);
Obj x140663453457223 = makeCons(args, x140663453457191);
Obj x140663453457255 = makeCons(symlambda, x140663453457223);
__nargs = 2;
__arg1 = x140663453457255;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
Obj x140663453881447 = makeNative(30, clofun2, 0, 1, closureRef(co, 0));
Obj x140663453671079 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663453671079) {
Obj x140663453671335 = PRIM_CAR(closureRef(co, 0));
Obj f = x140663453671335;
Obj x140663453638823 = PRIM_CDR(closureRef(co, 0));
Obj args = x140663453638823;
Obj x140663453639239 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35propagate_45boolean);
__arg2 = x140663453639239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140663453881447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj x140663453883143 = makeNative(31, clofun2, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
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

label32:
{
Obj x140663453987431 = __arg1;
Obj x140663453988295 = makeNative(33, clofun2, 0, 1, x140663453987431);
Obj x140663453880711 = PRIM_ISCONS(x140663453987431);
if (True == x140663453880711) {
Obj x140663453881383 = PRIM_CAR(x140663453987431);
Obj x140663453881415 = PRIM_EQ(symcar, x140663453881383);
if (True == x140663453881415) {
Obj x140663453882023 = PRIM_CDR(x140663453987431);
Obj x140663453882087 = PRIM_ISCONS(x140663453882023);
if (True == x140663453882087) {
Obj x140663453882887 = PRIM_CDR(x140663453987431);
Obj x140663453882919 = PRIM_CAR(x140663453882887);
Obj x140663453882951 = PRIM_ISCONS(x140663453882919);
if (True == x140663453882951) {
Obj x140663453884039 = PRIM_CDR(x140663453987431);
Obj x140663453884071 = PRIM_CAR(x140663453884039);
Obj x140663453884103 = PRIM_CAR(x140663453884071);
Obj x140663453884135 = PRIM_EQ(symcons, x140663453884103);
if (True == x140663453884135) {
Obj x140663453790887 = PRIM_CDR(x140663453987431);
Obj x140663453790919 = PRIM_CAR(x140663453790887);
Obj x140663453790983 = PRIM_CDR(x140663453790919);
Obj x140663453791015 = PRIM_ISCONS(x140663453790983);
if (True == x140663453791015) {
Obj x140663453792199 = PRIM_CDR(x140663453987431);
Obj x140663453792231 = PRIM_CAR(x140663453792199);
Obj x140663453792263 = PRIM_CDR(x140663453792231);
Obj x140663453792295 = PRIM_CAR(x140663453792263);
Obj x = x140663453792295;
Obj x140663453793319 = PRIM_CDR(x140663453987431);
Obj x140663453793351 = PRIM_CAR(x140663453793319);
Obj x140663453793415 = PRIM_CDR(x140663453793351);
Obj x140663453793447 = PRIM_CDR(x140663453793415);
Obj x140663453793479 = PRIM_ISCONS(x140663453793447);
if (True == x140663453793479) {
Obj x140663453741383 = PRIM_CDR(x140663453987431);
Obj x140663453741415 = PRIM_CAR(x140663453741383);
Obj x140663453741447 = PRIM_CDR(x140663453741415);
Obj x140663453741479 = PRIM_CDR(x140663453741447);
Obj x140663453741511 = PRIM_CAR(x140663453741479);
Obj __ = x140663453741511;
Obj x140663453743047 = PRIM_CDR(x140663453987431);
Obj x140663453743111 = PRIM_CAR(x140663453743047);
Obj x140663453743271 = PRIM_CDR(x140663453743111);
Obj x140663453743303 = PRIM_CDR(x140663453743271);
Obj x140663453743335 = PRIM_CDR(x140663453743303);
Obj x140663453743367 = PRIM_EQ(Nil, x140663453743335);
if (True == x140663453743367) {
Obj x140663453744839 = PRIM_CDR(x140663453987431);
Obj x140663453744903 = PRIM_CDR(x140663453744839);
Obj x140663453744935 = PRIM_EQ(Nil, x140663453744903);
if (True == x140663453744935) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453988295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453988295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453988295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453988295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453988295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453988295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453988295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453988295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453988295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x140663453945927 = makeNative(34, clofun2, 0, 1, closureRef(co, 0));
Obj x140663453988455 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663453988455) {
Obj x140663453989255 = PRIM_CAR(closureRef(co, 0));
Obj x140663453989351 = PRIM_EQ(symcdr, x140663453989255);
if (True == x140663453989351) {
Obj x140663453989895 = PRIM_CDR(closureRef(co, 0));
Obj x140663453989927 = PRIM_ISCONS(x140663453989895);
if (True == x140663453989927) {
Obj x140663453945959 = PRIM_CDR(closureRef(co, 0));
Obj x140663453946023 = PRIM_CAR(x140663453945959);
Obj x140663453946055 = PRIM_ISCONS(x140663453946023);
if (True == x140663453946055) {
Obj x140663453947271 = PRIM_CDR(closureRef(co, 0));
Obj x140663453947431 = PRIM_CAR(x140663453947271);
Obj x140663453947463 = PRIM_CAR(x140663453947431);
Obj x140663453947623 = PRIM_EQ(symcons, x140663453947463);
if (True == x140663453947623) {
Obj x140663453948711 = PRIM_CDR(closureRef(co, 0));
Obj x140663453948775 = PRIM_CAR(x140663453948711);
Obj x140663453948807 = PRIM_CDR(x140663453948775);
Obj x140663453948839 = PRIM_ISCONS(x140663453948807);
if (True == x140663453948839) {
Obj x140663453908999 = PRIM_CDR(closureRef(co, 0));
Obj x140663453909095 = PRIM_CAR(x140663453908999);
Obj x140663453909159 = PRIM_CDR(x140663453909095);
Obj x140663453909191 = PRIM_CAR(x140663453909159);
Obj __ = x140663453909191;
Obj x140663453910503 = PRIM_CDR(closureRef(co, 0));
Obj x140663453910535 = PRIM_CAR(x140663453910503);
Obj x140663453910599 = PRIM_CDR(x140663453910535);
Obj x140663453910631 = PRIM_CDR(x140663453910599);
Obj x140663453910663 = PRIM_ISCONS(x140663453910631);
if (True == x140663453910663) {
Obj x140663453912071 = PRIM_CDR(closureRef(co, 0));
Obj x140663453912103 = PRIM_CAR(x140663453912071);
Obj x140663453912135 = PRIM_CDR(x140663453912103);
Obj x140663453912327 = PRIM_CDR(x140663453912135);
Obj x140663453912487 = PRIM_CAR(x140663453912327);
Obj x = x140663453912487;
Obj x140663453905959 = PRIM_CDR(closureRef(co, 0));
Obj x140663453905991 = PRIM_CAR(x140663453905959);
Obj x140663453906023 = PRIM_CDR(x140663453905991);
Obj x140663453906055 = PRIM_CDR(x140663453906023);
Obj x140663453906087 = PRIM_CDR(x140663453906055);
Obj x140663453906119 = PRIM_EQ(Nil, x140663453906087);
if (True == x140663453906119) {
Obj x140663453907271 = PRIM_CDR(closureRef(co, 0));
Obj x140663453907303 = PRIM_CDR(x140663453907271);
Obj x140663453907335 = PRIM_EQ(Nil, x140663453907303);
if (True == x140663453907335) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453945927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453945927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453945927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453945927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453945927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453945927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453945927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453945927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453945927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj x140663453948615 = makeNative(35, clofun2, 0, 1, closureRef(co, 0));
Obj x140663454605287 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663454605287) {
Obj x140663454581447 = PRIM_CAR(closureRef(co, 0));
Obj x140663454581479 = PRIM_EQ(symcons_63, x140663454581447);
if (True == x140663454581479) {
Obj x140663454581959 = PRIM_CDR(closureRef(co, 0));
Obj x140663454582023 = PRIM_ISCONS(x140663454581959);
if (True == x140663454582023) {
Obj x140663454582727 = PRIM_CDR(closureRef(co, 0));
Obj x140663454582759 = PRIM_CAR(x140663454582727);
Obj x140663454582791 = PRIM_ISCONS(x140663454582759);
if (True == x140663454582791) {
Obj x140663454583911 = PRIM_CDR(closureRef(co, 0));
Obj x140663454583943 = PRIM_CAR(x140663454583911);
Obj x140663454584007 = PRIM_CAR(x140663454583943);
Obj x140663454584039 = PRIM_EQ(symcons, x140663454584007);
if (True == x140663454584039) {
Obj x140663454539943 = PRIM_CDR(closureRef(co, 0));
Obj x140663454539975 = PRIM_CAR(x140663454539943);
Obj x140663454540071 = PRIM_CDR(x140663454539975);
Obj x140663454540295 = PRIM_ISCONS(x140663454540071);
if (True == x140663454540295) {
Obj x140663454541351 = PRIM_CDR(closureRef(co, 0));
Obj x140663454541383 = PRIM_CAR(x140663454541351);
Obj x140663454541415 = PRIM_CDR(x140663454541383);
Obj x140663454541479 = PRIM_CAR(x140663454541415);
Obj __ = x140663454541479;
Obj x140663454542695 = PRIM_CDR(closureRef(co, 0));
Obj x140663454542727 = PRIM_CAR(x140663454542695);
Obj x140663454542759 = PRIM_CDR(x140663454542727);
Obj x140663454542791 = PRIM_CDR(x140663454542759);
Obj x140663454542823 = PRIM_ISCONS(x140663454542791);
if (True == x140663454542823) {
Obj x140663454499015 = PRIM_CDR(closureRef(co, 0));
Obj x140663454499047 = PRIM_CAR(x140663454499015);
Obj x140663454499079 = PRIM_CDR(x140663454499047);
Obj x140663454499111 = PRIM_CDR(x140663454499079);
Obj x140663454499143 = PRIM_CAR(x140663454499111);
__ = x140663454499143;
Obj x140663454500903 = PRIM_CDR(closureRef(co, 0));
Obj x140663454500935 = PRIM_CAR(x140663454500903);
Obj x140663454500967 = PRIM_CDR(x140663454500935);
Obj x140663454500999 = PRIM_CDR(x140663454500967);
Obj x140663454501031 = PRIM_CDR(x140663454500999);
Obj x140663454501063 = PRIM_EQ(Nil, x140663454501031);
if (True == x140663454501063) {
Obj x140663454501927 = PRIM_CDR(closureRef(co, 0));
Obj x140663454501959 = PRIM_CDR(x140663454501927);
Obj x140663454501991 = PRIM_EQ(Nil, x140663454501959);
if (True == x140663454501991) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453948615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453948615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453948615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453948615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453948615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453948615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453948615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453948615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453948615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj x140663453910311 = makeNative(36, clofun2, 0, 1, closureRef(co, 0));
Obj x140663454884455 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663454884455) {
Obj x140663454884999 = PRIM_CAR(closureRef(co, 0));
Obj x140663454885031 = PRIM_EQ(symand, x140663454884999);
if (True == x140663454885031) {
Obj x140663454885735 = PRIM_CDR(closureRef(co, 0));
Obj x140663454885767 = PRIM_ISCONS(x140663454885735);
if (True == x140663454885767) {
Obj x140663454886567 = PRIM_CDR(closureRef(co, 0));
Obj x140663454886631 = PRIM_CAR(x140663454886567);
Obj x140663454886663 = PRIM_EQ(True, x140663454886631);
if (True == x140663454886663) {
Obj x140663454887591 = PRIM_CDR(closureRef(co, 0));
Obj x140663454887623 = PRIM_CDR(x140663454887591);
Obj x140663454887655 = PRIM_ISCONS(x140663454887623);
if (True == x140663454887655) {
Obj x140663454602055 = PRIM_CDR(closureRef(co, 0));
Obj x140663454602087 = PRIM_CDR(x140663454602055);
Obj x140663454602119 = PRIM_CAR(x140663454602087);
Obj x140663454602151 = PRIM_EQ(True, x140663454602119);
if (True == x140663454602151) {
Obj x140663454603335 = PRIM_CDR(closureRef(co, 0));
Obj x140663454603367 = PRIM_CDR(x140663454603335);
Obj x140663454603463 = PRIM_CDR(x140663454603367);
Obj x140663454603495 = PRIM_EQ(Nil, x140663454603463);
if (True == x140663454603495) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453910311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453910311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453910311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453910311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453910311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453910311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453910311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj x140663453911399 = makeNative(37, clofun2, 0, 1, closureRef(co, 0));
Obj x140663454896807 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663454896807) {
Obj x140663454897351 = PRIM_CAR(closureRef(co, 0));
Obj x140663454897447 = PRIM_EQ(symnull_63, x140663454897351);
if (True == x140663454897447) {
Obj x140663454898087 = PRIM_CDR(closureRef(co, 0));
Obj x140663454898119 = PRIM_ISCONS(x140663454898087);
if (True == x140663454898119) {
Obj x140663454898855 = PRIM_CDR(closureRef(co, 0));
Obj x140663454898887 = PRIM_CAR(x140663454898855);
Obj x140663454898919 = PRIM_EQ(Nil, x140663454898887);
if (True == x140663454898919) {
Obj x140663454899655 = PRIM_CDR(closureRef(co, 0));
Obj x140663454899687 = PRIM_CDR(x140663454899655);
Obj x140663454899719 = PRIM_EQ(Nil, x140663454899687);
if (True == x140663454899719) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453911399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453911399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453911399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453911399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453911399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj x140663453912231 = makeNative(38, clofun2, 0, 1, closureRef(co, 0));
Obj x140663454974759 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663454974759) {
Obj x140663454975271 = PRIM_CAR(closureRef(co, 0));
Obj x140663454975303 = PRIM_EQ(symnull_63, x140663454975271);
if (True == x140663454975303) {
Obj x140663454975879 = PRIM_CDR(closureRef(co, 0));
Obj x140663454975911 = PRIM_ISCONS(x140663454975879);
if (True == x140663454975911) {
Obj x140663454976647 = PRIM_CDR(closureRef(co, 0));
Obj x140663454976679 = PRIM_CAR(x140663454976647);
Obj x140663454976711 = PRIM_ISCONS(x140663454976679);
if (True == x140663454976711) {
Obj x140663454977735 = PRIM_CDR(closureRef(co, 0));
Obj x140663454977767 = PRIM_CAR(x140663454977735);
Obj x140663454977799 = PRIM_CAR(x140663454977767);
Obj x140663454977831 = PRIM_EQ(symcons, x140663454977799);
if (True == x140663454977831) {
Obj x140663454946119 = PRIM_CDR(closureRef(co, 0));
Obj x140663454946151 = PRIM_CAR(x140663454946119);
Obj x140663454946183 = PRIM_CDR(x140663454946151);
Obj x140663454946215 = PRIM_ISCONS(x140663454946183);
if (True == x140663454946215) {
Obj x140663454947207 = PRIM_CDR(closureRef(co, 0));
Obj x140663454947239 = PRIM_CAR(x140663454947207);
Obj x140663454947271 = PRIM_CDR(x140663454947239);
Obj x140663454947303 = PRIM_CAR(x140663454947271);
Obj __ = x140663454947303;
Obj x140663454948359 = PRIM_CDR(closureRef(co, 0));
Obj x140663454948551 = PRIM_CAR(x140663454948359);
Obj x140663454948583 = PRIM_CDR(x140663454948551);
Obj x140663454948615 = PRIM_CDR(x140663454948583);
Obj x140663454948647 = PRIM_ISCONS(x140663454948615);
if (True == x140663454948647) {
Obj x140663454917095 = PRIM_CDR(closureRef(co, 0));
Obj x140663454917127 = PRIM_CAR(x140663454917095);
Obj x140663454917159 = PRIM_CDR(x140663454917127);
Obj x140663454917191 = PRIM_CDR(x140663454917159);
Obj x140663454917223 = PRIM_CAR(x140663454917191);
__ = x140663454917223;
Obj x140663454918471 = PRIM_CDR(closureRef(co, 0));
Obj x140663454918503 = PRIM_CAR(x140663454918471);
Obj x140663454918535 = PRIM_CDR(x140663454918503);
Obj x140663454918567 = PRIM_CDR(x140663454918535);
Obj x140663454918759 = PRIM_CDR(x140663454918567);
Obj x140663454918823 = PRIM_EQ(Nil, x140663454918759);
if (True == x140663454918823) {
Obj x140663454919559 = PRIM_CDR(closureRef(co, 0));
Obj x140663454919591 = PRIM_CDR(x140663454919559);
Obj x140663454919623 = PRIM_EQ(Nil, x140663454919591);
if (True == x140663454919623) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453912231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453912231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453912231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453912231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453912231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453912231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453912231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453912231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453912231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj x140663453906695 = makeNative(39, clofun2, 0, 1, closureRef(co, 0));
Obj x140663453642503 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663453642503) {
Obj x140663453454535 = PRIM_CAR(closureRef(co, 0));
Obj x140663453454567 = PRIM_EQ(symnot, x140663453454535);
if (True == x140663453454567) {
Obj x140663453454983 = PRIM_CDR(closureRef(co, 0));
Obj x140663453455015 = PRIM_ISCONS(x140663453454983);
if (True == x140663453455015) {
Obj x140663453455623 = PRIM_CDR(closureRef(co, 0));
Obj x140663453455655 = PRIM_CAR(x140663453455623);
Obj x140663453455687 = PRIM_EQ(True, x140663453455655);
if (True == x140663453455687) {
Obj x140663453456295 = PRIM_CDR(closureRef(co, 0));
Obj x140663453456327 = PRIM_CDR(x140663453456295);
Obj x140663453456359 = PRIM_EQ(Nil, x140663453456327);
if (True == x140663453456359) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453906695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453906695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453906695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453906695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453906695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140663453907527 = makeNative(40, clofun2, 0, 1, closureRef(co, 0));
Obj x140663453639335 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663453639335) {
Obj x140663453639783 = PRIM_CAR(closureRef(co, 0));
Obj x140663453639815 = PRIM_EQ(symnot, x140663453639783);
if (True == x140663453639815) {
Obj x140663453640231 = PRIM_CDR(closureRef(co, 0));
Obj x140663453640263 = PRIM_ISCONS(x140663453640231);
if (True == x140663453640263) {
Obj x140663453640871 = PRIM_CDR(closureRef(co, 0));
Obj x140663453640903 = PRIM_CAR(x140663453640871);
Obj x140663453640935 = PRIM_EQ(False, x140663453640903);
if (True == x140663453640935) {
Obj x140663453641543 = PRIM_CDR(closureRef(co, 0));
Obj x140663453641575 = PRIM_CDR(x140663453641543);
Obj x140663453641607 = PRIM_EQ(Nil, x140663453641575);
if (True == x140663453641607) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453907527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453907527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453907527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453907527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453907527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj x140663453908359 = makeNative(41, clofun2, 0, 1, closureRef(co, 0));
Obj x140663453793127 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663453793127) {
Obj x140663453793639 = PRIM_CAR(closureRef(co, 0));
Obj x140663453793671 = PRIM_EQ(symif, x140663453793639);
if (True == x140663453793671) {
Obj x140663453794087 = PRIM_CDR(closureRef(co, 0));
Obj x140663453794215 = PRIM_ISCONS(x140663453794087);
if (True == x140663453794215) {
Obj x140663453741575 = PRIM_CDR(closureRef(co, 0));
Obj x140663453741607 = PRIM_CAR(x140663453741575);
Obj x140663453741639 = PRIM_EQ(True, x140663453741607);
if (True == x140663453741639) {
Obj x140663453742311 = PRIM_CDR(closureRef(co, 0));
Obj x140663453742343 = PRIM_CDR(x140663453742311);
Obj x140663453742375 = PRIM_ISCONS(x140663453742343);
if (True == x140663453742375) {
Obj x140663453743143 = PRIM_CDR(closureRef(co, 0));
Obj x140663453743207 = PRIM_CDR(x140663453743143);
Obj x140663453743239 = PRIM_CAR(x140663453743207);
Obj y = x140663453743239;
Obj x140663453744743 = PRIM_CDR(closureRef(co, 0));
Obj x140663453744775 = PRIM_CDR(x140663453744743);
Obj x140663453744807 = PRIM_CDR(x140663453744775);
Obj x140663453744871 = PRIM_ISCONS(x140663453744807);
if (True == x140663453744871) {
Obj x140663453669767 = PRIM_CDR(closureRef(co, 0));
Obj x140663453669799 = PRIM_CDR(x140663453669767);
Obj x140663453669831 = PRIM_CDR(x140663453669799);
Obj x140663453669863 = PRIM_CAR(x140663453669831);
Obj z = x140663453669863;
Obj x140663453670791 = PRIM_CDR(closureRef(co, 0));
Obj x140663453670823 = PRIM_CDR(x140663453670791);
Obj x140663453670855 = PRIM_CDR(x140663453670823);
Obj x140663453670887 = PRIM_CDR(x140663453670855);
Obj x140663453670919 = PRIM_EQ(Nil, x140663453670887);
if (True == x140663453670919) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453908359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453908359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453908359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453908359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453908359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453908359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453908359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj x140663453989575 = makeNative(42, clofun2, 0, 1, closureRef(co, 0));
Obj x140663453907783 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663453907783) {
Obj x140663453908391 = PRIM_CAR(closureRef(co, 0));
Obj x140663453908423 = PRIM_EQ(symif, x140663453908391);
if (True == x140663453908423) {
Obj x140663453908871 = PRIM_CDR(closureRef(co, 0));
Obj x140663453908903 = PRIM_ISCONS(x140663453908871);
if (True == x140663453908903) {
Obj x140663453881031 = PRIM_CDR(closureRef(co, 0));
Obj x140663453881063 = PRIM_CAR(x140663453881031);
Obj x140663453881095 = PRIM_EQ(False, x140663453881063);
if (True == x140663453881095) {
Obj x140663453881895 = PRIM_CDR(closureRef(co, 0));
Obj x140663453881927 = PRIM_CDR(x140663453881895);
Obj x140663453881959 = PRIM_ISCONS(x140663453881927);
if (True == x140663453881959) {
Obj x140663453882663 = PRIM_CDR(closureRef(co, 0));
Obj x140663453882695 = PRIM_CDR(x140663453882663);
Obj x140663453882727 = PRIM_CAR(x140663453882695);
Obj y = x140663453882727;
Obj x140663453883591 = PRIM_CDR(closureRef(co, 0));
Obj x140663453883623 = PRIM_CDR(x140663453883591);
Obj x140663453883687 = PRIM_CDR(x140663453883623);
Obj x140663453883719 = PRIM_ISCONS(x140663453883687);
if (True == x140663453883719) {
Obj x140663453790407 = PRIM_CDR(closureRef(co, 0));
Obj x140663453790439 = PRIM_CDR(x140663453790407);
Obj x140663453790471 = PRIM_CDR(x140663453790439);
Obj x140663453790503 = PRIM_CAR(x140663453790471);
Obj z = x140663453790503;
Obj x140663453791495 = PRIM_CDR(closureRef(co, 0));
Obj x140663453791527 = PRIM_CDR(x140663453791495);
Obj x140663453791559 = PRIM_CDR(x140663453791527);
Obj x140663453791687 = PRIM_CDR(x140663453791559);
Obj x140663453791719 = PRIM_EQ(Nil, x140663453791687);
if (True == x140663453791719) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140663453989575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453989575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453989575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453989575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453989575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453989575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453989575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj x140663453947047 = makeNative(43, clofun2, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
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

label44:
{
Obj exp = __arg1;
pushCont(co, 45, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140663453909383 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 46, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35extract_45rules);
__arg1 = x140663453909383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140663453909415 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = x140663453909415;
pushCont(co, 47, clofun2, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rules_45arg_45count);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140663453909671 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = x140663453909671;
pushCont(co, 48, clofun2, 2, exp, body);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35gen_45paramenters);
__arg1 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj x140663453910119 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = x140663453910119;
pushCont(co, 49, clofun2, 2, body, args);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140663453910823 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663453912519 = makeCons(symlist, args);
Obj x140663453912583 = makeCons(x140663453912519, body);
Obj x140663453912615 = makeCons(symmatch, x140663453912583);
Obj x140663453912679 = makeCons(x140663453912615, Nil);
Obj x140663453912711 = makeCons(args, x140663453912679);
Obj x140663453912743 = makeCons(x140663453910823, x140663453912711);
Obj x140663453912775 = makeCons(symdefun, x140663453912743);
__nargs = 2;
__arg1 = x140663453912775;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
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
Obj n = __arg1;
Obj x140663453948167 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == x140663453948167) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663453948743 = primGenSym();
Obj x140663453949383 = PRIM_SUB(n, MAKE_NUMBER(1));
pushCont(co, 1, clofun3, 1, x140663453948743);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35gen_45paramenters);
__arg1 = x140663453949383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj x140663453949415 = __arg1;
Obj x140663453948743= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453949479 = makeCons(x140663453948743, x140663453949415);
__nargs = 2;
__arg1 = x140663453949479;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj rules = __arg1;
PUSH_CONT_0(co, 3, clofun3);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rules_45patterns);
__arg1 = Nil;
__arg2 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140663453988551 = __arg1;
Obj pats = x140663453988551;
Obj len = makeNative(8, clofun3, 1, 0);
PUSH_CONT_0(co, 4, clofun3);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = len;
__arg2 = pats;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140663453989639 = __arg1;
Obj counts = x140663453989639;
Obj x140663453989959 = PRIM_CAR(counts);
Obj n = x140663453989959;
Obj dif = makeNative(7, clofun3, 1, 1, n);
Obj x140663453946823 = PRIM_CDR(counts);
pushCont(co, 5, clofun3, 1, n);
__nargs = 3;
__arg0 = globalRef(symfilter);
__arg1 = dif;
__arg2 = x140663453946823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140663453946855 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 6, clofun3, 1, n);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140663453946855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140663453946887 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453946919 = primNot(x140663453946887);
if (True == x140663453946919) {
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = makeCString("inconsistent func rule args count");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = n;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label7:
{
Obj x = __arg1;
Obj x140663453990791 = PRIM_EQ(closureRef(co, 0), x);
Obj x140663453990823 = primNot(x140663453990791);
__nargs = 2;
__arg1 = x140663453990823;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj x = __arg1;
Obj x140663453989287 = PRIM_CDR(x);
__nargs = 2;
__arg0 = globalRef(symlength);
__arg1 = x140663453989287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj l1 = __arg1;
Obj l2 = __arg2;
Obj x140663454502183 = PRIM_EQ(l1, Nil);
if (True == x140663454502183) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663454502631 = PRIM_CAR(l1);
Obj x140663453987143 = PRIM_CDR(l1);
pushCont(co, 10, clofun3, 1, x140663454502631);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = x140663453987143;
__arg2 = l2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj x140663453987239 = __arg1;
Obj x140663454502631= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453987271 = makeCons(x140663454502631, x140663453987239);
__nargs = 2;
__arg1 = x140663453987271;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
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

label12:
{
Obj res = __arg1;
Obj fn = __arg2;
Obj l = __arg3;
Obj x140663454543239 = PRIM_ISCONS(l);
if (True == x140663454543239) {
Obj x140663454543687 = PRIM_CAR(l);
pushCont(co, 13, clofun3, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = x140663454543687;
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

label13:
{
Obj x140663454543783 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140663454543783) {
Obj x140663454499303 = PRIM_CAR(l);
Obj x140663454499367 = makeCons(x140663454499303, res);
Obj x140663454499879 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = x140663454499367;
__arg2 = fn;
__arg3 = x140663454499879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140663454500519 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = res;
__arg2 = fn;
__arg3 = x140663454500519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
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

label15:
{
Obj i = __arg1;
Obj l = __arg2;
Obj x140663454541095 = PRIM_EQ(l, Nil);
if (True == x140663454541095) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663454541575 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj x140663454541799 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35length_45h);
__arg1 = x140663454541575;
__arg2 = x140663454541799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj res = __arg1;
Obj rules = __arg2;
pushCont(co, 17, clofun3, 2, res, rules);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140663454583975 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140663454583975) {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140663454584743 = PRIM_CAR(rules);
Obj x140663454584807 = makeCons(x140663454584743, res);
pushCont(co, 18, clofun3, 1, x140663454584807);
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

label18:
{
Obj x140663454540103 = __arg1;
Obj x140663454584807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rules_45patterns);
__arg1 = x140663454584807;
__arg2 = x140663454540103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
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

label20:
{
Obj input = __arg1;
Obj current = __arg2;
Obj result = __arg3;
Obj x140663453987623 = makeNative(21, clofun3, 0, 3, input, current, result);
Obj x140663454582119 = PRIM_EQ(Nil, input);
if (True == x140663454582119) {
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
__arg0 = x140663453987623;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj x140663453987719 = makeNative(23, clofun3, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140663454899527 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663454899527) {
Obj x140663454899975 = PRIM_CAR(closureRef(co, 0));
Obj x140663454900007 = PRIM_EQ(sym_61_62, x140663454899975);
if (True == x140663454900007) {
Obj x140663454884135 = PRIM_CDR(closureRef(co, 0));
Obj x140663454884167 = PRIM_ISCONS(x140663454884135);
if (True == x140663454884167) {
Obj x140663454884615 = PRIM_CDR(closureRef(co, 0));
Obj x140663454884647 = PRIM_CAR(x140663454884615);
Obj act = x140663454884647;
Obj x140663454885415 = PRIM_CDR(closureRef(co, 0));
Obj x140663454885447 = PRIM_CDR(x140663454885415);
Obj x140663454885479 = PRIM_ISCONS(x140663454885447);
if (True == x140663454885479) {
Obj x140663454886311 = PRIM_CDR(closureRef(co, 0));
Obj x140663454886343 = PRIM_CDR(x140663454886311);
Obj x140663454886375 = PRIM_CAR(x140663454886343);
Obj x140663454886407 = PRIM_EQ(symwhere, x140663454886375);
if (True == x140663454886407) {
Obj x140663454887303 = PRIM_CDR(closureRef(co, 0));
Obj x140663454887335 = PRIM_CDR(x140663454887303);
Obj x140663454887367 = PRIM_CDR(x140663454887335);
Obj x140663454887399 = PRIM_ISCONS(x140663454887367);
if (True == x140663454887399) {
Obj x140663454601735 = PRIM_CDR(closureRef(co, 0));
Obj x140663454601767 = PRIM_CDR(x140663454601735);
Obj x140663454601799 = PRIM_CDR(x140663454601767);
Obj x140663454601831 = PRIM_CAR(x140663454601799);
Obj pred = x140663454601831;
Obj x140663454602695 = PRIM_CDR(closureRef(co, 0));
Obj x140663454602727 = PRIM_CDR(x140663454602695);
Obj x140663454602759 = PRIM_CDR(x140663454602727);
Obj x140663454602791 = PRIM_CDR(x140663454602759);
Obj remain = x140663454602791;
pushCont(co, 22, clofun3, 3, act, pred, remain);
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
__arg0 = x140663453987719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453987719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453987719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453987719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453987719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453987719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj x140663454603399 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140663454603431 = makeCons(symlist, x140663454603399);
Obj pat = x140663454603431;
Obj x140663454604615 = makeCons(act, Nil);
Obj x140663454604647 = makeCons(pred, x140663454604615);
Obj x140663454604679 = makeCons(symwhere, x140663454604647);
Obj x140663454605223 = makeCons(pat, closureRef(co, 2));
Obj x140663454605255 = makeCons(x140663454604679, x140663454605223);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = x140663454605255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140663453990407 = makeNative(25, clofun3, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140663454919943 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663454919943) {
Obj x140663454920423 = PRIM_CAR(closureRef(co, 0));
Obj x140663454920487 = PRIM_EQ(sym_61_62, x140663454920423);
if (True == x140663454920487) {
Obj x140663454896423 = PRIM_CDR(closureRef(co, 0));
Obj x140663454896455 = PRIM_ISCONS(x140663454896423);
if (True == x140663454896455) {
Obj x140663454896903 = PRIM_CDR(closureRef(co, 0));
Obj x140663454896935 = PRIM_CAR(x140663454896903);
Obj act = x140663454896935;
Obj x140663454897383 = PRIM_CDR(closureRef(co, 0));
Obj x140663454897415 = PRIM_CDR(x140663454897383);
Obj remain = x140663454897415;
pushCont(co, 24, clofun3, 2, act, remain);
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
__arg0 = x140663453990407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453990407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140663453990407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj x140663454898023 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663454898055 = makeCons(symlist, x140663454898023);
Obj pat = x140663454898055;
Obj x140663454898759 = makeCons(pat, closureRef(co, 2));
Obj x140663454898791 = makeCons(act, x140663454898759);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = x140663454898791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140663453947015 = makeNative(26, clofun3, 0, 0);
Obj x140663454918375 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663454918375) {
Obj x140663454918791 = PRIM_CAR(closureRef(co, 0));
Obj x = x140663454918791;
Obj x140663454919047 = PRIM_CDR(closureRef(co, 0));
Obj y = x140663454919047;
Obj x140663454919527 = makeCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = y;
__arg2 = x140663454919527;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140663453947015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
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

label27:
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

label28:
{
Obj exp = __arg1;
pushCont(co, 29, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x140663454975111 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = x140663454975111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140663454975143 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = x140663454975143;
pushCont(co, 31, clofun3, 1, value);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140663454975399 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = x140663454975399;
Obj x140663454975815 = PRIM_ISCONS(value);
if (True == x140663454975815) {
Obj x140663454976455 = PRIM_CAR(value);
Obj x140663454976487 = PRIM_EQ(symcons, x140663454976455);
Obj x140663454976519 = primNot(x140663454976487);
if (True == x140663454976519) {
if (True == True) {
Obj x140663454976775 = primGenSym();
Obj val = x140663454976775;
pushCont(co, 34, clofun3, 2, value, val);
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
Obj x140663454945831 = primGenSym();
Obj val = x140663454945831;
pushCont(co, 33, clofun3, 2, value, val);
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
Obj x140663454947559 = primGenSym();
Obj val = x140663454947559;
pushCont(co, 32, clofun3, 2, value, val);
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

label32:
{
Obj x140663454948775 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663454948839 = makeCons(x140663454948775, Nil);
Obj x140663454948871 = makeCons(value, x140663454948839);
Obj x140663454948903 = makeCons(val, x140663454948871);
Obj x140663454948935 = makeCons(symlet, x140663454948903);
__nargs = 2;
__arg1 = x140663454948935;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label33:
{
Obj x140663454946951 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663454947015 = makeCons(x140663454946951, Nil);
Obj x140663454947047 = makeCons(value, x140663454947015);
Obj x140663454947079 = makeCons(val, x140663454947047);
Obj x140663454947111 = makeCons(symlet, x140663454947079);
__nargs = 2;
__arg1 = x140663454947111;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x140663454977959 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663454945319 = makeCons(x140663454977959, Nil);
Obj x140663454945351 = makeCons(value, x140663454945319);
Obj x140663454945383 = makeCons(val, x140663454945351);
Obj x140663454945415 = makeCons(symlet, x140663454945383);
__nargs = 2;
__arg1 = x140663454945415;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj value = __arg1;
Obj rules = __arg2;
pushCont(co, 36, clofun3, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = rules;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140663453881159 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140663453881159) {
Obj x140663453881703 = makeCons(makeCString("no match-help found!"), Nil);
Obj x140663453881735 = makeCons(symerror, x140663453881703);
__nargs = 2;
__arg1 = x140663453881735;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 37, clofun3, 2, rules, value);
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

label37:
{
Obj x140663453882055 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140663453882055) {
Obj x140663453882503 = PRIM_CDR(rules);
pushCont(co, 42, clofun3, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = x140663453882503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj x140663453742919 = PRIM_CAR(rules);
Obj pat = x140663453742919;
Obj x140663453743175 = primGenSym();
Obj cc = x140663453743175;
pushCont(co, 38, clofun3, 4, pat, rules, value, cc);
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

label38:
{
Obj x140663453743463 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = x140663453743463;
pushCont(co, 39, clofun3, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140663453744551 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 40, clofun3, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x140663453744551;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140663453744679 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = x140663453744679;
Obj x140663453667463 = PRIM_CDR(rules);
Obj x140663453667495 = PRIM_CDR(x140663453667463);
pushCont(co, 41, clofun3, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = x140663453667495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140663453667527 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140663453667527;
Obj x140663453668743 = makeCons(rest, Nil);
Obj x140663453668775 = makeCons(Nil, x140663453668743);
Obj x140663453668807 = makeCons(symlambda, x140663453668775);
Obj x140663454973991 = makeCons(curr, Nil);
Obj x140663454974023 = makeCons(x140663453668807, x140663454973991);
Obj x140663454974055 = makeCons(cc, x140663454974023);
Obj x140663454974087 = makeCons(symlet, x140663454974055);
__nargs = 2;
__arg1 = x140663454974087;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label42:
{
Obj x140663453882535 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140663453882535) {
if (True == True) {
Obj x140663453882791 = PRIM_CAR(rules);
Obj pat = x140663453882791;
Obj x140663453883015 = primGenSym();
Obj cc = x140663453883015;
pushCont(co, 47, clofun3, 4, pat, rules, value, cc);
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
Obj x140663453792455 = PRIM_CAR(rules);
Obj pat = x140663453792455;
Obj x140663453792679 = primGenSym();
Obj cc = x140663453792679;
pushCont(co, 43, clofun3, 4, pat, rules, value, cc);
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

label43:
{
Obj x140663453792967 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = x140663453792967;
pushCont(co, 44, clofun3, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140663453793383 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 45, clofun3, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x140663453793383;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140663453793511 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = x140663453793511;
Obj x140663453794119 = PRIM_CDR(rules);
Obj x140663453794151 = PRIM_CDR(x140663453794119);
pushCont(co, 46, clofun3, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = x140663453794151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140663453794183 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140663453794183;
Obj x140663453742087 = makeCons(rest, Nil);
Obj x140663453742119 = makeCons(Nil, x140663453742087);
Obj x140663453742151 = makeCons(symlambda, x140663453742119);
Obj x140663453742407 = makeCons(curr, Nil);
Obj x140663453742439 = makeCons(x140663453742151, x140663453742407);
Obj x140663453742471 = makeCons(cc, x140663453742439);
Obj x140663453742503 = makeCons(symlet, x140663453742471);
__nargs = 2;
__arg1 = x140663453742503;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label47:
{
Obj x140663453883335 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = x140663453883335;
pushCont(co, 48, clofun3, 4, action, rules, value, cc);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj x140663453883783 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 49, clofun3, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x140663453883783;
__arg2 = value;
__arg3 = action;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140663453883911 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = x140663453883911;
Obj x140663453790311 = PRIM_CDR(rules);
Obj x140663453790343 = PRIM_CDR(x140663453790311);
pushCont(co, 0, clofun4, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = x140663453790343;
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

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140663453790375 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140663453790375;
Obj x140663453791591 = makeCons(rest, Nil);
Obj x140663453791623 = makeCons(Nil, x140663453791591);
Obj x140663453791655 = makeCons(symlambda, x140663453791623);
Obj x140663453791943 = makeCons(curr, Nil);
Obj x140663453791975 = makeCons(x140663453791655, x140663453791943);
Obj x140663453792007 = makeCons(cc, x140663453791975);
Obj x140663453792039 = makeCons(symlet, x140663453792007);
__nargs = 2;
__arg1 = x140663453792039;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj x140663453909959 = PRIM_CDR(rules);
Obj x140663453909991 = PRIM_CAR(x140663453909959);
Obj action = x140663453909991;
pushCont(co, 2, clofun4, 2, cc, action);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x140663453910375 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140663453910375) {
Obj x140663453910855 = PRIM_CAR(action);
Obj x140663453911015 = PRIM_EQ(x140663453910855, symwhere);
if (True == x140663453911015) {
if (True == True) {
pushCont(co, 7, clofun4, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
if (True == False) {
pushCont(co, 5, clofun4, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
} else {
if (True == False) {
pushCont(co, 3, clofun4, 2, action, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = action;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label3:
{
Obj x140663453908231 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 4, clofun4, 2, cc, x140663453908231);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140663453908647 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453908231= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663453880391 = makeCons(cc, Nil);
Obj x140663453880455 = makeCons(x140663453880391, Nil);
Obj x140663453880487 = makeCons(x140663453908647, x140663453880455);
Obj x140663453880519 = makeCons(x140663453908231, x140663453880487);
Obj x140663453880551 = makeCons(symif, x140663453880519);
__nargs = 2;
__arg1 = x140663453880551;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj x140663453905447 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 6, clofun4, 2, cc, x140663453905447);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140663453905831 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453905447= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663453906439 = makeCons(cc, Nil);
Obj x140663453906631 = makeCons(x140663453906439, Nil);
Obj x140663453906663 = makeCons(x140663453905831, x140663453906631);
Obj x140663453906727 = makeCons(x140663453905447, x140663453906663);
Obj x140663453906759 = makeCons(symif, x140663453906727);
__nargs = 2;
__arg1 = x140663453906759;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj x140663453911783 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 8, clofun4, 2, cc, x140663453911783);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = action;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140663453912455 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453911783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663453912871 = makeCons(cc, Nil);
Obj x140663453912935 = makeCons(x140663453912871, Nil);
Obj x140663453912967 = makeCons(x140663453912455, x140663453912935);
Obj x140663453912999 = makeCons(x140663453911783, x140663453912967);
Obj x140663453913031 = makeCons(symif, x140663453912999);
__nargs = 2;
__arg1 = x140663453913031;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
Obj literal_63 = makeNative(13, clofun4, 1, 0);
pushCont(co, 10, clofun4, 4, expr, body, cc, pat);
__nargs = 2;
__arg0 = literal_63;
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140663454502023 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140663454502023) {
Obj x140663454502343 = PRIM_EQ(pat, expr);
if (True == x140663454502343) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663453987847 = makeCons(expr, Nil);
Obj x140663453987879 = makeCons(pat, x140663453987847);
Obj x140663453987911 = makeCons(sym_61, x140663453987879);
Obj x140663453988711 = makeCons(cc, Nil);
Obj x140663453988775 = makeCons(x140663453988711, Nil);
Obj x140663453988807 = makeCons(body, x140663453988775);
Obj x140663453988839 = makeCons(x140663453987911, x140663453988807);
Obj x140663453988871 = makeCons(symif, x140663453988839);
__nargs = 2;
__arg1 = x140663453988871;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj x140663453989159 = primIsSymbol(pat);
if (True == x140663453989159) {
Obj x140663453990119 = makeCons(body, Nil);
Obj x140663453990151 = makeCons(expr, x140663453990119);
Obj x140663453990215 = makeCons(pat, x140663453990151);
Obj x140663453990279 = makeCons(symlet, x140663453990215);
__nargs = 2;
__arg1 = x140663453990279;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 11, clofun4, 4, expr, body, cc, pat);
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

label11:
{
Obj x140663453990631 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140663453990631) {
Obj x140663453946119 = PRIM_CAR(pat);
Obj x140663453946215 = PRIM_EQ(x140663453946119, symquote);
if (True == x140663453946215) {
Obj x140663453947495 = makeCons(expr, Nil);
Obj x140663453947527 = makeCons(pat, x140663453947495);
Obj x140663453947559 = makeCons(sym_61, x140663453947527);
Obj x140663453948263 = makeCons(cc, Nil);
Obj x140663453948359 = makeCons(x140663453948263, Nil);
Obj x140663453948391 = makeCons(body, x140663453948359);
Obj x140663453948455 = makeCons(x140663453947559, x140663453948391);
Obj x140663453948487 = makeCons(symif, x140663453948455);
__nargs = 2;
__arg1 = x140663453948487;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663453948935 = PRIM_CAR(pat);
Obj x140663453949031 = PRIM_EQ(x140663453948935, symcons);
if (True == x140663453949031) {
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
PUSH_CONT_0(co, 12, clofun4);
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

label12:
{
Obj x140663453909031 = __arg1;
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = x140663453909031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x = __arg1;
pushCont(co, 14, clofun4, 1, x);
__nargs = 2;
__arg0 = globalRef(symatom_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140663454501191 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140663454501191) {
Obj x140663454501703 = primIsSymbol(x);
Obj x140663454501735 = primNot(x140663454501703);
if (True == x140663454501735) {
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

label15:
{
Obj pat = __arg1;
Obj expr = __arg2;
Obj body = __arg3;
Obj cc = co->args[4];
pushCont(co, 16, clofun4, 4, pat, expr, body, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140663454886599 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = x140663454886599;
pushCont(co, 17, clofun4, 4, expr, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = pat;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140663454886919 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = x140663454886919;
Obj x140663454887239 = PRIM_ISCONS(expr);
if (True == x140663454887239) {
Obj x140663454887751 = PRIM_CAR(expr);
Obj x140663454887815 = PRIM_EQ(x140663454887751, symcons);
if (True == x140663454887815) {
if (True == True) {
pushCont(co, 30, clofun4, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140663454603207 = makeCons(expr, Nil);
Obj x140663454603239 = makeCons(symcons_63, x140663454603207);
Obj x140663454604167 = makeCons(expr, Nil);
Obj x140663454604199 = makeCons(symcar, x140663454604167);
Obj x140663454604839 = makeCons(expr, Nil);
Obj x140663454604871 = makeCons(symcdr, x140663454604839);
pushCont(co, 28, clofun4, 4, x, x140663454604199, cc, x140663454603239);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = x140663454604871;
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
pushCont(co, 25, clofun4, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140663454583399 = makeCons(expr, Nil);
Obj x140663454583431 = makeCons(symcons_63, x140663454583399);
Obj x140663454584295 = makeCons(expr, Nil);
Obj x140663454584327 = makeCons(symcar, x140663454584295);
Obj x140663454540007 = makeCons(expr, Nil);
Obj x140663454540039 = makeCons(symcdr, x140663454540007);
pushCont(co, 23, clofun4, 4, x, x140663454584327, cc, x140663454583431);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = x140663454540039;
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
pushCont(co, 20, clofun4, 5, expr, y, body, x, cc);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140663454542919 = makeCons(expr, Nil);
Obj x140663454542951 = makeCons(symcons_63, x140663454542919);
Obj x140663454498823 = makeCons(expr, Nil);
Obj x140663454498855 = makeCons(symcar, x140663454498823);
Obj x140663454499495 = makeCons(expr, Nil);
Obj x140663454499527 = makeCons(symcdr, x140663454499495);
pushCont(co, 18, clofun4, 4, x, x140663454498855, cc, x140663454542951);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = x140663454499527;
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

label18:
{
Obj x140663454499751 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663454498855= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140663454542951= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 19, clofun4, 2, cc, x140663454542951);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = x140663454498855;
__arg3 = x140663454499751;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140663454499815 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663454542951= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663454500231 = makeCons(cc, Nil);
Obj x140663454500295 = makeCons(x140663454500231, Nil);
Obj x140663454500359 = makeCons(x140663454499815, x140663454500295);
Obj x140663454500391 = makeCons(x140663454542951, x140663454500359);
Obj x140663454500423 = makeCons(symif, x140663454500391);
__nargs = 2;
__arg1 = x140663454500423;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj x140663454541159 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = x140663454541159;
pushCont(co, 21, clofun4, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140663454541447 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = x140663454541447;
pushCont(co, 22, clofun4, 3, x, e1, cc);
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

label22:
{
Obj x140663454542055 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = x140663454542055;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140663454540199 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663454584327= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140663454583431= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 24, clofun4, 2, cc, x140663454583431);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = x140663454584327;
__arg3 = x140663454540199;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140663454540263 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663454583431= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663454540743 = makeCons(cc, Nil);
Obj x140663454540807 = makeCons(x140663454540743, Nil);
Obj x140663454540839 = makeCons(x140663454540263, x140663454540807);
Obj x140663454540871 = makeCons(x140663454583431, x140663454540839);
Obj x140663454540903 = makeCons(symif, x140663454540871);
__nargs = 2;
__arg1 = x140663454540903;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x140663454581575 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = x140663454581575;
pushCont(co, 26, clofun4, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140663454581831 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = x140663454581831;
pushCont(co, 27, clofun4, 3, x, e1, cc);
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

label27:
{
Obj x140663454582375 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = x140663454582375;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140663454605127 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663454604199= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140663454603239= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 29, clofun4, 2, cc, x140663454603239);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = x140663454604199;
__arg3 = x140663454605127;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x140663454605191 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663454603239= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663454581031 = makeCons(cc, Nil);
Obj x140663454581095 = makeCons(x140663454581031, Nil);
Obj x140663454581127 = makeCons(x140663454605191, x140663454581095);
Obj x140663454581159 = makeCons(x140663454603239, x140663454581127);
Obj x140663454581191 = makeCons(symif, x140663454581159);
__nargs = 2;
__arg1 = x140663454581191;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x140663454601351 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = x140663454601351;
pushCont(co, 31, clofun4, 5, y, body, x, e1, cc);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = expr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140663454601703 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = x140663454601703;
pushCont(co, 32, clofun4, 3, x, e1, cc);
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

label32:
{
Obj x140663454602311 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = x140663454602311;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj exp = __arg1;
Obj x140663454885991 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = x140663454885991;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj pat = __arg1;
Obj x140663454900167 = PRIM_CDR(pat);
pushCont(co, 35, clofun4, 1, pat);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140663454900167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140663454900199 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140663454900199) {
Obj x140663454884007 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = x140663454884007;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663454884583 = PRIM_CAR(pat);
Obj x140663454885127 = PRIM_CDR(pat);
pushCont(co, 36, clofun4, 1, x140663454884583);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = x140663454885127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj x140663454885159 = __arg1;
Obj x140663454884583= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663454885223 = makeCons(x140663454885159, Nil);
Obj x140663454885255 = makeCons(x140663454884583, x140663454885223);
Obj x140663454885287 = makeCons(symcons, x140663454885255);
__nargs = 2;
__arg1 = x140663454885287;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj x = __arg1;
Obj x140663454899111 = PRIM_EQ(x, True);
if (True == x140663454899111) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663454899399 = PRIM_EQ(x, False);
if (True == x140663454899399) {
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

label38:
{
Obj exp = __arg1;
Obj x140663454898471 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = x140663454898471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj l = __arg1;
Obj x140663454920039 = PRIM_EQ(Nil, l);
if (True == x140663454920039) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663454920455 = PRIM_CAR(l);
Obj x140663454920519 = PRIM_EQ(x140663454920455, False);
if (True == x140663454920519) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663454896359 = PRIM_CDR(l);
pushCont(co, 40, clofun4, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = x140663454896359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label40:
{
Obj x140663454896391 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = x140663454896391;
Obj x140663454896679 = PRIM_EQ(more, False);
if (True == x140663454896679) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663454897223 = PRIM_CAR(l);
Obj x140663454897671 = makeCons(False, Nil);
Obj x140663454897703 = makeCons(more, x140663454897671);
Obj x140663454897735 = makeCons(x140663454897223, x140663454897703);
Obj x140663454897767 = makeCons(symif, x140663454897735);
__nargs = 2;
__arg1 = x140663454897767;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label41:
{
Obj exp = __arg1;
Obj x140663454919399 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = x140663454919399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj l = __arg1;
Obj x140663454949127 = PRIM_EQ(l, Nil);
if (True == x140663454949127) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663454916775 = PRIM_CAR(l);
Obj x140663454916839 = PRIM_EQ(x140663454916775, True);
if (True == x140663454916839) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663454917287 = PRIM_CDR(l);
pushCont(co, 43, clofun4, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = x140663454917287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label43:
{
Obj x140663454917319 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = x140663454917319;
Obj x140663454917607 = PRIM_EQ(more, True);
if (True == x140663454917607) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663454918151 = PRIM_CAR(l);
Obj x140663454918599 = makeCons(more, Nil);
Obj x140663454918631 = makeCons(True, x140663454918599);
Obj x140663454918663 = makeCons(x140663454918151, x140663454918631);
Obj x140663454918695 = makeCons(symif, x140663454918663);
__nargs = 2;
__arg1 = x140663454918695;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label44:
{
Obj exp = __arg1;
Obj x140663454946055 = PRIM_CDR(exp);
Obj x140663454946087 = PRIM_EQ(Nil, x140663454946055);
if (True == x140663454946087) {
Obj x140663454946503 = makeCons(makeCString("no cond match"), Nil);
Obj x140663454946535 = makeCons(symerror, x140663454946503);
__nargs = 2;
__arg1 = x140663454946535;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 45, clofun4, 1, exp);
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

label45:
{
Obj x140663454946791 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = x140663454946791;
Obj x140663454947335 = PRIM_CAR(curr);
pushCont(co, 46, clofun4, 2, exp, x140663454947335);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = curr;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140663454947719 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663454947335= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 47, clofun4, 2, x140663454947719, x140663454947335);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140663454948295 = __arg1;
Obj x140663454947719= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663454947335= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663454948327 = makeCons(symcond, x140663454948295);
Obj x140663454948391 = makeCons(x140663454948327, Nil);
Obj x140663454948423 = makeCons(x140663454947719, x140663454948391);
Obj x140663454948455 = makeCons(x140663454947335, x140663454948423);
Obj x140663454948487 = makeCons(symif, x140663454948455);
__nargs = 2;
__arg1 = x140663454948487;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label48:
{
Obj exp = __arg1;
Obj x140663454978023 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = x140663454978023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj exp = __arg1;
Obj x140663454975431 = PRIM_CDR(exp);
pushCont(co, 0, clofun5, 1, exp);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140663454975431;
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

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140663454975463 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140663454975463) {
Obj x140663454975655 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = x140663454975655;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663454976199 = PRIM_CAR(exp);
pushCont(co, 1, clofun5, 2, exp, x140663454976199);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj x140663454976583 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663454976199= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 2, clofun5, 2, x140663454976583, x140663454976199);
__nargs = 2;
__arg0 = globalRef(symcddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x140663454977127 = __arg1;
Obj x140663454976583= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663454976199= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 3, clofun5, 2, x140663454976583, x140663454976199);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = x140663454977127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140663454977159 = __arg1;
Obj x140663454976583= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663454976199= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663454977223 = makeCons(x140663454977159, Nil);
Obj x140663454977255 = makeCons(x140663454976583, x140663454977223);
Obj x140663454977287 = makeCons(x140663454976199, x140663454977255);
Obj x140663454977319 = makeCons(symlet, x140663454977287);
__nargs = 2;
__arg1 = x140663454977319;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj x = __arg1;
Obj x140663454974631 = PRIM_ISCONS(x);
Obj x140663454974663 = primNot(x140663454974631);
__nargs = 2;
__arg1 = x140663454974663;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj x = __arg1;
Obj l = __arg2;
Obj x140663453907175 = PRIM_ISCONS(l);
if (True == x140663453907175) {
Obj x140663453907655 = PRIM_CAR(l);
Obj x140663453907719 = PRIM_EQ(x140663453907655, x);
if (True == x140663453907719) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663453908135 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symelem_63);
__arg1 = x;
__arg2 = x140663453908135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label6:
{
Obj exp = __arg1;
pushCont(co, 7, clofun5, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140663453905127 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun5, 2, exp, x140663453905127);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140663453905863 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453905127= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 9, clofun5, 2, x140663453905863, x140663453905127);
__nargs = 2;
__arg0 = globalRef(symcadddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140663453906279 = __arg1;
Obj x140663453905863= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453905127= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663453906343 = makeCons(x140663453906279, Nil);
Obj x140663453906375 = makeCons(x140663453905863, x140663453906343);
Obj x140663453906407 = makeCons(symlambda, x140663453906375);
Obj x140663453906471 = makeCons(x140663453906407, Nil);
Obj x140663453906503 = makeCons(x140663453905127, x140663453906471);
Obj x140663453906535 = makeCons(symdef, x140663453906503);
__nargs = 2;
__arg1 = x140663453906535;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj exp = __arg1;
Obj x140663453912391 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = x140663453912391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj exp = __arg1;
pushCont(co, 12, clofun5, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140663453909735 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453909799 = makeCons(x140663453909735, Nil);
Obj x140663453909831 = makeCons(symquote, x140663453909799);
pushCont(co, 13, clofun5, 2, exp, x140663453909831);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140663453910695 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453909831= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 14, clofun5, 2, x140663453910695, x140663453909831);
__nargs = 2;
__arg0 = globalRef(symcdddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140663453910919 = __arg1;
Obj x140663453910695= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453909831= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140663453910951 = makeCons(x140663453910695, x140663453910919);
Obj x140663453910983 = makeCons(symlambda, x140663453910951);
Obj x140663453911047 = makeCons(x140663453910983, Nil);
Obj x140663453911079 = makeCons(x140663453909831, x140663453911047);
Obj x140663453911111 = makeCons(symcora_47init_35add_45to_45_42macros_42, x140663453911079);
__nargs = 2;
__arg1 = x140663453911111;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj exp = __arg1;
Obj x140663453989735 = PRIM_ISCONS(exp);
if (True == x140663453989735) {
Obj x140663453990183 = PRIM_CAR(exp);
Obj x140663453990247 = PRIM_EQ(x140663453990183, globalRef(sym_42protect_45symbol_42));
if (True == x140663453990247) {
Obj x140663453990471 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = x140663453990471;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663453945863 = PRIM_CAR(exp);
Obj x140663453945991 = PRIM_EQ(x140663453945863, symlambda);
if (True == x140663453945991) {
pushCont(co, 18, clofun5, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140663453947847 = PRIM_CAR(exp);
Obj x140663453947911 = PRIM_EQ(x140663453947847, symquote);
if (True == x140663453947911) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 16, clofun5, 1, exp);
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

label16:
{
Obj x140663453949095 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(17, clofun5, 1, 1, exp);
__arg1 = x140663453949095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj exp1 = __arg1;
Obj x140663453948423 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == x140663453948423) {
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

label18:
{
Obj x140663453946599 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 19, clofun5, 1, x140663453946599);
__nargs = 2;
__arg0 = globalRef(symcaddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140663453947207 = __arg1;
Obj x140663453946599= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 20, clofun5, 1, x140663453946599);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = x140663453947207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140663453947239 = __arg1;
Obj x140663453946599= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663453947303 = makeCons(x140663453947239, Nil);
Obj x140663453947335 = makeCons(x140663453946599, x140663453947303);
Obj x140663453947399 = makeCons(symlambda, x140663453947335);
__nargs = 2;
__arg1 = x140663453947399;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label21:
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

label22:
{
Obj exp = __arg1;
Obj macros = __arg2;
Obj x140663454500327 = PRIM_EQ(Nil, macros);
if (True == x140663454500327) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140663453988487 = PRIM_CAR(macros);
__nargs = 2;
__arg0 = makeNative(23, clofun5, 1, 2, exp, macros);
__arg1 = x140663453988487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj item = __arg1;
Obj x140663454500839 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140663454500839) {
Obj x140663454501255 = PRIM_CAR(closureRef(co, 0));
Obj x140663454501479 = PRIM_CAR(item);
Obj x140663454501511 = PRIM_EQ(x140663454501255, x140663454501479);
if (True == x140663454501511) {
if (True == True) {
Obj x140663454501831 = PRIM_CDR(item);
__nargs = 2;
__arg0 = x140663454501831;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140663454502247 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = x140663454502247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj x140663454502567 = PRIM_CDR(item);
__nargs = 2;
__arg0 = x140663454502567;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140663453987079 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = x140663453987079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj x140663453987751 = PRIM_CDR(item);
__nargs = 2;
__arg0 = x140663453987751;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140663453988199 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = x140663453988199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label24:
{
Obj n = __arg1;
Obj v = __arg2;
Obj x140663454499591 = makeCons(n, v);
Obj x140663454499655 = makeCons(x140663454499591, globalRef(sym_42macros_42));
Obj x140663454499687 = primSet(co, sym_42macros_42, x140663454499655);
__nargs = 2;
__arg1 = x140663454499687;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
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

label26:
{
Obj res = __arg1;
Obj f = __arg2;
Obj l = __arg3;
Obj x140663454541223 = PRIM_ISCONS(l);
if (True == x140663454541223) {
Obj x140663454541895 = PRIM_CAR(l);
pushCont(co, 27, clofun5, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = x140663454541895;
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

label27:
{
Obj x140663454541927 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140663454541991 = makeCons(x140663454541927, res);
Obj x140663454542247 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symmap_45h);
__arg1 = x140663454541991;
__arg2 = f;
__arg3 = x140663454542247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj res = __arg1;
Obj l = __arg2;
Obj x140663454584391 = PRIM_ISCONS(l);
if (True == x140663454584391) {
Obj x140663454539847 = PRIM_CAR(l);
Obj x140663454539911 = makeCons(x140663454539847, res);
Obj x140663454540135 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35reverse_45h);
__arg1 = x140663454539911;
__arg2 = x140663454540135;
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

label29:
{
Obj x = __arg1;
Obj x140663454583783 = PRIM_ISCONS(x);
__nargs = 2;
__arg1 = x140663454583783;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj exp = __arg1;
Obj x140663454581991 = PRIM_ISCONS(exp);
if (True == x140663454581991) {
Obj x140663454582535 = PRIM_CAR(exp);
Obj x140663454583079 = PRIM_CDR(exp);
pushCont(co, 31, clofun5, 1, x140663454582535);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = x140663454583079;
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

label31:
{
Obj x140663454583111 = __arg1;
Obj x140663454582535= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140663454583175 = makeCons(x140663454583111, Nil);
Obj x140663454583207 = makeCons(x140663454582535, x140663454583175);
Obj x140663454583239 = makeCons(symcons, x140663454583207);
__nargs = 2;
__arg1 = x140663454583239;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj x = __arg1;
Obj x140663454581319 = PRIM_CDR(x);
Obj x140663454581351 = PRIM_CDR(x140663454581319);
Obj x140663454581383 = PRIM_CDR(x140663454581351);
__nargs = 2;
__arg1 = x140663454581383;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label33:
{
Obj x = __arg1;
Obj x140663454604935 = PRIM_CDR(x);
Obj x140663454604967 = PRIM_CDR(x140663454604935);
Obj x140663454604999 = PRIM_CDR(x140663454604967);
Obj x140663454605031 = PRIM_CAR(x140663454604999);
__nargs = 2;
__arg1 = x140663454605031;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x = __arg1;
Obj x140663454603847 = PRIM_CDR(x);
Obj x140663454603879 = PRIM_CDR(x140663454603847);
Obj x140663454603911 = PRIM_CAR(x140663454603879);
__nargs = 2;
__arg1 = x140663454603911;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj x = __arg1;
Obj x140663454602951 = PRIM_CDR(x);
Obj x140663454602983 = PRIM_CDR(x140663454602951);
__nargs = 2;
__arg1 = x140663454602983;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj x = __arg1;
Obj x140663454602215 = PRIM_CAR(x);
Obj x140663454602247 = PRIM_CDR(x140663454602215);
__nargs = 2;
__arg1 = x140663454602247;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj x = __arg1;
Obj x140663454601479 = PRIM_CAR(x);
Obj x140663454601511 = PRIM_CAR(x140663454601479);
__nargs = 2;
__arg1 = x140663454601511;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
Obj x = __arg1;
Obj x140663454887463 = PRIM_CDR(x);
Obj x140663454887495 = PRIM_CAR(x140663454887463);
__nargs = 2;
__arg1 = x140663454887495;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label39:
{
Obj x = __arg1;
Obj x140663454886759 = PRIM_EQ(x, Nil);
__nargs = 2;
__arg1 = x140663454886759;
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

