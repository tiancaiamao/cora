#include "types.h"
#include "runtime.h"

static void clofun0(struct Cora* co);
static void clofun1(struct Cora* co);
static void clofun2(struct Cora* co);
static void clofun3(struct Cora* co);
static void clofun4(struct Cora* co);
static void clofun5(struct Cora* co);
static void clofun6(struct Cora* co);
static void clofun7(struct Cora* co);
static void clofun8(struct Cora* co);
static void clofun9(struct Cora* co);


static Obj symcora_47lib_47io_35close_45output_45file;
static Obj symcora_47lib_47io_35open_45output_45file;
static Obj symcora_47init_35macroexpand;
static Obj symcollect;
static Obj symcora_47lib_47toc_35compile_45to_45c;
static Obj symcora_47init_35read_45file_45as_45sexp;
static Obj symcora_47lib_47toc_35preprocess;
static Obj symcora_47lib_47infer_35_42typecheck_42;
static Obj sym_58type;
static Obj symdeclare;
static Obj sym_58declare;
static Obj symtvar;
static Obj symbackquote;
static Obj symmacroexpand;
static Obj symcora_47lib_47infer_35check_45type;
static Obj symcora_47lib_47toc_35split_45type_45and_45code;
static Obj symdefine_45library;
static Obj symbegin;
static Obj symimport;
static Obj symcora_47lib_47toc_35handle_45import_45eagerly;
static Obj symcora_47lib_47toc_35generate_45c;
static Obj symcora_47lib_47toc_35generate_45entry;
static Obj symcora_47lib_47toc_35group_45by_45mod_45h;
static Obj symcora_47lib_47toc_35generate_45toplevel_45group;
static Obj symcora_47lib_47toc_35generate_45jumptable;
static Obj symcora_47lib_47toc_35compile;
static Obj symcora_47init_35cddr;
static Obj sym_45_62;
static Obj symcora_47init_35add_45to_45_42macros_42;
static Obj symcora_47lib_47toc_35rewrite_45_45_62macro;
static Obj symcora_47init_35vector;
static Obj symcora_47lib_47toc_35collect_45lambda_45pass;
static Obj symcora_47lib_47toc_35explicit_45stack_45pass;
static Obj symcora_47lib_47toc_35tailify_45pass;
static Obj symcora_47lib_47toc_35closure_45convert_45pass;
static Obj symcora_47lib_47toc_35parse_45pass;
static Obj symcora_47lib_47io_35display;
static Obj symcora_47lib_47toc_35code_45gen_45toplevel;
static Obj symcora_47lib_47toc_35generate_45call_45args_45reverse;
static Obj symcora_47lib_47toc_35local_45from_45cont;
static Obj symignore;
static Obj symcora_47lib_47toc_35local_45from_45params;
static Obj symcora_47lib_47toc_35code_45gen_45func_45declare;
static Obj symcora_47lib_47toc_35generate_45inst_45list_45h;
static Obj symcora_47lib_47toc_35for_45each;
static Obj sym_37stack_45ref;
static Obj symcora_47lib_47toc_47internal_35escape_45str;
static Obj symcora_47lib_47toc_35generate_45inst_45list;
static Obj symcora_47lib_47toc_35_42mod_45num_42;
static Obj symcora_47lib_47hash_45h_35mod;
static Obj symcora_47lib_47toc_35generate_45cont;
static Obj symcora_47lib_47toc_35generate_45group_45name;
static Obj symcora_47lib_47toc_47internal_35generate_45sym;
static Obj symcora_47init_35value;
static Obj symcora_47lib_47toc_35generate_45inst;
static Obj symcora_47lib_47toc_47internal_35generate_45num;
static Obj symcora_47lib_47toc_47internal_35generate_45str;
static Obj symcora_47lib_47toc_35generate_45call_45list;
static Obj symreg;
static Obj symcora_47init_35vector_45set_33;
static Obj symcora_47lib_47toc_35append_45result;
static Obj symcora_47init_35vector_45ref;
static Obj symcora_47lib_47toc_35collect_45lambda;
static Obj sym_37continuation;
static Obj symcora_47lib_47toc_35explicit_45stack;
static Obj symval;
static Obj symcora_47lib_47toc_35wrap_45var;
static Obj symcora_47init_35caar;
static Obj symcora_47init_35pair_63;
static Obj symcora_47init_35reverse;
static Obj symcora_47lib_47toc_35tailify_45list;
static Obj symcora_47lib_47toc_35tailify;
static Obj symcora_47lib_47toc_35id;
static Obj symcora_47lib_47toc_35closure_45convert;
static Obj sym_37closure;
static Obj symreturn;
static Obj symcall;
static Obj symtailcall;
static Obj symcontinuation;
static Obj symcora_47lib_47toc_35free_45vars;
static Obj sym_37closure_45ref;
static Obj symcora_47lib_47toc_35convert_45protect_63;
static Obj symcora_47lib_47toc_35diff;
static Obj symcora_47lib_47toc_35union;
static Obj symcora_47init_35boolean_63;
static Obj symcora_47init_35number_63;
static Obj symquote;
static Obj sym_37global;
static Obj symif;
static Obj symdo;
static Obj symlet;
static Obj symns;
static Obj sym_37const;
static Obj symcora_47lib_47toc_35add_45symbol_45to_45list;
static Obj symdef;
static Obj symcora_47init_35append;
static Obj symlambda;
static Obj sym_37builtin;
static Obj symcora_47init_35length;
static Obj symcora_47init_35map;
static Obj symcora_47lib_47toc_35parse;
static Obj symcora_47init_35elem_63;
static Obj symcora_47init_35value_45or;
static Obj symcora_47lib_47toc_35lookup_45var;
static Obj symcora_47init_35symbol_45_62string;
static Obj symcora_47init_35string_45append;
static Obj symcora_47init_35intern;
static Obj symcora_47lib_47toc_47internal_35symbol_45cooked_63;
static Obj symcora_47lib_47toc_35var_45with_45ns;
static Obj symtmp;
static Obj symcora_47lib_47toc_35temp_45list;
static Obj symcora_47init_35cadr;
static Obj symcora_47lib_47toc_35builtin_45_62args;
static Obj symcora_47init_35caddr;
static Obj symcora_47lib_47toc_35builtin_45_62name;
static Obj symcora_47init_35null_63;
static Obj symcora_47lib_47toc_35builtin_63;
static Obj symstring_63;
static Obj syminteger_63;
static Obj symnot;
static Obj symsymbol_63;
static Obj symgensym;
static Obj sym_60;
static Obj sym_62;
static Obj sym_61;
static Obj sym_47;
static Obj sym_42;
static Obj sym_45;
static Obj sym_43;
static Obj symcons_63;
static Obj symcons;
static Obj symcdr;
static Obj symcar;
static Obj symset;
static Obj symcora_47lib_47toc_35_42builtin_45prims_42;
static Obj symcora_47lib_47toc_35exist_45in_45env;
static Obj symcora_47lib_47toc_35index;
static Obj symcora_47lib_47toc_35pos_45in_45list0;
static Obj symcora_47lib_47toc_35foldl;
static Obj symcora_47lib_47toc_35error;
static Obj symcora_47lib_47toc_35assq;
static Obj symcora_47lib_47toc_35_42ns_45export_42;
static Obj symcora_47init_35import;
void entry(struct Cora *co) {
symcora_47lib_47io_35close_45output_45file = intern("cora/lib/io#close-output-file");
symcora_47lib_47io_35open_45output_45file = intern("cora/lib/io#open-output-file");
symcora_47init_35macroexpand = intern("cora/init#macroexpand");
symcollect = intern("collect");
symcora_47lib_47toc_35compile_45to_45c = intern("cora/lib/toc#compile-to-c");
symcora_47init_35read_45file_45as_45sexp = intern("cora/init#read-file-as-sexp");
symcora_47lib_47toc_35preprocess = intern("cora/lib/toc#preprocess");
symcora_47lib_47infer_35_42typecheck_42 = intern("cora/lib/infer#*typecheck*");
sym_58type = intern(":type");
symdeclare = intern("declare");
sym_58declare = intern(":declare");
symtvar = intern("tvar");
symbackquote = intern("backquote");
symmacroexpand = intern("macroexpand");
symcora_47lib_47infer_35check_45type = intern("cora/lib/infer#check-type");
symcora_47lib_47toc_35split_45type_45and_45code = intern("cora/lib/toc#split-type-and-code");
symdefine_45library = intern("define-library");
symbegin = intern("begin");
symimport = intern("import");
symcora_47lib_47toc_35handle_45import_45eagerly = intern("cora/lib/toc#handle-import-eagerly");
symcora_47lib_47toc_35generate_45c = intern("cora/lib/toc#generate-c");
symcora_47lib_47toc_35generate_45entry = intern("cora/lib/toc#generate-entry");
symcora_47lib_47toc_35group_45by_45mod_45h = intern("cora/lib/toc#group-by-mod-h");
symcora_47lib_47toc_35generate_45toplevel_45group = intern("cora/lib/toc#generate-toplevel-group");
symcora_47lib_47toc_35generate_45jumptable = intern("cora/lib/toc#generate-jumptable");
symcora_47lib_47toc_35compile = intern("cora/lib/toc#compile");
symcora_47init_35cddr = intern("cora/init#cddr");
sym_45_62 = intern("->");
symcora_47init_35add_45to_45_42macros_42 = intern("cora/init#add-to-*macros*");
symcora_47lib_47toc_35rewrite_45_45_62macro = intern("cora/lib/toc#rewrite-->macro");
symcora_47init_35vector = intern("cora/init#vector");
symcora_47lib_47toc_35collect_45lambda_45pass = intern("cora/lib/toc#collect-lambda-pass");
symcora_47lib_47toc_35explicit_45stack_45pass = intern("cora/lib/toc#explicit-stack-pass");
symcora_47lib_47toc_35tailify_45pass = intern("cora/lib/toc#tailify-pass");
symcora_47lib_47toc_35closure_45convert_45pass = intern("cora/lib/toc#closure-convert-pass");
symcora_47lib_47toc_35parse_45pass = intern("cora/lib/toc#parse-pass");
symcora_47lib_47io_35display = intern("cora/lib/io#display");
symcora_47lib_47toc_35code_45gen_45toplevel = intern("cora/lib/toc#code-gen-toplevel");
symcora_47lib_47toc_35generate_45call_45args_45reverse = intern("cora/lib/toc#generate-call-args-reverse");
symcora_47lib_47toc_35local_45from_45cont = intern("cora/lib/toc#local-from-cont");
symignore = intern("ignore");
symcora_47lib_47toc_35local_45from_45params = intern("cora/lib/toc#local-from-params");
symcora_47lib_47toc_35code_45gen_45func_45declare = intern("cora/lib/toc#code-gen-func-declare");
symcora_47lib_47toc_35generate_45inst_45list_45h = intern("cora/lib/toc#generate-inst-list-h");
symcora_47lib_47toc_35for_45each = intern("cora/lib/toc#for-each");
sym_37stack_45ref = intern("%stack-ref");
symcora_47lib_47toc_47internal_35escape_45str = intern("cora/lib/toc/internal#escape-str");
symcora_47lib_47toc_35generate_45inst_45list = intern("cora/lib/toc#generate-inst-list");
symcora_47lib_47toc_35_42mod_45num_42 = intern("cora/lib/toc#*mod-num*");
symcora_47lib_47hash_45h_35mod = intern("cora/lib/hash-h#mod");
symcora_47lib_47toc_35generate_45cont = intern("cora/lib/toc#generate-cont");
symcora_47lib_47toc_35generate_45group_45name = intern("cora/lib/toc#generate-group-name");
symcora_47lib_47toc_47internal_35generate_45sym = intern("cora/lib/toc/internal#generate-sym");
symcora_47init_35value = intern("cora/init#value");
symcora_47lib_47toc_35generate_45inst = intern("cora/lib/toc#generate-inst");
symcora_47lib_47toc_47internal_35generate_45num = intern("cora/lib/toc/internal#generate-num");
symcora_47lib_47toc_47internal_35generate_45str = intern("cora/lib/toc/internal#generate-str");
symcora_47lib_47toc_35generate_45call_45list = intern("cora/lib/toc#generate-call-list");
symreg = intern("reg");
symcora_47init_35vector_45set_33 = intern("cora/init#vector-set!");
symcora_47lib_47toc_35append_45result = intern("cora/lib/toc#append-result");
symcora_47init_35vector_45ref = intern("cora/init#vector-ref");
symcora_47lib_47toc_35collect_45lambda = intern("cora/lib/toc#collect-lambda");
sym_37continuation = intern("%continuation");
symcora_47lib_47toc_35explicit_45stack = intern("cora/lib/toc#explicit-stack");
symval = intern("val");
symcora_47lib_47toc_35wrap_45var = intern("cora/lib/toc#wrap-var");
symcora_47init_35caar = intern("cora/init#caar");
symcora_47init_35pair_63 = intern("cora/init#pair?");
symcora_47init_35reverse = intern("cora/init#reverse");
symcora_47lib_47toc_35tailify_45list = intern("cora/lib/toc#tailify-list");
symcora_47lib_47toc_35tailify = intern("cora/lib/toc#tailify");
symcora_47lib_47toc_35id = intern("cora/lib/toc#id");
symcora_47lib_47toc_35closure_45convert = intern("cora/lib/toc#closure-convert");
sym_37closure = intern("%closure");
symreturn = intern("return");
symcall = intern("call");
symtailcall = intern("tailcall");
symcontinuation = intern("continuation");
symcora_47lib_47toc_35free_45vars = intern("cora/lib/toc#free-vars");
sym_37closure_45ref = intern("%closure-ref");
symcora_47lib_47toc_35convert_45protect_63 = intern("cora/lib/toc#convert-protect?");
symcora_47lib_47toc_35diff = intern("cora/lib/toc#diff");
symcora_47lib_47toc_35union = intern("cora/lib/toc#union");
symcora_47init_35boolean_63 = intern("cora/init#boolean?");
symcora_47init_35number_63 = intern("cora/init#number?");
symquote = intern("quote");
sym_37global = intern("%global");
symif = intern("if");
symdo = intern("do");
symlet = intern("let");
symns = intern("ns");
sym_37const = intern("%const");
symcora_47lib_47toc_35add_45symbol_45to_45list = intern("cora/lib/toc#add-symbol-to-list");
symdef = intern("def");
symcora_47init_35append = intern("cora/init#append");
symlambda = intern("lambda");
sym_37builtin = intern("%builtin");
symcora_47init_35length = intern("cora/init#length");
symcora_47init_35map = intern("cora/init#map");
symcora_47lib_47toc_35parse = intern("cora/lib/toc#parse");
symcora_47init_35elem_63 = intern("cora/init#elem?");
symcora_47init_35value_45or = intern("cora/init#value-or");
symcora_47lib_47toc_35lookup_45var = intern("cora/lib/toc#lookup-var");
symcora_47init_35symbol_45_62string = intern("cora/init#symbol->string");
symcora_47init_35string_45append = intern("cora/init#string-append");
symcora_47init_35intern = intern("cora/init#intern");
symcora_47lib_47toc_47internal_35symbol_45cooked_63 = intern("cora/lib/toc/internal#symbol-cooked?");
symcora_47lib_47toc_35var_45with_45ns = intern("cora/lib/toc#var-with-ns");
symtmp = intern("tmp");
symcora_47lib_47toc_35temp_45list = intern("cora/lib/toc#temp-list");
symcora_47init_35cadr = intern("cora/init#cadr");
symcora_47lib_47toc_35builtin_45_62args = intern("cora/lib/toc#builtin->args");
symcora_47init_35caddr = intern("cora/init#caddr");
symcora_47lib_47toc_35builtin_45_62name = intern("cora/lib/toc#builtin->name");
symcora_47init_35null_63 = intern("cora/init#null?");
symcora_47lib_47toc_35builtin_63 = intern("cora/lib/toc#builtin?");
symstring_63 = intern("string?");
syminteger_63 = intern("integer?");
symnot = intern("not");
symsymbol_63 = intern("symbol?");
symgensym = intern("gensym");
sym_60 = intern("<");
sym_62 = intern(">");
sym_61 = intern("=");
sym_47 = intern("/");
sym_42 = intern("*");
sym_45 = intern("-");
sym_43 = intern("+");
symcons_63 = intern("cons?");
symcons = intern("cons");
symcdr = intern("cdr");
symcar = intern("car");
symset = intern("set");
symcora_47lib_47toc_35_42builtin_45prims_42 = intern("cora/lib/toc#*builtin-prims*");
symcora_47lib_47toc_35exist_45in_45env = intern("cora/lib/toc#exist-in-env");
symcora_47lib_47toc_35index = intern("cora/lib/toc#index");
symcora_47lib_47toc_35pos_45in_45list0 = intern("cora/lib/toc#pos-in-list0");
symcora_47lib_47toc_35foldl = intern("cora/lib/toc#foldl");
symcora_47lib_47toc_35error = intern("cora/lib/toc#error");
symcora_47lib_47toc_35assq = intern("cora/lib/toc#assq");
symcora_47lib_47toc_35_42ns_45export_42 = intern("cora/lib/toc#*ns-export*");
symcora_47init_35import = intern("cora/init#import");
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
PUSH_CONT(co, 1, clofun0, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35import);
__arg1 = makeCString("cora/lib/toc/internal");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val1639 = __arg1;
PUSH_CONT(co, 2, clofun0, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35import);
__arg1 = makeCString("cora/lib/io");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val1640 = __arg1;
PUSH_CONT(co, 3, clofun0, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35import);
__arg1 = makeCString("cora/lib/hash-h");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val1641 = __arg1;
Obj _35reg1642 = primSet(co, symcora_47lib_47toc_35_42ns_45export_42, Nil);
Obj _35reg1657 = primSet(co, symcora_47lib_47toc_35assq, makeNative(26, clofun9, 2, 0));
Obj _35reg1663 = primSet(co, symcora_47lib_47toc_35foldl, makeNative(22, clofun9, 3, 0));
Obj _35reg1673 = primSet(co, symcora_47lib_47toc_35pos_45in_45list0, makeNative(18, clofun9, 3, 0));
Obj _35reg1674 = primSet(co, symcora_47lib_47toc_35index, makeNative(17, clofun9, 2, 0));
Obj _35reg1681 = primSet(co, symcora_47lib_47toc_35exist_45in_45env, makeNative(13, clofun9, 2, 0));
Obj _35reg1682 = makeCons(makeCString("primSet"), Nil);
Obj _35reg1683 = makeCons(MAKE_NUMBER(2), _35reg1682);
Obj _35reg1684 = makeCons(symset, _35reg1683);
Obj _35reg1685 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _35reg1686 = makeCons(MAKE_NUMBER(1), _35reg1685);
Obj _35reg1687 = makeCons(symcar, _35reg1686);
Obj _35reg1688 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _35reg1689 = makeCons(MAKE_NUMBER(1), _35reg1688);
Obj _35reg1690 = makeCons(symcdr, _35reg1689);
Obj _35reg1691 = makeCons(makeCString("makeCons"), Nil);
Obj _35reg1692 = makeCons(MAKE_NUMBER(2), _35reg1691);
Obj _35reg1693 = makeCons(symcons, _35reg1692);
Obj _35reg1694 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _35reg1695 = makeCons(MAKE_NUMBER(1), _35reg1694);
Obj _35reg1696 = makeCons(symcons_63, _35reg1695);
Obj _35reg1697 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _35reg1698 = makeCons(MAKE_NUMBER(2), _35reg1697);
Obj _35reg1699 = makeCons(sym_43, _35reg1698);
Obj _35reg1700 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _35reg1701 = makeCons(MAKE_NUMBER(2), _35reg1700);
Obj _35reg1702 = makeCons(sym_45, _35reg1701);
Obj _35reg1703 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _35reg1704 = makeCons(MAKE_NUMBER(2), _35reg1703);
Obj _35reg1705 = makeCons(sym_42, _35reg1704);
Obj _35reg1706 = makeCons(makeCString("primDiv"), Nil);
Obj _35reg1707 = makeCons(MAKE_NUMBER(2), _35reg1706);
Obj _35reg1708 = makeCons(sym_47, _35reg1707);
Obj _35reg1709 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _35reg1710 = makeCons(MAKE_NUMBER(2), _35reg1709);
Obj _35reg1711 = makeCons(sym_61, _35reg1710);
Obj _35reg1712 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _35reg1713 = makeCons(MAKE_NUMBER(2), _35reg1712);
Obj _35reg1714 = makeCons(sym_62, _35reg1713);
Obj _35reg1715 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _35reg1716 = makeCons(MAKE_NUMBER(2), _35reg1715);
Obj _35reg1717 = makeCons(sym_60, _35reg1716);
Obj _35reg1718 = makeCons(makeCString("primGenSym"), Nil);
Obj _35reg1719 = makeCons(MAKE_NUMBER(1), _35reg1718);
Obj _35reg1720 = makeCons(symgensym, _35reg1719);
Obj _35reg1721 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _35reg1722 = makeCons(MAKE_NUMBER(1), _35reg1721);
Obj _35reg1723 = makeCons(symsymbol_63, _35reg1722);
Obj _35reg1724 = makeCons(makeCString("primNot"), Nil);
Obj _35reg1725 = makeCons(MAKE_NUMBER(1), _35reg1724);
Obj _35reg1726 = makeCons(symnot, _35reg1725);
Obj _35reg1727 = makeCons(makeCString("primIsNumber"), Nil);
Obj _35reg1728 = makeCons(MAKE_NUMBER(1), _35reg1727);
Obj _35reg1729 = makeCons(syminteger_63, _35reg1728);
Obj _35reg1730 = makeCons(makeCString("primIsString"), Nil);
Obj _35reg1731 = makeCons(MAKE_NUMBER(1), _35reg1730);
Obj _35reg1732 = makeCons(symstring_63, _35reg1731);
Obj _35reg1733 = makeCons(_35reg1732, Nil);
Obj _35reg1734 = makeCons(_35reg1729, _35reg1733);
Obj _35reg1735 = makeCons(_35reg1726, _35reg1734);
Obj _35reg1736 = makeCons(_35reg1723, _35reg1735);
Obj _35reg1737 = makeCons(_35reg1720, _35reg1736);
Obj _35reg1738 = makeCons(_35reg1717, _35reg1737);
Obj _35reg1739 = makeCons(_35reg1714, _35reg1738);
Obj _35reg1740 = makeCons(_35reg1711, _35reg1739);
Obj _35reg1741 = makeCons(_35reg1708, _35reg1740);
Obj _35reg1742 = makeCons(_35reg1705, _35reg1741);
Obj _35reg1743 = makeCons(_35reg1702, _35reg1742);
Obj _35reg1744 = makeCons(_35reg1699, _35reg1743);
Obj _35reg1745 = makeCons(_35reg1696, _35reg1744);
Obj _35reg1746 = makeCons(_35reg1693, _35reg1745);
Obj _35reg1747 = makeCons(_35reg1690, _35reg1746);
Obj _35reg1748 = makeCons(_35reg1687, _35reg1747);
Obj _35reg1749 = makeCons(_35reg1684, _35reg1748);
Obj _35reg1750 = primSet(co, symcora_47lib_47toc_35_42builtin_45prims_42, _35reg1749);
Obj _35reg1754 = primSet(co, symcora_47lib_47toc_35builtin_63, makeNative(10, clofun9, 1, 0));
Obj _35reg1757 = primSet(co, symcora_47lib_47toc_35builtin_45_62name, makeNative(7, clofun9, 1, 0));
Obj _35reg1760 = primSet(co, symcora_47lib_47toc_35builtin_45_62args, makeNative(4, clofun9, 1, 0));
Obj _35reg1765 = primSet(co, symcora_47lib_47toc_35temp_45list, makeNative(1, clofun9, 2, 0));
Obj _35reg1771 = primSet(co, symcora_47lib_47toc_35var_45with_45ns, makeNative(46, clofun8, 2, 0));
Obj _35reg1783 = primSet(co, symcora_47lib_47toc_35lookup_45var, makeNative(36, clofun8, 3, 0));
Obj _35reg1975 = primSet(co, symcora_47lib_47toc_35parse, makeNative(48, clofun7, 5, 0));
Obj _35reg1986 = primSet(co, symcora_47lib_47toc_35union, makeNative(42, clofun7, 2, 0));
Obj _35reg1997 = primSet(co, symcora_47lib_47toc_35diff, makeNative(36, clofun7, 2, 0));
Obj _35reg2048 = primSet(co, symcora_47lib_47toc_35convert_45protect_63, makeNative(29, clofun7, 1, 0));
Obj _35reg2223 = primSet(co, symcora_47lib_47toc_35free_45vars, makeNative(6, clofun7, 1, 0));
Obj _35reg2296 = primSet(co, symcora_47lib_47toc_35closure_45convert, makeNative(41, clofun6, 2, 0));
Obj _35reg2299 = primSet(co, symcora_47lib_47toc_35id, makeNative(40, clofun6, 1, 0));
Obj _35reg2436 = primSet(co, symcora_47lib_47toc_35tailify, makeNative(22, clofun6, 2, 0));
Obj _35reg2483 = primSet(co, symcora_47lib_47toc_35tailify_45list, makeNative(12, clofun6, 3, 0));
Obj _35reg2562 = primSet(co, symcora_47lib_47toc_35explicit_45stack, makeNative(44, clofun5, 2, 0));
Obj _35reg2660 = primSet(co, symcora_47lib_47toc_35collect_45lambda, makeNative(24, clofun5, 2, 0));
Obj _35reg2668 = primSet(co, symcora_47lib_47toc_35append_45result, makeNative(20, clofun5, 2, 0));
Obj _35reg2675 = primSet(co, symcora_47lib_47toc_35wrap_45var, makeNative(18, clofun5, 2, 0));
Obj _35reg2695 = primSet(co, symcora_47lib_47toc_35generate_45call_45list, makeNative(4, clofun5, 4, 0));
Obj _35reg2700 = primSet(co, symcora_47lib_47toc_35add_45symbol_45to_45list, makeNative(1, clofun5, 2, 0));
Obj _35reg2973 = primSet(co, symcora_47lib_47toc_35generate_45inst, makeNative(17, clofun3, 4, 0));
Obj _35reg2998 = primSet(co, symcora_47lib_47toc_35generate_45cont, makeNative(3, clofun3, 3, 0));
Obj _35reg3007 = primSet(co, symcora_47lib_47toc_35generate_45inst_45list_45h, makeNative(47, clofun2, 5, 0));
Obj _35reg3008 = primSet(co, symcora_47lib_47toc_35generate_45inst_45list, makeNative(46, clofun2, 4, 0));
Obj _35reg3009 = primSet(co, symcora_47lib_47toc_35_42mod_45num_42, MAKE_NUMBER(50));
Obj _35reg3013 = primSet(co, symcora_47lib_47toc_35generate_45group_45name, makeNative(44, clofun2, 3, 0));
Obj _35reg3017 = primSet(co, symcora_47lib_47toc_35code_45gen_45func_45declare, makeNative(40, clofun2, 3, 0));
Obj _35reg3025 = primSet(co, symcora_47lib_47toc_35local_45from_45params, makeNative(33, clofun2, 3, 0));
Obj _35reg3030 = primSet(co, symcora_47lib_47toc_35local_45from_45cont, makeNative(28, clofun2, 3, 0));
Obj _35reg3037 = primSet(co, symcora_47lib_47toc_35generate_45call_45args_45reverse, makeNative(24, clofun2, 4, 0));
Obj _35reg3100 = primSet(co, symcora_47lib_47toc_35code_45gen_45toplevel, makeNative(12, clofun2, 3, 0));
Obj _35reg3101 = primSet(co, symcora_47lib_47toc_35parse_45pass, makeNative(11, clofun2, 2, 0));
Obj _35reg3102 = primSet(co, symcora_47lib_47toc_35closure_45convert_45pass, makeNative(10, clofun2, 1, 0));
Obj _35reg3103 = primSet(co, symcora_47lib_47toc_35tailify_45pass, makeNative(9, clofun2, 1, 0));
Obj _35reg3104 = primSet(co, symcora_47lib_47toc_35explicit_45stack_45pass, makeNative(8, clofun2, 1, 0));
Obj _35reg3114 = primSet(co, symcora_47lib_47toc_35collect_45lambda_45pass, makeNative(2, clofun2, 1, 0));
Obj _35reg3121 = primSet(co, symcora_47lib_47toc_35rewrite_45_45_62macro, makeNative(49, clofun1, 2, 0));
PUSH_CONT(co, 4, clofun0, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = sym_45_62;
__arg2 = makeNative(46, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3124 = __arg1;
Obj _35reg3130 = primSet(co, symcora_47lib_47toc_35compile, makeNative(40, clofun1, 2, 0));
Obj _35reg3136 = primSet(co, symcora_47lib_47toc_35for_45each, makeNative(36, clofun1, 2, 0));
Obj _35reg3143 = primSet(co, symcora_47lib_47toc_35generate_45jumptable, makeNative(32, clofun1, 3, 0));
Obj _35reg3164 = primSet(co, symcora_47lib_47toc_35generate_45toplevel_45group, makeNative(10, clofun1, 3, 0));
Obj _35reg3179 = primSet(co, symcora_47lib_47toc_35group_45by_45mod_45h, makeNative(4, clofun1, 4, 0));
Obj _35reg3190 = primSet(co, symcora_47lib_47toc_35generate_45entry, makeNative(41, clofun0, 2, 0));
Obj _35reg3201 = primSet(co, symcora_47lib_47toc_35generate_45c, makeNative(28, clofun0, 3, 0));
Obj _35reg3233 = primSet(co, symcora_47lib_47toc_35handle_45import_45eagerly, makeNative(22, clofun0, 1, 0));
Obj _35reg3274 = primSet(co, symcora_47lib_47toc_35split_45type_45and_45code, makeNative(15, clofun0, 4, 0));
Obj _35reg3275 = primSet(co, symcora_47lib_47infer_35_42typecheck_42, False);
Obj _35reg3278 = primSet(co, symcora_47lib_47toc_35preprocess, makeNative(12, clofun0, 1, 0));
Obj _35reg3287 = primSet(co, symcora_47lib_47toc_35compile_45to_45c, makeNative(5, clofun0, 2, 0));
__nargs = 2;
__arg1 = _35reg3287;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj from = __arg1;
Obj to = __arg2;
Obj _35reg3279 = primGenSym(symcollect);
Obj globals = _35reg3279;
Obj _35reg3280 = primSet(co, globals, Nil);
PUSH_CONT(co, 6, clofun0, 3, from, to, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35compile);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3281 = __arg1;
Obj from= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 7, clofun0, 3, _35val3281, to, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35preprocess);
__arg1 = from;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3282 = __arg1;
Obj _35val3281= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 8, clofun0, 3, _35val3281, to, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = _35val3282;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3283 = __arg1;
Obj _35val3281= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 9, clofun0, 2, to, globals);
__nargs = 2;
__arg0 = _35val3281;
__arg1 = _35val3283;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3284 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj bc = _35val3284;
PUSH_CONT(co, 10, clofun0, 2, bc, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35open_45output_45file);
__arg1 = to;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val3285 = __arg1;
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stream = _35val3285;
PUSH_CONT(co, 11, clofun0, 1, stream);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45c);
__arg1 = stream;
__arg2 = bc;
__arg3 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3286 = __arg1;
Obj stream= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35close_45output_45file);
__arg1 = stream;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj file_45path = __arg1;
PUSH_CONT(co, 13, clofun0, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35read_45file_45as_45sexp);
__arg1 = file_45path;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3276 = __arg1;
Obj sexp = _35val3276;
PUSH_CONT(co, 14, clofun0, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3277 = __arg1;
Obj sexp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg1 = sexp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35p1631 = __arg1;
Obj _35p1632 = __arg2;
Obj _35p1633 = __arg3;
Obj _35p1634 = co->args[4];
Obj _35cc1635 = makeNative(18, clofun0, 0, 4, _35p1631, _35p1632, _35p1633, _35p1634);
Obj _35reg3271 = PRIM_EQ(Nil, _35p1631);
if (True == _35reg3271) {
Obj type = _35p1632;
Obj code = _35p1633;
Obj k = _35p1634;
PUSH_CONT(co, 16, clofun0, 2, code, k);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = type;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1635;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val3272 = __arg1;
Obj code= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 17, clofun0, 2, k, _35val3272);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3273 = __arg1;
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val3272= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = k;
__arg1 = _35val3272;
__arg2 = _35val3273;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35cc1636 = makeNative(19, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3260 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3260) {
Obj _35reg3261 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3262 = PRIM_ISCONS(_35reg3261);
if (True == _35reg3262) {
Obj _35reg3263 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3264 = PRIM_CAR(_35reg3263);
Obj _35reg3265 = PRIM_EQ(sym_58type, _35reg3264);
if (True == _35reg3265) {
Obj _35reg3266 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3267 = PRIM_CDR(_35reg3266);
Obj exp = _35reg3267;
Obj _35reg3268 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg3268;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3269 = makeCons(symbegin, exp);
Obj _35reg3270 = makeCons(_35reg3269, type);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = _35reg3270;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1636;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1636;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1636;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35cc1637 = makeNative(20, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3249 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3249) {
Obj _35reg3250 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3251 = PRIM_ISCONS(_35reg3250);
if (True == _35reg3251) {
Obj _35reg3252 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3253 = PRIM_CAR(_35reg3252);
Obj _35reg3254 = PRIM_EQ(sym_58declare, _35reg3253);
if (True == _35reg3254) {
Obj _35reg3255 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3256 = PRIM_CDR(_35reg3255);
Obj exp = _35reg3256;
Obj _35reg3257 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg3257;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3258 = makeCons(symdeclare, exp);
Obj _35reg3259 = makeCons(_35reg3258, type);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = _35reg3259;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1637;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1637;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1637;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc1638 = makeNative(21, clofun0, 0, 0);
Obj _35reg3234 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3234) {
Obj _35reg3235 = PRIM_CAR(closureRef(co, 0));
Obj exp = _35reg3235;
Obj _35reg3236 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg3236;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3237 = makeCons(exp, Nil);
Obj _35reg3238 = makeCons(symbackquote, _35reg3237);
Obj _35reg3239 = makeCons(_35reg3238, Nil);
Obj _35reg3240 = makeCons(symmacroexpand, _35reg3239);
Obj _35reg3241 = makeCons(symtvar, Nil);
Obj _35reg3242 = makeCons(Nil, Nil);
Obj _35reg3243 = makeCons(Nil, _35reg3242);
Obj _35reg3244 = makeCons(_35reg3241, _35reg3243);
Obj _35reg3245 = makeCons(_35reg3240, _35reg3244);
Obj _35reg3246 = makeCons(symcora_47lib_47infer_35check_45type, _35reg3245);
Obj _35reg3247 = makeCons(_35reg3246, type);
Obj _35reg3248 = makeCons(exp, code);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = _35reg3247;
__arg3 = _35reg3248;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1638;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _35p1626 = __arg1;
Obj _35cc1627 = makeNative(23, clofun0, 0, 1, _35p1626);
Obj _35reg3224 = PRIM_ISCONS(_35p1626);
if (True == _35reg3224) {
Obj _35reg3225 = PRIM_CAR(_35p1626);
Obj _35reg3226 = PRIM_EQ(symdefine_45library, _35reg3225);
if (True == _35reg3226) {
Obj _35reg3227 = PRIM_CDR(_35p1626);
Obj _35reg3228 = PRIM_ISCONS(_35reg3227);
if (True == _35reg3228) {
Obj _35reg3229 = PRIM_CDR(_35p1626);
Obj _35reg3230 = PRIM_CAR(_35reg3229);
Obj __ = _35reg3230;
Obj _35reg3231 = PRIM_CDR(_35p1626);
Obj _35reg3232 = PRIM_CDR(_35reg3231);
Obj remain = _35reg3232;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1627;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1627;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1627;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35cc1628 = makeNative(24, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg3220 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3220) {
Obj _35reg3221 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3222 = PRIM_EQ(symbegin, _35reg3221);
if (True == _35reg3222) {
Obj _35reg3223 = PRIM_CDR(closureRef(co, 0));
Obj remain = _35reg3223;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1628;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1628;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _35cc1629 = makeNative(26, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg3202 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3202) {
Obj _35reg3203 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3204 = PRIM_ISCONS(_35reg3203);
if (True == _35reg3204) {
Obj _35reg3205 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3206 = PRIM_CAR(_35reg3205);
Obj _35reg3207 = PRIM_EQ(symimport, _35reg3206);
if (True == _35reg3207) {
Obj _35reg3208 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3209 = PRIM_CDR(_35reg3208);
Obj _35reg3210 = PRIM_ISCONS(_35reg3209);
if (True == _35reg3210) {
Obj _35reg3211 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3212 = PRIM_CDR(_35reg3211);
Obj _35reg3213 = PRIM_CAR(_35reg3212);
Obj pkg = _35reg3213;
Obj _35reg3214 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3215 = PRIM_CDR(_35reg3214);
Obj _35reg3216 = PRIM_CDR(_35reg3215);
Obj _35reg3217 = PRIM_EQ(Nil, _35reg3216);
if (True == _35reg3217) {
Obj _35reg3218 = PRIM_CDR(closureRef(co, 0));
Obj remain = _35reg3218;
PUSH_CONT(co, 25, clofun0, 1, remain);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35import);
__arg1 = pkg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1629;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1629;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1629;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1629;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1629;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35val3219 = __arg1;
Obj remain= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _35cc1630 = makeNative(27, clofun0, 0, 0);
Obj __ = closureRef(co, 0);
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj to = __arg1;
Obj bc = __arg2;
Obj globals = __arg3;
PUSH_CONT(co, 29, clofun0, 3, bc, globals, to);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = Nil;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _35val3191 = __arg1;
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj groups = _35val3191;
PUSH_CONT(co, 30, clofun0, 3, globals, to, groups);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val3192 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj maxid = _35val3192;
PUSH_CONT(co, 31, clofun0, 4, globals, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("#include \"types.h\"\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val3193 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 32, clofun0, 4, globals, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("#include \"runtime.h\"\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val3194 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 33, clofun0, 4, globals, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(38, clofun0, 1, 2, maxid, to);
__arg2 = groups;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _35val3197 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 34, clofun0, 4, globals, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _35val3198 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 35, clofun0, 3, to, maxid, groups);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35value);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _35val3199 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 36, clofun0, 3, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45entry);
__arg1 = to;
__arg2 = _35val3199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35val3200 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 2];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(37, clofun0, 1, 2, to, maxid);
__arg2 = groups;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj group = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45toplevel_45group);
__arg1 = closureRef(co, 0);
__arg2 = group;
__arg3 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj group = __arg1;
PUSH_CONT(co, 39, clofun0, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _35val3195 = __arg1;
PUSH_CONT(co, 40, clofun0, 0);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35code_45gen_45func_45declare);
__arg1 = closureRef(co, 1);
__arg2 = _35val3195;
__arg3 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _35val3196 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 1);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj to = __arg1;
Obj globals = __arg2;
PUSH_CONT(co, 42, clofun0, 2, globals, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(1, clofun1, 1, 1, to);
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val3182 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 43, clofun0, 2, globals, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("void entry(struct Cora *co) {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _35val3183 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 44, clofun0, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(45, clofun0, 1, 1, to);
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val3189 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("clofun0(co);\n}\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj sym = __arg1;
PUSH_CONT(co, 46, clofun0, 1, sym);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = makeCString("sym");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _35val3184 = __arg1;
Obj sym= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 47, clofun0, 1, sym);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = closureRef(co, 0);
__arg2 = sym;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _35val3185 = __arg1;
Obj sym= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 48, clofun0, 1, sym);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = makeCString(" = intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35val3186 = __arg1;
Obj sym= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 49, clofun0, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35symbol_45_62string);
__arg1 = sym;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35val3187 = __arg1;
PUSH_CONT(co, 0, clofun1, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = _35val3187;
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
Obj _35val3188 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = makeCString("\");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj sym = __arg1;
PUSH_CONT(co, 2, clofun1, 1, sym);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = makeCString("static Obj sym");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val3180 = __arg1;
Obj sym= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 3, clofun1, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = closureRef(co, 0);
__arg2 = sym;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3181 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35p1620 = __arg1;
Obj _35p1621 = __arg2;
Obj _35p1622 = __arg3;
Obj _35p1623 = co->args[4];
Obj _35cc1624 = makeNative(7, clofun1, 0, 4, _35p1620, _35p1621, _35p1622, _35p1623);
Obj res = _35p1620;
Obj idx = _35p1621;
Obj acc = _35p1622;
Obj _35reg3174 = PRIM_EQ(Nil, _35p1623);
if (True == _35reg3174) {
PUSH_CONT(co, 5, clofun1, 2, acc, res);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = acc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1624;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val3175 = __arg1;
Obj acc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3176 = primNot(_35val3175);
if (True == _35reg3176) {
PUSH_CONT(co, 6, clofun1, 1, res);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = acc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val3177 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3178 = makeCons(_35val3177, res);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = _35reg3178;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35cc1625 = makeNative(9, clofun1, 0, 0);
Obj res = closureRef(co, 0);
Obj idx = closureRef(co, 1);
Obj acc = closureRef(co, 2);
Obj _35reg3165 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg3165) {
Obj _35reg3166 = PRIM_CAR(closureRef(co, 3));
Obj bc = _35reg3166;
Obj _35reg3167 = PRIM_CDR(closureRef(co, 3));
Obj more = _35reg3167;
Obj _35reg3168 = PRIM_EQ(idx, globalRef(symcora_47lib_47toc_35_42mod_45num_42));
if (True == _35reg3168) {
PUSH_CONT(co, 8, clofun1, 3, res, bc, more);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = acc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3172 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj _35reg3173 = makeCons(bc, acc);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = res;
__arg2 = _35reg3172;
__arg3 = _35reg3173;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1625;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35val3169 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3170 = makeCons(_35val3169, res);
Obj _35reg3171 = makeCons(bc, more);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = _35reg3170;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = _35reg3171;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj to = __arg1;
Obj group = __arg2;
Obj maxid = __arg3;
PUSH_CONT(co, 11, clofun1, 3, maxid, group, to);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val3144 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 12, clofun1, 3, maxid, group, to);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35code_45gen_45func_45declare);
__arg1 = to;
__arg2 = _35val3144;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3145 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 13, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3146 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 14, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("int __nargs = co->nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3147 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 15, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("Obj __arg0 = co->args[0];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3148 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 16, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("Obj __arg1 = co->args[1];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3149 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 17, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("Obj __arg2 = co->args[2];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3150 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 18, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("Obj __arg3 = co->args[3];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3151 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 19, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("static void* jumpTable[] = {");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3152 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 20, clofun1, 3, maxid, group, to);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3153 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 21, clofun1, 3, maxid, group, to);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45jumptable);
__arg1 = to;
__arg2 = MAKE_NUMBER(0);
__arg3 = _35val3153;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _35val3154 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 22, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("};\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _35val3155 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 23, clofun1, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj _35val3156 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 24, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(31, clofun1, 1, 2, to, maxid);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _35val3157 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 25, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("fail:\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _35val3158 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 26, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("co->nargs = __nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _35val3159 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 27, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("co->args[0] = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _35val3160 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 28, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("co->args[1] = __arg1;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _35val3161 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 29, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("co->args[2] = __arg2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _35val3162 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 30, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("co->args[3] = __arg3;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val3163 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("\n}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35code_45gen_45toplevel);
__arg1 = closureRef(co, 0);
__arg2 = x;
__arg3 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj to = __arg1;
Obj i = __arg2;
Obj n = __arg3;
Obj _35reg3137 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == _35reg3137) {
PUSH_CONT(co, 35, clofun1, 2, to, n);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("&&label0");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3139 = PRIM_LT(i, n);
if (True == _35reg3139) {
PUSH_CONT(co, 33, clofun1, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString(", &&label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label33:
{
Obj _35val3140 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 34, clofun1, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = to;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _35val3141 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3142 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45jumptable);
__arg1 = to;
__arg2 = _35reg3142;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _35val3138 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45jumptable);
__arg1 = to;
__arg2 = MAKE_NUMBER(1);
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35p1616 = __arg1;
Obj _35p1617 = __arg2;
Obj _35cc1618 = makeNative(37, clofun1, 0, 2, _35p1616, _35p1617);
Obj fn = _35p1616;
Obj _35reg3135 = PRIM_EQ(Nil, _35p1617);
if (True == _35reg3135) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1618;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _35cc1619 = makeNative(39, clofun1, 0, 0);
Obj fn = closureRef(co, 0);
Obj _35reg3131 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg3131) {
Obj _35reg3132 = PRIM_CAR(closureRef(co, 1));
Obj x = _35reg3132;
Obj _35reg3133 = PRIM_CDR(closureRef(co, 1));
Obj y = _35reg3133;
PUSH_CONT(co, 38, clofun1, 2, fn, y);
__nargs = 2;
__arg0 = fn;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1619;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35val3134 = __arg1;
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = fn;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj globals = __arg1;
Obj exp = __arg2;
PUSH_CONT(co, 41, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35parse_45pass);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val3125 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 42, clofun1, 0);
__nargs = 2;
__arg0 = _35val3125;
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val3126 = __arg1;
PUSH_CONT(co, 43, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert_45pass);
__arg1 = _35val3126;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _35val3127 = __arg1;
PUSH_CONT(co, 44, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45pass);
__arg1 = _35val3127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val3128 = __arg1;
PUSH_CONT(co, 45, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack_45pass);
__arg1 = _35val3128;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35val3129 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda_45pass);
__arg1 = _35val3129;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj exp = __arg1;
PUSH_CONT(co, 47, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35cadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _35val3122 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj obj = _35val3122;
PUSH_CONT(co, 48, clofun1, 1, obj);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35cddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35val3123 = __arg1;
Obj obj= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fns = _35val3123;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35rewrite_45_45_62macro);
__arg1 = obj;
__arg2 = fns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35p1612 = __arg1;
Obj _35p1613 = __arg2;
Obj _35cc1614 = makeNative(0, clofun2, 0, 2, _35p1612, _35p1613);
Obj obj = _35p1612;
Obj _35reg3120 = PRIM_EQ(Nil, _35p1613);
if (True == _35reg3120) {
__nargs = 2;
__arg1 = obj;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1614;
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
Obj _35cc1615 = makeNative(1, clofun2, 0, 0);
Obj obj = closureRef(co, 0);
Obj _35reg3115 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg3115) {
Obj _35reg3116 = PRIM_CAR(closureRef(co, 1));
Obj hd = _35reg3116;
Obj _35reg3117 = PRIM_CDR(closureRef(co, 1));
Obj more = _35reg3117;
Obj _35reg3118 = makeCons(obj, Nil);
Obj _35reg3119 = makeCons(hd, _35reg3118);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35rewrite_45_45_62macro);
__arg1 = _35reg3119;
__arg2 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj exp = __arg1;
PUSH_CONT(co, 3, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35vector);
__arg1 = MAKE_NUMBER(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3105 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v = _35val3105;
PUSH_CONT(co, 4, clofun2, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35vector_45set_33);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
__arg3 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3106 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 5, clofun2, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35vector_45set_33);
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val3107 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 6, clofun2, 1, v);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda);
__arg1 = v;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3108 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1 = _35val3108;
Obj _35reg3109 = makeCons(e1, Nil);
Obj _35reg3110 = makeCons(Nil, _35reg3109);
Obj _35reg3111 = makeCons(Nil, _35reg3110);
Obj _35reg3112 = makeCons(symlambda, _35reg3111);
PUSH_CONT(co, 7, clofun2, 1, v);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg3112;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3113 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35vector_45ref);
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = exp;
__arg2 = globalRef(symcora_47lib_47toc_35id);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj globals = __arg1;
Obj exp = __arg2;
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = Nil;
__arg2 = makeCString("");
__arg3 = Nil;
co->args[4] = globals;
co->args[5] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35p1607 = __arg1;
Obj _35p1608 = __arg2;
Obj _35p1609 = __arg3;
Obj _35cc1610 = makeNative(20, clofun2, 0, 3, _35p1607, _35p1608, _35p1609);
Obj w = _35p1607;
Obj _35reg3040 = PRIM_ISCONS(_35p1608);
if (True == _35reg3040) {
Obj _35reg3041 = PRIM_CAR(_35p1608);
Obj label = _35reg3041;
Obj _35reg3042 = PRIM_CDR(_35p1608);
Obj _35reg3043 = PRIM_ISCONS(_35reg3042);
if (True == _35reg3043) {
Obj _35reg3044 = PRIM_CDR(_35p1608);
Obj _35reg3045 = PRIM_CAR(_35reg3044);
Obj _35reg3046 = PRIM_ISCONS(_35reg3045);
if (True == _35reg3046) {
Obj _35reg3047 = PRIM_CDR(_35p1608);
Obj _35reg3048 = PRIM_CAR(_35reg3047);
Obj _35reg3049 = PRIM_CAR(_35reg3048);
Obj _35reg3050 = PRIM_EQ(symlambda, _35reg3049);
if (True == _35reg3050) {
Obj _35reg3051 = PRIM_CDR(_35p1608);
Obj _35reg3052 = PRIM_CAR(_35reg3051);
Obj _35reg3053 = PRIM_CDR(_35reg3052);
Obj _35reg3054 = PRIM_ISCONS(_35reg3053);
if (True == _35reg3054) {
Obj _35reg3055 = PRIM_CDR(_35p1608);
Obj _35reg3056 = PRIM_CAR(_35reg3055);
Obj _35reg3057 = PRIM_CDR(_35reg3056);
Obj _35reg3058 = PRIM_CAR(_35reg3057);
Obj params = _35reg3058;
Obj _35reg3059 = PRIM_CDR(_35p1608);
Obj _35reg3060 = PRIM_CAR(_35reg3059);
Obj _35reg3061 = PRIM_CDR(_35reg3060);
Obj _35reg3062 = PRIM_CDR(_35reg3061);
Obj _35reg3063 = PRIM_ISCONS(_35reg3062);
if (True == _35reg3063) {
Obj _35reg3064 = PRIM_CDR(_35p1608);
Obj _35reg3065 = PRIM_CAR(_35reg3064);
Obj _35reg3066 = PRIM_CDR(_35reg3065);
Obj _35reg3067 = PRIM_CDR(_35reg3066);
Obj _35reg3068 = PRIM_CAR(_35reg3067);
Obj actives = _35reg3068;
Obj _35reg3069 = PRIM_CDR(_35p1608);
Obj _35reg3070 = PRIM_CAR(_35reg3069);
Obj _35reg3071 = PRIM_CDR(_35reg3070);
Obj _35reg3072 = PRIM_CDR(_35reg3071);
Obj _35reg3073 = PRIM_CDR(_35reg3072);
Obj _35reg3074 = PRIM_ISCONS(_35reg3073);
if (True == _35reg3074) {
Obj _35reg3075 = PRIM_CDR(_35p1608);
Obj _35reg3076 = PRIM_CAR(_35reg3075);
Obj _35reg3077 = PRIM_CDR(_35reg3076);
Obj _35reg3078 = PRIM_CDR(_35reg3077);
Obj _35reg3079 = PRIM_CDR(_35reg3078);
Obj _35reg3080 = PRIM_CAR(_35reg3079);
Obj body = _35reg3080;
Obj _35reg3081 = PRIM_CDR(_35p1608);
Obj _35reg3082 = PRIM_CAR(_35reg3081);
Obj _35reg3083 = PRIM_CDR(_35reg3082);
Obj _35reg3084 = PRIM_CDR(_35reg3083);
Obj _35reg3085 = PRIM_CDR(_35reg3084);
Obj _35reg3086 = PRIM_CDR(_35reg3085);
Obj _35reg3087 = PRIM_EQ(Nil, _35reg3086);
if (True == _35reg3087) {
Obj _35reg3088 = PRIM_CDR(_35p1608);
Obj _35reg3089 = PRIM_CDR(_35reg3088);
Obj _35reg3090 = PRIM_EQ(Nil, _35reg3089);
if (True == _35reg3090) {
Obj maxid = _35p1609;
PUSH_CONT(co, 13, clofun2, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1610;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1610;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1610;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1610;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1610;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1610;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1610;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1610;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1610;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val3091 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg3092 = PRIM_SUB(maxid, label);
PUSH_CONT(co, 14, clofun2, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = _35reg3092;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3093 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
PUSH_CONT(co, 15, clofun2, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = _35val3093;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3094 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
PUSH_CONT(co, 16, clofun2, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(":\n{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3095 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
PUSH_CONT(co, 17, clofun2, 6, actives, maxid, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45args_45reverse);
__arg1 = globalRef(symcora_47lib_47toc_35local_45from_45params);
__arg2 = w;
__arg3 = MAKE_NUMBER(1);
co->args[4] = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3096 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
PUSH_CONT(co, 18, clofun2, 5, maxid, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45args_45reverse);
__arg1 = globalRef(symcora_47lib_47toc_35local_45from_45cont);
__arg2 = w;
__arg3 = MAKE_NUMBER(0);
co->args[4] = actives;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val3097 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3098 = makeCons(maxid, label);
PUSH_CONT(co, 19, clofun2, 1, w);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = _35reg3098;
__arg2 = params;
__arg3 = w;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val3099 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35cc1611 = makeNative(23, clofun2, 0, 0);
Obj w = closureRef(co, 0);
Obj other = closureRef(co, 1);
Obj maxid = closureRef(co, 2);
PUSH_CONT(co, 21, clofun2, 1, other);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35display);
__arg1 = makeCString("wrong format of toplevel\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _35val3038 = __arg1;
Obj other= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 22, clofun2, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35display);
__arg1 = other;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _35val3039 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35display);
__arg1 = makeCString("\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _35p1601 = __arg1;
Obj _35p1602 = __arg2;
Obj _35p1603 = __arg3;
Obj _35p1604 = co->args[4];
Obj _35cc1605 = makeNative(25, clofun2, 0, 4, _35p1601, _35p1602, _35p1603, _35p1604);
Obj fn = _35p1601;
Obj w = _35p1602;
Obj idx = _35p1603;
Obj _35reg3036 = PRIM_EQ(Nil, _35p1604);
if (True == _35reg3036) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1605;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35cc1606 = makeNative(27, clofun2, 0, 0);
Obj fn = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj idx = closureRef(co, 2);
Obj _35reg3031 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg3031) {
Obj _35reg3032 = PRIM_CAR(closureRef(co, 3));
Obj a = _35reg3032;
Obj _35reg3033 = PRIM_CDR(closureRef(co, 3));
Obj b = _35reg3033;
PUSH_CONT(co, 26, clofun2, 4, idx, fn, w, b);
__nargs = 4;
__arg0 = fn;
__arg1 = w;
__arg2 = idx;
__arg3 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1606;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35val3034 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3035 = PRIM_ADD(idx, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45args_45reverse);
__arg1 = fn;
__arg2 = w;
__arg3 = _35reg3035;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
PUSH_CONT(co, 29, clofun2, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _35val3026 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 30, clofun2, 2, i, w);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = symignore;
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val3027 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 31, clofun2, 2, i, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("= co->ctx.stk.stack[co->ctx.stk.base + ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val3028 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 32, clofun2, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val3029 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
PUSH_CONT(co, 34, clofun2, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _35val3018 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 35, clofun2, 2, i, w);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = symignore;
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _35val3019 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3020 = PRIM_LT(i, MAKE_NUMBER(4));
if (True == _35reg3020) {
PUSH_CONT(co, 38, clofun2, 2, i, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(" = __arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
PUSH_CONT(co, 36, clofun2, 2, i, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(" = co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj _35val3023 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 37, clofun2, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _35val3024 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _35val3021 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 39, clofun2, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _35val3022 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
PUSH_CONT(co, 41, clofun2, 3, label, maxid, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("static void ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val3014 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 42, clofun2, 1, w);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = w;
__arg2 = label;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val3015 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 43, clofun2, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("(struct Cora* co");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _35val3016 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
Obj _35reg3010 = PRIM_SUB(maxid, label);
Obj _35reg3011 = primDiv(_35reg3010, globalRef(symcora_47lib_47toc_35_42mod_45num_42));
Obj gid = _35reg3011;
PUSH_CONT(co, 45, clofun2, 2, w, gid);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("clofun");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35val3012 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj gid= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = gid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj self = __arg1;
Obj env = __arg2;
Obj w = __arg3;
Obj l = co->args[4];
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst_45list_45h);
__arg1 = self;
__arg2 = env;
__arg3 = globalRef(symcora_47lib_47toc_35generate_45inst);
co->args[4] = w;
co->args[5] = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _35p1594 = __arg1;
Obj _35p1595 = __arg2;
Obj _35p1596 = __arg3;
Obj _35p1597 = co->args[4];
Obj _35p1598 = co->args[5];
Obj _35cc1599 = makeNative(48, clofun2, 0, 5, _35p1594, _35p1595, _35p1596, _35p1597, _35p1598);
Obj self = _35p1594;
Obj env = _35p1595;
Obj fn = _35p1596;
Obj w = _35p1597;
Obj _35reg3006 = PRIM_EQ(Nil, _35p1598);
if (True == _35reg3006) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj _35cc1600 = makeNative(2, clofun3, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj fn = closureRef(co, 2);
Obj w = closureRef(co, 3);
Obj _35reg2999 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg2999) {
Obj _35reg3000 = PRIM_CAR(closureRef(co, 4));
Obj a = _35reg3000;
Obj _35reg3001 = PRIM_CDR(closureRef(co, 4));
Obj b = _35reg3001;
PUSH_CONT(co, 49, clofun2, 5, self, env, fn, w, b);
__nargs = 5;
__arg0 = fn;
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj _35val3002 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 0, clofun3, 5, self, env, fn, w, b);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = b;
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
Obj _35val3003 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3004 = primNot(_35val3003);
if (True == _35reg3004) {
PUSH_CONT(co, 1, clofun3, 5, self, env, fn, w, b);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst_45list_45h);
__arg1 = self;
__arg2 = env;
__arg3 = fn;
co->args[4] = w;
co->args[5] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val3005 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst_45list_45h);
__arg1 = self;
__arg2 = env;
__arg3 = fn;
co->args[4] = w;
co->args[5] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35p1590 = __arg1;
Obj _35p1591 = __arg2;
Obj _35p1592 = __arg3;
Obj _35cc1593 = makeNative(16, clofun3, 0, 0);
Obj self = _35p1590;
Obj w = _35p1591;
Obj _35reg2974 = PRIM_ISCONS(_35p1592);
if (True == _35reg2974) {
Obj _35reg2975 = PRIM_CAR(_35p1592);
Obj _35reg2976 = PRIM_EQ(sym_37continuation, _35reg2975);
if (True == _35reg2976) {
Obj _35reg2977 = PRIM_CDR(_35p1592);
Obj _35reg2978 = PRIM_ISCONS(_35reg2977);
if (True == _35reg2978) {
Obj _35reg2979 = PRIM_CDR(_35p1592);
Obj _35reg2980 = PRIM_CAR(_35reg2979);
Obj label = _35reg2980;
Obj _35reg2981 = PRIM_CDR(_35p1592);
Obj _35reg2982 = PRIM_CDR(_35reg2981);
Obj stacks = _35reg2982;
PUSH_CONT(co, 4, clofun3, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("PUSH_CONT(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1593;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1593;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1593;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2983 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2984 = PRIM_CAR(self);
Obj _35reg2985 = PRIM_SUB(_35reg2984, label);
PUSH_CONT(co, 5, clofun3, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = _35reg2985;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2986 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 6, clofun3, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = _35val2986;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2987 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 7, clofun3, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2988 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2989 = PRIM_CAR(self);
PUSH_CONT(co, 8, clofun3, 3, self, stacks, w);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = w;
__arg2 = label;
__arg3 = _35reg2989;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2990 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 9, clofun3, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2991 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 10, clofun3, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2992 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 11, clofun3, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = _35val2992;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2993 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 12, clofun3, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2994 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2995 = primNot(_35val2994);
if (True == _35reg2995) {
PUSH_CONT(co, 13, clofun3, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(14, clofun3, 1, 2, self, w);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val2997 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x = __arg1;
PUSH_CONT(co, 15, clofun3, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 1);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2996 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 0);
__arg2 = Nil;
__arg3 = closureRef(co, 1);
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj self = __arg1;
Obj env = __arg2;
Obj w = __arg3;
Obj x1 = co->args[4];
Obj _35reg2701 = primIsSymbol(x1);
if (True == _35reg2701) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = w;
__arg2 = x1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35cc1577 = makeNative(20, clofun3, 0, 4, self, env, x1, w);
Obj _35reg2961 = PRIM_ISCONS(x1);
if (True == _35reg2961) {
Obj _35reg2962 = PRIM_CAR(x1);
Obj _35reg2963 = PRIM_EQ(sym_37global, _35reg2962);
if (True == _35reg2963) {
Obj _35reg2964 = PRIM_CDR(x1);
Obj _35reg2965 = PRIM_ISCONS(_35reg2964);
if (True == _35reg2965) {
Obj _35reg2966 = PRIM_CDR(x1);
Obj _35reg2967 = PRIM_CAR(_35reg2966);
Obj x = _35reg2967;
Obj _35reg2968 = PRIM_CDR(x1);
Obj _35reg2969 = PRIM_CDR(_35reg2968);
Obj _35reg2970 = PRIM_EQ(Nil, _35reg2969);
if (True == _35reg2970) {
PUSH_CONT(co, 18, clofun3, 2, x, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("globalRef(sym");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1577;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1577;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1577;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1577;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label18:
{
Obj _35val2971 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 19, clofun3, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = w;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2972 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35cc1578 = makeNative(23, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg2949 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg2949) {
Obj _35reg2950 = PRIM_CAR(closureRef(co, 2));
Obj _35reg2951 = PRIM_EQ(sym_37closure_45ref, _35reg2950);
if (True == _35reg2951) {
Obj _35reg2952 = PRIM_CDR(closureRef(co, 2));
Obj _35reg2953 = PRIM_ISCONS(_35reg2952);
if (True == _35reg2953) {
Obj _35reg2954 = PRIM_CDR(closureRef(co, 2));
Obj _35reg2955 = PRIM_CAR(_35reg2954);
Obj idx = _35reg2955;
Obj _35reg2956 = PRIM_CDR(closureRef(co, 2));
Obj _35reg2957 = PRIM_CDR(_35reg2956);
Obj _35reg2958 = PRIM_EQ(Nil, _35reg2957);
if (True == _35reg2958) {
PUSH_CONT(co, 21, clofun3, 1, idx);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("closureRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1578;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1578;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1578;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1578;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj _35val2959 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 22, clofun3, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _35val2960 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj _35cc1579 = makeNative(26, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg2937 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg2937) {
Obj _35reg2938 = PRIM_CAR(closureRef(co, 2));
Obj _35reg2939 = PRIM_EQ(sym_37stack_45ref, _35reg2938);
if (True == _35reg2939) {
Obj _35reg2940 = PRIM_CDR(closureRef(co, 2));
Obj _35reg2941 = PRIM_ISCONS(_35reg2940);
if (True == _35reg2941) {
Obj _35reg2942 = PRIM_CDR(closureRef(co, 2));
Obj _35reg2943 = PRIM_CAR(_35reg2942);
Obj idx = _35reg2943;
Obj _35reg2944 = PRIM_CDR(closureRef(co, 2));
Obj _35reg2945 = PRIM_CDR(_35reg2944);
Obj _35reg2946 = PRIM_EQ(Nil, _35reg2945);
if (True == _35reg2946) {
PUSH_CONT(co, 24, clofun3, 1, idx);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("stackRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1579;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1579;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1579;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1579;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _35val2947 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 25, clofun3, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _35val2948 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _35cc1580 = makeNative(34, clofun3, 0, 4, closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 3));
Obj _35reg2915 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg2915) {
Obj _35reg2916 = PRIM_CAR(closureRef(co, 2));
Obj _35reg2917 = PRIM_EQ(sym_37const, _35reg2916);
if (True == _35reg2917) {
Obj _35reg2918 = PRIM_CDR(closureRef(co, 2));
Obj _35reg2919 = PRIM_ISCONS(_35reg2918);
if (True == _35reg2919) {
Obj _35reg2920 = PRIM_CDR(closureRef(co, 2));
Obj _35reg2921 = PRIM_CAR(_35reg2920);
Obj x = _35reg2921;
Obj _35reg2922 = PRIM_CDR(closureRef(co, 2));
Obj _35reg2923 = PRIM_CDR(_35reg2922);
Obj _35reg2924 = PRIM_EQ(Nil, _35reg2923);
if (True == _35reg2924) {
Obj _35reg2925 = primIsSymbol(x);
if (True == _35reg2925) {
PUSH_CONT(co, 33, clofun3, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("sym");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
PUSH_CONT(co, 27, clofun3, 1, x);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35number_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35val2927 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2927) {
PUSH_CONT(co, 31, clofun3, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("MAKE_NUMBER(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2930 = primIsString(x);
if (True == _35reg2930) {
PUSH_CONT(co, 28, clofun3, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("makeCString(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2934 = PRIM_EQ(x, Nil);
if (True == _35reg2934) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("Nil");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2935 = PRIM_EQ(x, True);
if (True == _35reg2935) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("True");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2936 = PRIM_EQ(x, False);
if (True == _35reg2936) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("False");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}
}
}

label28:
{
Obj _35val2931 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 29, clofun3, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35escape_45str);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _35val2932 = __arg1;
PUSH_CONT(co, 30, clofun3, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = _35val2932;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val2933 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val2928 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 32, clofun3, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val2929 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _35val2926 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = closureRef(co, 3);
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _35cc1581 = makeNative(45, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg2876 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2876) {
Obj _35reg2877 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2878 = PRIM_EQ(symlet, _35reg2877);
if (True == _35reg2878) {
Obj _35reg2879 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2880 = PRIM_ISCONS(_35reg2879);
if (True == _35reg2880) {
Obj _35reg2881 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2882 = PRIM_CAR(_35reg2881);
Obj a = _35reg2882;
Obj _35reg2883 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2884 = PRIM_CDR(_35reg2883);
Obj _35reg2885 = PRIM_ISCONS(_35reg2884);
if (True == _35reg2885) {
Obj _35reg2886 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2887 = PRIM_CDR(_35reg2886);
Obj _35reg2888 = PRIM_CAR(_35reg2887);
Obj b = _35reg2888;
Obj _35reg2889 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2890 = PRIM_CDR(_35reg2889);
Obj _35reg2891 = PRIM_CDR(_35reg2890);
Obj _35reg2892 = PRIM_ISCONS(_35reg2891);
if (True == _35reg2892) {
Obj _35reg2893 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2894 = PRIM_CDR(_35reg2893);
Obj _35reg2895 = PRIM_CDR(_35reg2894);
Obj _35reg2896 = PRIM_CAR(_35reg2895);
Obj c = _35reg2896;
Obj _35reg2897 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2898 = PRIM_CDR(_35reg2897);
Obj _35reg2899 = PRIM_CDR(_35reg2898);
Obj _35reg2900 = PRIM_CDR(_35reg2899);
Obj _35reg2901 = PRIM_EQ(Nil, _35reg2900);
if (True == _35reg2901) {
PUSH_CONT(co, 35, clofun3, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35index);
__arg1 = a;
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1581;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1581;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1581;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1581;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1581;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1581;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj _35val2902 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx = _35val2902;
Obj _35reg2903 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == _35reg2903) {
PUSH_CONT(co, 40, clofun3, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
PUSH_CONT(co, 36, clofun3, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = closureRef(co, 3);
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj _35val2910 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 37, clofun3, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _35val2911 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 38, clofun3, 2, a, c);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _35val2912 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 39, clofun3, 2, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _35val2913 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2914 = makeCons(a, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = _35reg2914;
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _35val2904 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 41, clofun3, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = closureRef(co, 3);
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val2905 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 42, clofun3, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val2906 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 43, clofun3, 2, a, c);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _35val2907 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 44, clofun3, 2, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val2908 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2909 = makeCons(a, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = _35reg2909;
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35cc1582 = makeNative(2, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg2852 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2852) {
Obj _35reg2853 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2854 = PRIM_ISCONS(_35reg2853);
if (True == _35reg2854) {
Obj _35reg2855 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2856 = PRIM_CAR(_35reg2855);
Obj _35reg2857 = PRIM_EQ(sym_37builtin, _35reg2856);
if (True == _35reg2857) {
Obj _35reg2858 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2859 = PRIM_CDR(_35reg2858);
Obj _35reg2860 = PRIM_ISCONS(_35reg2859);
if (True == _35reg2860) {
Obj _35reg2861 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2862 = PRIM_CDR(_35reg2861);
Obj _35reg2863 = PRIM_CAR(_35reg2862);
Obj f = _35reg2863;
Obj _35reg2864 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2865 = PRIM_CDR(_35reg2864);
Obj _35reg2866 = PRIM_CDR(_35reg2865);
Obj _35reg2867 = PRIM_EQ(Nil, _35reg2866);
if (True == _35reg2867) {
Obj _35reg2868 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg2868;
PUSH_CONT(co, 46, clofun3, 2, f, args);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35builtin_45_62name);
__arg1 = f;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1582;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1582;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1582;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1582;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1582;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _35val2869 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 47, clofun3, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = _35val2869;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _35val2870 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2871 = PRIM_EQ(f, symset);
if (True == _35reg2871) {
PUSH_CONT(co, 0, clofun4, 1, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
PUSH_CONT(co, 48, clofun3, 1, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj _35val2874 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 49, clofun3, 0);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst_45list);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35val2875 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
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
Obj _35val2872 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 1, clofun4, 0);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst_45list);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2873 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35cc1583 = makeNative(9, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg2820 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2820) {
Obj _35reg2821 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2822 = PRIM_EQ(symif, _35reg2821);
if (True == _35reg2822) {
Obj _35reg2823 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2824 = PRIM_ISCONS(_35reg2823);
if (True == _35reg2824) {
Obj _35reg2825 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2826 = PRIM_CAR(_35reg2825);
Obj a = _35reg2826;
Obj _35reg2827 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2828 = PRIM_CDR(_35reg2827);
Obj _35reg2829 = PRIM_ISCONS(_35reg2828);
if (True == _35reg2829) {
Obj _35reg2830 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2831 = PRIM_CDR(_35reg2830);
Obj _35reg2832 = PRIM_CAR(_35reg2831);
Obj b = _35reg2832;
Obj _35reg2833 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2834 = PRIM_CDR(_35reg2833);
Obj _35reg2835 = PRIM_CDR(_35reg2834);
Obj _35reg2836 = PRIM_ISCONS(_35reg2835);
if (True == _35reg2836) {
Obj _35reg2837 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2838 = PRIM_CDR(_35reg2837);
Obj _35reg2839 = PRIM_CDR(_35reg2838);
Obj _35reg2840 = PRIM_CAR(_35reg2839);
Obj c = _35reg2840;
Obj _35reg2841 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2842 = PRIM_CDR(_35reg2841);
Obj _35reg2843 = PRIM_CDR(_35reg2842);
Obj _35reg2844 = PRIM_CDR(_35reg2843);
Obj _35reg2845 = PRIM_EQ(Nil, _35reg2844);
if (True == _35reg2845) {
PUSH_CONT(co, 3, clofun4, 3, a, b, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("if (True == ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val2846 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 4, clofun4, 2, b, c);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2847 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 5, clofun4, 2, b, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(") {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val2848 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 6, clofun4, 1, c);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val2849 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 7, clofun4, 1, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("} else {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2850 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 8, clofun4, 0);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2851 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("}\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35cc1584 = makeNative(23, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg2787 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2787) {
Obj _35reg2788 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2789 = PRIM_EQ(sym_37closure, _35reg2788);
if (True == _35reg2789) {
Obj _35reg2790 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2791 = PRIM_ISCONS(_35reg2790);
if (True == _35reg2791) {
Obj _35reg2792 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2793 = PRIM_CAR(_35reg2792);
Obj label = _35reg2793;
Obj _35reg2794 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2795 = PRIM_CDR(_35reg2794);
Obj _35reg2796 = PRIM_ISCONS(_35reg2795);
if (True == _35reg2796) {
Obj _35reg2797 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2798 = PRIM_CDR(_35reg2797);
Obj _35reg2799 = PRIM_CAR(_35reg2798);
Obj nargs = _35reg2799;
Obj _35reg2800 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2801 = PRIM_CDR(_35reg2800);
Obj _35reg2802 = PRIM_CDR(_35reg2801);
Obj frees = _35reg2802;
PUSH_CONT(co, 10, clofun4, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("makeNative(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1584;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1584;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1584;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1584;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2803 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2804 = PRIM_CAR(closureRef(co, 1));
Obj _35reg2805 = PRIM_SUB(_35reg2804, label);
PUSH_CONT(co, 11, clofun4, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = _35reg2805;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2806 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 12, clofun4, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = _35val2806;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2807 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 13, clofun4, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2808 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2809 = PRIM_CAR(closureRef(co, 1));
PUSH_CONT(co, 14, clofun4, 2, nargs, frees);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 3);
__arg2 = label;
__arg3 = _35reg2809;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2810 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 15, clofun4, 2, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2811 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 16, clofun4, 1, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2812 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 17, clofun4, 1, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2813 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 18, clofun4, 1, frees);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2814 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 19, clofun4, 1, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = _35val2814;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2815 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 20, clofun4, 1, frees);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val2816 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2817 = primNot(_35val2816);
if (True == _35reg2817) {
PUSH_CONT(co, 21, clofun4, 1, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj _35val2818 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 22, clofun4, 0);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst_45list);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _35val2819 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj _35cc1585 = makeNative(26, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 3));
Obj _35reg2768 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2768) {
Obj _35reg2769 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2770 = PRIM_EQ(symdo, _35reg2769);
if (True == _35reg2770) {
Obj _35reg2771 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2772 = PRIM_ISCONS(_35reg2771);
if (True == _35reg2772) {
Obj _35reg2773 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2774 = PRIM_CAR(_35reg2773);
Obj a = _35reg2774;
Obj _35reg2775 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2776 = PRIM_CDR(_35reg2775);
Obj _35reg2777 = PRIM_ISCONS(_35reg2776);
if (True == _35reg2777) {
Obj _35reg2778 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2779 = PRIM_CDR(_35reg2778);
Obj _35reg2780 = PRIM_CAR(_35reg2779);
Obj b = _35reg2780;
Obj _35reg2781 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2782 = PRIM_CDR(_35reg2781);
Obj _35reg2783 = PRIM_CDR(_35reg2782);
Obj _35reg2784 = PRIM_EQ(Nil, _35reg2783);
if (True == _35reg2784) {
PUSH_CONT(co, 24, clofun4, 1, b);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1585;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1585;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1585;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1585;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1585;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _35val2785 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 25, clofun4, 1, b);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _35val2786 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _35cc1586 = makeNative(35, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 3));
Obj _35reg2748 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2748) {
Obj _35reg2749 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2750 = PRIM_EQ(symreturn, _35reg2749);
if (True == _35reg2750) {
Obj _35reg2751 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2752 = PRIM_ISCONS(_35reg2751);
if (True == _35reg2752) {
Obj _35reg2753 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2754 = PRIM_CAR(_35reg2753);
Obj x = _35reg2754;
Obj _35reg2755 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2756 = PRIM_CDR(_35reg2755);
Obj _35reg2757 = PRIM_EQ(Nil, _35reg2756);
if (True == _35reg2757) {
PUSH_CONT(co, 27, clofun4, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("__nargs = 2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1586;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1586;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1586;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1586;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35val2758 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 28, clofun4, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("__arg1 = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _35val2759 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 29, clofun4, 0);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 2);
__arg2 = closureRef(co, 1);
__arg3 = closureRef(co, 3);
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _35val2760 = __arg1;
PUSH_CONT(co, 30, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val2761 = __arg1;
PUSH_CONT(co, 31, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("co->ctx = co->callstack.data[--co->callstack.len];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val2762 = __arg1;
PUSH_CONT(co, 32, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("if (co->ctx.pc.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val2763 = __arg1;
Obj _35reg2764 = PRIM_CDR(closureRef(co, 2));
Obj _35reg2765 = PRIM_CAR(closureRef(co, 2));
PUSH_CONT(co, 33, clofun4, 0);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 3);
__arg2 = _35reg2764;
__arg3 = _35reg2765;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _35val2766 = __arg1;
PUSH_CONT(co, 34, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(") { goto fail; }\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _35val2767 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _35cc1587 = makeNative(36, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg2738 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2738) {
Obj _35reg2739 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2740 = PRIM_EQ(symtailcall, _35reg2739);
if (True == _35reg2740) {
Obj _35reg2741 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2742 = PRIM_ISCONS(_35reg2741);
if (True == _35reg2742) {
Obj _35reg2743 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2744 = PRIM_CAR(_35reg2743);
Obj exp = _35reg2744;
Obj _35reg2745 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2746 = PRIM_CDR(_35reg2745);
Obj _35reg2747 = PRIM_EQ(Nil, _35reg2746);
if (True == _35reg2747) {
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1587;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1587;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1587;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1587;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj _35cc1588 = makeNative(38, clofun4, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 3));
Obj _35reg2720 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2720) {
Obj _35reg2721 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2722 = PRIM_EQ(symcall, _35reg2721);
if (True == _35reg2722) {
Obj _35reg2723 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2724 = PRIM_ISCONS(_35reg2723);
if (True == _35reg2724) {
Obj _35reg2725 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2726 = PRIM_CAR(_35reg2725);
Obj exp = _35reg2726;
Obj _35reg2727 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2728 = PRIM_CDR(_35reg2727);
Obj _35reg2729 = PRIM_ISCONS(_35reg2728);
if (True == _35reg2729) {
Obj _35reg2730 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2731 = PRIM_CDR(_35reg2730);
Obj _35reg2732 = PRIM_CAR(_35reg2731);
Obj cont = _35reg2732;
Obj _35reg2733 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2734 = PRIM_CDR(_35reg2733);
Obj _35reg2735 = PRIM_CDR(_35reg2734);
Obj _35reg2736 = PRIM_EQ(Nil, _35reg2735);
if (True == _35reg2736) {
PUSH_CONT(co, 37, clofun4, 1, exp);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45cont);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 3);
__arg3 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1588;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1588;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1588;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1588;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1588;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _35val2737 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _35cc1589 = makeNative(0, clofun5, 0, 0);
Obj _35reg2702 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2702) {
Obj _35reg2703 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg2703;
Obj _35reg2704 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg2704;
PUSH_CONT(co, 39, clofun4, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("__nargs = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1589;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _35val2705 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 40, clofun4, 2, f, args);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _35val2706 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2707 = PRIM_ADD(MAKE_NUMBER(1), _35val2706);
PUSH_CONT(co, 41, clofun4, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 2);
__arg2 = _35reg2707;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val2708 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 42, clofun4, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val2709 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2710 = makeCons(f, args);
PUSH_CONT(co, 43, clofun4, 0);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = MAKE_NUMBER(0);
co->args[4] = _35reg2710;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _35val2711 = __arg1;
PUSH_CONT(co, 44, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("co->ctx.frees = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val2712 = __arg1;
PUSH_CONT(co, 45, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35val2713 = __arg1;
PUSH_CONT(co, 46, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _35val2714 = __arg1;
PUSH_CONT(co, 47, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("if (ps.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _35val2715 = __arg1;
Obj _35reg2716 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2717 = PRIM_CAR(closureRef(co, 1));
PUSH_CONT(co, 48, clofun4, 0);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 2);
__arg2 = _35reg2716;
__arg3 = _35reg2717;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35val2718 = __arg1;
PUSH_CONT(co, 49, clofun4, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString(") { co->ctx.pc = ps; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35val2719 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("goto *jumpTable[ps.label];\n");
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

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj sym = __arg1;
Obj globals = __arg2;
PUSH_CONT(co, 2, clofun5, 2, sym, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35value);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2696 = __arg1;
Obj sym= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val = _35val2696;
PUSH_CONT(co, 3, clofun5, 3, sym, val, globals);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35elem_63);
__arg1 = sym;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2697 = __arg1;
Obj sym= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2697) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2698 = makeCons(sym, val);
Obj _35reg2699 = primSet(co, globals, _35reg2698);
__nargs = 2;
__arg1 = _35reg2699;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label4:
{
Obj _35p1571 = __arg1;
Obj _35p1572 = __arg2;
Obj _35p1573 = __arg3;
Obj _35p1574 = co->args[4];
Obj _35cc1575 = makeNative(5, clofun5, 0, 4, _35p1571, _35p1572, _35p1573, _35p1574);
Obj self = _35p1571;
Obj w = _35p1572;
Obj i = _35p1573;
Obj _35reg2694 = PRIM_EQ(Nil, _35p1574);
if (True == _35reg2694) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35cc1576 = makeNative(17, clofun5, 0, 0);
Obj self = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj i = closureRef(co, 2);
Obj _35reg2676 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg2676) {
Obj _35reg2677 = PRIM_CAR(closureRef(co, 3));
Obj x = _35reg2677;
Obj _35reg2678 = PRIM_CDR(closureRef(co, 3));
Obj more = _35reg2678;
Obj _35reg2679 = PRIM_GT(i, MAKE_NUMBER(3));
Obj _35reg2680 = primNot(_35reg2679);
if (True == _35reg2680) {
PUSH_CONT(co, 12, clofun5, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("__arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
PUSH_CONT(co, 6, clofun5, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1576;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2687 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 7, clofun5, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2688 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 8, clofun5, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("]");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2689 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 9, clofun5, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val2690 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 10, clofun5, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val2691 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 11, clofun5, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val2692 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2693 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = self;
__arg2 = w;
__arg3 = _35reg2693;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val2681 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 13, clofun5, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2682 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 14, clofun5, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2683 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 15, clofun5, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val2684 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 16, clofun5, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val2685 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg2686 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = self;
__arg2 = w;
__arg3 = _35reg2686;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x = __arg1;
Obj k = __arg2;
Obj _35reg2669 = primGenSym(symreg);
Obj tmp = _35reg2669;
PUSH_CONT(co, 19, clofun5, 2, x, tmp);
__nargs = 2;
__arg0 = k;
__arg1 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2670 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2671 = makeCons(_35val2670, Nil);
Obj _35reg2672 = makeCons(x, _35reg2671);
Obj _35reg2673 = makeCons(tmp, _35reg2672);
Obj _35reg2674 = makeCons(symlet, _35reg2673);
__nargs = 2;
__arg1 = _35reg2674;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj v = __arg1;
Obj val = __arg2;
PUSH_CONT(co, 21, clofun5, 2, val, v);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35vector_45ref);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _35val2661 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj idx = _35val2661;
PUSH_CONT(co, 22, clofun5, 3, val, idx, v);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35vector_45ref);
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _35val2662 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur = _35val2662;
Obj _35reg2663 = makeCons(val, Nil);
Obj _35reg2664 = makeCons(idx, _35reg2663);
Obj _35reg2665 = makeCons(_35reg2664, cur);
Obj cur1 = _35reg2665;
Obj _35reg2666 = PRIM_ADD(idx, MAKE_NUMBER(1));
PUSH_CONT(co, 23, clofun5, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35vector_45set_33);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
__arg3 = _35reg2666;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj _35val2667 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cur1= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(symcora_47init_35vector_45set_33);
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
__arg3 = cur1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _35p1566 = __arg1;
Obj _35p1567 = __arg2;
Obj _35cc1568 = makeNative(40, clofun5, 0, 2, _35p1566, _35p1567);
Obj v = _35p1566;
Obj _35reg2564 = PRIM_ISCONS(_35p1567);
if (True == _35reg2564) {
Obj _35reg2565 = PRIM_CAR(_35p1567);
Obj clo_45or_45cont = _35reg2565;
Obj _35reg2566 = PRIM_CDR(_35p1567);
Obj _35reg2567 = PRIM_ISCONS(_35reg2566);
if (True == _35reg2567) {
Obj _35reg2568 = PRIM_CDR(_35p1567);
Obj _35reg2569 = PRIM_CAR(_35reg2568);
Obj _35reg2570 = PRIM_ISCONS(_35reg2569);
if (True == _35reg2570) {
Obj _35reg2571 = PRIM_CDR(_35p1567);
Obj _35reg2572 = PRIM_CAR(_35reg2571);
Obj _35reg2573 = PRIM_CAR(_35reg2572);
Obj _35reg2574 = PRIM_EQ(symlambda, _35reg2573);
if (True == _35reg2574) {
Obj _35reg2575 = PRIM_CDR(_35p1567);
Obj _35reg2576 = PRIM_CAR(_35reg2575);
Obj _35reg2577 = PRIM_CDR(_35reg2576);
Obj _35reg2578 = PRIM_ISCONS(_35reg2577);
if (True == _35reg2578) {
Obj _35reg2579 = PRIM_CDR(_35p1567);
Obj _35reg2580 = PRIM_CAR(_35reg2579);
Obj _35reg2581 = PRIM_CDR(_35reg2580);
Obj _35reg2582 = PRIM_CAR(_35reg2581);
Obj params = _35reg2582;
Obj _35reg2583 = PRIM_CDR(_35p1567);
Obj _35reg2584 = PRIM_CAR(_35reg2583);
Obj _35reg2585 = PRIM_CDR(_35reg2584);
Obj _35reg2586 = PRIM_CDR(_35reg2585);
Obj _35reg2587 = PRIM_ISCONS(_35reg2586);
if (True == _35reg2587) {
Obj _35reg2588 = PRIM_CDR(_35p1567);
Obj _35reg2589 = PRIM_CAR(_35reg2588);
Obj _35reg2590 = PRIM_CDR(_35reg2589);
Obj _35reg2591 = PRIM_CDR(_35reg2590);
Obj _35reg2592 = PRIM_CAR(_35reg2591);
Obj body = _35reg2592;
Obj _35reg2593 = PRIM_CDR(_35p1567);
Obj _35reg2594 = PRIM_CAR(_35reg2593);
Obj _35reg2595 = PRIM_CDR(_35reg2594);
Obj _35reg2596 = PRIM_CDR(_35reg2595);
Obj _35reg2597 = PRIM_CDR(_35reg2596);
Obj _35reg2598 = PRIM_EQ(Nil, _35reg2597);
if (True == _35reg2598) {
Obj _35reg2599 = PRIM_CDR(_35p1567);
Obj _35reg2600 = PRIM_CDR(_35reg2599);
Obj fvs = _35reg2600;
Obj _35reg2601 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == _35reg2601) {
if (True == True) {
PUSH_CONT(co, 35, clofun5, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda);
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1568;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg2621 = PRIM_EQ(clo_45or_45cont, sym_37continuation);
if (True == _35reg2621) {
if (True == True) {
PUSH_CONT(co, 30, clofun5, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda);
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1568;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
PUSH_CONT(co, 25, clofun5, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda);
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1568;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 1;
__arg0 = _35cc1568;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1568;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1568;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1568;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1568;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1568;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1568;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35val2641 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2641;
PUSH_CONT(co, 26, clofun5, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35vector_45ref);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _35val2642 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj cur = _35val2642;
Obj _35reg2643 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == _35reg2643) {
Obj _35reg2644 = makeCons(body1, Nil);
Obj _35reg2645 = makeCons(Nil, _35reg2644);
Obj _35reg2646 = makeCons(params, _35reg2645);
Obj _35reg2647 = makeCons(symlambda, _35reg2646);
PUSH_CONT(co, 28, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg2647;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2653 = makeCons(body1, Nil);
Obj _35reg2654 = makeCons(fvs, _35reg2653);
Obj _35reg2655 = makeCons(params, _35reg2654);
Obj _35reg2656 = makeCons(symlambda, _35reg2655);
PUSH_CONT(co, 27, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg2656;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35val2657 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2658 = makeCons(cur, fvs);
Obj _35reg2659 = makeCons(clo_45or_45cont, _35reg2658);
__nargs = 2;
__arg1 = _35reg2659;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj _35val2648 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 29, clofun5, 3, fvs, cur, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _35val2649 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2650 = makeCons(_35val2649, fvs);
Obj _35reg2651 = makeCons(cur, _35reg2650);
Obj _35reg2652 = makeCons(clo_45or_45cont, _35reg2651);
__nargs = 2;
__arg1 = _35reg2652;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj _35val2622 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2622;
PUSH_CONT(co, 31, clofun5, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35vector_45ref);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val2623 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj cur = _35val2623;
Obj _35reg2624 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == _35reg2624) {
Obj _35reg2625 = makeCons(body1, Nil);
Obj _35reg2626 = makeCons(Nil, _35reg2625);
Obj _35reg2627 = makeCons(params, _35reg2626);
Obj _35reg2628 = makeCons(symlambda, _35reg2627);
PUSH_CONT(co, 33, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg2628;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2634 = makeCons(body1, Nil);
Obj _35reg2635 = makeCons(fvs, _35reg2634);
Obj _35reg2636 = makeCons(params, _35reg2635);
Obj _35reg2637 = makeCons(symlambda, _35reg2636);
PUSH_CONT(co, 32, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg2637;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _35val2638 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2639 = makeCons(cur, fvs);
Obj _35reg2640 = makeCons(clo_45or_45cont, _35reg2639);
__nargs = 2;
__arg1 = _35reg2640;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label33:
{
Obj _35val2629 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 34, clofun5, 3, fvs, cur, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _35val2630 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2631 = makeCons(_35val2630, fvs);
Obj _35reg2632 = makeCons(cur, _35reg2631);
Obj _35reg2633 = makeCons(clo_45or_45cont, _35reg2632);
__nargs = 2;
__arg1 = _35reg2633;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj _35val2602 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val2602;
PUSH_CONT(co, 36, clofun5, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35vector_45ref);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35val2603 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj cur = _35val2603;
Obj _35reg2604 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == _35reg2604) {
Obj _35reg2605 = makeCons(body1, Nil);
Obj _35reg2606 = makeCons(Nil, _35reg2605);
Obj _35reg2607 = makeCons(params, _35reg2606);
Obj _35reg2608 = makeCons(symlambda, _35reg2607);
PUSH_CONT(co, 38, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg2608;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2614 = makeCons(body1, Nil);
Obj _35reg2615 = makeCons(fvs, _35reg2614);
Obj _35reg2616 = makeCons(params, _35reg2615);
Obj _35reg2617 = makeCons(symlambda, _35reg2616);
PUSH_CONT(co, 37, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg2617;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _35val2618 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2619 = makeCons(cur, fvs);
Obj _35reg2620 = makeCons(clo_45or_45cont, _35reg2619);
__nargs = 2;
__arg1 = _35reg2620;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
Obj _35val2609 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 39, clofun5, 3, fvs, cur, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _35val2610 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2611 = makeCons(_35val2610, fvs);
Obj _35reg2612 = makeCons(cur, _35reg2611);
Obj _35reg2613 = makeCons(clo_45or_45cont, _35reg2612);
__nargs = 2;
__arg1 = _35reg2613;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj _35cc1569 = makeNative(42, clofun5, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v = closureRef(co, 0);
Obj f_45args = closureRef(co, 1);
Obj _35reg2563 = PRIM_ISCONS(f_45args);
if (True == _35reg2563) {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = makeNative(41, clofun5, 1, 1, v);
__arg2 = f_45args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1569;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj e = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda);
__arg1 = closureRef(co, 0);
__arg2 = e;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35cc1570 = makeNative(43, clofun5, 0, 0);
Obj v = closureRef(co, 0);
Obj x = closureRef(co, 1);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label43:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35p1558 = __arg1;
Obj _35p1559 = __arg2;
Obj _35cc1560 = makeNative(46, clofun5, 0, 2, _35p1558, _35p1559);
Obj __ = _35p1558;
Obj x = _35p1559;
PUSH_CONT(co, 45, clofun5, 2, x, _35cc1560);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35val2561 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1560= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2561) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1560;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _35cc1561 = makeNative(47, clofun5, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg2560 = primIsSymbol(var);
if (True == _35reg2560) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1561;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _35cc1562 = makeNative(49, clofun5, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2539 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg2539) {
Obj _35reg2540 = PRIM_CAR(closureRef(co, 1));
Obj _35reg2541 = PRIM_EQ(symlambda, _35reg2540);
if (True == _35reg2541) {
Obj _35reg2542 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2543 = PRIM_ISCONS(_35reg2542);
if (True == _35reg2543) {
Obj _35reg2544 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2545 = PRIM_CAR(_35reg2544);
Obj args = _35reg2545;
Obj _35reg2546 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2547 = PRIM_CDR(_35reg2546);
Obj _35reg2548 = PRIM_ISCONS(_35reg2547);
if (True == _35reg2548) {
Obj _35reg2549 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2550 = PRIM_CDR(_35reg2549);
Obj _35reg2551 = PRIM_CAR(_35reg2550);
Obj body = _35reg2551;
Obj _35reg2552 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2553 = PRIM_CDR(_35reg2552);
Obj _35reg2554 = PRIM_CDR(_35reg2553);
Obj _35reg2555 = PRIM_EQ(Nil, _35reg2554);
if (True == _35reg2555) {
PUSH_CONT(co, 48, clofun5, 1, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1562;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1562;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1562;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1562;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1562;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj _35val2556 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2557 = makeCons(_35val2556, Nil);
Obj _35reg2558 = makeCons(args, _35reg2557);
Obj _35reg2559 = makeCons(symlambda, _35reg2558);
__nargs = 2;
__arg1 = _35reg2559;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label49:
{
Obj _35cc1563 = makeNative(5, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2512 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg2512) {
Obj _35reg2513 = PRIM_CAR(closureRef(co, 1));
Obj _35reg2514 = PRIM_EQ(symcontinuation, _35reg2513);
if (True == _35reg2514) {
Obj _35reg2515 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2516 = PRIM_ISCONS(_35reg2515);
if (True == _35reg2516) {
Obj _35reg2517 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2518 = PRIM_CAR(_35reg2517);
Obj val = _35reg2518;
Obj _35reg2519 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2520 = PRIM_CDR(_35reg2519);
Obj _35reg2521 = PRIM_ISCONS(_35reg2520);
if (True == _35reg2521) {
Obj _35reg2522 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2523 = PRIM_CDR(_35reg2522);
Obj _35reg2524 = PRIM_CAR(_35reg2523);
Obj body = _35reg2524;
Obj _35reg2525 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2526 = PRIM_CDR(_35reg2525);
Obj _35reg2527 = PRIM_CDR(_35reg2526);
Obj _35reg2528 = PRIM_EQ(Nil, _35reg2527);
if (True == _35reg2528) {
PUSH_CONT(co, 0, clofun6, 3, fvs, body, val);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1563;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1563;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1563;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1563;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1563;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
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

static void clofun6(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2529 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 1, clofun6, 3, fvs, body, val);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = _35val2529;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2530 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val2530;
PUSH_CONT(co, 2, clofun6, 3, fvs1, body, val);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2531 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 3, clofun6, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val2531;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val2532 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs2 = _35val2532;
PUSH_CONT(co, 4, clofun6, 2, val, fvs2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val2533 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2534 = makeCons(_35val2533, Nil);
Obj _35reg2535 = makeCons(val, _35reg2534);
Obj _35reg2536 = makeCons(symlambda, _35reg2535);
Obj _35reg2537 = makeCons(_35reg2536, fvs2);
Obj _35reg2538 = makeCons(sym_37continuation, _35reg2537);
__nargs = 2;
__arg1 = _35reg2538;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35cc1564 = makeNative(9, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2489 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg2489) {
Obj _35reg2490 = PRIM_CAR(closureRef(co, 1));
Obj _35reg2491 = PRIM_EQ(symcall, _35reg2490);
if (True == _35reg2491) {
Obj _35reg2492 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2493 = PRIM_ISCONS(_35reg2492);
if (True == _35reg2493) {
Obj _35reg2494 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2495 = PRIM_CAR(_35reg2494);
Obj exp = _35reg2495;
Obj _35reg2496 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2497 = PRIM_CDR(_35reg2496);
Obj _35reg2498 = PRIM_ISCONS(_35reg2497);
if (True == _35reg2498) {
Obj _35reg2499 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2500 = PRIM_CDR(_35reg2499);
Obj _35reg2501 = PRIM_CAR(_35reg2500);
Obj cont = _35reg2501;
Obj _35reg2502 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2503 = PRIM_CDR(_35reg2502);
Obj _35reg2504 = PRIM_CDR(_35reg2503);
Obj _35reg2505 = PRIM_EQ(Nil, _35reg2504);
if (True == _35reg2505) {
PUSH_CONT(co, 6, clofun6, 3, exp, fvs, cont);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1564;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1564;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1564;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1564;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1564;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2506 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 7, clofun6, 2, fvs, cont);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val2506;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2507 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 8, clofun6, 1, _35val2507);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs;
__arg2 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val2508 = __arg1;
Obj _35val2507= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2509 = makeCons(_35val2508, Nil);
Obj _35reg2510 = makeCons(_35val2507, _35reg2509);
Obj _35reg2511 = makeCons(symcall, _35reg2510);
__nargs = 2;
__arg1 = _35reg2511;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35cc1565 = makeNative(11, clofun6, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg2484 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg2484) {
Obj _35reg2485 = PRIM_CAR(closureRef(co, 1));
Obj f = _35reg2485;
Obj _35reg2486 = PRIM_CDR(closureRef(co, 1));
Obj args = _35reg2486;
PUSH_CONT(co, 10, clofun6, 2, f, args);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1565;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2487 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2488 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val2487;
__arg2 = _35reg2488;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35p1553 = __arg1;
Obj _35p1554 = __arg2;
Obj _35p1555 = __arg3;
Obj _35cc1556 = makeNative(19, clofun6, 0, 3, _35p1553, _35p1554, _35p1555);
Obj _35reg2441 = PRIM_EQ(Nil, _35p1553);
if (True == _35reg2441) {
Obj ls = _35p1554;
Obj next = _35p1555;
PUSH_CONT(co, 13, clofun6, 1, next);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1556;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val2442 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp = _35val2442;
Obj _35reg2443 = PRIM_CAR(exp);
PUSH_CONT(co, 14, clofun6, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35pair_63);
__arg1 = _35reg2443;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2444 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2444) {
PUSH_CONT(co, 16, clofun6, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
if (True == False) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35wrap_45var);
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2471 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == _35reg2471) {
Obj _35reg2472 = makeCons(exp, Nil);
Obj _35reg2473 = makeCons(symtailcall, _35reg2472);
__nargs = 2;
__arg1 = _35reg2473;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2474 = primGenSym(symval);
Obj val = _35reg2474;
Obj _35reg2475 = makeCons(val, Nil);
PUSH_CONT(co, 15, clofun6, 2, _35reg2475, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label15:
{
Obj _35val2476 = __arg1;
Obj _35reg2475= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2477 = makeCons(_35val2476, Nil);
Obj _35reg2478 = makeCons(_35reg2475, _35reg2477);
Obj _35reg2479 = makeCons(symcontinuation, _35reg2478);
Obj _35reg2480 = makeCons(_35reg2479, Nil);
Obj _35reg2481 = makeCons(exp, _35reg2480);
Obj _35reg2482 = makeCons(symcall, _35reg2481);
__nargs = 2;
__arg1 = _35reg2482;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj _35val2445 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2446 = PRIM_EQ(_35val2445, sym_37builtin);
if (True == _35reg2446) {
if (True == True) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35wrap_45var);
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2447 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == _35reg2447) {
Obj _35reg2448 = makeCons(exp, Nil);
Obj _35reg2449 = makeCons(symtailcall, _35reg2448);
__nargs = 2;
__arg1 = _35reg2449;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2450 = primGenSym(symval);
Obj val = _35reg2450;
Obj _35reg2451 = makeCons(val, Nil);
PUSH_CONT(co, 18, clofun6, 2, _35reg2451, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35wrap_45var);
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg2459 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == _35reg2459) {
Obj _35reg2460 = makeCons(exp, Nil);
Obj _35reg2461 = makeCons(symtailcall, _35reg2460);
__nargs = 2;
__arg1 = _35reg2461;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2462 = primGenSym(symval);
Obj val = _35reg2462;
Obj _35reg2463 = makeCons(val, Nil);
PUSH_CONT(co, 17, clofun6, 2, _35reg2463, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label17:
{
Obj _35val2464 = __arg1;
Obj _35reg2463= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2465 = makeCons(_35val2464, Nil);
Obj _35reg2466 = makeCons(_35reg2463, _35reg2465);
Obj _35reg2467 = makeCons(symcontinuation, _35reg2466);
Obj _35reg2468 = makeCons(_35reg2467, Nil);
Obj _35reg2469 = makeCons(exp, _35reg2468);
Obj _35reg2470 = makeCons(symcall, _35reg2469);
__nargs = 2;
__arg1 = _35reg2470;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35val2452 = __arg1;
Obj _35reg2451= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2453 = makeCons(_35val2452, Nil);
Obj _35reg2454 = makeCons(_35reg2451, _35reg2453);
Obj _35reg2455 = makeCons(symcontinuation, _35reg2454);
Obj _35reg2456 = makeCons(_35reg2455, Nil);
Obj _35reg2457 = makeCons(exp, _35reg2456);
Obj _35reg2458 = makeCons(symcall, _35reg2457);
__nargs = 2;
__arg1 = _35reg2458;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35cc1557 = makeNative(21, clofun6, 0, 0);
Obj _35reg2437 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2437) {
Obj _35reg2438 = PRIM_CAR(closureRef(co, 0));
Obj hd = _35reg2438;
Obj _35reg2439 = PRIM_CDR(closureRef(co, 0));
Obj tl = _35reg2439;
Obj ls = closureRef(co, 1);
Obj next = closureRef(co, 2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = hd;
__arg2 = makeNative(20, clofun6, 1, 3, tl, ls, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1557;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj hd1 = __arg1;
Obj _35reg2440 = makeCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45list);
__arg1 = closureRef(co, 0);
__arg2 = _35reg2440;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _35p1544 = __arg1;
Obj _35p1545 = __arg2;
Obj _35cc1546 = makeNative(24, clofun6, 0, 2, _35p1544, _35p1545);
Obj x = _35p1544;
Obj next = _35p1545;
Obj _35reg2434 = primIsSymbol(x);
if (True == _35reg2434) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1546;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
PUSH_CONT(co, 23, clofun6, 3, next, x, _35cc1546);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35val2435 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1546= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2435) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1546;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1546;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label24:
{
Obj _35cc1547 = makeNative(26, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x = closureRef(co, 0);
Obj __ = closureRef(co, 1);
PUSH_CONT(co, 25, clofun6, 2, x, _35cc1547);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj _35val2433 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1547= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2433) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1547;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35cc1548 = makeNative(30, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2401 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2401) {
Obj _35reg2402 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2403 = PRIM_EQ(symif, _35reg2402);
if (True == _35reg2403) {
Obj _35reg2404 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2405 = PRIM_ISCONS(_35reg2404);
if (True == _35reg2405) {
Obj _35reg2406 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2407 = PRIM_CAR(_35reg2406);
Obj a = _35reg2407;
Obj _35reg2408 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2409 = PRIM_CDR(_35reg2408);
Obj _35reg2410 = PRIM_ISCONS(_35reg2409);
if (True == _35reg2410) {
Obj _35reg2411 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2412 = PRIM_CDR(_35reg2411);
Obj _35reg2413 = PRIM_CAR(_35reg2412);
Obj b = _35reg2413;
Obj _35reg2414 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2415 = PRIM_CDR(_35reg2414);
Obj _35reg2416 = PRIM_CDR(_35reg2415);
Obj _35reg2417 = PRIM_ISCONS(_35reg2416);
if (True == _35reg2417) {
Obj _35reg2418 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2419 = PRIM_CDR(_35reg2418);
Obj _35reg2420 = PRIM_CDR(_35reg2419);
Obj _35reg2421 = PRIM_CAR(_35reg2420);
Obj c = _35reg2421;
Obj _35reg2422 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2423 = PRIM_CDR(_35reg2422);
Obj _35reg2424 = PRIM_CDR(_35reg2423);
Obj _35reg2425 = PRIM_CDR(_35reg2424);
Obj _35reg2426 = PRIM_EQ(Nil, _35reg2425);
if (True == _35reg2426) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = a;
__arg2 = makeNative(27, clofun6, 1, 3, b, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1548;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1548;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1548;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1548;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1548;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1548;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj ra = __arg1;
PUSH_CONT(co, 28, clofun6, 1, ra);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _35val2427 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 29, clofun6, 2, _35val2427, ra);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _35val2428 = __arg1;
Obj _35val2427= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2429 = makeCons(_35val2428, Nil);
Obj _35reg2430 = makeCons(_35val2427, _35reg2429);
Obj _35reg2431 = makeCons(ra, _35reg2430);
Obj _35reg2432 = makeCons(symif, _35reg2431);
__nargs = 2;
__arg1 = _35reg2432;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj _35cc1549 = makeNative(33, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2379 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2379) {
Obj _35reg2380 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2381 = PRIM_EQ(symdo, _35reg2380);
if (True == _35reg2381) {
Obj _35reg2382 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2383 = PRIM_ISCONS(_35reg2382);
if (True == _35reg2383) {
Obj _35reg2384 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2385 = PRIM_CAR(_35reg2384);
Obj a = _35reg2385;
Obj _35reg2386 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2387 = PRIM_CDR(_35reg2386);
Obj _35reg2388 = PRIM_ISCONS(_35reg2387);
if (True == _35reg2388) {
Obj _35reg2389 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2390 = PRIM_CDR(_35reg2389);
Obj _35reg2391 = PRIM_CAR(_35reg2390);
Obj b = _35reg2391;
Obj _35reg2392 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2393 = PRIM_CDR(_35reg2392);
Obj _35reg2394 = PRIM_CDR(_35reg2393);
Obj _35reg2395 = PRIM_EQ(Nil, _35reg2394);
if (True == _35reg2395) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = a;
__arg2 = makeNative(31, clofun6, 1, 2, b, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1549;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1549;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1549;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1549;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1549;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj ra = __arg1;
Obj _35reg2396 = primIsSymbol(ra);
if (True == _35reg2396) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
PUSH_CONT(co, 32, clofun6, 1, ra);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _35val2397 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2398 = makeCons(_35val2397, Nil);
Obj _35reg2399 = makeCons(ra, _35reg2398);
Obj _35reg2400 = makeCons(symdo, _35reg2399);
__nargs = 2;
__arg1 = _35reg2400;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label33:
{
Obj _35cc1550 = makeNative(36, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2348 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2348) {
Obj _35reg2349 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2350 = PRIM_EQ(symlet, _35reg2349);
if (True == _35reg2350) {
Obj _35reg2351 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2352 = PRIM_ISCONS(_35reg2351);
if (True == _35reg2352) {
Obj _35reg2353 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2354 = PRIM_CAR(_35reg2353);
Obj a = _35reg2354;
Obj _35reg2355 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2356 = PRIM_CDR(_35reg2355);
Obj _35reg2357 = PRIM_ISCONS(_35reg2356);
if (True == _35reg2357) {
Obj _35reg2358 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2359 = PRIM_CDR(_35reg2358);
Obj _35reg2360 = PRIM_CAR(_35reg2359);
Obj b = _35reg2360;
Obj _35reg2361 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2362 = PRIM_CDR(_35reg2361);
Obj _35reg2363 = PRIM_CDR(_35reg2362);
Obj _35reg2364 = PRIM_ISCONS(_35reg2363);
if (True == _35reg2364) {
Obj _35reg2365 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2366 = PRIM_CDR(_35reg2365);
Obj _35reg2367 = PRIM_CDR(_35reg2366);
Obj _35reg2368 = PRIM_CAR(_35reg2367);
Obj c = _35reg2368;
Obj _35reg2369 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2370 = PRIM_CDR(_35reg2369);
Obj _35reg2371 = PRIM_CDR(_35reg2370);
Obj _35reg2372 = PRIM_CDR(_35reg2371);
Obj _35reg2373 = PRIM_EQ(Nil, _35reg2372);
if (True == _35reg2373) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = b;
__arg2 = makeNative(34, clofun6, 1, 3, a, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1550;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1550;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1550;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1550;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1550;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1550;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj rb = __arg1;
PUSH_CONT(co, 35, clofun6, 1, rb);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _35val2374 = __arg1;
Obj rb= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2375 = makeCons(_35val2374, Nil);
Obj _35reg2376 = makeCons(rb, _35reg2375);
Obj _35reg2377 = makeCons(closureRef(co, 0), _35reg2376);
Obj _35reg2378 = makeCons(symlet, _35reg2377);
__nargs = 2;
__arg1 = _35reg2378;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj _35cc1551 = makeNative(38, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2304 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2304) {
Obj _35reg2305 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2306 = PRIM_EQ(sym_37closure, _35reg2305);
if (True == _35reg2306) {
Obj _35reg2307 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2308 = PRIM_ISCONS(_35reg2307);
if (True == _35reg2308) {
Obj _35reg2309 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2310 = PRIM_CAR(_35reg2309);
Obj _35reg2311 = PRIM_ISCONS(_35reg2310);
if (True == _35reg2311) {
Obj _35reg2312 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2313 = PRIM_CAR(_35reg2312);
Obj _35reg2314 = PRIM_CAR(_35reg2313);
Obj _35reg2315 = PRIM_EQ(symlambda, _35reg2314);
if (True == _35reg2315) {
Obj _35reg2316 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2317 = PRIM_CAR(_35reg2316);
Obj _35reg2318 = PRIM_CDR(_35reg2317);
Obj _35reg2319 = PRIM_ISCONS(_35reg2318);
if (True == _35reg2319) {
Obj _35reg2320 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2321 = PRIM_CAR(_35reg2320);
Obj _35reg2322 = PRIM_CDR(_35reg2321);
Obj _35reg2323 = PRIM_CAR(_35reg2322);
Obj args = _35reg2323;
Obj _35reg2324 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2325 = PRIM_CAR(_35reg2324);
Obj _35reg2326 = PRIM_CDR(_35reg2325);
Obj _35reg2327 = PRIM_CDR(_35reg2326);
Obj _35reg2328 = PRIM_ISCONS(_35reg2327);
if (True == _35reg2328) {
Obj _35reg2329 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2330 = PRIM_CAR(_35reg2329);
Obj _35reg2331 = PRIM_CDR(_35reg2330);
Obj _35reg2332 = PRIM_CDR(_35reg2331);
Obj _35reg2333 = PRIM_CAR(_35reg2332);
Obj body = _35reg2333;
Obj _35reg2334 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2335 = PRIM_CAR(_35reg2334);
Obj _35reg2336 = PRIM_CDR(_35reg2335);
Obj _35reg2337 = PRIM_CDR(_35reg2336);
Obj _35reg2338 = PRIM_CDR(_35reg2337);
Obj _35reg2339 = PRIM_EQ(Nil, _35reg2338);
if (True == _35reg2339) {
Obj _35reg2340 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2341 = PRIM_CDR(_35reg2340);
Obj frees = _35reg2341;
Obj next = closureRef(co, 1);
PUSH_CONT(co, 37, clofun6, 3, args, frees, next);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = body;
__arg2 = globalRef(symcora_47lib_47toc_35id);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _35val2342 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2343 = makeCons(_35val2342, Nil);
Obj _35reg2344 = makeCons(args, _35reg2343);
Obj _35reg2345 = makeCons(symlambda, _35reg2344);
Obj _35reg2346 = makeCons(_35reg2345, frees);
Obj _35reg2347 = makeCons(sym_37closure, _35reg2346);
__nargs = 2;
__arg0 = next;
__arg1 = _35reg2347;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj _35cc1552 = makeNative(39, clofun6, 0, 0);
Obj _35reg2300 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2300) {
Obj _35reg2301 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg2301;
Obj _35reg2302 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg2302;
Obj next = closureRef(co, 1);
Obj _35reg2303 = makeCons(f, args);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45list);
__arg1 = _35reg2303;
__arg2 = Nil;
__arg3 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1552;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x = __arg1;
Obj _35reg2297 = makeCons(x, Nil);
Obj _35reg2298 = makeCons(symreturn, _35reg2297);
__nargs = 2;
__arg1 = _35reg2298;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj _35p1537 = __arg1;
Obj _35p1538 = __arg2;
Obj _35cc1539 = makeNative(43, clofun6, 0, 2, _35p1537, _35p1538);
Obj __ = _35p1537;
Obj x = _35p1538;
PUSH_CONT(co, 42, clofun6, 2, x, _35cc1539);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val2295 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1539= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2295) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1539;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj _35cc1540 = makeNative(45, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg2290 = primIsSymbol(var);
if (True == _35reg2290) {
PUSH_CONT(co, 44, clofun6, 1, var);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35index);
__arg1 = var;
__arg2 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1540;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj _35val2291 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pos = _35val2291;
Obj _35reg2292 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == _35reg2292) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2293 = makeCons(pos, Nil);
Obj _35reg2294 = makeCons(sym_37closure_45ref, _35reg2293);
__nargs = 2;
__arg1 = _35reg2294;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label45:
{
Obj _35cc1541 = makeNative(0, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2261 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg2261) {
Obj _35reg2262 = PRIM_CAR(closureRef(co, 1));
Obj _35reg2263 = PRIM_EQ(symlambda, _35reg2262);
if (True == _35reg2263) {
Obj _35reg2264 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2265 = PRIM_ISCONS(_35reg2264);
if (True == _35reg2265) {
Obj _35reg2266 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2267 = PRIM_CAR(_35reg2266);
Obj args = _35reg2267;
Obj _35reg2268 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2269 = PRIM_CDR(_35reg2268);
Obj _35reg2270 = PRIM_ISCONS(_35reg2269);
if (True == _35reg2270) {
Obj _35reg2271 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2272 = PRIM_CDR(_35reg2271);
Obj _35reg2273 = PRIM_CAR(_35reg2272);
Obj body = _35reg2273;
Obj _35reg2274 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2275 = PRIM_CDR(_35reg2274);
Obj _35reg2276 = PRIM_CDR(_35reg2275);
Obj _35reg2277 = PRIM_EQ(Nil, _35reg2276);
if (True == _35reg2277) {
Obj _35reg2278 = makeCons(body, Nil);
Obj _35reg2279 = makeCons(args, _35reg2278);
Obj _35reg2280 = makeCons(symlambda, _35reg2279);
PUSH_CONT(co, 46, clofun6, 3, body, args, fvs);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = _35reg2280;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1541;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1541;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1541;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1541;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1541;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _35val2281 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val2281;
PUSH_CONT(co, 47, clofun6, 3, args, fvs, fvs1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _35val2282 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2283 = makeCons(_35val2282, Nil);
Obj _35reg2284 = makeCons(args, _35reg2283);
Obj _35reg2285 = makeCons(symlambda, _35reg2284);
PUSH_CONT(co, 48, clofun6, 2, fvs1, _35reg2285);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35val2286 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2285= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 49, clofun6, 1, _35reg2285);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val2286;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35val2287 = __arg1;
Obj _35reg2285= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2288 = makeCons(_35reg2285, _35val2287);
Obj _35reg2289 = makeCons(sym_37closure, _35reg2288);
__nargs = 2;
__arg1 = _35reg2289;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun7(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35cc1542 = makeNative(3, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2229 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg2229) {
Obj _35reg2230 = PRIM_CAR(closureRef(co, 1));
Obj _35reg2231 = PRIM_EQ(symlet, _35reg2230);
if (True == _35reg2231) {
Obj _35reg2232 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2233 = PRIM_ISCONS(_35reg2232);
if (True == _35reg2233) {
Obj _35reg2234 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2235 = PRIM_CAR(_35reg2234);
Obj a = _35reg2235;
Obj _35reg2236 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2237 = PRIM_CDR(_35reg2236);
Obj _35reg2238 = PRIM_ISCONS(_35reg2237);
if (True == _35reg2238) {
Obj _35reg2239 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2240 = PRIM_CDR(_35reg2239);
Obj _35reg2241 = PRIM_CAR(_35reg2240);
Obj b = _35reg2241;
Obj _35reg2242 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2243 = PRIM_CDR(_35reg2242);
Obj _35reg2244 = PRIM_CDR(_35reg2243);
Obj _35reg2245 = PRIM_ISCONS(_35reg2244);
if (True == _35reg2245) {
Obj _35reg2246 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2247 = PRIM_CDR(_35reg2246);
Obj _35reg2248 = PRIM_CDR(_35reg2247);
Obj _35reg2249 = PRIM_CAR(_35reg2248);
Obj c = _35reg2249;
Obj _35reg2250 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2251 = PRIM_CDR(_35reg2250);
Obj _35reg2252 = PRIM_CDR(_35reg2251);
Obj _35reg2253 = PRIM_CDR(_35reg2252);
Obj _35reg2254 = PRIM_EQ(Nil, _35reg2253);
if (True == _35reg2254) {
PUSH_CONT(co, 1, clofun7, 3, fvs, c, a);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = fvs;
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1542;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1542;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1542;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1542;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1542;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1542;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val2255 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 2, clofun7, 2, _35val2255, a);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = fvs;
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val2256 = __arg1;
Obj _35val2255= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2257 = makeCons(_35val2256, Nil);
Obj _35reg2258 = makeCons(_35val2255, _35reg2257);
Obj _35reg2259 = makeCons(a, _35reg2258);
Obj _35reg2260 = makeCons(symlet, _35reg2259);
__nargs = 2;
__arg1 = _35reg2260;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj _35cc1543 = makeNative(5, clofun7, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg2224 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg2224) {
Obj _35reg2225 = PRIM_CAR(closureRef(co, 1));
Obj f = _35reg2225;
Obj _35reg2226 = PRIM_CDR(closureRef(co, 1));
Obj args = _35reg2226;
PUSH_CONT(co, 4, clofun7, 2, f, args);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2227 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2228 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val2227;
__arg2 = _35reg2228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35p1524 = __arg1;
Obj _35cc1525 = makeNative(8, clofun7, 0, 1, _35p1524);
Obj x = _35p1524;
PUSH_CONT(co, 7, clofun7, 1, _35cc1525);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2222 = __arg1;
Obj _35cc1525= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2222) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1525;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj _35cc1526 = makeNative(9, clofun7, 0, 1, closureRef(co, 0));
Obj x = closureRef(co, 0);
Obj _35reg2220 = primIsSymbol(x);
if (True == _35reg2220) {
Obj _35reg2221 = makeCons(x, Nil);
__nargs = 2;
__arg1 = _35reg2221;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1526;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35cc1527 = makeNative(11, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2202 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2202) {
Obj _35reg2203 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2204 = PRIM_EQ(symlambda, _35reg2203);
if (True == _35reg2204) {
Obj _35reg2205 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2206 = PRIM_ISCONS(_35reg2205);
if (True == _35reg2206) {
Obj _35reg2207 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2208 = PRIM_CAR(_35reg2207);
Obj args = _35reg2208;
Obj _35reg2209 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2210 = PRIM_CDR(_35reg2209);
Obj _35reg2211 = PRIM_ISCONS(_35reg2210);
if (True == _35reg2211) {
Obj _35reg2212 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2213 = PRIM_CDR(_35reg2212);
Obj _35reg2214 = PRIM_CAR(_35reg2213);
Obj body = _35reg2214;
Obj _35reg2215 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2216 = PRIM_CDR(_35reg2215);
Obj _35reg2217 = PRIM_CDR(_35reg2216);
Obj _35reg2218 = PRIM_EQ(Nil, _35reg2217);
if (True == _35reg2218) {
PUSH_CONT(co, 10, clofun7, 1, args);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1527;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2219 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = _35val2219;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35cc1528 = makeNative(13, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2172 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2172) {
Obj _35reg2173 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2174 = PRIM_EQ(symif, _35reg2173);
if (True == _35reg2174) {
Obj _35reg2175 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2176 = PRIM_ISCONS(_35reg2175);
if (True == _35reg2176) {
Obj _35reg2177 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2178 = PRIM_CAR(_35reg2177);
Obj x = _35reg2178;
Obj _35reg2179 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2180 = PRIM_CDR(_35reg2179);
Obj _35reg2181 = PRIM_ISCONS(_35reg2180);
if (True == _35reg2181) {
Obj _35reg2182 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2183 = PRIM_CDR(_35reg2182);
Obj _35reg2184 = PRIM_CAR(_35reg2183);
Obj y = _35reg2184;
Obj _35reg2185 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2186 = PRIM_CDR(_35reg2185);
Obj _35reg2187 = PRIM_CDR(_35reg2186);
Obj _35reg2188 = PRIM_ISCONS(_35reg2187);
if (True == _35reg2188) {
Obj _35reg2189 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2190 = PRIM_CDR(_35reg2189);
Obj _35reg2191 = PRIM_CDR(_35reg2190);
Obj _35reg2192 = PRIM_CAR(_35reg2191);
Obj z = _35reg2192;
Obj _35reg2193 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2194 = PRIM_CDR(_35reg2193);
Obj _35reg2195 = PRIM_CDR(_35reg2194);
Obj _35reg2196 = PRIM_CDR(_35reg2195);
Obj _35reg2197 = PRIM_EQ(Nil, _35reg2196);
if (True == _35reg2197) {
Obj _35reg2198 = makeCons(z, Nil);
Obj _35reg2199 = makeCons(y, _35reg2198);
Obj _35reg2200 = makeCons(x, _35reg2199);
PUSH_CONT(co, 12, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = _35reg2200;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1528;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1528;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1528;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1528;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1528;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1528;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val2201 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = _35val2201;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35cc1529 = makeNative(15, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2152 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2152) {
Obj _35reg2153 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2154 = PRIM_EQ(symdo, _35reg2153);
if (True == _35reg2154) {
Obj _35reg2155 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2156 = PRIM_ISCONS(_35reg2155);
if (True == _35reg2156) {
Obj _35reg2157 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2158 = PRIM_CAR(_35reg2157);
Obj x = _35reg2158;
Obj _35reg2159 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2160 = PRIM_CDR(_35reg2159);
Obj _35reg2161 = PRIM_ISCONS(_35reg2160);
if (True == _35reg2161) {
Obj _35reg2162 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2163 = PRIM_CDR(_35reg2162);
Obj _35reg2164 = PRIM_CAR(_35reg2163);
Obj y = _35reg2164;
Obj _35reg2165 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2166 = PRIM_CDR(_35reg2165);
Obj _35reg2167 = PRIM_CDR(_35reg2166);
Obj _35reg2168 = PRIM_EQ(Nil, _35reg2167);
if (True == _35reg2168) {
Obj _35reg2169 = makeCons(y, Nil);
Obj _35reg2170 = makeCons(x, _35reg2169);
PUSH_CONT(co, 14, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = _35reg2170;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1529;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1529;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1529;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1529;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1529;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val2171 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = _35val2171;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35cc1530 = makeNative(19, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2122 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2122) {
Obj _35reg2123 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2124 = PRIM_EQ(symlet, _35reg2123);
if (True == _35reg2124) {
Obj _35reg2125 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2126 = PRIM_ISCONS(_35reg2125);
if (True == _35reg2126) {
Obj _35reg2127 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2128 = PRIM_CAR(_35reg2127);
Obj a = _35reg2128;
Obj _35reg2129 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2130 = PRIM_CDR(_35reg2129);
Obj _35reg2131 = PRIM_ISCONS(_35reg2130);
if (True == _35reg2131) {
Obj _35reg2132 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2133 = PRIM_CDR(_35reg2132);
Obj _35reg2134 = PRIM_CAR(_35reg2133);
Obj b = _35reg2134;
Obj _35reg2135 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2136 = PRIM_CDR(_35reg2135);
Obj _35reg2137 = PRIM_CDR(_35reg2136);
Obj _35reg2138 = PRIM_ISCONS(_35reg2137);
if (True == _35reg2138) {
Obj _35reg2139 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2140 = PRIM_CDR(_35reg2139);
Obj _35reg2141 = PRIM_CDR(_35reg2140);
Obj _35reg2142 = PRIM_CAR(_35reg2141);
Obj c = _35reg2142;
Obj _35reg2143 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2144 = PRIM_CDR(_35reg2143);
Obj _35reg2145 = PRIM_CDR(_35reg2144);
Obj _35reg2146 = PRIM_CDR(_35reg2145);
Obj _35reg2147 = PRIM_EQ(Nil, _35reg2146);
if (True == _35reg2147) {
PUSH_CONT(co, 16, clofun7, 2, c, a);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1530;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1530;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1530;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1530;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1530;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1530;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2148 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 17, clofun7, 2, a, _35val2148);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val2149 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2148= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2150 = makeCons(a, Nil);
PUSH_CONT(co, 18, clofun7, 1, _35val2148);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = _35val2149;
__arg2 = _35reg2150;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val2151 = __arg1;
Obj _35val2148= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35union);
__arg1 = _35val2148;
__arg2 = _35val2151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35cc1531 = makeNative(20, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2112 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2112) {
Obj _35reg2113 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2114 = PRIM_EQ(sym_37closure, _35reg2113);
if (True == _35reg2114) {
Obj _35reg2115 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2116 = PRIM_ISCONS(_35reg2115);
if (True == _35reg2116) {
Obj _35reg2117 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2118 = PRIM_CAR(_35reg2117);
Obj lam = _35reg2118;
Obj _35reg2119 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2120 = PRIM_CDR(_35reg2119);
Obj more = _35reg2120;
Obj _35reg2121 = makeCons(lam, more);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = _35reg2121;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1531;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1531;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1531;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc1532 = makeNative(21, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2102 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2102) {
Obj _35reg2103 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2104 = PRIM_EQ(symreturn, _35reg2103);
if (True == _35reg2104) {
Obj _35reg2105 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2106 = PRIM_ISCONS(_35reg2105);
if (True == _35reg2106) {
Obj _35reg2107 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2108 = PRIM_CAR(_35reg2107);
Obj x = _35reg2108;
Obj _35reg2109 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2110 = PRIM_CDR(_35reg2109);
Obj _35reg2111 = PRIM_EQ(Nil, _35reg2110);
if (True == _35reg2111) {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1532;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1532;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1532;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1532;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj _35cc1533 = makeNative(23, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2082 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2082) {
Obj _35reg2083 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2084 = PRIM_EQ(symcall, _35reg2083);
if (True == _35reg2084) {
Obj _35reg2085 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2086 = PRIM_ISCONS(_35reg2085);
if (True == _35reg2086) {
Obj _35reg2087 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2088 = PRIM_CAR(_35reg2087);
Obj exp = _35reg2088;
Obj _35reg2089 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2090 = PRIM_CDR(_35reg2089);
Obj _35reg2091 = PRIM_ISCONS(_35reg2090);
if (True == _35reg2091) {
Obj _35reg2092 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2093 = PRIM_CDR(_35reg2092);
Obj _35reg2094 = PRIM_CAR(_35reg2093);
Obj cont = _35reg2094;
Obj _35reg2095 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2096 = PRIM_CDR(_35reg2095);
Obj _35reg2097 = PRIM_CDR(_35reg2096);
Obj _35reg2098 = PRIM_EQ(Nil, _35reg2097);
if (True == _35reg2098) {
Obj _35reg2099 = makeCons(cont, Nil);
Obj _35reg2100 = makeCons(exp, _35reg2099);
PUSH_CONT(co, 22, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = _35reg2100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1533;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1533;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1533;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1533;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1533;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35val2101 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = _35val2101;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj _35cc1534 = makeNative(24, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2072 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2072) {
Obj _35reg2073 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2074 = PRIM_EQ(symtailcall, _35reg2073);
if (True == _35reg2074) {
Obj _35reg2075 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2076 = PRIM_ISCONS(_35reg2075);
if (True == _35reg2076) {
Obj _35reg2077 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2078 = PRIM_CAR(_35reg2077);
Obj exp = _35reg2078;
Obj _35reg2079 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2080 = PRIM_CDR(_35reg2079);
Obj _35reg2081 = PRIM_EQ(Nil, _35reg2080);
if (True == _35reg2081) {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1534;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1534;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1534;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1534;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _35cc1535 = makeNative(26, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2054 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2054) {
Obj _35reg2055 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2056 = PRIM_EQ(symcontinuation, _35reg2055);
if (True == _35reg2056) {
Obj _35reg2057 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2058 = PRIM_ISCONS(_35reg2057);
if (True == _35reg2058) {
Obj _35reg2059 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2060 = PRIM_CAR(_35reg2059);
Obj arg = _35reg2060;
Obj _35reg2061 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2062 = PRIM_CDR(_35reg2061);
Obj _35reg2063 = PRIM_ISCONS(_35reg2062);
if (True == _35reg2063) {
Obj _35reg2064 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2065 = PRIM_CDR(_35reg2064);
Obj _35reg2066 = PRIM_CAR(_35reg2065);
Obj body = _35reg2066;
Obj _35reg2067 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2068 = PRIM_CDR(_35reg2067);
Obj _35reg2069 = PRIM_CDR(_35reg2068);
Obj _35reg2070 = PRIM_EQ(Nil, _35reg2069);
if (True == _35reg2070) {
PUSH_CONT(co, 25, clofun7, 1, arg);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35val2071 = __arg1;
Obj arg= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = _35val2071;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _35cc1536 = makeNative(28, clofun7, 0, 0);
Obj _35reg2049 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2049) {
Obj _35reg2050 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg2050;
Obj _35reg2051 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg2051;
Obj _35reg2052 = makeCons(f, args);
PUSH_CONT(co, 27, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = _35reg2052;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1536;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35val2053 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = _35val2053;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _35p1517 = __arg1;
Obj _35cc1518 = makeNative(30, clofun7, 0, 1, _35p1517);
Obj _35reg2038 = PRIM_ISCONS(_35p1517);
if (True == _35reg2038) {
Obj _35reg2039 = PRIM_CAR(_35p1517);
Obj _35reg2040 = PRIM_EQ(sym_37const, _35reg2039);
if (True == _35reg2040) {
Obj _35reg2041 = PRIM_CDR(_35p1517);
Obj _35reg2042 = PRIM_ISCONS(_35reg2041);
if (True == _35reg2042) {
Obj _35reg2043 = PRIM_CDR(_35p1517);
Obj _35reg2044 = PRIM_CAR(_35reg2043);
Obj x = _35reg2044;
Obj _35reg2045 = PRIM_CDR(_35p1517);
Obj _35reg2046 = PRIM_CDR(_35reg2045);
Obj _35reg2047 = PRIM_EQ(Nil, _35reg2046);
if (True == _35reg2047) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1518;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1518;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1518;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1518;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj _35cc1519 = makeNative(31, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2028 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2028) {
Obj _35reg2029 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2030 = PRIM_EQ(sym_37global, _35reg2029);
if (True == _35reg2030) {
Obj _35reg2031 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2032 = PRIM_ISCONS(_35reg2031);
if (True == _35reg2032) {
Obj _35reg2033 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2034 = PRIM_CAR(_35reg2033);
Obj x = _35reg2034;
Obj _35reg2035 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2036 = PRIM_CDR(_35reg2035);
Obj _35reg2037 = PRIM_EQ(Nil, _35reg2036);
if (True == _35reg2037) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj _35cc1520 = makeNative(32, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2018 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2018) {
Obj _35reg2019 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2020 = PRIM_EQ(sym_37builtin, _35reg2019);
if (True == _35reg2020) {
Obj _35reg2021 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2022 = PRIM_ISCONS(_35reg2021);
if (True == _35reg2022) {
Obj _35reg2023 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2024 = PRIM_CAR(_35reg2023);
Obj op = _35reg2024;
Obj _35reg2025 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2026 = PRIM_CDR(_35reg2025);
Obj _35reg2027 = PRIM_EQ(Nil, _35reg2026);
if (True == _35reg2027) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _35cc1521 = makeNative(33, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2008 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2008) {
Obj _35reg2009 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2010 = PRIM_EQ(symquote, _35reg2009);
if (True == _35reg2010) {
Obj _35reg2011 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2012 = PRIM_ISCONS(_35reg2011);
if (True == _35reg2012) {
Obj _35reg2013 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2014 = PRIM_CAR(_35reg2013);
Obj x = _35reg2014;
Obj _35reg2015 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2016 = PRIM_CDR(_35reg2015);
Obj _35reg2017 = PRIM_EQ(Nil, _35reg2016);
if (True == _35reg2017) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1521;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1521;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1521;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1521;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _35cc1522 = makeNative(34, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg1998 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1998) {
Obj _35reg1999 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2000 = PRIM_EQ(sym_37closure_45ref, _35reg1999);
if (True == _35reg2000) {
Obj _35reg2001 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2002 = PRIM_ISCONS(_35reg2001);
if (True == _35reg2002) {
Obj _35reg2003 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2004 = PRIM_CAR(_35reg2003);
Obj __ = _35reg2004;
Obj _35reg2005 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2006 = PRIM_CDR(_35reg2005);
Obj _35reg2007 = PRIM_EQ(Nil, _35reg2006);
if (True == _35reg2007) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1522;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1522;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1522;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1522;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj _35cc1523 = makeNative(35, clofun7, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35p1512 = __arg1;
Obj _35p1513 = __arg2;
Obj _35cc1514 = makeNative(37, clofun7, 0, 2, _35p1512, _35p1513);
Obj _35reg1996 = PRIM_EQ(Nil, _35p1512);
if (True == _35reg1996) {
Obj __ = _35p1513;
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1514;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _35cc1515 = makeNative(39, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1992 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1992) {
Obj _35reg1993 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg1993;
Obj _35reg1994 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg1994;
Obj s2 = closureRef(co, 1);
PUSH_CONT(co, 38, clofun7, 3, y, s2, _35cc1515);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35elem_63);
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1515;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35val1995 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1515= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1995) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1515;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _35cc1516 = makeNative(41, clofun7, 0, 0);
Obj _35reg1987 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1987) {
Obj _35reg1988 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg1988;
Obj _35reg1989 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg1989;
Obj s2 = closureRef(co, 1);
PUSH_CONT(co, 40, clofun7, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1516;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj _35val1990 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1991 = makeCons(x, _35val1990);
__nargs = 2;
__arg1 = _35reg1991;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35p1507 = __arg1;
Obj _35p1508 = __arg2;
Obj _35cc1509 = makeNative(43, clofun7, 0, 2, _35p1507, _35p1508);
Obj _35reg1985 = PRIM_EQ(Nil, _35p1507);
if (True == _35reg1985) {
Obj s2 = _35p1508;
__nargs = 2;
__arg1 = s2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1509;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj _35cc1510 = makeNative(45, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg1981 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1981) {
Obj _35reg1982 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg1982;
Obj _35reg1983 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg1983;
Obj s2 = closureRef(co, 1);
PUSH_CONT(co, 44, clofun7, 3, y, s2, _35cc1510);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35elem_63);
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1510;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj _35val1984 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc1510= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val1984) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35union);
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1510;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj _35cc1511 = makeNative(47, clofun7, 0, 0);
Obj _35reg1976 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg1976) {
Obj _35reg1977 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg1977;
Obj _35reg1978 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg1978;
Obj s2 = closureRef(co, 1);
PUSH_CONT(co, 46, clofun7, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35union);
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _35val1979 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1980 = makeCons(x, _35val1979);
__nargs = 2;
__arg1 = _35reg1980;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label47:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35p1491 = __arg1;
Obj _35p1492 = __arg2;
Obj _35p1493 = __arg3;
Obj _35p1494 = co->args[4];
Obj _35p1495 = co->args[5];
Obj _35cc1496 = makeNative(2, clofun8, 0, 5, _35p1491, _35p1492, _35p1493, _35p1494, _35p1495);
Obj __ = _35p1491;
__ = _35p1492;
__ = _35p1493;
Obj globals = _35p1494;
Obj x = _35p1495;
PUSH_CONT(co, 49, clofun7, 2, x, _35cc1496);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35number_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35val1961 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1496= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1961) {
if (True == True) {
Obj _35reg1962 = makeCons(x, Nil);
Obj _35reg1963 = makeCons(sym_37const, _35reg1962);
__nargs = 2;
__arg1 = _35reg1963;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1496;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg1964 = primIsString(x);
if (True == _35reg1964) {
if (True == True) {
Obj _35reg1965 = makeCons(x, Nil);
Obj _35reg1966 = makeCons(sym_37const, _35reg1965);
__nargs = 2;
__arg1 = _35reg1966;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1496;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
PUSH_CONT(co, 0, clofun8, 2, x, _35cc1496);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35boolean_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
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

static void clofun8(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1967 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1496= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1967) {
if (True == True) {
Obj _35reg1968 = makeCons(x, Nil);
Obj _35reg1969 = makeCons(sym_37const, _35reg1968);
__nargs = 2;
__arg1 = _35reg1969;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1496;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
PUSH_CONT(co, 1, clofun8, 2, x, _35cc1496);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val1970 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc1496= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1970) {
if (True == True) {
Obj _35reg1971 = makeCons(x, Nil);
Obj _35reg1972 = makeCons(sym_37const, _35reg1971);
__nargs = 2;
__arg1 = _35reg1972;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1496;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg1973 = makeCons(x, Nil);
Obj _35reg1974 = makeCons(sym_37const, _35reg1973);
__nargs = 2;
__arg1 = _35reg1974;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1496;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label2:
{
Obj _35cc1497 = makeNative(4, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj __ = closureRef(co, 0);
__ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg1948 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg1948) {
Obj _35reg1949 = PRIM_CAR(closureRef(co, 4));
Obj _35reg1950 = PRIM_EQ(symquote, _35reg1949);
if (True == _35reg1950) {
Obj _35reg1951 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1952 = PRIM_ISCONS(_35reg1951);
if (True == _35reg1952) {
Obj _35reg1953 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1954 = PRIM_CAR(_35reg1953);
Obj x = _35reg1954;
Obj _35reg1955 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1956 = PRIM_CDR(_35reg1955);
Obj _35reg1957 = PRIM_EQ(Nil, _35reg1956);
if (True == _35reg1957) {
PUSH_CONT(co, 3, clofun8, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35add_45symbol_45to_45list);
__arg1 = x;
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1497;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1497;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1497;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1497;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35val1958 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1959 = makeCons(x, Nil);
Obj _35reg1960 = makeCons(sym_37const, _35reg1959);
__nargs = 2;
__arg1 = _35reg1960;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35cc1498 = makeNative(8, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj x = closureRef(co, 4);
Obj _35reg1942 = primIsSymbol(x);
if (True == _35reg1942) {
PUSH_CONT(co, 5, clofun8, 4, x, ns, import, globals);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35elem_63);
__arg1 = x;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1498;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val1943 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val1943) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 6, clofun8, 1, globals);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35lookup_45var);
__arg1 = x;
__arg2 = ns;
__arg3 = import;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val1944 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v = _35val1944;
PUSH_CONT(co, 7, clofun8, 1, v);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35add_45symbol_45to_45list);
__arg1 = v;
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val1945 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1946 = makeCons(v, Nil);
Obj _35reg1947 = makeCons(sym_37global, _35reg1946);
__nargs = 2;
__arg1 = _35reg1947;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj _35cc1499 = makeNative(11, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg1920 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg1920) {
Obj _35reg1921 = PRIM_CAR(closureRef(co, 4));
Obj _35reg1922 = PRIM_EQ(symlambda, _35reg1921);
if (True == _35reg1922) {
Obj _35reg1923 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1924 = PRIM_ISCONS(_35reg1923);
if (True == _35reg1924) {
Obj _35reg1925 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1926 = PRIM_CAR(_35reg1925);
Obj args = _35reg1926;
Obj _35reg1927 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1928 = PRIM_CDR(_35reg1927);
Obj _35reg1929 = PRIM_ISCONS(_35reg1928);
if (True == _35reg1929) {
Obj _35reg1930 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1931 = PRIM_CDR(_35reg1930);
Obj _35reg1932 = PRIM_CAR(_35reg1931);
Obj body = _35reg1932;
Obj _35reg1933 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1934 = PRIM_CDR(_35reg1933);
Obj _35reg1935 = PRIM_CDR(_35reg1934);
Obj _35reg1936 = PRIM_EQ(Nil, _35reg1935);
if (True == _35reg1936) {
PUSH_CONT(co, 9, clofun8, 5, ns, import, globals, body, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35append);
__arg1 = args;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1499;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1499;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1499;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1499;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1499;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val1937 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 10, clofun8, 1, args);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = _35val1937;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->args[5] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val1938 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1939 = makeCons(_35val1938, Nil);
Obj _35reg1940 = makeCons(args, _35reg1939);
Obj _35reg1941 = makeCons(symlambda, _35reg1940);
__nargs = 2;
__arg1 = _35reg1941;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj _35cc1500 = makeNative(14, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg1913 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg1913) {
Obj _35reg1914 = PRIM_CAR(closureRef(co, 4));
Obj _35reg1915 = PRIM_EQ(symif, _35reg1914);
if (True == _35reg1915) {
Obj _35reg1916 = PRIM_CDR(closureRef(co, 4));
Obj args = _35reg1916;
PUSH_CONT(co, 12, clofun8, 1, args);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1500;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1500;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj _35val1917 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 13, clofun8, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val1917;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val1918 = __arg1;
Obj _35reg1919 = makeCons(symif, _35val1918);
__nargs = 2;
__arg1 = _35reg1919;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35cc1501 = makeNative(17, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg1891 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg1891) {
Obj _35reg1892 = PRIM_CAR(closureRef(co, 4));
Obj _35reg1893 = PRIM_EQ(symdo, _35reg1892);
if (True == _35reg1893) {
Obj _35reg1894 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1895 = PRIM_ISCONS(_35reg1894);
if (True == _35reg1895) {
Obj _35reg1896 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1897 = PRIM_CAR(_35reg1896);
Obj x = _35reg1897;
Obj _35reg1898 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1899 = PRIM_CDR(_35reg1898);
Obj _35reg1900 = PRIM_ISCONS(_35reg1899);
if (True == _35reg1900) {
Obj _35reg1901 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1902 = PRIM_CDR(_35reg1901);
Obj _35reg1903 = PRIM_CAR(_35reg1902);
Obj y = _35reg1903;
Obj _35reg1904 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1905 = PRIM_CDR(_35reg1904);
Obj _35reg1906 = PRIM_CDR(_35reg1905);
Obj _35reg1907 = PRIM_EQ(Nil, _35reg1906);
if (True == _35reg1907) {
PUSH_CONT(co, 15, clofun8, 5, env, ns, import, globals, y);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->args[5] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1501;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1501;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1501;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1501;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1501;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val1908 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 16, clofun8, 1, _35val1908);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->args[5] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val1909 = __arg1;
Obj _35val1908= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1910 = makeCons(_35val1909, Nil);
Obj _35reg1911 = makeCons(_35val1908, _35reg1910);
Obj _35reg1912 = makeCons(symdo, _35reg1911);
__nargs = 2;
__arg1 = _35reg1912;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35cc1502 = makeNative(20, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg1858 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg1858) {
Obj _35reg1859 = PRIM_CAR(closureRef(co, 4));
Obj _35reg1860 = PRIM_EQ(symlet, _35reg1859);
if (True == _35reg1860) {
Obj _35reg1861 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1862 = PRIM_ISCONS(_35reg1861);
if (True == _35reg1862) {
Obj _35reg1863 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1864 = PRIM_CAR(_35reg1863);
Obj a = _35reg1864;
Obj _35reg1865 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1866 = PRIM_CDR(_35reg1865);
Obj _35reg1867 = PRIM_ISCONS(_35reg1866);
if (True == _35reg1867) {
Obj _35reg1868 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1869 = PRIM_CDR(_35reg1868);
Obj _35reg1870 = PRIM_CAR(_35reg1869);
Obj b = _35reg1870;
Obj _35reg1871 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1872 = PRIM_CDR(_35reg1871);
Obj _35reg1873 = PRIM_CDR(_35reg1872);
Obj _35reg1874 = PRIM_ISCONS(_35reg1873);
if (True == _35reg1874) {
Obj _35reg1875 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1876 = PRIM_CDR(_35reg1875);
Obj _35reg1877 = PRIM_CDR(_35reg1876);
Obj _35reg1878 = PRIM_CAR(_35reg1877);
Obj c = _35reg1878;
Obj _35reg1879 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1880 = PRIM_CDR(_35reg1879);
Obj _35reg1881 = PRIM_CDR(_35reg1880);
Obj _35reg1882 = PRIM_CDR(_35reg1881);
Obj _35reg1883 = PRIM_EQ(Nil, _35reg1882);
if (True == _35reg1883) {
PUSH_CONT(co, 18, clofun8, 6, env, ns, import, globals, c, a);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->args[5] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1502;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1502;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1502;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1502;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1502;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1502;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35val1884 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg1885 = makeCons(a, env);
PUSH_CONT(co, 19, clofun8, 2, _35val1884, a);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = _35reg1885;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->args[5] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val1886 = __arg1;
Obj _35val1884= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1887 = makeCons(_35val1886, Nil);
Obj _35reg1888 = makeCons(_35val1884, _35reg1887);
Obj _35reg1889 = makeCons(a, _35reg1888);
Obj _35reg1890 = makeCons(symlet, _35reg1889);
__nargs = 2;
__arg1 = _35reg1890;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35cc1503 = makeNative(21, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj __ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg1832 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg1832) {
Obj _35reg1833 = PRIM_CAR(closureRef(co, 4));
Obj _35reg1834 = PRIM_EQ(symns, _35reg1833);
if (True == _35reg1834) {
Obj _35reg1835 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1836 = PRIM_ISCONS(_35reg1835);
if (True == _35reg1836) {
Obj _35reg1837 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1838 = PRIM_CAR(_35reg1837);
Obj path = _35reg1838;
Obj _35reg1839 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1840 = PRIM_CDR(_35reg1839);
Obj _35reg1841 = PRIM_ISCONS(_35reg1840);
if (True == _35reg1841) {
Obj _35reg1842 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1843 = PRIM_CDR(_35reg1842);
Obj _35reg1844 = PRIM_CAR(_35reg1843);
Obj import = _35reg1844;
Obj _35reg1845 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1846 = PRIM_CDR(_35reg1845);
Obj _35reg1847 = PRIM_CDR(_35reg1846);
Obj _35reg1848 = PRIM_ISCONS(_35reg1847);
if (True == _35reg1848) {
Obj _35reg1849 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1850 = PRIM_CDR(_35reg1849);
Obj _35reg1851 = PRIM_CDR(_35reg1850);
Obj _35reg1852 = PRIM_CAR(_35reg1851);
Obj body = _35reg1852;
Obj _35reg1853 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1854 = PRIM_CDR(_35reg1853);
Obj _35reg1855 = PRIM_CDR(_35reg1854);
Obj _35reg1856 = PRIM_CDR(_35reg1855);
Obj _35reg1857 = PRIM_EQ(Nil, _35reg1856);
if (True == _35reg1857) {
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = path;
__arg3 = import;
co->args[4] = globals;
co->args[5] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj _35cc1504 = makeNative(25, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg1805 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg1805) {
Obj _35reg1806 = PRIM_CAR(closureRef(co, 4));
Obj _35reg1807 = PRIM_EQ(symdef, _35reg1806);
if (True == _35reg1807) {
Obj _35reg1808 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1809 = PRIM_ISCONS(_35reg1808);
if (True == _35reg1809) {
Obj _35reg1810 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1811 = PRIM_CAR(_35reg1810);
Obj var = _35reg1811;
Obj _35reg1812 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1813 = PRIM_CDR(_35reg1812);
Obj _35reg1814 = PRIM_ISCONS(_35reg1813);
if (True == _35reg1814) {
Obj _35reg1815 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1816 = PRIM_CDR(_35reg1815);
Obj _35reg1817 = PRIM_CAR(_35reg1816);
Obj val = _35reg1817;
Obj _35reg1818 = PRIM_CDR(closureRef(co, 4));
Obj _35reg1819 = PRIM_CDR(_35reg1818);
Obj _35reg1820 = PRIM_CDR(_35reg1819);
Obj _35reg1821 = PRIM_EQ(Nil, _35reg1820);
if (True == _35reg1821) {
PUSH_CONT(co, 22, clofun8, 5, env, ns, import, globals, val);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35var_45with_45ns);
__arg1 = var;
__arg2 = ns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1504;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1504;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1504;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1504;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1504;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35val1822 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj var1 = _35val1822;
PUSH_CONT(co, 23, clofun8, 6, var1, env, ns, import, globals, val);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35add_45symbol_45to_45list);
__arg1 = var1;
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj _35val1823 = __arg1;
Obj var1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg1824 = makeCons(symset, Nil);
Obj _35reg1825 = makeCons(sym_37builtin, _35reg1824);
Obj _35reg1826 = makeCons(var1, Nil);
Obj _35reg1827 = makeCons(sym_37const, _35reg1826);
PUSH_CONT(co, 24, clofun8, 2, _35reg1827, _35reg1825);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->args[5] = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _35val1828 = __arg1;
Obj _35reg1827= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1825= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1829 = makeCons(_35val1828, Nil);
Obj _35reg1830 = makeCons(_35reg1827, _35reg1829);
Obj _35reg1831 = makeCons(_35reg1825, _35reg1830);
__nargs = 2;
__arg1 = _35reg1831;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj _35cc1505 = makeNative(33, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg1785 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg1785) {
Obj _35reg1786 = PRIM_CAR(closureRef(co, 4));
Obj op = _35reg1786;
Obj _35reg1787 = PRIM_CDR(closureRef(co, 4));
Obj args = _35reg1787;
PUSH_CONT(co, 26, clofun8, 7, op, args, env, ns, import, globals, _35cc1505);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35builtin_63);
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1505;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35val1788 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35cc1505= co->ctx.stk.stack[co->ctx.stk.base + 6];
if (True == _35val1788) {
PUSH_CONT(co, 27, clofun8, 6, op, args, env, ns, import, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35builtin_45_62args);
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1505;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35val1789 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj required = _35val1789;
PUSH_CONT(co, 28, clofun8, 7, required, op, args, env, ns, import, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj _35val1790 = __arg1;
Obj required= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj provided = _35val1790;
Obj _35reg1791 = PRIM_EQ(required, provided);
if (True == _35reg1791) {
Obj _35reg1792 = makeCons(op, Nil);
Obj _35reg1793 = makeCons(sym_37builtin, _35reg1792);
PUSH_CONT(co, 31, clofun8, 2, args, _35reg1793);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg1797 = PRIM_GT(required, provided);
if (True == _35reg1797) {
Obj _35reg1798 = PRIM_SUB(required, provided);
PUSH_CONT(co, 29, clofun8, 6, op, args, env, ns, import, globals);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35temp_45list);
__arg1 = _35reg1798;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("primitive call mismatch");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label29:
{
Obj _35val1799 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj tmp = _35val1799;
Obj _35reg1800 = makeCons(op, args);
PUSH_CONT(co, 30, clofun8, 5, tmp, env, ns, import, globals);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35append);
__arg1 = _35reg1800;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val1801 = __arg1;
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg1802 = makeCons(_35val1801, Nil);
Obj _35reg1803 = makeCons(tmp, _35reg1802);
Obj _35reg1804 = makeCons(symlambda, _35reg1803);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->args[5] = _35reg1804;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val1794 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1793= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 32, clofun8, 1, _35reg1793);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val1794;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val1795 = __arg1;
Obj _35reg1793= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg1796 = makeCons(_35reg1793, _35val1795);
__nargs = 2;
__arg1 = _35reg1796;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label33:
{
Obj _35cc1506 = makeNative(35, clofun8, 0, 0);
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj ls = closureRef(co, 4);
PUSH_CONT(co, 34, clofun8, 1, ls);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _35val1784 = __arg1;
Obj ls= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val1784;
__arg2 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35p1486 = __arg1;
Obj _35p1487 = __arg2;
Obj _35p1488 = __arg3;
Obj _35cc1489 = makeNative(37, clofun8, 0, 3, _35p1486, _35p1487, _35p1488);
Obj s = _35p1486;
Obj ns = _35p1487;
Obj _35reg1782 = PRIM_EQ(Nil, _35p1488);
if (True == _35reg1782) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35var_45with_45ns);
__arg1 = s;
__arg2 = ns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1489;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _35cc1490 = makeNative(45, clofun8, 0, 0);
Obj s = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj _35reg1772 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg1772) {
Obj _35reg1773 = PRIM_CAR(closureRef(co, 2));
Obj import = _35reg1773;
Obj _35reg1774 = PRIM_CDR(closureRef(co, 2));
Obj more = _35reg1774;
PUSH_CONT(co, 38, clofun8, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = import;
__arg2 = makeCString("#*ns-export*");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1490;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35val1775 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 39, clofun8, 4, import, s, ns, more);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35intern);
__arg1 = _35val1775;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _35val1776 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 40, clofun8, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35value_45or);
__arg1 = _35val1776;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _35val1777 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj export = _35val1777;
PUSH_CONT(co, 41, clofun8, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35elem_63);
__arg1 = s;
__arg2 = export;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val1778 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val1778) {
PUSH_CONT(co, 42, clofun8, 1, import);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35symbol_45_62string);
__arg1 = s;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35lookup_45var);
__arg1 = s;
__arg2 = ns;
__arg3 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj _35val1779 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 43, clofun8, 1, import);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = makeCString("#");
__arg2 = _35val1779;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _35val1780 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 44, clofun8, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = import;
__arg2 = _35val1780;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val1781 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35intern);
__arg1 = _35val1781;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj var = __arg1;
Obj ns = __arg2;
Obj _35reg1766 = PRIM_EQ(ns, makeCString(""));
if (True == _35reg1766) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 47, clofun8, 2, var, ns);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35symbol_45cooked_63);
__arg1 = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _35val1767 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val1767) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 48, clofun8, 1, ns);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35symbol_45_62string);
__arg1 = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj _35val1768 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 49, clofun8, 1, ns);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = makeCString("#");
__arg2 = _35val1768;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35val1769 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 0, clofun9, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = ns;
__arg2 = _35val1769;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun9(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val1770 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35intern);
__arg1 = _35val1770;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35p1482 = __arg1;
Obj _35p1483 = __arg2;
Obj _35cc1484 = makeNative(2, clofun9, 0, 2, _35p1482, _35p1483);
Obj _35reg1764 = PRIM_EQ(MAKE_NUMBER(0), _35p1482);
if (True == _35reg1764) {
Obj res = _35p1483;
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1484;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35cc1485 = makeNative(3, clofun9, 0, 0);
Obj n = closureRef(co, 0);
Obj res = closureRef(co, 1);
Obj _35reg1761 = PRIM_SUB(n, MAKE_NUMBER(1));
Obj _35reg1762 = primGenSym(symtmp);
Obj _35reg1763 = makeCons(_35reg1762, res);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35temp_45list);
__arg1 = _35reg1761;
__arg2 = _35reg1763;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x = __arg1;
PUSH_CONT(co, 5, clofun9, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35assq);
__arg1 = x;
__arg2 = globalRef(symcora_47lib_47toc_35_42builtin_45prims_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35val1758 = __arg1;
Obj find = _35val1758;
PUSH_CONT(co, 6, clofun9, 1, find);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val1759 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1759) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47init_35cadr);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj x = __arg1;
PUSH_CONT(co, 8, clofun9, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35assq);
__arg1 = x;
__arg2 = globalRef(symcora_47lib_47toc_35_42builtin_45prims_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val1755 = __arg1;
Obj find = _35val1755;
PUSH_CONT(co, 9, clofun9, 1, find);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val1756 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val1756) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caddr);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj x = __arg1;
PUSH_CONT(co, 11, clofun9, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35assq);
__arg1 = x;
__arg2 = globalRef(symcora_47lib_47toc_35_42builtin_45prims_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj _35val1751 = __arg1;
PUSH_CONT(co, 12, clofun9, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = _35val1751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val1752 = __arg1;
Obj _35reg1753 = primNot(_35val1752);
__nargs = 2;
__arg1 = _35reg1753;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label13:
{
Obj _35p1478 = __arg1;
Obj _35p1479 = __arg2;
Obj _35cc1480 = makeNative(14, clofun9, 0, 2, _35p1478, _35p1479);
Obj x = _35p1478;
Obj _35reg1680 = PRIM_EQ(Nil, _35p1479);
if (True == _35reg1680) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1480;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35cc1481 = makeNative(16, clofun9, 0, 0);
Obj x = closureRef(co, 0);
Obj _35reg1675 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg1675) {
Obj _35reg1676 = PRIM_CAR(closureRef(co, 1));
Obj hd = _35reg1676;
Obj _35reg1677 = PRIM_CDR(closureRef(co, 1));
Obj tl = _35reg1677;
PUSH_CONT(co, 15, clofun9, 2, x, tl);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35index);
__arg1 = x;
__arg2 = hd;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1481;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val1678 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tl= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg1679 = PRIM_LT(_35val1678, MAKE_NUMBER(0));
if (True == _35reg1679) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35exist_45in_45env);
__arg1 = x;
__arg2 = tl;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label16:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x = __arg1;
Obj l = __arg2;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35pos_45in_45list0);
__arg1 = MAKE_NUMBER(0);
__arg2 = x;
__arg3 = l;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35p1472 = __arg1;
Obj _35p1473 = __arg2;
Obj _35p1474 = __arg3;
Obj _35cc1475 = makeNative(19, clofun9, 0, 3, _35p1472, _35p1473, _35p1474);
Obj __ = _35p1472;
Obj x = _35p1473;
Obj _35reg1672 = PRIM_EQ(Nil, _35p1474);
if (True == _35reg1672) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1475;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35cc1476 = makeNative(20, clofun9, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg1668 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg1668) {
Obj _35reg1669 = PRIM_CAR(closureRef(co, 2));
Obj a = _35reg1669;
Obj _35reg1670 = PRIM_CDR(closureRef(co, 2));
Obj b = _35reg1670;
Obj _35reg1671 = PRIM_EQ(x, a);
if (True == _35reg1671) {
__nargs = 2;
__arg1 = pos;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1476;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1476;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc1477 = makeNative(21, clofun9, 0, 0);
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg1664 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg1664) {
Obj _35reg1665 = PRIM_CAR(closureRef(co, 2));
Obj a = _35reg1665;
Obj _35reg1666 = PRIM_CDR(closureRef(co, 2));
Obj b = _35reg1666;
Obj _35reg1667 = PRIM_ADD(pos, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35pos_45in_45list0);
__arg1 = _35reg1667;
__arg2 = x;
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1477;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _35p1467 = __arg1;
Obj _35p1468 = __arg2;
Obj _35p1469 = __arg3;
Obj _35cc1470 = makeNative(23, clofun9, 0, 3, _35p1467, _35p1468, _35p1469);
Obj f = _35p1467;
Obj acc = _35p1468;
Obj _35reg1662 = PRIM_EQ(Nil, _35p1469);
if (True == _35reg1662) {
__nargs = 2;
__arg1 = acc;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1470;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35cc1471 = makeNative(25, clofun9, 0, 0);
Obj f = closureRef(co, 0);
Obj acc = closureRef(co, 1);
Obj _35reg1658 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg1658) {
Obj _35reg1659 = PRIM_CAR(closureRef(co, 2));
Obj x = _35reg1659;
Obj _35reg1660 = PRIM_CDR(closureRef(co, 2));
Obj y = _35reg1660;
PUSH_CONT(co, 24, clofun9, 2, f, y);
__nargs = 3;
__arg0 = f;
__arg1 = acc;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _35val1661 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = f;
__arg2 = _35val1661;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _35p1462 = __arg1;
Obj _35p1463 = __arg2;
Obj _35cc1464 = makeNative(27, clofun9, 0, 2, _35p1462, _35p1463);
Obj var = _35p1462;
Obj _35reg1656 = PRIM_EQ(Nil, _35p1463);
if (True == _35reg1656) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1464;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35cc1465 = makeNative(28, clofun9, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj _35reg1646 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg1646) {
Obj _35reg1647 = PRIM_CAR(closureRef(co, 1));
Obj _35reg1648 = PRIM_ISCONS(_35reg1647);
if (True == _35reg1648) {
Obj _35reg1649 = PRIM_CAR(closureRef(co, 1));
Obj _35reg1650 = PRIM_CAR(_35reg1649);
Obj x = _35reg1650;
Obj _35reg1651 = PRIM_CAR(closureRef(co, 1));
Obj _35reg1652 = PRIM_CDR(_35reg1651);
Obj y = _35reg1652;
Obj _35reg1653 = PRIM_CDR(closureRef(co, 1));
Obj __ = _35reg1653;
Obj _35reg1654 = PRIM_EQ(var, x);
if (True == _35reg1654) {
Obj _35reg1655 = makeCons(x, y);
__nargs = 2;
__arg1 = _35reg1655;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc1465;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1465;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc1465;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35cc1466 = makeNative(29, clofun9, 0, 0);
Obj var = closureRef(co, 0);
Obj _35reg1643 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg1643) {
Obj _35reg1644 = PRIM_CAR(closureRef(co, 1));
Obj __ = _35reg1644;
Obj _35reg1645 = PRIM_CDR(closureRef(co, 1));
Obj y = _35reg1645;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35assq);
__arg1 = var;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc1466;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

