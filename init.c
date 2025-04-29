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
Obj x140166664293415 = primSet(co, symnull_63, makeNative(32, clofun5, 1, 0));
Obj x140166664294375 = primSet(co, symcadr, makeNative(31, clofun5, 1, 0));
Obj x140166664131559 = primSet(co, symcaar, makeNative(30, clofun5, 1, 0));
Obj x140166664132551 = primSet(co, symcdar, makeNative(29, clofun5, 1, 0));
Obj x140166664133383 = primSet(co, symcddr, makeNative(28, clofun5, 1, 0));
Obj x140166664134535 = primSet(co, symcaddr, makeNative(27, clofun5, 1, 0));
Obj x140166664115271 = primSet(co, symcadddr, makeNative(26, clofun5, 1, 0));
Obj x140166664116231 = primSet(co, symcdddr, makeNative(25, clofun5, 1, 0));
Obj x140166664118151 = primSet(co, symrcons, makeNative(23, clofun5, 1, 0));
Obj x140166664085959 = primSet(co, sympair_63, makeNative(22, clofun5, 1, 0));
Obj x140166664087399 = primSet(co, symcora_47init_35reverse_45h, makeNative(21, clofun5, 2, 0));
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
Obj x140166664087847 = __arg1;
Obj x140166664087879 = primSet(co, symreverse, x140166664087847);
Obj x140166664081479 = primSet(co, symmap_45h, makeNative(19, clofun5, 3, 0));
Obj x140166664082055 = primSet(co, symmap, makeNative(18, clofun5, 2, 0));
Obj x140166664082343 = primSet(co, sym_42macros_42, Nil);
Obj x140166664082759 = primGenSym();
Obj x140166664082791 = primSet(co, sym_42protect_45symbol_42, x140166664082759);
Obj x140166664083815 = primSet(co, symcora_47init_35add_45to_45_42macros_42, makeNative(17, clofun5, 2, 0));
Obj x140166664075783 = primSet(co, symcora_47init_35macroexpand1_45h, makeNative(15, clofun5, 2, 0));
Obj x140166664076327 = primSet(co, symcora_47init_35macroexpand1, makeNative(14, clofun5, 1, 0));
Obj x140166665232103 = primSet(co, symcora_47init_35macroexpand_45boot, makeNative(8, clofun5, 1, 0));
Obj x140166665162759 = primSet(co, symmacroexpand, globalRef(symcora_47init_35macroexpand_45boot));
Obj x140166665165255 = primSet(co, symdefmacro_45macro, makeNative(4, clofun5, 1, 0));
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
Obj x140166665165543 = __arg1;
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
Obj x140166665166247 = __arg1;
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
Obj x140166665045639 = __arg1;
Obj x140166665047111 = primSet(co, symelem_63, makeNative(48, clofun4, 2, 0));
Obj x140166665047879 = primSet(co, symatom_63, makeNative(47, clofun4, 1, 0));
Obj x140166664833447 = primSet(co, symcora_47init_35rewrite_45let, makeNative(42, clofun4, 1, 0));
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
Obj x140166664834151 = __arg1;
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
Obj x140166664694023 = __arg1;
Obj x140166664471687 = primSet(co, symcora_47init_35rewrite_45or, makeNative(35, clofun4, 1, 0));
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
Obj x140166664472391 = __arg1;
Obj x140166664291463 = primSet(co, symcora_47init_35rewrite_45and, makeNative(32, clofun4, 1, 0));
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
Obj x140166664292455 = __arg1;
Obj x140166664293607 = primSet(co, symboolean_63, makeNative(30, clofun4, 1, 0));
Obj x140166664133159 = primSet(co, symcora_47init_35rcons1, makeNative(27, clofun4, 1, 0));
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
Obj x140166664134183 = __arg1;
Obj x140166663950887 = primSet(co, symcora_47init_35match_45cons_45expander, makeNative(8, clofun4, 4, 0));
Obj x140166663758855 = primSet(co, symcora_47init_35match1, makeNative(2, clofun4, 4, 0));
Obj x140166665228583 = primSet(co, symcora_47init_35extract_45rule_45action, makeNative(44, clofun3, 2, 0));
Obj x140166664833895 = primSet(co, symcora_47init_35match_45helper, makeNative(28, clofun3, 2, 0));
Obj x140166664472871 = primSet(co, symcora_47init_35rewrite_45match, makeNative(21, clofun3, 1, 0));
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
Obj x140166664473447 = __arg1;
Obj x140166664084871 = primSet(co, symcora_47init_35extract_45rules1, makeNative(13, clofun3, 3, 0));
Obj x140166664073255 = primSet(co, symcora_47init_35extract_45rules, makeNative(12, clofun3, 1, 0));
Obj x140166664075175 = primSet(co, symcora_47init_35rules_45patterns, makeNative(9, clofun3, 2, 0));
Obj x140166664076743 = primSet(co, symcora_47init_35length_45h, makeNative(8, clofun3, 2, 0));
Obj x140166663951367 = primSet(co, symlength, makeNative(7, clofun3, 1, 0));
Obj x140166663954087 = primSet(co, symcora_47init_35filter_45h, makeNative(5, clofun3, 3, 0));
Obj x140166663926183 = primSet(co, symfilter, makeNative(4, clofun3, 2, 0));
Obj x140166663927879 = primSet(co, symappend, makeNative(2, clofun3, 2, 0));
Obj x140166663759463 = primSet(co, symcora_47init_35rules_45arg_45count, makeNative(45, clofun2, 1, 0));
Obj x140166663761095 = primSet(co, symcora_47init_35gen_45paramenters, makeNative(43, clofun2, 1, 0));
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
Obj x140166663577287 = __arg1;
Obj x140166665230343 = primSet(co, symcora_47init_35propagate_45boolean0, makeNative(25, clofun2, 1, 0));
Obj x140166663558887 = primSet(co, symcora_47init_35propagate_45boolean, makeNative(2, clofun2, 1, 0));
Obj x140166663559623 = primSet(co, symcora_47init_35rewrite_45namespace, makeNative(1, clofun2, 1, 0));
Obj x140166663560679 = primSet(co, symmacroexpand, makeNative(48, clofun1, 1, 0));
Obj x140166663366343 = primSet(co, symcora_47init_35rewrite_45begin, makeNative(43, clofun1, 1, 0));
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
Obj x140166663367047 = __arg1;
Obj x140166665093575 = primSet(co, symcora_47init_35rewrite_45backquote, makeNative(36, clofun1, 1, 0));
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
Obj x140166665273735 = __arg1;
Obj x140166665096071 = primSet(co, symcora_47init_35parse_45define_45library_45h, makeNative(29, clofun1, 4, 0));
Obj x140166665096679 = primSet(co, symcora_47init_35parse_45define_45library, makeNative(28, clofun1, 2, 0));
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
Obj x140166664834247 = __arg1;
Obj x140166664693639 = primSet(co, symcora_47init_35var_45with_45ns, makeNative(15, clofun1, 2, 0));
Obj x140166664292807 = primSet(co, symcora_47init_35lookup_45var, makeNative(5, clofun1, 3, 0));
Obj x140166664131431 = makeCons(makeCString("primSet"), Nil);
Obj x140166664131463 = makeCons(MAKE_NUMBER(2), x140166664131431);
Obj x140166664131591 = makeCons(symset, x140166664131463);
Obj x140166664133543 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x140166664133575 = makeCons(MAKE_NUMBER(1), x140166664133543);
Obj x140166664133639 = makeCons(symcar, x140166664133575);
Obj x140166664114823 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x140166664114855 = makeCons(MAKE_NUMBER(1), x140166664114823);
Obj x140166664114919 = makeCons(symcdr, x140166664114855);
Obj x140166664116647 = makeCons(makeCString("makeCons"), Nil);
Obj x140166664116679 = makeCons(MAKE_NUMBER(2), x140166664116647);
Obj x140166664116711 = makeCons(symcons, x140166664116679);
Obj x140166664117927 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x140166664118215 = makeCons(MAKE_NUMBER(1), x140166664117927);
Obj x140166664118247 = makeCons(symcons_63, x140166664118215);
Obj x140166664087111 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x140166664087207 = makeCons(MAKE_NUMBER(2), x140166664087111);
Obj x140166664087239 = makeCons(sym_43, x140166664087207);
Obj x140166664088999 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x140166664089031 = makeCons(MAKE_NUMBER(2), x140166664088999);
Obj x140166664089063 = makeCons(sym_45, x140166664089031);
Obj x140166664082151 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x140166664082183 = makeCons(MAKE_NUMBER(2), x140166664082151);
Obj x140166664082215 = makeCons(sym_42, x140166664082183);
Obj x140166664083943 = makeCons(makeCString("primDiv"), Nil);
Obj x140166664083975 = makeCons(MAKE_NUMBER(2), x140166664083943);
Obj x140166664084007 = makeCons(sym_47, x140166664083975);
Obj x140166664085383 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x140166664085415 = makeCons(MAKE_NUMBER(2), x140166664085383);
Obj x140166664085447 = makeCons(sym_61, x140166664085415);
Obj x140166664074567 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x140166664074599 = makeCons(MAKE_NUMBER(2), x140166664074567);
Obj x140166664074631 = makeCons(sym_62, x140166664074599);
Obj x140166664076167 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x140166664076359 = makeCons(MAKE_NUMBER(2), x140166664076167);
Obj x140166664076519 = makeCons(sym_60, x140166664076359);
Obj x140166663951655 = makeCons(makeCString("primGenSym"), Nil);
Obj x140166663951687 = makeCons(MAKE_NUMBER(0), x140166663951655);
Obj x140166663951719 = makeCons(symgensym, x140166663951687);
Obj x140166663952999 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x140166663953031 = makeCons(MAKE_NUMBER(1), x140166663952999);
Obj x140166663953095 = makeCons(symsymbol_63, x140166663953031);
Obj x140166663954375 = makeCons(makeCString("primNot"), Nil);
Obj x140166663925767 = makeCons(MAKE_NUMBER(1), x140166663954375);
Obj x140166663925927 = makeCons(symnot, x140166663925767);
Obj x140166663927239 = makeCons(makeCString("primIsNumber"), Nil);
Obj x140166663927335 = makeCons(MAKE_NUMBER(1), x140166663927239);
Obj x140166663927367 = makeCons(syminteger_63, x140166663927335);
Obj x140166663928903 = makeCons(makeCString("primIsString"), Nil);
Obj x140166663928935 = makeCons(MAKE_NUMBER(1), x140166663928903);
Obj x140166663928967 = makeCons(symstring_63, x140166663928935);
Obj x140166663929127 = makeCons(x140166663928967, Nil);
Obj x140166663929159 = makeCons(x140166663927367, x140166663929127);
Obj x140166663929191 = makeCons(x140166663925927, x140166663929159);
Obj x140166663929223 = makeCons(x140166663953095, x140166663929191);
Obj x140166663929255 = makeCons(x140166663951719, x140166663929223);
Obj x140166663929287 = makeCons(x140166664076519, x140166663929255);
Obj x140166663929319 = makeCons(x140166664074631, x140166663929287);
Obj x140166663929383 = makeCons(x140166664085447, x140166663929319);
Obj x140166663929447 = makeCons(x140166664084007, x140166663929383);
Obj x140166663929607 = makeCons(x140166664082215, x140166663929447);
Obj x140166663929639 = makeCons(x140166664089063, x140166663929607);
Obj x140166663929671 = makeCons(x140166664087239, x140166663929639);
Obj x140166663929703 = makeCons(x140166664118247, x140166663929671);
Obj x140166663929735 = makeCons(x140166664116711, x140166663929703);
Obj x140166663929799 = makeCons(x140166664114919, x140166663929735);
Obj x140166663929831 = makeCons(x140166664133639, x140166663929799);
Obj x140166663757831 = makeCons(x140166664131591, x140166663929831);
Obj x140166663757863 = primSet(co, symcora_47init_35_42builtin_45prims_42, x140166663757831);
Obj x140166663561735 = primSet(co, symassq, makeNative(1, clofun1, 2, 0));
Obj x140166663562983 = primSet(co, symcora_47init_35builtin_63, makeNative(48, clofun0, 1, 0));
Obj x140166664834631 = primSet(co, symcora_47init_35parse, makeNative(15, clofun0, 4, 0));
Obj x140166664473607 = makeCons(symappend, Nil);
Obj x140166664473639 = makeCons(symfilter, x140166664473607);
Obj x140166664473671 = makeCons(symlength, x140166664473639);
Obj x140166664473703 = makeCons(symelem_63, x140166664473671);
Obj x140166664473735 = makeCons(symmacroexpand, x140166664473703);
Obj x140166664473767 = makeCons(symmap, x140166664473735);
Obj x140166664473831 = makeCons(symreverse, x140166664473767);
Obj x140166664473863 = makeCons(symthrow, x140166664473831);
Obj x140166664473959 = makeCons(symtry, x140166664473863);
Obj x140166664473991 = makeCons(symload, x140166664473959);
Obj x140166664474023 = makeCons(symimport, x140166664473991);
Obj x140166664474055 = makeCons(symload_45so, x140166664474023);
Obj x140166664474087 = makeCons(symapply, x140166664474055);
Obj x140166664474151 = makeCons(symvalue_45or, x140166664474087);
Obj x140166664474183 = makeCons(symvalue, x140166664474151);
Obj x140166664474247 = makeCons(symread_45file_45as_45sexp, x140166664474183);
Obj x140166664474279 = makeCons(symbytes_45length, x140166664474247);
Obj x140166664474599 = makeCons(symbytes, x140166664474279);
Obj x140166664290343 = makeCons(symvector_45length, x140166664474599);
Obj x140166664290407 = makeCons(symvector_45ref, x140166664290343);
Obj x140166664290471 = makeCons(symvector_45set_33, x140166664290407);
Obj x140166664290503 = makeCons(symvector, x140166664290471);
Obj x140166664290631 = makeCons(symsymbol_45_62string, x140166664290503);
Obj x140166664290663 = makeCons(symintern, x140166664290631);
Obj x140166664290791 = makeCons(symstring_45append, x140166664290663);
Obj x140166664290887 = makeCons(symnull_63, x140166664290791);
Obj x140166664290919 = makeCons(symnumber_63, x140166664290887);
Obj x140166664290951 = makeCons(symboolean_63, x140166664290919);
Obj x140166664290983 = makeCons(symatom_63, x140166664290951);
Obj x140166664291047 = makeCons(sympair_63, x140166664290983);
Obj x140166664291111 = makeCons(symcdddr, x140166664291047);
Obj x140166664291207 = makeCons(symcadddr, x140166664291111);
Obj x140166664291239 = makeCons(symcaddr, x140166664291207);
Obj x140166664291527 = makeCons(symcddr, x140166664291239);
Obj x140166664291559 = makeCons(symcdar, x140166664291527);
Obj x140166664291591 = makeCons(symcaar, x140166664291559);
Obj x140166664291655 = makeCons(symcadr, x140166664291591);
Obj x140166664291687 = primSet(co, symcora_47init_35_42ns_45export_42, x140166664291655);
Obj x140166664292679 = primSet(co, symcora_47init_35cadr, globalRef(symcadr));
Obj x140166664293095 = primSet(co, symcora_47init_35caar, globalRef(symcaar));
Obj x140166664293703 = primSet(co, symcora_47init_35cdar, globalRef(symcdar));
Obj x140166664130887 = primSet(co, symcora_47init_35cddr, globalRef(symcddr));
Obj x140166664131847 = primSet(co, symcora_47init_35caddr, globalRef(symcaddr));
Obj x140166664132391 = primSet(co, symcora_47init_35cadddr, globalRef(symcadddr));
Obj x140166664133255 = primSet(co, symcora_47init_35cdddr, globalRef(symcdddr));
Obj x140166664133959 = primSet(co, symcora_47init_35pair_63, globalRef(sympair_63));
Obj x140166664134631 = primSet(co, symcora_47init_35atom_63, globalRef(symatom_63));
Obj x140166664114727 = primSet(co, symcora_47init_35boolean_63, globalRef(symboolean_63));
Obj x140166664115495 = primSet(co, symcora_47init_35null_63, globalRef(symnull_63));
Obj x140166664116039 = primSet(co, symcora_47init_35number_63, globalRef(symnumber_63));
Obj x140166664116775 = primSet(co, symcora_47init_35string_45append, globalRef(symstring_45append));
Obj x140166664117223 = primSet(co, symcora_47init_35intern, globalRef(symintern));
Obj x140166664117703 = primSet(co, symcora_47init_35symbol_45_62string, globalRef(symsymbol_45_62string));
Obj x140166664085799 = primSet(co, symcora_47init_35vector, globalRef(symvector));
Obj x140166664086311 = primSet(co, symcora_47init_35vector_45set_33, globalRef(symvector_45set_33));
Obj x140166664086983 = primSet(co, symcora_47init_35vector_45ref, globalRef(symvector_45ref));
Obj x140166664087623 = primSet(co, symcora_47init_35vector_45length, globalRef(symvector_45length));
Obj x140166664088423 = primSet(co, symcora_47init_35bytes, globalRef(symbytes));
Obj x140166664089191 = primSet(co, symcora_47init_35bytes_45length, globalRef(symbytes_45length));
Obj x140166664081607 = primSet(co, symcora_47init_35value, globalRef(symvalue));
Obj x140166664081959 = primSet(co, symcora_47init_35value_45or, globalRef(symvalue_45or));
Obj x140166664082695 = primSet(co, symcora_47init_35read_45file_45as_45sexp, globalRef(symread_45file_45as_45sexp));
Obj x140166664083143 = primSet(co, symcora_47init_35apply, globalRef(symapply));
Obj x140166664083879 = primSet(co, symcora_47init_35load, globalRef(symload));
Obj x140166664084583 = primSet(co, symcora_47init_35load_45so, globalRef(symload_45so));
Obj x140166664085031 = primSet(co, symcora_47init_35import, globalRef(symimport));
Obj x140166664073223 = primSet(co, symcora_47init_35try, globalRef(symtry));
Obj x140166664073799 = primSet(co, symcora_47init_35throw, globalRef(symthrow));
Obj x140166664074279 = primSet(co, symcora_47init_35reverse, globalRef(symreverse));
Obj x140166664074951 = primSet(co, symcora_47init_35map, globalRef(symmap));
Obj x140166664075431 = primSet(co, symcora_47init_35macroexpand, globalRef(symmacroexpand));
Obj x140166664076103 = primSet(co, symcora_47init_35elem_63, globalRef(symelem_63));
Obj x140166663950599 = primSet(co, symcora_47init_35length, globalRef(symlength));
Obj x140166663951047 = primSet(co, symcora_47init_35filter, globalRef(symfilter));
Obj x140166663951815 = primSet(co, symcora_47init_35append, globalRef(symappend));
Obj x140166663952167 = primSet(co, symcora_47init_35assq, globalRef(symassq));
__nargs = 2;
__arg1 = x140166663952167;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj x140166664130727 = __arg1;
Obj x140166664130759 = __arg2;
Obj x140166664130791 = __arg3;
Obj x140166664130823 = co->args[4];
Obj x140166664131175 = makeNative(19, clofun0, 0, 4, x140166664130727, x140166664130759, x140166664130791, x140166664130823);
Obj __ = x140166664130727;
__ = x140166664130759;
__ = x140166664130791;
Obj x = x140166664130823;
pushCont(co, 16, clofun0, 2, x, x140166664131175);
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
Obj x140166664831623 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664131175= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140166664831623) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664131175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj x140166664832135 = primIsString(x);
if (True == x140166664832135) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664131175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 17, clofun0, 2, x, x140166664131175);
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
Obj x140166664832807 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664131175= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140166664832807) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664131175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 18, clofun0, 2, x, x140166664131175);
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
Obj x140166664833991 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664131175= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140166664833991) {
if (True == True) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664131175;
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
__arg0 = x140166664131175;
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
Obj x140166664131911 = makeNative(20, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj __ = closureRef(co, 0);
__ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj x140166665091847 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140166665091847) {
Obj x140166665092423 = PRIM_CAR(closureRef(co, 3));
Obj x140166665092455 = PRIM_EQ(symquote, x140166665092423);
if (True == x140166665092455) {
Obj x140166665092871 = PRIM_CDR(closureRef(co, 3));
Obj x140166665092903 = PRIM_ISCONS(x140166665092871);
if (True == x140166665092903) {
Obj x140166665044391 = PRIM_CDR(closureRef(co, 3));
Obj x140166665044423 = PRIM_CAR(x140166665044391);
Obj x = x140166665044423;
Obj x140166665045511 = PRIM_CDR(closureRef(co, 3));
Obj x140166665045671 = PRIM_CDR(x140166665045511);
Obj x140166665045703 = PRIM_EQ(Nil, x140166665045671);
if (True == x140166665045703) {
Obj x140166665046663 = makeCons(x, Nil);
Obj x140166665046727 = makeCons(symquote, x140166665046663);
__nargs = 2;
__arg1 = x140166665046727;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664131911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj x140166664132903 = makeNative(22, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x = closureRef(co, 3);
Obj x140166665090663 = primIsSymbol(x);
if (True == x140166665090663) {
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
__arg0 = x140166664132903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj x140166665090951 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140166665090951) {
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
Obj x140166664133607 = makeNative(25, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140166665165735 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140166665165735) {
Obj x140166665166631 = PRIM_CAR(closureRef(co, 3));
Obj x140166665166663 = PRIM_EQ(symlambda, x140166665166631);
if (True == x140166665166663) {
Obj x140166665093447 = PRIM_CDR(closureRef(co, 3));
Obj x140166665093479 = PRIM_ISCONS(x140166665093447);
if (True == x140166665093479) {
Obj x140166665093927 = PRIM_CDR(closureRef(co, 3));
Obj x140166665093959 = PRIM_CAR(x140166665093927);
Obj args = x140166665093959;
Obj x140166665094663 = PRIM_CDR(closureRef(co, 3));
Obj x140166665094695 = PRIM_CDR(x140166665094663);
Obj x140166665094759 = PRIM_ISCONS(x140166665094695);
if (True == x140166665094759) {
Obj x140166665095367 = PRIM_CDR(closureRef(co, 3));
Obj x140166665095399 = PRIM_CDR(x140166665095367);
Obj x140166665095431 = PRIM_CAR(x140166665095399);
Obj body = x140166665095431;
Obj x140166665096231 = PRIM_CDR(closureRef(co, 3));
Obj x140166665096263 = PRIM_CDR(x140166665096231);
Obj x140166665096295 = PRIM_CDR(x140166665096263);
Obj x140166665096327 = PRIM_EQ(Nil, x140166665096295);
if (True == x140166665096327) {
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
__arg0 = x140166664133607;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664133607;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664133607;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664133607;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664133607;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj x140166665089095 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 24, clofun0, 1, args);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = x140166665089095;
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
Obj x140166665089223 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166665089287 = makeCons(x140166665089223, Nil);
Obj x140166665089319 = makeCons(args, x140166665089287);
Obj x140166665089351 = makeCons(symlambda, x140166665089319);
__nargs = 2;
__arg1 = x140166665089351;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x140166664114311 = makeNative(28, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140166665354471 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140166665354471) {
Obj x140166665354919 = PRIM_CAR(closureRef(co, 3));
Obj x140166665354951 = PRIM_EQ(symdo, x140166665354919);
if (True == x140166665354951) {
Obj x140166665334919 = PRIM_CDR(closureRef(co, 3));
Obj x140166665334951 = PRIM_ISCONS(x140166665334919);
if (True == x140166665334951) {
Obj x140166665335719 = PRIM_CDR(closureRef(co, 3));
Obj x140166665335751 = PRIM_CAR(x140166665335719);
Obj x140166665335783 = PRIM_ISCONS(x140166665335751);
if (True == x140166665335783) {
Obj x140166665336551 = PRIM_CDR(closureRef(co, 3));
Obj x140166665336583 = PRIM_CAR(x140166665336551);
Obj x140166665336615 = PRIM_CAR(x140166665336583);
Obj x140166665336647 = PRIM_EQ(symimport, x140166665336615);
if (True == x140166665336647) {
Obj x140166665337479 = PRIM_CDR(closureRef(co, 3));
Obj x140166665337511 = PRIM_CAR(x140166665337479);
Obj x140166665337543 = PRIM_CDR(x140166665337511);
Obj x140166665337575 = PRIM_ISCONS(x140166665337543);
if (True == x140166665337575) {
Obj x140166665273415 = PRIM_CDR(closureRef(co, 3));
Obj x140166665273447 = PRIM_CAR(x140166665273415);
Obj x140166665273479 = PRIM_CDR(x140166665273447);
Obj x140166665273511 = PRIM_CAR(x140166665273479);
Obj pkg = x140166665273511;
Obj x140166665274631 = PRIM_CDR(closureRef(co, 3));
Obj x140166665274663 = PRIM_CAR(x140166665274631);
Obj x140166665274695 = PRIM_CDR(x140166665274663);
Obj x140166665274727 = PRIM_CDR(x140166665274695);
Obj x140166665274759 = PRIM_EQ(Nil, x140166665274727);
if (True == x140166665274759) {
Obj x140166665275495 = PRIM_CDR(closureRef(co, 3));
Obj x140166665275527 = PRIM_CDR(x140166665275495);
Obj x140166665275559 = PRIM_ISCONS(x140166665275527);
if (True == x140166665275559) {
Obj x140166665276231 = PRIM_CDR(closureRef(co, 3));
Obj x140166665276327 = PRIM_CDR(x140166665276231);
Obj x140166665276359 = PRIM_CAR(x140166665276327);
Obj y = x140166665276359;
Obj x140166665277223 = PRIM_CDR(closureRef(co, 3));
Obj x140166665277255 = PRIM_CDR(x140166665277223);
Obj x140166665277319 = PRIM_CDR(x140166665277255);
Obj x140166665277351 = PRIM_EQ(Nil, x140166665277319);
if (True == x140166665277351) {
Obj x140166665228839 = primIsString(pkg);
if (True == x140166665228839) {
Obj x140166665230631 = makeCons(pkg, Nil);
Obj x140166665230727 = makeCons(symimport, x140166665230631);
pushCont(co, 26, clofun0, 5, pkg, import, env, ns, y);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = x140166665230727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140166664114311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664114311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664114311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664114311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664114311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664114311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664114311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664114311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664114311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664114311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj x140166665230759 = __arg1;
Obj pkg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140166665231687 = makeCons(pkg, import);
pushCont(co, 27, clofun0, 1, x140166665230759);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = x140166665231687;
co->args[4] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140166665231847 = __arg1;
Obj x140166665230759= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166665231911 = makeCons(x140166665231847, Nil);
Obj x140166665231943 = makeCons(x140166665230759, x140166665231911);
Obj x140166665232007 = makeCons(symdo, x140166665231943);
__nargs = 2;
__arg1 = x140166665232007;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj x140166664115527 = makeNative(38, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140166665336871 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140166665336871) {
Obj x140166665337127 = PRIM_CAR(closureRef(co, 3));
Obj op = x140166665337127;
Obj x140166665337383 = PRIM_CDR(closureRef(co, 3));
Obj args = x140166665337383;
pushCont(co, 29, clofun0, 6, env, ns, import, args, op, x140166664115527);
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
__arg0 = x140166664115527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140166665337703 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140166664115527= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
if (True == x140166665337703) {
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
__arg0 = x140166664115527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj x140166665338823 = PRIM_EQ(op, symif);
if (True == x140166665338823) {
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
__arg0 = x140166664115527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj x140166665352231 = PRIM_EQ(op, symdo);
if (True == x140166665352231) {
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
__arg0 = x140166664115527;
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
__arg0 = x140166664115527;
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
Obj x140166665353671 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 31, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140166665353671;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140166665353735 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166665353767 = makeCons(op, x140166665353735);
__nargs = 2;
__arg1 = x140166665353767;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj x140166665352839 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140166665352839;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140166665352903 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166665352935 = makeCons(op, x140166665352903);
__nargs = 2;
__arg1 = x140166665352935;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x140166665351719 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 35, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140166665351719;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140166665351783 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166665351815 = makeCons(op, x140166665351783);
__nargs = 2;
__arg1 = x140166665351815;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj x140166665338311 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 37, clofun0, 1, op);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140166665338311;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140166665338375 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166665338407 = makeCons(op, x140166665338375);
__nargs = 2;
__arg1 = x140166665338407;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
Obj x140166664116263 = makeNative(41, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140166665091015 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140166665091015) {
Obj x140166665091463 = PRIM_CAR(closureRef(co, 3));
Obj x140166665091495 = PRIM_EQ(symlet, x140166665091463);
if (True == x140166665091495) {
Obj x140166665091911 = PRIM_CDR(closureRef(co, 3));
Obj x140166665091943 = PRIM_ISCONS(x140166665091911);
if (True == x140166665091943) {
Obj x140166665092359 = PRIM_CDR(closureRef(co, 3));
Obj x140166665092391 = PRIM_CAR(x140166665092359);
Obj a = x140166665092391;
Obj x140166665092967 = PRIM_CDR(closureRef(co, 3));
Obj x140166665092999 = PRIM_CDR(x140166665092967);
Obj x140166665093031 = PRIM_ISCONS(x140166665092999);
if (True == x140166665093031) {
Obj x140166664655335 = PRIM_CDR(closureRef(co, 3));
Obj x140166664655367 = PRIM_CDR(x140166664655335);
Obj x140166664655399 = PRIM_CAR(x140166664655367);
Obj b = x140166664655399;
Obj x140166664656135 = PRIM_CDR(closureRef(co, 3));
Obj x140166664656167 = PRIM_CDR(x140166664656135);
Obj x140166664656199 = PRIM_CDR(x140166664656167);
Obj x140166664656231 = PRIM_ISCONS(x140166664656199);
if (True == x140166664656231) {
Obj x140166664656967 = PRIM_CDR(closureRef(co, 3));
Obj x140166664656999 = PRIM_CDR(x140166664656967);
Obj x140166664657031 = PRIM_CDR(x140166664656999);
Obj x140166664657063 = PRIM_CAR(x140166664657031);
Obj c = x140166664657063;
Obj x140166664657991 = PRIM_CDR(closureRef(co, 3));
Obj x140166664658023 = PRIM_CDR(x140166664657991);
Obj x140166664658055 = PRIM_CDR(x140166664658023);
Obj x140166664658087 = PRIM_CDR(x140166664658055);
Obj x140166664658119 = PRIM_EQ(Nil, x140166664658087);
if (True == x140166664658119) {
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
__arg0 = x140166664116263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664116263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664116263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664116263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664116263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664116263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140166665334791 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140166665335367 = makeCons(a, env);
pushCont(co, 40, clofun0, 2, x140166665334791, a);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse);
__arg1 = x140166665335367;
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
Obj x140166665335495 = __arg1;
Obj x140166665334791= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166665335559 = makeCons(x140166665335495, Nil);
Obj x140166665335591 = makeCons(x140166665334791, x140166665335559);
Obj x140166665335623 = makeCons(a, x140166665335591);
Obj x140166665335655 = makeCons(symlet, x140166665335623);
__nargs = 2;
__arg1 = x140166665335655;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj x140166664117351 = makeNative(42, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj __ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj x140166663472711 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140166663472711) {
Obj x140166663473159 = PRIM_CAR(closureRef(co, 3));
Obj x140166663473191 = PRIM_EQ(symns, x140166663473159);
if (True == x140166663473191) {
Obj x140166663473831 = PRIM_CDR(closureRef(co, 3));
Obj x140166663473863 = PRIM_ISCONS(x140166663473831);
if (True == x140166663473863) {
Obj x140166663474279 = PRIM_CDR(closureRef(co, 3));
Obj x140166663474311 = PRIM_CAR(x140166663474279);
Obj path = x140166663474311;
Obj x140166663475079 = PRIM_CDR(closureRef(co, 3));
Obj x140166663475111 = PRIM_CDR(x140166663475079);
Obj x140166663475143 = PRIM_ISCONS(x140166663475111);
if (True == x140166663475143) {
Obj x140166663366471 = PRIM_CDR(closureRef(co, 3));
Obj x140166663366503 = PRIM_CDR(x140166663366471);
Obj x140166663366535 = PRIM_CAR(x140166663366503);
Obj import = x140166663366535;
Obj x140166663367335 = PRIM_CDR(closureRef(co, 3));
Obj x140166663367367 = PRIM_CDR(x140166663367335);
Obj x140166663367399 = PRIM_CDR(x140166663367367);
Obj x140166663367431 = PRIM_ISCONS(x140166663367399);
if (True == x140166663367431) {
Obj x140166663368167 = PRIM_CDR(closureRef(co, 3));
Obj x140166663368199 = PRIM_CDR(x140166663368167);
Obj x140166663368231 = PRIM_CDR(x140166663368199);
Obj x140166663368263 = PRIM_CAR(x140166663368231);
Obj body = x140166663368263;
Obj x140166665089415 = PRIM_CDR(closureRef(co, 3));
Obj x140166665089447 = PRIM_CDR(x140166665089415);
Obj x140166665089479 = PRIM_CDR(x140166665089447);
Obj x140166665089511 = PRIM_CDR(x140166665089479);
Obj x140166665089543 = PRIM_EQ(Nil, x140166665089511);
if (True == x140166665089543) {
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
__arg0 = x140166664117351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664117351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664117351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664117351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664117351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664117351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj x140166664085671 = makeNative(45, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj x140166663558759 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140166663558759) {
Obj x140166663559239 = PRIM_CAR(closureRef(co, 3));
Obj x140166663559271 = PRIM_EQ(symdef, x140166663559239);
if (True == x140166663559271) {
Obj x140166663559847 = PRIM_CDR(closureRef(co, 3));
Obj x140166663559879 = PRIM_ISCONS(x140166663559847);
if (True == x140166663559879) {
Obj x140166663560295 = PRIM_CDR(closureRef(co, 3));
Obj x140166663560327 = PRIM_CAR(x140166663560295);
Obj var = x140166663560327;
Obj x140166663561159 = PRIM_CDR(closureRef(co, 3));
Obj x140166663561191 = PRIM_CDR(x140166663561159);
Obj x140166663532551 = PRIM_ISCONS(x140166663561191);
if (True == x140166663532551) {
Obj x140166663533191 = PRIM_CDR(closureRef(co, 3));
Obj x140166663533223 = PRIM_CDR(x140166663533191);
Obj x140166663533255 = PRIM_CAR(x140166663533223);
Obj val = x140166663533255;
Obj x140166663534215 = PRIM_CDR(closureRef(co, 3));
Obj x140166663534247 = PRIM_CDR(x140166663534215);
Obj x140166663534279 = PRIM_CDR(x140166663534247);
Obj x140166663534311 = PRIM_EQ(Nil, x140166663534279);
if (True == x140166663534311) {
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
__arg0 = x140166664085671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664085671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664085671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664085671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664085671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj x140166663534823 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj var1 = x140166663534823;
Obj x140166663535783 = makeCons(var1, Nil);
Obj x140166663535815 = makeCons(symquote, x140166663535783);
pushCont(co, 44, clofun0, 1, x140166663535815);
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
Obj x140166663536487 = __arg1;
Obj x140166663535815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166663536615 = makeCons(x140166663536487, Nil);
Obj x140166663471111 = makeCons(x140166663535815, x140166663536615);
Obj x140166663471143 = makeCons(symset, x140166663471111);
__nargs = 2;
__arg1 = x140166663471143;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj x140166664086631 = makeNative(47, clofun0, 0, 0);
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
Obj x140166663558087 = __arg1;
Obj ls= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = x140166663558087;
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
Obj x140166663562887 = __arg1;
PUSH_CONT_0(co, 0, clofun1);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140166663562887;
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
Obj x140166663562919 = __arg1;
Obj x140166663562951 = primNot(x140166663562919);
__nargs = 2;
__arg1 = x140166663562951;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x140166664290727 = __arg1;
Obj x140166664290759 = __arg2;
Obj x140166664291015 = makeNative(2, clofun1, 0, 2, x140166664290727, x140166664290759);
Obj var = x140166664290727;
Obj x140166663561575 = PRIM_EQ(Nil, x140166664290759);
if (True == x140166663561575) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664291015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj x140166664291495 = makeNative(3, clofun1, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj x140166663761703 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140166663761703) {
Obj x140166663574023 = PRIM_CAR(closureRef(co, 1));
Obj x140166663574087 = PRIM_ISCONS(x140166663574023);
if (True == x140166663574087) {
Obj x140166663574695 = PRIM_CAR(closureRef(co, 1));
Obj x140166663574727 = PRIM_CAR(x140166663574695);
Obj x = x140166663574727;
Obj x140166663575495 = PRIM_CAR(closureRef(co, 1));
Obj x140166663575527 = PRIM_CDR(x140166663575495);
Obj y = x140166663575527;
Obj x140166663575879 = PRIM_CDR(closureRef(co, 1));
Obj __ = x140166663575879;
Obj x140166663576263 = PRIM_EQ(var, x);
if (True == x140166663576263) {
Obj x140166663576647 = makeCons(x, y);
__nargs = 2;
__arg1 = x140166663576647;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664291495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664291495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664291495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj x140166664292295 = makeNative(4, clofun1, 0, 0);
Obj var = closureRef(co, 0);
Obj x140166663759719 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140166663759719) {
Obj x140166663760135 = PRIM_CAR(closureRef(co, 1));
Obj __ = x140166663760135;
Obj x140166663760487 = PRIM_CDR(closureRef(co, 1));
Obj y = x140166663760487;
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
__arg0 = x140166664292295;
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
Obj x140166664133767 = __arg1;
Obj x140166664133799 = __arg2;
Obj x140166664133831 = __arg3;
Obj x140166664134087 = makeNative(6, clofun1, 0, 3, x140166664133767, x140166664133799, x140166664133831);
Obj s = x140166664133767;
Obj ns = x140166664133799;
Obj x140166664292039 = PRIM_EQ(Nil, x140166664133831);
if (True == x140166664292039) {
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
__arg0 = x140166664134087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x140166664134599 = makeNative(14, clofun1, 0, 0);
Obj s = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj x140166664695591 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140166664695591) {
Obj x140166664470887 = PRIM_CAR(closureRef(co, 2));
Obj import = x140166664470887;
Obj x140166664471335 = PRIM_CDR(closureRef(co, 2));
Obj more = x140166664471335;
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
__arg0 = x140166664134599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj x140166664472423 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 8, clofun1, 4, import, s, ns, more);
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140166664472423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140166664472455 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 9, clofun1, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(symvalue_45or);
__arg1 = x140166664472455;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140166664472679 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj export = x140166664472679;
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
Obj x140166664473031 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140166664473031) {
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
Obj x140166664474471 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 12, clofun1, 1, import);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = makeCString("#");
__arg2 = x140166664474471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140166664474503 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 13, clofun1);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = import;
__arg2 = x140166664474503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140166664474535 = __arg1;
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140166664474535;
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
Obj x140166664691815 = PRIM_EQ(ns, makeCString(""));
if (True == x140166664691815) {
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
Obj x140166664692359 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140166664692359) {
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
Obj x140166664693383 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 18, clofun1, 1, ns);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = makeCString("#");
__arg2 = x140166664693383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140166664693511 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 19, clofun1);
__nargs = 3;
__arg0 = globalRef(symstring_45append);
__arg1 = ns;
__arg2 = x140166664693511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140166664693543 = __arg1;
__nargs = 2;
__arg0 = globalRef(symintern);
__arg1 = x140166664693543;
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
Obj x140166665044071 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj path = x140166665044071;
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
Obj x140166665044743 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 23, clofun1, 1, path);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35parse_45define_45library);
__arg1 = x140166665044743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140166665044775 = __arg1;
Obj path= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = x140166665044775;
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
Obj x140166665046311 = makeCons(makeCString("cora/init"), import);
pushCont(co, 25, clofun1, 3, export, body, x140166665046311);
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
Obj x140166664831495 = __arg1;
Obj export= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166665046311= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140166664833287 = makeCons(export, Nil);
Obj x140166664833479 = makeCons(symbackquote, x140166664833287);
Obj x140166664833735 = makeCons(x140166664833479, Nil);
Obj x140166664833767 = makeCons(sym_42ns_45export_42, x140166664833735);
Obj x140166664833799 = makeCons(symdef, x140166664833767);
Obj x140166664833863 = makeCons(x140166664833799, body);
pushCont(co, 26, clofun1, 1, x140166665046311);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = x140166664831495;
__arg2 = x140166664833863;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140166664833927 = __arg1;
Obj x140166665046311= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664833959 = makeCons(symbegin, x140166664833927);
Obj x140166664834023 = makeCons(x140166664833959, Nil);
Obj x140166664834087 = makeCons(x140166665046311, x140166664834023);
Obj x140166664834183 = makeCons(closureRef(co, 0), x140166664834087);
Obj x140166664834215 = makeCons(symns, x140166664834183);
__nargs = 2;
__arg1 = x140166664834215;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj imp = __arg1;
Obj x140166664831271 = makeCons(imp, Nil);
Obj x140166664831431 = makeCons(symimport, x140166664831271);
__nargs = 2;
__arg1 = x140166664831431;
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
Obj x140166664294023 = __arg1;
Obj x140166664294055 = __arg2;
Obj x140166664294087 = __arg3;
Obj x140166664294151 = co->args[4];
Obj x140166664130631 = makeNative(30, clofun1, 0, 4, x140166664294023, x140166664294055, x140166664294087, x140166664294151);
Obj x140166665232039 = PRIM_ISCONS(x140166664294023);
if (True == x140166665232039) {
Obj x140166665163047 = PRIM_CAR(x140166664294023);
Obj x140166665163079 = PRIM_ISCONS(x140166665163047);
if (True == x140166665163079) {
Obj x140166665163783 = PRIM_CAR(x140166664294023);
Obj x140166665163943 = PRIM_CAR(x140166665163783);
Obj x140166665164007 = PRIM_EQ(symimport, x140166665163943);
if (True == x140166665164007) {
Obj x140166665165351 = PRIM_CAR(x140166664294023);
Obj x140166665165383 = PRIM_CDR(x140166665165351);
Obj x140166665165415 = PRIM_ISCONS(x140166665165383);
if (True == x140166665165415) {
Obj x140166665166183 = PRIM_CAR(x140166664294023);
Obj x140166665166279 = PRIM_CDR(x140166665166183);
Obj x140166665166311 = PRIM_CAR(x140166665166279);
Obj lib = x140166665166311;
Obj x140166665094375 = PRIM_CAR(x140166664294023);
Obj x140166665094407 = PRIM_CDR(x140166665094375);
Obj x140166665094439 = PRIM_CDR(x140166665094407);
Obj x140166665094471 = PRIM_EQ(Nil, x140166665094439);
if (True == x140166665094471) {
Obj x140166665094727 = PRIM_CDR(x140166664294023);
Obj rest = x140166665094727;
Obj imports = x140166664294055;
Obj exports = x140166664294087;
Obj k = x140166664294151;
Obj x140166665095335 = makeCons(lib, imports);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35parse_45define_45library_45h);
__arg1 = rest;
__arg2 = x140166665095335;
__arg3 = exports;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140166664130631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664130631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664130631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664130631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664130631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj x140166664131751 = makeNative(31, clofun1, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140166665275847 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166665275847) {
Obj x140166665276263 = PRIM_CAR(closureRef(co, 0));
Obj x140166665276295 = PRIM_ISCONS(x140166665276263);
if (True == x140166665276295) {
Obj x140166665229159 = PRIM_CAR(closureRef(co, 0));
Obj x140166665229191 = PRIM_CAR(x140166665229159);
Obj x140166665229319 = PRIM_EQ(symexport, x140166665229191);
if (True == x140166665229319) {
Obj x140166665229895 = PRIM_CAR(closureRef(co, 0));
Obj x140166665229927 = PRIM_CDR(x140166665229895);
Obj more = x140166665229927;
Obj x140166665230279 = PRIM_CDR(closureRef(co, 0));
Obj rest = x140166665230279;
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
__arg0 = x140166664131751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj x140166664132839 = makeNative(33, clofun1, 0, 0);
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
Obj x140166665275463 = __arg1;
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exports= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 4;
__arg0 = k;
__arg1 = x140166665275463;
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
Obj x140166665273703 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45backquote);
__arg1 = x140166665273703;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140166664291975 = __arg1;
Obj x140166664292199 = makeNative(37, clofun1, 0, 1, x140166664291975);
Obj x = x140166664291975;
Obj x140166665277287 = primIsSymbol(x);
if (True == x140166665277287) {
Obj x140166665093383 = makeCons(x, Nil);
Obj x140166665093415 = makeCons(symquote, x140166665093383);
__nargs = 2;
__arg1 = x140166665093415;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664292199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj x140166664292423 = makeNative(38, clofun1, 0, 1, closureRef(co, 0));
Obj x140166665274407 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166665274407) {
Obj x140166665274855 = PRIM_CAR(closureRef(co, 0));
Obj x140166665274887 = PRIM_EQ(symunquote, x140166665274855);
if (True == x140166665274887) {
Obj x140166665275303 = PRIM_CDR(closureRef(co, 0));
Obj x140166665275335 = PRIM_ISCONS(x140166665275303);
if (True == x140166665275335) {
Obj x140166665275751 = PRIM_CDR(closureRef(co, 0));
Obj x140166665275783 = PRIM_CAR(x140166665275751);
Obj x = x140166665275783;
Obj x140166665276391 = PRIM_CDR(closureRef(co, 0));
Obj x140166665276423 = PRIM_CDR(x140166665276391);
Obj x140166665276455 = PRIM_EQ(Nil, x140166665276423);
if (True == x140166665276455) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664292423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj x140166664292903 = makeNative(40, clofun1, 0, 1, closureRef(co, 0));
Obj x140166663368359 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166663368359) {
Obj x140166663368615 = PRIM_CAR(closureRef(co, 0));
Obj x = x140166663368615;
Obj x140166665273351 = PRIM_CDR(closureRef(co, 0));
Obj more = x140166665273351;
Obj x140166665273959 = makeCons(x, more);
PUSH_CONT_0(co, 39, clofun1);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35rewrite_45backquote);
__arg2 = x140166665273959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140166664292903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140166665273991 = __arg1;
Obj x140166665274023 = makeCons(symlist, x140166665273991);
__nargs = 2;
__arg1 = x140166665274023;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj x140166664293319 = makeNative(41, clofun1, 0, 0);
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
Obj x140166663367015 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45begin);
__arg1 = x140166663367015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140166664132359 = __arg1;
Obj x140166664132487 = makeNative(44, clofun1, 0, 1, x140166664132359);
Obj x140166663473287 = PRIM_ISCONS(x140166664132359);
if (True == x140166663473287) {
Obj x140166663473703 = PRIM_CAR(x140166664132359);
Obj x = x140166663473703;
Obj x140166663366023 = PRIM_CDR(x140166664132359);
Obj x140166663366055 = PRIM_EQ(Nil, x140166663366023);
if (True == x140166663366055) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664132487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664132487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj x140166664290823 = makeNative(45, clofun1, 0, 1, closureRef(co, 0));
Obj x140166663535143 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166663535143) {
Obj x140166663535527 = PRIM_CAR(closureRef(co, 0));
Obj x = x140166663535527;
Obj x140166663535943 = PRIM_CDR(closureRef(co, 0));
Obj x140166663535975 = PRIM_ISCONS(x140166663535943);
if (True == x140166663535975) {
Obj x140166663536519 = PRIM_CDR(closureRef(co, 0));
Obj x140166663536551 = PRIM_CAR(x140166663536519);
Obj y = x140166663536551;
Obj x140166663471751 = PRIM_CDR(closureRef(co, 0));
Obj x140166663471783 = PRIM_CDR(x140166663471751);
Obj x140166663471815 = PRIM_EQ(Nil, x140166663471783);
if (True == x140166663471815) {
Obj x140166663472583 = makeCons(y, Nil);
Obj x140166663472615 = makeCons(x, x140166663472583);
Obj x140166663472647 = makeCons(symdo, x140166663472615);
__nargs = 2;
__arg1 = x140166663472647;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664290823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664290823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664290823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj x140166664291431 = makeNative(47, clofun1, 0, 0);
Obj x140166663533159 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166663533159) {
Obj x140166663533479 = PRIM_CAR(closureRef(co, 0));
Obj x = x140166663533479;
Obj x140166663533735 = PRIM_CDR(closureRef(co, 0));
Obj y = x140166663533735;
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
__arg0 = x140166664291431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj x140166663534631 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166663534695 = makeCons(x140166663534631, Nil);
Obj x140166663534727 = makeCons(x, x140166663534695);
Obj x140166663534759 = makeCons(symdo, x140166663534727);
__nargs = 2;
__arg1 = x140166663534759;
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
Obj x140166663560615 = __arg1;
PUSH_CONT_0(co, 0, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45namespace);
__arg1 = x140166663560615;
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
Obj x140166663560647 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean);
__arg1 = x140166663560647;
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
Obj x140166664290855 = __arg1;
Obj x140166664290567 = makeNative(3, clofun2, 0, 1, x140166664290855);
Obj x140166663563495 = PRIM_ISCONS(x140166664290855);
if (True == x140166663563495) {
Obj x140166663564071 = PRIM_CAR(x140166664290855);
Obj x140166663564103 = PRIM_EQ(symquote, x140166663564071);
if (True == x140166663564103) {
Obj x140166663564519 = PRIM_CDR(x140166664290855);
Obj x140166663564551 = PRIM_ISCONS(x140166663564519);
if (True == x140166663564551) {
Obj x140166663565063 = PRIM_CDR(x140166664290855);
Obj x140166663565095 = PRIM_CAR(x140166663565063);
Obj x = x140166663565095;
Obj x140166663557607 = PRIM_CDR(x140166664290855);
Obj x140166663557639 = PRIM_CDR(x140166663557607);
Obj x140166663557671 = PRIM_EQ(Nil, x140166663557639);
if (True == x140166663557671) {
Obj x140166663558183 = makeCons(x, Nil);
Obj x140166663558215 = makeCons(symquote, x140166663558183);
__nargs = 2;
__arg1 = x140166663558215;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664290567;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664290567;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664290567;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664290567;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj x140166664291143 = makeNative(5, clofun2, 0, 1, closureRef(co, 0));
Obj x140166663575111 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166663575111) {
Obj x140166663575719 = PRIM_CAR(closureRef(co, 0));
Obj x140166663575751 = PRIM_EQ(symcons_63, x140166663575719);
if (True == x140166663575751) {
Obj x140166663576199 = PRIM_CDR(closureRef(co, 0));
Obj x140166663576231 = PRIM_ISCONS(x140166663576199);
if (True == x140166663576231) {
Obj x140166663576807 = PRIM_CDR(closureRef(co, 0));
Obj x140166663576839 = PRIM_CAR(x140166663576807);
Obj x = x140166663576839;
Obj x140166663561479 = PRIM_CDR(closureRef(co, 0));
Obj x140166663561511 = PRIM_CDR(x140166663561479);
Obj x140166663561543 = PRIM_EQ(Nil, x140166663561511);
if (True == x140166663561543) {
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
__arg0 = x140166664291143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664291143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664291143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664291143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj x140166663561799 = __arg1;
Obj x1 = x140166663561799;
Obj x140166663562375 = makeCons(x1, Nil);
Obj x140166663562407 = makeCons(symcons_63, x140166663562375);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140166663562407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140166664291623 = makeNative(7, clofun2, 0, 1, closureRef(co, 0));
Obj x140166663758087 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166663758087) {
Obj x140166663758631 = PRIM_CAR(closureRef(co, 0));
Obj x140166663758663 = PRIM_EQ(symcar, x140166663758631);
if (True == x140166663758663) {
Obj x140166663759335 = PRIM_CDR(closureRef(co, 0));
Obj x140166663759367 = PRIM_ISCONS(x140166663759335);
if (True == x140166663759367) {
Obj x140166663759975 = PRIM_CDR(closureRef(co, 0));
Obj x140166663760007 = PRIM_CAR(x140166663759975);
Obj x = x140166663760007;
Obj x140166663760839 = PRIM_CDR(closureRef(co, 0));
Obj x140166663760871 = PRIM_CDR(x140166663760839);
Obj x140166663760903 = PRIM_EQ(Nil, x140166663760871);
if (True == x140166663760903) {
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
__arg0 = x140166664291623;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664291623;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664291623;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664291623;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x140166663761319 = __arg1;
Obj x1 = x140166663761319;
Obj x140166663573863 = makeCons(x1, Nil);
Obj x140166663573927 = makeCons(symcar, x140166663573863);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140166663573927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140166664292103 = makeNative(9, clofun2, 0, 1, closureRef(co, 0));
Obj x140166663953223 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166663953223) {
Obj x140166663953991 = PRIM_CAR(closureRef(co, 0));
Obj x140166663954023 = PRIM_EQ(symcdr, x140166663953991);
if (True == x140166663954023) {
Obj x140166663925959 = PRIM_CDR(closureRef(co, 0));
Obj x140166663925991 = PRIM_ISCONS(x140166663925959);
if (True == x140166663925991) {
Obj x140166663926631 = PRIM_CDR(closureRef(co, 0));
Obj x140166663926663 = PRIM_CAR(x140166663926631);
Obj x = x140166663926663;
Obj x140166663927495 = PRIM_CDR(closureRef(co, 0));
Obj x140166663927527 = PRIM_CDR(x140166663927495);
Obj x140166663927559 = PRIM_EQ(Nil, x140166663927527);
if (True == x140166663927559) {
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
__arg0 = x140166664292103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj x140166663928199 = __arg1;
Obj x1 = x140166663928199;
Obj x140166663928999 = makeCons(x1, Nil);
Obj x140166663929031 = makeCons(symcdr, x140166663928999);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140166663929031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140166664292583 = makeNative(12, clofun2, 0, 1, closureRef(co, 0));
Obj x140166664082823 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166664082823) {
Obj x140166664083399 = PRIM_CAR(closureRef(co, 0));
Obj x140166664083431 = PRIM_EQ(symand, x140166664083399);
if (True == x140166664083431) {
Obj x140166664084327 = PRIM_CDR(closureRef(co, 0));
Obj x140166664084359 = PRIM_ISCONS(x140166664084327);
if (True == x140166664084359) {
Obj x140166664084967 = PRIM_CDR(closureRef(co, 0));
Obj x140166664084999 = PRIM_CAR(x140166664084967);
Obj x = x140166664084999;
Obj x140166664073479 = PRIM_CDR(closureRef(co, 0));
Obj x140166664073511 = PRIM_CDR(x140166664073479);
Obj x140166664073543 = PRIM_ISCONS(x140166664073511);
if (True == x140166664073543) {
Obj x140166664074439 = PRIM_CDR(closureRef(co, 0));
Obj x140166664074471 = PRIM_CDR(x140166664074439);
Obj x140166664074503 = PRIM_CAR(x140166664074471);
Obj y = x140166664074503;
Obj x140166664075719 = PRIM_CDR(closureRef(co, 0));
Obj x140166664075847 = PRIM_CDR(x140166664075719);
Obj x140166664075911 = PRIM_CDR(x140166664075847);
Obj x140166664075943 = PRIM_EQ(Nil, x140166664075911);
if (True == x140166664075943) {
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
__arg0 = x140166664292583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj x140166664076423 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1 = x140166664076423;
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
Obj x140166664076807 = __arg1;
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y1 = x140166664076807;
Obj x140166663951847 = makeCons(y1, Nil);
Obj x140166663951879 = makeCons(x1, x140166663951847);
Obj x140166663951911 = makeCons(symand, x140166663951879);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140166663951911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140166664293191 = makeNative(14, clofun2, 0, 1, closureRef(co, 0));
Obj x140166664117447 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166664117447) {
Obj x140166664118023 = PRIM_CAR(closureRef(co, 0));
Obj x140166664118183 = PRIM_EQ(symnull_63, x140166664118023);
if (True == x140166664118183) {
Obj x140166664086087 = PRIM_CDR(closureRef(co, 0));
Obj x140166664086119 = PRIM_ISCONS(x140166664086087);
if (True == x140166664086119) {
Obj x140166664086855 = PRIM_CDR(closureRef(co, 0));
Obj x140166664086887 = PRIM_CAR(x140166664086855);
Obj x = x140166664086887;
Obj x140166664088199 = PRIM_CDR(closureRef(co, 0));
Obj x140166664088231 = PRIM_CDR(x140166664088199);
Obj x140166664088263 = PRIM_EQ(Nil, x140166664088231);
if (True == x140166664088263) {
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
__arg0 = x140166664293191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664293191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664293191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664293191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj x140166664088679 = __arg1;
Obj x1 = x140166664088679;
Obj x140166664081543 = makeCons(x1, Nil);
Obj x140166664081575 = makeCons(symnull_63, x140166664081543);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140166664081575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140166664293639 = makeNative(16, clofun2, 0, 1, closureRef(co, 0));
Obj x140166664130951 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166664130951) {
Obj x140166664131975 = PRIM_CAR(closureRef(co, 0));
Obj x140166664132039 = PRIM_EQ(symnot, x140166664131975);
if (True == x140166664132039) {
Obj x140166664132743 = PRIM_CDR(closureRef(co, 0));
Obj x140166664132871 = PRIM_ISCONS(x140166664132743);
if (True == x140166664132871) {
Obj x140166664133703 = PRIM_CDR(closureRef(co, 0));
Obj x140166664133735 = PRIM_CAR(x140166664133703);
Obj x = x140166664133735;
Obj x140166664114407 = PRIM_CDR(closureRef(co, 0));
Obj x140166664114439 = PRIM_CDR(x140166664114407);
Obj x140166664114471 = PRIM_EQ(Nil, x140166664114439);
if (True == x140166664114471) {
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
__arg0 = x140166664293639;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664293639;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664293639;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664293639;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj x140166664114887 = __arg1;
Obj x1 = x140166664114887;
Obj x140166664115943 = makeCons(x1, Nil);
Obj x140166664115975 = makeCons(symnot, x140166664115943);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140166664115975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140166664294119 = makeNative(20, clofun2, 0, 1, closureRef(co, 0));
Obj x140166664834055 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166664834055) {
Obj x140166664834663 = PRIM_CAR(closureRef(co, 0));
Obj x140166664834759 = PRIM_EQ(symif, x140166664834663);
if (True == x140166664834759) {
Obj x140166664692103 = PRIM_CDR(closureRef(co, 0));
Obj x140166664692135 = PRIM_ISCONS(x140166664692103);
if (True == x140166664692135) {
Obj x140166664692583 = PRIM_CDR(closureRef(co, 0));
Obj x140166664692615 = PRIM_CAR(x140166664692583);
Obj x = x140166664692615;
Obj x140166664693415 = PRIM_CDR(closureRef(co, 0));
Obj x140166664693447 = PRIM_CDR(x140166664693415);
Obj x140166664693479 = PRIM_ISCONS(x140166664693447);
if (True == x140166664693479) {
Obj x140166664694567 = PRIM_CDR(closureRef(co, 0));
Obj x140166664694599 = PRIM_CDR(x140166664694567);
Obj x140166664694663 = PRIM_CAR(x140166664694599);
Obj y = x140166664694663;
Obj x140166664695655 = PRIM_CDR(closureRef(co, 0));
Obj x140166664695687 = PRIM_CDR(x140166664695655);
Obj x140166664695719 = PRIM_CDR(x140166664695687);
Obj x140166664695751 = PRIM_ISCONS(x140166664695719);
if (True == x140166664695751) {
Obj x140166664471751 = PRIM_CDR(closureRef(co, 0));
Obj x140166664471783 = PRIM_CDR(x140166664471751);
Obj x140166664471815 = PRIM_CDR(x140166664471783);
Obj x140166664471847 = PRIM_CAR(x140166664471815);
Obj z = x140166664471847;
Obj x140166664473319 = PRIM_CDR(closureRef(co, 0));
Obj x140166664473351 = PRIM_CDR(x140166664473319);
Obj x140166664473383 = PRIM_CDR(x140166664473351);
Obj x140166664473511 = PRIM_CDR(x140166664473383);
Obj x140166664473543 = PRIM_EQ(Nil, x140166664473511);
if (True == x140166664473543) {
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
__arg0 = x140166664294119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664294119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664294119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664294119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664294119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664294119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj x140166664473799 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x1 = x140166664473799;
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
Obj x140166664474119 = __arg1;
Obj z= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj y1 = x140166664474119;
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
Obj x140166664474567 = __arg1;
Obj y1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj z1 = x140166664474567;
Obj x140166664292487 = makeCons(z1, Nil);
Obj x140166664292519 = makeCons(y1, x140166664292487);
Obj x140166664292551 = makeCons(x1, x140166664292519);
Obj x140166664292615 = makeCons(symif, x140166664292551);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35propagate_45boolean0);
__arg1 = x140166664292615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140166664131015 = makeNative(22, clofun2, 0, 1, closureRef(co, 0));
Obj x140166665166151 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166665166151) {
Obj x140166665044007 = PRIM_CAR(closureRef(co, 0));
Obj x140166665044039 = PRIM_EQ(symlambda, x140166665044007);
if (True == x140166665044039) {
Obj x140166665044583 = PRIM_CDR(closureRef(co, 0));
Obj x140166665044615 = PRIM_ISCONS(x140166665044583);
if (True == x140166665044615) {
Obj x140166665045095 = PRIM_CDR(closureRef(co, 0));
Obj x140166665045127 = PRIM_CAR(x140166665045095);
Obj args = x140166665045127;
Obj x140166665046119 = PRIM_CDR(closureRef(co, 0));
Obj x140166665046151 = PRIM_CDR(x140166665046119);
Obj x140166665046183 = PRIM_ISCONS(x140166665046151);
if (True == x140166665046183) {
Obj x140166665047143 = PRIM_CDR(closureRef(co, 0));
Obj x140166665047175 = PRIM_CDR(x140166665047143);
Obj x140166665047239 = PRIM_CAR(x140166665047175);
Obj body = x140166665047239;
Obj x140166664831303 = PRIM_CDR(closureRef(co, 0));
Obj x140166664831335 = PRIM_CDR(x140166664831303);
Obj x140166664831367 = PRIM_CDR(x140166664831335);
Obj x140166664831399 = PRIM_EQ(Nil, x140166664831367);
if (True == x140166664831399) {
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
__arg0 = x140166664131015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj x140166664832391 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664832455 = makeCons(x140166664832391, Nil);
Obj x140166664832487 = makeCons(args, x140166664832455);
Obj x140166664832519 = makeCons(symlambda, x140166664832487);
__nargs = 2;
__arg1 = x140166664832519;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj x140166664131623 = makeNative(23, clofun2, 0, 1, closureRef(co, 0));
Obj x140166665164103 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166665164103) {
Obj x140166665164359 = PRIM_CAR(closureRef(co, 0));
Obj f = x140166665164359;
Obj x140166665164711 = PRIM_CDR(closureRef(co, 0));
Obj args = x140166665164711;
Obj x140166665165703 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symmap);
__arg1 = globalRef(symcora_47init_35propagate_45boolean);
__arg2 = x140166665165703;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140166664131623;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj x140166664132007 = makeNative(24, clofun2, 0, 0);
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
Obj x140166664292007 = __arg1;
Obj x140166664292135 = makeNative(26, clofun2, 0, 1, x140166664292007);
Obj x140166663532935 = PRIM_ISCONS(x140166664292007);
if (True == x140166663532935) {
Obj x140166663533383 = PRIM_CAR(x140166664292007);
Obj x140166663533415 = PRIM_EQ(symcar, x140166663533383);
if (True == x140166663533415) {
Obj x140166663533831 = PRIM_CDR(x140166664292007);
Obj x140166663533863 = PRIM_ISCONS(x140166663533831);
if (True == x140166663533863) {
Obj x140166663534439 = PRIM_CDR(x140166664292007);
Obj x140166663534471 = PRIM_CAR(x140166663534439);
Obj x140166663534503 = PRIM_ISCONS(x140166663534471);
if (True == x140166663534503) {
Obj x140166663535271 = PRIM_CDR(x140166664292007);
Obj x140166663535303 = PRIM_CAR(x140166663535271);
Obj x140166663535335 = PRIM_CAR(x140166663535303);
Obj x140166663535367 = PRIM_EQ(symcons, x140166663535335);
if (True == x140166663535367) {
Obj x140166663536103 = PRIM_CDR(x140166664292007);
Obj x140166663536135 = PRIM_CAR(x140166663536103);
Obj x140166663536167 = PRIM_CDR(x140166663536135);
Obj x140166663536199 = PRIM_ISCONS(x140166663536167);
if (True == x140166663536199) {
Obj x140166663471399 = PRIM_CDR(x140166664292007);
Obj x140166663471431 = PRIM_CAR(x140166663471399);
Obj x140166663471463 = PRIM_CDR(x140166663471431);
Obj x140166663471495 = PRIM_CAR(x140166663471463);
Obj x = x140166663471495;
Obj x140166663472391 = PRIM_CDR(x140166664292007);
Obj x140166663472423 = PRIM_CAR(x140166663472391);
Obj x140166663472455 = PRIM_CDR(x140166663472423);
Obj x140166663472487 = PRIM_CDR(x140166663472455);
Obj x140166663472519 = PRIM_ISCONS(x140166663472487);
if (True == x140166663472519) {
Obj x140166663473415 = PRIM_CDR(x140166664292007);
Obj x140166663473447 = PRIM_CAR(x140166663473415);
Obj x140166663473479 = PRIM_CDR(x140166663473447);
Obj x140166663473511 = PRIM_CDR(x140166663473479);
Obj x140166663473543 = PRIM_CAR(x140166663473511);
Obj __ = x140166663473543;
Obj x140166663474631 = PRIM_CDR(x140166664292007);
Obj x140166663474663 = PRIM_CAR(x140166663474631);
Obj x140166663474695 = PRIM_CDR(x140166663474663);
Obj x140166663474727 = PRIM_CDR(x140166663474695);
Obj x140166663474759 = PRIM_CDR(x140166663474727);
Obj x140166663474791 = PRIM_EQ(Nil, x140166663474759);
if (True == x140166663474791) {
Obj x140166665228679 = PRIM_CDR(x140166664292007);
Obj x140166665228711 = PRIM_CDR(x140166665228679);
Obj x140166665228743 = PRIM_EQ(Nil, x140166665228711);
if (True == x140166665228743) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664292135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj x140166664292935 = makeNative(27, clofun2, 0, 1, closureRef(co, 0));
Obj x140166663758599 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166663758599) {
Obj x140166663759111 = PRIM_CAR(closureRef(co, 0));
Obj x140166663759143 = PRIM_EQ(symcdr, x140166663759111);
if (True == x140166663759143) {
Obj x140166663759783 = PRIM_CDR(closureRef(co, 0));
Obj x140166663759815 = PRIM_ISCONS(x140166663759783);
if (True == x140166663759815) {
Obj x140166663760519 = PRIM_CDR(closureRef(co, 0));
Obj x140166663760583 = PRIM_CAR(x140166663760519);
Obj x140166663760615 = PRIM_ISCONS(x140166663760583);
if (True == x140166663760615) {
Obj x140166663761575 = PRIM_CDR(closureRef(co, 0));
Obj x140166663761607 = PRIM_CAR(x140166663761575);
Obj x140166663761639 = PRIM_CAR(x140166663761607);
Obj x140166663761671 = PRIM_EQ(symcons, x140166663761639);
if (True == x140166663761671) {
Obj x140166663574311 = PRIM_CDR(closureRef(co, 0));
Obj x140166663574343 = PRIM_CAR(x140166663574311);
Obj x140166663574375 = PRIM_CDR(x140166663574343);
Obj x140166663574407 = PRIM_ISCONS(x140166663574375);
if (True == x140166663574407) {
Obj x140166663575367 = PRIM_CDR(closureRef(co, 0));
Obj x140166663575399 = PRIM_CAR(x140166663575367);
Obj x140166663575431 = PRIM_CDR(x140166663575399);
Obj x140166663575463 = PRIM_CAR(x140166663575431);
Obj __ = x140166663575463;
Obj x140166663576423 = PRIM_CDR(closureRef(co, 0));
Obj x140166663576455 = PRIM_CAR(x140166663576423);
Obj x140166663576487 = PRIM_CDR(x140166663576455);
Obj x140166663576519 = PRIM_CDR(x140166663576487);
Obj x140166663576551 = PRIM_ISCONS(x140166663576519);
if (True == x140166663576551) {
Obj x140166663561319 = PRIM_CDR(closureRef(co, 0));
Obj x140166663561351 = PRIM_CAR(x140166663561319);
Obj x140166663561383 = PRIM_CDR(x140166663561351);
Obj x140166663561415 = PRIM_CDR(x140166663561383);
Obj x140166663561447 = PRIM_CAR(x140166663561415);
Obj x = x140166663561447;
Obj x140166663562535 = PRIM_CDR(closureRef(co, 0));
Obj x140166663562567 = PRIM_CAR(x140166663562535);
Obj x140166663562599 = PRIM_CDR(x140166663562567);
Obj x140166663562631 = PRIM_CDR(x140166663562599);
Obj x140166663562663 = PRIM_CDR(x140166663562631);
Obj x140166663562695 = PRIM_EQ(Nil, x140166663562663);
if (True == x140166663562695) {
Obj x140166663563335 = PRIM_CDR(closureRef(co, 0));
Obj x140166663563367 = PRIM_CDR(x140166663563335);
Obj x140166663563399 = PRIM_EQ(Nil, x140166663563367);
if (True == x140166663563399) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664292935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664292935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj x140166664293735 = makeNative(28, clofun2, 0, 1, closureRef(co, 0));
Obj x140166664085287 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166664085287) {
Obj x140166664073607 = PRIM_CAR(closureRef(co, 0));
Obj x140166664073671 = PRIM_EQ(symcons_63, x140166664073607);
if (True == x140166664073671) {
Obj x140166664074215 = PRIM_CDR(closureRef(co, 0));
Obj x140166664074247 = PRIM_ISCONS(x140166664074215);
if (True == x140166664074247) {
Obj x140166664075015 = PRIM_CDR(closureRef(co, 0));
Obj x140166664075047 = PRIM_CAR(x140166664075015);
Obj x140166664075079 = PRIM_ISCONS(x140166664075047);
if (True == x140166664075079) {
Obj x140166664076199 = PRIM_CDR(closureRef(co, 0));
Obj x140166664076231 = PRIM_CAR(x140166664076199);
Obj x140166664076263 = PRIM_CAR(x140166664076231);
Obj x140166664076295 = PRIM_EQ(symcons, x140166664076263);
if (True == x140166664076295) {
Obj x140166663951111 = PRIM_CDR(closureRef(co, 0));
Obj x140166663951143 = PRIM_CAR(x140166663951111);
Obj x140166663951399 = PRIM_CDR(x140166663951143);
Obj x140166663951431 = PRIM_ISCONS(x140166663951399);
if (True == x140166663951431) {
Obj x140166663952295 = PRIM_CDR(closureRef(co, 0));
Obj x140166663952327 = PRIM_CAR(x140166663952295);
Obj x140166663952359 = PRIM_CDR(x140166663952327);
Obj x140166663952391 = PRIM_CAR(x140166663952359);
Obj __ = x140166663952391;
Obj x140166663953511 = PRIM_CDR(closureRef(co, 0));
Obj x140166663953543 = PRIM_CAR(x140166663953511);
Obj x140166663953575 = PRIM_CDR(x140166663953543);
Obj x140166663953607 = PRIM_CDR(x140166663953575);
Obj x140166663953639 = PRIM_ISCONS(x140166663953607);
if (True == x140166663953639) {
Obj x140166663926247 = PRIM_CDR(closureRef(co, 0));
Obj x140166663926279 = PRIM_CAR(x140166663926247);
Obj x140166663926311 = PRIM_CDR(x140166663926279);
Obj x140166663926343 = PRIM_CDR(x140166663926311);
Obj x140166663926375 = PRIM_CAR(x140166663926343);
__ = x140166663926375;
Obj x140166663927751 = PRIM_CDR(closureRef(co, 0));
Obj x140166663927911 = PRIM_CAR(x140166663927751);
Obj x140166663927943 = PRIM_CDR(x140166663927911);
Obj x140166663927975 = PRIM_CDR(x140166663927943);
Obj x140166663928007 = PRIM_CDR(x140166663927975);
Obj x140166663928039 = PRIM_EQ(Nil, x140166663928007);
if (True == x140166663928039) {
Obj x140166663928679 = PRIM_CDR(closureRef(co, 0));
Obj x140166663928711 = PRIM_CDR(x140166663928679);
Obj x140166663928839 = PRIM_EQ(Nil, x140166663928711);
if (True == x140166663928839) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664293735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664293735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664293735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664293735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664293735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664293735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664293735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664293735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664293735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj x140166664130695 = makeNative(29, clofun2, 0, 1, closureRef(co, 0));
Obj x140166664085991 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166664085991) {
Obj x140166664086695 = PRIM_CAR(closureRef(co, 0));
Obj x140166664086727 = PRIM_EQ(symand, x140166664086695);
if (True == x140166664086727) {
Obj x140166664087335 = PRIM_CDR(closureRef(co, 0));
Obj x140166664087431 = PRIM_ISCONS(x140166664087335);
if (True == x140166664087431) {
Obj x140166664088487 = PRIM_CDR(closureRef(co, 0));
Obj x140166664088519 = PRIM_CAR(x140166664088487);
Obj x140166664088551 = PRIM_EQ(True, x140166664088519);
if (True == x140166664088551) {
Obj x140166664089383 = PRIM_CDR(closureRef(co, 0));
Obj x140166664089415 = PRIM_CDR(x140166664089383);
Obj x140166664089447 = PRIM_ISCONS(x140166664089415);
if (True == x140166664089447) {
Obj x140166664082247 = PRIM_CDR(closureRef(co, 0));
Obj x140166664082279 = PRIM_CDR(x140166664082247);
Obj x140166664082311 = PRIM_CAR(x140166664082279);
Obj x140166664082375 = PRIM_EQ(True, x140166664082311);
if (True == x140166664082375) {
Obj x140166664083559 = PRIM_CDR(closureRef(co, 0));
Obj x140166664083591 = PRIM_CDR(x140166664083559);
Obj x140166664083623 = PRIM_CDR(x140166664083591);
Obj x140166664083655 = PRIM_EQ(Nil, x140166664083623);
if (True == x140166664083655) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664130695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664130695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664130695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664130695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664130695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664130695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664130695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140166664131271 = makeNative(30, clofun2, 0, 1, closureRef(co, 0));
Obj x140166664134343 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166664134343) {
Obj x140166664114599 = PRIM_CAR(closureRef(co, 0));
Obj x140166664114631 = PRIM_EQ(symnull_63, x140166664114599);
if (True == x140166664114631) {
Obj x140166664115335 = PRIM_CDR(closureRef(co, 0));
Obj x140166664115367 = PRIM_ISCONS(x140166664115335);
if (True == x140166664115367) {
Obj x140166664116327 = PRIM_CDR(closureRef(co, 0));
Obj x140166664116359 = PRIM_CAR(x140166664116327);
Obj x140166664116391 = PRIM_EQ(Nil, x140166664116359);
if (True == x140166664116391) {
Obj x140166664117255 = PRIM_CDR(closureRef(co, 0));
Obj x140166664117287 = PRIM_CDR(x140166664117255);
Obj x140166664117319 = PRIM_EQ(Nil, x140166664117287);
if (True == x140166664117319) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664131271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj x140166664131719 = makeNative(31, clofun2, 0, 1, closureRef(co, 0));
Obj x140166664693095 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166664693095) {
Obj x140166664693575 = PRIM_CAR(closureRef(co, 0));
Obj x140166664693607 = PRIM_EQ(symnull_63, x140166664693575);
if (True == x140166664693607) {
Obj x140166664694279 = PRIM_CDR(closureRef(co, 0));
Obj x140166664694439 = PRIM_ISCONS(x140166664694279);
if (True == x140166664694439) {
Obj x140166664695143 = PRIM_CDR(closureRef(co, 0));
Obj x140166664695175 = PRIM_CAR(x140166664695143);
Obj x140166664695207 = PRIM_ISCONS(x140166664695175);
if (True == x140166664695207) {
Obj x140166664470951 = PRIM_CDR(closureRef(co, 0));
Obj x140166664470983 = PRIM_CAR(x140166664470951);
Obj x140166664471015 = PRIM_CAR(x140166664470983);
Obj x140166664471047 = PRIM_EQ(symcons, x140166664471015);
if (True == x140166664471047) {
Obj x140166664472007 = PRIM_CDR(closureRef(co, 0));
Obj x140166664472039 = PRIM_CAR(x140166664472007);
Obj x140166664472071 = PRIM_CDR(x140166664472039);
Obj x140166664472103 = PRIM_ISCONS(x140166664472071);
if (True == x140166664472103) {
Obj x140166664473127 = PRIM_CDR(closureRef(co, 0));
Obj x140166664473159 = PRIM_CAR(x140166664473127);
Obj x140166664473191 = PRIM_CDR(x140166664473159);
Obj x140166664473223 = PRIM_CAR(x140166664473191);
Obj __ = x140166664473223;
Obj x140166664474311 = PRIM_CDR(closureRef(co, 0));
Obj x140166664474343 = PRIM_CAR(x140166664474311);
Obj x140166664474375 = PRIM_CDR(x140166664474343);
Obj x140166664474407 = PRIM_CDR(x140166664474375);
Obj x140166664474439 = PRIM_ISCONS(x140166664474407);
if (True == x140166664474439) {
Obj x140166664291815 = PRIM_CDR(closureRef(co, 0));
Obj x140166664291847 = PRIM_CAR(x140166664291815);
Obj x140166664291879 = PRIM_CDR(x140166664291847);
Obj x140166664291911 = PRIM_CDR(x140166664291879);
Obj x140166664291943 = PRIM_CAR(x140166664291911);
__ = x140166664291943;
Obj x140166664293831 = PRIM_CDR(closureRef(co, 0));
Obj x140166664293863 = PRIM_CAR(x140166664293831);
Obj x140166664293895 = PRIM_CDR(x140166664293863);
Obj x140166664293927 = PRIM_CDR(x140166664293895);
Obj x140166664293959 = PRIM_CDR(x140166664293927);
Obj x140166664293991 = PRIM_EQ(Nil, x140166664293959);
if (True == x140166664293991) {
Obj x140166664131655 = PRIM_CDR(closureRef(co, 0));
Obj x140166664131687 = PRIM_CDR(x140166664131655);
Obj x140166664131783 = PRIM_EQ(Nil, x140166664131687);
if (True == x140166664131783) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664131719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664131719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj x140166664132519 = makeNative(32, clofun2, 0, 1, closureRef(co, 0));
Obj x140166664832231 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166664832231) {
Obj x140166664832743 = PRIM_CAR(closureRef(co, 0));
Obj x140166664832775 = PRIM_EQ(symnot, x140166664832743);
if (True == x140166664832775) {
Obj x140166664833511 = PRIM_CDR(closureRef(co, 0));
Obj x140166664833543 = PRIM_ISCONS(x140166664833511);
if (True == x140166664833543) {
Obj x140166664834375 = PRIM_CDR(closureRef(co, 0));
Obj x140166664834407 = PRIM_CAR(x140166664834375);
Obj x140166664834439 = PRIM_EQ(True, x140166664834407);
if (True == x140166664834439) {
Obj x140166664691847 = PRIM_CDR(closureRef(co, 0));
Obj x140166664691879 = PRIM_CDR(x140166664691847);
Obj x140166664691911 = PRIM_EQ(Nil, x140166664691879);
if (True == x140166664691911) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664132519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664132519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664132519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664132519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664132519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj x140166664132967 = makeNative(33, clofun2, 0, 1, closureRef(co, 0));
Obj x140166665045063 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166665045063) {
Obj x140166665045767 = PRIM_CAR(closureRef(co, 0));
Obj x140166665045799 = PRIM_EQ(symnot, x140166665045767);
if (True == x140166665045799) {
Obj x140166665046471 = PRIM_CDR(closureRef(co, 0));
Obj x140166665046503 = PRIM_ISCONS(x140166665046471);
if (True == x140166665046503) {
Obj x140166665047303 = PRIM_CDR(closureRef(co, 0));
Obj x140166665047335 = PRIM_CAR(x140166665047303);
Obj x140166665047367 = PRIM_EQ(False, x140166665047335);
if (True == x140166665047367) {
Obj x140166664831047 = PRIM_CDR(closureRef(co, 0));
Obj x140166664831111 = PRIM_CDR(x140166664831047);
Obj x140166664831143 = PRIM_EQ(Nil, x140166664831111);
if (True == x140166664831143) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664132967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664132967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664132967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664132967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664132967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x140166664133415 = makeNative(34, clofun2, 0, 1, closureRef(co, 0));
Obj x140166665228935 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166665228935) {
Obj x140166665229479 = PRIM_CAR(closureRef(co, 0));
Obj x140166665229511 = PRIM_EQ(symif, x140166665229479);
if (True == x140166665229511) {
Obj x140166665230023 = PRIM_CDR(closureRef(co, 0));
Obj x140166665230055 = PRIM_ISCONS(x140166665230023);
if (True == x140166665230055) {
Obj x140166665230919 = PRIM_CDR(closureRef(co, 0));
Obj x140166665231047 = PRIM_CAR(x140166665230919);
Obj x140166665231079 = PRIM_EQ(True, x140166665231047);
if (True == x140166665231079) {
Obj x140166665231751 = PRIM_CDR(closureRef(co, 0));
Obj x140166665231783 = PRIM_CDR(x140166665231751);
Obj x140166665231815 = PRIM_ISCONS(x140166665231783);
if (True == x140166665231815) {
Obj x140166665162919 = PRIM_CDR(closureRef(co, 0));
Obj x140166665162951 = PRIM_CDR(x140166665162919);
Obj x140166665162983 = PRIM_CAR(x140166665162951);
Obj y = x140166665162983;
Obj x140166665163815 = PRIM_CDR(closureRef(co, 0));
Obj x140166665163847 = PRIM_CDR(x140166665163815);
Obj x140166665163879 = PRIM_CDR(x140166665163847);
Obj x140166665163911 = PRIM_ISCONS(x140166665163879);
if (True == x140166665163911) {
Obj x140166665164999 = PRIM_CDR(closureRef(co, 0));
Obj x140166665165127 = PRIM_CDR(x140166665164999);
Obj x140166665165287 = PRIM_CDR(x140166665165127);
Obj x140166665165319 = PRIM_CAR(x140166665165287);
Obj z = x140166665165319;
Obj x140166665166439 = PRIM_CDR(closureRef(co, 0));
Obj x140166665166471 = PRIM_CDR(x140166665166439);
Obj x140166665166503 = PRIM_CDR(x140166665166471);
Obj x140166665166535 = PRIM_CDR(x140166665166503);
Obj x140166665166567 = PRIM_EQ(Nil, x140166665166535);
if (True == x140166665166567) {
__nargs = 2;
__arg1 = y;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664133415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664133415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664133415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664133415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664133415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664133415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664133415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj x140166664134119 = makeNative(35, clofun2, 0, 1, closureRef(co, 0));
Obj x140166663563111 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166663563111) {
Obj x140166663563559 = PRIM_CAR(closureRef(co, 0));
Obj x140166663563591 = PRIM_EQ(symif, x140166663563559);
if (True == x140166663563591) {
Obj x140166663564007 = PRIM_CDR(closureRef(co, 0));
Obj x140166663564039 = PRIM_ISCONS(x140166663564007);
if (True == x140166663564039) {
Obj x140166663564647 = PRIM_CDR(closureRef(co, 0));
Obj x140166663564679 = PRIM_CAR(x140166663564647);
Obj x140166663564711 = PRIM_EQ(False, x140166663564679);
if (True == x140166663564711) {
Obj x140166663565287 = PRIM_CDR(closureRef(co, 0));
Obj x140166663557127 = PRIM_CDR(x140166663565287);
Obj x140166663557159 = PRIM_ISCONS(x140166663557127);
if (True == x140166663557159) {
Obj x140166663557735 = PRIM_CDR(closureRef(co, 0));
Obj x140166663557767 = PRIM_CDR(x140166663557735);
Obj x140166663557799 = PRIM_CAR(x140166663557767);
Obj y = x140166663557799;
Obj x140166663558535 = PRIM_CDR(closureRef(co, 0));
Obj x140166663558567 = PRIM_CDR(x140166663558535);
Obj x140166663558599 = PRIM_CDR(x140166663558567);
Obj x140166663558631 = PRIM_ISCONS(x140166663558599);
if (True == x140166663558631) {
Obj x140166663559367 = PRIM_CDR(closureRef(co, 0));
Obj x140166663559399 = PRIM_CDR(x140166663559367);
Obj x140166663559431 = PRIM_CDR(x140166663559399);
Obj x140166663559463 = PRIM_CAR(x140166663559431);
Obj z = x140166663559463;
Obj x140166663560391 = PRIM_CDR(closureRef(co, 0));
Obj x140166663560423 = PRIM_CDR(x140166663560391);
Obj x140166663560455 = PRIM_CDR(x140166663560423);
Obj x140166663560487 = PRIM_CDR(x140166663560455);
Obj x140166663560519 = PRIM_EQ(Nil, x140166663560487);
if (True == x140166663560519) {
__nargs = 2;
__arg1 = z;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140166664134119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664134119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664134119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664134119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664134119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664134119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664134119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj x140166664114343 = makeNative(36, clofun2, 0, 0);
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
Obj x140166663573607 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 39, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35extract_45rules);
__arg1 = x140166663573607;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140166663573639 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body = x140166663573639;
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
Obj x140166663573895 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj nargs = x140166663573895;
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
Obj x140166663574183 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args = x140166663574183;
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
Obj x140166663574759 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166663576999 = makeCons(symlist, args);
Obj x140166663577063 = makeCons(x140166663576999, body);
Obj x140166663577095 = makeCons(symmatch, x140166663577063);
Obj x140166663577159 = makeCons(x140166663577095, Nil);
Obj x140166663577191 = makeCons(args, x140166663577159);
Obj x140166663577223 = makeCons(x140166663574759, x140166663577191);
Obj x140166663577255 = makeCons(symdefun, x140166663577223);
__nargs = 2;
__arg1 = x140166663577255;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
Obj n = __arg1;
Obj x140166663760167 = PRIM_EQ(n, MAKE_NUMBER(0));
if (True == x140166663760167) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166663760551 = primGenSym();
Obj x140166663760999 = PRIM_SUB(n, MAKE_NUMBER(1));
pushCont(co, 44, clofun2, 1, x140166663760551);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35gen_45paramenters);
__arg1 = x140166663760999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj x140166663761031 = __arg1;
Obj x140166663760551= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166663761063 = makeCons(x140166663760551, x140166663761031);
__nargs = 2;
__arg1 = x140166663761063;
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
Obj x140166663928487 = __arg1;
Obj pats = x140166663928487;
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
Obj x140166663929351 = __arg1;
Obj counts = x140166663929351;
Obj x140166663929767 = PRIM_CAR(counts);
Obj n = x140166663929767;
Obj dif = makeNative(0, clofun3, 1, 1, n);
Obj x140166663759175 = PRIM_CDR(counts);
pushCont(co, 48, clofun2, 1, n);
__nargs = 3;
__arg0 = globalRef(symfilter);
__arg1 = dif;
__arg2 = x140166663759175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj x140166663759207 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun2, 1, n);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140166663759207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140166663759239 = __arg1;
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166663759271 = primNot(x140166663759239);
if (True == x140166663759271) {
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
Obj x140166663758311 = PRIM_EQ(closureRef(co, 0), x);
Obj x140166663758343 = primNot(x140166663758311);
__nargs = 2;
__arg1 = x140166663758343;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x = __arg1;
Obj x140166663929063 = PRIM_CDR(x);
__nargs = 2;
__arg0 = globalRef(symlength);
__arg1 = x140166663929063;
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
Obj x140166663926791 = PRIM_EQ(l1, Nil);
if (True == x140166663926791) {
__nargs = 2;
__arg1 = l2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166663927271 = PRIM_CAR(l1);
Obj x140166663927687 = PRIM_CDR(l1);
pushCont(co, 3, clofun3, 1, x140166663927271);
__nargs = 3;
__arg0 = globalRef(symappend);
__arg1 = x140166663927687;
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
Obj x140166663927815 = __arg1;
Obj x140166663927271= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166663927847 = makeCons(x140166663927271, x140166663927815);
__nargs = 2;
__arg1 = x140166663927847;
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
Obj x140166663951975 = PRIM_ISCONS(l);
if (True == x140166663951975) {
Obj x140166663952455 = PRIM_CAR(l);
pushCont(co, 6, clofun3, 3, l, res, fn);
__nargs = 2;
__arg0 = fn;
__arg1 = x140166663952455;
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
Obj x140166663952519 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140166663952519) {
Obj x140166663953063 = PRIM_CAR(l);
Obj x140166663953127 = makeCons(x140166663953063, res);
Obj x140166663953383 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = x140166663953127;
__arg2 = fn;
__arg3 = x140166663953383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140166663953895 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35filter_45h);
__arg1 = res;
__arg2 = fn;
__arg3 = x140166663953895;
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
Obj x140166664076007 = PRIM_EQ(l, Nil);
if (True == x140166664076007) {
__nargs = 2;
__arg1 = i;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166664076487 = PRIM_ADD(i, MAKE_NUMBER(1));
Obj x140166664076711 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35length_45h);
__arg1 = x140166664076487;
__arg2 = x140166664076711;
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
Obj x140166664073927 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140166664073927) {
__nargs = 2;
__arg0 = globalRef(symreverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140166664074727 = PRIM_CAR(rules);
Obj x140166664074823 = makeCons(x140166664074727, res);
pushCont(co, 11, clofun3, 1, x140166664074823);
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
Obj x140166664075143 = __arg1;
Obj x140166664074823= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35rules_45patterns);
__arg1 = x140166664074823;
__arg2 = x140166664075143;
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
Obj x140166664290439 = makeNative(14, clofun3, 0, 3, input, current, result);
Obj x140166664084487 = PRIM_EQ(Nil, input);
if (True == x140166664084487) {
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
__arg0 = x140166664290439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj x140166664290535 = makeNative(16, clofun3, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140166664114567 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166664114567) {
Obj x140166664115047 = PRIM_CAR(closureRef(co, 0));
Obj x140166664115111 = PRIM_EQ(sym_61_62, x140166664115047);
if (True == x140166664115111) {
Obj x140166664115783 = PRIM_CDR(closureRef(co, 0));
Obj x140166664115815 = PRIM_ISCONS(x140166664115783);
if (True == x140166664115815) {
Obj x140166664116455 = PRIM_CDR(closureRef(co, 0));
Obj x140166664116487 = PRIM_CAR(x140166664116455);
Obj act = x140166664116487;
Obj x140166664117127 = PRIM_CDR(closureRef(co, 0));
Obj x140166664117159 = PRIM_CDR(x140166664117127);
Obj x140166664117191 = PRIM_ISCONS(x140166664117159);
if (True == x140166664117191) {
Obj x140166664085511 = PRIM_CDR(closureRef(co, 0));
Obj x140166664085543 = PRIM_CDR(x140166664085511);
Obj x140166664085575 = PRIM_CAR(x140166664085543);
Obj x140166664085607 = PRIM_EQ(symwhere, x140166664085575);
if (True == x140166664085607) {
Obj x140166664086503 = PRIM_CDR(closureRef(co, 0));
Obj x140166664086567 = PRIM_CDR(x140166664086503);
Obj x140166664086599 = PRIM_CDR(x140166664086567);
Obj x140166664086663 = PRIM_ISCONS(x140166664086599);
if (True == x140166664086663) {
Obj x140166664087687 = PRIM_CDR(closureRef(co, 0));
Obj x140166664087911 = PRIM_CDR(x140166664087687);
Obj x140166664087943 = PRIM_CDR(x140166664087911);
Obj x140166664087975 = PRIM_CAR(x140166664087943);
Obj pred = x140166664087975;
Obj x140166664088807 = PRIM_CDR(closureRef(co, 0));
Obj x140166664088839 = PRIM_CDR(x140166664088807);
Obj x140166664088871 = PRIM_CDR(x140166664088839);
Obj x140166664088903 = PRIM_CDR(x140166664088871);
Obj remain = x140166664088903;
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
__arg0 = x140166664290535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664290535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664290535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664290535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664290535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664290535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj x140166664089511 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pred= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140166664089543 = makeCons(symlist, x140166664089511);
Obj pat = x140166664089543;
Obj x140166664082503 = makeCons(act, Nil);
Obj x140166664082535 = makeCons(pred, x140166664082503);
Obj x140166664082567 = makeCons(symwhere, x140166664082535);
Obj x140166664082951 = makeCons(pat, closureRef(co, 2));
Obj x140166664082983 = makeCons(x140166664082567, x140166664082951);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = x140166664082983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140166664291079 = makeNative(18, clofun3, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x140166664292871 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166664292871) {
Obj x140166664293543 = PRIM_CAR(closureRef(co, 0));
Obj x140166664293671 = PRIM_EQ(sym_61_62, x140166664293543);
if (True == x140166664293671) {
Obj x140166664294279 = PRIM_CDR(closureRef(co, 0));
Obj x140166664130567 = PRIM_ISCONS(x140166664294279);
if (True == x140166664130567) {
Obj x140166664131367 = PRIM_CDR(closureRef(co, 0));
Obj x140166664131399 = PRIM_CAR(x140166664131367);
Obj act = x140166664131399;
Obj x140166664132071 = PRIM_CDR(closureRef(co, 0));
Obj x140166664132103 = PRIM_CDR(x140166664132071);
Obj remain = x140166664132103;
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
__arg0 = x140166664291079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664291079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140166664291079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj x140166664132775 = __arg1;
Obj act= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166664132807 = makeCons(symlist, x140166664132775);
Obj pat = x140166664132807;
Obj x140166664133991 = makeCons(pat, closureRef(co, 2));
Obj x140166664134023 = makeCons(act, x140166664133991);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = remain;
__arg2 = Nil;
__arg3 = x140166664134023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140166664291399 = makeNative(19, clofun3, 0, 0);
Obj x140166664290695 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166664290695) {
Obj x140166664291175 = PRIM_CAR(closureRef(co, 0));
Obj x = x140166664291175;
Obj x140166664291719 = PRIM_CDR(closureRef(co, 0));
Obj y = x140166664291719;
Obj x140166664292327 = makeCons(x, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47init_35extract_45rules1);
__arg1 = y;
__arg2 = x140166664292327;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140166664291399;
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
Obj x140166664834695 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 23, clofun3, 1, exp);
__nargs = 2;
__arg0 = globalRef(symmacroexpand);
__arg1 = x140166664834695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140166664834727 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value = x140166664834727;
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
Obj x140166664835047 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules = x140166664835047;
Obj x140166664692071 = PRIM_ISCONS(value);
if (True == x140166664692071) {
Obj x140166664692711 = PRIM_CAR(value);
Obj x140166664692743 = PRIM_EQ(symcons, x140166664692711);
Obj x140166664692775 = primNot(x140166664692743);
if (True == x140166664692775) {
if (True == True) {
Obj x140166664693031 = primGenSym();
Obj val = x140166664693031;
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
Obj x140166664694855 = primGenSym();
Obj val = x140166664694855;
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
Obj x140166664471303 = primGenSym();
Obj val = x140166664471303;
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
Obj x140166664472487 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166664472551 = makeCons(x140166664472487, Nil);
Obj x140166664472583 = makeCons(value, x140166664472551);
Obj x140166664472615 = makeCons(val, x140166664472583);
Obj x140166664472647 = makeCons(symlet, x140166664472615);
__nargs = 2;
__arg1 = x140166664472647;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj x140166664470695 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166664470759 = makeCons(x140166664470695, Nil);
Obj x140166664470791 = makeCons(value, x140166664470759);
Obj x140166664470823 = makeCons(val, x140166664470791);
Obj x140166664470855 = makeCons(symlet, x140166664470823);
__nargs = 2;
__arg1 = x140166664470855;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj x140166664694247 = __arg1;
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166664694311 = makeCons(x140166664694247, Nil);
Obj x140166664694343 = makeCons(value, x140166664694311);
Obj x140166664694375 = makeCons(val, x140166664694343);
Obj x140166664694407 = makeCons(symlet, x140166664694375);
__nargs = 2;
__arg1 = x140166664694407;
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
Obj x140166665229255 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140166665229255) {
Obj x140166665229703 = makeCons(makeCString("no match-help found!"), Nil);
Obj x140166665229735 = makeCons(symerror, x140166665229703);
__nargs = 2;
__arg1 = x140166665229735;
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
Obj x140166665230087 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140166665230087) {
Obj x140166665230663 = PRIM_CDR(rules);
pushCont(co, 35, clofun3, 2, rules, value);
__nargs = 2;
__arg0 = globalRef(sympair_63);
__arg1 = x140166665230663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
Obj x140166665046919 = PRIM_CAR(rules);
Obj pat = x140166665046919;
Obj x140166665047207 = primGenSym();
Obj cc = x140166665047207;
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
Obj x140166665047527 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = x140166665047527;
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
Obj x140166665048039 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 33, clofun3, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x140166665048039;
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
Obj x140166664831079 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = x140166664831079;
Obj x140166664831783 = PRIM_CDR(rules);
Obj x140166664831815 = PRIM_CDR(x140166664831783);
pushCont(co, 34, clofun3, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = x140166664831815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140166664831847 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140166664831847;
Obj x140166664833063 = makeCons(rest, Nil);
Obj x140166664833095 = makeCons(Nil, x140166664833063);
Obj x140166664833127 = makeCons(symlambda, x140166664833095);
Obj x140166664833607 = makeCons(curr, Nil);
Obj x140166664833639 = makeCons(x140166664833127, x140166664833607);
Obj x140166664833671 = makeCons(cc, x140166664833639);
Obj x140166664833703 = makeCons(symlet, x140166664833671);
__nargs = 2;
__arg1 = x140166664833703;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj x140166665230695 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140166665230695) {
if (True == True) {
Obj x140166665230983 = PRIM_CAR(rules);
Obj pat = x140166665230983;
Obj x140166665231239 = primGenSym();
Obj cc = x140166665231239;
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
Obj x140166665165607 = PRIM_CAR(rules);
Obj pat = x140166665165607;
Obj x140166665165831 = primGenSym();
Obj cc = x140166665165831;
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
Obj x140166665166119 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = x140166665166119;
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
Obj x140166665166599 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 38, clofun3, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x140166665166599;
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
Obj x140166665166727 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = x140166665166727;
Obj x140166665044487 = PRIM_CDR(rules);
Obj x140166665044519 = PRIM_CDR(x140166665044487);
pushCont(co, 39, clofun3, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = x140166665044519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140166665044551 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140166665044551;
Obj x140166665045991 = makeCons(rest, Nil);
Obj x140166665046023 = makeCons(Nil, x140166665045991);
Obj x140166665046055 = makeCons(symlambda, x140166665046023);
Obj x140166665046343 = makeCons(curr, Nil);
Obj x140166665046375 = makeCons(x140166665046055, x140166665046343);
Obj x140166665046407 = makeCons(cc, x140166665046375);
Obj x140166665046439 = makeCons(symlet, x140166665046407);
__nargs = 2;
__arg1 = x140166665046439;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj x140166665231559 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj action = x140166665231559;
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
Obj x140166665231975 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 42, clofun3, 3, rules, value, cc);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x140166665231975;
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
Obj x140166665232167 = __arg1;
Obj rules= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj value= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj curr = x140166665232167;
Obj x140166665163175 = PRIM_CDR(rules);
Obj x140166665163207 = PRIM_CDR(x140166665163175);
pushCont(co, 43, clofun3, 2, curr, cc);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35match_45helper);
__arg1 = value;
__arg2 = x140166665163207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140166665163239 = __arg1;
Obj curr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj rest = x140166665163239;
Obj x140166665164487 = makeCons(rest, Nil);
Obj x140166665164519 = makeCons(Nil, x140166665164487);
Obj x140166665164551 = makeCons(symlambda, x140166665164519);
Obj x140166665164839 = makeCons(curr, Nil);
Obj x140166665164871 = makeCons(x140166665164551, x140166665164839);
Obj x140166665164903 = makeCons(cc, x140166665164871);
Obj x140166665164935 = makeCons(symlet, x140166665164903);
__nargs = 2;
__arg1 = x140166665164935;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label44:
{
Obj rules = __arg1;
Obj cc = __arg2;
Obj x140166663759591 = PRIM_CDR(rules);
Obj x140166663759623 = PRIM_CAR(x140166663759591);
Obj action = x140166663759623;
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
Obj x140166663759943 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140166663759943) {
Obj x140166663760359 = PRIM_CAR(action);
Obj x140166663760423 = PRIM_EQ(x140166663760359, symwhere);
if (True == x140166663760423) {
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
Obj x140166663575559 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 47, clofun3, 2, cc, x140166663575559);
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
Obj x140166663575943 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166663575559= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166665228359 = makeCons(cc, Nil);
Obj x140166665228423 = makeCons(x140166665228359, Nil);
Obj x140166665228455 = makeCons(x140166663575943, x140166665228423);
Obj x140166665228487 = makeCons(x140166663575559, x140166665228455);
Obj x140166665228519 = makeCons(symif, x140166665228487);
__nargs = 2;
__arg1 = x140166665228519;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label48:
{
Obj x140166663574055 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 49, clofun3, 2, cc, x140166663574055);
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
Obj x140166663574439 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166663574055= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166663574855 = makeCons(cc, Nil);
Obj x140166663574919 = makeCons(x140166663574855, Nil);
Obj x140166663574951 = makeCons(x140166663574439, x140166663574919);
Obj x140166663574983 = makeCons(x140166663574055, x140166663574951);
Obj x140166663575015 = makeCons(symif, x140166663574983);
__nargs = 2;
__arg1 = x140166663575015;
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
Obj x140166663760967 = __arg1;
Obj action= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 1, clofun4, 2, cc, x140166663760967);
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
Obj x140166663761351 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166663760967= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166663761767 = makeCons(cc, Nil);
Obj x140166663761831 = makeCons(x140166663761767, Nil);
Obj x140166663761863 = makeCons(x140166663761351, x140166663761831);
Obj x140166663761895 = makeCons(x140166663760967, x140166663761863);
Obj x140166663573511 = makeCons(symif, x140166663761895);
__nargs = 2;
__arg1 = x140166663573511;
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
Obj x140166663952487 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140166663952487) {
Obj x140166663952775 = PRIM_EQ(pat, expr);
if (True == x140166663952775) {
__nargs = 2;
__arg1 = body;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166663953735 = makeCons(expr, Nil);
Obj x140166663953767 = makeCons(pat, x140166663953735);
Obj x140166663953799 = makeCons(sym_61, x140166663953767);
Obj x140166663954407 = makeCons(cc, Nil);
Obj x140166663925799 = makeCons(x140166663954407, Nil);
Obj x140166663925831 = makeCons(body, x140166663925799);
Obj x140166663925863 = makeCons(x140166663953799, x140166663925831);
Obj x140166663925895 = makeCons(symif, x140166663925863);
__nargs = 2;
__arg1 = x140166663925895;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
} else {
Obj x140166663926151 = primIsSymbol(pat);
if (True == x140166663926151) {
Obj x140166663926951 = makeCons(body, Nil);
Obj x140166663926983 = makeCons(expr, x140166663926951);
Obj x140166663927015 = makeCons(pat, x140166663926983);
Obj x140166663927047 = makeCons(symlet, x140166663927015);
__nargs = 2;
__arg1 = x140166663927047;
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
Obj x140166663927303 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == x140166663927303) {
Obj x140166663927719 = PRIM_CAR(pat);
Obj x140166663927783 = PRIM_EQ(x140166663927719, symquote);
if (True == x140166663927783) {
Obj x140166663928743 = makeCons(expr, Nil);
Obj x140166663928775 = makeCons(pat, x140166663928743);
Obj x140166663928807 = makeCons(sym_61, x140166663928775);
Obj x140166663929415 = makeCons(cc, Nil);
Obj x140166663929479 = makeCons(x140166663929415, Nil);
Obj x140166663929511 = makeCons(body, x140166663929479);
Obj x140166663929543 = makeCons(x140166663928807, x140166663929511);
Obj x140166663929575 = makeCons(symif, x140166663929543);
__nargs = 2;
__arg1 = x140166663929575;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166663757959 = PRIM_CAR(pat);
Obj x140166663758023 = PRIM_EQ(x140166663757959, symcons);
if (True == x140166663758023) {
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
Obj x140166663758823 = __arg1;
__nargs = 2;
__arg0 = globalRef(symerror);
__arg1 = x140166663758823;
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
Obj x140166663951783 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140166663951783) {
Obj x140166663952199 = primIsSymbol(x);
Obj x140166663952231 = primNot(x140166663952199);
if (True == x140166663952231) {
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
Obj x140166664114503 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x = x140166664114503;
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
Obj x140166664114759 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y = x140166664114759;
Obj x140166664115079 = PRIM_ISCONS(expr);
if (True == x140166664115079) {
Obj x140166664115687 = PRIM_CAR(expr);
Obj x140166664115751 = PRIM_EQ(x140166664115687, symcons);
if (True == x140166664115751) {
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
Obj x140166664117831 = makeCons(expr, Nil);
Obj x140166664117863 = makeCons(symcons_63, x140166664117831);
Obj x140166664086183 = makeCons(expr, Nil);
Obj x140166664086215 = makeCons(symcar, x140166664086183);
Obj x140166664086919 = makeCons(expr, Nil);
Obj x140166664086951 = makeCons(symcdr, x140166664086919);
pushCont(co, 21, clofun4, 4, x, x140166664086215, cc, x140166664117863);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = x140166664086951;
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
Obj x140166664081703 = makeCons(expr, Nil);
Obj x140166664081735 = makeCons(symcons_63, x140166664081703);
Obj x140166664082599 = makeCons(expr, Nil);
Obj x140166664082631 = makeCons(symcar, x140166664082599);
Obj x140166664083335 = makeCons(expr, Nil);
Obj x140166664083367 = makeCons(symcdr, x140166664083335);
pushCont(co, 16, clofun4, 4, x, x140166664082631, cc, x140166664081735);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = x140166664083367;
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
Obj x140166664073959 = makeCons(expr, Nil);
Obj x140166664073991 = makeCons(symcons_63, x140166664073959);
Obj x140166664074887 = makeCons(expr, Nil);
Obj x140166664074919 = makeCons(symcar, x140166664074887);
Obj x140166664075623 = makeCons(expr, Nil);
Obj x140166664075655 = makeCons(symcdr, x140166664075623);
pushCont(co, 11, clofun4, 4, x, x140166664074919, cc, x140166664073991);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = y;
__arg2 = x140166664075655;
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
Obj x140166664075815 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664074919= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140166664073991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 12, clofun4, 2, cc, x140166664073991);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = x140166664074919;
__arg3 = x140166664075815;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140166664075879 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664073991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166664076391 = makeCons(cc, Nil);
Obj x140166664076455 = makeCons(x140166664076391, Nil);
Obj x140166663950791 = makeCons(x140166664075879, x140166664076455);
Obj x140166663950823 = makeCons(x140166664073991, x140166663950791);
Obj x140166663950855 = makeCons(symif, x140166663950823);
__nargs = 2;
__arg1 = x140166663950855;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj x140166664084519 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = x140166664084519;
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
Obj x140166664084775 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = x140166664084775;
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
Obj x140166664085319 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = x140166664085319;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140166664083463 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664082631= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140166664081735= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 17, clofun4, 2, cc, x140166664081735);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = x140166664082631;
__arg3 = x140166664083463;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140166664083527 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664081735= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166664084071 = makeCons(cc, Nil);
Obj x140166664084135 = makeCons(x140166664084071, Nil);
Obj x140166664084167 = makeCons(x140166664083527, x140166664084135);
Obj x140166664084199 = makeCons(x140166664081735, x140166664084167);
Obj x140166664084231 = makeCons(symif, x140166664084199);
__nargs = 2;
__arg1 = x140166664084231;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj x140166664088135 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = x140166664088135;
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
Obj x140166664088391 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = x140166664088391;
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
Obj x140166664088935 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = x140166664088935;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140166664087047 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664086215= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140166664117863= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 22, clofun4, 2, cc, x140166664117863);
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = x140166664086215;
__arg3 = x140166664087047;
co->args[4] = cc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140166664087175 = __arg1;
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664117863= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166664087655 = makeCons(cc, Nil);
Obj x140166664087719 = makeCons(x140166664087655, Nil);
Obj x140166664087751 = makeCons(x140166664087175, x140166664087719);
Obj x140166664087783 = makeCons(x140166664117863, x140166664087751);
Obj x140166664087815 = makeCons(symif, x140166664087783);
__nargs = 2;
__arg1 = x140166664087815;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj x140166664116007 = __arg1;
Obj expr= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e1 = x140166664116007;
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
Obj x140166664116423 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj e2 = x140166664116423;
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
Obj x140166664116967 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 5;
__arg0 = globalRef(symcora_47init_35match1);
__arg1 = x;
__arg2 = e1;
__arg3 = x140166664116967;
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
Obj x140166664134151 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = x140166664134151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj pat = __arg1;
Obj x140166664131047 = PRIM_CDR(pat);
pushCont(co, 28, clofun4, 1, pat);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140166664131047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140166664131079 = __arg1;
Obj pat= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140166664131079) {
Obj x140166664131335 = PRIM_CAR(pat);
__nargs = 2;
__arg1 = x140166664131335;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166664132135 = PRIM_CAR(pat);
Obj x140166664132935 = PRIM_CDR(pat);
pushCont(co, 29, clofun4, 1, x140166664132135);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rcons1);
__arg1 = x140166664132935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140166664132999 = __arg1;
Obj x140166664132135= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664133063 = makeCons(x140166664132999, Nil);
Obj x140166664133095 = makeCons(x140166664132135, x140166664133063);
Obj x140166664133127 = makeCons(symcons, x140166664133095);
__nargs = 2;
__arg1 = x140166664133127;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x = __arg1;
Obj x140166664293159 = PRIM_EQ(x, True);
if (True == x140166664293159) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166664293575 = PRIM_EQ(x, False);
if (True == x140166664293575) {
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
Obj x140166664292391 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = x140166664292391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj l = __arg1;
Obj x140166664472999 = PRIM_EQ(Nil, l);
if (True == x140166664472999) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166664473415 = PRIM_CAR(l);
Obj x140166664473479 = PRIM_EQ(x140166664473415, False);
if (True == x140166664473479) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166664473895 = PRIM_CDR(l);
pushCont(co, 33, clofun4, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45and);
__arg1 = x140166664473895;
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
Obj x140166664473927 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = x140166664473927;
Obj x140166664474215 = PRIM_EQ(more, False);
if (True == x140166664474215) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166664290599 = PRIM_CAR(l);
Obj x140166664291271 = makeCons(False, Nil);
Obj x140166664291303 = makeCons(more, x140166664291271);
Obj x140166664291335 = makeCons(x140166664290599, x140166664291303);
Obj x140166664291367 = makeCons(symif, x140166664291335);
__nargs = 2;
__arg1 = x140166664291367;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label34:
{
Obj exp = __arg1;
Obj x140166664472359 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = x140166664472359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj l = __arg1;
Obj x140166664694631 = PRIM_EQ(l, Nil);
if (True == x140166664694631) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166664695047 = PRIM_CAR(l);
Obj x140166664695111 = PRIM_EQ(x140166664695047, True);
if (True == x140166664695111) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166664695527 = PRIM_CDR(l);
pushCont(co, 36, clofun4, 1, l);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45or);
__arg1 = x140166664695527;
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
Obj x140166664695559 = __arg1;
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj more = x140166664695559;
Obj x140166664470567 = PRIM_EQ(more, True);
if (True == x140166664470567) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166664471111 = PRIM_CAR(l);
Obj x140166664471559 = makeCons(more, Nil);
Obj x140166664471591 = makeCons(True, x140166664471559);
Obj x140166664471623 = makeCons(x140166664471111, x140166664471591);
Obj x140166664471655 = makeCons(symif, x140166664471623);
__nargs = 2;
__arg1 = x140166664471655;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label37:
{
Obj exp = __arg1;
Obj x140166664834919 = PRIM_CDR(exp);
Obj x140166664834951 = PRIM_EQ(Nil, x140166664834919);
if (True == x140166664834951) {
Obj x140166664692007 = makeCons(makeCString("no cond match"), Nil);
Obj x140166664692039 = makeCons(symerror, x140166664692007);
__nargs = 2;
__arg1 = x140166664692039;
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
Obj x140166664692295 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj curr = x140166664692295;
Obj x140166664692839 = PRIM_CAR(curr);
pushCont(co, 39, clofun4, 2, exp, x140166664692839);
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
Obj x140166664693223 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664692839= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 40, clofun4, 2, x140166664693223, x140166664692839);
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
Obj x140166664693799 = __arg1;
Obj x140166664693223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664692839= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166664693831 = makeCons(symcond, x140166664693799);
Obj x140166664693895 = makeCons(x140166664693831, Nil);
Obj x140166664693927 = makeCons(x140166664693223, x140166664693895);
Obj x140166664693959 = makeCons(x140166664692839, x140166664693927);
Obj x140166664693991 = makeCons(symif, x140166664693959);
__nargs = 2;
__arg1 = x140166664693991;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj exp = __arg1;
Obj x140166664834119 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = x140166664834119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj exp = __arg1;
Obj x140166664831527 = PRIM_CDR(exp);
pushCont(co, 43, clofun4, 1, exp);
__nargs = 2;
__arg0 = globalRef(symnull_63);
__arg1 = x140166664831527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140166664831559 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140166664831559) {
Obj x140166664831751 = PRIM_CAR(exp);
__nargs = 2;
__arg1 = x140166664831751;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166664832295 = PRIM_CAR(exp);
pushCont(co, 44, clofun4, 2, exp, x140166664832295);
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
Obj x140166664832679 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664832295= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun4, 2, x140166664832679, x140166664832295);
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
Obj x140166664833223 = __arg1;
Obj x140166664832679= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664832295= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 46, clofun4, 2, x140166664832679, x140166664832295);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35rewrite_45let);
__arg1 = x140166664833223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140166664833255 = __arg1;
Obj x140166664832679= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664832295= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166664833319 = makeCons(x140166664833255, Nil);
Obj x140166664833351 = makeCons(x140166664832679, x140166664833319);
Obj x140166664833383 = makeCons(x140166664832295, x140166664833351);
Obj x140166664833415 = makeCons(symlet, x140166664833383);
__nargs = 2;
__arg1 = x140166664833415;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label47:
{
Obj x = __arg1;
Obj x140166665047815 = PRIM_ISCONS(x);
Obj x140166665047847 = primNot(x140166665047815);
__nargs = 2;
__arg1 = x140166665047847;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label48:
{
Obj x = __arg1;
Obj l = __arg2;
Obj x140166665046215 = PRIM_ISCONS(l);
if (True == x140166665046215) {
Obj x140166665046631 = PRIM_CAR(l);
Obj x140166665046695 = PRIM_EQ(x140166665046631, x);
if (True == x140166665046695) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166665047079 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symelem_63);
__arg1 = x;
__arg2 = x140166665047079;
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
Obj x140166665044231 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 1, clofun5, 2, exp, x140166665044231);
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
Obj x140166665044967 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166665044231= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 2, clofun5, 2, x140166665044967, x140166665044231);
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
Obj x140166665045351 = __arg1;
Obj x140166665044967= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166665044231= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166665045415 = makeCons(x140166665045351, Nil);
Obj x140166665045447 = makeCons(x140166665044967, x140166665045415);
Obj x140166665045479 = makeCons(symlambda, x140166665045447);
Obj x140166665045543 = makeCons(x140166665045479, Nil);
Obj x140166665045575 = makeCons(x140166665044231, x140166665045543);
Obj x140166665045607 = makeCons(symdef, x140166665045575);
__nargs = 2;
__arg1 = x140166665045607;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj exp = __arg1;
Obj x140166665166215 = PRIM_CDR(exp);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = x140166665166215;
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
Obj x140166665163975 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166665164039 = makeCons(x140166665163975, Nil);
Obj x140166665164071 = makeCons(symquote, x140166665164039);
pushCont(co, 6, clofun5, 2, exp, x140166665164071);
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
Obj x140166665164807 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166665164071= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 7, clofun5, 2, x140166665164807, x140166665164071);
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
Obj x140166665165031 = __arg1;
Obj x140166665164807= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166665164071= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140166665165063 = makeCons(x140166665164807, x140166665165031);
Obj x140166665165095 = makeCons(symlambda, x140166665165063);
Obj x140166665165159 = makeCons(x140166665165095, Nil);
Obj x140166665165191 = makeCons(x140166665164071, x140166665165159);
Obj x140166665165223 = makeCons(symcora_47init_35add_45to_45_42macros_42, x140166665165191);
__nargs = 2;
__arg1 = x140166665165223;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj exp = __arg1;
Obj x140166663950631 = PRIM_ISCONS(exp);
if (True == x140166663950631) {
Obj x140166665228551 = PRIM_CAR(exp);
Obj x140166665228615 = PRIM_EQ(x140166665228551, globalRef(sym_42protect_45symbol_42));
if (True == x140166665228615) {
Obj x140166665228807 = PRIM_CDR(exp);
__nargs = 2;
__arg1 = x140166665228807;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166665229223 = PRIM_CAR(exp);
Obj x140166665229287 = PRIM_EQ(x140166665229223, symlambda);
if (True == x140166665229287) {
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
Obj x140166665230951 = PRIM_CAR(exp);
Obj x140166665231015 = PRIM_EQ(x140166665230951, symquote);
if (True == x140166665231015) {
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
Obj x140166665232071 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = makeNative(10, clofun5, 1, 1, exp);
__arg1 = x140166665232071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj exp1 = __arg1;
Obj x140166665231495 = PRIM_EQ(exp1, closureRef(co, 0));
if (True == x140166665231495) {
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
Obj x140166665229831 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 12, clofun5, 1, x140166665229831);
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
Obj x140166665230375 = __arg1;
Obj x140166665229831= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 13, clofun5, 1, x140166665229831);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand_45boot);
__arg1 = x140166665230375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140166665230407 = __arg1;
Obj x140166665229831= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166665230471 = makeCons(x140166665230407, Nil);
Obj x140166665230503 = makeCons(x140166665229831, x140166665230471);
Obj x140166665230535 = makeCons(symlambda, x140166665230503);
__nargs = 2;
__arg1 = x140166665230535;
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
Obj x140166664084423 = PRIM_EQ(Nil, macros);
if (True == x140166664084423) {
__nargs = 2;
__arg1 = exp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140166664075751 = PRIM_CAR(macros);
__nargs = 2;
__arg0 = makeNative(16, clofun5, 1, 2, exp, macros);
__arg1 = x140166664075751;
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
Obj x140166664084935 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140166664084935) {
Obj x140166664085351 = PRIM_CAR(closureRef(co, 0));
Obj x140166664073287 = PRIM_CAR(item);
Obj x140166664073319 = PRIM_EQ(x140166664085351, x140166664073287);
if (True == x140166664073319) {
if (True == True) {
Obj x140166664073639 = PRIM_CDR(item);
__nargs = 2;
__arg0 = x140166664073639;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140166664074055 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = x140166664074055;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj x140166664074375 = PRIM_CDR(item);
__nargs = 2;
__arg0 = x140166664074375;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140166664074791 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = x140166664074791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj x140166664075111 = PRIM_CDR(item);
__nargs = 2;
__arg0 = x140166664075111;
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140166664075527 = PRIM_CDR(closureRef(co, 1));
__nargs = 3;
__arg0 = globalRef(symcora_47init_35macroexpand1_45h);
__arg1 = closureRef(co, 0);
__arg2 = x140166664075527;
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
Obj x140166664083687 = makeCons(n, v);
Obj x140166664083751 = makeCons(x140166664083687, globalRef(sym_42macros_42));
Obj x140166664083783 = primSet(co, sym_42macros_42, x140166664083751);
__nargs = 2;
__arg1 = x140166664083783;
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
Obj x140166664088455 = PRIM_ISCONS(l);
if (True == x140166664088455) {
Obj x140166664089127 = PRIM_CAR(l);
pushCont(co, 20, clofun5, 3, res, l, f);
__nargs = 2;
__arg0 = f;
__arg1 = x140166664089127;
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
Obj x140166664089159 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj l= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140166664089223 = makeCons(x140166664089159, res);
Obj x140166664089479 = PRIM_CDR(l);
__nargs = 4;
__arg0 = globalRef(symmap_45h);
__arg1 = x140166664089223;
__arg2 = f;
__arg3 = x140166664089479;
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
Obj x140166664086535 = PRIM_ISCONS(l);
if (True == x140166664086535) {
Obj x140166664087079 = PRIM_CAR(l);
Obj x140166664087143 = makeCons(x140166664087079, res);
Obj x140166664087367 = PRIM_CDR(l);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35reverse_45h);
__arg1 = x140166664087143;
__arg2 = x140166664087367;
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
Obj x140166664085927 = PRIM_ISCONS(x);
__nargs = 2;
__arg1 = x140166664085927;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label23:
{
Obj exp = __arg1;
Obj x140166664116839 = PRIM_ISCONS(exp);
if (True == x140166664116839) {
Obj x140166664117415 = PRIM_CAR(exp);
Obj x140166664117959 = PRIM_CDR(exp);
pushCont(co, 24, clofun5, 1, x140166664117415);
__nargs = 2;
__arg0 = globalRef(symrcons);
__arg1 = x140166664117959;
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
Obj x140166664117991 = __arg1;
Obj x140166664117415= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140166664118055 = makeCons(x140166664117991, Nil);
Obj x140166664118087 = makeCons(x140166664117415, x140166664118055);
Obj x140166664118119 = makeCons(symcons, x140166664118087);
__nargs = 2;
__arg1 = x140166664118119;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x = __arg1;
Obj x140166664116135 = PRIM_CDR(x);
Obj x140166664116167 = PRIM_CDR(x140166664116135);
Obj x140166664116199 = PRIM_CDR(x140166664116167);
__nargs = 2;
__arg1 = x140166664116199;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj x = __arg1;
Obj x140166664115143 = PRIM_CDR(x);
Obj x140166664115175 = PRIM_CDR(x140166664115143);
Obj x140166664115207 = PRIM_CDR(x140166664115175);
Obj x140166664115239 = PRIM_CAR(x140166664115207);
__nargs = 2;
__arg1 = x140166664115239;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj x = __arg1;
Obj x140166664134439 = PRIM_CDR(x);
Obj x140166664134471 = PRIM_CDR(x140166664134439);
Obj x140166664134503 = PRIM_CAR(x140166664134471);
__nargs = 2;
__arg1 = x140166664134503;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj x = __arg1;
Obj x140166664133319 = PRIM_CDR(x);
Obj x140166664133351 = PRIM_CDR(x140166664133319);
__nargs = 2;
__arg1 = x140166664133351;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
Obj x = __arg1;
Obj x140166664132423 = PRIM_CAR(x);
Obj x140166664132455 = PRIM_CDR(x140166664132423);
__nargs = 2;
__arg1 = x140166664132455;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x = __arg1;
Obj x140166664131495 = PRIM_CAR(x);
Obj x140166664131527 = PRIM_CAR(x140166664131495);
__nargs = 2;
__arg1 = x140166664131527;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj x = __arg1;
Obj x140166664294311 = PRIM_CDR(x);
Obj x140166664294343 = PRIM_CAR(x140166664294311);
__nargs = 2;
__arg1 = x140166664294343;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj x = __arg1;
Obj x140166664293383 = PRIM_EQ(x, Nil);
__nargs = 2;
__arg1 = x140166664293383;
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

