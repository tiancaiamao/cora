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


static Obj symcora_47lib_47io_35close_45output_45file;
static Obj symcora_47lib_47io_35open_45output_45file;
static Obj symcora_47init_35macroexpand;
static Obj symcora_47lib_47toc_35compile_45to_45c;
static Obj symcora_47init_35read_45file_45as_45sexp;
static Obj symcora_47lib_47toc_35preprocess;
static Obj symcora_47lib_47toc_35split_45type_45and_45code_45toplevel;
static Obj symcora_47lib_47infer_35_42typecheck_42;
static Obj symcora_47lib_47toc_35generate_45typecheck_45code;
static Obj symcora_47lib_47toc_35extract_45typecheck_45body;
static Obj sym_58type;
static Obj symdeclare;
static Obj sym_58declare;
static Obj symcora_47lib_47infer_35tvar;
static Obj symbackquote;
static Obj symmacroexpand;
static Obj symcora_47lib_47infer_35check_45type_33;
static Obj symcora_47lib_47toc_35split_45type_45and_45code;
static Obj sympackage;
static Obj symbegin;
static Obj symexport;
static Obj symimport;
static Obj symcora_47lib_47toc_35handle_45import_45eagerly;
static Obj symcora_47lib_47toc_35generate_45c;
static Obj symcora_47init_35symbol_45_62string;
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
static Obj symcora_47init_35vector_45set_33;
static Obj symcora_47lib_47toc_35append_45result;
static Obj symcora_47init_35vector_45ref;
static Obj symcora_47lib_47toc_35collect_45lambda;
static Obj sym_37continuation;
static Obj symcora_47lib_47toc_35explicit_45stack;
static Obj symcora_47init_35caar;
static Obj symcora_47init_35pair_63;
static Obj symcora_47lib_47toc_35wrap_45var;
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
static Obj symdo;
static Obj symlet;
static Obj symif;
static Obj symcora_47init_35append;
static Obj symlambda;
static Obj sym_37builtin;
static Obj symcora_47init_35length;
static Obj symcora_47init_35map;
static Obj sym_37global;
static Obj symcora_47lib_47toc_35add_45symbol_45to_45list;
static Obj symcora_47init_35elem_63;
static Obj sym_37const;
static Obj symcora_47lib_47toc_35parse;
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
symcora_47lib_47toc_35compile_45to_45c = intern("cora/lib/toc#compile-to-c");
symcora_47init_35read_45file_45as_45sexp = intern("cora/init#read-file-as-sexp");
symcora_47lib_47toc_35preprocess = intern("cora/lib/toc#preprocess");
symcora_47lib_47toc_35split_45type_45and_45code_45toplevel = intern("cora/lib/toc#split-type-and-code-toplevel");
symcora_47lib_47infer_35_42typecheck_42 = intern("cora/lib/infer#*typecheck*");
symcora_47lib_47toc_35generate_45typecheck_45code = intern("cora/lib/toc#generate-typecheck-code");
symcora_47lib_47toc_35extract_45typecheck_45body = intern("cora/lib/toc#extract-typecheck-body");
sym_58type = intern(":type");
symdeclare = intern("declare");
sym_58declare = intern(":declare");
symcora_47lib_47infer_35tvar = intern("cora/lib/infer#tvar");
symbackquote = intern("backquote");
symmacroexpand = intern("macroexpand");
symcora_47lib_47infer_35check_45type_33 = intern("cora/lib/infer#check-type!");
symcora_47lib_47toc_35split_45type_45and_45code = intern("cora/lib/toc#split-type-and-code");
sympackage = intern("package");
symbegin = intern("begin");
symexport = intern("export");
symimport = intern("import");
symcora_47lib_47toc_35handle_45import_45eagerly = intern("cora/lib/toc#handle-import-eagerly");
symcora_47lib_47toc_35generate_45c = intern("cora/lib/toc#generate-c");
symcora_47init_35symbol_45_62string = intern("cora/init#symbol->string");
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
symcora_47init_35vector_45set_33 = intern("cora/init#vector-set!");
symcora_47lib_47toc_35append_45result = intern("cora/lib/toc#append-result");
symcora_47init_35vector_45ref = intern("cora/init#vector-ref");
symcora_47lib_47toc_35collect_45lambda = intern("cora/lib/toc#collect-lambda");
sym_37continuation = intern("%continuation");
symcora_47lib_47toc_35explicit_45stack = intern("cora/lib/toc#explicit-stack");
symcora_47init_35caar = intern("cora/init#caar");
symcora_47init_35pair_63 = intern("cora/init#pair?");
symcora_47lib_47toc_35wrap_45var = intern("cora/lib/toc#wrap-var");
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
symdo = intern("do");
symlet = intern("let");
symif = intern("if");
symcora_47init_35append = intern("cora/init#append");
symlambda = intern("lambda");
sym_37builtin = intern("%builtin");
symcora_47init_35length = intern("cora/init#length");
symcora_47init_35map = intern("cora/init#map");
sym_37global = intern("%global");
symcora_47lib_47toc_35add_45symbol_45to_45list = intern("cora/lib/toc#add-symbol-to-list");
symcora_47init_35elem_63 = intern("cora/init#elem?");
sym_37const = intern("%const");
symcora_47lib_47toc_35parse = intern("cora/lib/toc#parse");
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
PUSH_CONT_0(co, 1, clofun0);
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
Obj x139886475385895 = __arg1;
PUSH_CONT_0(co, 2, clofun0);
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
Obj x139886475386055 = __arg1;
PUSH_CONT_0(co, 3, clofun0);
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
Obj x139886475386215 = __arg1;
Obj x139886475386375 = primSet(co, symcora_47lib_47toc_35_42ns_45export_42, Nil);
Obj x139886475331943 = primSet(co, symcora_47lib_47toc_35assq, makeNative(37, clofun8, 2, 0));
Obj x139886475333031 = primSet(co, symcora_47lib_47toc_35foldl, makeNative(35, clofun8, 3, 0));
Obj x139886475269671 = primSet(co, symcora_47lib_47toc_35pos_45in_45list0, makeNative(33, clofun8, 3, 0));
Obj x139886475269959 = primSet(co, symcora_47lib_47toc_35index, makeNative(32, clofun8, 2, 0));
Obj x139886475271207 = primSet(co, symcora_47lib_47toc_35exist_45in_45env, makeNative(30, clofun8, 2, 0));
Obj x139886475271623 = makeCons(makeCString("primSet"), Nil);
Obj x139886475271655 = makeCons(MAKE_NUMBER(2), x139886475271623);
Obj x139886475271687 = makeCons(symset, x139886475271655);
Obj x139886475271975 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x139886475272007 = makeCons(MAKE_NUMBER(1), x139886475271975);
Obj x139886475272039 = makeCons(symcar, x139886475272007);
Obj x139886475243655 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x139886475243687 = makeCons(MAKE_NUMBER(1), x139886475243655);
Obj x139886475243719 = makeCons(symcdr, x139886475243687);
Obj x139886475244007 = makeCons(makeCString("makeCons"), Nil);
Obj x139886475244039 = makeCons(MAKE_NUMBER(2), x139886475244007);
Obj x139886475244071 = makeCons(symcons, x139886475244039);
Obj x139886475244359 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x139886475244391 = makeCons(MAKE_NUMBER(1), x139886475244359);
Obj x139886475244423 = makeCons(symcons_63, x139886475244391);
Obj x139886475244775 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x139886475244807 = makeCons(MAKE_NUMBER(2), x139886475244775);
Obj x139886475244839 = makeCons(sym_43, x139886475244807);
Obj x139886475245127 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x139886475245159 = makeCons(MAKE_NUMBER(2), x139886475245127);
Obj x139886475245191 = makeCons(sym_45, x139886475245159);
Obj x139886475245479 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x139886475245511 = makeCons(MAKE_NUMBER(2), x139886475245479);
Obj x139886475245543 = makeCons(sym_42, x139886475245511);
Obj x139886475245831 = makeCons(makeCString("primDiv"), Nil);
Obj x139886475245863 = makeCons(MAKE_NUMBER(2), x139886475245831);
Obj x139886475245895 = makeCons(sym_47, x139886475245863);
Obj x139886475246183 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x139886475246215 = makeCons(MAKE_NUMBER(2), x139886475246183);
Obj x139886475246247 = makeCons(sym_61, x139886475246215);
Obj x139886475246535 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x139886475246567 = makeCons(MAKE_NUMBER(2), x139886475246535);
Obj x139886475246599 = makeCons(sym_62, x139886475246567);
Obj x139886475246887 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x139886475246919 = makeCons(MAKE_NUMBER(2), x139886475246887);
Obj x139886475246951 = makeCons(sym_60, x139886475246919);
Obj x139886475247239 = makeCons(makeCString("primGenSym"), Nil);
Obj x139886475247271 = makeCons(MAKE_NUMBER(0), x139886475247239);
Obj x139886475247303 = makeCons(symgensym, x139886475247271);
Obj x139886475247591 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x139886475190279 = makeCons(MAKE_NUMBER(1), x139886475247591);
Obj x139886475190311 = makeCons(symsymbol_63, x139886475190279);
Obj x139886475190599 = makeCons(makeCString("primNot"), Nil);
Obj x139886475190631 = makeCons(MAKE_NUMBER(1), x139886475190599);
Obj x139886475190663 = makeCons(symnot, x139886475190631);
Obj x139886475190951 = makeCons(makeCString("primIsNumber"), Nil);
Obj x139886475190983 = makeCons(MAKE_NUMBER(1), x139886475190951);
Obj x139886475191015 = makeCons(syminteger_63, x139886475190983);
Obj x139886475191303 = makeCons(makeCString("primIsString"), Nil);
Obj x139886475191335 = makeCons(MAKE_NUMBER(1), x139886475191303);
Obj x139886475191367 = makeCons(symstring_63, x139886475191335);
Obj x139886475191399 = makeCons(x139886475191367, Nil);
Obj x139886475191431 = makeCons(x139886475191015, x139886475191399);
Obj x139886475191463 = makeCons(x139886475190663, x139886475191431);
Obj x139886475191495 = makeCons(x139886475190311, x139886475191463);
Obj x139886475191527 = makeCons(x139886475247303, x139886475191495);
Obj x139886475191559 = makeCons(x139886475246951, x139886475191527);
Obj x139886475191591 = makeCons(x139886475246599, x139886475191559);
Obj x139886475191623 = makeCons(x139886475246247, x139886475191591);
Obj x139886475191655 = makeCons(x139886475245895, x139886475191623);
Obj x139886475191687 = makeCons(x139886475245543, x139886475191655);
Obj x139886475191719 = makeCons(x139886475245191, x139886475191687);
Obj x139886475191751 = makeCons(x139886475244839, x139886475191719);
Obj x139886475191783 = makeCons(x139886475244423, x139886475191751);
Obj x139886475191815 = makeCons(x139886475244071, x139886475191783);
Obj x139886475191847 = makeCons(x139886475243719, x139886475191815);
Obj x139886475191879 = makeCons(x139886475272039, x139886475191847);
Obj x139886475191911 = makeCons(x139886475271687, x139886475191879);
Obj x139886475191943 = primSet(co, symcora_47lib_47toc_35_42builtin_45prims_42, x139886475191911);
Obj x139886475192455 = primSet(co, symcora_47lib_47toc_35builtin_63, makeNative(27, clofun8, 1, 0));
Obj x139886475193063 = primSet(co, symcora_47lib_47toc_35builtin_45_62name, makeNative(24, clofun8, 1, 0));
Obj x139886475193671 = primSet(co, symcora_47lib_47toc_35builtin_45_62args, makeNative(21, clofun8, 1, 0));
Obj x139886475182119 = primSet(co, symcora_47lib_47toc_35temp_45list, makeNative(20, clofun8, 2, 0));
Obj x139886475597863 = primSet(co, symcora_47lib_47toc_35parse, makeNative(38, clofun7, 3, 0));
Obj x139886475567335 = primSet(co, symcora_47lib_47toc_35union, makeNative(34, clofun7, 2, 0));
Obj x139886475569639 = primSet(co, symcora_47lib_47toc_35diff, makeNative(30, clofun7, 2, 0));
Obj x139886475461351 = primSet(co, symcora_47lib_47toc_35convert_45protect_63, makeNative(24, clofun7, 1, 0));
Obj x139886474651463 = primSet(co, symcora_47lib_47toc_35free_45vars, makeNative(4, clofun7, 1, 0));
Obj x139886474552167 = primSet(co, symcora_47lib_47toc_35closure_45convert, makeNative(42, clofun6, 2, 0));
Obj x139886474552583 = primSet(co, symcora_47lib_47toc_35id, makeNative(41, clofun6, 1, 0));
Obj x139886475984647 = primSet(co, symcora_47lib_47toc_35tailify, makeNative(25, clofun6, 2, 0));
Obj x139886475567463 = primSet(co, symcora_47lib_47toc_35tailify_45list, makeNative(18, clofun6, 3, 0));
Obj x139886475464199 = primSet(co, symcora_47lib_47toc_35explicit_45stack, makeNative(3, clofun6, 2, 0));
Obj x139886475243527 = primSet(co, symcora_47lib_47toc_35collect_45lambda, makeNative(44, clofun5, 2, 0));
Obj x139886475245703 = primSet(co, symcora_47lib_47toc_35append_45result, makeNative(40, clofun5, 2, 0));
Obj x139886475247175 = primSet(co, symcora_47lib_47toc_35wrap_45var, makeNative(38, clofun5, 2, 0));
Obj x139886475183367 = primSet(co, symcora_47lib_47toc_35generate_45call_45list, makeNative(26, clofun5, 4, 0));
Obj x139886475184391 = primSet(co, symcora_47lib_47toc_35add_45symbol_45to_45list, makeNative(23, clofun5, 2, 0));
Obj x139886475570439 = primSet(co, symcora_47lib_47toc_35generate_45inst, makeNative(40, clofun3, 4, 0));
Obj x139886475463175 = primSet(co, symcora_47lib_47toc_35generate_45cont, makeNative(16, clofun3, 3, 0));
Obj x139886475383879 = primSet(co, symcora_47lib_47toc_35generate_45inst_45list_45h, makeNative(12, clofun3, 5, 0));
Obj x139886475384359 = primSet(co, symcora_47lib_47toc_35generate_45inst_45list, makeNative(11, clofun3, 4, 0));
Obj x139886475384743 = primSet(co, symcora_47lib_47toc_35_42mod_45num_42, MAKE_NUMBER(50));
Obj x139886475385831 = primSet(co, symcora_47lib_47toc_35generate_45group_45name, makeNative(9, clofun3, 3, 0));
Obj x139886475330023 = primSet(co, symcora_47lib_47toc_35code_45gen_45func_45declare, makeNative(5, clofun3, 3, 0));
Obj x139886475333319 = primSet(co, symcora_47lib_47toc_35local_45from_45params, makeNative(48, clofun2, 3, 0));
Obj x139886475269543 = primSet(co, symcora_47lib_47toc_35local_45from_45cont, makeNative(43, clofun2, 3, 0));
Obj x139886475271847 = primSet(co, symcora_47lib_47toc_35generate_45call_45args_45reverse, makeNative(41, clofun2, 4, 0));
Obj x139886474650055 = primSet(co, symcora_47lib_47toc_35code_45gen_45toplevel, makeNative(30, clofun2, 3, 0));
Obj x139886474650599 = primSet(co, symcora_47lib_47toc_35parse_45pass, makeNative(29, clofun2, 2, 0));
Obj x139886474651111 = primSet(co, symcora_47lib_47toc_35closure_45convert_45pass, makeNative(28, clofun2, 1, 0));
Obj x139886474651559 = primSet(co, symcora_47lib_47toc_35tailify_45pass, makeNative(27, clofun2, 1, 0));
Obj x139886474652135 = primSet(co, symcora_47lib_47toc_35explicit_45stack_45pass, makeNative(26, clofun2, 1, 0));
Obj x139886474642151 = primSet(co, symcora_47lib_47toc_35collect_45lambda_45pass, makeNative(20, clofun2, 1, 0));
Obj x139886474643911 = primSet(co, symcora_47lib_47toc_35rewrite_45_45_62macro, makeNative(19, clofun2, 2, 0));
PUSH_CONT_0(co, 4, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = sym_45_62;
__arg2 = makeNative(16, clofun2, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x139886474644935 = __arg1;
Obj x139886474580551 = primSet(co, symcora_47lib_47toc_35compile, makeNative(10, clofun2, 2, 0));
Obj x139886474582439 = primSet(co, symcora_47lib_47toc_35for_45each, makeNative(8, clofun2, 2, 0));
Obj x139886474551847 = primSet(co, symcora_47lib_47toc_35generate_45jumptable, makeNative(4, clofun2, 3, 0));
Obj x139886474307143 = primSet(co, symcora_47lib_47toc_35generate_45toplevel_45group, makeNative(32, clofun1, 3, 0));
Obj x139886474257575 = primSet(co, symcora_47lib_47toc_35group_45by_45mod_45h, makeNative(28, clofun1, 4, 0));
Obj x139886474141703 = primSet(co, symcora_47lib_47toc_35generate_45entry, makeNative(15, clofun1, 2, 0));
Obj x139886474144327 = primSet(co, symcora_47lib_47toc_35generate_45c, makeNative(2, clofun1, 3, 0));
Obj x139886476799943 = primSet(co, symcora_47lib_47toc_35handle_45import_45eagerly, makeNative(46, clofun0, 1, 0));
Obj x139886477022407 = primSet(co, symcora_47lib_47toc_35split_45type_45and_45code, makeNative(41, clofun0, 4, 0));
Obj x139886476724135 = primSet(co, symcora_47lib_47toc_35extract_45typecheck_45body, makeNative(32, clofun0, 2, 0));
Obj x139886476724487 = primSet(co, symcora_47lib_47toc_35generate_45typecheck_45code, makeNative(31, clofun0, 2, 0));
Obj x139886476145671 = primSet(co, symcora_47lib_47toc_35split_45type_45and_45code_45toplevel, makeNative(22, clofun0, 1, 0));
Obj x139886476146119 = primSet(co, symcora_47lib_47infer_35_42typecheck_42, False);
Obj x139886476106151 = primSet(co, symcora_47lib_47toc_35preprocess, makeNative(12, clofun0, 1, 0));
Obj x139886476080583 = primSet(co, symcora_47lib_47toc_35compile_45to_45c, makeNative(5, clofun0, 2, 0));
__nargs = 2;
__arg1 = x139886476080583;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj from = __arg1;
Obj to = __arg2;
Obj x139886476107047 = primGenSym();
Obj globals = x139886476107047;
Obj x139886476107303 = primSet(co, globals, Nil);
pushCont(co, 6, clofun0, 3, from, to, globals);
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
Obj x139886476107655 = __arg1;
Obj from= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 7, clofun0, 3, x139886476107655, to, globals);
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
Obj x139886476079463 = __arg1;
Obj x139886476107655= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 8, clofun0, 3, x139886476107655, to, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x139886476079463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x139886476079495 = __arg1;
Obj x139886476107655= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 9, clofun0, 2, to, globals);
__nargs = 2;
__arg0 = x139886476107655;
__arg1 = x139886476079495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x139886476079527 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj bc = x139886476079527;
pushCont(co, 10, clofun0, 2, bc, globals);
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
Obj x139886476079911 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stream = x139886476079911;
pushCont(co, 11, clofun0, 1, stream);
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
Obj x139886476080295 = __arg1;
Obj stream= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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
PUSH_CONT_0(co, 13, clofun0);
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
Obj x139886476146663 = __arg1;
Obj sexp = x139886476146663;
Obj x139886476185639 = makeNative(21, clofun0, 1, 1, sexp);
pushCont(co, 14, clofun0, 2, x139886476185639, sexp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35pair_63);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x139886476148455 = __arg1;
Obj x139886476185639= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x139886476148455) {
Obj x139886476103975 = PRIM_CAR(sexp);
Obj x139886476104007 = PRIM_EQ(symbegin, x139886476103975);
if (True == x139886476104007) {
pushCont(co, 19, clofun0, 1, sexp);
__nargs = 2;
__arg0 = x139886476185639;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 17, clofun0, 1, sexp);
__nargs = 2;
__arg0 = x139886476185639;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 15, clofun0, 1, sexp);
__nargs = 2;
__arg0 = x139886476185639;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj x139886476105671 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 16, clofun0, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x139886476106055 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code_45toplevel);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x139886476105287 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 18, clofun0, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x139886476105575 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code_45toplevel);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x139886476104071 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 20, clofun0, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x139886476105191 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code_45toplevel);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x139886476185959 = __arg1;
if (True == x139886476185959) {
Obj x139886476147655 = PRIM_CDR(closureRef(co, 0));
__nargs = 2;
__arg1 = x139886476147655;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886476147879 = makeCons(closureRef(co, 0), Nil);
__nargs = 2;
__arg1 = x139886476147879;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label22:
{
Obj x139886476185799 = __arg1;
Obj x139886476187271 = makeNative(25, clofun0, 0, 1, x139886476185799);
Obj x139886476188135 = PRIM_ISCONS(x139886476185799);
if (True == x139886476188135) {
Obj x139886476188615 = PRIM_CAR(x139886476185799);
Obj x139886476188647 = PRIM_EQ(sympackage, x139886476188615);
if (True == x139886476188647) {
Obj x139886476189319 = PRIM_CDR(x139886476185799);
Obj more = x139886476189319;
Obj x139886476144743 = makeCons(sympackage, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35extract_45typecheck_45body);
__arg1 = x139886476144743;
__arg2 = makeNative(23, clofun0, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476187271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476187271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj body = __arg1;
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = body;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(24, clofun0, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj type = __arg1;
Obj code = __arg2;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45typecheck_45code);
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x139886476188871 = makeNative(28, clofun0, 0, 1, closureRef(co, 0));
Obj x139886476725575 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886476725575) {
Obj x139886476725831 = PRIM_CAR(closureRef(co, 0));
Obj x139886476725863 = PRIM_EQ(symbegin, x139886476725831);
if (True == x139886476725863) {
Obj x139886476726055 = PRIM_CDR(closureRef(co, 0));
Obj more = x139886476726055;
Obj x139886476726215 = makeCons(symbegin, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35extract_45typecheck_45body);
__arg1 = x139886476726215;
__arg2 = makeNative(26, clofun0, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476188871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476188871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj body = __arg1;
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = body;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(27, clofun0, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj type = __arg1;
Obj code = __arg2;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45typecheck_45code);
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x139886476725127 = makeCons(closureRef(co, 0), Nil);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = x139886476725127;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(29, clofun0, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj type = __arg1;
Obj code = __arg2;
PUSH_CONT_0(co, 30, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45typecheck_45code);
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x139886476725351 = __arg1;
Obj x139886476725383 = makeCons(symbegin, x139886476725351);
__nargs = 2;
__arg1 = x139886476725383;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj type = __arg1;
Obj code = __arg2;
if (True == globalRef(symcora_47lib_47infer_35_42typecheck_42)) {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35append);
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = code;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label32:
{
Obj x139886476186727 = __arg1;
Obj x139886476186759 = __arg2;
Obj x139886476189095 = makeNative(34, clofun0, 0, 2, x139886476186727, x139886476186759);
Obj x139886476799303 = PRIM_ISCONS(x139886476186727);
if (True == x139886476799303) {
Obj x139886476799591 = PRIM_CAR(x139886476186727);
Obj x139886476799687 = PRIM_EQ(sympackage, x139886476799591);
if (True == x139886476799687) {
Obj x139886476799911 = PRIM_CDR(x139886476186727);
Obj x139886476799975 = PRIM_ISCONS(x139886476799911);
if (True == x139886476799975) {
Obj x139886476723335 = PRIM_CDR(x139886476186727);
Obj x139886476723367 = PRIM_CAR(x139886476723335);
Obj name = x139886476723367;
Obj x139886476723591 = PRIM_CDR(x139886476186727);
Obj x139886476723623 = PRIM_CDR(x139886476723591);
Obj more = x139886476723623;
pushCont(co, 33, clofun0, 1, name);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35extract_45typecheck_45body);
__arg1 = more;
__arg2 = x139886476186759;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476189095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476189095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476189095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x139886476723847 = __arg1;
Obj name= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476723879 = makeCons(name, x139886476723847);
Obj x139886476723911 = makeCons(sympackage, x139886476723879);
__nargs = 2;
__arg1 = x139886476723911;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x139886476147143 = makeNative(36, clofun0, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x139886477008647 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886477008647) {
Obj x139886476795975 = PRIM_CAR(closureRef(co, 0));
Obj x139886476796007 = PRIM_ISCONS(x139886476795975);
if (True == x139886476796007) {
Obj x139886476796359 = PRIM_CAR(closureRef(co, 0));
Obj x139886476796391 = PRIM_CAR(x139886476796359);
Obj x139886476796423 = PRIM_EQ(symimport, x139886476796391);
if (True == x139886476796423) {
Obj x139886476796903 = PRIM_CAR(closureRef(co, 0));
Obj x139886476796935 = PRIM_CDR(x139886476796903);
Obj x139886476796967 = PRIM_ISCONS(x139886476796935);
if (True == x139886476796967) {
Obj x139886476797383 = PRIM_CAR(closureRef(co, 0));
Obj x139886476797415 = PRIM_CDR(x139886476797383);
Obj x139886476797447 = PRIM_CAR(x139886476797415);
Obj pkg = x139886476797447;
Obj x139886476797863 = PRIM_CAR(closureRef(co, 0));
Obj x139886476797895 = PRIM_CDR(x139886476797863);
Obj x139886476797927 = PRIM_CDR(x139886476797895);
Obj x139886476797959 = PRIM_EQ(Nil, x139886476797927);
if (True == x139886476797959) {
Obj x139886476798215 = PRIM_CDR(closureRef(co, 0));
Obj more = x139886476798215;
Obj x139886476798471 = makeCons(pkg, Nil);
Obj x139886476798503 = makeCons(symimport, x139886476798471);
pushCont(co, 35, clofun0, 1, x139886476798503);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35extract_45typecheck_45body);
__arg1 = more;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476147143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476147143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476147143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476147143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476147143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj x139886476798663 = __arg1;
Obj x139886476798503= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476798695 = makeCons(x139886476798503, x139886476798663);
__nargs = 2;
__arg1 = x139886476798695;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj x139886476106407 = makeNative(38, clofun0, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x139886477006407 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886477006407) {
Obj x139886477006695 = PRIM_CAR(closureRef(co, 0));
Obj x139886477006759 = PRIM_ISCONS(x139886477006695);
if (True == x139886477006759) {
Obj x139886477007111 = PRIM_CAR(closureRef(co, 0));
Obj x139886477007143 = PRIM_CAR(x139886477007111);
Obj x139886477007175 = PRIM_EQ(symexport, x139886477007143);
if (True == x139886477007175) {
Obj x139886477007463 = PRIM_CAR(closureRef(co, 0));
Obj x139886477007495 = PRIM_CDR(x139886477007463);
Obj symbols = x139886477007495;
Obj x139886477007751 = PRIM_CDR(closureRef(co, 0));
Obj more = x139886477007751;
Obj x139886477007911 = makeCons(symexport, symbols);
pushCont(co, 37, clofun0, 1, x139886477007911);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35extract_45typecheck_45body);
__arg1 = more;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476106407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476106407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476106407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj x139886477008135 = __arg1;
Obj x139886477007911= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886477008167 = makeCons(x139886477007911, x139886477008135);
__nargs = 2;
__arg1 = x139886477008167;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
Obj x139886476080903 = makeNative(40, clofun0, 0, 2, closureRef(co, 1), closureRef(co, 0));
Obj x139886477004871 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886477004871) {
Obj x139886477005223 = PRIM_CAR(closureRef(co, 0));
Obj x139886477005287 = PRIM_EQ(symbegin, x139886477005223);
if (True == x139886477005287) {
Obj x139886477005479 = PRIM_CDR(closureRef(co, 0));
Obj more = x139886477005479;
PUSH_CONT_0(co, 39, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35extract_45typecheck_45body);
__arg1 = more;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476080903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476080903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x139886477005895 = __arg1;
Obj x139886477005927 = makeCons(symbegin, x139886477005895);
__nargs = 2;
__arg1 = x139886477005927;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
__nargs = 2;
__arg0 = closureRef(co, 0);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x139886476104999 = __arg1;
Obj x139886476105031 = __arg2;
Obj x139886476105063 = __arg3;
Obj x139886476105095 = co->args[4];
Obj x139886477021479 = PRIM_EQ(Nil, x139886476104999);
if (True == x139886477021479) {
pushCont(co, 44, clofun0, 2, x139886476105063, x139886476105095);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = x139886476105031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886476082887 = makeNative(42, clofun0, 0, 4, x139886476104999, x139886476105031, x139886476105063, x139886476105095);
Obj x139886476722695 = PRIM_ISCONS(x139886476104999);
if (True == x139886476722695) {
Obj x139886476722919 = PRIM_CAR(x139886476104999);
Obj x139886476722951 = PRIM_ISCONS(x139886476722919);
if (True == x139886476722951) {
Obj x139886477021287 = PRIM_CAR(x139886476104999);
Obj x139886477021319 = PRIM_CAR(x139886477021287);
Obj x139886477021351 = PRIM_EQ(sym_58type, x139886477021319);
if (True == x139886477021351) {
Obj x139886477021607 = PRIM_CAR(x139886476104999);
Obj x139886477021671 = PRIM_CDR(x139886477021607);
Obj exp = x139886477021671;
Obj x139886477021863 = PRIM_CDR(x139886476104999);
Obj more = x139886477021863;
Obj x139886477022087 = makeCons(symbegin, exp);
Obj x139886477022119 = makeCons(x139886477022087, x139886476105031);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = x139886477022119;
__arg3 = x139886476105063;
co->args[4] = x139886476105095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476082887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476082887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476082887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label42:
{
Obj x139886475596263 = makeNative(43, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x139886477023943 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886477023943) {
Obj x139886477024199 = PRIM_CAR(closureRef(co, 0));
Obj x139886477024231 = PRIM_ISCONS(x139886477024199);
if (True == x139886477024231) {
Obj x139886477024551 = PRIM_CAR(closureRef(co, 0));
Obj x139886477024583 = PRIM_CAR(x139886477024551);
Obj x139886477024615 = PRIM_EQ(sym_58declare, x139886477024583);
if (True == x139886477024615) {
Obj x139886477024871 = PRIM_CAR(closureRef(co, 0));
Obj x139886477024903 = PRIM_CDR(x139886477024871);
Obj exp = x139886477024903;
Obj x139886477025095 = PRIM_CDR(closureRef(co, 0));
Obj more = x139886477025095;
Obj x139886476722215 = makeCons(symdeclare, exp);
Obj x139886476722279 = makeCons(x139886476722215, closureRef(co, 1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = x139886476722279;
__arg3 = closureRef(co, 2);
co->args[4] = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475596263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475596263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475596263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj x139886477022183 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886477022183) {
Obj x139886477022375 = PRIM_CAR(closureRef(co, 0));
Obj exp = x139886477022375;
Obj x139886477022567 = PRIM_CDR(closureRef(co, 0));
Obj more = x139886477022567;
Obj x139886477023111 = makeCons(exp, Nil);
Obj x139886477023143 = makeCons(symbackquote, x139886477023111);
Obj x139886477023175 = makeCons(x139886477023143, Nil);
Obj x139886477023207 = makeCons(symmacroexpand, x139886477023175);
Obj x139886477023367 = makeCons(symcora_47lib_47infer_35tvar, Nil);
Obj x139886477023399 = makeCons(x139886477023367, Nil);
Obj x139886477023431 = makeCons(x139886477023207, x139886477023399);
Obj x139886477023463 = makeCons(symcora_47lib_47infer_35check_45type_33, x139886477023431);
Obj x139886477023527 = makeCons(x139886477023463, closureRef(co, 1));
Obj x139886477023655 = makeCons(exp, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = x139886477023527;
__arg3 = x139886477023655;
co->args[4] = closureRef(co, 3);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj x139886477021639 = __arg1;
Obj x139886476105063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476105095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun0, 2, x139886476105095, x139886477021639);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = x139886476105063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x139886477021735 = __arg1;
Obj x139886476105095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886477021639= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = x139886476105095;
__arg1 = x139886477021639;
__arg2 = x139886477021735;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x139886476080999 = __arg1;
Obj x139886476081959 = makeNative(47, clofun0, 0, 1, x139886476080999);
Obj x139886476798631 = PRIM_ISCONS(x139886476080999);
if (True == x139886476798631) {
Obj x139886476798855 = PRIM_CAR(x139886476080999);
Obj x139886476798887 = PRIM_EQ(sympackage, x139886476798855);
if (True == x139886476798887) {
Obj x139886476799111 = PRIM_CDR(x139886476080999);
Obj x139886476799143 = PRIM_ISCONS(x139886476799111);
if (True == x139886476799143) {
Obj x139886476799367 = PRIM_CDR(x139886476080999);
Obj x139886476799399 = PRIM_CAR(x139886476799367);
Obj x139886476799623 = PRIM_CDR(x139886476080999);
Obj x139886476799655 = PRIM_CDR(x139886476799623);
Obj remain = x139886476799655;
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
__arg0 = x139886476081959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476081959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476081959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj x139886476186087 = makeNative(48, clofun0, 0, 1, closureRef(co, 0));
Obj x139886476797799 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886476797799) {
Obj x139886476798055 = PRIM_CAR(closureRef(co, 0));
Obj x139886476798087 = PRIM_EQ(symbegin, x139886476798055);
if (True == x139886476798087) {
Obj x139886476798279 = PRIM_CDR(closureRef(co, 0));
Obj remain = x139886476798279;
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
__arg0 = x139886476186087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476186087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj x139886476187879 = makeNative(49, clofun0, 0, 1, closureRef(co, 0));
Obj x139886476796199 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886476796199) {
Obj x139886476796455 = PRIM_CAR(closureRef(co, 0));
Obj x139886476796487 = PRIM_ISCONS(x139886476796455);
if (True == x139886476796487) {
Obj x139886476796807 = PRIM_CAR(closureRef(co, 0));
Obj x139886476796839 = PRIM_CAR(x139886476796807);
Obj x139886476796871 = PRIM_EQ(symexport, x139886476796839);
if (True == x139886476796871) {
Obj x139886476797127 = PRIM_CAR(closureRef(co, 0));
Obj x139886476797159 = PRIM_CDR(x139886476797127);
Obj x139886476797351 = PRIM_CDR(closureRef(co, 0));
Obj remain = x139886476797351;
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
__arg0 = x139886476187879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476187879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476187879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj x139886476144967 = makeNative(1, clofun1, 0, 0);
Obj x139886474145639 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886474145639) {
Obj x139886474065383 = PRIM_CAR(closureRef(co, 0));
Obj x139886474065415 = PRIM_ISCONS(x139886474065383);
if (True == x139886474065415) {
Obj x139886474065831 = PRIM_CAR(closureRef(co, 0));
Obj x139886474065863 = PRIM_CAR(x139886474065831);
Obj x139886474065895 = PRIM_EQ(symimport, x139886474065863);
if (True == x139886474065895) {
Obj x139886474066279 = PRIM_CAR(closureRef(co, 0));
Obj x139886474066311 = PRIM_CDR(x139886474066279);
Obj x139886474066343 = PRIM_ISCONS(x139886474066311);
if (True == x139886474066343) {
Obj x139886474066695 = PRIM_CAR(closureRef(co, 0));
Obj x139886474066727 = PRIM_CDR(x139886474066695);
Obj x139886474066759 = PRIM_CAR(x139886474066727);
Obj pkg = x139886474066759;
Obj x139886474067175 = PRIM_CAR(closureRef(co, 0));
Obj x139886474067207 = PRIM_CDR(x139886474067175);
Obj x139886474067239 = PRIM_CDR(x139886474067207);
Obj x139886474067271 = PRIM_EQ(Nil, x139886474067239);
if (True == x139886474067271) {
Obj x139886474067527 = PRIM_CDR(closureRef(co, 0));
Obj remain = x139886474067527;
pushCont(co, 0, clofun1, 1, remain);
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
__arg0 = x139886476144967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476144967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476144967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476144967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476144967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
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
Obj x139886474067783 = __arg1;
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj to = __arg1;
Obj bc = __arg2;
Obj globals = __arg3;
pushCont(co, 3, clofun1, 3, bc, globals, to);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = Nil;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x139886474142087 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups = x139886474142087;
pushCont(co, 4, clofun1, 3, globals, to, groups);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x139886474142247 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj maxid = x139886474142247;
pushCont(co, 5, clofun1, 4, globals, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("#include \"types.h\"\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x139886474142439 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 6, clofun1, 4, globals, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("#include \"runtime.h\"\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x139886474142599 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 7, clofun1, 4, globals, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(12, clofun1, 1, 2, maxid, to);
__arg2 = groups;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x139886474143431 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 8, clofun1, 4, globals, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x139886474143687 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 9, clofun1, 3, to, maxid, groups);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35value);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x139886474143911 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 10, clofun1, 3, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45entry);
__arg1 = to;
__arg2 = x139886474143911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x139886474143943 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(11, clofun1, 1, 2, to, maxid);
__arg2 = groups;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
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
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj group = __arg1;
PUSH_CONT_0(co, 13, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x139886474143175 = __arg1;
PUSH_CONT_0(co, 14, clofun1);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35code_45gen_45func_45declare);
__arg1 = closureRef(co, 1);
__arg2 = x139886474143175;
__arg3 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x139886474143303 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 1);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj to = __arg1;
Obj globals = __arg2;
pushCont(co, 16, clofun1, 2, globals, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(25, clofun1, 1, 1, to);
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x139886474258727 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 17, clofun1, 2, globals, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("void entry(struct Cora *co) {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x139886474258887 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 18, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(19, clofun1, 1, 1, to);
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x139886474260391 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("clofun0(co);\n}\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj sym = __arg1;
pushCont(co, 20, clofun1, 1, sym);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = makeCString("sym");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x139886474259399 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 21, clofun1, 1, sym);
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

label21:
{
Obj x139886474259623 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 22, clofun1, 1, sym);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = makeCString(" = intern(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x139886474259879 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 23, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35symbol_45_62string);
__arg1 = sym;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x139886474260199 = __arg1;
PUSH_CONT_0(co, 24, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = x139886474260199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x139886474260231 = __arg1;
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

label25:
{
Obj sym = __arg1;
pushCont(co, 26, clofun1, 1, sym);
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

label26:
{
Obj x139886474258247 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 27, clofun1);
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

label27:
{
Obj x139886474258567 = __arg1;
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

label28:
{
Obj x139886476186823 = __arg1;
Obj x139886476187015 = __arg2;
Obj x139886476187047 = __arg3;
Obj x139886476187079 = co->args[4];
Obj x139886474307687 = PRIM_EQ(Nil, x139886476187079);
if (True == x139886474307687) {
pushCont(co, 30, clofun1, 2, x139886476187047, x139886476186823);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = x139886476187047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886474309063 = PRIM_ISCONS(x139886476187079);
if (True == x139886474309063) {
Obj x139886474309415 = PRIM_CAR(x139886476187079);
Obj bc = x139886474309415;
Obj x139886474256487 = PRIM_CDR(x139886476187079);
Obj more = x139886474256487;
Obj x139886474256679 = PRIM_EQ(x139886476187015, globalRef(symcora_47lib_47toc_35_42mod_45num_42));
if (True == x139886474256679) {
pushCont(co, 29, clofun1, 3, x139886476186823, bc, more);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = x139886476187047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886474257383 = PRIM_ADD(x139886476187015, MAKE_NUMBER(1));
Obj x139886474257479 = makeCons(bc, x139886476187047);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = x139886476186823;
__arg2 = x139886474257383;
__arg3 = x139886474257479;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label29:
{
Obj x139886474257095 = __arg1;
Obj x139886476186823= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886474257127 = makeCons(x139886474257095, x139886476186823);
Obj x139886474257223 = makeCons(bc, more);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = x139886474257127;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = x139886474257223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x139886474308199 = __arg1;
Obj x139886476187047= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476186823= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886474308231 = primNot(x139886474308199);
if (True == x139886474308231) {
pushCont(co, 31, clofun1, 1, x139886476186823);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = x139886476187047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = x139886476186823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj x139886474308775 = __arg1;
Obj x139886476186823= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886474308807 = makeCons(x139886474308775, x139886476186823);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = x139886474308807;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj to = __arg1;
Obj group = __arg2;
Obj maxid = __arg3;
pushCont(co, 33, clofun1, 3, maxid, group, to);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x139886474552391 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 34, clofun1, 3, maxid, group, to);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35code_45gen_45func_45declare);
__arg1 = to;
__arg2 = x139886474552391;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x139886474552423 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 35, clofun1, 3, maxid, group, to);
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

label35:
{
Obj x139886474552679 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 36, clofun1, 3, maxid, group, to);
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

label36:
{
Obj x139886474552871 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 37, clofun1, 3, maxid, group, to);
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

label37:
{
Obj x139886474553095 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 38, clofun1, 3, maxid, group, to);
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

label38:
{
Obj x139886474553255 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 39, clofun1, 3, maxid, group, to);
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

label39:
{
Obj x139886474553511 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 40, clofun1, 3, maxid, group, to);
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

label40:
{
Obj x139886474553735 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 41, clofun1, 3, maxid, group, to);
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

label41:
{
Obj x139886474553895 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 42, clofun1, 3, maxid, group, to);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x139886474554279 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 43, clofun1, 3, maxid, group, to);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45jumptable);
__arg1 = to;
__arg2 = MAKE_NUMBER(0);
__arg3 = x139886474554279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x139886474554311 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 44, clofun1, 3, maxid, group, to);
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

label44:
{
Obj x139886474554631 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 45, clofun1, 3, maxid, group, to);
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

label45:
{
Obj x139886474554791 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 46, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(3, clofun2, 1, 2, to, maxid);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x139886474555367 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 47, clofun1, 1, to);
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

label47:
{
Obj x139886474305767 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 48, clofun1, 1, to);
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

label48:
{
Obj x139886474306055 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun1, 1, to);
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

label49:
{
Obj x139886474306215 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 0, clofun2, 1, to);
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
Obj x139886474306503 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 1, clofun2, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("co->args[2] = __arg2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x139886474306663 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 2, clofun2, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("co->args[3] = __arg3;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x139886474306983 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("\n}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
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
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj to = __arg1;
Obj i = __arg2;
Obj n = __arg3;
Obj x139886474583047 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == x139886474583047) {
pushCont(co, 7, clofun2, 2, to, n);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("&&label0");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886474583623 = PRIM_LT(i, n);
if (True == x139886474583623) {
pushCont(co, 5, clofun2, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString(", &&label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}
}

label5:
{
Obj x139886474583943 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 6, clofun2, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = to;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x139886474551367 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886474551687 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45jumptable);
__arg1 = to;
__arg2 = x139886474551687;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x139886474583239 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45jumptable);
__arg1 = to;
__arg2 = MAKE_NUMBER(1);
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x139886476147399 = __arg1;
Obj x139886476147527 = __arg2;
Obj x139886474581191 = PRIM_EQ(Nil, x139886476147527);
if (True == x139886474581191) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886474581351 = PRIM_ISCONS(x139886476147527);
if (True == x139886474581351) {
Obj x139886474581607 = PRIM_CAR(x139886476147527);
Obj x = x139886474581607;
Obj x139886474581895 = PRIM_CDR(x139886476147527);
Obj y = x139886474581895;
pushCont(co, 9, clofun2, 2, x139886476147399, y);
__nargs = 2;
__arg0 = x139886476147399;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label9:
{
Obj x139886474582119 = __arg1;
Obj x139886476147399= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = x139886476147399;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj globals = __arg1;
Obj exp = __arg2;
pushCont(co, 11, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35parse_45pass);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x139886474580391 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 12, clofun2);
__nargs = 2;
__arg0 = x139886474580391;
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x139886474580423 = __arg1;
PUSH_CONT_0(co, 13, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert_45pass);
__arg1 = x139886474580423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x139886474580455 = __arg1;
PUSH_CONT_0(co, 14, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45pass);
__arg1 = x139886474580455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x139886474580487 = __arg1;
PUSH_CONT_0(co, 15, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack_45pass);
__arg1 = x139886474580487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x139886474580519 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda_45pass);
__arg1 = x139886474580519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj exp = __arg1;
pushCont(co, 17, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35cadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x139886474644423 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj obj = x139886474644423;
pushCont(co, 18, clofun2, 1, obj);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35cddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x139886474644775 = __arg1;
Obj obj= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fns = x139886474644775;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35rewrite_45_45_62macro);
__arg1 = obj;
__arg2 = fns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x139886476186151 = __arg1;
Obj x139886476186183 = __arg2;
Obj x139886474642727 = PRIM_EQ(Nil, x139886476186183);
if (True == x139886474642727) {
__nargs = 2;
__arg1 = x139886476186151;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886474642983 = PRIM_ISCONS(x139886476186183);
if (True == x139886474642983) {
Obj x139886474643143 = PRIM_CAR(x139886476186183);
Obj hd = x139886474643143;
Obj x139886474643367 = PRIM_CDR(x139886476186183);
Obj more = x139886474643367;
Obj x139886474643655 = makeCons(x139886476186151, Nil);
Obj x139886474643687 = makeCons(hd, x139886474643655);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35rewrite_45_45_62macro);
__arg1 = x139886474643687;
__arg2 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label20:
{
Obj exp = __arg1;
pushCont(co, 21, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35vector);
__arg1 = MAKE_NUMBER(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x139886474652615 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v = x139886474652615;
pushCont(co, 22, clofun2, 2, exp, v);
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

label22:
{
Obj x139886474652903 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 23, clofun2, 2, exp, v);
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

label23:
{
Obj x139886474653191 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 24, clofun2, 1, v);
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

label24:
{
Obj x139886474653447 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1 = x139886474653447;
Obj x139886474641767 = makeCons(e1, Nil);
Obj x139886474641799 = makeCons(Nil, x139886474641767);
Obj x139886474641831 = makeCons(Nil, x139886474641799);
Obj x139886474641863 = makeCons(symlambda, x139886474641831);
pushCont(co, 25, clofun2, 1, v);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = x139886474641863;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x139886474641927 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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

label26:
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

label27:
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

label28:
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

label29:
{
Obj globals = __arg1;
Obj exp = __arg2;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = Nil;
__arg2 = globals;
__arg3 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x139886476081543 = __arg1;
Obj x139886476081575 = __arg2;
Obj x139886476081607 = __arg3;
Obj x139886475981511 = makeNative(38, clofun2, 0, 1, x139886476081575);
Obj x139886475244903 = PRIM_ISCONS(x139886476081575);
if (True == x139886475244903) {
Obj x139886475245319 = PRIM_CAR(x139886476081575);
Obj label = x139886475245319;
Obj x139886475245927 = PRIM_CDR(x139886476081575);
Obj x139886475245959 = PRIM_ISCONS(x139886475245927);
if (True == x139886475245959) {
Obj x139886475246471 = PRIM_CDR(x139886476081575);
Obj x139886475246503 = PRIM_CAR(x139886475246471);
Obj x139886475246631 = PRIM_ISCONS(x139886475246503);
if (True == x139886475246631) {
Obj x139886475190375 = PRIM_CDR(x139886476081575);
Obj x139886475190407 = PRIM_CAR(x139886475190375);
Obj x139886475190439 = PRIM_CAR(x139886475190407);
Obj x139886475190471 = PRIM_EQ(symlambda, x139886475190439);
if (True == x139886475190471) {
Obj x139886475192007 = PRIM_CDR(x139886476081575);
Obj x139886475192039 = PRIM_CAR(x139886475192007);
Obj x139886475192167 = PRIM_CDR(x139886475192039);
Obj x139886475192199 = PRIM_ISCONS(x139886475192167);
if (True == x139886475192199) {
Obj x139886475192775 = PRIM_CDR(x139886476081575);
Obj x139886475192871 = PRIM_CAR(x139886475192775);
Obj x139886475192935 = PRIM_CDR(x139886475192871);
Obj x139886475192999 = PRIM_CAR(x139886475192935);
Obj params = x139886475192999;
Obj x139886475193767 = PRIM_CDR(x139886476081575);
Obj x139886475193799 = PRIM_CAR(x139886475193767);
Obj x139886475193927 = PRIM_CDR(x139886475193799);
Obj x139886475193959 = PRIM_CDR(x139886475193927);
Obj x139886475193991 = PRIM_ISCONS(x139886475193959);
if (True == x139886475193991) {
Obj x139886475182599 = PRIM_CDR(x139886476081575);
Obj x139886475182631 = PRIM_CAR(x139886475182599);
Obj x139886475182663 = PRIM_CDR(x139886475182631);
Obj x139886475182791 = PRIM_CDR(x139886475182663);
Obj x139886475182823 = PRIM_CAR(x139886475182791);
Obj actives = x139886475182823;
Obj x139886475183783 = PRIM_CDR(x139886476081575);
Obj x139886475183815 = PRIM_CAR(x139886475183783);
Obj x139886475183847 = PRIM_CDR(x139886475183815);
Obj x139886475183879 = PRIM_CDR(x139886475183847);
Obj x139886475183943 = PRIM_CDR(x139886475183879);
Obj x139886475183975 = PRIM_ISCONS(x139886475183943);
if (True == x139886475183975) {
Obj x139886475184743 = PRIM_CDR(x139886476081575);
Obj x139886475184775 = PRIM_CAR(x139886475184743);
Obj x139886475184839 = PRIM_CDR(x139886475184775);
Obj x139886475184903 = PRIM_CDR(x139886475184839);
Obj x139886475184999 = PRIM_CDR(x139886475184903);
Obj x139886475185031 = PRIM_CAR(x139886475184999);
Obj body = x139886475185031;
Obj x139886475185927 = PRIM_CDR(x139886476081575);
Obj x139886475185991 = PRIM_CAR(x139886475185927);
Obj x139886475186023 = PRIM_CDR(x139886475185991);
Obj x139886475186055 = PRIM_CDR(x139886475186023);
Obj x139886475186087 = PRIM_CDR(x139886475186055);
Obj x139886475186151 = PRIM_CDR(x139886475186087);
Obj x139886475124743 = PRIM_EQ(Nil, x139886475186151);
if (True == x139886475124743) {
Obj x139886475125319 = PRIM_CDR(x139886476081575);
Obj x139886475125351 = PRIM_CDR(x139886475125319);
Obj x139886475125415 = PRIM_EQ(Nil, x139886475125351);
if (True == x139886475125415) {
pushCont(co, 31, clofun2, 6, actives, x139886476081607, label, params, body, x139886476081543);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476081543;
__arg2 = makeCString("label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475981511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj x139886475125767 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476081607= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x139886476081543= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj x139886475126055 = PRIM_SUB(x139886476081607, label);
pushCont(co, 32, clofun2, 6, actives, x139886476081607, label, params, body, x139886476081543);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = x139886475126055;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x139886475126087 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476081607= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x139886476081543= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 33, clofun2, 6, actives, x139886476081607, label, params, body, x139886476081543);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = x139886476081543;
__arg2 = x139886475126087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x139886475126279 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476081607= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x139886476081543= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 34, clofun2, 6, actives, x139886476081607, label, params, body, x139886476081543);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476081543;
__arg2 = makeCString(":\n{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x139886475126663 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476081607= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x139886476081543= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 35, clofun2, 6, actives, x139886476081607, label, params, body, x139886476081543);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45args_45reverse);
__arg1 = globalRef(symcora_47lib_47toc_35local_45from_45params);
__arg2 = x139886476081543;
__arg3 = MAKE_NUMBER(1);
co->args[4] = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x139886475127047 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476081607= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x139886476081543= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 36, clofun2, 5, x139886476081607, label, params, body, x139886476081543);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45args_45reverse);
__arg1 = globalRef(symcora_47lib_47toc_35local_45from_45cont);
__arg2 = x139886476081543;
__arg3 = MAKE_NUMBER(0);
co->args[4] = actives;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x139886475127335 = __arg1;
Obj x139886476081607= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x139886476081543= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x139886475127655 = makeCons(x139886476081607, label);
pushCont(co, 37, clofun2, 1, x139886476081543);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = x139886475127655;
__arg2 = params;
__arg3 = x139886476081543;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x139886475127687 = __arg1;
Obj x139886476081543= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476081543;
__arg2 = makeCString("}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
PUSH_CONT_0(co, 39, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35display);
__arg1 = makeCString("wrong format of toplevel\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x139886475243943 = __arg1;
PUSH_CONT_0(co, 40, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35display);
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x139886475244455 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35display);
__arg1 = makeCString("\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x139886476188423 = __arg1;
Obj x139886476188455 = __arg2;
Obj x139886476188487 = __arg3;
Obj x139886476188519 = co->args[4];
Obj x139886475270055 = PRIM_EQ(Nil, x139886476188519);
if (True == x139886475270055) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886475270439 = PRIM_ISCONS(x139886476188519);
if (True == x139886475270439) {
Obj x139886475270823 = PRIM_CAR(x139886476188519);
Obj a = x139886475270823;
Obj x139886475271111 = PRIM_CDR(x139886476188519);
Obj b = x139886475271111;
pushCont(co, 42, clofun2, 4, x139886476188487, x139886476188423, x139886476188455, b);
__nargs = 4;
__arg0 = x139886476188423;
__arg1 = x139886476188455;
__arg2 = x139886476188487;
__arg3 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label42:
{
Obj x139886475271335 = __arg1;
Obj x139886476188487= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476188423= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476188455= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x139886475271591 = PRIM_ADD(x139886476188487, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45args_45reverse);
__arg1 = x139886476188423;
__arg2 = x139886476188455;
__arg3 = x139886475271591;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 44, clofun2, 3, var, i, w);
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

label44:
{
Obj x139886475268231 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 45, clofun2, 2, i, w);
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

label45:
{
Obj x139886475268711 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 46, clofun2, 2, i, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x139886475268967 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 47, clofun2, 1, w);
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

label47:
{
Obj x139886475269223 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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

label48:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 49, clofun2, 3, var, i, w);
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

label49:
{
Obj x139886475330887 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 0, clofun3, 2, i, w);
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
Obj x139886475331143 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886475331815 = PRIM_LT(i, MAKE_NUMBER(4));
if (True == x139886475331815) {
pushCont(co, 3, clofun3, 2, i, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(" = __arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 1, clofun3, 2, i, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(" = co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj x139886475332839 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 2, clofun3, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x139886475333095 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x139886475332071 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 4, clofun3, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x139886475332359 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
pushCont(co, 6, clofun3, 3, label, maxid, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("static void ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x139886475386567 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 7, clofun3, 1, w);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = w;
__arg2 = label;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x139886475329543 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 8, clofun3, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("(struct Cora* co");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x139886475329895 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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

label9:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
Obj x139886475385319 = PRIM_SUB(maxid, label);
Obj x139886475385351 = primDiv(x139886475385319, globalRef(symcora_47lib_47toc_35_42mod_45num_42));
Obj gid = x139886475385351;
pushCont(co, 10, clofun3, 2, w, gid);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("clofun");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x139886475385735 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj gid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = gid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
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
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x139886476148199 = __arg1;
Obj x139886476148231 = __arg2;
Obj x139886476148263 = __arg3;
Obj x139886476148295 = co->args[4];
Obj x139886476148327 = co->args[5];
Obj x139886475463847 = PRIM_EQ(Nil, x139886476148327);
if (True == x139886475463847) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886475464103 = PRIM_ISCONS(x139886476148327);
if (True == x139886475464103) {
Obj x139886475464359 = PRIM_CAR(x139886476148327);
Obj a = x139886475464359;
Obj x139886475464551 = PRIM_CDR(x139886476148327);
Obj b = x139886475464551;
pushCont(co, 13, clofun3, 5, x139886476148199, x139886476148231, x139886476148263, x139886476148295, b);
__nargs = 5;
__arg0 = x139886476148263;
__arg1 = x139886476148199;
__arg2 = x139886476148231;
__arg3 = x139886476148295;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label13:
{
Obj x139886475382855 = __arg1;
Obj x139886476148199= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476148231= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476148263= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476148295= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 14, clofun3, 5, x139886476148199, x139886476148231, x139886476148263, x139886476148295, b);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x139886475383239 = __arg1;
Obj x139886476148199= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476148231= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476148263= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476148295= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x139886475383271 = primNot(x139886475383239);
if (True == x139886475383271) {
pushCont(co, 15, clofun3, 5, x139886476148199, x139886476148231, x139886476148263, x139886476148295, b);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476148295;
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
__arg1 = x139886476148199;
__arg2 = x139886476148231;
__arg3 = x139886476148263;
co->args[4] = x139886476148295;
co->args[5] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj x139886475383463 = __arg1;
Obj x139886476148199= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476148231= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476148263= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476148295= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst_45list_45h);
__arg1 = x139886476148199;
__arg2 = x139886476148231;
__arg3 = x139886476148263;
co->args[4] = x139886476148295;
co->args[5] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x139886476185991 = __arg1;
Obj x139886476186023 = __arg2;
Obj x139886476186055 = __arg3;
Obj x139886476188807 = makeNative(39, clofun3, 0, 0);
Obj x139886475506503 = PRIM_ISCONS(x139886476186055);
if (True == x139886475506503) {
Obj x139886475507143 = PRIM_CAR(x139886476186055);
Obj x139886475507271 = PRIM_EQ(sym_37continuation, x139886475507143);
if (True == x139886475507271) {
Obj x139886475507687 = PRIM_CDR(x139886476186055);
Obj x139886475507719 = PRIM_ISCONS(x139886475507687);
if (True == x139886475507719) {
Obj x139886475508103 = PRIM_CDR(x139886476186055);
Obj x139886475508135 = PRIM_CAR(x139886475508103);
Obj label = x139886475508135;
Obj x139886475508487 = PRIM_CDR(x139886476186055);
Obj x139886475508583 = PRIM_CDR(x139886475508487);
Obj stacks = x139886475508583;
Obj x139886475509031 = PRIM_EQ(stacks, Nil);
if (True == x139886475509031) {
pushCont(co, 28, clofun3, 4, label, x139886476185991, stacks, x139886476186023);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476186023;
__arg2 = makeCString("PUSH_CONT_0(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 17, clofun3, 4, label, x139886476185991, stacks, x139886476186023);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476186023;
__arg2 = makeCString("pushCont(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476188807;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476188807;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476188807;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj x139886475471815 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x139886475472263 = PRIM_CAR(x139886476185991);
Obj x139886475472295 = PRIM_SUB(x139886475472263, label);
pushCont(co, 18, clofun3, 4, label, x139886476185991, stacks, x139886476186023);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = x139886475472295;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x139886475472327 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 19, clofun3, 4, label, x139886476185991, stacks, x139886476186023);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = x139886476186023;
__arg2 = x139886475472327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x139886475472615 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 20, clofun3, 4, label, x139886476185991, stacks, x139886476186023);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476186023;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x139886475472839 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x139886475460871 = PRIM_CAR(x139886476185991);
pushCont(co, 21, clofun3, 3, x139886476185991, stacks, x139886476186023);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = x139886476186023;
__arg2 = label;
__arg3 = x139886475460871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x139886475460903 = __arg1;
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886475461319 = PRIM_EQ(stacks, Nil);
if (True == x139886475461319) {
Nil;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476186023;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 22, clofun3, 3, x139886476185991, stacks, x139886476186023);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476186023;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj x139886475461671 = __arg1;
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 23, clofun3, 3, x139886476185991, stacks, x139886476186023);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x139886475462055 = __arg1;
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 24, clofun3, 3, x139886476185991, stacks, x139886476186023);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = x139886476186023;
__arg2 = x139886475462055;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x139886475462087 = __arg1;
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 25, clofun3, 1, x139886476186023);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(26, clofun3, 1, 2, x139886476185991, x139886476186023);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x139886475462759 = __arg1;
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476186023;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x = __arg1;
pushCont(co, 27, clofun3, 1, x);
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

label27:
{
Obj x139886475462503 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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

label28:
{
Obj x139886475509127 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x139886475509607 = PRIM_CAR(x139886476185991);
Obj x139886475509639 = PRIM_SUB(x139886475509607, label);
pushCont(co, 29, clofun3, 4, label, x139886476185991, stacks, x139886476186023);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = x139886475509639;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x139886475509671 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 30, clofun3, 4, label, x139886476185991, stacks, x139886476186023);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = x139886476186023;
__arg2 = x139886475509671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x139886475509735 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 31, clofun3, 4, label, x139886476185991, stacks, x139886476186023);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476186023;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x139886475469063 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x139886475469479 = PRIM_CAR(x139886476185991);
pushCont(co, 32, clofun3, 3, x139886476185991, stacks, x139886476186023);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = x139886476186023;
__arg2 = label;
__arg3 = x139886475469479;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x139886475469511 = __arg1;
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886475469895 = PRIM_EQ(stacks, Nil);
if (True == x139886475469895) {
Nil;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476186023;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 33, clofun3, 3, x139886476185991, stacks, x139886476186023);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476186023;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x139886475470311 = __arg1;
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 34, clofun3, 3, x139886476185991, stacks, x139886476186023);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x139886475470663 = __arg1;
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 35, clofun3, 3, x139886476185991, stacks, x139886476186023);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = x139886476186023;
__arg2 = x139886475470663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x139886475470695 = __arg1;
Obj x139886476185991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 36, clofun3, 1, x139886476186023);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(37, clofun3, 1, 2, x139886476185991, x139886476186023);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x139886475471559 = __arg1;
Obj x139886476186023= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476186023;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x = __arg1;
pushCont(co, 38, clofun3, 1, x);
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

label38:
{
Obj x139886475471271 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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

label39:
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

label40:
{
Obj self = __arg1;
Obj env = __arg2;
Obj w = __arg3;
Obj x1 = co->args[4];
Obj x139886475184807 = primIsSymbol(x1);
if (True == x139886475184807) {
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
Obj x139886476186343 = makeNative(43, clofun3, 0, 4, self, env, x1, w);
Obj x139886475567943 = PRIM_ISCONS(x1);
if (True == x139886475567943) {
Obj x139886475568295 = PRIM_CAR(x1);
Obj x139886475568327 = PRIM_EQ(sym_37global, x139886475568295);
if (True == x139886475568327) {
Obj x139886475568583 = PRIM_CDR(x1);
Obj x139886475568615 = PRIM_ISCONS(x139886475568583);
if (True == x139886475568615) {
Obj x139886475568999 = PRIM_CDR(x1);
Obj x139886475569031 = PRIM_CAR(x139886475568999);
Obj x = x139886475569031;
Obj x139886475569479 = PRIM_CDR(x1);
Obj x139886475569511 = PRIM_CDR(x139886475569479);
Obj x139886475569575 = PRIM_EQ(Nil, x139886475569511);
if (True == x139886475569575) {
pushCont(co, 41, clofun3, 2, x, w);
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
__arg0 = x139886476186343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476186343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476186343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476186343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label41:
{
Obj x139886475569799 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 42, clofun3, 1, w);
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

label42:
{
Obj x139886475569991 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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

label43:
{
Obj x139886476187911 = makeNative(46, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x139886475597415 = PRIM_ISCONS(closureRef(co, 2));
if (True == x139886475597415) {
Obj x139886475597735 = PRIM_CAR(closureRef(co, 2));
Obj x139886475597767 = PRIM_EQ(sym_37closure_45ref, x139886475597735);
if (True == x139886475597767) {
Obj x139886475598375 = PRIM_CDR(closureRef(co, 2));
Obj x139886475598407 = PRIM_ISCONS(x139886475598375);
if (True == x139886475598407) {
Obj x139886475598791 = PRIM_CDR(closureRef(co, 2));
Obj x139886475598823 = PRIM_CAR(x139886475598791);
Obj idx = x139886475598823;
Obj x139886475599335 = PRIM_CDR(closureRef(co, 2));
Obj x139886475599399 = PRIM_CDR(x139886475599335);
Obj x139886475599463 = PRIM_EQ(Nil, x139886475599399);
if (True == x139886475599463) {
pushCont(co, 44, clofun3, 1, idx);
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
__arg0 = x139886476187911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476187911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476187911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476187911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj x139886475599751 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 45, clofun3);
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

label45:
{
Obj x139886475567207 = __arg1;
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

label46:
{
Obj x139886476188999 = makeNative(49, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x139886475982695 = PRIM_ISCONS(closureRef(co, 2));
if (True == x139886475982695) {
Obj x139886475983623 = PRIM_CAR(closureRef(co, 2));
Obj x139886475983655 = PRIM_EQ(sym_37stack_45ref, x139886475983623);
if (True == x139886475983655) {
Obj x139886475984071 = PRIM_CDR(closureRef(co, 2));
Obj x139886475984103 = PRIM_ISCONS(x139886475984071);
if (True == x139886475984103) {
Obj x139886475984423 = PRIM_CDR(closureRef(co, 2));
Obj x139886475984455 = PRIM_CAR(x139886475984423);
Obj idx = x139886475984455;
Obj x139886475595879 = PRIM_CDR(closureRef(co, 2));
Obj x139886475595911 = PRIM_CDR(x139886475595879);
Obj x139886475595975 = PRIM_EQ(Nil, x139886475595911);
if (True == x139886475595975) {
pushCont(co, 47, clofun3, 1, idx);
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
__arg0 = x139886476188999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476188999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476188999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476188999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj x139886475596295 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 48, clofun3);
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

label48:
{
Obj x139886475596615 = __arg1;
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

label49:
{
Obj x139886476145031 = makeNative(7, clofun4, 0, 4, closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 3));
Obj x139886476105767 = PRIM_ISCONS(closureRef(co, 2));
if (True == x139886476105767) {
Obj x139886476106215 = PRIM_CAR(closureRef(co, 2));
Obj x139886476106247 = PRIM_EQ(sym_37const, x139886476106215);
if (True == x139886476106247) {
Obj x139886476106983 = PRIM_CDR(closureRef(co, 2));
Obj x139886476107015 = PRIM_ISCONS(x139886476106983);
if (True == x139886476107015) {
Obj x139886476107367 = PRIM_CDR(closureRef(co, 2));
Obj x139886476107399 = PRIM_CAR(x139886476107367);
Obj x = x139886476107399;
Obj x139886476079335 = PRIM_CDR(closureRef(co, 2));
Obj x139886476079367 = PRIM_CDR(x139886476079335);
Obj x139886476079399 = PRIM_EQ(Nil, x139886476079367);
if (True == x139886476079399) {
Obj x139886476079559 = primIsSymbol(x);
if (True == x139886476079559) {
pushCont(co, 6, clofun4, 1, x);
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
pushCont(co, 0, clofun4, 1, x);
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
__arg0 = x139886476145031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476145031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476145031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476145031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
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
Obj x139886476080551 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x139886476080551) {
pushCont(co, 4, clofun4, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("MAKE_NUMBER(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886476081639 = primIsString(x);
if (True == x139886476081639) {
pushCont(co, 1, clofun4, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("makeCString(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886476083175 = PRIM_EQ(x, Nil);
if (True == x139886476083175) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("Nil");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886475981095 = PRIM_EQ(x, True);
if (True == x139886475981095) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("True");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886475981703 = PRIM_EQ(x, False);
if (True == x139886475981703) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("False");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}
}
}

label1:
{
Obj x139886476082119 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 2, clofun4);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35escape_45str);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x139886476082695 = __arg1;
PUSH_CONT_0(co, 3, clofun4);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = x139886476082695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x139886476082727 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x139886476080871 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 5, clofun4);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x139886476081255 = __arg1;
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

label6:
{
Obj x139886476079975 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = closureRef(co, 3);
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x139886476146343 = makeNative(18, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x139886477005255 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886477005255) {
Obj x139886477005511 = PRIM_CAR(closureRef(co, 0));
Obj x139886477005671 = PRIM_EQ(symlet, x139886477005511);
if (True == x139886477005671) {
Obj x139886477005959 = PRIM_CDR(closureRef(co, 0));
Obj x139886477005991 = PRIM_ISCONS(x139886477005959);
if (True == x139886477005991) {
Obj x139886477007655 = PRIM_CDR(closureRef(co, 0));
Obj x139886477007687 = PRIM_CAR(x139886477007655);
Obj a = x139886477007687;
Obj x139886477008007 = PRIM_CDR(closureRef(co, 0));
Obj x139886477008039 = PRIM_CDR(x139886477008007);
Obj x139886477008071 = PRIM_ISCONS(x139886477008039);
if (True == x139886477008071) {
Obj x139886477008391 = PRIM_CDR(closureRef(co, 0));
Obj x139886477008423 = PRIM_CDR(x139886477008391);
Obj x139886477008455 = PRIM_CAR(x139886477008423);
Obj b = x139886477008455;
Obj x139886477008839 = PRIM_CDR(closureRef(co, 0));
Obj x139886477008871 = PRIM_CDR(x139886477008839);
Obj x139886476186119 = PRIM_CDR(x139886477008871);
Obj x139886476186215 = PRIM_ISCONS(x139886476186119);
if (True == x139886476186215) {
Obj x139886476187367 = PRIM_CDR(closureRef(co, 0));
Obj x139886476187399 = PRIM_CDR(x139886476187367);
Obj x139886476187431 = PRIM_CDR(x139886476187399);
Obj x139886476187783 = PRIM_CAR(x139886476187431);
Obj c = x139886476187783;
Obj x139886476188775 = PRIM_CDR(closureRef(co, 0));
Obj x139886476188839 = PRIM_CDR(x139886476188775);
Obj x139886476189063 = PRIM_CDR(x139886476188839);
Obj x139886476189127 = PRIM_CDR(x139886476189063);
Obj x139886476189159 = PRIM_EQ(Nil, x139886476189127);
if (True == x139886476189159) {
pushCont(co, 8, clofun4, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35index);
__arg1 = a;
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476146343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476146343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476146343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476146343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476146343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476146343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj x139886476189351 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj idx = x139886476189351;
Obj x139886476144807 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == x139886476144807) {
pushCont(co, 13, clofun4, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
pushCont(co, 9, clofun4, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = closureRef(co, 3);
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj x139886476147367 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 10, clofun4, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x139886476147783 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 11, clofun4, 2, a, c);
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

label11:
{
Obj x139886476148167 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 12, clofun4, 2, a, c);
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

label12:
{
Obj x139886476148711 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476104391 = makeCons(a, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = x139886476104391;
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x139886476144999 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 14, clofun4, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = closureRef(co, 3);
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x139886476145543 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 15, clofun4, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x139886476145735 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 16, clofun4, 2, a, c);
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

label16:
{
Obj x139886476146247 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 17, clofun4, 2, a, c);
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

label17:
{
Obj x139886476146567 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476147111 = makeCons(a, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = x139886476147111;
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x139886476104807 = makeNative(25, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x139886474067079 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886474067079) {
Obj x139886474067335 = PRIM_CAR(closureRef(co, 0));
Obj x139886474067367 = PRIM_ISCONS(x139886474067335);
if (True == x139886474067367) {
Obj x139886474067687 = PRIM_CAR(closureRef(co, 0));
Obj x139886474067719 = PRIM_CAR(x139886474067687);
Obj x139886474067751 = PRIM_EQ(sym_37builtin, x139886474067719);
if (True == x139886474067751) {
Obj x139886474038215 = PRIM_CAR(closureRef(co, 0));
Obj x139886474038407 = PRIM_CDR(x139886474038215);
Obj x139886474038663 = PRIM_ISCONS(x139886474038407);
if (True == x139886474038663) {
Obj x139886477005095 = PRIM_CAR(closureRef(co, 0));
Obj x139886477005127 = PRIM_CDR(x139886477005095);
Obj x139886477005159 = PRIM_CAR(x139886477005127);
Obj f = x139886477005159;
Obj x139886477005543 = PRIM_CAR(closureRef(co, 0));
Obj x139886477005575 = PRIM_CDR(x139886477005543);
Obj x139886477005607 = PRIM_CDR(x139886477005575);
Obj x139886477005639 = PRIM_EQ(Nil, x139886477005607);
if (True == x139886477005639) {
Obj x139886477005831 = PRIM_CDR(closureRef(co, 0));
Obj args = x139886477005831;
pushCont(co, 19, clofun4, 2, f, args);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35builtin_45_62name);
__arg1 = f;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476104807;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476104807;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476104807;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476104807;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476104807;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj x139886477006087 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 20, clofun4, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = x139886477006087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x139886477006119 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886477006343 = PRIM_EQ(f, symset);
if (True == x139886477006343) {
pushCont(co, 23, clofun4, 1, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 21, clofun4, 1, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj x139886477006951 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 22, clofun4);
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

label22:
{
Obj x139886477007207 = __arg1;
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
Obj x139886477006471 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 24, clofun4);
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

label24:
{
Obj x139886477006727 = __arg1;
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

label25:
{
Obj x139886476106695 = makeNative(32, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x139886474142407 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886474142407) {
Obj x139886474142663 = PRIM_CAR(closureRef(co, 0));
Obj x139886474142695 = PRIM_EQ(symif, x139886474142663);
if (True == x139886474142695) {
Obj x139886474142951 = PRIM_CDR(closureRef(co, 0));
Obj x139886474142983 = PRIM_ISCONS(x139886474142951);
if (True == x139886474142983) {
Obj x139886474143239 = PRIM_CDR(closureRef(co, 0));
Obj x139886474143271 = PRIM_CAR(x139886474143239);
Obj a = x139886474143271;
Obj x139886474143591 = PRIM_CDR(closureRef(co, 0));
Obj x139886474143623 = PRIM_CDR(x139886474143591);
Obj x139886474143655 = PRIM_ISCONS(x139886474143623);
if (True == x139886474143655) {
Obj x139886474143975 = PRIM_CDR(closureRef(co, 0));
Obj x139886474144007 = PRIM_CDR(x139886474143975);
Obj x139886474144039 = PRIM_CAR(x139886474144007);
Obj b = x139886474144039;
Obj x139886474144423 = PRIM_CDR(closureRef(co, 0));
Obj x139886474144455 = PRIM_CDR(x139886474144423);
Obj x139886474144487 = PRIM_CDR(x139886474144455);
Obj x139886474144519 = PRIM_ISCONS(x139886474144487);
if (True == x139886474144519) {
Obj x139886474144903 = PRIM_CDR(closureRef(co, 0));
Obj x139886474144935 = PRIM_CDR(x139886474144903);
Obj x139886474144967 = PRIM_CDR(x139886474144935);
Obj x139886474144999 = PRIM_CAR(x139886474144967);
Obj c = x139886474144999;
Obj x139886474145447 = PRIM_CDR(closureRef(co, 0));
Obj x139886474145479 = PRIM_CDR(x139886474145447);
Obj x139886474145511 = PRIM_CDR(x139886474145479);
Obj x139886474145543 = PRIM_CDR(x139886474145511);
Obj x139886474145575 = PRIM_EQ(Nil, x139886474145543);
if (True == x139886474145575) {
pushCont(co, 26, clofun4, 3, a, b, c);
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
__arg0 = x139886476106695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476106695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476106695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476106695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476106695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476106695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj x139886474145767 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 27, clofun4, 2, b, c);
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

label27:
{
Obj x139886474065479 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 28, clofun4, 2, b, c);
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

label28:
{
Obj x139886474065703 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 29, clofun4, 1, c);
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

label29:
{
Obj x139886474065959 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun4, 1, c);
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

label30:
{
Obj x139886474066151 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 31, clofun4);
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

label31:
{
Obj x139886474066407 = __arg1;
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

label32:
{
Obj x139886476081127 = makeNative(46, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x139886474306695 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886474306695) {
Obj x139886474307079 = PRIM_CAR(closureRef(co, 0));
Obj x139886474307111 = PRIM_EQ(sym_37closure, x139886474307079);
if (True == x139886474307111) {
Obj x139886474307495 = PRIM_CDR(closureRef(co, 0));
Obj x139886474307527 = PRIM_ISCONS(x139886474307495);
if (True == x139886474307527) {
Obj x139886474307783 = PRIM_CDR(closureRef(co, 0));
Obj x139886474307815 = PRIM_CAR(x139886474307783);
Obj label = x139886474307815;
Obj x139886474308423 = PRIM_CDR(closureRef(co, 0));
Obj x139886474308455 = PRIM_CDR(x139886474308423);
Obj x139886474308487 = PRIM_ISCONS(x139886474308455);
if (True == x139886474308487) {
Obj x139886474308967 = PRIM_CDR(closureRef(co, 0));
Obj x139886474308999 = PRIM_CDR(x139886474308967);
Obj x139886474309031 = PRIM_CAR(x139886474308999);
Obj nargs = x139886474309031;
Obj x139886474309543 = PRIM_CDR(closureRef(co, 0));
Obj x139886474309575 = PRIM_CDR(x139886474309543);
Obj x139886474256423 = PRIM_CDR(x139886474309575);
Obj frees = x139886474256423;
pushCont(co, 33, clofun4, 3, label, nargs, frees);
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
__arg0 = x139886476081127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476081127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476081127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476081127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x139886474256615 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886474258375 = PRIM_CAR(closureRef(co, 1));
Obj x139886474258407 = PRIM_SUB(x139886474258375, label);
pushCont(co, 34, clofun4, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = x139886474258407;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x139886474258439 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 35, clofun4, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = x139886474258439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x139886474258471 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 36, clofun4, 3, label, nargs, frees);
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

label36:
{
Obj x139886474258663 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886474258951 = PRIM_CAR(closureRef(co, 1));
pushCont(co, 37, clofun4, 2, nargs, frees);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 3);
__arg2 = label;
__arg3 = x139886474258951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x139886474258983 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 38, clofun4, 2, nargs, frees);
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

label38:
{
Obj x139886474259175 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun4, 1, frees);
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

label39:
{
Obj x139886474259367 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 40, clofun4, 1, frees);
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

label40:
{
Obj x139886474259559 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 41, clofun4, 1, frees);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x139886474259815 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 42, clofun4, 1, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = x139886474259815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x139886474259847 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 43, clofun4, 1, frees);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x139886474260135 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886474260167 = primNot(x139886474260135);
if (True == x139886474260167) {
pushCont(co, 44, clofun4, 1, frees);
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

label44:
{
Obj x139886474260359 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 45, clofun4);
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

label45:
{
Obj x139886474141767 = __arg1;
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

label46:
{
Obj x139886475981127 = makeNative(49, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 3));
Obj x139886474552775 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886474552775) {
Obj x139886474553031 = PRIM_CAR(closureRef(co, 0));
Obj x139886474553063 = PRIM_EQ(symdo, x139886474553031);
if (True == x139886474553063) {
Obj x139886474553351 = PRIM_CDR(closureRef(co, 0));
Obj x139886474553383 = PRIM_ISCONS(x139886474553351);
if (True == x139886474553383) {
Obj x139886474553639 = PRIM_CDR(closureRef(co, 0));
Obj x139886474553671 = PRIM_CAR(x139886474553639);
Obj a = x139886474553671;
Obj x139886474553991 = PRIM_CDR(closureRef(co, 0));
Obj x139886474554055 = PRIM_CDR(x139886474553991);
Obj x139886474554087 = PRIM_ISCONS(x139886474554055);
if (True == x139886474554087) {
Obj x139886474554471 = PRIM_CDR(closureRef(co, 0));
Obj x139886474554503 = PRIM_CDR(x139886474554471);
Obj x139886474554535 = PRIM_CAR(x139886474554503);
Obj b = x139886474554535;
Obj x139886474554983 = PRIM_CDR(closureRef(co, 0));
Obj x139886474555015 = PRIM_CDR(x139886474554983);
Obj x139886474555047 = PRIM_CDR(x139886474555015);
Obj x139886474555079 = PRIM_EQ(Nil, x139886474555047);
if (True == x139886474555079) {
pushCont(co, 47, clofun4, 1, b);
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
__arg0 = x139886475981127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj x139886474305607 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 48, clofun4, 1, b);
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

label48:
{
Obj x139886474305799 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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

label49:
{
Obj x139886475983271 = makeNative(8, clofun5, 0, 4, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 3));
Obj x139886474580679 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886474580679) {
Obj x139886474581095 = PRIM_CAR(closureRef(co, 0));
Obj x139886474581127 = PRIM_EQ(symreturn, x139886474581095);
if (True == x139886474581127) {
Obj x139886474581383 = PRIM_CDR(closureRef(co, 0));
Obj x139886474581415 = PRIM_ISCONS(x139886474581383);
if (True == x139886474581415) {
Obj x139886474581767 = PRIM_CDR(closureRef(co, 0));
Obj x139886474581799 = PRIM_CAR(x139886474581767);
Obj x = x139886474581799;
Obj x139886474582247 = PRIM_CDR(closureRef(co, 0));
Obj x139886474582279 = PRIM_CDR(x139886474582247);
Obj x139886474582311 = PRIM_EQ(Nil, x139886474582279);
if (True == x139886474582311) {
pushCont(co, 0, clofun5, 1, x);
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
__arg0 = x139886475983271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
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
Obj x139886474582599 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 1, clofun5, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("__arg1 = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x139886474582791 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 2, clofun5);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 2);
__arg2 = closureRef(co, 1);
__arg3 = closureRef(co, 3);
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x139886474583143 = __arg1;
PUSH_CONT_0(co, 3, clofun5);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x139886474583463 = __arg1;
PUSH_CONT_0(co, 4, clofun5);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("co->ctx = co->callstack.data[--co->callstack.len];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x139886474583655 = __arg1;
PUSH_CONT_0(co, 5, clofun5);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("if (co->ctx.pc.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x139886474583975 = __arg1;
Obj x139886474551623 = PRIM_CDR(closureRef(co, 2));
Obj x139886474551879 = PRIM_CAR(closureRef(co, 2));
PUSH_CONT_0(co, 6, clofun5);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 3);
__arg2 = x139886474551623;
__arg3 = x139886474551879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x139886474551911 = __arg1;
PUSH_CONT_0(co, 7, clofun5);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(") { goto fail; }\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x139886474552103 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x139886475984551 = makeNative(9, clofun5, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x139886474643719 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886474643719) {
Obj x139886474644071 = PRIM_CAR(closureRef(co, 0));
Obj x139886474644103 = PRIM_EQ(symtailcall, x139886474644071);
if (True == x139886474644103) {
Obj x139886474644455 = PRIM_CDR(closureRef(co, 0));
Obj x139886474644487 = PRIM_ISCONS(x139886474644455);
if (True == x139886474644487) {
Obj x139886474644871 = PRIM_CDR(closureRef(co, 0));
Obj x139886474644903 = PRIM_CAR(x139886474644871);
Obj exp = x139886474644903;
Obj x139886474645351 = PRIM_CDR(closureRef(co, 0));
Obj x139886474645383 = PRIM_CDR(x139886474645351);
Obj x139886474645415 = PRIM_EQ(Nil, x139886474645383);
if (True == x139886474645415) {
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475984551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475984551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475984551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475984551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj x139886475596551 = makeNative(11, clofun5, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 3));
Obj x139886474652327 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886474652327) {
Obj x139886474652647 = PRIM_CAR(closureRef(co, 0));
Obj x139886474652679 = PRIM_EQ(symcall, x139886474652647);
if (True == x139886474652679) {
Obj x139886474652999 = PRIM_CDR(closureRef(co, 0));
Obj x139886474653031 = PRIM_ISCONS(x139886474652999);
if (True == x139886474653031) {
Obj x139886474653383 = PRIM_CDR(closureRef(co, 0));
Obj x139886474653415 = PRIM_CAR(x139886474653383);
Obj exp = x139886474653415;
Obj x139886474641511 = PRIM_CDR(closureRef(co, 0));
Obj x139886474641543 = PRIM_CDR(x139886474641511);
Obj x139886474641575 = PRIM_ISCONS(x139886474641543);
if (True == x139886474641575) {
Obj x139886474641959 = PRIM_CDR(closureRef(co, 0));
Obj x139886474641991 = PRIM_CDR(x139886474641959);
Obj x139886474642023 = PRIM_CAR(x139886474641991);
Obj cont = x139886474642023;
Obj x139886474642503 = PRIM_CDR(closureRef(co, 0));
Obj x139886474642535 = PRIM_CDR(x139886474642503);
Obj x139886474642567 = PRIM_CDR(x139886474642535);
Obj x139886474642599 = PRIM_EQ(Nil, x139886474642567);
if (True == x139886474642599) {
pushCont(co, 10, clofun5, 1, exp);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45cont);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 3);
__arg3 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475596551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475596551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475596551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475596551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475596551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj x139886474642855 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x139886475126503 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475126503) {
Obj x139886475126727 = PRIM_CAR(closureRef(co, 0));
Obj f = x139886475126727;
Obj x139886475127111 = PRIM_CDR(closureRef(co, 0));
Obj args = x139886475127111;
pushCont(co, 12, clofun5, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("__nargs = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj x139886475127399 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 13, clofun5, 2, f, args);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x139886475127815 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886475127911 = PRIM_ADD(MAKE_NUMBER(1), x139886475127815);
pushCont(co, 14, clofun5, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 2);
__arg2 = x139886475127911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x139886475127943 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 15, clofun5, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x139886475128295 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886474649607 = makeCons(f, args);
PUSH_CONT_0(co, 16, clofun5);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = MAKE_NUMBER(0);
co->args[4] = x139886474649607;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x139886474649639 = __arg1;
PUSH_CONT_0(co, 17, clofun5);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("co->ctx.frees = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x139886474650023 = __arg1;
PUSH_CONT_0(co, 18, clofun5);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x139886474650311 = __arg1;
PUSH_CONT_0(co, 19, clofun5);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x139886474650631 = __arg1;
PUSH_CONT_0(co, 20, clofun5);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("if (ps.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x139886474650951 = __arg1;
Obj x139886474651271 = PRIM_CDR(closureRef(co, 1));
Obj x139886474651399 = PRIM_CAR(closureRef(co, 1));
PUSH_CONT_0(co, 21, clofun5);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 2);
__arg2 = x139886474651271;
__arg3 = x139886474651399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x139886474651495 = __arg1;
PUSH_CONT_0(co, 22, clofun5);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString(") { co->ctx.pc = ps; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x139886474651687 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("goto *jumpTable[ps.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj sym = __arg1;
Obj globals = __arg2;
pushCont(co, 24, clofun5, 2, sym, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35value);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x139886475183911 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val = x139886475183911;
pushCont(co, 25, clofun5, 3, sym, val, globals);
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

label25:
{
Obj x139886475184103 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x139886475184103) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886475184263 = makeCons(sym, val);
Obj x139886475184295 = primSet(co, globals, x139886475184263);
__nargs = 2;
__arg1 = x139886475184295;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label26:
{
Obj x139886476106727 = __arg1;
Obj x139886476106759 = __arg2;
Obj x139886476106791 = __arg3;
Obj x139886476106855 = co->args[4];
Obj x139886475190503 = PRIM_EQ(Nil, x139886476106855);
if (True == x139886475190503) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886475190919 = PRIM_ISCONS(x139886476106855);
if (True == x139886475190919) {
Obj x139886475191207 = PRIM_CAR(x139886476106855);
Obj x = x139886475191207;
Obj x139886475192135 = PRIM_CDR(x139886476106855);
Obj more = x139886475192135;
Obj x139886475192551 = PRIM_GT(x139886476106791, MAKE_NUMBER(3));
Obj x139886475192583 = primNot(x139886475192551);
if (True == x139886475192583) {
pushCont(co, 33, clofun5, 5, x, x139886476106791, x139886476106727, x139886476106759, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476106759;
__arg2 = makeCString("__arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 27, clofun5, 5, x, x139886476106791, x139886476106727, x139886476106759, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476106759;
__arg2 = makeCString("co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label27:
{
Obj x139886475194087 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476106791= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476106727= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476106759= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 28, clofun5, 5, x, x139886476106791, x139886476106727, x139886476106759, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = x139886476106759;
__arg2 = x139886476106791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x139886475182183 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476106791= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476106727= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476106759= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 29, clofun5, 5, x, x139886476106791, x139886476106727, x139886476106759, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476106759;
__arg2 = makeCString("]");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x139886475182279 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476106791= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476106727= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476106759= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 30, clofun5, 5, x, x139886476106791, x139886476106727, x139886476106759, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476106759;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x139886475182535 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476106791= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476106727= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476106759= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 31, clofun5, 4, x139886476106791, x139886476106727, x139886476106759, more);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = x139886476106727;
__arg2 = Nil;
__arg3 = x139886476106759;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x139886475182759 = __arg1;
Obj x139886476106791= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476106727= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476106759= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 32, clofun5, 4, x139886476106791, x139886476106727, x139886476106759, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476106759;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x139886475182919 = __arg1;
Obj x139886476106791= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476106727= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476106759= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x139886475183239 = PRIM_ADD(x139886476106791, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = x139886476106727;
__arg2 = x139886476106759;
__arg3 = x139886475183239;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x139886475192743 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476106791= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476106727= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476106759= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 34, clofun5, 5, x, x139886476106791, x139886476106727, x139886476106759, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = x139886476106759;
__arg2 = x139886476106791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x139886475192903 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476106791= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476106727= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476106759= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 35, clofun5, 5, x, x139886476106791, x139886476106727, x139886476106759, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476106759;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x139886475193127 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476106791= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476106727= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886476106759= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 36, clofun5, 4, x139886476106791, x139886476106727, x139886476106759, more);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = x139886476106727;
__arg2 = Nil;
__arg3 = x139886476106759;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x139886475193351 = __arg1;
Obj x139886476106791= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476106727= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476106759= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 37, clofun5, 4, x139886476106791, x139886476106727, x139886476106759, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = x139886476106759;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x139886475193639 = __arg1;
Obj x139886476106791= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476106727= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476106759= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x139886475193895 = PRIM_ADD(x139886476106791, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = x139886476106727;
__arg2 = x139886476106759;
__arg3 = x139886475193895;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x = __arg1;
Obj k = __arg2;
Obj x139886475246343 = primGenSym();
Obj tmp = x139886475246343;
pushCont(co, 39, clofun5, 2, x, tmp);
__nargs = 2;
__arg0 = k;
__arg1 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x139886475247015 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886475247047 = makeCons(x139886475247015, Nil);
Obj x139886475247079 = makeCons(x, x139886475247047);
Obj x139886475247111 = makeCons(tmp, x139886475247079);
Obj x139886475247143 = makeCons(symlet, x139886475247111);
__nargs = 2;
__arg1 = x139886475247143;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj v = __arg1;
Obj val = __arg2;
pushCont(co, 41, clofun5, 2, val, v);
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

label41:
{
Obj x139886475244103 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj idx = x139886475244103;
pushCont(co, 42, clofun5, 3, val, idx, v);
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

label42:
{
Obj x139886475244327 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cur = x139886475244327;
Obj x139886475244935 = makeCons(val, Nil);
Obj x139886475244967 = makeCons(idx, x139886475244935);
Obj x139886475244999 = makeCons(x139886475244967, cur);
Obj cur1 = x139886475244999;
Obj x139886475245383 = PRIM_ADD(idx, MAKE_NUMBER(1));
pushCont(co, 43, clofun5, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35vector_45set_33);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
__arg3 = x139886475245383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x139886475245415 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
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

label44:
{
Obj x139886476185831 = __arg1;
Obj x139886476185863 = __arg2;
Obj x139886476187719 = makeNative(1, clofun6, 0, 2, x139886476185831, x139886476185863);
Obj x139886475383495 = PRIM_ISCONS(x139886476185863);
if (True == x139886475383495) {
Obj x139886475383655 = PRIM_CAR(x139886476185863);
Obj clo_45or_45cont = x139886475383655;
Obj x139886475384039 = PRIM_CDR(x139886476185863);
Obj x139886475384071 = PRIM_ISCONS(x139886475384039);
if (True == x139886475384071) {
Obj x139886475384455 = PRIM_CDR(x139886476185863);
Obj x139886475384487 = PRIM_CAR(x139886475384455);
Obj x139886475384519 = PRIM_ISCONS(x139886475384487);
if (True == x139886475384519) {
Obj x139886475385031 = PRIM_CDR(x139886476185863);
Obj x139886475385063 = PRIM_CAR(x139886475385031);
Obj x139886475385095 = PRIM_CAR(x139886475385063);
Obj x139886475385127 = PRIM_EQ(symlambda, x139886475385095);
if (True == x139886475385127) {
Obj x139886475385511 = PRIM_CDR(x139886476185863);
Obj x139886475385543 = PRIM_CAR(x139886475385511);
Obj x139886475385575 = PRIM_CDR(x139886475385543);
Obj x139886475385607 = PRIM_ISCONS(x139886475385575);
if (True == x139886475385607) {
Obj x139886475386151 = PRIM_CDR(x139886476185863);
Obj x139886475386183 = PRIM_CAR(x139886475386151);
Obj x139886475386247 = PRIM_CDR(x139886475386183);
Obj x139886475386279 = PRIM_CAR(x139886475386247);
Obj params = x139886475386279;
Obj x139886475329607 = PRIM_CDR(x139886476185863);
Obj x139886475329639 = PRIM_CAR(x139886475329607);
Obj x139886475329671 = PRIM_CDR(x139886475329639);
Obj x139886475329703 = PRIM_CDR(x139886475329671);
Obj x139886475329767 = PRIM_ISCONS(x139886475329703);
if (True == x139886475329767) {
Obj x139886475330343 = PRIM_CDR(x139886476185863);
Obj x139886475330375 = PRIM_CAR(x139886475330343);
Obj x139886475330471 = PRIM_CDR(x139886475330375);
Obj x139886475330535 = PRIM_CDR(x139886475330471);
Obj x139886475330567 = PRIM_CAR(x139886475330535);
Obj body = x139886475330567;
Obj x139886475331399 = PRIM_CDR(x139886476185863);
Obj x139886475331431 = PRIM_CAR(x139886475331399);
Obj x139886475331495 = PRIM_CDR(x139886475331431);
Obj x139886475331527 = PRIM_CDR(x139886475331495);
Obj x139886475331559 = PRIM_CDR(x139886475331527);
Obj x139886475331591 = PRIM_EQ(Nil, x139886475331559);
if (True == x139886475331591) {
Obj x139886475332007 = PRIM_CDR(x139886476185863);
Obj x139886475332039 = PRIM_CDR(x139886475332007);
Obj fvs = x139886475332039;
Obj x139886476185895 = makeNative(45, clofun5, 1, 6, body, x139886476185831, params, clo_45or_45cont, fvs, x139886476187719);
Obj x139886475271175 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == x139886475271175) {
__nargs = 2;
__arg0 = x139886476185895;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886475271431 = PRIM_EQ(clo_45or_45cont, sym_37continuation);
if (True == x139886475271431) {
__nargs = 2;
__arg0 = x139886476185895;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x139886476185895;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
__nargs = 1;
__arg0 = x139886476187719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476187719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476187719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476187719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476187719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476187719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476187719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj x139886476185927 = __arg1;
if (True == x139886476185927) {
PUSH_CONT_0(co, 46, clofun5);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = closureRef(co, 5);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj x139886475332807 = __arg1;
Obj body1 = x139886475332807;
pushCont(co, 47, clofun5, 1, body1);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35vector_45ref);
__arg1 = closureRef(co, 1);
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x139886475333063 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur = x139886475333063;
Obj x139886475333383 = PRIM_EQ(closureRef(co, 3), sym_37closure);
if (True == x139886475333383) {
Obj x139886475268455 = makeCons(body1, Nil);
Obj x139886475268487 = makeCons(Nil, x139886475268455);
Obj x139886475268519 = makeCons(closureRef(co, 2), x139886475268487);
Obj x139886475268647 = makeCons(symlambda, x139886475268519);
pushCont(co, 49, clofun5, 1, cur);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = closureRef(co, 1);
__arg2 = x139886475268647;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886475270119 = makeCons(body1, Nil);
Obj x139886475270151 = makeCons(closureRef(co, 4), x139886475270119);
Obj x139886475270183 = makeCons(closureRef(co, 2), x139886475270151);
Obj x139886475270215 = makeCons(symlambda, x139886475270183);
pushCont(co, 48, clofun5, 1, cur);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = closureRef(co, 1);
__arg2 = x139886475270215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj x139886475270247 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475270567 = makeCons(cur, closureRef(co, 4));
Obj x139886475270599 = makeCons(closureRef(co, 3), x139886475270567);
__nargs = 2;
__arg1 = x139886475270599;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label49:
{
Obj x139886475268679 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 0, clofun6, 1, cur);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
Obj x139886475269159 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475269319 = makeCons(x139886475269159, closureRef(co, 4));
Obj x139886475269383 = makeCons(cur, x139886475269319);
Obj x139886475269415 = makeCons(closureRef(co, 3), x139886475269383);
__nargs = 2;
__arg1 = x139886475269415;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x139886475382887 = PRIM_ISCONS(closureRef(co, 1));
if (True == x139886475382887) {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = makeNative(2, clofun6, 1, 1, closureRef(co, 0));
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = closureRef(co, 1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label2:
{
Obj e = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda);
__arg1 = closureRef(co, 0);
__arg2 = e;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x139886475983879 = __arg1;
Obj x139886475983911 = __arg2;
pushCont(co, 4, clofun6, 2, x139886475983911, x139886475983879);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x139886475983911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x139886475567879 = __arg1;
Obj x139886475983911= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475983879= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x139886475567879) {
__nargs = 2;
__arg1 = x139886475983911;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886475568071 = primIsSymbol(x139886475983911);
if (True == x139886475568071) {
__nargs = 2;
__arg1 = x139886475983911;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886475460679 = makeNative(6, clofun6, 0, 2, x139886475983911, x139886475983879);
Obj x139886475460935 = PRIM_ISCONS(x139886475983911);
if (True == x139886475460935) {
Obj x139886475461255 = PRIM_CAR(x139886475983911);
Obj x139886475461287 = PRIM_EQ(symlambda, x139886475461255);
if (True == x139886475461287) {
Obj x139886475461575 = PRIM_CDR(x139886475983911);
Obj x139886475461607 = PRIM_ISCONS(x139886475461575);
if (True == x139886475461607) {
Obj x139886475461863 = PRIM_CDR(x139886475983911);
Obj x139886475461927 = PRIM_CAR(x139886475461863);
Obj args = x139886475461927;
Obj x139886475462247 = PRIM_CDR(x139886475983911);
Obj x139886475462279 = PRIM_CDR(x139886475462247);
Obj x139886475462311 = PRIM_ISCONS(x139886475462279);
if (True == x139886475462311) {
Obj x139886475462599 = PRIM_CDR(x139886475983911);
Obj x139886475462631 = PRIM_CDR(x139886475462599);
Obj x139886475462663 = PRIM_CAR(x139886475462631);
Obj body = x139886475462663;
Obj x139886475463015 = PRIM_CDR(x139886475983911);
Obj x139886475463047 = PRIM_CDR(x139886475463015);
Obj x139886475463079 = PRIM_CDR(x139886475463047);
Obj x139886475463111 = PRIM_EQ(Nil, x139886475463079);
if (True == x139886475463111) {
pushCont(co, 5, clofun6, 1, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = x139886475983879;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475460679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475460679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475460679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475460679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475460679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label5:
{
Obj x139886475463495 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475463559 = makeCons(x139886475463495, Nil);
Obj x139886475463591 = makeCons(args, x139886475463559);
Obj x139886475463655 = makeCons(symlambda, x139886475463591);
__nargs = 2;
__arg1 = x139886475463655;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj x139886475383943 = makeNative(12, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x139886475509479 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475509479) {
Obj x139886475468807 = PRIM_CAR(closureRef(co, 0));
Obj x139886475468839 = PRIM_EQ(symcontinuation, x139886475468807);
if (True == x139886475468839) {
Obj x139886475469159 = PRIM_CDR(closureRef(co, 0));
Obj x139886475469223 = PRIM_ISCONS(x139886475469159);
if (True == x139886475469223) {
Obj x139886475469575 = PRIM_CDR(closureRef(co, 0));
Obj x139886475469607 = PRIM_CAR(x139886475469575);
Obj val = x139886475469607;
Obj x139886475470119 = PRIM_CDR(closureRef(co, 0));
Obj x139886475470151 = PRIM_CDR(x139886475470119);
Obj x139886475470183 = PRIM_ISCONS(x139886475470151);
if (True == x139886475470183) {
Obj x139886475470503 = PRIM_CDR(closureRef(co, 0));
Obj x139886475470567 = PRIM_CDR(x139886475470503);
Obj x139886475470599 = PRIM_CAR(x139886475470567);
Obj body = x139886475470599;
Obj x139886475471047 = PRIM_CDR(closureRef(co, 0));
Obj x139886475471143 = PRIM_CDR(x139886475471047);
Obj x139886475471175 = PRIM_CDR(x139886475471143);
Obj x139886475471207 = PRIM_EQ(Nil, x139886475471175);
if (True == x139886475471207) {
pushCont(co, 7, clofun6, 2, body, val);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475383943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475383943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475383943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475383943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475383943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj x139886475471495 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 8, clofun6, 2, body, val);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = x139886475471495;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x139886475471527 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1 = x139886475471527;
pushCont(co, 9, clofun6, 3, fvs1, body, val);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x139886475471879 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 10, clofun6, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x139886475471879;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x139886475471911 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs2 = x139886475471911;
pushCont(co, 11, clofun6, 2, val, fvs2);
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

label11:
{
Obj x139886475472359 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886475472391 = makeCons(x139886475472359, Nil);
Obj x139886475472487 = makeCons(val, x139886475472391);
Obj x139886475472519 = makeCons(symlambda, x139886475472487);
Obj x139886475472551 = makeCons(x139886475472519, fvs2);
Obj x139886475472583 = makeCons(sym_37continuation, x139886475472551);
__nargs = 2;
__arg1 = x139886475472583;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj x139886475331079 = makeNative(16, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x139886475569927 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475569927) {
Obj x139886475570183 = PRIM_CAR(closureRef(co, 0));
Obj x139886475570215 = PRIM_EQ(symcall, x139886475570183);
if (True == x139886475570215) {
Obj x139886475570503 = PRIM_CDR(closureRef(co, 0));
Obj x139886475570535 = PRIM_ISCONS(x139886475570503);
if (True == x139886475570535) {
Obj x139886475571047 = PRIM_CDR(closureRef(co, 0));
Obj x139886475505991 = PRIM_CAR(x139886475571047);
Obj exp = x139886475505991;
Obj x139886475506695 = PRIM_CDR(closureRef(co, 0));
Obj x139886475506759 = PRIM_CDR(x139886475506695);
Obj x139886475506791 = PRIM_ISCONS(x139886475506759);
if (True == x139886475506791) {
Obj x139886475507335 = PRIM_CDR(closureRef(co, 0));
Obj x139886475507367 = PRIM_CDR(x139886475507335);
Obj x139886475507399 = PRIM_CAR(x139886475507367);
Obj cont = x139886475507399;
Obj x139886475507879 = PRIM_CDR(closureRef(co, 0));
Obj x139886475507911 = PRIM_CDR(x139886475507879);
Obj x139886475507943 = PRIM_CDR(x139886475507911);
Obj x139886475508007 = PRIM_EQ(Nil, x139886475507943);
if (True == x139886475508007) {
pushCont(co, 13, clofun6, 2, exp, cont);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475331079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475331079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475331079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475331079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475331079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj x139886475508391 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 14, clofun6, 1, cont);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x139886475508391;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x139886475508423 = __arg1;
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 15, clofun6, 1, x139886475508423);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = closureRef(co, 1);
__arg2 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x139886475508679 = __arg1;
Obj x139886475508423= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475508711 = makeCons(x139886475508679, Nil);
Obj x139886475508743 = makeCons(x139886475508423, x139886475508711);
Obj x139886475508775 = makeCons(symcall, x139886475508743);
__nargs = 2;
__arg1 = x139886475508775;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x139886475568839 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475568839) {
Obj x139886475569063 = PRIM_CAR(closureRef(co, 0));
Obj f = x139886475569063;
Obj x139886475569319 = PRIM_CDR(closureRef(co, 0));
Obj args = x139886475569319;
pushCont(co, 17, clofun6, 2, f, args);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj x139886475569543 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886475569671 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x139886475569543;
__arg2 = x139886475569671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x139886476187527 = __arg1;
Obj x139886476187559 = __arg2;
Obj x139886476187687 = __arg3;
Obj x139886475595943 = PRIM_EQ(Nil, x139886476187527);
if (True == x139886475595943) {
pushCont(co, 20, clofun6, 1, x139886476187687);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = x139886476187559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886475599239 = PRIM_ISCONS(x139886476187527);
if (True == x139886475599239) {
Obj x139886475599431 = PRIM_CAR(x139886476187527);
Obj hd = x139886475599431;
Obj x139886475599623 = PRIM_CDR(x139886476187527);
Obj tl = x139886475599623;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = hd;
__arg2 = makeNative(19, clofun6, 1, 3, tl, x139886476187559, x139886476187687);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label19:
{
Obj hd1 = __arg1;
Obj x139886475567303 = makeCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45list);
__arg1 = closureRef(co, 0);
__arg2 = x139886475567303;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x139886475596167 = __arg1;
Obj x139886476187687= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp = x139886475596167;
Obj x139886476185735 = makeNative(23, clofun6, 1, 2, exp, x139886476187687);
Obj x139886475598663 = PRIM_CAR(exp);
pushCont(co, 21, clofun6, 2, exp, x139886476185735);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35pair_63);
__arg1 = x139886475598663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x139886475598695 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476185735= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x139886475598695) {
pushCont(co, 22, clofun6, 1, x139886476185735);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x139886476185735;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj x139886475598983 = __arg1;
Obj x139886476185735= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475599015 = PRIM_EQ(x139886475598983, sym_37builtin);
if (True == x139886475599015) {
__nargs = 2;
__arg0 = x139886476185735;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x139886476185735;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj x139886476185767 = __arg1;
if (True == x139886476185767) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35wrap_45var);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886475596935 = PRIM_EQ(closureRef(co, 1), globalRef(symcora_47lib_47toc_35id));
if (True == x139886475596935) {
Obj x139886475597127 = makeCons(closureRef(co, 0), Nil);
Obj x139886475597159 = makeCons(symtailcall, x139886475597127);
__nargs = 2;
__arg1 = x139886475597159;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886475597319 = primGenSym();
Obj val = x139886475597319;
Obj x139886475597927 = makeCons(val, Nil);
pushCont(co, 24, clofun6, 1, x139886475597927);
__nargs = 2;
__arg0 = closureRef(co, 1);
__arg1 = val;
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
Obj x139886475598119 = __arg1;
Obj x139886475597927= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475598151 = makeCons(x139886475598119, Nil);
Obj x139886475598183 = makeCons(x139886475597927, x139886475598151);
Obj x139886475598247 = makeCons(symcontinuation, x139886475598183);
Obj x139886475598279 = makeCons(x139886475598247, Nil);
Obj x139886475598311 = makeCons(closureRef(co, 0), x139886475598279);
Obj x139886475598343 = makeCons(symcall, x139886475598311);
__nargs = 2;
__arg1 = x139886475598343;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x139886475463463 = __arg1;
Obj x139886475463527 = __arg2;
Obj x139886476185607 = makeNative(27, clofun6, 1, 2, x139886475463463, x139886475463527);
Obj x139886475984359 = primIsSymbol(x139886475463463);
if (True == x139886475984359) {
__nargs = 2;
__arg0 = x139886476185607;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 26, clofun6, 1, x139886476185607);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x139886475463463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj x139886475984615 = __arg1;
Obj x139886476185607= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x139886475984615) {
__nargs = 2;
__arg0 = x139886476185607;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x139886476185607;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj x139886476185703 = __arg1;
if (True == x139886476185703) {
__nargs = 2;
__arg0 = closureRef(co, 1);
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
PUSH_CONT_0(co, 28, clofun6);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj x139886474553287 = __arg1;
if (True == x139886474553287) {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886476145799 = makeNative(32, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x139886476079879 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886476079879) {
Obj x139886476080359 = PRIM_CAR(closureRef(co, 0));
Obj x139886476080391 = PRIM_EQ(symif, x139886476080359);
if (True == x139886476080391) {
Obj x139886476080743 = PRIM_CDR(closureRef(co, 0));
Obj x139886476080775 = PRIM_ISCONS(x139886476080743);
if (True == x139886476080775) {
Obj x139886476081191 = PRIM_CDR(closureRef(co, 0));
Obj x139886476081223 = PRIM_CAR(x139886476081191);
Obj a = x139886476081223;
Obj x139886476081671 = PRIM_CDR(closureRef(co, 0));
Obj x139886476081703 = PRIM_CDR(x139886476081671);
Obj x139886476081735 = PRIM_ISCONS(x139886476081703);
if (True == x139886476081735) {
Obj x139886476082247 = PRIM_CDR(closureRef(co, 0));
Obj x139886476082503 = PRIM_CDR(x139886476082247);
Obj x139886476082535 = PRIM_CAR(x139886476082503);
Obj b = x139886476082535;
Obj x139886476082951 = PRIM_CDR(closureRef(co, 0));
Obj x139886476082983 = PRIM_CDR(x139886476082951);
Obj x139886476083047 = PRIM_CDR(x139886476082983);
Obj x139886476083079 = PRIM_ISCONS(x139886476083047);
if (True == x139886476083079) {
Obj x139886475981159 = PRIM_CDR(closureRef(co, 0));
Obj x139886475981255 = PRIM_CDR(x139886475981159);
Obj x139886475981287 = PRIM_CDR(x139886475981255);
Obj x139886475981319 = PRIM_CAR(x139886475981287);
Obj c = x139886475981319;
Obj x139886475981991 = PRIM_CDR(closureRef(co, 0));
Obj x139886475982023 = PRIM_CDR(x139886475981991);
Obj x139886475982055 = PRIM_CDR(x139886475982023);
Obj x139886475982087 = PRIM_CDR(x139886475982055);
Obj x139886475982119 = PRIM_EQ(Nil, x139886475982087);
if (True == x139886475982119) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = a;
__arg2 = makeNative(29, clofun6, 1, 3, b, c, closureRef(co, 1));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476145799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476145799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476145799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476145799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476145799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476145799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label29:
{
Obj ra = __arg1;
pushCont(co, 30, clofun6, 1, ra);
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

label30:
{
Obj x139886475982727 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 31, clofun6, 2, x139886475982727, ra);
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

label31:
{
Obj x139886475983207 = __arg1;
Obj x139886475982727= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886475983239 = makeCons(x139886475983207, Nil);
Obj x139886475983303 = makeCons(x139886475982727, x139886475983239);
Obj x139886475983367 = makeCons(ra, x139886475983303);
Obj x139886475983399 = makeCons(symif, x139886475983367);
__nargs = 2;
__arg1 = x139886475983399;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj x139886476081063 = makeNative(35, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x139886476147847 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886476147847) {
Obj x139886476148359 = PRIM_CAR(closureRef(co, 0));
Obj x139886476148391 = PRIM_EQ(symdo, x139886476148359);
if (True == x139886476148391) {
Obj x139886476103719 = PRIM_CDR(closureRef(co, 0));
Obj x139886476103751 = PRIM_ISCONS(x139886476103719);
if (True == x139886476103751) {
Obj x139886476104455 = PRIM_CDR(closureRef(co, 0));
Obj x139886476104935 = PRIM_CAR(x139886476104455);
Obj a = x139886476104935;
Obj x139886476105383 = PRIM_CDR(closureRef(co, 0));
Obj x139886476105415 = PRIM_CDR(x139886476105383);
Obj x139886476105447 = PRIM_ISCONS(x139886476105415);
if (True == x139886476105447) {
Obj x139886476105863 = PRIM_CDR(closureRef(co, 0));
Obj x139886476105895 = PRIM_CDR(x139886476105863);
Obj x139886476105927 = PRIM_CAR(x139886476105895);
Obj b = x139886476105927;
Obj x139886476106471 = PRIM_CDR(closureRef(co, 0));
Obj x139886476106503 = PRIM_CDR(x139886476106471);
Obj x139886476106535 = PRIM_CDR(x139886476106503);
Obj x139886476106567 = PRIM_EQ(Nil, x139886476106535);
if (True == x139886476106567) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = a;
__arg2 = makeNative(33, clofun6, 1, 2, b, closureRef(co, 1));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476081063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476081063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476081063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476081063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476081063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj ra = __arg1;
Obj x139886476107079 = primIsSymbol(ra);
if (True == x139886476107079) {
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
pushCont(co, 34, clofun6, 1, ra);
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

label34:
{
Obj x139886476107687 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476107719 = makeCons(x139886476107687, Nil);
Obj x139886476107751 = makeCons(ra, x139886476107719);
Obj x139886476079111 = makeCons(symdo, x139886476107751);
__nargs = 2;
__arg1 = x139886476079111;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label35:
{
Obj x139886475984039 = makeNative(38, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x139886474257767 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886474257767) {
Obj x139886474258023 = PRIM_CAR(closureRef(co, 0));
Obj x139886474258055 = PRIM_EQ(symlet, x139886474258023);
if (True == x139886474258055) {
Obj x139886476186439 = PRIM_CDR(closureRef(co, 0));
Obj x139886476186471 = PRIM_ISCONS(x139886476186439);
if (True == x139886476186471) {
Obj x139886476187239 = PRIM_CDR(closureRef(co, 0));
Obj x139886476187303 = PRIM_CAR(x139886476187239);
Obj a = x139886476187303;
Obj x139886476188039 = PRIM_CDR(closureRef(co, 0));
Obj x139886476188071 = PRIM_CDR(x139886476188039);
Obj x139886476188103 = PRIM_ISCONS(x139886476188071);
if (True == x139886476188103) {
Obj x139886476188679 = PRIM_CDR(closureRef(co, 0));
Obj x139886476188711 = PRIM_CDR(x139886476188679);
Obj x139886476188743 = PRIM_CAR(x139886476188711);
Obj b = x139886476188743;
Obj x139886476189383 = PRIM_CDR(closureRef(co, 0));
Obj x139886476189415 = PRIM_CDR(x139886476189383);
Obj x139886476189447 = PRIM_CDR(x139886476189415);
Obj x139886476189479 = PRIM_ISCONS(x139886476189447);
if (True == x139886476189479) {
Obj x139886476145063 = PRIM_CDR(closureRef(co, 0));
Obj x139886476145095 = PRIM_CDR(x139886476145063);
Obj x139886476145127 = PRIM_CDR(x139886476145095);
Obj x139886476145159 = PRIM_CAR(x139886476145127);
Obj c = x139886476145159;
Obj x139886476145831 = PRIM_CDR(closureRef(co, 0));
Obj x139886476145863 = PRIM_CDR(x139886476145831);
Obj x139886476145927 = PRIM_CDR(x139886476145863);
Obj x139886476145959 = PRIM_CDR(x139886476145927);
Obj x139886476145991 = PRIM_EQ(Nil, x139886476145959);
if (True == x139886476145991) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = b;
__arg2 = makeNative(36, clofun6, 1, 3, a, c, closureRef(co, 1));
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475984039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475984039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475984039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475984039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475984039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475984039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj rb = __arg1;
pushCont(co, 37, clofun6, 1, rb);
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

label37:
{
Obj x139886476146791 = __arg1;
Obj rb= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476146823 = makeCons(x139886476146791, Nil);
Obj x139886476146855 = makeCons(rb, x139886476146823);
Obj x139886476146887 = makeCons(closureRef(co, 0), x139886476146855);
Obj x139886476146919 = makeCons(symlet, x139886476146887);
__nargs = 2;
__arg1 = x139886476146919;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
Obj x139886475469287 = makeNative(40, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x139886474554855 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886474554855) {
Obj x139886474555111 = PRIM_CAR(closureRef(co, 0));
Obj x139886474555143 = PRIM_EQ(sym_37closure, x139886474555111);
if (True == x139886474555143) {
Obj x139886474305543 = PRIM_CDR(closureRef(co, 0));
Obj x139886474305575 = PRIM_ISCONS(x139886474305543);
if (True == x139886474305575) {
Obj x139886474305895 = PRIM_CDR(closureRef(co, 0));
Obj x139886474305927 = PRIM_CAR(x139886474305895);
Obj x139886474305959 = PRIM_ISCONS(x139886474305927);
if (True == x139886474305959) {
Obj x139886474306343 = PRIM_CDR(closureRef(co, 0));
Obj x139886474306375 = PRIM_CAR(x139886474306343);
Obj x139886474306407 = PRIM_CAR(x139886474306375);
Obj x139886474306439 = PRIM_EQ(symlambda, x139886474306407);
if (True == x139886474306439) {
Obj x139886474306823 = PRIM_CDR(closureRef(co, 0));
Obj x139886474306855 = PRIM_CAR(x139886474306823);
Obj x139886474306887 = PRIM_CDR(x139886474306855);
Obj x139886474306919 = PRIM_ISCONS(x139886474306887);
if (True == x139886474306919) {
Obj x139886474307303 = PRIM_CDR(closureRef(co, 0));
Obj x139886474307335 = PRIM_CAR(x139886474307303);
Obj x139886474307367 = PRIM_CDR(x139886474307335);
Obj x139886474307399 = PRIM_CAR(x139886474307367);
Obj args = x139886474307399;
Obj x139886474307847 = PRIM_CDR(closureRef(co, 0));
Obj x139886474307879 = PRIM_CAR(x139886474307847);
Obj x139886474307911 = PRIM_CDR(x139886474307879);
Obj x139886474307943 = PRIM_CDR(x139886474307911);
Obj x139886474307975 = PRIM_ISCONS(x139886474307943);
if (True == x139886474307975) {
Obj x139886474308551 = PRIM_CDR(closureRef(co, 0));
Obj x139886474308583 = PRIM_CAR(x139886474308551);
Obj x139886474308615 = PRIM_CDR(x139886474308583);
Obj x139886474308647 = PRIM_CDR(x139886474308615);
Obj x139886474308679 = PRIM_CAR(x139886474308647);
Obj body = x139886474308679;
Obj x139886474309191 = PRIM_CDR(closureRef(co, 0));
Obj x139886474309223 = PRIM_CAR(x139886474309191);
Obj x139886474309255 = PRIM_CDR(x139886474309223);
Obj x139886474309287 = PRIM_CDR(x139886474309255);
Obj x139886474309319 = PRIM_CDR(x139886474309287);
Obj x139886474309351 = PRIM_EQ(Nil, x139886474309319);
if (True == x139886474309351) {
Obj x139886474309607 = PRIM_CDR(closureRef(co, 0));
Obj x139886474256391 = PRIM_CDR(x139886474309607);
Obj frees = x139886474256391;
pushCont(co, 39, clofun6, 2, args, frees);
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
__arg0 = x139886475469287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x139886474256903 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886474256935 = makeCons(x139886474256903, Nil);
Obj x139886474256967 = makeCons(args, x139886474256935);
Obj x139886474256999 = makeCons(symlambda, x139886474256967);
Obj x139886474257031 = makeCons(x139886474256999, frees);
Obj x139886474257063 = makeCons(sym_37closure, x139886474257031);
__nargs = 2;
__arg0 = closureRef(co, 1);
__arg1 = x139886474257063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x139886474554023 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886474554023) {
Obj x139886474554215 = PRIM_CAR(closureRef(co, 0));
Obj f = x139886474554215;
Obj x139886474554407 = PRIM_CDR(closureRef(co, 0));
Obj args = x139886474554407;
Obj x139886474554567 = makeCons(f, args);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45list);
__arg1 = x139886474554567;
__arg2 = Nil;
__arg3 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj x = __arg1;
Obj x139886474552519 = makeCons(x, Nil);
Obj x139886474552551 = makeCons(symreturn, x139886474552519);
__nargs = 2;
__arg1 = x139886474552551;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label42:
{
Obj x139886476187751 = __arg1;
Obj x139886476187815 = __arg2;
pushCont(co, 43, clofun6, 2, x139886476187815, x139886476187751);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x139886476187815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x139886474652039 = __arg1;
Obj x139886476187815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476187751= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x139886474652039) {
__nargs = 2;
__arg1 = x139886476187815;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886474652199 = primIsSymbol(x139886476187815);
if (True == x139886474652199) {
pushCont(co, 3, clofun7, 1, x139886476187815);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35index);
__arg1 = x139886476187815;
__arg2 = x139886476187751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886476079943 = makeNative(48, clofun6, 0, 2, x139886476187815, x139886476187751);
Obj x139886474581447 = PRIM_ISCONS(x139886476187815);
if (True == x139886474581447) {
Obj x139886474581671 = PRIM_CAR(x139886476187815);
Obj x139886474581703 = PRIM_EQ(symlambda, x139886474581671);
if (True == x139886474581703) {
Obj x139886474581927 = PRIM_CDR(x139886476187815);
Obj x139886474581959 = PRIM_ISCONS(x139886474581927);
if (True == x139886474581959) {
Obj x139886474582183 = PRIM_CDR(x139886476187815);
Obj x139886474582215 = PRIM_CAR(x139886474582183);
Obj args = x139886474582215;
Obj x139886474582503 = PRIM_CDR(x139886476187815);
Obj x139886474582535 = PRIM_CDR(x139886474582503);
Obj x139886474582567 = PRIM_ISCONS(x139886474582535);
if (True == x139886474582567) {
Obj x139886474582855 = PRIM_CDR(x139886476187815);
Obj x139886474582887 = PRIM_CDR(x139886474582855);
Obj x139886474582919 = PRIM_CAR(x139886474582887);
Obj body = x139886474582919;
Obj x139886474583271 = PRIM_CDR(x139886476187815);
Obj x139886474583303 = PRIM_CDR(x139886474583271);
Obj x139886474583335 = PRIM_CDR(x139886474583303);
Obj x139886474583367 = PRIM_EQ(Nil, x139886474583335);
if (True == x139886474583367) {
Obj x139886474583719 = makeCons(body, Nil);
Obj x139886474583751 = makeCons(args, x139886474583719);
Obj x139886474583783 = makeCons(symlambda, x139886474583751);
pushCont(co, 44, clofun6, 3, body, args, x139886476187751);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = x139886474583783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476079943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476079943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476079943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476079943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476079943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label44:
{
Obj x139886474583815 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476187751= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs1 = x139886474583815;
pushCont(co, 45, clofun6, 3, args, x139886476187751, fvs1);
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

label45:
{
Obj x139886474551463 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476187751= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x139886474551495 = makeCons(x139886474551463, Nil);
Obj x139886474551527 = makeCons(args, x139886474551495);
Obj x139886474551559 = makeCons(symlambda, x139886474551527);
pushCont(co, 46, clofun6, 2, fvs1, x139886474551559);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = x139886476187751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x139886474551719 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886474551559= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 47, clofun6, 1, x139886474551559);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x139886474551719;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x139886474551751 = __arg1;
Obj x139886474551559= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886474551783 = makeCons(x139886474551559, x139886474551751);
Obj x139886474551815 = makeCons(sym_37closure, x139886474551783);
__nargs = 2;
__arg1 = x139886474551815;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label48:
{
Obj x139886475983335 = makeNative(1, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x139886474642631 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886474642631) {
Obj x139886474642887 = PRIM_CAR(closureRef(co, 0));
Obj x139886474642919 = PRIM_EQ(symlet, x139886474642887);
if (True == x139886474642919) {
Obj x139886474643175 = PRIM_CDR(closureRef(co, 0));
Obj x139886474643207 = PRIM_ISCONS(x139886474643175);
if (True == x139886474643207) {
Obj x139886474643463 = PRIM_CDR(closureRef(co, 0));
Obj x139886474643495 = PRIM_CAR(x139886474643463);
Obj a = x139886474643495;
Obj x139886474643815 = PRIM_CDR(closureRef(co, 0));
Obj x139886474643847 = PRIM_CDR(x139886474643815);
Obj x139886474643879 = PRIM_ISCONS(x139886474643847);
if (True == x139886474643879) {
Obj x139886474644199 = PRIM_CDR(closureRef(co, 0));
Obj x139886474644231 = PRIM_CDR(x139886474644199);
Obj x139886474644263 = PRIM_CAR(x139886474644231);
Obj b = x139886474644263;
Obj x139886474644647 = PRIM_CDR(closureRef(co, 0));
Obj x139886474644679 = PRIM_CDR(x139886474644647);
Obj x139886474644711 = PRIM_CDR(x139886474644679);
Obj x139886474644743 = PRIM_ISCONS(x139886474644711);
if (True == x139886474644743) {
Obj x139886474645127 = PRIM_CDR(closureRef(co, 0));
Obj x139886474645159 = PRIM_CDR(x139886474645127);
Obj x139886474645191 = PRIM_CDR(x139886474645159);
Obj x139886474645223 = PRIM_CAR(x139886474645191);
Obj c = x139886474645223;
Obj x139886474580135 = PRIM_CDR(closureRef(co, 0));
Obj x139886474580167 = PRIM_CDR(x139886474580135);
Obj x139886474580199 = PRIM_CDR(x139886474580167);
Obj x139886474580231 = PRIM_CDR(x139886474580199);
Obj x139886474580263 = PRIM_EQ(Nil, x139886474580231);
if (True == x139886474580263) {
pushCont(co, 49, clofun6, 2, c, a);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = closureRef(co, 1);
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475983335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj x139886474580583 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 0, clofun7, 2, x139886474580583, a);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = closureRef(co, 1);
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
Obj x139886474580775 = __arg1;
Obj x139886474580583= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886474580807 = makeCons(x139886474580775, Nil);
Obj x139886474580839 = makeCons(x139886474580583, x139886474580807);
Obj x139886474580871 = makeCons(a, x139886474580839);
Obj x139886474580903 = makeCons(symlet, x139886474580871);
__nargs = 2;
__arg1 = x139886474580903;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x139886474641703 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886474641703) {
Obj x139886474641895 = PRIM_CAR(closureRef(co, 0));
Obj f = x139886474641895;
Obj x139886474642087 = PRIM_CDR(closureRef(co, 0));
Obj args = x139886474642087;
pushCont(co, 2, clofun7, 2, f, args);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj x139886474642279 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886474642375 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x139886474642279;
__arg2 = x139886474642375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x139886474652359 = __arg1;
Obj x139886476187815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pos = x139886474652359;
Obj x139886474653351 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == x139886474653351) {
__nargs = 2;
__arg1 = x139886476187815;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886474653511 = makeCons(pos, Nil);
Obj x139886474653543 = makeCons(sym_37closure_45ref, x139886474653511);
__nargs = 2;
__arg1 = x139886474653543;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label4:
{
Obj x139886475383815 = __arg1;
pushCont(co, 5, clofun7, 1, x139886475383815);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x139886475383815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x139886475461735 = __arg1;
Obj x139886475383815= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x139886475461735) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886475461895 = primIsSymbol(x139886475383815);
if (True == x139886475461895) {
Obj x139886475461991 = makeCons(x139886475383815, Nil);
__nargs = 2;
__arg1 = x139886475461991;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886475330055 = makeNative(7, clofun7, 0, 1, x139886475383815);
Obj x139886475127719 = PRIM_ISCONS(x139886475383815);
if (True == x139886475127719) {
Obj x139886475128007 = PRIM_CAR(x139886475383815);
Obj x139886475128039 = PRIM_EQ(symlambda, x139886475128007);
if (True == x139886475128039) {
Obj x139886475128359 = PRIM_CDR(x139886475383815);
Obj x139886475128391 = PRIM_ISCONS(x139886475128359);
if (True == x139886475128391) {
Obj x139886475128615 = PRIM_CDR(x139886475383815);
Obj x139886475128775 = PRIM_CAR(x139886475128615);
Obj args = x139886475128775;
Obj x139886474649927 = PRIM_CDR(x139886475383815);
Obj x139886474649959 = PRIM_CDR(x139886474649927);
Obj x139886474649991 = PRIM_ISCONS(x139886474649959);
if (True == x139886474649991) {
Obj x139886474650375 = PRIM_CDR(x139886475383815);
Obj x139886474650407 = PRIM_CDR(x139886474650375);
Obj x139886474650471 = PRIM_CAR(x139886474650407);
Obj body = x139886474650471;
Obj x139886474650823 = PRIM_CDR(x139886475383815);
Obj x139886474650855 = PRIM_CDR(x139886474650823);
Obj x139886474650887 = PRIM_CDR(x139886474650855);
Obj x139886474650919 = PRIM_EQ(Nil, x139886474650887);
if (True == x139886474650919) {
pushCont(co, 6, clofun7, 1, args);
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
__arg0 = x139886475330055;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475330055;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475330055;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475330055;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475330055;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label6:
{
Obj x139886474651079 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = x139886474651079;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x139886475333127 = makeNative(9, clofun7, 0, 1, closureRef(co, 0));
Obj x139886475184071 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475184071) {
Obj x139886475184327 = PRIM_CAR(closureRef(co, 0));
Obj x139886475184359 = PRIM_EQ(symif, x139886475184327);
if (True == x139886475184359) {
Obj x139886475184615 = PRIM_CDR(closureRef(co, 0));
Obj x139886475184647 = PRIM_ISCONS(x139886475184615);
if (True == x139886475184647) {
Obj x139886475184935 = PRIM_CDR(closureRef(co, 0));
Obj x139886475184967 = PRIM_CAR(x139886475184935);
Obj x = x139886475184967;
Obj x139886475185351 = PRIM_CDR(closureRef(co, 0));
Obj x139886475185383 = PRIM_CDR(x139886475185351);
Obj x139886475185415 = PRIM_ISCONS(x139886475185383);
if (True == x139886475185415) {
Obj x139886475185831 = PRIM_CDR(closureRef(co, 0));
Obj x139886475185863 = PRIM_CDR(x139886475185831);
Obj x139886475185895 = PRIM_CAR(x139886475185863);
Obj y = x139886475185895;
Obj x139886475124967 = PRIM_CDR(closureRef(co, 0));
Obj x139886475124999 = PRIM_CDR(x139886475124967);
Obj x139886475125031 = PRIM_CDR(x139886475124999);
Obj x139886475125063 = PRIM_ISCONS(x139886475125031);
if (True == x139886475125063) {
Obj x139886475125575 = PRIM_CDR(closureRef(co, 0));
Obj x139886475125671 = PRIM_CDR(x139886475125575);
Obj x139886475125703 = PRIM_CDR(x139886475125671);
Obj x139886475125735 = PRIM_CAR(x139886475125703);
Obj z = x139886475125735;
Obj x139886475126343 = PRIM_CDR(closureRef(co, 0));
Obj x139886475126375 = PRIM_CDR(x139886475126343);
Obj x139886475126407 = PRIM_CDR(x139886475126375);
Obj x139886475126439 = PRIM_CDR(x139886475126407);
Obj x139886475126471 = PRIM_EQ(Nil, x139886475126439);
if (True == x139886475126471) {
Obj x139886475126855 = makeCons(z, Nil);
Obj x139886475126951 = makeCons(y, x139886475126855);
Obj x139886475126983 = makeCons(x, x139886475126951);
PUSH_CONT_0(co, 8, clofun7);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = x139886475126983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475333127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475333127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475333127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475333127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475333127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475333127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj x139886475127015 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = x139886475127015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x139886476186663 = makeNative(11, clofun7, 0, 1, closureRef(co, 0));
Obj x139886475192839 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475192839) {
Obj x139886475193159 = PRIM_CAR(closureRef(co, 0));
Obj x139886475193191 = PRIM_EQ(symdo, x139886475193159);
if (True == x139886475193191) {
Obj x139886475193479 = PRIM_CDR(closureRef(co, 0));
Obj x139886475193511 = PRIM_ISCONS(x139886475193479);
if (True == x139886475193511) {
Obj x139886475193831 = PRIM_CDR(closureRef(co, 0));
Obj x139886475193863 = PRIM_CAR(x139886475193831);
Obj x = x139886475193863;
Obj x139886475194247 = PRIM_CDR(closureRef(co, 0));
Obj x139886475194279 = PRIM_CDR(x139886475194247);
Obj x139886475194311 = PRIM_ISCONS(x139886475194279);
if (True == x139886475194311) {
Obj x139886475182439 = PRIM_CDR(closureRef(co, 0));
Obj x139886475182471 = PRIM_CDR(x139886475182439);
Obj x139886475182503 = PRIM_CAR(x139886475182471);
Obj y = x139886475182503;
Obj x139886475182951 = PRIM_CDR(closureRef(co, 0));
Obj x139886475182983 = PRIM_CDR(x139886475182951);
Obj x139886475183015 = PRIM_CDR(x139886475182983);
Obj x139886475183079 = PRIM_EQ(Nil, x139886475183015);
if (True == x139886475183079) {
Obj x139886475183399 = makeCons(y, Nil);
Obj x139886475183431 = makeCons(x, x139886475183399);
PUSH_CONT_0(co, 10, clofun7);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = x139886475183431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476186663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476186663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476186663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476186663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476186663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj x139886475183463 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = x139886475183463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x139886476146535 = makeNative(15, clofun7, 0, 1, closureRef(co, 0));
Obj x139886475243847 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475243847) {
Obj x139886475244199 = PRIM_CAR(closureRef(co, 0));
Obj x139886475244231 = PRIM_EQ(symlet, x139886475244199);
if (True == x139886475244231) {
Obj x139886475244583 = PRIM_CDR(closureRef(co, 0));
Obj x139886475244615 = PRIM_ISCONS(x139886475244583);
if (True == x139886475244615) {
Obj x139886475245031 = PRIM_CDR(closureRef(co, 0));
Obj x139886475245063 = PRIM_CAR(x139886475245031);
Obj a = x139886475245063;
Obj x139886475245575 = PRIM_CDR(closureRef(co, 0));
Obj x139886475245607 = PRIM_CDR(x139886475245575);
Obj x139886475245639 = PRIM_ISCONS(x139886475245607);
if (True == x139886475245639) {
Obj x139886475246055 = PRIM_CDR(closureRef(co, 0));
Obj x139886475246087 = PRIM_CDR(x139886475246055);
Obj x139886475246119 = PRIM_CAR(x139886475246087);
Obj b = x139886475246119;
Obj x139886475246695 = PRIM_CDR(closureRef(co, 0));
Obj x139886475246727 = PRIM_CDR(x139886475246695);
Obj x139886475246759 = PRIM_CDR(x139886475246727);
Obj x139886475246791 = PRIM_ISCONS(x139886475246759);
if (True == x139886475246791) {
Obj x139886475247367 = PRIM_CDR(closureRef(co, 0));
Obj x139886475247399 = PRIM_CDR(x139886475247367);
Obj x139886475247431 = PRIM_CDR(x139886475247399);
Obj x139886475247463 = PRIM_CAR(x139886475247431);
Obj c = x139886475247463;
Obj x139886475190759 = PRIM_CDR(closureRef(co, 0));
Obj x139886475190791 = PRIM_CDR(x139886475190759);
Obj x139886475190823 = PRIM_CDR(x139886475190791);
Obj x139886475190855 = PRIM_CDR(x139886475190823);
Obj x139886475190887 = PRIM_EQ(Nil, x139886475190855);
if (True == x139886475190887) {
pushCont(co, 12, clofun7, 2, c, a);
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
__arg0 = x139886476146535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476146535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476146535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476146535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476146535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476146535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj x139886475191143 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 13, clofun7, 2, a, x139886475191143);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x139886475191975 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475191143= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886475192071 = makeCons(a, Nil);
pushCont(co, 14, clofun7, 1, x139886475191143);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = x139886475191975;
__arg2 = x139886475192071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x139886475192103 = __arg1;
Obj x139886475191143= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35union);
__arg1 = x139886475191143;
__arg2 = x139886475192103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x139886476079623 = makeNative(16, clofun7, 0, 1, closureRef(co, 0));
Obj x139886475270343 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475270343) {
Obj x139886475270663 = PRIM_CAR(closureRef(co, 0));
Obj x139886475270695 = PRIM_EQ(sym_37closure, x139886475270663);
if (True == x139886475270695) {
Obj x139886475270983 = PRIM_CDR(closureRef(co, 0));
Obj x139886475271079 = PRIM_ISCONS(x139886475270983);
if (True == x139886475271079) {
Obj x139886475271367 = PRIM_CDR(closureRef(co, 0));
Obj x139886475271399 = PRIM_CAR(x139886475271367);
Obj lam = x139886475271399;
Obj x139886475271751 = PRIM_CDR(closureRef(co, 0));
Obj x139886475271783 = PRIM_CDR(x139886475271751);
Obj more = x139886475271783;
Obj x139886475271943 = makeCons(lam, more);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = x139886475271943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476079623;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476079623;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476079623;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj x139886475981351 = makeNative(17, clofun7, 0, 1, closureRef(co, 0));
Obj x139886475268263 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475268263) {
Obj x139886475268551 = PRIM_CAR(closureRef(co, 0));
Obj x139886475268615 = PRIM_EQ(symreturn, x139886475268551);
if (True == x139886475268615) {
Obj x139886475268903 = PRIM_CDR(closureRef(co, 0));
Obj x139886475268935 = PRIM_ISCONS(x139886475268903);
if (True == x139886475268935) {
Obj x139886475269255 = PRIM_CDR(closureRef(co, 0));
Obj x139886475269287 = PRIM_CAR(x139886475269255);
Obj x = x139886475269287;
Obj x139886475269703 = PRIM_CDR(closureRef(co, 0));
Obj x139886475269735 = PRIM_CDR(x139886475269703);
Obj x139886475269767 = PRIM_EQ(Nil, x139886475269735);
if (True == x139886475269767) {
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
__arg0 = x139886475981351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475981351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj x139886475983719 = makeNative(19, clofun7, 0, 1, closureRef(co, 0));
Obj x139886475330087 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475330087) {
Obj x139886475330407 = PRIM_CAR(closureRef(co, 0));
Obj x139886475330439 = PRIM_EQ(symcall, x139886475330407);
if (True == x139886475330439) {
Obj x139886475330791 = PRIM_CDR(closureRef(co, 0));
Obj x139886475330823 = PRIM_ISCONS(x139886475330791);
if (True == x139886475330823) {
Obj x139886475331175 = PRIM_CDR(closureRef(co, 0));
Obj x139886475331207 = PRIM_CAR(x139886475331175);
Obj exp = x139886475331207;
Obj x139886475331655 = PRIM_CDR(closureRef(co, 0));
Obj x139886475331687 = PRIM_CDR(x139886475331655);
Obj x139886475331751 = PRIM_ISCONS(x139886475331687);
if (True == x139886475331751) {
Obj x139886475332103 = PRIM_CDR(closureRef(co, 0));
Obj x139886475332135 = PRIM_CDR(x139886475332103);
Obj x139886475332167 = PRIM_CAR(x139886475332135);
Obj cont = x139886475332167;
Obj x139886475332647 = PRIM_CDR(closureRef(co, 0));
Obj x139886475332679 = PRIM_CDR(x139886475332647);
Obj x139886475332711 = PRIM_CDR(x139886475332679);
Obj x139886475332743 = PRIM_EQ(Nil, x139886475332711);
if (True == x139886475332743) {
Obj x139886475333159 = makeCons(cont, Nil);
Obj x139886475333191 = makeCons(exp, x139886475333159);
PUSH_CONT_0(co, 18, clofun7);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = x139886475333191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475983719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj x139886475333223 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = x139886475333223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x139886475568679 = makeNative(20, clofun7, 0, 1, closureRef(co, 0));
Obj x139886475385383 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475385383) {
Obj x139886475385639 = PRIM_CAR(closureRef(co, 0));
Obj x139886475385671 = PRIM_EQ(symtailcall, x139886475385639);
if (True == x139886475385671) {
Obj x139886475385959 = PRIM_CDR(closureRef(co, 0));
Obj x139886475385991 = PRIM_ISCONS(x139886475385959);
if (True == x139886475385991) {
Obj x139886475386311 = PRIM_CDR(closureRef(co, 0));
Obj x139886475386343 = PRIM_CAR(x139886475386311);
Obj exp = x139886475386343;
Obj x139886475386727 = PRIM_CDR(closureRef(co, 0));
Obj x139886475386791 = PRIM_CDR(x139886475386727);
Obj x139886475386823 = PRIM_EQ(Nil, x139886475386791);
if (True == x139886475386823) {
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
__arg0 = x139886475568679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475568679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475568679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475568679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj x139886475508967 = makeNative(22, clofun7, 0, 1, closureRef(co, 0));
Obj x139886475464423 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475464423) {
Obj x139886475464679 = PRIM_CAR(closureRef(co, 0));
Obj x139886475382791 = PRIM_EQ(symcontinuation, x139886475464679);
if (True == x139886475382791) {
Obj x139886475383047 = PRIM_CDR(closureRef(co, 0));
Obj x139886475383079 = PRIM_ISCONS(x139886475383047);
if (True == x139886475383079) {
Obj x139886475383367 = PRIM_CDR(closureRef(co, 0));
Obj x139886475383399 = PRIM_CAR(x139886475383367);
Obj arg = x139886475383399;
Obj x139886475383719 = PRIM_CDR(closureRef(co, 0));
Obj x139886475383751 = PRIM_CDR(x139886475383719);
Obj x139886475383783 = PRIM_ISCONS(x139886475383751);
if (True == x139886475383783) {
Obj x139886475384167 = PRIM_CDR(closureRef(co, 0));
Obj x139886475384199 = PRIM_CDR(x139886475384167);
Obj x139886475384231 = PRIM_CAR(x139886475384199);
Obj body = x139886475384231;
Obj x139886475384615 = PRIM_CDR(closureRef(co, 0));
Obj x139886475384647 = PRIM_CDR(x139886475384615);
Obj x139886475384679 = PRIM_CDR(x139886475384647);
Obj x139886475384711 = PRIM_EQ(Nil, x139886475384679);
if (True == x139886475384711) {
pushCont(co, 21, clofun7, 1, arg);
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
__arg0 = x139886475508967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475508967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475508967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475508967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475508967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj x139886475384871 = __arg1;
Obj arg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = x139886475384871;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x139886475463367 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475463367) {
Obj x139886475463623 = PRIM_CAR(closureRef(co, 0));
Obj f = x139886475463623;
Obj x139886475463815 = PRIM_CDR(closureRef(co, 0));
Obj args = x139886475463815;
Obj x139886475464135 = makeCons(f, args);
PUSH_CONT_0(co, 23, clofun7);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = x139886475464135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj x139886475464167 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = x139886475464167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x139886475982567 = __arg1;
Obj x139886475983975 = makeNative(25, clofun7, 0, 1, x139886475982567);
Obj x139886475472199 = PRIM_ISCONS(x139886475982567);
if (True == x139886475472199) {
Obj x139886475472423 = PRIM_CAR(x139886475982567);
Obj x139886475472455 = PRIM_EQ(sym_37const, x139886475472423);
if (True == x139886475472455) {
Obj x139886475472679 = PRIM_CDR(x139886475982567);
Obj x139886475472711 = PRIM_ISCONS(x139886475472679);
if (True == x139886475472711) {
Obj x139886475460647 = PRIM_CDR(x139886475982567);
Obj x139886475460711 = PRIM_CAR(x139886475460647);
Obj x139886475460999 = PRIM_CDR(x139886475982567);
Obj x139886475461031 = PRIM_CDR(x139886475460999);
Obj x139886475461063 = PRIM_EQ(Nil, x139886475461031);
if (True == x139886475461063) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x139886475983975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475983975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj x139886475567495 = makeNative(26, clofun7, 0, 1, closureRef(co, 0));
Obj x139886475470535 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475470535) {
Obj x139886475470791 = PRIM_CAR(closureRef(co, 0));
Obj x139886475470823 = PRIM_EQ(sym_37global, x139886475470791);
if (True == x139886475470823) {
Obj x139886475471079 = PRIM_CDR(closureRef(co, 0));
Obj x139886475471111 = PRIM_ISCONS(x139886475471079);
if (True == x139886475471111) {
Obj x139886475471367 = PRIM_CDR(closureRef(co, 0));
Obj x139886475471399 = PRIM_CAR(x139886475471367);
Obj x139886475471719 = PRIM_CDR(closureRef(co, 0));
Obj x139886475471751 = PRIM_CDR(x139886475471719);
Obj x139886475471783 = PRIM_EQ(Nil, x139886475471751);
if (True == x139886475471783) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x139886475567495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475567495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475567495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475567495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj x139886475570343 = makeNative(27, clofun7, 0, 1, closureRef(co, 0));
Obj x139886475509703 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475509703) {
Obj x139886475468999 = PRIM_CAR(closureRef(co, 0));
Obj x139886475469031 = PRIM_EQ(sym_37builtin, x139886475468999);
if (True == x139886475469031) {
Obj x139886475469351 = PRIM_CDR(closureRef(co, 0));
Obj x139886475469383 = PRIM_ISCONS(x139886475469351);
if (True == x139886475469383) {
Obj x139886475469639 = PRIM_CDR(closureRef(co, 0));
Obj x139886475469671 = PRIM_CAR(x139886475469639);
Obj x139886475470023 = PRIM_CDR(closureRef(co, 0));
Obj x139886475470055 = PRIM_CDR(x139886475470023);
Obj x139886475470087 = PRIM_EQ(Nil, x139886475470055);
if (True == x139886475470087) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x139886475570343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475570343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475570343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475570343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj x139886475469799 = makeNative(28, clofun7, 0, 1, closureRef(co, 0));
Obj x139886475507975 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475507975) {
Obj x139886475508231 = PRIM_CAR(closureRef(co, 0));
Obj x139886475508263 = PRIM_EQ(symquote, x139886475508231);
if (True == x139886475508263) {
Obj x139886475508519 = PRIM_CDR(closureRef(co, 0));
Obj x139886475508551 = PRIM_ISCONS(x139886475508519);
if (True == x139886475508551) {
Obj x139886475508807 = PRIM_CDR(closureRef(co, 0));
Obj x139886475508839 = PRIM_CAR(x139886475508807);
Obj x139886475509191 = PRIM_CDR(closureRef(co, 0));
Obj x139886475509223 = PRIM_CDR(x139886475509191);
Obj x139886475509255 = PRIM_EQ(Nil, x139886475509223);
if (True == x139886475509255) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x139886475469799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj x139886475461511 = makeNative(29, clofun7, 0, 0);
Obj x139886475570919 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475570919) {
Obj x139886475506119 = PRIM_CAR(closureRef(co, 0));
Obj x139886475506215 = PRIM_EQ(sym_37closure_45ref, x139886475506119);
if (True == x139886475506215) {
Obj x139886475506535 = PRIM_CDR(closureRef(co, 0));
Obj x139886475506631 = PRIM_ISCONS(x139886475506535);
if (True == x139886475506631) {
Obj x139886475507015 = PRIM_CDR(closureRef(co, 0));
Obj x139886475507047 = PRIM_CAR(x139886475507015);
Obj x139886475507463 = PRIM_CDR(closureRef(co, 0));
Obj x139886475507495 = PRIM_CDR(x139886475507463);
Obj x139886475507527 = PRIM_EQ(Nil, x139886475507495);
if (True == x139886475507527) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x139886475461511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475461511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475461511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475461511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x139886476186983 = __arg1;
Obj x139886476187207 = __arg2;
Obj x139886475567719 = PRIM_EQ(Nil, x139886476186983);
if (True == x139886475567719) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886476147719 = makeNative(32, clofun7, 0, 2, x139886476186983, x139886476187207);
Obj x139886475568935 = PRIM_ISCONS(x139886476186983);
if (True == x139886475568935) {
Obj x139886475569095 = PRIM_CAR(x139886476186983);
Obj x = x139886475569095;
Obj x139886475569255 = PRIM_CDR(x139886476186983);
Obj y = x139886475569255;
pushCont(co, 31, clofun7, 3, y, x139886476187207, x139886476147719);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35elem_63);
__arg1 = x;
__arg2 = x139886476187207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476147719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label31:
{
Obj x139886475569415 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476187207= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476147719= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x139886475569415) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = y;
__arg2 = x139886476187207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476147719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj x139886475568039 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475568039) {
Obj x139886475568263 = PRIM_CAR(closureRef(co, 0));
Obj x = x139886475568263;
Obj x139886475568455 = PRIM_CDR(closureRef(co, 0));
Obj y = x139886475568455;
pushCont(co, 33, clofun7, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = y;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x139886475568647 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475568711 = makeCons(x, x139886475568647);
__nargs = 2;
__arg1 = x139886475568711;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj x139886476186855 = __arg1;
Obj x139886476186951 = __arg2;
Obj x139886475598215 = PRIM_EQ(Nil, x139886476186855);
if (True == x139886475598215) {
__nargs = 2;
__arg1 = x139886476186951;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886476147463 = makeNative(36, clofun7, 0, 2, x139886476186855, x139886476186951);
Obj x139886475599367 = PRIM_ISCONS(x139886476186855);
if (True == x139886475599367) {
Obj x139886475599527 = PRIM_CAR(x139886476186855);
Obj x = x139886475599527;
Obj x139886475599687 = PRIM_CDR(x139886476186855);
Obj y = x139886475599687;
pushCont(co, 35, clofun7, 3, y, x139886476186951, x139886476147463);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35elem_63);
__arg1 = x;
__arg2 = x139886476186951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476147463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label35:
{
Obj x139886475599847 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476186951= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476147463= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x139886475599847) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35union);
__arg1 = y;
__arg2 = x139886476186951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476147463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj x139886475598535 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475598535) {
Obj x139886475598727 = PRIM_CAR(closureRef(co, 0));
Obj x = x139886475598727;
Obj x139886475598919 = PRIM_CDR(closureRef(co, 0));
Obj y = x139886475598919;
pushCont(co, 37, clofun7, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35union);
__arg1 = y;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj x139886475599111 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475599143 = makeCons(x, x139886475599111);
__nargs = 2;
__arg1 = x139886475599143;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label38:
{
Obj x139886476080007 = __arg1;
Obj x139886476080039 = __arg2;
Obj x139886476080327 = __arg3;
Obj x139886476103783 = makeNative(42, clofun7, 1, 3, x139886476080007, x139886476080327, x139886476080039);
pushCont(co, 39, clofun7, 2, x139886476080327, x139886476103783);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35number_63);
__arg1 = x139886476080327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x139886475597351 = __arg1;
Obj x139886476080327= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476103783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x139886475597351) {
__nargs = 2;
__arg0 = x139886476103783;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886475597511 = primIsString(x139886476080327);
if (True == x139886475597511) {
__nargs = 2;
__arg0 = x139886476103783;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 40, clofun7, 2, x139886476080327, x139886476103783);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35boolean_63);
__arg1 = x139886476080327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label40:
{
Obj x139886475597671 = __arg1;
Obj x139886476080327= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476103783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x139886475597671) {
__nargs = 2;
__arg0 = x139886476103783;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 41, clofun7, 1, x139886476103783);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = x139886476080327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj x139886475597831 = __arg1;
Obj x139886476103783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x139886475597831) {
__nargs = 2;
__arg0 = x139886476103783;
__arg1 = True;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = x139886476103783;
__arg1 = False;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj x139886476103815 = __arg1;
if (True == x139886476103815) {
Obj x139886475182695 = makeCons(closureRef(co, 1), Nil);
Obj x139886475182727 = makeCons(sym_37const, x139886475182695);
__nargs = 2;
__arg1 = x139886475182727;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886475567239 = makeNative(44, clofun7, 0, 3, closureRef(co, 1), closureRef(co, 0), closureRef(co, 2));
Obj x139886475984263 = PRIM_ISCONS(closureRef(co, 1));
if (True == x139886475984263) {
Obj x139886475984519 = PRIM_CAR(closureRef(co, 1));
Obj x139886475984583 = PRIM_EQ(symquote, x139886475984519);
if (True == x139886475984583) {
Obj x139886475984839 = PRIM_CDR(closureRef(co, 1));
Obj x139886475984871 = PRIM_ISCONS(x139886475984839);
if (True == x139886475984871) {
Obj x139886475596007 = PRIM_CDR(closureRef(co, 1));
Obj x139886475596039 = PRIM_CAR(x139886475596007);
Obj x = x139886475596039;
Obj x139886475596391 = PRIM_CDR(closureRef(co, 1));
Obj x139886475596423 = PRIM_CDR(x139886475596391);
Obj x139886475596455 = PRIM_EQ(Nil, x139886475596423);
if (True == x139886475596455) {
pushCont(co, 43, clofun7, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35add_45symbol_45to_45list);
__arg1 = x;
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475567239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475567239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475567239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475567239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label43:
{
Obj x139886475596679 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475596839 = makeCons(x, Nil);
Obj x139886475596871 = makeCons(sym_37const, x139886475596839);
__nargs = 2;
__arg1 = x139886475596871;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label44:
{
Obj x139886475183047 = primIsSymbol(closureRef(co, 0));
if (True == x139886475183047) {
PUSH_CONT_0(co, 18, clofun8);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35elem_63);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886475463303 = makeNative(47, clofun7, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x139886476083015 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886476083015) {
Obj x139886475980871 = PRIM_CAR(closureRef(co, 0));
Obj x139886475980903 = PRIM_EQ(symlambda, x139886475980871);
if (True == x139886475980903) {
Obj x139886475981191 = PRIM_CDR(closureRef(co, 0));
Obj x139886475981223 = PRIM_ISCONS(x139886475981191);
if (True == x139886475981223) {
Obj x139886475981543 = PRIM_CDR(closureRef(co, 0));
Obj x139886475981575 = PRIM_CAR(x139886475981543);
Obj args = x139886475981575;
Obj x139886475981895 = PRIM_CDR(closureRef(co, 0));
Obj x139886475981927 = PRIM_CDR(x139886475981895);
Obj x139886475981959 = PRIM_ISCONS(x139886475981927);
if (True == x139886475981959) {
Obj x139886475982279 = PRIM_CDR(closureRef(co, 0));
Obj x139886475982311 = PRIM_CDR(x139886475982279);
Obj x139886475982343 = PRIM_CAR(x139886475982311);
Obj body = x139886475982343;
Obj x139886475982759 = PRIM_CDR(closureRef(co, 0));
Obj x139886475982855 = PRIM_CDR(x139886475982759);
Obj x139886475982919 = PRIM_CDR(x139886475982855);
Obj x139886475982983 = PRIM_EQ(Nil, x139886475982919);
if (True == x139886475982983) {
pushCont(co, 45, clofun7, 2, body, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35append);
__arg1 = args;
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475463303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475463303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475463303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475463303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475463303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label45:
{
Obj x139886475983431 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 46, clofun7, 1, args);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = x139886475983431;
__arg2 = closureRef(co, 2);
__arg3 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x139886475983495 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475983527 = makeCons(x139886475983495, Nil);
Obj x139886475983559 = makeCons(args, x139886475983527);
Obj x139886475983591 = makeCons(symlambda, x139886475983559);
__nargs = 2;
__arg1 = x139886475983591;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label47:
{
Obj x139886475386631 = makeNative(48, clofun7, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x139886476106919 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886476106919) {
Obj x139886476107175 = PRIM_CAR(closureRef(co, 0));
Obj x139886476107207 = PRIM_EQ(symif, x139886476107175);
if (True == x139886476107207) {
Obj x139886476107463 = PRIM_CDR(closureRef(co, 0));
Obj x139886476107495 = PRIM_ISCONS(x139886476107463);
if (True == x139886476107495) {
Obj x139886476079143 = PRIM_CDR(closureRef(co, 0));
Obj x139886476079175 = PRIM_CAR(x139886476079143);
Obj x139886476079207 = PRIM_ISCONS(x139886476079175);
if (True == x139886476079207) {
Obj x139886476079591 = PRIM_CDR(closureRef(co, 0));
Obj x139886476079655 = PRIM_CAR(x139886476079591);
Obj x139886476079687 = PRIM_CAR(x139886476079655);
Obj x139886476079719 = PRIM_EQ(symif, x139886476079687);
if (True == x139886476079719) {
Obj x139886476080135 = PRIM_CDR(closureRef(co, 0));
Obj x139886476080167 = PRIM_CAR(x139886476080135);
Obj x139886476080199 = PRIM_CDR(x139886476080167);
Obj exp1 = x139886476080199;
Obj x139886476080487 = PRIM_CDR(closureRef(co, 0));
Obj x139886476080519 = PRIM_CDR(x139886476080487);
Obj exp2 = x139886476080519;
Obj x139886476080679 = primGenSym();
Obj f = x139886476080679;
Obj x139886476080839 = primGenSym();
Obj v = x139886476080839;
Obj x139886476081511 = makeCons(v, Nil);
Obj x139886476081831 = makeCons(v, exp2);
Obj x139886476081863 = makeCons(symif, x139886476081831);
Obj x139886476081895 = makeCons(x139886476081863, Nil);
Obj x139886476081927 = makeCons(x139886476081511, x139886476081895);
Obj x139886476081991 = makeCons(symlambda, x139886476081927);
Obj x139886476082279 = makeCons(symif, exp1);
Obj x139886476082311 = makeCons(x139886476082279, Nil);
Obj x139886476082343 = makeCons(f, x139886476082311);
Obj x139886476082375 = makeCons(x139886476082343, Nil);
Obj x139886476082407 = makeCons(x139886476081991, x139886476082375);
Obj x139886476082439 = makeCons(f, x139886476082407);
Obj x139886476082471 = makeCons(symlet, x139886476082439);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = x139886476082471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475386631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475386631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475386631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475386631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475386631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj x139886476145895 = makeNative(1, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x139886476105543 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886476105543) {
Obj x139886476105799 = PRIM_CAR(closureRef(co, 0));
Obj x139886476105831 = PRIM_EQ(symif, x139886476105799);
if (True == x139886476105831) {
Obj x139886476106023 = PRIM_CDR(closureRef(co, 0));
Obj args = x139886476106023;
pushCont(co, 49, clofun7, 1, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476145895;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476145895;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj x139886476106311 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 0, clofun8);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x139886476106311;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x139886476106343 = __arg1;
Obj x139886476106375 = makeCons(symif, x139886476106343);
__nargs = 2;
__arg1 = x139886476106375;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj x139886476106823 = makeNative(4, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x139886476146087 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886476146087) {
Obj x139886476146375 = PRIM_CAR(closureRef(co, 0));
Obj x139886476146407 = PRIM_EQ(symdo, x139886476146375);
if (True == x139886476146407) {
Obj x139886476146695 = PRIM_CDR(closureRef(co, 0));
Obj x139886476146727 = PRIM_ISCONS(x139886476146695);
if (True == x139886476146727) {
Obj x139886476146983 = PRIM_CDR(closureRef(co, 0));
Obj x139886476147047 = PRIM_CAR(x139886476146983);
Obj x = x139886476147047;
Obj x139886476147431 = PRIM_CDR(closureRef(co, 0));
Obj x139886476147495 = PRIM_CDR(x139886476147431);
Obj x139886476147559 = PRIM_ISCONS(x139886476147495);
if (True == x139886476147559) {
Obj x139886476147911 = PRIM_CDR(closureRef(co, 0));
Obj x139886476147943 = PRIM_CDR(x139886476147911);
Obj x139886476147975 = PRIM_CAR(x139886476147943);
Obj y = x139886476147975;
Obj x139886476148519 = PRIM_CDR(closureRef(co, 0));
Obj x139886476148551 = PRIM_CDR(x139886476148519);
Obj x139886476148583 = PRIM_CDR(x139886476148551);
Obj x139886476148615 = PRIM_EQ(Nil, x139886476148583);
if (True == x139886476148615) {
pushCont(co, 2, clofun8, 1, y);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886476106823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476106823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476106823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476106823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476106823;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj x139886476103943 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 3, clofun8, 1, x139886476103943);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x139886476104487 = __arg1;
Obj x139886476103943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886476104839 = makeCons(x139886476104487, Nil);
Obj x139886476104871 = makeCons(x139886476103943, x139886476104839);
Obj x139886476104903 = makeCons(symdo, x139886476104871);
__nargs = 2;
__arg1 = x139886476104903;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj x139886475982951 = makeNative(7, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x139886474652551 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886474652551) {
Obj x139886474652807 = PRIM_CAR(closureRef(co, 0));
Obj x139886474652839 = PRIM_EQ(symlet, x139886474652807);
if (True == x139886474652839) {
Obj x139886474653095 = PRIM_CDR(closureRef(co, 0));
Obj x139886474653127 = PRIM_ISCONS(x139886474653095);
if (True == x139886474653127) {
Obj x139886476186247 = PRIM_CDR(closureRef(co, 0));
Obj x139886476186279 = PRIM_CAR(x139886476186247);
Obj a = x139886476186279;
Obj x139886476186631 = PRIM_CDR(closureRef(co, 0));
Obj x139886476186695 = PRIM_CDR(x139886476186631);
Obj x139886476186791 = PRIM_ISCONS(x139886476186695);
if (True == x139886476186791) {
Obj x139886476187463 = PRIM_CDR(closureRef(co, 0));
Obj x139886476187495 = PRIM_CDR(x139886476187463);
Obj x139886476187655 = PRIM_CAR(x139886476187495);
Obj b = x139886476187655;
Obj x139886476188231 = PRIM_CDR(closureRef(co, 0));
Obj x139886476188263 = PRIM_CDR(x139886476188231);
Obj x139886476188295 = PRIM_CDR(x139886476188263);
Obj x139886476188327 = PRIM_ISCONS(x139886476188295);
if (True == x139886476188327) {
Obj x139886476188903 = PRIM_CDR(closureRef(co, 0));
Obj x139886476188935 = PRIM_CDR(x139886476188903);
Obj x139886476188967 = PRIM_CDR(x139886476188935);
Obj x139886476189031 = PRIM_CAR(x139886476188967);
Obj c = x139886476189031;
Obj x139886476189511 = PRIM_CDR(closureRef(co, 0));
Obj x139886476189543 = PRIM_CDR(x139886476189511);
Obj x139886476189575 = PRIM_CDR(x139886476189543);
Obj x139886476189607 = PRIM_CDR(x139886476189575);
Obj x139886476189639 = PRIM_EQ(Nil, x139886476189607);
if (True == x139886476189639) {
pushCont(co, 5, clofun8, 2, c, a);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475982951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475982951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475982951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475982951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475982951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475982951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj x139886476144935 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476145255 = makeCons(a, closureRef(co, 1));
pushCont(co, 6, clofun8, 2, x139886476144935, a);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = x139886476145255;
__arg2 = closureRef(co, 2);
__arg3 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x139886476145319 = __arg1;
Obj x139886476144935= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886476145351 = makeCons(x139886476145319, Nil);
Obj x139886476145383 = makeCons(x139886476144935, x139886476145351);
Obj x139886476145415 = makeCons(a, x139886476145383);
Obj x139886476145447 = makeCons(symlet, x139886476145415);
__nargs = 2;
__arg1 = x139886476145447;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label7:
{
Obj x139886475469191 = makeNative(8, clofun8, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj x139886475126631 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475126631) {
Obj x139886475126887 = PRIM_CAR(closureRef(co, 0));
Obj x139886475126919 = PRIM_ISCONS(x139886475126887);
if (True == x139886475126919) {
Obj x139886475127239 = PRIM_CAR(closureRef(co, 0));
Obj x139886475127271 = PRIM_CAR(x139886475127239);
Obj x139886475127303 = PRIM_EQ(symlambda, x139886475127271);
if (True == x139886475127303) {
Obj x139886475127559 = PRIM_CAR(closureRef(co, 0));
Obj x139886475127591 = PRIM_CDR(x139886475127559);
Obj exp1 = x139886475127591;
Obj x139886475127847 = PRIM_CDR(closureRef(co, 0));
Obj x139886475127879 = PRIM_ISCONS(x139886475127847);
if (True == x139886475127879) {
Obj x139886475128199 = PRIM_CDR(closureRef(co, 0));
Obj x139886475128231 = PRIM_CAR(x139886475128199);
Obj x139886475128263 = PRIM_ISCONS(x139886475128231);
if (True == x139886475128263) {
Obj x139886475128647 = PRIM_CDR(closureRef(co, 0));
Obj x139886475128679 = PRIM_CAR(x139886475128647);
Obj x139886475128711 = PRIM_CAR(x139886475128679);
Obj x139886475128743 = PRIM_EQ(symif, x139886475128711);
if (True == x139886475128743) {
Obj x139886474649831 = PRIM_CDR(closureRef(co, 0));
Obj x139886474649863 = PRIM_CAR(x139886474649831);
Obj x139886474649895 = PRIM_CDR(x139886474649863);
Obj exp2 = x139886474649895;
Obj x139886474650215 = PRIM_CDR(closureRef(co, 0));
Obj x139886474650247 = PRIM_CDR(x139886474650215);
Obj x139886474650279 = PRIM_EQ(Nil, x139886474650247);
if (True == x139886474650279) {
Obj x139886474650439 = primGenSym();
Obj f = x139886474650439;
Obj x139886474651431 = makeCons(symlambda, exp1);
Obj x139886474651719 = makeCons(symif, exp2);
Obj x139886474651751 = makeCons(x139886474651719, Nil);
Obj x139886474651783 = makeCons(f, x139886474651751);
Obj x139886474651815 = makeCons(x139886474651783, Nil);
Obj x139886474651847 = makeCons(x139886474651431, x139886474651815);
Obj x139886474651879 = makeCons(f, x139886474651847);
Obj x139886474651911 = makeCons(symlet, x139886474651879);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = x139886474651911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x139886475469191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475469191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj x139886475383335 = makeNative(16, clofun8, 0, 3, closureRef(co, 1), closureRef(co, 2), closureRef(co, 0));
Obj x139886475185095 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475185095) {
Obj x139886475185287 = PRIM_CAR(closureRef(co, 0));
Obj op = x139886475185287;
Obj x139886475185479 = PRIM_CDR(closureRef(co, 0));
Obj args = x139886475185479;
pushCont(co, 9, clofun8, 3, op, args, x139886475383335);
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
__arg0 = x139886475383335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj x139886475185639 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886475383335= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x139886475185639) {
pushCont(co, 10, clofun8, 2, op, args);
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
__arg0 = x139886475383335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj x139886475185799 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj required = x139886475185799;
pushCont(co, 11, clofun8, 3, required, op, args);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x139886475185959 = __arg1;
Obj required= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj provided = x139886475185959;
Obj x139886475186119 = PRIM_EQ(required, provided);
if (True == x139886475186119) {
Obj x139886475124903 = makeCons(op, Nil);
Obj x139886475124935 = makeCons(sym_37builtin, x139886475124903);
pushCont(co, 14, clofun8, 2, args, x139886475124935);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x139886475125383 = PRIM_GT(required, provided);
if (True == x139886475125383) {
Obj x139886475125607 = PRIM_SUB(required, provided);
pushCont(co, 12, clofun8, 2, op, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35temp_45list);
__arg1 = x139886475125607;
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

label12:
{
Obj x139886475125639 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj tmp = x139886475125639;
Obj x139886475126119 = makeCons(op, args);
pushCont(co, 13, clofun8, 1, tmp);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35append);
__arg1 = x139886475126119;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x139886475126151 = __arg1;
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475126183 = makeCons(x139886475126151, Nil);
Obj x139886475126215 = makeCons(tmp, x139886475126183);
Obj x139886475126247 = makeCons(symlambda, x139886475126215);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = x139886475126247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x139886475125159 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475124935= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 15, clofun8, 1, x139886475124935);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x139886475125159;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x139886475125191 = __arg1;
Obj x139886475124935= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x139886475125223 = makeCons(x139886475124935, x139886475125191);
__nargs = 2;
__arg1 = x139886475125223;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
PUSH_CONT_0(co, 17, clofun8);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x139886475184871 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x139886475184871;
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x139886475183271 = __arg1;
if (True == x139886475183271) {
__nargs = 2;
__arg1 = closureRef(co, 0);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT_0(co, 19, clofun8);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35add_45symbol_45to_45list);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj x139886475183527 = __arg1;
Obj x139886475183719 = makeCons(closureRef(co, 0), Nil);
Obj x139886475183751 = makeCons(sym_37global, x139886475183719);
__nargs = 2;
__arg1 = x139886475183751;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj x139886476187591 = __arg1;
Obj x139886476187623 = __arg2;
Obj x139886475194023 = PRIM_EQ(MAKE_NUMBER(0), x139886476187591);
if (True == x139886475194023) {
__nargs = 2;
__arg1 = x139886476187623;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886475194183 = PRIM_SUB(x139886476187591, MAKE_NUMBER(1));
Obj x139886475194343 = primGenSym();
Obj x139886475182087 = makeCons(x139886475194343, x139886476187623);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35temp_45list);
__arg1 = x139886475194183;
__arg2 = x139886475182087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj x = __arg1;
PUSH_CONT_0(co, 22, clofun8);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35assq);
__arg1 = x;
__arg2 = globalRef(symcora_47lib_47toc_35_42builtin_45prims_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x139886475193415 = __arg1;
Obj find = x139886475193415;
pushCont(co, 23, clofun8, 1, find);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x139886475193575 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x139886475193575) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47init_35cadr);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj x = __arg1;
PUSH_CONT_0(co, 25, clofun8);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35assq);
__arg1 = x;
__arg2 = globalRef(symcora_47lib_47toc_35_42builtin_45prims_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x139886475192807 = __arg1;
Obj find = x139886475192807;
pushCont(co, 26, clofun8, 1, find);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x139886475192967 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x139886475192967) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caddr);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj x = __arg1;
PUSH_CONT_0(co, 28, clofun8);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35assq);
__arg1 = x;
__arg2 = globalRef(symcora_47lib_47toc_35_42builtin_45prims_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x139886475192359 = __arg1;
PUSH_CONT_0(co, 29, clofun8);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = x139886475192359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x139886475192391 = __arg1;
Obj x139886475192423 = primNot(x139886475192391);
__nargs = 2;
__arg1 = x139886475192423;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x139886475244711 = __arg1;
Obj x139886475244743 = __arg2;
Obj x139886475270311 = PRIM_EQ(Nil, x139886475244743);
if (True == x139886475270311) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886475270471 = PRIM_ISCONS(x139886475244743);
if (True == x139886475270471) {
Obj x139886475270631 = PRIM_CAR(x139886475244743);
Obj hd = x139886475270631;
Obj x139886475270791 = PRIM_CDR(x139886475244743);
Obj tl = x139886475270791;
pushCont(co, 31, clofun8, 2, x139886475244711, tl);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35index);
__arg1 = x139886475244711;
__arg2 = hd;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label31:
{
Obj x139886475271015 = __arg1;
Obj x139886475244711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tl= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x139886475271047 = PRIM_LT(x139886475271015, MAKE_NUMBER(0));
if (True == x139886475271047) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35exist_45in_45env);
__arg1 = x139886475244711;
__arg2 = tl;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label32:
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
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x139886475463879 = __arg1;
Obj x139886475463911 = __arg2;
Obj x139886475463975 = __arg3;
Obj x139886475333415 = PRIM_EQ(Nil, x139886475463975);
if (True == x139886475333415) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886475330311 = makeNative(34, clofun8, 0, 3, x139886475463975, x139886475463879, x139886475463911);
Obj x139886475269031 = PRIM_ISCONS(x139886475463975);
if (True == x139886475269031) {
Obj x139886475269191 = PRIM_CAR(x139886475463975);
Obj a = x139886475269191;
Obj x139886475269351 = PRIM_CDR(x139886475463975);
Obj x139886475269511 = PRIM_EQ(x139886475463911, a);
if (True == x139886475269511) {
__nargs = 2;
__arg1 = x139886475463879;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x139886475330311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886475330311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label34:
{
Obj x139886475268199 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475268199) {
Obj x139886475268391 = PRIM_CAR(closureRef(co, 0));
Obj x139886475268583 = PRIM_CDR(closureRef(co, 0));
Obj b = x139886475268583;
Obj x139886475268775 = PRIM_ADD(closureRef(co, 1), MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35pos_45in_45list0);
__arg1 = x139886475268775;
__arg2 = closureRef(co, 2);
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj x139886475982791 = __arg1;
Obj x139886475982823 = __arg2;
Obj x139886475982887 = __arg3;
Obj x139886475332295 = PRIM_EQ(Nil, x139886475982887);
if (True == x139886475332295) {
__nargs = 2;
__arg1 = x139886475982823;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886475332455 = PRIM_ISCONS(x139886475982887);
if (True == x139886475332455) {
Obj x139886475332615 = PRIM_CAR(x139886475982887);
Obj x = x139886475332615;
Obj x139886475332775 = PRIM_CDR(x139886475982887);
Obj y = x139886475332775;
pushCont(co, 36, clofun8, 2, x139886475982791, y);
__nargs = 3;
__arg0 = x139886475982791;
__arg1 = x139886475982823;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label36:
{
Obj x139886475332935 = __arg1;
Obj x139886475982791= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = x139886475982791;
__arg2 = x139886475332935;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x139886476186887 = __arg1;
Obj x139886476186919 = __arg2;
Obj x139886475386759 = PRIM_EQ(Nil, x139886476186919);
if (True == x139886475386759) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x139886476147015 = makeNative(38, clofun8, 0, 2, x139886476186919, x139886476186887);
Obj x139886475330503 = PRIM_ISCONS(x139886476186919);
if (True == x139886475330503) {
Obj x139886475330727 = PRIM_CAR(x139886476186919);
Obj x139886475330759 = PRIM_ISCONS(x139886475330727);
if (True == x139886475330759) {
Obj x139886475330983 = PRIM_CAR(x139886476186919);
Obj x139886475331015 = PRIM_CAR(x139886475330983);
Obj x = x139886475331015;
Obj x139886475331271 = PRIM_CAR(x139886476186919);
Obj x139886475331303 = PRIM_CDR(x139886475331271);
Obj y = x139886475331303;
Obj x139886475331463 = PRIM_CDR(x139886476186919);
Obj x139886475331623 = PRIM_EQ(x139886476186887, x);
if (True == x139886475331623) {
Obj x139886475331719 = makeCons(x, y);
__nargs = 2;
__arg1 = x139886475331719;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x139886476147015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476147015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x139886476147015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label38:
{
Obj x139886475329735 = PRIM_ISCONS(closureRef(co, 0));
if (True == x139886475329735) {
Obj x139886475329927 = PRIM_CAR(closureRef(co, 0));
Obj x139886475330151 = PRIM_CDR(closureRef(co, 0));
Obj y = x139886475330151;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35assq);
__arg1 = closureRef(co, 1);
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
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

