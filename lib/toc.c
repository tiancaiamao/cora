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
static Obj symexport;
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
static Obj symcora_47init_35vector_45set_33;
static Obj symcora_47lib_47toc_35append_45result;
static Obj symcora_47init_35vector_45ref;
static Obj symcora_47lib_47toc_35collect_45lambda;
static Obj sym_37continuation;
static Obj symcora_47lib_47toc_35explicit_45stack;
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
static Obj symimport;
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
symexport = intern("export");
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
symcora_47init_35vector_45set_33 = intern("cora/init#vector-set!");
symcora_47lib_47toc_35append_45result = intern("cora/lib/toc#append-result");
symcora_47init_35vector_45ref = intern("cora/init#vector-ref");
symcora_47lib_47toc_35collect_45lambda = intern("cora/lib/toc#collect-lambda");
sym_37continuation = intern("%continuation");
symcora_47lib_47toc_35explicit_45stack = intern("cora/lib/toc#explicit-stack");
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
symimport = intern("import");
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
Obj v0x7f41125ec8e0 = __arg1;
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
Obj v0x7f41125ec9e0 = __arg1;
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
Obj v0x7f41125ecae0 = __arg1;
Obj v0x7f41125ecc00 = primSet(co, symcora_47lib_47toc_35_42ns_45export_42, Nil);
Obj v0x7f41125e50e0 = primSet(co, symcora_47lib_47toc_35assq, makeNative(40, clofun9, 2, 0));
Obj v0x7f41125e5bc0 = primSet(co, symcora_47lib_47toc_35foldl, makeNative(36, clofun9, 3, 0));
Obj v0x7f41125d6cc0 = primSet(co, symcora_47lib_47toc_35pos_45in_45list0, makeNative(32, clofun9, 3, 0));
Obj v0x7f41125d6f00 = primSet(co, symcora_47lib_47toc_35index, makeNative(31, clofun9, 2, 0));
Obj v0x7f41125cf260 = primSet(co, symcora_47lib_47toc_35exist_45in_45env, makeNative(27, clofun9, 2, 0));
Obj v0x7f41125cf660 = makeCons(makeCString("primSet"), Nil);
Obj v0x7f41125cf680 = makeCons(MAKE_NUMBER(2), v0x7f41125cf660);
Obj v0x7f41125cf6a0 = makeCons(symset, v0x7f41125cf680);
Obj v0x7f41125cf9c0 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj v0x7f41125cf9e0 = makeCons(MAKE_NUMBER(1), v0x7f41125cf9c0);
Obj v0x7f41125cfa00 = makeCons(symcar, v0x7f41125cf9e0);
Obj v0x7f41125cfd20 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj v0x7f41125cfd40 = makeCons(MAKE_NUMBER(1), v0x7f41125cfd20);
Obj v0x7f41125cfd60 = makeCons(symcdr, v0x7f41125cfd40);
Obj v0x7f41125cd080 = makeCons(makeCString("makeCons"), Nil);
Obj v0x7f41125cd0a0 = makeCons(MAKE_NUMBER(2), v0x7f41125cd080);
Obj v0x7f41125cd0c0 = makeCons(symcons, v0x7f41125cd0a0);
Obj v0x7f41125cd3e0 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj v0x7f41125cd400 = makeCons(MAKE_NUMBER(1), v0x7f41125cd3e0);
Obj v0x7f41125cd420 = makeCons(symcons_63, v0x7f41125cd400);
Obj v0x7f4112743420 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj v0x7f4112743440 = makeCons(MAKE_NUMBER(2), v0x7f4112743420);
Obj v0x7f4112743480 = makeCons(sym_43, v0x7f4112743440);
Obj v0x7f41127439e0 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj v0x7f4112743a00 = makeCons(MAKE_NUMBER(2), v0x7f41127439e0);
Obj v0x7f4112743a20 = makeCons(sym_45, v0x7f4112743a00);
Obj v0x7f4112743fc0 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj v0x7f411273e000 = makeCons(MAKE_NUMBER(2), v0x7f4112743fc0);
Obj v0x7f411273e040 = makeCons(sym_42, v0x7f411273e000);
Obj v0x7f411273e4c0 = makeCons(makeCString("primDiv"), Nil);
Obj v0x7f411273e500 = makeCons(MAKE_NUMBER(2), v0x7f411273e4c0);
Obj v0x7f411273e520 = makeCons(sym_47, v0x7f411273e500);
Obj v0x7f411273eb00 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj v0x7f411273eb40 = makeCons(MAKE_NUMBER(2), v0x7f411273eb00);
Obj v0x7f411273eb60 = makeCons(sym_61, v0x7f411273eb40);
Obj v0x7f411273efe0 = makeCons(makeCString("PRIM_GT"), Nil);
Obj v0x7f411272d000 = makeCons(MAKE_NUMBER(2), v0x7f411273efe0);
Obj v0x7f411272d020 = makeCons(sym_62, v0x7f411272d000);
Obj v0x7f411272d5c0 = makeCons(makeCString("PRIM_LT"), Nil);
Obj v0x7f411272d5e0 = makeCons(MAKE_NUMBER(2), v0x7f411272d5c0);
Obj v0x7f411272d680 = makeCons(sym_60, v0x7f411272d5e0);
Obj v0x7f411272daa0 = makeCons(makeCString("primGenSym"), Nil);
Obj v0x7f411272dac0 = makeCons(MAKE_NUMBER(0), v0x7f411272daa0);
Obj v0x7f411272dae0 = makeCons(symgensym, v0x7f411272dac0);
Obj v0x7f411272df00 = makeCons(makeCString("primIsSymbol"), Nil);
Obj v0x7f411272df20 = makeCons(MAKE_NUMBER(1), v0x7f411272df00);
Obj v0x7f411272df60 = makeCons(symsymbol_63, v0x7f411272df20);
Obj v0x7f41126cf380 = makeCons(makeCString("primNot"), Nil);
Obj v0x7f41126cf3a0 = makeCons(MAKE_NUMBER(1), v0x7f41126cf380);
Obj v0x7f41126cf3c0 = makeCons(symnot, v0x7f41126cf3a0);
Obj v0x7f41126cf7e0 = makeCons(makeCString("primIsNumber"), Nil);
Obj v0x7f41126cf820 = makeCons(MAKE_NUMBER(1), v0x7f41126cf7e0);
Obj v0x7f41126cf840 = makeCons(syminteger_63, v0x7f41126cf820);
Obj v0x7f41126cfbc0 = makeCons(makeCString("primIsString"), Nil);
Obj v0x7f41126cfbe0 = makeCons(MAKE_NUMBER(1), v0x7f41126cfbc0);
Obj v0x7f41126cfc00 = makeCons(symstring_63, v0x7f41126cfbe0);
Obj v0x7f41126cfc40 = makeCons(v0x7f41126cfc00, Nil);
Obj v0x7f41126cfc60 = makeCons(v0x7f41126cf840, v0x7f41126cfc40);
Obj v0x7f41126cfca0 = makeCons(v0x7f41126cf3c0, v0x7f41126cfc60);
Obj v0x7f41126cfcc0 = makeCons(v0x7f411272df60, v0x7f41126cfca0);
Obj v0x7f41126cfce0 = makeCons(v0x7f411272dae0, v0x7f41126cfcc0);
Obj v0x7f41126cfd00 = makeCons(v0x7f411272d680, v0x7f41126cfce0);
Obj v0x7f41126cfd20 = makeCons(v0x7f411272d020, v0x7f41126cfd00);
Obj v0x7f41126cfd40 = makeCons(v0x7f411273eb60, v0x7f41126cfd20);
Obj v0x7f41126cfd60 = makeCons(v0x7f411273e520, v0x7f41126cfd40);
Obj v0x7f41126cfd80 = makeCons(v0x7f411273e040, v0x7f41126cfd60);
Obj v0x7f41126cfdc0 = makeCons(v0x7f4112743a20, v0x7f41126cfd80);
Obj v0x7f41126cfde0 = makeCons(v0x7f4112743480, v0x7f41126cfdc0);
Obj v0x7f41126cfe00 = makeCons(v0x7f41125cd420, v0x7f41126cfde0);
Obj v0x7f41126cfe20 = makeCons(v0x7f41125cd0c0, v0x7f41126cfe00);
Obj v0x7f41126cfe40 = makeCons(v0x7f41125cfd60, v0x7f41126cfe20);
Obj v0x7f41126cfe60 = makeCons(v0x7f41125cfa00, v0x7f41126cfe40);
Obj v0x7f41126cfe80 = makeCons(v0x7f41125cf6a0, v0x7f41126cfe60);
Obj v0x7f41126cfea0 = primSet(co, symcora_47lib_47toc_35_42builtin_45prims_42, v0x7f41126cfe80);
Obj v0x7f41126b52a0 = primSet(co, symcora_47lib_47toc_35builtin_63, makeNative(24, clofun9, 1, 0));
Obj v0x7f41126b56e0 = primSet(co, symcora_47lib_47toc_35builtin_45_62name, makeNative(21, clofun9, 1, 0));
Obj v0x7f41126b5b20 = primSet(co, symcora_47lib_47toc_35builtin_45_62args, makeNative(18, clofun9, 1, 0));
Obj v0x7f41126af3e0 = primSet(co, symcora_47lib_47toc_35temp_45list, makeNative(15, clofun9, 2, 0));
Obj v0x7f41126afa80 = primSet(co, symcora_47lib_47toc_35var_45with_45ns, makeNative(10, clofun9, 2, 0));
Obj v0x7f41126a7c40 = primSet(co, symcora_47lib_47toc_35lookup_45var, makeNative(0, clofun9, 3, 0));
Obj v0x7f41126afe60 = primSet(co, symcora_47lib_47toc_35parse, makeNative(9, clofun8, 5, 0));
Obj v0x7f41126690e0 = primSet(co, symcora_47lib_47toc_35union, makeNative(3, clofun8, 2, 0));
Obj v0x7f411261b320 = primSet(co, symcora_47lib_47toc_35diff, makeNative(47, clofun7, 2, 0));
Obj v0x7f41125ec7a0 = primSet(co, symcora_47lib_47toc_35convert_45protect_63, makeNative(40, clofun7, 1, 0));
Obj v0x7f41126b5f80 = primSet(co, symcora_47lib_47toc_35free_45vars, makeNative(17, clofun7, 1, 0));
Obj v0x7f41125fee40 = primSet(co, symcora_47lib_47toc_35closure_45convert, makeNative(2, clofun7, 2, 0));
Obj v0x7f41125fb240 = primSet(co, symcora_47lib_47toc_35id, makeNative(1, clofun7, 1, 0));
Obj v0x7f4112529720 = primSet(co, symcora_47lib_47toc_35tailify, makeNative(33, clofun6, 2, 0));
Obj v0x7f411273ece0 = primSet(co, symcora_47lib_47toc_35tailify_45list, makeNative(23, clofun6, 3, 0));
Obj v0x7f4112603f80 = primSet(co, symcora_47lib_47toc_35explicit_45stack, makeNative(5, clofun6, 2, 0));
Obj v0x7f41125c16a0 = primSet(co, symcora_47lib_47toc_35collect_45lambda, makeNative(35, clofun5, 2, 0));
Obj v0x7f41125c02e0 = primSet(co, symcora_47lib_47toc_35append_45result, makeNative(31, clofun5, 2, 0));
Obj v0x7f41125c0b80 = primSet(co, symcora_47lib_47toc_35wrap_45var, makeNative(29, clofun5, 2, 0));
Obj v0x7f4112563c40 = primSet(co, symcora_47lib_47toc_35generate_45call_45list, makeNative(15, clofun5, 4, 0));
Obj v0x7f411252c280 = primSet(co, symcora_47lib_47toc_35add_45symbol_45to_45list, makeNative(12, clofun5, 2, 0));
Obj v0x7f4112570500 = primSet(co, symcora_47lib_47toc_35generate_45inst, makeNative(28, clofun3, 4, 0));
Obj v0x7f4112512200 = primSet(co, symcora_47lib_47toc_35generate_45cont, makeNative(4, clofun3, 3, 0));
Obj v0x7f41124eb7c0 = primSet(co, symcora_47lib_47toc_35generate_45inst_45list_45h, makeNative(48, clofun2, 5, 0));
Obj v0x7f41124ebac0 = primSet(co, symcora_47lib_47toc_35generate_45inst_45list, makeNative(47, clofun2, 4, 0));
Obj v0x7f41124ebbe0 = primSet(co, symcora_47lib_47toc_35_42mod_45num_42, MAKE_NUMBER(50));
Obj v0x7f41124d9240 = primSet(co, symcora_47lib_47toc_35generate_45group_45name, makeNative(45, clofun2, 3, 0));
Obj v0x7f41124d98a0 = primSet(co, symcora_47lib_47toc_35code_45gen_45func_45declare, makeNative(41, clofun2, 3, 0));
Obj v0x7f41124cb500 = primSet(co, symcora_47lib_47toc_35local_45from_45params, makeNative(34, clofun2, 3, 0));
Obj v0x7f41124cbfe0 = primSet(co, symcora_47lib_47toc_35local_45from_45cont, makeNative(29, clofun2, 3, 0));
Obj v0x7f41124c4e20 = primSet(co, symcora_47lib_47toc_35generate_45call_45args_45reverse, makeNative(25, clofun2, 4, 0));
Obj v0x7f4112485ce0 = primSet(co, symcora_47lib_47toc_35code_45gen_45toplevel, makeNative(13, clofun2, 3, 0));
Obj v0x7f4112485f60 = primSet(co, symcora_47lib_47toc_35parse_45pass, makeNative(12, clofun2, 2, 0));
Obj v0x7f411245b180 = primSet(co, symcora_47lib_47toc_35closure_45convert_45pass, makeNative(11, clofun2, 1, 0));
Obj v0x7f411245b3a0 = primSet(co, symcora_47lib_47toc_35tailify_45pass, makeNative(10, clofun2, 1, 0));
Obj v0x7f411245b5c0 = primSet(co, symcora_47lib_47toc_35explicit_45stack_45pass, makeNative(9, clofun2, 1, 0));
Obj v0x7f411243c460 = primSet(co, symcora_47lib_47toc_35collect_45lambda_45pass, makeNative(3, clofun2, 1, 0));
Obj v0x7f411243cf80 = primSet(co, symcora_47lib_47toc_35rewrite_45_45_62macro, makeNative(0, clofun2, 2, 0));
PUSH_CONT_0(co, 4, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = sym_45_62;
__arg2 = makeNative(47, clofun1, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj v0x7f41126cb360 = __arg1;
Obj v0x7f41127439a0 = primSet(co, symcora_47lib_47toc_35compile, makeNative(41, clofun1, 2, 0));
Obj v0x7f411272d9c0 = primSet(co, symcora_47lib_47toc_35for_45each, makeNative(37, clofun1, 2, 0));
Obj v0x7f41126cb640 = primSet(co, symcora_47lib_47toc_35generate_45jumptable, makeNative(33, clofun1, 3, 0));
Obj v0x7f41126afd40 = primSet(co, symcora_47lib_47toc_35generate_45toplevel_45group, makeNative(11, clofun1, 3, 0));
Obj v0x7f411261b140 = primSet(co, symcora_47lib_47toc_35group_45by_45mod_45h, makeNative(5, clofun1, 4, 0));
Obj v0x7f4112603c40 = primSet(co, symcora_47lib_47toc_35generate_45entry, makeNative(42, clofun0, 2, 0));
Obj v0x7f41125fb760 = primSet(co, symcora_47lib_47toc_35generate_45c, makeNative(29, clofun0, 3, 0));
Obj v0x7f41125cfb40 = primSet(co, symcora_47lib_47toc_35handle_45import_45eagerly, makeNative(22, clofun0, 1, 0));
Obj v0x7f4112563d40 = primSet(co, symcora_47lib_47toc_35split_45type_45and_45code, makeNative(15, clofun0, 4, 0));
Obj v0x7f4112563f00 = primSet(co, symcora_47lib_47infer_35_42typecheck_42, False);
Obj v0x7f411252c3e0 = primSet(co, symcora_47lib_47toc_35preprocess, makeNative(12, clofun0, 1, 0));
Obj v0x7f411252cfe0 = primSet(co, symcora_47lib_47toc_35compile_45to_45c, makeNative(5, clofun0, 2, 0));
__nargs = 2;
__arg1 = v0x7f411252cfe0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj from = __arg1;
Obj to = __arg2;
Obj v0x7f411252c6c0 = primGenSym();
Obj globals = v0x7f411252c6c0;
Obj v0x7f411252c800 = primSet(co, globals, Nil);
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
Obj v0x7f411252c9c0 = __arg1;
Obj from= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 7, clofun0, 3, v0x7f411252c9c0, to, globals);
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
Obj v0x7f411252cc00 = __arg1;
Obj v0x7f411252c9c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 8, clofun0, 3, v0x7f411252c9c0, to, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = v0x7f411252cc00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj v0x7f411252cc20 = __arg1;
Obj v0x7f411252c9c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 9, clofun0, 2, to, globals);
__nargs = 2;
__arg0 = v0x7f411252c9c0;
__arg1 = v0x7f411252cc20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj v0x7f411252cc40 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj bc = v0x7f411252cc40;
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
Obj v0x7f411252cd40 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stream = v0x7f411252cd40;
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
Obj v0x7f411252cf20 = __arg1;
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
Obj v0x7f411252c2a0 = __arg1;
Obj sexp = v0x7f411252c2a0;
pushCont(co, 14, clofun0, 1, sexp);
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
Obj v0x7f411252c3c0 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg1 = sexp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj v0x7f411272d300 = __arg1;
Obj v0x7f411272d320 = __arg2;
Obj v0x7f411272d340 = __arg3;
Obj v0x7f411272d360 = co->args[4];
Obj v0x7f411272d600 = makeNative(18, clofun0, 0, 4, v0x7f411272d300, v0x7f411272d320, v0x7f411272d340, v0x7f411272d360);
Obj v0x7f4112563840 = PRIM_EQ(Nil, v0x7f411272d300);
if (True == v0x7f4112563840) {
Obj type = v0x7f411272d320;
Obj code = v0x7f411272d340;
Obj k = v0x7f411272d360;
pushCont(co, 16, clofun0, 2, code, k);
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
__arg0 = v0x7f411272d600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj v0x7f4112563b20 = __arg1;
Obj code= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 17, clofun0, 2, k, v0x7f4112563b20);
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
Obj v0x7f4112563ca0 = __arg1;
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112563b20= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = k;
__arg1 = v0x7f4112563b20;
__arg2 = v0x7f4112563ca0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj v0x7f411272d960 = makeNative(19, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj v0x7f4112570580 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112570580) {
Obj v0x7f41125707a0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125707e0 = PRIM_ISCONS(v0x7f41125707a0);
if (True == v0x7f41125707e0) {
Obj v0x7f4112570b20 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112570b40 = PRIM_CAR(v0x7f4112570b20);
Obj v0x7f4112570b60 = PRIM_EQ(sym_58type, v0x7f4112570b40);
if (True == v0x7f4112570b60) {
Obj v0x7f4112570de0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112570e00 = PRIM_CDR(v0x7f4112570de0);
Obj exp = v0x7f4112570e00;
Obj v0x7f4112570f60 = PRIM_CDR(closureRef(co, 0));
Obj more = v0x7f4112570f60;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj v0x7f4112563440 = makeCons(symbegin, exp);
Obj v0x7f4112563480 = makeCons(v0x7f4112563440, type);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = v0x7f4112563480;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f411272d960;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d960;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d960;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj v0x7f411272dda0 = makeNative(20, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj v0x7f41125c0060 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125c0060) {
Obj v0x7f41125c0300 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125c0320 = PRIM_ISCONS(v0x7f41125c0300);
if (True == v0x7f41125c0320) {
Obj v0x7f41125c06e0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125c0700 = PRIM_CAR(v0x7f41125c06e0);
Obj v0x7f41125c0760 = PRIM_EQ(sym_58declare, v0x7f41125c0700);
if (True == v0x7f41125c0760) {
Obj v0x7f41125c0a00 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125c0a20 = PRIM_CDR(v0x7f41125c0a00);
Obj exp = v0x7f41125c0a20;
Obj v0x7f41125c0c40 = PRIM_CDR(closureRef(co, 0));
Obj more = v0x7f41125c0c40;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj v0x7f4112570120 = makeCons(symdeclare, exp);
Obj v0x7f4112570240 = makeCons(v0x7f4112570120, type);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = v0x7f4112570240;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f411272dda0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272dda0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272dda0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj v0x7f41126cf1c0 = makeNative(21, clofun0, 0, 0);
Obj v0x7f41125cd540 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125cd540) {
Obj v0x7f41125cd7c0 = PRIM_CAR(closureRef(co, 0));
Obj exp = v0x7f41125cd7c0;
Obj v0x7f41125cd8e0 = PRIM_CDR(closureRef(co, 0));
Obj more = v0x7f41125cd8e0;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj v0x7f41125c1460 = makeCons(exp, Nil);
Obj v0x7f41125c1480 = makeCons(symbackquote, v0x7f41125c1460);
Obj v0x7f41125c14c0 = makeCons(v0x7f41125c1480, Nil);
Obj v0x7f41125c14e0 = makeCons(symmacroexpand, v0x7f41125c14c0);
Obj v0x7f41125c17c0 = makeCons(symtvar, Nil);
Obj v0x7f41125c1ae0 = makeCons(Nil, Nil);
Obj v0x7f41125c1b00 = makeCons(Nil, v0x7f41125c1ae0);
Obj v0x7f41125c1b20 = makeCons(v0x7f41125c17c0, v0x7f41125c1b00);
Obj v0x7f41125c1b40 = makeCons(v0x7f41125c14e0, v0x7f41125c1b20);
Obj v0x7f41125c1b60 = makeCons(symcora_47lib_47infer_35check_45type, v0x7f41125c1b40);
Obj v0x7f41125c1c20 = makeCons(v0x7f41125c1b60, type);
Obj v0x7f41125c1e00 = makeCons(exp, code);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = v0x7f41125c1c20;
__arg3 = v0x7f41125c1e00;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f41126cf1c0;
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
Obj v0x7f411273e3a0 = __arg1;
Obj v0x7f411273e420 = makeNative(23, clofun0, 0, 1, v0x7f411273e3a0);
Obj v0x7f41125d27c0 = PRIM_ISCONS(v0x7f411273e3a0);
if (True == v0x7f41125d27c0) {
Obj v0x7f41125d2b80 = PRIM_CAR(v0x7f411273e3a0);
Obj v0x7f41125d2ba0 = PRIM_EQ(symdefine_45library, v0x7f41125d2b80);
if (True == v0x7f41125d2ba0) {
Obj v0x7f41125d2ec0 = PRIM_CDR(v0x7f411273e3a0);
Obj v0x7f41125d2ee0 = PRIM_ISCONS(v0x7f41125d2ec0);
if (True == v0x7f41125d2ee0) {
Obj v0x7f41125cf2e0 = PRIM_CDR(v0x7f411273e3a0);
Obj v0x7f41125cf300 = PRIM_CAR(v0x7f41125cf2e0);
Obj __ = v0x7f41125cf300;
Obj v0x7f41125cf5e0 = PRIM_CDR(v0x7f411273e3a0);
Obj v0x7f41125cf600 = PRIM_CDR(v0x7f41125cf5e0);
Obj remain = v0x7f41125cf600;
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
__arg0 = v0x7f411273e420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj v0x7f411273e6a0 = makeNative(24, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f41125d6da0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125d6da0) {
Obj v0x7f41125d20a0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125d20c0 = PRIM_EQ(symbegin, v0x7f41125d20a0);
if (True == v0x7f41125d20c0) {
Obj v0x7f41125d2280 = PRIM_CDR(closureRef(co, 0));
Obj remain = v0x7f41125d2280;
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
__arg0 = v0x7f411273e6a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e6a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj v0x7f411273e860 = makeNative(25, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f41125e5940 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125e5940) {
Obj v0x7f41125e5cc0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125e5ce0 = PRIM_ISCONS(v0x7f41125e5cc0);
if (True == v0x7f41125e5ce0) {
Obj v0x7f41125d6060 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125d6080 = PRIM_CAR(v0x7f41125d6060);
Obj v0x7f41125d6100 = PRIM_EQ(symexport, v0x7f41125d6080);
if (True == v0x7f41125d6100) {
Obj v0x7f41125d6540 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125d6560 = PRIM_CDR(v0x7f41125d6540);
Obj more = v0x7f41125d6560;
Obj v0x7f41125d67a0 = PRIM_CDR(closureRef(co, 0));
Obj remain = v0x7f41125d67a0;
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
__arg0 = v0x7f411273e860;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e860;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e860;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj v0x7f411273ebe0 = makeNative(27, clofun0, 0, 1, closureRef(co, 0));
Obj v0x7f41125ec320 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125ec320) {
Obj v0x7f41125ec580 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125ec5a0 = PRIM_ISCONS(v0x7f41125ec580);
if (True == v0x7f41125ec5a0) {
Obj v0x7f41125eca40 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125eca60 = PRIM_CAR(v0x7f41125eca40);
Obj v0x7f41125eca80 = PRIM_EQ(symimport, v0x7f41125eca60);
if (True == v0x7f41125eca80) {
Obj v0x7f41125ecee0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125ecf00 = PRIM_CDR(v0x7f41125ecee0);
Obj v0x7f41125ecf40 = PRIM_ISCONS(v0x7f41125ecf00);
if (True == v0x7f41125ecf40) {
Obj v0x7f41125e7460 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125e7480 = PRIM_CDR(v0x7f41125e7460);
Obj v0x7f41125e74a0 = PRIM_CAR(v0x7f41125e7480);
Obj pkg = v0x7f41125e74a0;
Obj v0x7f41125e7b00 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125e7b40 = PRIM_CDR(v0x7f41125e7b00);
Obj v0x7f41125e7c20 = PRIM_CDR(v0x7f41125e7b40);
Obj v0x7f41125e7c40 = PRIM_EQ(Nil, v0x7f41125e7c20);
if (True == v0x7f41125e7c40) {
Obj v0x7f41125e7de0 = PRIM_CDR(closureRef(co, 0));
Obj remain = v0x7f41125e7de0;
pushCont(co, 26, clofun0, 1, remain);
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
__arg0 = v0x7f411273ebe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ebe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ebe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ebe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ebe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj v0x7f41125e5000 = __arg1;
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj v0x7f411273eee0 = makeNative(28, clofun0, 0, 0);
Obj __ = closureRef(co, 0);
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
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

label29:
{
Obj to = __arg1;
Obj bc = __arg2;
Obj globals = __arg3;
pushCont(co, 30, clofun0, 3, bc, globals, to);
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

label30:
{
Obj v0x7f41125fe200 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups = v0x7f41125fe200;
pushCont(co, 31, clofun0, 3, globals, to, groups);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj v0x7f41125fe3a0 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj maxid = v0x7f41125fe3a0;
pushCont(co, 32, clofun0, 4, globals, to, maxid, groups);
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

label32:
{
Obj v0x7f41125fe4c0 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 33, clofun0, 4, globals, to, maxid, groups);
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

label33:
{
Obj v0x7f41125fe7e0 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 34, clofun0, 4, globals, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(39, clofun0, 1, 2, maxid, to);
__arg2 = groups;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj v0x7f41125fee20 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 35, clofun0, 4, globals, to, maxid, groups);
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

label35:
{
Obj v0x7f41125fb080 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 36, clofun0, 3, to, maxid, groups);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35value);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj v0x7f41125fb420 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 37, clofun0, 3, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45entry);
__arg1 = to;
__arg2 = v0x7f41125fb420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj v0x7f41125fb4c0 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(38, clofun0, 1, 2, to, maxid);
__arg2 = groups;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
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

label39:
{
Obj group = __arg1;
PUSH_CONT_0(co, 40, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj v0x7f41125fec40 = __arg1;
PUSH_CONT_0(co, 41, clofun0);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35code_45gen_45func_45declare);
__arg1 = closureRef(co, 1);
__arg2 = v0x7f41125fec40;
__arg3 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj v0x7f41125feca0 = __arg1;
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

label42:
{
Obj to = __arg1;
Obj globals = __arg2;
pushCont(co, 43, clofun0, 2, globals, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(2, clofun1, 1, 1, to);
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj v0x7f411261bcc0 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 44, clofun0, 2, globals, to);
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

label44:
{
Obj v0x7f411261be00 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun0, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(46, clofun0, 1, 1, to);
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj v0x7f4112603b40 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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

label46:
{
Obj sym = __arg1;
pushCont(co, 47, clofun0, 1, sym);
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

label47:
{
Obj v0x7f41126031e0 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 48, clofun0, 1, sym);
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

label48:
{
Obj v0x7f4112603480 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun0, 1, sym);
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

label49:
{
Obj v0x7f4112603660 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 0, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35symbol_45_62string);
__arg1 = sym;
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
Obj v0x7f4112603960 = __arg1;
PUSH_CONT_0(co, 1, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = v0x7f4112603960;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj v0x7f4112603980 = __arg1;
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

label2:
{
Obj sym = __arg1;
pushCont(co, 3, clofun1, 1, sym);
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

label3:
{
Obj v0x7f411261b860 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 4, clofun1);
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

label4:
{
Obj v0x7f411261b9c0 = __arg1;
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

label5:
{
Obj v0x7f4112743620 = __arg1;
Obj v0x7f4112743640 = __arg2;
Obj v0x7f4112743660 = __arg3;
Obj v0x7f4112743680 = co->args[4];
Obj v0x7f4112743820 = makeNative(8, clofun1, 0, 4, v0x7f4112743620, v0x7f4112743640, v0x7f4112743660, v0x7f4112743680);
Obj res = v0x7f4112743620;
Obj idx = v0x7f4112743640;
Obj acc = v0x7f4112743660;
Obj v0x7f4112669920 = PRIM_EQ(Nil, v0x7f4112743680);
if (True == v0x7f4112669920) {
pushCont(co, 6, clofun1, 2, acc, res);
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
__arg0 = v0x7f4112743820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj v0x7f4112669dc0 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112669e00 = primNot(v0x7f4112669dc0);
if (True == v0x7f4112669e00) {
pushCont(co, 7, clofun1, 1, res);
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

label7:
{
Obj v0x7f411261b060 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f411261b0a0 = makeCons(v0x7f411261b060, res);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = v0x7f411261b0a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj v0x7f4112743ca0 = makeNative(10, clofun1, 0, 0);
Obj res = closureRef(co, 0);
Obj idx = closureRef(co, 1);
Obj acc = closureRef(co, 2);
Obj v0x7f41126a75c0 = PRIM_ISCONS(closureRef(co, 3));
if (True == v0x7f41126a75c0) {
Obj v0x7f41126a76e0 = PRIM_CAR(closureRef(co, 3));
Obj bc = v0x7f41126a76e0;
Obj v0x7f41126a7960 = PRIM_CDR(closureRef(co, 3));
Obj more = v0x7f41126a7960;
Obj v0x7f41126a7b40 = PRIM_EQ(idx, globalRef(symcora_47lib_47toc_35_42mod_45num_42));
if (True == v0x7f41126a7b40) {
pushCont(co, 9, clofun1, 3, res, bc, more);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = acc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f4112669360 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj v0x7f4112669460 = makeCons(bc, acc);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = res;
__arg2 = v0x7f4112669360;
__arg3 = v0x7f4112669460;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743ca0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj v0x7f41126a7e20 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f41126a7f00 = makeCons(v0x7f41126a7e20, res);
Obj v0x7f41126690a0 = makeCons(bc, more);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = v0x7f41126a7f00;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = v0x7f41126690a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
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

label11:
{
Obj to = __arg1;
Obj group = __arg2;
Obj maxid = __arg3;
pushCont(co, 12, clofun1, 3, maxid, group, to);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj v0x7f41126cb940 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 13, clofun1, 3, maxid, group, to);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35code_45gen_45func_45declare);
__arg1 = to;
__arg2 = v0x7f41126cb940;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj v0x7f41126cb980 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 14, clofun1, 3, maxid, group, to);
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

label14:
{
Obj v0x7f41126cbaa0 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 15, clofun1, 3, maxid, group, to);
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

label15:
{
Obj v0x7f41126cbbc0 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 16, clofun1, 3, maxid, group, to);
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

label16:
{
Obj v0x7f41126cbce0 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 17, clofun1, 3, maxid, group, to);
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

label17:
{
Obj v0x7f41126cbe00 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 18, clofun1, 3, maxid, group, to);
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

label18:
{
Obj v0x7f41126cbf20 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 19, clofun1, 3, maxid, group, to);
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

label19:
{
Obj v0x7f41126b50a0 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 20, clofun1, 3, maxid, group, to);
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

label20:
{
Obj v0x7f41126b5380 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 21, clofun1, 3, maxid, group, to);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj v0x7f41126b5780 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 22, clofun1, 3, maxid, group, to);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45jumptable);
__arg1 = to;
__arg2 = MAKE_NUMBER(0);
__arg3 = v0x7f41126b5780;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj v0x7f41126b57c0 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 23, clofun1, 3, maxid, group, to);
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

label23:
{
Obj v0x7f41126b5a00 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 24, clofun1, 3, maxid, group, to);
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

label24:
{
Obj v0x7f41126b5b80 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 25, clofun1, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(32, clofun1, 1, 2, to, maxid);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj v0x7f41126b5f40 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 26, clofun1, 1, to);
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

label26:
{
Obj v0x7f41126af200 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 27, clofun1, 1, to);
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

label27:
{
Obj v0x7f41126af360 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 28, clofun1, 1, to);
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

label28:
{
Obj v0x7f41126af560 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 29, clofun1, 1, to);
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

label29:
{
Obj v0x7f41126af780 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun1, 1, to);
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

label30:
{
Obj v0x7f41126af900 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 31, clofun1, 1, to);
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

label31:
{
Obj v0x7f41126afb00 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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

label32:
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

label33:
{
Obj to = __arg1;
Obj i = __arg2;
Obj n = __arg3;
Obj v0x7f411272dea0 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == v0x7f411272dea0) {
pushCont(co, 36, clofun1, 2, to, n);
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
Obj v0x7f41126cf540 = PRIM_LT(i, n);
if (True == v0x7f41126cf540) {
pushCont(co, 34, clofun1, 3, i, to, n);
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

label34:
{
Obj v0x7f41126cf7a0 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 35, clofun1, 3, i, to, n);
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

label35:
{
Obj v0x7f41126cfa00 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f41126cffe0 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45jumptable);
__arg1 = to;
__arg2 = v0x7f41126cffe0;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj v0x7f41126cf1a0 = __arg1;
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
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj v0x7f41126cf680 = __arg1;
Obj v0x7f41126cf6a0 = __arg2;
Obj v0x7f41126cf7c0 = makeNative(38, clofun1, 0, 2, v0x7f41126cf680, v0x7f41126cf6a0);
Obj fn = v0x7f41126cf680;
Obj v0x7f411272d8c0 = PRIM_EQ(Nil, v0x7f41126cf6a0);
if (True == v0x7f411272d8c0) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f41126cf7c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj v0x7f41126cf940 = makeNative(40, clofun1, 0, 0);
Obj fn = closureRef(co, 0);
Obj v0x7f411273e620 = PRIM_ISCONS(closureRef(co, 1));
if (True == v0x7f411273e620) {
Obj v0x7f411273e8e0 = PRIM_CAR(closureRef(co, 1));
Obj x = v0x7f411273e8e0;
Obj v0x7f411273ef20 = PRIM_CDR(closureRef(co, 1));
Obj y = v0x7f411273ef20;
pushCont(co, 39, clofun1, 2, fn, y);
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
__arg0 = v0x7f41126cf940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj v0x7f411272d0e0 = __arg1;
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
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

label40:
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

label41:
{
Obj globals = __arg1;
Obj exp = __arg2;
pushCont(co, 42, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35parse_45pass);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj v0x7f4112743720 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 43, clofun1);
__nargs = 2;
__arg0 = v0x7f4112743720;
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj v0x7f41127437e0 = __arg1;
PUSH_CONT_0(co, 44, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert_45pass);
__arg1 = v0x7f41127437e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj v0x7f4112743800 = __arg1;
PUSH_CONT_0(co, 45, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45pass);
__arg1 = v0x7f4112743800;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj v0x7f41127438e0 = __arg1;
PUSH_CONT_0(co, 46, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack_45pass);
__arg1 = v0x7f41127438e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj v0x7f4112743980 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda_45pass);
__arg1 = v0x7f4112743980;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj exp = __arg1;
pushCont(co, 48, clofun1, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35cadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj v0x7f41126cb180 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj obj = v0x7f41126cb180;
pushCont(co, 49, clofun1, 1, obj);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35cddr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj v0x7f41126cb280 = __arg1;
Obj obj= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fns = v0x7f41126cb280;
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
Obj v0x7f41126cf080 = __arg1;
Obj v0x7f41126cf0a0 = __arg2;
Obj v0x7f41126cf160 = makeNative(1, clofun2, 0, 2, v0x7f41126cf080, v0x7f41126cf0a0);
Obj obj = v0x7f41126cf080;
Obj v0x7f411243cee0 = PRIM_EQ(Nil, v0x7f41126cf0a0);
if (True == v0x7f411243cee0) {
__nargs = 2;
__arg1 = obj;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f41126cf160;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj v0x7f41126cf320 = makeNative(2, clofun2, 0, 0);
Obj obj = closureRef(co, 0);
Obj v0x7f411243c880 = PRIM_ISCONS(closureRef(co, 1));
if (True == v0x7f411243c880) {
Obj v0x7f411243c980 = PRIM_CAR(closureRef(co, 1));
Obj hd = v0x7f411243c980;
Obj v0x7f411243ca80 = PRIM_CDR(closureRef(co, 1));
Obj more = v0x7f411243ca80;
Obj v0x7f411243ccc0 = makeCons(obj, Nil);
Obj v0x7f411243cce0 = makeCons(hd, v0x7f411243ccc0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35rewrite_45_45_62macro);
__arg1 = v0x7f411243cce0;
__arg2 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f41126cf320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
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

label3:
{
Obj exp = __arg1;
pushCont(co, 4, clofun2, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35vector);
__arg1 = MAKE_NUMBER(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj v0x7f411245b800 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v = v0x7f411245b800;
pushCont(co, 5, clofun2, 2, exp, v);
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

label5:
{
Obj v0x7f411245b940 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 6, clofun2, 2, exp, v);
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

label6:
{
Obj v0x7f411245ba80 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 7, clofun2, 1, v);
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

label7:
{
Obj v0x7f411245bba0 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1 = v0x7f411245bba0;
Obj v0x7f411245bfc0 = makeCons(e1, Nil);
Obj v0x7f411245bfe0 = makeCons(Nil, v0x7f411245bfc0);
Obj v0x7f411243c340 = makeCons(Nil, v0x7f411245bfe0);
Obj v0x7f411243c360 = makeCons(symlambda, v0x7f411243c340);
pushCont(co, 8, clofun2, 1, v);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = v0x7f411243c360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj v0x7f411243c380 = __arg1;
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

label9:
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

label10:
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

label11:
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

label12:
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

label13:
{
Obj v0x7f411272d420 = __arg1;
Obj v0x7f411272d500 = __arg2;
Obj v0x7f411272d520 = __arg3;
Obj v0x7f411272d640 = makeNative(21, clofun2, 0, 3, v0x7f411272d420, v0x7f411272d500, v0x7f411272d520);
Obj w = v0x7f411272d420;
Obj v0x7f41124ad760 = PRIM_ISCONS(v0x7f411272d500);
if (True == v0x7f41124ad760) {
Obj v0x7f41124ad8a0 = PRIM_CAR(v0x7f411272d500);
Obj label = v0x7f41124ad8a0;
Obj v0x7f41124ada60 = PRIM_CDR(v0x7f411272d500);
Obj v0x7f41124ada80 = PRIM_ISCONS(v0x7f41124ada60);
if (True == v0x7f41124ada80) {
Obj v0x7f41124adcc0 = PRIM_CDR(v0x7f411272d500);
Obj v0x7f41124add00 = PRIM_CAR(v0x7f41124adcc0);
Obj v0x7f41124add60 = PRIM_ISCONS(v0x7f41124add00);
if (True == v0x7f41124add60) {
Obj v0x7f411248cc80 = PRIM_CDR(v0x7f411272d500);
Obj v0x7f411248cca0 = PRIM_CAR(v0x7f411248cc80);
Obj v0x7f411248ccc0 = PRIM_CAR(v0x7f411248cca0);
Obj v0x7f411248cce0 = PRIM_EQ(symlambda, v0x7f411248ccc0);
if (True == v0x7f411248cce0) {
Obj v0x7f411248cfc0 = PRIM_CDR(v0x7f411272d500);
Obj v0x7f411248cfe0 = PRIM_CAR(v0x7f411248cfc0);
Obj v0x7f411248a000 = PRIM_CDR(v0x7f411248cfe0);
Obj v0x7f411248a020 = PRIM_ISCONS(v0x7f411248a000);
if (True == v0x7f411248a020) {
Obj v0x7f411248a300 = PRIM_CDR(v0x7f411272d500);
Obj v0x7f411248a320 = PRIM_CAR(v0x7f411248a300);
Obj v0x7f411248a340 = PRIM_CDR(v0x7f411248a320);
Obj v0x7f411248a360 = PRIM_CAR(v0x7f411248a340);
Obj params = v0x7f411248a360;
Obj v0x7f411248a6e0 = PRIM_CDR(v0x7f411272d500);
Obj v0x7f411248a700 = PRIM_CAR(v0x7f411248a6e0);
Obj v0x7f411248a720 = PRIM_CDR(v0x7f411248a700);
Obj v0x7f411248a740 = PRIM_CDR(v0x7f411248a720);
Obj v0x7f411248a760 = PRIM_ISCONS(v0x7f411248a740);
if (True == v0x7f411248a760) {
Obj v0x7f411248aae0 = PRIM_CDR(v0x7f411272d500);
Obj v0x7f411248ab00 = PRIM_CAR(v0x7f411248aae0);
Obj v0x7f411248ab20 = PRIM_CDR(v0x7f411248ab00);
Obj v0x7f411248ab40 = PRIM_CDR(v0x7f411248ab20);
Obj v0x7f411248ab60 = PRIM_CAR(v0x7f411248ab40);
Obj actives = v0x7f411248ab60;
Obj v0x7f411248af80 = PRIM_CDR(v0x7f411272d500);
Obj v0x7f411248afa0 = PRIM_CAR(v0x7f411248af80);
Obj v0x7f411248afc0 = PRIM_CDR(v0x7f411248afa0);
Obj v0x7f411248afe0 = PRIM_CDR(v0x7f411248afc0);
Obj v0x7f4112487000 = PRIM_CDR(v0x7f411248afe0);
Obj v0x7f4112487020 = PRIM_ISCONS(v0x7f4112487000);
if (True == v0x7f4112487020) {
Obj v0x7f4112487440 = PRIM_CDR(v0x7f411272d500);
Obj v0x7f4112487460 = PRIM_CAR(v0x7f4112487440);
Obj v0x7f4112487480 = PRIM_CDR(v0x7f4112487460);
Obj v0x7f41124874a0 = PRIM_CDR(v0x7f4112487480);
Obj v0x7f41124874c0 = PRIM_CDR(v0x7f41124874a0);
Obj v0x7f41124874e0 = PRIM_CAR(v0x7f41124874c0);
Obj body = v0x7f41124874e0;
Obj v0x7f41124879c0 = PRIM_CDR(v0x7f411272d500);
Obj v0x7f41124879e0 = PRIM_CAR(v0x7f41124879c0);
Obj v0x7f4112487a00 = PRIM_CDR(v0x7f41124879e0);
Obj v0x7f4112487a20 = PRIM_CDR(v0x7f4112487a00);
Obj v0x7f4112487a40 = PRIM_CDR(v0x7f4112487a20);
Obj v0x7f4112487a60 = PRIM_CDR(v0x7f4112487a40);
Obj v0x7f4112487a80 = PRIM_EQ(Nil, v0x7f4112487a60);
if (True == v0x7f4112487a80) {
Obj v0x7f4112487ce0 = PRIM_CDR(v0x7f411272d500);
Obj v0x7f4112487d00 = PRIM_CDR(v0x7f4112487ce0);
Obj v0x7f4112487d20 = PRIM_EQ(Nil, v0x7f4112487d00);
if (True == v0x7f4112487d20) {
Obj maxid = v0x7f411272d520;
pushCont(co, 14, clofun2, 6, actives, maxid, label, params, body, w);
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
__arg0 = v0x7f411272d640;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d640;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d640;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d640;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d640;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d640;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d640;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d640;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d640;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj v0x7f4112487e80 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj v0x7f4112485100 = PRIM_SUB(maxid, label);
pushCont(co, 15, clofun2, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = v0x7f4112485100;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj v0x7f4112485140 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 16, clofun2, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = v0x7f4112485140;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj v0x7f4112485160 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 17, clofun2, 6, actives, maxid, label, params, body, w);
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

label17:
{
Obj v0x7f4112485280 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 18, clofun2, 6, actives, maxid, label, params, body, w);
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

label18:
{
Obj v0x7f41124853e0 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 19, clofun2, 5, maxid, label, params, body, w);
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

label19:
{
Obj v0x7f4112485540 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj v0x7f4112485700 = makeCons(maxid, label);
pushCont(co, 20, clofun2, 1, w);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = v0x7f4112485700;
__arg2 = params;
__arg3 = w;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj v0x7f4112485780 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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

label21:
{
Obj v0x7f411272dc60 = makeNative(24, clofun2, 0, 0);
Obj w = closureRef(co, 0);
Obj other = closureRef(co, 1);
Obj maxid = closureRef(co, 2);
pushCont(co, 22, clofun2, 1, other);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35display);
__arg1 = makeCString("wrong format of toplevel\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj v0x7f41124ad400 = __arg1;
Obj other= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 23, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35display);
__arg1 = other;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj v0x7f41124ad500 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35display);
__arg1 = makeCString("\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
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

label25:
{
Obj v0x7f411273ea00 = __arg1;
Obj v0x7f411273ea20 = __arg2;
Obj v0x7f411273ea40 = __arg3;
Obj v0x7f411273eaa0 = co->args[4];
Obj v0x7f411273ec20 = makeNative(26, clofun2, 0, 4, v0x7f411273ea00, v0x7f411273ea20, v0x7f411273ea40, v0x7f411273eaa0);
Obj fn = v0x7f411273ea00;
Obj w = v0x7f411273ea20;
Obj idx = v0x7f411273ea40;
Obj v0x7f41124c4d80 = PRIM_EQ(Nil, v0x7f411273eaa0);
if (True == v0x7f41124c4d80) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411273ec20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj v0x7f411273ef60 = makeNative(28, clofun2, 0, 0);
Obj fn = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj idx = closureRef(co, 2);
Obj v0x7f41124c4520 = PRIM_ISCONS(closureRef(co, 3));
if (True == v0x7f41124c4520) {
Obj v0x7f41124c4620 = PRIM_CAR(closureRef(co, 3));
Obj a = v0x7f41124c4620;
Obj v0x7f41124c4720 = PRIM_CDR(closureRef(co, 3));
Obj b = v0x7f41124c4720;
pushCont(co, 27, clofun2, 4, idx, fn, w, b);
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
__arg0 = v0x7f411273ef60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj v0x7f41124c4880 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj v0x7f41124c4a80 = PRIM_ADD(idx, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45args_45reverse);
__arg1 = fn;
__arg2 = w;
__arg3 = v0x7f41124c4a80;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 30, clofun2, 3, var, i, w);
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

label30:
{
Obj v0x7f41124cba60 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 31, clofun2, 2, i, w);
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

label31:
{
Obj v0x7f41124cbbe0 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 32, clofun2, 2, i, w);
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

label32:
{
Obj v0x7f41124cbda0 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun2, 1, w);
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

label33:
{
Obj v0x7f41124cbee0 = __arg1;
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

label34:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 35, clofun2, 3, var, i, w);
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

label35:
{
Obj v0x7f41124d9b60 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 36, clofun2, 2, i, w);
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

label36:
{
Obj v0x7f41124d9cc0 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41124d9de0 = PRIM_LT(i, MAKE_NUMBER(4));
if (True == v0x7f41124d9de0) {
pushCont(co, 39, clofun2, 2, i, w);
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
pushCont(co, 37, clofun2, 2, i, w);
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

label37:
{
Obj v0x7f41124cb2c0 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 38, clofun2, 1, w);
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

label38:
{
Obj v0x7f41124cb420 = __arg1;
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

label39:
{
Obj v0x7f41124d9f20 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 40, clofun2, 1, w);
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

label40:
{
Obj v0x7f41124cb0a0 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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

label41:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
pushCont(co, 42, clofun2, 3, label, maxid, w);
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

label42:
{
Obj v0x7f41124d94e0 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 43, clofun2, 1, w);
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

label43:
{
Obj v0x7f41124d9660 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 44, clofun2, 1, w);
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

label44:
{
Obj v0x7f41124d97c0 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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

label45:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
Obj v0x7f41124ebf00 = PRIM_SUB(maxid, label);
Obj v0x7f41124ebf40 = primDiv(v0x7f41124ebf00, globalRef(symcora_47lib_47toc_35_42mod_45num_42));
Obj gid = v0x7f41124ebf40;
pushCont(co, 46, clofun2, 2, w, gid);
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

label46:
{
Obj v0x7f41124d9140 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj gid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
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

label47:
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

label48:
{
Obj v0x7f4112743b20 = __arg1;
Obj v0x7f4112743b40 = __arg2;
Obj v0x7f4112743b60 = __arg3;
Obj v0x7f4112743b80 = co->args[4];
Obj v0x7f4112743ba0 = co->args[5];
Obj v0x7f4112743e20 = makeNative(49, clofun2, 0, 5, v0x7f4112743b20, v0x7f4112743b40, v0x7f4112743b60, v0x7f4112743b80, v0x7f4112743ba0);
Obj self = v0x7f4112743b20;
Obj env = v0x7f4112743b40;
Obj fn = v0x7f4112743b60;
Obj w = v0x7f4112743b80;
Obj v0x7f41124eb700 = PRIM_EQ(Nil, v0x7f4112743ba0);
if (True == v0x7f41124eb700) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112743e20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj v0x7f411273e1e0 = makeNative(3, clofun3, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj fn = closureRef(co, 2);
Obj w = closureRef(co, 3);
Obj v0x7f41125127e0 = PRIM_ISCONS(closureRef(co, 4));
if (True == v0x7f41125127e0) {
Obj v0x7f4112512960 = PRIM_CAR(closureRef(co, 4));
Obj a = v0x7f4112512960;
Obj v0x7f4112512aa0 = PRIM_CDR(closureRef(co, 4));
Obj b = v0x7f4112512aa0;
pushCont(co, 0, clofun3, 5, self, env, fn, w, b);
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
__arg0 = v0x7f411273e1e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
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
Obj v0x7f4112512c60 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 1, clofun3, 5, self, env, fn, w, b);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj v0x7f4112512ee0 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj v0x7f4112512f00 = primNot(v0x7f4112512ee0);
if (True == v0x7f4112512f00) {
pushCont(co, 2, clofun3, 5, self, env, fn, w, b);
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

label2:
{
Obj v0x7f41124eb040 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
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

label3:
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

label4:
{
Obj v0x7f41127432e0 = __arg1;
Obj v0x7f4112743300 = __arg2;
Obj v0x7f4112743320 = __arg3;
Obj v0x7f4112743460 = makeNative(27, clofun3, 0, 0);
Obj self = v0x7f41127432e0;
Obj w = v0x7f4112743300;
Obj v0x7f4112570a20 = PRIM_ISCONS(v0x7f4112743320);
if (True == v0x7f4112570a20) {
Obj v0x7f4112570c40 = PRIM_CAR(v0x7f4112743320);
Obj v0x7f4112570c60 = PRIM_EQ(sym_37continuation, v0x7f4112570c40);
if (True == v0x7f4112570c60) {
Obj v0x7f4112570e80 = PRIM_CDR(v0x7f4112743320);
Obj v0x7f4112570ea0 = PRIM_ISCONS(v0x7f4112570e80);
if (True == v0x7f4112570ea0) {
Obj v0x7f41125630e0 = PRIM_CDR(v0x7f4112743320);
Obj v0x7f4112563100 = PRIM_CAR(v0x7f41125630e0);
Obj label = v0x7f4112563100;
Obj v0x7f4112563360 = PRIM_CDR(v0x7f4112743320);
Obj v0x7f4112563380 = PRIM_CDR(v0x7f4112563360);
Obj stacks = v0x7f4112563380;
Obj v0x7f4112563500 = PRIM_EQ(stacks, Nil);
if (True == v0x7f4112563500) {
pushCont(co, 16, clofun3, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("PUSH_CONT_0(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 5, clofun3, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("pushCont(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743460;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743460;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743460;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj v0x7f411252ca80 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj v0x7f411252ce20 = PRIM_CAR(self);
Obj v0x7f411252ce60 = PRIM_SUB(v0x7f411252ce20, label);
pushCont(co, 6, clofun3, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = v0x7f411252ce60;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj v0x7f411252cea0 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 7, clofun3, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = v0x7f411252cea0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj v0x7f411252cec0 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 8, clofun3, 4, label, self, stacks, w);
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

label8:
{
Obj v0x7f4112529020 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj v0x7f4112529260 = PRIM_CAR(self);
pushCont(co, 9, clofun3, 3, self, stacks, w);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = w;
__arg2 = label;
__arg3 = v0x7f4112529260;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj v0x7f4112529280 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f4112529400 = PRIM_EQ(stacks, Nil);
if (True == v0x7f4112529400) {
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
} else {
pushCont(co, 10, clofun3, 3, self, stacks, w);
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
}

label10:
{
Obj v0x7f4112529680 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 11, clofun3, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj v0x7f4112529860 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 12, clofun3, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = v0x7f4112529860;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj v0x7f4112529880 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 13, clofun3, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(14, clofun3, 1, 2, self, w);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj v0x7f4112529f60 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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
pushCont(co, 15, clofun3, 1, x);
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
Obj v0x7f4112529ae0 = __arg1;
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

label16:
{
Obj v0x7f4112563600 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj v0x7f41125639a0 = PRIM_CAR(self);
Obj v0x7f41125639e0 = PRIM_SUB(v0x7f41125639a0, label);
pushCont(co, 17, clofun3, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = v0x7f41125639e0;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj v0x7f4112563a40 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 18, clofun3, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = v0x7f4112563a40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj v0x7f4112563a60 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 19, clofun3, 4, label, self, stacks, w);
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

label19:
{
Obj v0x7f4112563ba0 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj v0x7f4112563e20 = PRIM_CAR(self);
pushCont(co, 20, clofun3, 3, self, stacks, w);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = w;
__arg2 = label;
__arg3 = v0x7f4112563e20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj v0x7f4112563e40 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f411252c000 = PRIM_EQ(stacks, Nil);
if (True == v0x7f411252c000) {
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
} else {
pushCont(co, 21, clofun3, 3, self, stacks, w);
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
}

label21:
{
Obj v0x7f411252c2e0 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 22, clofun3, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj v0x7f411252c4a0 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 23, clofun3, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = v0x7f411252c4a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj v0x7f411252c580 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 24, clofun3, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(25, clofun3, 1, 2, self, w);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj v0x7f411252c8c0 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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

label25:
{
Obj x = __arg1;
pushCont(co, 26, clofun3, 1, x);
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

label26:
{
Obj v0x7f411252c780 = __arg1;
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

label27:
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

label28:
{
Obj self = __arg1;
Obj env = __arg2;
Obj w = __arg3;
Obj x1 = co->args[4];
Obj v0x7f411252c4c0 = primIsSymbol(x1);
if (True == v0x7f411252c4c0) {
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
Obj v0x7f411273e580 = makeNative(31, clofun3, 0, 4, self, env, x1, w);
Obj v0x7f41125c0200 = PRIM_ISCONS(x1);
if (True == v0x7f41125c0200) {
Obj v0x7f41125c0480 = PRIM_CAR(x1);
Obj v0x7f41125c04a0 = PRIM_EQ(sym_37global, v0x7f41125c0480);
if (True == v0x7f41125c04a0) {
Obj v0x7f41125c0720 = PRIM_CDR(x1);
Obj v0x7f41125c0740 = PRIM_ISCONS(v0x7f41125c0720);
if (True == v0x7f41125c0740) {
Obj v0x7f41125c09a0 = PRIM_CDR(x1);
Obj v0x7f41125c09c0 = PRIM_CAR(v0x7f41125c09a0);
Obj x = v0x7f41125c09c0;
Obj v0x7f41125c0e40 = PRIM_CDR(x1);
Obj v0x7f41125c0e60 = PRIM_CDR(v0x7f41125c0e40);
Obj v0x7f41125c0e80 = PRIM_EQ(Nil, v0x7f41125c0e60);
if (True == v0x7f41125c0e80) {
pushCont(co, 29, clofun3, 2, x, w);
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
__arg0 = v0x7f411273e580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e580;
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
Obj v0x7f41125c0fc0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 30, clofun3, 1, w);
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

label30:
{
Obj v0x7f4112570100 = __arg1;
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

label31:
{
Obj v0x7f411273e720 = makeNative(34, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj v0x7f41125cdcc0 = PRIM_ISCONS(closureRef(co, 2));
if (True == v0x7f41125cdcc0) {
Obj v0x7f41125c10a0 = PRIM_CAR(closureRef(co, 2));
Obj v0x7f41125c10c0 = PRIM_EQ(sym_37closure_45ref, v0x7f41125c10a0);
if (True == v0x7f41125c10c0) {
Obj v0x7f41125c1320 = PRIM_CDR(closureRef(co, 2));
Obj v0x7f41125c1340 = PRIM_ISCONS(v0x7f41125c1320);
if (True == v0x7f41125c1340) {
Obj v0x7f41125c1500 = PRIM_CDR(closureRef(co, 2));
Obj v0x7f41125c1520 = PRIM_CAR(v0x7f41125c1500);
Obj idx = v0x7f41125c1520;
Obj v0x7f41125c1920 = PRIM_CDR(closureRef(co, 2));
Obj v0x7f41125c1940 = PRIM_CDR(v0x7f41125c1920);
Obj v0x7f41125c1960 = PRIM_EQ(Nil, v0x7f41125c1940);
if (True == v0x7f41125c1960) {
pushCont(co, 32, clofun3, 1, idx);
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
__arg0 = v0x7f411273e720;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e720;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e720;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e720;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj v0x7f41125c1aa0 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 33, clofun3);
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

label33:
{
Obj v0x7f41125c1c60 = __arg1;
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

label34:
{
Obj v0x7f411273e900 = makeNative(37, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj v0x7f41125cf3e0 = PRIM_ISCONS(closureRef(co, 2));
if (True == v0x7f41125cf3e0) {
Obj v0x7f41125cf7e0 = PRIM_CAR(closureRef(co, 2));
Obj v0x7f41125cf800 = PRIM_EQ(sym_37stack_45ref, v0x7f41125cf7e0);
if (True == v0x7f41125cf800) {
Obj v0x7f41125cfae0 = PRIM_CDR(closureRef(co, 2));
Obj v0x7f41125cfb20 = PRIM_ISCONS(v0x7f41125cfae0);
if (True == v0x7f41125cfb20) {
Obj v0x7f41125cfdc0 = PRIM_CDR(closureRef(co, 2));
Obj v0x7f41125cfde0 = PRIM_CAR(v0x7f41125cfdc0);
Obj idx = v0x7f41125cfde0;
Obj v0x7f41125cd2c0 = PRIM_CDR(closureRef(co, 2));
Obj v0x7f41125cd2e0 = PRIM_CDR(v0x7f41125cd2c0);
Obj v0x7f41125cd360 = PRIM_EQ(Nil, v0x7f41125cd2e0);
if (True == v0x7f41125cd360) {
pushCont(co, 35, clofun3, 1, idx);
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
__arg0 = v0x7f411273e900;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e900;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e900;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e900;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj v0x7f41125cd4e0 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 36, clofun3);
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

label36:
{
Obj v0x7f41125cd6a0 = __arg1;
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

label37:
{
Obj v0x7f411273eae0 = makeNative(45, clofun3, 0, 4, closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 3));
Obj v0x7f41125e7fe0 = PRIM_ISCONS(closureRef(co, 2));
if (True == v0x7f41125e7fe0) {
Obj v0x7f41125e52e0 = PRIM_CAR(closureRef(co, 2));
Obj v0x7f41125e5300 = PRIM_EQ(sym_37const, v0x7f41125e52e0);
if (True == v0x7f41125e5300) {
Obj v0x7f41125e55e0 = PRIM_CDR(closureRef(co, 2));
Obj v0x7f41125e5600 = PRIM_ISCONS(v0x7f41125e55e0);
if (True == v0x7f41125e5600) {
Obj v0x7f41125e59c0 = PRIM_CDR(closureRef(co, 2));
Obj v0x7f41125e59e0 = PRIM_CAR(v0x7f41125e59c0);
Obj x = v0x7f41125e59e0;
Obj v0x7f41125e5e40 = PRIM_CDR(closureRef(co, 2));
Obj v0x7f41125e5e60 = PRIM_CDR(v0x7f41125e5e40);
Obj v0x7f41125e5e80 = PRIM_EQ(Nil, v0x7f41125e5e60);
if (True == v0x7f41125e5e80) {
Obj v0x7f41125e5fc0 = primIsSymbol(x);
if (True == v0x7f41125e5fc0) {
pushCont(co, 44, clofun3, 1, x);
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
pushCont(co, 38, clofun3, 1, x);
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
__arg0 = v0x7f411273eae0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273eae0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273eae0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273eae0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj v0x7f41125d6580 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == v0x7f41125d6580) {
pushCont(co, 42, clofun3, 1, x);
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
Obj v0x7f41125d6ca0 = primIsString(x);
if (True == v0x7f41125d6ca0) {
pushCont(co, 39, clofun3, 1, x);
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
Obj v0x7f41125d2560 = PRIM_EQ(x, Nil);
if (True == v0x7f41125d2560) {
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
Obj v0x7f41125d28a0 = PRIM_EQ(x, True);
if (True == v0x7f41125d28a0) {
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
Obj v0x7f41125d2bc0 = PRIM_EQ(x, False);
if (True == v0x7f41125d2bc0) {
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

label39:
{
Obj v0x7f41125d6e60 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 40, clofun3);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35escape_45str);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj v0x7f41125d2120 = __arg1;
PUSH_CONT_0(co, 41, clofun3);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = v0x7f41125d2120;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj v0x7f41125d2140 = __arg1;
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

label42:
{
Obj v0x7f41125d67c0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 43, clofun3);
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

label43:
{
Obj v0x7f41125d6960 = __arg1;
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

label44:
{
Obj v0x7f41125d6140 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
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

label45:
{
Obj v0x7f411273ec40 = makeNative(6, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj v0x7f4112603a00 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112603a00) {
Obj v0x7f4112603cc0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112603ce0 = PRIM_EQ(symlet, v0x7f4112603cc0);
if (True == v0x7f4112603ce0) {
Obj v0x7f41125fe060 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125fe0a0 = PRIM_ISCONS(v0x7f41125fe060);
if (True == v0x7f41125fe0a0) {
Obj v0x7f41125fe2e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125fe300 = PRIM_CAR(v0x7f41125fe2e0);
Obj a = v0x7f41125fe300;
Obj v0x7f41125fe600 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125fe620 = PRIM_CDR(v0x7f41125fe600);
Obj v0x7f41125fe640 = PRIM_ISCONS(v0x7f41125fe620);
if (True == v0x7f41125fe640) {
Obj v0x7f41125fe9e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125fea00 = PRIM_CDR(v0x7f41125fe9e0);
Obj v0x7f41125fea20 = PRIM_CAR(v0x7f41125fea00);
Obj b = v0x7f41125fea20;
Obj v0x7f41125fee80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125feea0 = PRIM_CDR(v0x7f41125fee80);
Obj v0x7f41125feec0 = PRIM_CDR(v0x7f41125feea0);
Obj v0x7f41125feee0 = PRIM_ISCONS(v0x7f41125feec0);
if (True == v0x7f41125feee0) {
Obj v0x7f41125fb440 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125fb460 = PRIM_CDR(v0x7f41125fb440);
Obj v0x7f41125fb480 = PRIM_CDR(v0x7f41125fb460);
Obj v0x7f41125fb4a0 = PRIM_CAR(v0x7f41125fb480);
Obj c = v0x7f41125fb4a0;
Obj v0x7f41125fba40 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125fba60 = PRIM_CDR(v0x7f41125fba40);
Obj v0x7f41125fba80 = PRIM_CDR(v0x7f41125fba60);
Obj v0x7f41125fbaa0 = PRIM_CDR(v0x7f41125fba80);
Obj v0x7f41125fbae0 = PRIM_EQ(Nil, v0x7f41125fbaa0);
if (True == v0x7f41125fbae0) {
pushCont(co, 46, clofun3, 3, b, a, c);
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
__arg0 = v0x7f411273ec40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ec40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ec40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ec40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ec40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ec40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj v0x7f41125fbd40 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj idx = v0x7f41125fbd40;
Obj v0x7f41125fbf00 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == v0x7f41125fbf00) {
pushCont(co, 1, clofun4, 3, b, a, c);
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
pushCont(co, 47, clofun3, 3, b, a, c);
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

label47:
{
Obj v0x7f41125ece00 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 48, clofun3, 3, b, a, c);
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

label48:
{
Obj v0x7f41125ecf20 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 49, clofun3, 2, a, c);
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

label49:
{
Obj v0x7f41125e7180 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 0, clofun4, 2, a, c);
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
Obj v0x7f41125e7440 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41125e77a0 = makeCons(a, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = v0x7f41125e77a0;
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj v0x7f41125ec000 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 2, clofun4, 3, b, a, c);
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

label2:
{
Obj v0x7f41125ec2e0 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 3, clofun4, 3, b, a, c);
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

label3:
{
Obj v0x7f41125ec440 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 4, clofun4, 2, a, c);
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

label4:
{
Obj v0x7f41125ec600 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 5, clofun4, 2, a, c);
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

label5:
{
Obj v0x7f41125ec840 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41125ecac0 = makeCons(a, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = v0x7f41125ecac0;
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj v0x7f411273ef00 = makeNative(13, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj v0x7f4112669060 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112669060) {
Obj v0x7f41126692e0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112669300 = PRIM_ISCONS(v0x7f41126692e0);
if (True == v0x7f4112669300) {
Obj v0x7f4112669580 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41126695a0 = PRIM_CAR(v0x7f4112669580);
Obj v0x7f41126695c0 = PRIM_EQ(sym_37builtin, v0x7f41126695a0);
if (True == v0x7f41126695c0) {
Obj v0x7f4112669a20 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112669a80 = PRIM_CDR(v0x7f4112669a20);
Obj v0x7f4112669aa0 = PRIM_ISCONS(v0x7f4112669a80);
if (True == v0x7f4112669aa0) {
Obj v0x7f4112669e80 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112669ea0 = PRIM_CDR(v0x7f4112669e80);
Obj v0x7f4112669ec0 = PRIM_CAR(v0x7f4112669ea0);
Obj f = v0x7f4112669ec0;
Obj v0x7f411261b300 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f411261b340 = PRIM_CDR(v0x7f411261b300);
Obj v0x7f411261b360 = PRIM_CDR(v0x7f411261b340);
Obj v0x7f411261b380 = PRIM_EQ(Nil, v0x7f411261b360);
if (True == v0x7f411261b380) {
Obj v0x7f411261b580 = PRIM_CDR(closureRef(co, 0));
Obj args = v0x7f411261b580;
pushCont(co, 7, clofun4, 2, f, args);
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
__arg0 = v0x7f411273ef00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ef00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ef00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ef00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ef00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj v0x7f411261b820 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 8, clofun4, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = v0x7f411261b820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj v0x7f411261b840 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f411261b9e0 = PRIM_EQ(f, symset);
if (True == v0x7f411261b9e0) {
pushCont(co, 11, clofun4, 1, args);
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
pushCont(co, 9, clofun4, 1, args);
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

label9:
{
Obj v0x7f4112603100 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 10, clofun4);
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

label10:
{
Obj v0x7f4112603380 = __arg1;
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

label11:
{
Obj v0x7f411261bba0 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 12, clofun4);
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

label12:
{
Obj v0x7f411261bde0 = __arg1;
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

label13:
{
Obj v0x7f411272d100 = makeNative(20, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj v0x7f41126cf880 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41126cf880) {
Obj v0x7f41126cfb60 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41126cfb80 = PRIM_EQ(symif, v0x7f41126cfb60);
if (True == v0x7f41126cfb80) {
Obj v0x7f41126b5160 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41126b5180 = PRIM_ISCONS(v0x7f41126b5160);
if (True == v0x7f41126b5180) {
Obj v0x7f41126b5420 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41126b5440 = PRIM_CAR(v0x7f41126b5420);
Obj a = v0x7f41126b5440;
Obj v0x7f41126b5880 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41126b58a0 = PRIM_CDR(v0x7f41126b5880);
Obj v0x7f41126b58c0 = PRIM_ISCONS(v0x7f41126b58a0);
if (True == v0x7f41126b58c0) {
Obj v0x7f41126b5c40 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41126b5c60 = PRIM_CDR(v0x7f41126b5c40);
Obj v0x7f41126b5c80 = PRIM_CAR(v0x7f41126b5c60);
Obj b = v0x7f41126b5c80;
Obj v0x7f41126af0e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41126af100 = PRIM_CDR(v0x7f41126af0e0);
Obj v0x7f41126af140 = PRIM_CDR(v0x7f41126af100);
Obj v0x7f41126af1a0 = PRIM_ISCONS(v0x7f41126af140);
if (True == v0x7f41126af1a0) {
Obj v0x7f41126af600 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41126af620 = PRIM_CDR(v0x7f41126af600);
Obj v0x7f41126af660 = PRIM_CDR(v0x7f41126af620);
Obj v0x7f41126af680 = PRIM_CAR(v0x7f41126af660);
Obj c = v0x7f41126af680;
Obj v0x7f41126afc40 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41126afc80 = PRIM_CDR(v0x7f41126afc40);
Obj v0x7f41126afca0 = PRIM_CDR(v0x7f41126afc80);
Obj v0x7f41126afcc0 = PRIM_CDR(v0x7f41126afca0);
Obj v0x7f41126afce0 = PRIM_EQ(Nil, v0x7f41126afcc0);
if (True == v0x7f41126afce0) {
pushCont(co, 14, clofun4, 3, a, b, c);
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
__arg0 = v0x7f411272d100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj v0x7f41126afec0 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 15, clofun4, 2, b, c);
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

label15:
{
Obj v0x7f41126a7100 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 16, clofun4, 2, b, c);
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

label16:
{
Obj v0x7f41126a7220 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 17, clofun4, 1, c);
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

label17:
{
Obj v0x7f41126a7520 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 18, clofun4, 1, c);
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

label18:
{
Obj v0x7f41126a7660 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 19, clofun4);
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

label19:
{
Obj v0x7f41126a7920 = __arg1;
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

label20:
{
Obj v0x7f411272d3c0 = makeNative(34, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj v0x7f41124add40 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41124add40) {
Obj v0x7f41124adf60 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41124adf80 = PRIM_EQ(sym_37closure, v0x7f41124adf60);
if (True == v0x7f41124adf80) {
Obj v0x7f411248c120 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411248c140 = PRIM_ISCONS(v0x7f411248c120);
if (True == v0x7f411248c140) {
Obj v0x7f411248c300 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411248c320 = PRIM_CAR(v0x7f411248c300);
Obj label = v0x7f411248c320;
Obj v0x7f411248c560 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411248c580 = PRIM_CDR(v0x7f411248c560);
Obj v0x7f411248c5a0 = PRIM_ISCONS(v0x7f411248c580);
if (True == v0x7f411248c5a0) {
Obj v0x7f411248c7e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411248c800 = PRIM_CDR(v0x7f411248c7e0);
Obj v0x7f411248c820 = PRIM_CAR(v0x7f411248c800);
Obj nargs = v0x7f411248c820;
Obj v0x7f41127430a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112743160 = PRIM_CDR(v0x7f41127430a0);
Obj v0x7f4112743180 = PRIM_CDR(v0x7f4112743160);
Obj frees = v0x7f4112743180;
pushCont(co, 21, clofun4, 3, label, nargs, frees);
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
__arg0 = v0x7f411272d3c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d3c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d3c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d3c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj v0x7f4112743500 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f4112743dc0 = PRIM_CAR(closureRef(co, 1));
Obj v0x7f4112743e80 = PRIM_SUB(v0x7f4112743dc0, label);
pushCont(co, 22, clofun4, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = v0x7f4112743e80;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj v0x7f4112743f60 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 23, clofun4, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = v0x7f4112743f60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj v0x7f4112743f80 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 24, clofun4, 3, label, nargs, frees);
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

label24:
{
Obj v0x7f411273e200 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f411273e6c0 = PRIM_CAR(closureRef(co, 1));
pushCont(co, 25, clofun4, 2, nargs, frees);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 3);
__arg2 = label;
__arg3 = v0x7f411273e6c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj v0x7f411273e6e0 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 26, clofun4, 2, nargs, frees);
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

label26:
{
Obj v0x7f411273ec60 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun4, 1, frees);
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

label27:
{
Obj v0x7f411273efc0 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 28, clofun4, 1, frees);
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

label28:
{
Obj v0x7f411272d160 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 29, clofun4, 1, frees);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj v0x7f411272d580 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun4, 1, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = v0x7f411272d580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj v0x7f411272d5a0 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 31, clofun4, 1, frees);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj v0x7f411272da80 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f411272db00 = primNot(v0x7f411272da80);
if (True == v0x7f411272db00) {
pushCont(co, 32, clofun4, 1, frees);
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

label32:
{
Obj v0x7f411272dcc0 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 33, clofun4);
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

label33:
{
Obj v0x7f411272dec0 = __arg1;
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

label34:
{
Obj v0x7f411272d6a0 = makeNative(37, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 3));
Obj v0x7f41124c47e0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41124c47e0) {
Obj v0x7f41124c49a0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41124c49c0 = PRIM_EQ(symdo, v0x7f41124c49a0);
if (True == v0x7f41124c49c0) {
Obj v0x7f41124c4b60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124c4b80 = PRIM_ISCONS(v0x7f41124c4b60);
if (True == v0x7f41124c4b80) {
Obj v0x7f41124c4d20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124c4d40 = PRIM_CAR(v0x7f41124c4d20);
Obj a = v0x7f41124c4d40;
Obj v0x7f41124c4fc0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124c4fe0 = PRIM_CDR(v0x7f41124c4fc0);
Obj v0x7f41124ad000 = PRIM_ISCONS(v0x7f41124c4fe0);
if (True == v0x7f41124ad000) {
Obj v0x7f41124ad260 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124ad280 = PRIM_CDR(v0x7f41124ad260);
Obj v0x7f41124ad2a0 = PRIM_CAR(v0x7f41124ad280);
Obj b = v0x7f41124ad2a0;
Obj v0x7f41124ad5c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124ad5e0 = PRIM_CDR(v0x7f41124ad5c0);
Obj v0x7f41124ad600 = PRIM_CDR(v0x7f41124ad5e0);
Obj v0x7f41124ad620 = PRIM_EQ(Nil, v0x7f41124ad600);
if (True == v0x7f41124ad620) {
pushCont(co, 35, clofun4, 1, b);
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
__arg0 = v0x7f411272d6a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d6a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d6a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d6a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d6a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj v0x7f41124ad780 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 36, clofun4, 1, b);
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

label36:
{
Obj v0x7f41124ad8c0 = __arg1;
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

label37:
{
Obj v0x7f411272d880 = makeNative(46, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 3));
Obj v0x7f41124d9e20 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41124d9e20) {
Obj v0x7f41124cb000 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41124cb020 = PRIM_EQ(symreturn, v0x7f41124cb000);
if (True == v0x7f41124cb020) {
Obj v0x7f41124cb1c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124cb1e0 = PRIM_ISCONS(v0x7f41124cb1c0);
if (True == v0x7f41124cb1e0) {
Obj v0x7f41124cb380 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124cb3a0 = PRIM_CAR(v0x7f41124cb380);
Obj x = v0x7f41124cb3a0;
Obj v0x7f41124cb600 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124cb620 = PRIM_CDR(v0x7f41124cb600);
Obj v0x7f41124cb640 = PRIM_EQ(Nil, v0x7f41124cb620);
if (True == v0x7f41124cb640) {
pushCont(co, 38, clofun4, 1, x);
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
__arg0 = v0x7f411272d880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj v0x7f41124cb8a0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 39, clofun4, 1, x);
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

label39:
{
Obj v0x7f41124cbb00 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 40, clofun4);
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

label40:
{
Obj v0x7f41124cbce0 = __arg1;
PUSH_CONT_0(co, 41, clofun4);
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

label41:
{
Obj v0x7f41124cbe00 = __arg1;
PUSH_CONT_0(co, 42, clofun4);
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

label42:
{
Obj v0x7f41124cbf20 = __arg1;
PUSH_CONT_0(co, 43, clofun4);
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

label43:
{
Obj v0x7f41124c4040 = __arg1;
Obj v0x7f41124c4200 = PRIM_CDR(closureRef(co, 2));
Obj v0x7f41124c42e0 = PRIM_CAR(closureRef(co, 2));
PUSH_CONT_0(co, 44, clofun4);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 3);
__arg2 = v0x7f41124c4200;
__arg3 = v0x7f41124c42e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj v0x7f41124c4300 = __arg1;
PUSH_CONT_0(co, 45, clofun4);
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

label45:
{
Obj v0x7f41124c4420 = __arg1;
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

label46:
{
Obj v0x7f411272da00 = makeNative(47, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj v0x7f41124d9220 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41124d9220) {
Obj v0x7f41124d93e0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41124d9400 = PRIM_EQ(symtailcall, v0x7f41124d93e0);
if (True == v0x7f41124d9400) {
Obj v0x7f41124d95a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124d95c0 = PRIM_ISCONS(v0x7f41124d95a0);
if (True == v0x7f41124d95c0) {
Obj v0x7f41124d9760 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124d9780 = PRIM_CAR(v0x7f41124d9760);
Obj exp = v0x7f41124d9780;
Obj v0x7f41124d99e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124d9a00 = PRIM_CDR(v0x7f41124d99e0);
Obj v0x7f41124d9a20 = PRIM_EQ(Nil, v0x7f41124d9a00);
if (True == v0x7f41124d9a20) {
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
__arg0 = v0x7f411272da00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272da00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272da00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272da00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj v0x7f411272db60 = makeNative(49, clofun4, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 3));
Obj v0x7f41125126e0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125126e0) {
Obj v0x7f41125128e0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112512900 = PRIM_EQ(symcall, v0x7f41125128e0);
if (True == v0x7f4112512900) {
Obj v0x7f4112512ae0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112512b00 = PRIM_ISCONS(v0x7f4112512ae0);
if (True == v0x7f4112512b00) {
Obj v0x7f4112512cc0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112512ce0 = PRIM_CAR(v0x7f4112512cc0);
Obj exp = v0x7f4112512ce0;
Obj v0x7f4112512f80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112512fa0 = PRIM_CDR(v0x7f4112512f80);
Obj v0x7f4112512fc0 = PRIM_ISCONS(v0x7f4112512fa0);
if (True == v0x7f4112512fc0) {
Obj v0x7f41124eb200 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124eb220 = PRIM_CDR(v0x7f41124eb200);
Obj v0x7f41124eb240 = PRIM_CAR(v0x7f41124eb220);
Obj cont = v0x7f41124eb240;
Obj v0x7f41124eb640 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41124eb660 = PRIM_CDR(v0x7f41124eb640);
Obj v0x7f41124eb680 = PRIM_CDR(v0x7f41124eb660);
Obj v0x7f41124eb6a0 = PRIM_EQ(Nil, v0x7f41124eb680);
if (True == v0x7f41124eb6a0) {
pushCont(co, 48, clofun4, 1, exp);
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
__arg0 = v0x7f411272db60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272db60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272db60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272db60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272db60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj v0x7f41124eb800 = __arg1;
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
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj v0x7f411272dd80 = makeNative(11, clofun5, 0, 0);
Obj v0x7f411252cf00 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f411252cf00) {
Obj v0x7f4112529000 = PRIM_CAR(closureRef(co, 0));
Obj f = v0x7f4112529000;
Obj v0x7f4112529120 = PRIM_CDR(closureRef(co, 0));
Obj args = v0x7f4112529120;
pushCont(co, 0, clofun5, 2, f, args);
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
__arg0 = v0x7f411272dd80;
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
Obj v0x7f4112529240 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 1, clofun5, 2, f, args);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj v0x7f4112529500 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112529520 = PRIM_ADD(MAKE_NUMBER(1), v0x7f4112529500);
pushCont(co, 2, clofun5, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 2);
__arg2 = v0x7f4112529520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj v0x7f4112529540 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 3, clofun5, 2, f, args);
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

label3:
{
Obj v0x7f4112529660 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41125298a0 = makeCons(f, args);
PUSH_CONT_0(co, 4, clofun5);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = MAKE_NUMBER(0);
co->args[4] = v0x7f41125298a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj v0x7f41125298c0 = __arg1;
PUSH_CONT_0(co, 5, clofun5);
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

label5:
{
Obj v0x7f41125299e0 = __arg1;
PUSH_CONT_0(co, 6, clofun5);
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

label6:
{
Obj v0x7f4112529b20 = __arg1;
PUSH_CONT_0(co, 7, clofun5);
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

label7:
{
Obj v0x7f4112529f20 = __arg1;
PUSH_CONT_0(co, 8, clofun5);
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

label8:
{
Obj v0x7f4112512060 = __arg1;
Obj v0x7f4112512220 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f4112512320 = PRIM_CAR(closureRef(co, 1));
PUSH_CONT_0(co, 9, clofun5);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 2);
__arg2 = v0x7f4112512220;
__arg3 = v0x7f4112512320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj v0x7f4112512340 = __arg1;
PUSH_CONT_0(co, 10, clofun5);
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

label10:
{
Obj v0x7f4112512460 = __arg1;
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

label11:
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

label12:
{
Obj sym = __arg1;
Obj globals = __arg2;
pushCont(co, 13, clofun5, 2, sym, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35value);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj v0x7f4112563ec0 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val = v0x7f4112563ec0;
pushCont(co, 14, clofun5, 3, sym, val, globals);
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

label14:
{
Obj v0x7f411252c020 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == v0x7f411252c020) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f411252c240 = makeCons(sym, val);
Obj v0x7f411252c260 = primSet(co, globals, v0x7f411252c240);
__nargs = 2;
__arg1 = v0x7f411252c260;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label15:
{
Obj v0x7f4112743c20 = __arg1;
Obj v0x7f4112743c40 = __arg2;
Obj v0x7f4112743c60 = __arg3;
Obj v0x7f4112743c80 = co->args[4];
Obj v0x7f4112743e40 = makeNative(16, clofun5, 0, 4, v0x7f4112743c20, v0x7f4112743c40, v0x7f4112743c60, v0x7f4112743c80);
Obj self = v0x7f4112743c20;
Obj w = v0x7f4112743c40;
Obj i = v0x7f4112743c60;
Obj v0x7f4112563b60 = PRIM_EQ(Nil, v0x7f4112743c80);
if (True == v0x7f4112563b60) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112743e40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj v0x7f411273e120 = makeNative(28, clofun5, 0, 0);
Obj self = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj i = closureRef(co, 2);
Obj v0x7f4112570220 = PRIM_ISCONS(closureRef(co, 3));
if (True == v0x7f4112570220) {
Obj v0x7f4112570320 = PRIM_CAR(closureRef(co, 3));
Obj x = v0x7f4112570320;
Obj v0x7f4112570420 = PRIM_CDR(closureRef(co, 3));
Obj more = v0x7f4112570420;
Obj v0x7f4112570640 = PRIM_GT(i, MAKE_NUMBER(3));
Obj v0x7f4112570660 = primNot(v0x7f4112570640);
if (True == v0x7f4112570660) {
pushCont(co, 23, clofun5, 5, x, i, self, w, more);
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
pushCont(co, 17, clofun5, 5, x, i, self, w, more);
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
__arg0 = v0x7f411273e120;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj v0x7f4112563080 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 18, clofun5, 5, x, i, self, w, more);
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

label18:
{
Obj v0x7f41125631a0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 19, clofun5, 5, x, i, self, w, more);
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

label19:
{
Obj v0x7f4112563280 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 20, clofun5, 5, x, i, self, w, more);
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

label20:
{
Obj v0x7f4112563420 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 21, clofun5, 4, i, self, w, more);
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

label21:
{
Obj v0x7f4112563580 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 22, clofun5, 4, i, self, w, more);
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

label22:
{
Obj v0x7f4112563700 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj v0x7f41125638c0 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = self;
__arg2 = w;
__arg3 = v0x7f41125638c0;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj v0x7f41125707c0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 24, clofun5, 5, x, i, self, w, more);
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

label24:
{
Obj v0x7f41125708a0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 25, clofun5, 5, x, i, self, w, more);
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

label25:
{
Obj v0x7f4112570a00 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 26, clofun5, 4, i, self, w, more);
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

label26:
{
Obj v0x7f4112570ba0 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 27, clofun5, 4, i, self, w, more);
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

label27:
{
Obj v0x7f4112570cc0 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj v0x7f4112570ee0 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = self;
__arg2 = w;
__arg3 = v0x7f4112570ee0;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x = __arg1;
Obj k = __arg2;
Obj v0x7f41125c0540 = primGenSym();
Obj tmp = v0x7f41125c0540;
pushCont(co, 30, clofun5, 2, x, tmp);
__nargs = 2;
__arg0 = k;
__arg1 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj v0x7f41125c0a60 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41125c0aa0 = makeCons(v0x7f41125c0a60, Nil);
Obj v0x7f41125c0b20 = makeCons(x, v0x7f41125c0aa0);
Obj v0x7f41125c0b40 = makeCons(tmp, v0x7f41125c0b20);
Obj v0x7f41125c0b60 = makeCons(symlet, v0x7f41125c0b40);
__nargs = 2;
__arg1 = v0x7f41125c0b60;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj v = __arg1;
Obj val = __arg2;
pushCont(co, 32, clofun5, 2, val, v);
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

label32:
{
Obj v0x7f41125c19a0 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj idx = v0x7f41125c19a0;
pushCont(co, 33, clofun5, 3, val, idx, v);
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

label33:
{
Obj v0x7f41125c1ac0 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cur = v0x7f41125c1ac0;
Obj v0x7f41125c1e80 = makeCons(val, Nil);
Obj v0x7f41125c1ea0 = makeCons(idx, v0x7f41125c1e80);
Obj v0x7f41125c1ee0 = makeCons(v0x7f41125c1ea0, cur);
Obj cur1 = v0x7f41125c1ee0;
Obj v0x7f41125c0140 = PRIM_ADD(idx, MAKE_NUMBER(1));
pushCont(co, 34, clofun5, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35vector_45set_33);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
__arg3 = v0x7f41125c0140;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj v0x7f41125c0160 = __arg1;
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

label35:
{
Obj v0x7f4112743120 = __arg1;
Obj v0x7f4112743140 = __arg2;
Obj v0x7f4112743240 = makeNative(1, clofun6, 0, 2, v0x7f4112743120, v0x7f4112743140);
Obj v = v0x7f4112743120;
Obj v0x7f41125fec60 = PRIM_ISCONS(v0x7f4112743140);
if (True == v0x7f41125fec60) {
Obj v0x7f41125fed80 = PRIM_CAR(v0x7f4112743140);
Obj clo_45or_45cont = v0x7f41125fed80;
Obj v0x7f41125fefe0 = PRIM_CDR(v0x7f4112743140);
Obj v0x7f41125fb000 = PRIM_ISCONS(v0x7f41125fefe0);
if (True == v0x7f41125fb000) {
Obj v0x7f41125fb320 = PRIM_CDR(v0x7f4112743140);
Obj v0x7f41125fb340 = PRIM_CAR(v0x7f41125fb320);
Obj v0x7f41125fb3a0 = PRIM_ISCONS(v0x7f41125fb340);
if (True == v0x7f41125fb3a0) {
Obj v0x7f41125fb7a0 = PRIM_CDR(v0x7f4112743140);
Obj v0x7f41125fb7c0 = PRIM_CAR(v0x7f41125fb7a0);
Obj v0x7f41125fb7e0 = PRIM_CAR(v0x7f41125fb7c0);
Obj v0x7f41125fb800 = PRIM_EQ(symlambda, v0x7f41125fb7e0);
if (True == v0x7f41125fb800) {
Obj v0x7f41125fbc00 = PRIM_CDR(v0x7f4112743140);
Obj v0x7f41125fbc20 = PRIM_CAR(v0x7f41125fbc00);
Obj v0x7f41125fbc60 = PRIM_CDR(v0x7f41125fbc20);
Obj v0x7f41125fbc80 = PRIM_ISCONS(v0x7f41125fbc60);
if (True == v0x7f41125fbc80) {
Obj v0x7f41125ec0a0 = PRIM_CDR(v0x7f4112743140);
Obj v0x7f41125ec160 = PRIM_CAR(v0x7f41125ec0a0);
Obj v0x7f41125ec180 = PRIM_CDR(v0x7f41125ec160);
Obj v0x7f41125ec1a0 = PRIM_CAR(v0x7f41125ec180);
Obj params = v0x7f41125ec1a0;
Obj v0x7f41125ec660 = PRIM_CDR(v0x7f4112743140);
Obj v0x7f41125ec680 = PRIM_CAR(v0x7f41125ec660);
Obj v0x7f41125ec6a0 = PRIM_CDR(v0x7f41125ec680);
Obj v0x7f41125ec6c0 = PRIM_CDR(v0x7f41125ec6a0);
Obj v0x7f41125ec6e0 = PRIM_ISCONS(v0x7f41125ec6c0);
if (True == v0x7f41125ec6e0) {
Obj v0x7f41125ecbe0 = PRIM_CDR(v0x7f4112743140);
Obj v0x7f41125ecc20 = PRIM_CAR(v0x7f41125ecbe0);
Obj v0x7f41125ecc40 = PRIM_CDR(v0x7f41125ecc20);
Obj v0x7f41125ecc60 = PRIM_CDR(v0x7f41125ecc40);
Obj v0x7f41125ecc80 = PRIM_CAR(v0x7f41125ecc60);
Obj body = v0x7f41125ecc80;
Obj v0x7f41125e7340 = PRIM_CDR(v0x7f4112743140);
Obj v0x7f41125e7360 = PRIM_CAR(v0x7f41125e7340);
Obj v0x7f41125e7380 = PRIM_CDR(v0x7f41125e7360);
Obj v0x7f41125e73a0 = PRIM_CDR(v0x7f41125e7380);
Obj v0x7f41125e73c0 = PRIM_CDR(v0x7f41125e73a0);
Obj v0x7f41125e7400 = PRIM_EQ(Nil, v0x7f41125e73c0);
if (True == v0x7f41125e7400) {
Obj v0x7f41125e7720 = PRIM_CDR(v0x7f4112743140);
Obj v0x7f41125e7740 = PRIM_CDR(v0x7f41125e7720);
Obj fvs = v0x7f41125e7740;
Obj v0x7f41125e7920 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == v0x7f41125e7920) {
if (True == True) {
pushCont(co, 46, clofun5, 4, params, v, fvs, clo_45or_45cont);
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
__arg0 = v0x7f4112743240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj v0x7f41125d68c0 = PRIM_EQ(clo_45or_45cont, sym_37continuation);
if (True == v0x7f41125d68c0) {
if (True == True) {
pushCont(co, 41, clofun5, 4, params, v, fvs, clo_45or_45cont);
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
__arg0 = v0x7f4112743240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 36, clofun5, 4, params, v, fvs, clo_45or_45cont);
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
__arg0 = v0x7f4112743240;
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
__arg0 = v0x7f4112743240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj v0x7f41125cf7a0 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body1 = v0x7f41125cf7a0;
pushCont(co, 37, clofun5, 5, body1, params, v, fvs, clo_45or_45cont);
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

label37:
{
Obj v0x7f41125cf8e0 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj cur = v0x7f41125cf8e0;
Obj v0x7f41125cfb00 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == v0x7f41125cfb00) {
Obj v0x7f41125cd200 = makeCons(body1, Nil);
Obj v0x7f41125cd220 = makeCons(Nil, v0x7f41125cd200);
Obj v0x7f41125cd240 = makeCons(params, v0x7f41125cd220);
Obj v0x7f41125cd260 = makeCons(symlambda, v0x7f41125cd240);
pushCont(co, 39, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = v0x7f41125cd260;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f41125cdd40 = makeCons(body1, Nil);
Obj v0x7f41125cdd60 = makeCons(fvs, v0x7f41125cdd40);
Obj v0x7f41125cddc0 = makeCons(params, v0x7f41125cdd60);
Obj v0x7f41125cdde0 = makeCons(symlambda, v0x7f41125cddc0);
pushCont(co, 38, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = v0x7f41125cdde0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj v0x7f41125cde00 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f41125c10e0 = makeCons(cur, fvs);
Obj v0x7f41125c1100 = makeCons(clo_45or_45cont, v0x7f41125c10e0);
__nargs = 2;
__arg1 = v0x7f41125c1100;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label39:
{
Obj v0x7f41125cd280 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 40, clofun5, 3, fvs, cur, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj v0x7f41125cd6c0 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f41125cd700 = makeCons(v0x7f41125cd6c0, fvs);
Obj v0x7f41125cd720 = makeCons(cur, v0x7f41125cd700);
Obj v0x7f41125cd7a0 = makeCons(clo_45or_45cont, v0x7f41125cd720);
__nargs = 2;
__arg1 = v0x7f41125cd7a0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj v0x7f41125d6a80 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body1 = v0x7f41125d6a80;
pushCont(co, 42, clofun5, 5, body1, params, v, fvs, clo_45or_45cont);
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

label42:
{
Obj v0x7f41125d6c40 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj cur = v0x7f41125d6c40;
Obj v0x7f41125d6de0 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == v0x7f41125d6de0) {
Obj v0x7f41125d23a0 = makeCons(body1, Nil);
Obj v0x7f41125d23c0 = makeCons(Nil, v0x7f41125d23a0);
Obj v0x7f41125d2440 = makeCons(params, v0x7f41125d23c0);
Obj v0x7f41125d2480 = makeCons(symlambda, v0x7f41125d2440);
pushCont(co, 44, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = v0x7f41125d2480;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f41125cf0a0 = makeCons(body1, Nil);
Obj v0x7f41125cf1e0 = makeCons(fvs, v0x7f41125cf0a0);
Obj v0x7f41125cf200 = makeCons(params, v0x7f41125cf1e0);
Obj v0x7f41125cf220 = makeCons(symlambda, v0x7f41125cf200);
pushCont(co, 43, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = v0x7f41125cf220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj v0x7f41125cf240 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f41125cf400 = makeCons(cur, fvs);
Obj v0x7f41125cf480 = makeCons(clo_45or_45cont, v0x7f41125cf400);
__nargs = 2;
__arg1 = v0x7f41125cf480;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label44:
{
Obj v0x7f41125d2500 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 45, clofun5, 3, fvs, cur, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj v0x7f41125d29c0 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f41125d2a00 = makeCons(v0x7f41125d29c0, fvs);
Obj v0x7f41125d2a20 = makeCons(cur, v0x7f41125d2a00);
Obj v0x7f41125d2a40 = makeCons(clo_45or_45cont, v0x7f41125d2a20);
__nargs = 2;
__arg1 = v0x7f41125d2a40;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label46:
{
Obj v0x7f41125e7b20 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body1 = v0x7f41125e7b20;
pushCont(co, 47, clofun5, 5, body1, params, v, fvs, clo_45or_45cont);
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

label47:
{
Obj v0x7f41125e7d80 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj cur = v0x7f41125e7d80;
Obj v0x7f41125e7f40 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == v0x7f41125e7f40) {
Obj v0x7f41125e5620 = makeCons(body1, Nil);
Obj v0x7f41125e5660 = makeCons(Nil, v0x7f41125e5620);
Obj v0x7f41125e5680 = makeCons(params, v0x7f41125e5660);
Obj v0x7f41125e56a0 = makeCons(symlambda, v0x7f41125e5680);
pushCont(co, 49, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = v0x7f41125e56a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj v0x7f41125d6220 = makeCons(body1, Nil);
Obj v0x7f41125d62c0 = makeCons(fvs, v0x7f41125d6220);
Obj v0x7f41125d6320 = makeCons(params, v0x7f41125d62c0);
Obj v0x7f41125d6340 = makeCons(symlambda, v0x7f41125d6320);
pushCont(co, 48, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = v0x7f41125d6340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj v0x7f41125d63c0 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f41125d6680 = makeCons(cur, fvs);
Obj v0x7f41125d66a0 = makeCons(clo_45or_45cont, v0x7f41125d6680);
__nargs = 2;
__arg1 = v0x7f41125d66a0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label49:
{
Obj v0x7f41125e56c0 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 0, clofun6, 3, fvs, cur, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = params;
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
Obj v0x7f41125e5c20 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f41125e5c60 = makeCons(v0x7f41125e5c20, fvs);
Obj v0x7f41125e5c80 = makeCons(cur, v0x7f41125e5c60);
Obj v0x7f41125e5ca0 = makeCons(clo_45or_45cont, v0x7f41125e5c80);
__nargs = 2;
__arg1 = v0x7f41125e5ca0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj v0x7f4112743760 = makeNative(3, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v = closureRef(co, 0);
Obj f_45args = closureRef(co, 1);
Obj v0x7f41125fe6e0 = PRIM_ISCONS(f_45args);
if (True == v0x7f41125fe6e0) {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = makeNative(2, clofun6, 1, 1, v);
__arg2 = f_45args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112743760;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
Obj v0x7f4112743920 = makeNative(4, clofun6, 0, 0);
Obj v = closureRef(co, 0);
Obj x = closureRef(co, 1);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
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

label5:
{
Obj v0x7f411272d1c0 = __arg1;
Obj v0x7f411272d1e0 = __arg2;
Obj v0x7f411272d2a0 = makeNative(7, clofun6, 0, 2, v0x7f411272d1c0, v0x7f411272d1e0);
Obj __ = v0x7f411272d1c0;
Obj x = v0x7f411272d1e0;
pushCont(co, 6, clofun6, 2, x, v0x7f411272d2a0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj v0x7f4112603ec0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f411272d2a0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f4112603ec0) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411272d2a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj v0x7f411272d400 = makeNative(8, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj v0x7f4112603b80 = primIsSymbol(var);
if (True == v0x7f4112603b80) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411272d400;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj v0x7f411272d620 = makeNative(10, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj v0x7f4112669de0 = PRIM_ISCONS(closureRef(co, 1));
if (True == v0x7f4112669de0) {
Obj v0x7f411261b000 = PRIM_CAR(closureRef(co, 1));
Obj v0x7f411261b020 = PRIM_EQ(symlambda, v0x7f411261b000);
if (True == v0x7f411261b020) {
Obj v0x7f411261b200 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f411261b220 = PRIM_ISCONS(v0x7f411261b200);
if (True == v0x7f411261b220) {
Obj v0x7f411261b480 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f411261b4e0 = PRIM_CAR(v0x7f411261b480);
Obj args = v0x7f411261b4e0;
Obj v0x7f411261b7c0 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f411261b7e0 = PRIM_CDR(v0x7f411261b7c0);
Obj v0x7f411261b800 = PRIM_ISCONS(v0x7f411261b7e0);
if (True == v0x7f411261b800) {
Obj v0x7f411261baa0 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f411261bac0 = PRIM_CDR(v0x7f411261baa0);
Obj v0x7f411261bae0 = PRIM_CAR(v0x7f411261bac0);
Obj body = v0x7f411261bae0;
Obj v0x7f411261bfc0 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f4112603020 = PRIM_CDR(v0x7f411261bfc0);
Obj v0x7f4112603060 = PRIM_CDR(v0x7f4112603020);
Obj v0x7f4112603080 = PRIM_EQ(Nil, v0x7f4112603060);
if (True == v0x7f4112603080) {
pushCont(co, 9, clofun6, 1, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f411272d620;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d620;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d620;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d620;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d620;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj v0x7f41126034e0 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112603520 = makeCons(v0x7f41126034e0, Nil);
Obj v0x7f4112603540 = makeCons(args, v0x7f4112603520);
Obj v0x7f4112603560 = makeCons(symlambda, v0x7f4112603540);
__nargs = 2;
__arg1 = v0x7f4112603560;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj v0x7f411272d920 = makeNative(16, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj v0x7f41126af960 = PRIM_ISCONS(closureRef(co, 1));
if (True == v0x7f41126af960) {
Obj v0x7f41126afc00 = PRIM_CAR(closureRef(co, 1));
Obj v0x7f41126afc20 = PRIM_EQ(symcontinuation, v0x7f41126afc00);
if (True == v0x7f41126afc20) {
Obj v0x7f41126afe20 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126afe40 = PRIM_ISCONS(v0x7f41126afe20);
if (True == v0x7f41126afe40) {
Obj v0x7f41126a7060 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126a70c0 = PRIM_CAR(v0x7f41126a7060);
Obj val = v0x7f41126a70c0;
Obj v0x7f41126a73e0 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126a7400 = PRIM_CDR(v0x7f41126a73e0);
Obj v0x7f41126a7420 = PRIM_ISCONS(v0x7f41126a7400);
if (True == v0x7f41126a7420) {
Obj v0x7f41126a7700 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126a7720 = PRIM_CDR(v0x7f41126a7700);
Obj v0x7f41126a7740 = PRIM_CAR(v0x7f41126a7720);
Obj body = v0x7f41126a7740;
Obj v0x7f41126a7c20 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126a7c60 = PRIM_CDR(v0x7f41126a7c20);
Obj v0x7f41126a7c80 = PRIM_CDR(v0x7f41126a7c60);
Obj v0x7f41126a7ca0 = PRIM_EQ(Nil, v0x7f41126a7c80);
if (True == v0x7f41126a7ca0) {
pushCont(co, 11, clofun6, 3, fvs, body, val);
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
__arg0 = v0x7f411272d920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj v0x7f41126a7ee0 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 12, clofun6, 3, fvs, body, val);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = v0x7f41126a7ee0;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj v0x7f41126a7f20 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs1 = v0x7f41126a7f20;
pushCont(co, 13, clofun6, 3, fvs1, body, val);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj v0x7f4112669100 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 14, clofun6, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = v0x7f4112669100;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj v0x7f4112669140 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs2 = v0x7f4112669140;
pushCont(co, 15, clofun6, 2, val, fvs2);
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

label15:
{
Obj v0x7f4112669700 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112669780 = makeCons(v0x7f4112669700, Nil);
Obj v0x7f41126697a0 = makeCons(val, v0x7f4112669780);
Obj v0x7f41126697c0 = makeCons(symlambda, v0x7f41126697a0);
Obj v0x7f4112669800 = makeCons(v0x7f41126697c0, fvs2);
Obj v0x7f4112669820 = makeCons(sym_37continuation, v0x7f4112669800);
__nargs = 2;
__arg1 = v0x7f4112669820;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj v0x7f411272dc40 = makeNative(20, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj v0x7f41126cf5c0 = PRIM_ISCONS(closureRef(co, 1));
if (True == v0x7f41126cf5c0) {
Obj v0x7f41126cf980 = PRIM_CAR(closureRef(co, 1));
Obj v0x7f41126cf9a0 = PRIM_EQ(symcall, v0x7f41126cf980);
if (True == v0x7f41126cf9a0) {
Obj v0x7f41126cfec0 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126cfee0 = PRIM_ISCONS(v0x7f41126cfec0);
if (True == v0x7f41126cfee0) {
Obj v0x7f41126b51a0 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126b51c0 = PRIM_CAR(v0x7f41126b51a0);
Obj exp = v0x7f41126b51c0;
Obj v0x7f41126b5560 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126b55a0 = PRIM_CDR(v0x7f41126b5560);
Obj v0x7f41126b55c0 = PRIM_ISCONS(v0x7f41126b55a0);
if (True == v0x7f41126b55c0) {
Obj v0x7f41126b58e0 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126b5900 = PRIM_CDR(v0x7f41126b58e0);
Obj v0x7f41126b5920 = PRIM_CAR(v0x7f41126b5900);
Obj cont = v0x7f41126b5920;
Obj v0x7f41126b5d20 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126b5d40 = PRIM_CDR(v0x7f41126b5d20);
Obj v0x7f41126b5d60 = PRIM_CDR(v0x7f41126b5d40);
Obj v0x7f41126b5d80 = PRIM_EQ(Nil, v0x7f41126b5d60);
if (True == v0x7f41126b5d80) {
pushCont(co, 17, clofun6, 3, exp, fvs, cont);
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
__arg0 = v0x7f411272dc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272dc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272dc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272dc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272dc40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj v0x7f41126af120 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 18, clofun6, 2, fvs, cont);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = v0x7f41126af120;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj v0x7f41126af160 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 19, clofun6, 1, v0x7f41126af160);
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

label19:
{
Obj v0x7f41126af3a0 = __arg1;
Obj v0x7f41126af160= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41126af400 = makeCons(v0x7f41126af3a0, Nil);
Obj v0x7f41126af460 = makeCons(v0x7f41126af160, v0x7f41126af400);
Obj v0x7f41126af480 = makeCons(symcall, v0x7f41126af460);
__nargs = 2;
__arg1 = v0x7f41126af480;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj v0x7f411272df40 = makeNative(22, clofun6, 0, 0);
Obj fvs = closureRef(co, 0);
Obj v0x7f411272db80 = PRIM_ISCONS(closureRef(co, 1));
if (True == v0x7f411272db80) {
Obj v0x7f411272dce0 = PRIM_CAR(closureRef(co, 1));
Obj f = v0x7f411272dce0;
Obj v0x7f411272de80 = PRIM_CDR(closureRef(co, 1));
Obj args = v0x7f411272de80;
pushCont(co, 21, clofun6, 2, f, args);
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
__arg0 = v0x7f411272df40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj v0x7f41126cf120 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41126cf2e0 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = v0x7f41126cf120;
__arg2 = v0x7f41126cf2e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
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

label23:
{
Obj v0x7f411273e9a0 = __arg1;
Obj v0x7f411273e9c0 = __arg2;
Obj v0x7f411273e9e0 = __arg3;
Obj v0x7f411273eb20 = makeNative(30, clofun6, 0, 3, v0x7f411273e9a0, v0x7f411273e9c0, v0x7f411273e9e0);
Obj v0x7f41125124a0 = PRIM_EQ(Nil, v0x7f411273e9a0);
if (True == v0x7f41125124a0) {
Obj ls = v0x7f411273e9c0;
Obj next = v0x7f411273e9e0;
pushCont(co, 24, clofun6, 1, next);
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
__arg0 = v0x7f411273eb20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj v0x7f4112512620 = __arg1;
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp = v0x7f4112512620;
Obj v0x7f4112512800 = PRIM_CAR(exp);
pushCont(co, 25, clofun6, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35pair_63);
__arg1 = v0x7f4112512800;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj v0x7f4112512820 = __arg1;
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f4112512820) {
pushCont(co, 27, clofun6, 2, next, exp);
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
Obj v0x7f4112743400 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == v0x7f4112743400) {
Obj v0x7f4112743840 = makeCons(exp, Nil);
Obj v0x7f41127438c0 = makeCons(symtailcall, v0x7f4112743840);
__nargs = 2;
__arg1 = v0x7f41127438c0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f4112743aa0 = primGenSym();
Obj val = v0x7f4112743aa0;
Obj v0x7f411273e5e0 = makeCons(val, Nil);
pushCont(co, 26, clofun6, 2, v0x7f411273e5e0, exp);
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

label26:
{
Obj v0x7f411273e920 = __arg1;
Obj v0x7f411273e5e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f411273e960 = makeCons(v0x7f411273e920, Nil);
Obj v0x7f411273e980 = makeCons(v0x7f411273e5e0, v0x7f411273e960);
Obj v0x7f411273eac0 = makeCons(symcontinuation, v0x7f411273e980);
Obj v0x7f411273eba0 = makeCons(v0x7f411273eac0, Nil);
Obj v0x7f411273ebc0 = makeCons(exp, v0x7f411273eba0);
Obj v0x7f411273ec00 = makeCons(symcall, v0x7f411273ebc0);
__nargs = 2;
__arg1 = v0x7f411273ec00;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj v0x7f41125129c0 = __arg1;
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112512a00 = PRIM_EQ(v0x7f41125129c0, sym_37builtin);
if (True == v0x7f4112512a00) {
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
Obj v0x7f4112512be0 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == v0x7f4112512be0) {
Obj v0x7f4112512d80 = makeCons(exp, Nil);
Obj v0x7f4112512da0 = makeCons(symtailcall, v0x7f4112512d80);
__nargs = 2;
__arg1 = v0x7f4112512da0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f4112512e80 = primGenSym();
Obj val = v0x7f4112512e80;
Obj v0x7f41124eb2e0 = makeCons(val, Nil);
pushCont(co, 29, clofun6, 2, v0x7f41124eb2e0, exp);
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
Obj v0x7f41124eb740 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == v0x7f41124eb740) {
Obj v0x7f41124eb8e0 = makeCons(exp, Nil);
Obj v0x7f41124eb900 = makeCons(symtailcall, v0x7f41124eb8e0);
__nargs = 2;
__arg1 = v0x7f41124eb900;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f41124eb9e0 = primGenSym();
Obj val = v0x7f41124eb9e0;
Obj v0x7f41124ebe40 = makeCons(val, Nil);
pushCont(co, 28, clofun6, 2, v0x7f41124ebe40, exp);
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

label28:
{
Obj v0x7f41124ebfc0 = __arg1;
Obj v0x7f41124ebe40= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41124d9000 = makeCons(v0x7f41124ebfc0, Nil);
Obj v0x7f41124d9020 = makeCons(v0x7f41124ebe40, v0x7f41124d9000);
Obj v0x7f41124d9040 = makeCons(symcontinuation, v0x7f41124d9020);
Obj v0x7f41124d9080 = makeCons(v0x7f41124d9040, Nil);
Obj v0x7f41124d90a0 = makeCons(exp, v0x7f41124d9080);
Obj v0x7f41124d90c0 = makeCons(symcall, v0x7f41124d90a0);
__nargs = 2;
__arg1 = v0x7f41124d90c0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
Obj v0x7f41124eb460 = __arg1;
Obj v0x7f41124eb2e0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41124eb4a0 = makeCons(v0x7f41124eb460, Nil);
Obj v0x7f41124eb4c0 = makeCons(v0x7f41124eb2e0, v0x7f41124eb4a0);
Obj v0x7f41124eb4e0 = makeCons(symcontinuation, v0x7f41124eb4c0);
Obj v0x7f41124eb520 = makeCons(v0x7f41124eb4e0, Nil);
Obj v0x7f41124eb540 = makeCons(exp, v0x7f41124eb520);
Obj v0x7f41124eb560 = makeCons(symcall, v0x7f41124eb540);
__nargs = 2;
__arg1 = v0x7f41124eb560;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj v0x7f411273ed20 = makeNative(32, clofun6, 0, 0);
Obj v0x7f4112529b00 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112529b00) {
Obj v0x7f4112529ec0 = PRIM_CAR(closureRef(co, 0));
Obj hd = v0x7f4112529ec0;
Obj v0x7f4112529fc0 = PRIM_CDR(closureRef(co, 0));
Obj tl = v0x7f4112529fc0;
Obj ls = closureRef(co, 1);
Obj next = closureRef(co, 2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = hd;
__arg2 = makeNative(31, clofun6, 1, 3, tl, ls, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f411273ed20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj hd1 = __arg1;
Obj v0x7f41125122e0 = makeCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45list);
__arg1 = closureRef(co, 0);
__arg2 = v0x7f41125122e0;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
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

label33:
{
Obj v0x7f4112743260 = __arg1;
Obj v0x7f4112743280 = __arg2;
Obj v0x7f4112743360 = makeNative(35, clofun6, 0, 2, v0x7f4112743260, v0x7f4112743280);
Obj x = v0x7f4112743260;
Obj next = v0x7f4112743280;
Obj v0x7f41125292a0 = primIsSymbol(x);
if (True == v0x7f41125292a0) {
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
__arg0 = v0x7f4112743360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 34, clofun6, 3, next, x, v0x7f4112743360);
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

label34:
{
Obj v0x7f41125294c0 = __arg1;
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112743360= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == v0x7f41125294c0) {
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
__arg0 = v0x7f4112743360;
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
__arg0 = v0x7f4112743360;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label35:
{
Obj v0x7f41127434c0 = makeNative(37, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x = closureRef(co, 0);
Obj __ = closureRef(co, 1);
pushCont(co, 36, clofun6, 2, x, v0x7f41127434c0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj v0x7f4112529060 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41127434c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f4112529060) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f41127434c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj v0x7f41127436c0 = makeNative(41, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v0x7f41125c01c0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125c01c0) {
Obj v0x7f41125c03e0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125c0400 = PRIM_EQ(symif, v0x7f41125c03e0);
if (True == v0x7f41125c0400) {
Obj v0x7f41125c0620 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c0640 = PRIM_ISCONS(v0x7f41125c0620);
if (True == v0x7f41125c0640) {
Obj v0x7f41125c07e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c0800 = PRIM_CAR(v0x7f41125c07e0);
Obj a = v0x7f41125c0800;
Obj v0x7f41125c0ac0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c0ae0 = PRIM_CDR(v0x7f41125c0ac0);
Obj v0x7f41125c0b00 = PRIM_ISCONS(v0x7f41125c0ae0);
if (True == v0x7f41125c0b00) {
Obj v0x7f41125c0de0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c0e00 = PRIM_CDR(v0x7f41125c0de0);
Obj v0x7f41125c0e20 = PRIM_CAR(v0x7f41125c0e00);
Obj b = v0x7f41125c0e20;
Obj v0x7f4112570180 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125701a0 = PRIM_CDR(v0x7f4112570180);
Obj v0x7f41125701c0 = PRIM_CDR(v0x7f41125701a0);
Obj v0x7f41125701e0 = PRIM_ISCONS(v0x7f41125701c0);
if (True == v0x7f41125701e0) {
Obj v0x7f411252c0e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411252c100 = PRIM_CDR(v0x7f411252c0e0);
Obj v0x7f411252c120 = PRIM_CDR(v0x7f411252c100);
Obj v0x7f411252c140 = PRIM_CAR(v0x7f411252c120);
Obj c = v0x7f411252c140;
Obj v0x7f411252c4e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411252c500 = PRIM_CDR(v0x7f411252c4e0);
Obj v0x7f411252c520 = PRIM_CDR(v0x7f411252c500);
Obj v0x7f411252c540 = PRIM_CDR(v0x7f411252c520);
Obj v0x7f411252c560 = PRIM_EQ(Nil, v0x7f411252c540);
if (True == v0x7f411252c560) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = a;
__arg2 = makeNative(38, clofun6, 1, 3, b, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f41127436c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41127436c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41127436c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41127436c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41127436c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41127436c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj ra = __arg1;
pushCont(co, 39, clofun6, 1, ra);
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

label39:
{
Obj v0x7f411252c9a0 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 40, clofun6, 2, v0x7f411252c9a0, ra);
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

label40:
{
Obj v0x7f411252cb40 = __arg1;
Obj v0x7f411252c9a0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f411252cb80 = makeCons(v0x7f411252cb40, Nil);
Obj v0x7f411252cba0 = makeCons(v0x7f411252c9a0, v0x7f411252cb80);
Obj v0x7f411252cbc0 = makeCons(ra, v0x7f411252cba0);
Obj v0x7f411252cbe0 = makeCons(symif, v0x7f411252cbc0);
__nargs = 2;
__arg1 = v0x7f411252cbe0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj v0x7f4112743a80 = makeNative(44, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v0x7f41125cd500 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125cd500) {
Obj v0x7f41125cd740 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125cd780 = PRIM_EQ(symdo, v0x7f41125cd740);
if (True == v0x7f41125cd780) {
Obj v0x7f41125cd940 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cd960 = PRIM_ISCONS(v0x7f41125cd940);
if (True == v0x7f41125cd960) {
Obj v0x7f41125cdb40 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cdc00 = PRIM_CAR(v0x7f41125cdb40);
Obj a = v0x7f41125cdc00;
Obj v0x7f41125cdec0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cdf40 = PRIM_CDR(v0x7f41125cdec0);
Obj v0x7f41125cdf60 = PRIM_ISCONS(v0x7f41125cdf40);
if (True == v0x7f41125cdf60) {
Obj v0x7f41125c1200 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c1220 = PRIM_CDR(v0x7f41125c1200);
Obj v0x7f41125c1240 = PRIM_CAR(v0x7f41125c1220);
Obj b = v0x7f41125c1240;
Obj v0x7f41125c1560 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c1580 = PRIM_CDR(v0x7f41125c1560);
Obj v0x7f41125c15a0 = PRIM_CDR(v0x7f41125c1580);
Obj v0x7f41125c1600 = PRIM_EQ(Nil, v0x7f41125c15a0);
if (True == v0x7f41125c1600) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = a;
__arg2 = makeNative(42, clofun6, 1, 2, b, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112743a80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743a80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743a80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743a80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743a80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj ra = __arg1;
Obj v0x7f41125c18c0 = primIsSymbol(ra);
if (True == v0x7f41125c18c0) {
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
pushCont(co, 43, clofun6, 1, ra);
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

label43:
{
Obj v0x7f41125c1d20 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41125c1d60 = makeCons(v0x7f41125c1d20, Nil);
Obj v0x7f41125c1d80 = makeCons(ra, v0x7f41125c1d60);
Obj v0x7f41125c1de0 = makeCons(symdo, v0x7f41125c1d80);
__nargs = 2;
__arg1 = v0x7f41125c1de0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label44:
{
Obj v0x7f4112743da0 = makeNative(47, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v0x7f41125d6aa0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125d6aa0) {
Obj v0x7f41125d6d20 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125d6d40 = PRIM_EQ(symlet, v0x7f41125d6d20);
if (True == v0x7f41125d6d40) {
Obj v0x7f41125d6ee0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d6f40 = PRIM_ISCONS(v0x7f41125d6ee0);
if (True == v0x7f41125d6f40) {
Obj v0x7f41125d2160 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d2180 = PRIM_CAR(v0x7f41125d2160);
Obj a = v0x7f41125d2180;
Obj v0x7f41125d24a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d24c0 = PRIM_CDR(v0x7f41125d24a0);
Obj v0x7f41125d24e0 = PRIM_ISCONS(v0x7f41125d24c0);
if (True == v0x7f41125d24e0) {
Obj v0x7f41125d2800 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d2820 = PRIM_CDR(v0x7f41125d2800);
Obj v0x7f41125d2880 = PRIM_CAR(v0x7f41125d2820);
Obj b = v0x7f41125d2880;
Obj v0x7f41125d2c80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d2ca0 = PRIM_CDR(v0x7f41125d2c80);
Obj v0x7f41125d2cc0 = PRIM_CDR(v0x7f41125d2ca0);
Obj v0x7f41125d2ce0 = PRIM_ISCONS(v0x7f41125d2cc0);
if (True == v0x7f41125d2ce0) {
Obj v0x7f41125cf0c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cf0e0 = PRIM_CDR(v0x7f41125cf0c0);
Obj v0x7f41125cf100 = PRIM_CDR(v0x7f41125cf0e0);
Obj v0x7f41125cf1a0 = PRIM_CAR(v0x7f41125cf100);
Obj c = v0x7f41125cf1a0;
Obj v0x7f41125cf6c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cf6e0 = PRIM_CDR(v0x7f41125cf6c0);
Obj v0x7f41125cf700 = PRIM_CDR(v0x7f41125cf6e0);
Obj v0x7f41125cf720 = PRIM_CDR(v0x7f41125cf700);
Obj v0x7f41125cf740 = PRIM_EQ(Nil, v0x7f41125cf720);
if (True == v0x7f41125cf740) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = b;
__arg2 = makeNative(45, clofun6, 1, 3, a, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112743da0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743da0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743da0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743da0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743da0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743da0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj rb = __arg1;
pushCont(co, 46, clofun6, 1, rb);
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

label46:
{
Obj v0x7f41125cfea0 = __arg1;
Obj rb= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41125cfee0 = makeCons(v0x7f41125cfea0, Nil);
Obj v0x7f41125cff60 = makeCons(rb, v0x7f41125cfee0);
Obj v0x7f41125cff80 = makeCons(closureRef(co, 0), v0x7f41125cff60);
Obj v0x7f41125cffa0 = makeCons(symlet, v0x7f41125cff80);
__nargs = 2;
__arg1 = v0x7f41125cffa0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label47:
{
Obj v0x7f411273e1a0 = makeNative(49, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v0x7f41125ec200 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125ec200) {
Obj v0x7f41125ec400 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125ec420 = PRIM_EQ(sym_37closure, v0x7f41125ec400);
if (True == v0x7f41125ec420) {
Obj v0x7f41125ec620 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125ec640 = PRIM_ISCONS(v0x7f41125ec620);
if (True == v0x7f41125ec640) {
Obj v0x7f41125ec8c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125ec900 = PRIM_CAR(v0x7f41125ec8c0);
Obj v0x7f41125ec920 = PRIM_ISCONS(v0x7f41125ec900);
if (True == v0x7f41125ec920) {
Obj v0x7f41125ecd00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125ecd60 = PRIM_CAR(v0x7f41125ecd00);
Obj v0x7f41125ecd80 = PRIM_CAR(v0x7f41125ecd60);
Obj v0x7f41125ecda0 = PRIM_EQ(symlambda, v0x7f41125ecd80);
if (True == v0x7f41125ecda0) {
Obj v0x7f41125e7100 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125e7120 = PRIM_CAR(v0x7f41125e7100);
Obj v0x7f41125e7140 = PRIM_CDR(v0x7f41125e7120);
Obj v0x7f41125e7160 = PRIM_ISCONS(v0x7f41125e7140);
if (True == v0x7f41125e7160) {
Obj v0x7f41125e7560 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125e7580 = PRIM_CAR(v0x7f41125e7560);
Obj v0x7f41125e7620 = PRIM_CDR(v0x7f41125e7580);
Obj v0x7f41125e7640 = PRIM_CAR(v0x7f41125e7620);
Obj args = v0x7f41125e7640;
Obj v0x7f41125e7b80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125e7ba0 = PRIM_CAR(v0x7f41125e7b80);
Obj v0x7f41125e7bc0 = PRIM_CDR(v0x7f41125e7ba0);
Obj v0x7f41125e7be0 = PRIM_CDR(v0x7f41125e7bc0);
Obj v0x7f41125e7c00 = PRIM_ISCONS(v0x7f41125e7be0);
if (True == v0x7f41125e7c00) {
Obj v0x7f41125e5120 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125e5140 = PRIM_CAR(v0x7f41125e5120);
Obj v0x7f41125e51a0 = PRIM_CDR(v0x7f41125e5140);
Obj v0x7f41125e51c0 = PRIM_CDR(v0x7f41125e51a0);
Obj v0x7f41125e51e0 = PRIM_CAR(v0x7f41125e51c0);
Obj body = v0x7f41125e51e0;
Obj v0x7f41125e5820 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125e5840 = PRIM_CAR(v0x7f41125e5820);
Obj v0x7f41125e5860 = PRIM_CDR(v0x7f41125e5840);
Obj v0x7f41125e5880 = PRIM_CDR(v0x7f41125e5860);
Obj v0x7f41125e58a0 = PRIM_CDR(v0x7f41125e5880);
Obj v0x7f41125e58c0 = PRIM_EQ(Nil, v0x7f41125e58a0);
if (True == v0x7f41125e58c0) {
Obj v0x7f41125e5a80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125e5aa0 = PRIM_CDR(v0x7f41125e5a80);
Obj frees = v0x7f41125e5aa0;
Obj next = closureRef(co, 1);
pushCont(co, 48, clofun6, 3, args, frees, next);
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
__arg0 = v0x7f411273e1a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e1a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e1a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e1a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e1a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e1a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e1a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e1a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj v0x7f41125d6200 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f41125d6240 = makeCons(v0x7f41125d6200, Nil);
Obj v0x7f41125d6260 = makeCons(args, v0x7f41125d6240);
Obj v0x7f41125d6280 = makeCons(symlambda, v0x7f41125d6260);
Obj v0x7f41125d62e0 = makeCons(v0x7f41125d6280, frees);
Obj v0x7f41125d6300 = makeCons(sym_37closure, v0x7f41125d62e0);
__nargs = 2;
__arg0 = next;
__arg1 = v0x7f41125d6300;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj v0x7f411273e600 = makeNative(0, clofun7, 0, 0);
Obj v0x7f41125fbac0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125fbac0) {
Obj v0x7f41125fbbc0 = PRIM_CAR(closureRef(co, 0));
Obj f = v0x7f41125fbbc0;
Obj v0x7f41125fbd60 = PRIM_CDR(closureRef(co, 0));
Obj args = v0x7f41125fbd60;
Obj next = closureRef(co, 1);
Obj v0x7f41125fbf60 = makeCons(f, args);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45list);
__arg1 = v0x7f41125fbf60;
__arg2 = Nil;
__arg3 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f411273e600;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
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
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x = __arg1;
Obj v0x7f41125fb200 = makeCons(x, Nil);
Obj v0x7f41125fb220 = makeCons(symreturn, v0x7f41125fb200);
__nargs = 2;
__arg1 = v0x7f41125fb220;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj v0x7f41126cf700 = __arg1;
Obj v0x7f41126cf720 = __arg2;
Obj v0x7f41126cf800 = makeNative(4, clofun7, 0, 2, v0x7f41126cf700, v0x7f41126cf720);
Obj __ = v0x7f41126cf700;
Obj x = v0x7f41126cf720;
pushCont(co, 3, clofun7, 2, x, v0x7f41126cf800);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj v0x7f41125fed60 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41126cf800= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f41125fed60) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f41126cf800;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj v0x7f41126cf960 = makeNative(6, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj v0x7f41125fe5e0 = primIsSymbol(var);
if (True == v0x7f41125fe5e0) {
pushCont(co, 5, clofun7, 1, var);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35index);
__arg1 = var;
__arg2 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f41126cf960;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj v0x7f41125fe7c0 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pos = v0x7f41125fe7c0;
Obj v0x7f41125fe8e0 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == v0x7f41125fe8e0) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj v0x7f41125feac0 = makeCons(pos, Nil);
Obj v0x7f41125feae0 = makeCons(sym_37closure_45ref, v0x7f41125feac0);
__nargs = 2;
__arg1 = v0x7f41125feae0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label6:
{
Obj v0x7f41126cfac0 = makeNative(11, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj v0x7f411261b260 = PRIM_ISCONS(closureRef(co, 1));
if (True == v0x7f411261b260) {
Obj v0x7f411261b4a0 = PRIM_CAR(closureRef(co, 1));
Obj v0x7f411261b4c0 = PRIM_EQ(symlambda, v0x7f411261b4a0);
if (True == v0x7f411261b4c0) {
Obj v0x7f411261b680 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f411261b6a0 = PRIM_ISCONS(v0x7f411261b680);
if (True == v0x7f411261b6a0) {
Obj v0x7f411261b880 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f411261b8a0 = PRIM_CAR(v0x7f411261b880);
Obj args = v0x7f411261b8a0;
Obj v0x7f411261bb00 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f411261bb20 = PRIM_CDR(v0x7f411261bb00);
Obj v0x7f411261bb40 = PRIM_ISCONS(v0x7f411261bb20);
if (True == v0x7f411261bb40) {
Obj v0x7f411261bea0 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f411261bec0 = PRIM_CDR(v0x7f411261bea0);
Obj v0x7f411261bee0 = PRIM_CAR(v0x7f411261bec0);
Obj body = v0x7f411261bee0;
Obj v0x7f4112603280 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126032a0 = PRIM_CDR(v0x7f4112603280);
Obj v0x7f4112603320 = PRIM_CDR(v0x7f41126032a0);
Obj v0x7f4112603340 = PRIM_EQ(Nil, v0x7f4112603320);
if (True == v0x7f4112603340) {
Obj v0x7f4112603720 = makeCons(body, Nil);
Obj v0x7f4112603740 = makeCons(args, v0x7f4112603720);
Obj v0x7f4112603760 = makeCons(symlambda, v0x7f4112603740);
pushCont(co, 7, clofun7, 3, body, args, fvs);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = v0x7f4112603760;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f41126cfac0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cfac0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cfac0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cfac0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cfac0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj v0x7f4112603780 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs1 = v0x7f4112603780;
pushCont(co, 8, clofun7, 3, args, fvs, fvs1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj v0x7f4112603d60 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj v0x7f4112603e20 = makeCons(v0x7f4112603d60, Nil);
Obj v0x7f4112603e40 = makeCons(args, v0x7f4112603e20);
Obj v0x7f4112603e60 = makeCons(symlambda, v0x7f4112603e40);
pushCont(co, 9, clofun7, 2, fvs1, v0x7f4112603e60);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj v0x7f41125fe080 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112603e60= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 10, clofun7, 1, v0x7f4112603e60);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = v0x7f41125fe080;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj v0x7f41125fe0c0 = __arg1;
Obj v0x7f4112603e60= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41125fe0e0 = makeCons(v0x7f4112603e60, v0x7f41125fe0c0);
Obj v0x7f41125fe100 = makeCons(sym_37closure, v0x7f41125fe0e0);
__nargs = 2;
__arg1 = v0x7f41125fe100;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj v0x7f41126cfda0 = makeNative(14, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj v0x7f41126afe80 = PRIM_ISCONS(closureRef(co, 1));
if (True == v0x7f41126afe80) {
Obj v0x7f41126a7080 = PRIM_CAR(closureRef(co, 1));
Obj v0x7f41126a70a0 = PRIM_EQ(symlet, v0x7f41126a7080);
if (True == v0x7f41126a70a0) {
Obj v0x7f41126a7260 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126a7280 = PRIM_ISCONS(v0x7f41126a7260);
if (True == v0x7f41126a7280) {
Obj v0x7f41126a74e0 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126a7500 = PRIM_CAR(v0x7f41126a74e0);
Obj a = v0x7f41126a7500;
Obj v0x7f41126a7760 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126a7820 = PRIM_CDR(v0x7f41126a7760);
Obj v0x7f41126a7840 = PRIM_ISCONS(v0x7f41126a7820);
if (True == v0x7f41126a7840) {
Obj v0x7f41126a7ac0 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126a7b00 = PRIM_CDR(v0x7f41126a7ac0);
Obj v0x7f41126a7b20 = PRIM_CAR(v0x7f41126a7b00);
Obj b = v0x7f41126a7b20;
Obj v0x7f41126a7e60 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f41126a7e80 = PRIM_CDR(v0x7f41126a7e60);
Obj v0x7f41126a7ea0 = PRIM_CDR(v0x7f41126a7e80);
Obj v0x7f41126a7ec0 = PRIM_ISCONS(v0x7f41126a7ea0);
if (True == v0x7f41126a7ec0) {
Obj v0x7f41126691e0 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f4112669200 = PRIM_CDR(v0x7f41126691e0);
Obj v0x7f4112669220 = PRIM_CDR(v0x7f4112669200);
Obj v0x7f4112669240 = PRIM_CAR(v0x7f4112669220);
Obj c = v0x7f4112669240;
Obj v0x7f4112669600 = PRIM_CDR(closureRef(co, 1));
Obj v0x7f4112669620 = PRIM_CDR(v0x7f4112669600);
Obj v0x7f4112669660 = PRIM_CDR(v0x7f4112669620);
Obj v0x7f4112669680 = PRIM_CDR(v0x7f4112669660);
Obj v0x7f41126696a0 = PRIM_EQ(Nil, v0x7f4112669680);
if (True == v0x7f41126696a0) {
pushCont(co, 12, clofun7, 3, fvs, c, a);
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
__arg0 = v0x7f41126cfda0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cfda0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cfda0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cfda0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cfda0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cfda0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj v0x7f4112669a60 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 13, clofun7, 2, v0x7f4112669a60, a);
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

label13:
{
Obj v0x7f4112669c80 = __arg1;
Obj v0x7f4112669a60= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112669cc0 = makeCons(v0x7f4112669c80, Nil);
Obj v0x7f4112669ce0 = makeCons(v0x7f4112669a60, v0x7f4112669cc0);
Obj v0x7f4112669d00 = makeCons(a, v0x7f4112669ce0);
Obj v0x7f4112669d20 = makeCons(symlet, v0x7f4112669d00);
__nargs = 2;
__arg1 = v0x7f4112669d20;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj v0x7f41126b5100 = makeNative(16, clofun7, 0, 0);
Obj fvs = closureRef(co, 0);
Obj v0x7f41126af6c0 = PRIM_ISCONS(closureRef(co, 1));
if (True == v0x7f41126af6c0) {
Obj v0x7f41126af820 = PRIM_CAR(closureRef(co, 1));
Obj f = v0x7f41126af820;
Obj v0x7f41126af920 = PRIM_CDR(closureRef(co, 1));
Obj args = v0x7f41126af920;
pushCont(co, 15, clofun7, 2, f, args);
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
__arg0 = v0x7f41126b5100;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj v0x7f41126afb20 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41126afc60 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = v0x7f41126afb20;
__arg2 = v0x7f41126afc60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj v0x7f411273ed00 = __arg1;
Obj v0x7f411273ed80 = makeNative(19, clofun7, 0, 1, v0x7f411273ed00);
Obj x = v0x7f411273ed00;
pushCont(co, 18, clofun7, 1, v0x7f411273ed80);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj v0x7f41126b5ee0 = __arg1;
Obj v0x7f411273ed80= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == v0x7f41126b5ee0) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411273ed80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj v0x7f411273ee60 = makeNative(20, clofun7, 0, 1, closureRef(co, 0));
Obj x = closureRef(co, 0);
Obj v0x7f41126b5c00 = primIsSymbol(x);
if (True == v0x7f41126b5c00) {
Obj v0x7f41126b5ce0 = makeCons(x, Nil);
__nargs = 2;
__arg1 = v0x7f41126b5ce0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411273ee60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj v0x7f411273ef40 = makeNative(22, clofun7, 0, 1, closureRef(co, 0));
Obj v0x7f411272de40 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f411272de40) {
Obj v0x7f41126cf140 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41126cf180 = PRIM_EQ(symlambda, v0x7f41126cf140);
if (True == v0x7f41126cf180) {
Obj v0x7f41126cf400 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41126cf460 = PRIM_ISCONS(v0x7f41126cf400);
if (True == v0x7f41126cf460) {
Obj v0x7f41126cf660 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41126cf6c0 = PRIM_CAR(v0x7f41126cf660);
Obj args = v0x7f41126cf6c0;
Obj v0x7f41126cfa60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41126cfa80 = PRIM_CDR(v0x7f41126cfa60);
Obj v0x7f41126cfaa0 = PRIM_ISCONS(v0x7f41126cfa80);
if (True == v0x7f41126cfaa0) {
Obj v0x7f41126b5020 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41126b5040 = PRIM_CDR(v0x7f41126b5020);
Obj v0x7f41126b5060 = PRIM_CAR(v0x7f41126b5040);
Obj body = v0x7f41126b5060;
Obj v0x7f41126b54a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41126b54c0 = PRIM_CDR(v0x7f41126b54a0);
Obj v0x7f41126b54e0 = PRIM_CDR(v0x7f41126b54c0);
Obj v0x7f41126b5520 = PRIM_EQ(Nil, v0x7f41126b54e0);
if (True == v0x7f41126b5520) {
pushCont(co, 21, clofun7, 1, args);
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
__arg0 = v0x7f411273ef40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ef40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ef40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ef40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273ef40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj v0x7f41126b5740 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = v0x7f41126b5740;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj v0x7f411272d180 = makeNative(24, clofun7, 0, 1, closureRef(co, 0));
Obj v0x7f4112563a20 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112563a20) {
Obj v0x7f4112563be0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112563c00 = PRIM_EQ(symif, v0x7f4112563be0);
if (True == v0x7f4112563c00) {
Obj v0x7f4112563da0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112563dc0 = PRIM_ISCONS(v0x7f4112563da0);
if (True == v0x7f4112563dc0) {
Obj v0x7f4112563f60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112563f80 = PRIM_CAR(v0x7f4112563f60);
Obj x = v0x7f4112563f80;
Obj v0x7f41127431a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112743200 = PRIM_CDR(v0x7f41127431a0);
Obj v0x7f4112743220 = PRIM_ISCONS(v0x7f4112743200);
if (True == v0x7f4112743220) {
Obj v0x7f4112743780 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41127437a0 = PRIM_CDR(v0x7f4112743780);
Obj v0x7f41127437c0 = PRIM_CAR(v0x7f41127437a0);
Obj y = v0x7f41127437c0;
Obj v0x7f4112743ea0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112743ee0 = PRIM_CDR(v0x7f4112743ea0);
Obj v0x7f4112743f00 = PRIM_CDR(v0x7f4112743ee0);
Obj v0x7f4112743f20 = PRIM_ISCONS(v0x7f4112743f00);
if (True == v0x7f4112743f20) {
Obj v0x7f411273e4a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411273e540 = PRIM_CDR(v0x7f411273e4a0);
Obj v0x7f411273e560 = PRIM_CDR(v0x7f411273e540);
Obj v0x7f411273e5a0 = PRIM_CAR(v0x7f411273e560);
Obj z = v0x7f411273e5a0;
Obj v0x7f411273ed60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411273eda0 = PRIM_CDR(v0x7f411273ed60);
Obj v0x7f411273edc0 = PRIM_CDR(v0x7f411273eda0);
Obj v0x7f411273ede0 = PRIM_CDR(v0x7f411273edc0);
Obj v0x7f411273ee00 = PRIM_EQ(Nil, v0x7f411273ede0);
if (True == v0x7f411273ee00) {
Obj v0x7f411272d720 = makeCons(z, Nil);
Obj v0x7f411272d760 = makeCons(y, v0x7f411272d720);
Obj v0x7f411272d7a0 = makeCons(x, v0x7f411272d760);
PUSH_CONT_0(co, 23, clofun7);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = v0x7f411272d7a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f411272d180;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d180;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d180;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d180;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d180;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d180;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj v0x7f411272d820 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = v0x7f411272d820;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj v0x7f411272d440 = makeNative(26, clofun7, 0, 1, closureRef(co, 0));
Obj v0x7f4112570560 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112570560) {
Obj v0x7f4112570720 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f4112570740 = PRIM_EQ(symdo, v0x7f4112570720);
if (True == v0x7f4112570740) {
Obj v0x7f41125708e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112570900 = PRIM_ISCONS(v0x7f41125708e0);
if (True == v0x7f4112570900) {
Obj v0x7f4112570aa0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112570ac0 = PRIM_CAR(v0x7f4112570aa0);
Obj x = v0x7f4112570ac0;
Obj v0x7f4112570d00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112570d20 = PRIM_CDR(v0x7f4112570d00);
Obj v0x7f4112570d40 = PRIM_ISCONS(v0x7f4112570d20);
if (True == v0x7f4112570d40) {
Obj v0x7f4112570f80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112570fa0 = PRIM_CDR(v0x7f4112570f80);
Obj v0x7f4112570fc0 = PRIM_CAR(v0x7f4112570fa0);
Obj y = v0x7f4112570fc0;
Obj v0x7f41125632c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125632e0 = PRIM_CDR(v0x7f41125632c0);
Obj v0x7f4112563300 = PRIM_CDR(v0x7f41125632e0);
Obj v0x7f4112563320 = PRIM_EQ(Nil, v0x7f4112563300);
if (True == v0x7f4112563320) {
Obj v0x7f4112563660 = makeCons(y, Nil);
Obj v0x7f4112563680 = makeCons(x, v0x7f4112563660);
PUSH_CONT_0(co, 25, clofun7);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = v0x7f4112563680;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f411272d440;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d440;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d440;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d440;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d440;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj v0x7f41125636a0 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = v0x7f41125636a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj v0x7f411272d740 = makeNative(30, clofun7, 0, 1, closureRef(co, 0));
Obj v0x7f41125c1400 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125c1400) {
Obj v0x7f41125c15c0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125c15e0 = PRIM_EQ(symlet, v0x7f41125c15c0);
if (True == v0x7f41125c15e0) {
Obj v0x7f41125c1820 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c1c00 = PRIM_ISCONS(v0x7f41125c1820);
if (True == v0x7f41125c1c00) {
Obj v0x7f41125c1da0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c1dc0 = PRIM_CAR(v0x7f41125c1da0);
Obj a = v0x7f41125c1dc0;
Obj v0x7f41125c0000 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c0020 = PRIM_CDR(v0x7f41125c0000);
Obj v0x7f41125c0040 = PRIM_ISCONS(v0x7f41125c0020);
if (True == v0x7f41125c0040) {
Obj v0x7f41125c0280 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c02a0 = PRIM_CDR(v0x7f41125c0280);
Obj v0x7f41125c02c0 = PRIM_CAR(v0x7f41125c02a0);
Obj b = v0x7f41125c02c0;
Obj v0x7f41125c05a0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c05c0 = PRIM_CDR(v0x7f41125c05a0);
Obj v0x7f41125c05e0 = PRIM_CDR(v0x7f41125c05c0);
Obj v0x7f41125c0600 = PRIM_ISCONS(v0x7f41125c05e0);
if (True == v0x7f41125c0600) {
Obj v0x7f41125c08e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c0900 = PRIM_CDR(v0x7f41125c08e0);
Obj v0x7f41125c0920 = PRIM_CDR(v0x7f41125c0900);
Obj v0x7f41125c0940 = PRIM_CAR(v0x7f41125c0920);
Obj c = v0x7f41125c0940;
Obj v0x7f41125c0ce0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c0d00 = PRIM_CDR(v0x7f41125c0ce0);
Obj v0x7f41125c0d20 = PRIM_CDR(v0x7f41125c0d00);
Obj v0x7f41125c0d40 = PRIM_CDR(v0x7f41125c0d20);
Obj v0x7f41125c0d60 = PRIM_EQ(Nil, v0x7f41125c0d40);
if (True == v0x7f41125c0d60) {
pushCont(co, 27, clofun7, 2, c, a);
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
__arg0 = v0x7f411272d740;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d740;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d740;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d740;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d740;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d740;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj v0x7f41125c0ec0 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 28, clofun7, 2, a, v0x7f41125c0ec0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj v0x7f4112570040 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41125c0ec0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112570140 = makeCons(a, Nil);
pushCont(co, 29, clofun7, 1, v0x7f41125c0ec0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = v0x7f4112570040;
__arg2 = v0x7f4112570140;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj v0x7f4112570160 = __arg1;
Obj v0x7f41125c0ec0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35union);
__arg1 = v0x7f41125c0ec0;
__arg2 = v0x7f4112570160;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj v0x7f411272da20 = makeNative(31, clofun7, 0, 1, closureRef(co, 0));
Obj v0x7f41125cd7e0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125cd7e0) {
Obj v0x7f41125cd9a0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125cd9c0 = PRIM_EQ(sym_37closure, v0x7f41125cd9a0);
if (True == v0x7f41125cd9c0) {
Obj v0x7f41125cdb60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cdbe0 = PRIM_ISCONS(v0x7f41125cdb60);
if (True == v0x7f41125cdbe0) {
Obj v0x7f41125cdd80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cdda0 = PRIM_CAR(v0x7f41125cdd80);
Obj lam = v0x7f41125cdda0;
Obj v0x7f41125cdfe0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125c1000 = PRIM_CDR(v0x7f41125cdfe0);
Obj more = v0x7f41125c1000;
Obj v0x7f41125c1180 = makeCons(lam, more);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = v0x7f41125c1180;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f411272da20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272da20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272da20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj v0x7f411272dbe0 = makeNative(32, clofun7, 0, 1, closureRef(co, 0));
Obj v0x7f41125cf8c0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125cf8c0) {
Obj v0x7f41125cfb80 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125cfba0 = PRIM_EQ(symreturn, v0x7f41125cfb80);
if (True == v0x7f41125cfba0) {
Obj v0x7f41125cfe00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cfe20 = PRIM_ISCONS(v0x7f41125cfe00);
if (True == v0x7f41125cfe20) {
Obj v0x7f41125cd020 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cd040 = PRIM_CAR(v0x7f41125cd020);
Obj x = v0x7f41125cd040;
Obj v0x7f41125cd300 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125cd320 = PRIM_CDR(v0x7f41125cd300);
Obj v0x7f41125cd340 = PRIM_EQ(Nil, v0x7f41125cd320);
if (True == v0x7f41125cd340) {
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
__arg0 = v0x7f411272dbe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272dbe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272dbe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272dbe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj v0x7f411272ddc0 = makeNative(34, clofun7, 0, 1, closureRef(co, 0));
Obj v0x7f41125d2040 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125d2040) {
Obj v0x7f41125d2200 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125d2220 = PRIM_EQ(symcall, v0x7f41125d2200);
if (True == v0x7f41125d2220) {
Obj v0x7f41125d23e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d2400 = PRIM_ISCONS(v0x7f41125d23e0);
if (True == v0x7f41125d2400) {
Obj v0x7f41125d2600 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d2620 = PRIM_CAR(v0x7f41125d2600);
Obj exp = v0x7f41125d2620;
Obj v0x7f41125d2920 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d2940 = PRIM_CDR(v0x7f41125d2920);
Obj v0x7f41125d2960 = PRIM_ISCONS(v0x7f41125d2940);
if (True == v0x7f41125d2960) {
Obj v0x7f41125d2c00 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d2c20 = PRIM_CDR(v0x7f41125d2c00);
Obj v0x7f41125d2c40 = PRIM_CAR(v0x7f41125d2c20);
Obj cont = v0x7f41125d2c40;
Obj v0x7f41125d2fc0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d2fe0 = PRIM_CDR(v0x7f41125d2fc0);
Obj v0x7f41125cf000 = PRIM_CDR(v0x7f41125d2fe0);
Obj v0x7f41125cf020 = PRIM_EQ(Nil, v0x7f41125cf000);
if (True == v0x7f41125cf020) {
Obj v0x7f41125cf420 = makeCons(cont, Nil);
Obj v0x7f41125cf440 = makeCons(exp, v0x7f41125cf420);
PUSH_CONT_0(co, 33, clofun7);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = v0x7f41125cf440;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f411272ddc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272ddc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272ddc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272ddc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272ddc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj v0x7f41125cf460 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = v0x7f41125cf460;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj v0x7f41126cf020 = makeNative(35, clofun7, 0, 1, closureRef(co, 0));
Obj v0x7f41125d6180 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125d6180) {
Obj v0x7f41125d63e0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125d6400 = PRIM_EQ(symtailcall, v0x7f41125d63e0);
if (True == v0x7f41125d6400) {
Obj v0x7f41125d65c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d65e0 = PRIM_ISCONS(v0x7f41125d65c0);
if (True == v0x7f41125d65e0) {
Obj v0x7f41125d6820 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d6840 = PRIM_CAR(v0x7f41125d6820);
Obj exp = v0x7f41125d6840;
Obj v0x7f41125d6b60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125d6b80 = PRIM_CDR(v0x7f41125d6b60);
Obj v0x7f41125d6ba0 = PRIM_EQ(Nil, v0x7f41125d6b80);
if (True == v0x7f41125d6ba0) {
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
__arg0 = v0x7f41126cf020;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf020;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf020;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf020;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj v0x7f41126cf1e0 = makeNative(37, clofun7, 0, 1, closureRef(co, 0));
Obj v0x7f41125e7ae0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125e7ae0) {
Obj v0x7f41125e7ce0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125e7d00 = PRIM_EQ(symcontinuation, v0x7f41125e7ce0);
if (True == v0x7f41125e7d00) {
Obj v0x7f41125e7f60 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125e7f80 = PRIM_ISCONS(v0x7f41125e7f60);
if (True == v0x7f41125e7f80) {
Obj v0x7f41125e5160 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125e5180 = PRIM_CAR(v0x7f41125e5160);
Obj arg = v0x7f41125e5180;
Obj v0x7f41125e53e0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125e5400 = PRIM_CDR(v0x7f41125e53e0);
Obj v0x7f41125e5420 = PRIM_ISCONS(v0x7f41125e5400);
if (True == v0x7f41125e5420) {
Obj v0x7f41125e5780 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125e57a0 = PRIM_CDR(v0x7f41125e5780);
Obj v0x7f41125e57c0 = PRIM_CAR(v0x7f41125e57a0);
Obj body = v0x7f41125e57c0;
Obj v0x7f41125e5ae0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125e5b00 = PRIM_CDR(v0x7f41125e5ae0);
Obj v0x7f41125e5b60 = PRIM_CDR(v0x7f41125e5b00);
Obj v0x7f41125e5b80 = PRIM_EQ(Nil, v0x7f41125e5b60);
if (True == v0x7f41125e5b80) {
pushCont(co, 36, clofun7, 1, arg);
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
__arg0 = v0x7f41126cf1e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf1e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf1e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf1e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf1e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj v0x7f41125e5d00 = __arg1;
Obj arg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = v0x7f41125e5d00;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj v0x7f41126cf440 = makeNative(39, clofun7, 0, 0);
Obj v0x7f41125e72e0 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125e72e0) {
Obj v0x7f41125e73e0 = PRIM_CAR(closureRef(co, 0));
Obj f = v0x7f41125e73e0;
Obj v0x7f41125e74e0 = PRIM_CDR(closureRef(co, 0));
Obj args = v0x7f41125e74e0;
Obj v0x7f41125e7840 = makeCons(f, args);
PUSH_CONT_0(co, 38, clofun7);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = v0x7f41125e7840;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f41126cf440;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj v0x7f41125e7860 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = v0x7f41125e7860;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj v0x7f4112743fe0 = __arg1;
Obj v0x7f411273e080 = makeNative(41, clofun7, 0, 1, v0x7f4112743fe0);
Obj v0x7f41125fbc40 = PRIM_ISCONS(v0x7f4112743fe0);
if (True == v0x7f41125fbc40) {
Obj v0x7f41125fbe80 = PRIM_CAR(v0x7f4112743fe0);
Obj v0x7f41125fbea0 = PRIM_EQ(sym_37const, v0x7f41125fbe80);
if (True == v0x7f41125fbea0) {
Obj v0x7f41125ec040 = PRIM_CDR(v0x7f4112743fe0);
Obj v0x7f41125ec060 = PRIM_ISCONS(v0x7f41125ec040);
if (True == v0x7f41125ec060) {
Obj v0x7f41125ec2a0 = PRIM_CDR(v0x7f4112743fe0);
Obj v0x7f41125ec2c0 = PRIM_CAR(v0x7f41125ec2a0);
Obj x = v0x7f41125ec2c0;
Obj v0x7f41125ec520 = PRIM_CDR(v0x7f4112743fe0);
Obj v0x7f41125ec540 = PRIM_CDR(v0x7f41125ec520);
Obj v0x7f41125ec560 = PRIM_EQ(Nil, v0x7f41125ec540);
if (True == v0x7f41125ec560) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411273e080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e080;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj v0x7f411273e240 = makeNative(42, clofun7, 0, 1, closureRef(co, 0));
Obj v0x7f41125fef60 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125fef60) {
Obj v0x7f41125fb1a0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125fb1c0 = PRIM_EQ(sym_37global, v0x7f41125fb1a0);
if (True == v0x7f41125fb1c0) {
Obj v0x7f41125fb360 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125fb380 = PRIM_ISCONS(v0x7f41125fb360);
if (True == v0x7f41125fb380) {
Obj v0x7f41125fb580 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125fb5a0 = PRIM_CAR(v0x7f41125fb580);
Obj x = v0x7f41125fb5a0;
Obj v0x7f41125fb880 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125fb8a0 = PRIM_CDR(v0x7f41125fb880);
Obj v0x7f41125fb8c0 = PRIM_EQ(Nil, v0x7f41125fb8a0);
if (True == v0x7f41125fb8c0) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411273e240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj v0x7f411273e460 = makeNative(43, clofun7, 0, 1, closureRef(co, 0));
Obj v0x7f41125fe340 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41125fe340) {
Obj v0x7f41125fe540 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41125fe560 = PRIM_EQ(sym_37builtin, v0x7f41125fe540);
if (True == v0x7f41125fe560) {
Obj v0x7f41125fe700 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125fe740 = PRIM_ISCONS(v0x7f41125fe700);
if (True == v0x7f41125fe740) {
Obj v0x7f41125fe940 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125fe960 = PRIM_CAR(v0x7f41125fe940);
Obj op = v0x7f41125fe960;
Obj v0x7f41125febc0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41125febe0 = PRIM_CDR(v0x7f41125febc0);
Obj v0x7f41125fec00 = PRIM_EQ(Nil, v0x7f41125febe0);
if (True == v0x7f41125fec00) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411273e460;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e460;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e460;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e460;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj v0x7f411273e660 = makeNative(44, clofun7, 0, 1, closureRef(co, 0));
Obj v0x7f4112603680 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112603680) {
Obj v0x7f41126038a0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f41126038c0 = PRIM_EQ(symquote, v0x7f41126038a0);
if (True == v0x7f41126038c0) {
Obj v0x7f4112603ac0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112603ae0 = PRIM_ISCONS(v0x7f4112603ac0);
if (True == v0x7f4112603ae0) {
Obj v0x7f4112603c80 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112603ca0 = PRIM_CAR(v0x7f4112603c80);
Obj x = v0x7f4112603ca0;
Obj v0x7f4112603fa0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112603fc0 = PRIM_CDR(v0x7f4112603fa0);
Obj v0x7f4112603fe0 = PRIM_EQ(Nil, v0x7f4112603fc0);
if (True == v0x7f4112603fe0) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411273e660;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e660;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e660;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e660;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj v0x7f411273e8a0 = makeNative(45, clofun7, 0, 1, closureRef(co, 0));
Obj v0x7f411261ba00 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f411261ba00) {
Obj v0x7f411261bbc0 = PRIM_CAR(closureRef(co, 0));
Obj v0x7f411261bc00 = PRIM_EQ(sym_37closure_45ref, v0x7f411261bbc0);
if (True == v0x7f411261bc00) {
Obj v0x7f411261be20 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f411261be40 = PRIM_ISCONS(v0x7f411261be20);
if (True == v0x7f411261be40) {
Obj v0x7f411261bfe0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f4112603000 = PRIM_CAR(v0x7f411261bfe0);
Obj __ = v0x7f4112603000;
Obj v0x7f41126032c0 = PRIM_CDR(closureRef(co, 0));
Obj v0x7f41126032e0 = PRIM_CDR(v0x7f41126032c0);
Obj v0x7f4112603300 = PRIM_EQ(Nil, v0x7f41126032e0);
if (True == v0x7f4112603300) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411273e8a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e8a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e8a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411273e8a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj v0x7f411273ea80 = makeNative(46, clofun7, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label46:
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

label47:
{
Obj v0x7f4112743860 = __arg1;
Obj v0x7f41127438a0 = __arg2;
Obj v0x7f4112743960 = makeNative(48, clofun7, 0, 2, v0x7f4112743860, v0x7f41127438a0);
Obj v0x7f411261b240 = PRIM_EQ(Nil, v0x7f4112743860);
if (True == v0x7f411261b240) {
Obj __ = v0x7f41127438a0;
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112743960;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj v0x7f4112743ac0 = makeNative(0, clofun8, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v0x7f4112669b20 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112669b20) {
Obj v0x7f4112669c60 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f4112669c60;
Obj v0x7f4112669d80 = PRIM_CDR(closureRef(co, 0));
Obj y = v0x7f4112669d80;
Obj s2 = closureRef(co, 1);
pushCont(co, 49, clofun7, 3, y, s2, v0x7f4112743ac0);
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
__arg0 = v0x7f4112743ac0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj v0x7f4112669f00 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112743ac0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == v0x7f4112669f00) {
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
__arg0 = v0x7f4112743ac0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
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
Obj v0x7f4112743cc0 = makeNative(2, clofun8, 0, 0);
Obj v0x7f4112669540 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f4112669540) {
Obj v0x7f4112669640 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f4112669640;
Obj v0x7f4112669760 = PRIM_CDR(closureRef(co, 0));
Obj y = v0x7f4112669760;
Obj s2 = closureRef(co, 1);
pushCont(co, 1, clofun8, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112743cc0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj v0x7f4112669960 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f4112669980 = makeCons(x, v0x7f4112669960);
__nargs = 2;
__arg1 = v0x7f4112669980;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
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

label3:
{
Obj v0x7f41127430e0 = __arg1;
Obj v0x7f4112743100 = __arg2;
Obj v0x7f41127431e0 = makeNative(4, clofun8, 0, 2, v0x7f41127430e0, v0x7f4112743100);
Obj v0x7f4112669000 = PRIM_EQ(Nil, v0x7f41127430e0);
if (True == v0x7f4112669000) {
Obj s2 = v0x7f4112743100;
__nargs = 2;
__arg1 = s2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f41127431e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj v0x7f4112743340 = makeNative(6, clofun8, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v0x7f41126a7980 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41126a7980) {
Obj v0x7f41126a7a80 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f41126a7a80;
Obj v0x7f41126a7ba0 = PRIM_CDR(closureRef(co, 0));
Obj y = v0x7f41126a7ba0;
Obj s2 = closureRef(co, 1);
pushCont(co, 5, clofun8, 3, y, s2, v0x7f4112743340);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35elem_63);
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112743340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj v0x7f41126a7d20 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f4112743340= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == v0x7f41126a7d20) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35union);
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112743340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj v0x7f4112743520 = makeNative(8, clofun8, 0, 0);
Obj v0x7f41126a7320 = PRIM_ISCONS(closureRef(co, 0));
if (True == v0x7f41126a7320) {
Obj v0x7f41126a7480 = PRIM_CAR(closureRef(co, 0));
Obj x = v0x7f41126a7480;
Obj v0x7f41126a75a0 = PRIM_CDR(closureRef(co, 0));
Obj y = v0x7f41126a75a0;
Obj s2 = closureRef(co, 1);
pushCont(co, 7, clofun8, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35union);
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112743520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj v0x7f41126a7780 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41126a7800 = makeCons(x, v0x7f41126a7780);
__nargs = 2;
__arg1 = v0x7f41126a7800;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
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

label9:
{
Obj v0x7f411272d460 = __arg1;
Obj v0x7f411272d480 = __arg2;
Obj v0x7f411272d4a0 = __arg3;
Obj v0x7f411272d4c0 = co->args[4];
Obj v0x7f411272d4e0 = co->args[5];
Obj v0x7f411272d660 = makeNative(13, clofun8, 0, 5, v0x7f411272d460, v0x7f411272d480, v0x7f411272d4a0, v0x7f411272d4c0, v0x7f411272d4e0);
Obj __ = v0x7f411272d460;
__ = v0x7f411272d480;
__ = v0x7f411272d4a0;
Obj globals = v0x7f411272d4c0;
Obj x = v0x7f411272d4e0;
pushCont(co, 10, clofun8, 2, x, v0x7f411272d660);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35number_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj v0x7f41126b5e60 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f411272d660= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f41126b5e60) {
if (True == True) {
Obj v0x7f41126af040 = makeCons(x, Nil);
Obj v0x7f41126af060 = makeCons(sym_37const, v0x7f41126af040);
__nargs = 2;
__arg1 = v0x7f41126af060;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411272d660;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj v0x7f41126af240 = primIsString(x);
if (True == v0x7f41126af240) {
if (True == True) {
Obj v0x7f41126af420 = makeCons(x, Nil);
Obj v0x7f41126af440 = makeCons(sym_37const, v0x7f41126af420);
__nargs = 2;
__arg1 = v0x7f41126af440;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411272d660;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 11, clofun8, 2, x, v0x7f411272d660);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35boolean_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label11:
{
Obj v0x7f41126af5c0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f411272d660= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f41126af5c0) {
if (True == True) {
Obj v0x7f41126af7a0 = makeCons(x, Nil);
Obj v0x7f41126af7c0 = makeCons(sym_37const, v0x7f41126af7a0);
__nargs = 2;
__arg1 = v0x7f41126af7c0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411272d660;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 12, clofun8, 2, x, v0x7f411272d660);
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

label12:
{
Obj v0x7f41126af940 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f411272d660= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f41126af940) {
if (True == True) {
Obj v0x7f41126afb60 = makeCons(x, Nil);
Obj v0x7f41126afb80 = makeCons(sym_37const, v0x7f41126afb60);
__nargs = 2;
__arg1 = v0x7f41126afb80;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411272d660;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj v0x7f41126afda0 = makeCons(x, Nil);
Obj v0x7f41126afdc0 = makeCons(sym_37const, v0x7f41126afda0);
__nargs = 2;
__arg1 = v0x7f41126afdc0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411272d660;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label13:
{
Obj v0x7f411272d940 = makeNative(15, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj __ = closureRef(co, 0);
__ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj v0x7f41126cfa40 = PRIM_ISCONS(closureRef(co, 4));
if (True == v0x7f41126cfa40) {
Obj v0x7f41126cff00 = PRIM_CAR(closureRef(co, 4));
Obj v0x7f41126cff20 = PRIM_EQ(symquote, v0x7f41126cff00);
if (True == v0x7f41126cff20) {
Obj v0x7f41126b50e0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41126b5120 = PRIM_ISCONS(v0x7f41126b50e0);
if (True == v0x7f41126b5120) {
Obj v0x7f41126b5340 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41126b5360 = PRIM_CAR(v0x7f41126b5340);
Obj x = v0x7f41126b5360;
Obj v0x7f41126b5600 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41126b5640 = PRIM_CDR(v0x7f41126b5600);
Obj v0x7f41126b5660 = PRIM_EQ(Nil, v0x7f41126b5640);
if (True == v0x7f41126b5660) {
pushCont(co, 14, clofun8, 1, x);
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
__arg0 = v0x7f411272d940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272d940;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj v0x7f41126b57a0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41126b5960 = makeCons(x, Nil);
Obj v0x7f41126b5980 = makeCons(sym_37const, v0x7f41126b5960);
__nargs = 2;
__arg1 = v0x7f41126b5980;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj v0x7f411272dd00 = makeNative(19, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj x = closureRef(co, 4);
Obj v0x7f411272dee0 = primIsSymbol(x);
if (True == v0x7f411272dee0) {
pushCont(co, 16, clofun8, 4, x, ns, import, globals);
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
__arg0 = v0x7f411272dd00;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj v0x7f41126cf100 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == v0x7f41126cf100) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 17, clofun8, 1, globals);
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

label17:
{
Obj v0x7f41126cf2a0 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v = v0x7f41126cf2a0;
pushCont(co, 18, clofun8, 1, v);
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

label18:
{
Obj v0x7f41126cf480 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41126cf620 = makeCons(v, Nil);
Obj v0x7f41126cf640 = makeCons(sym_37global, v0x7f41126cf620);
__nargs = 2;
__arg1 = v0x7f41126cf640;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj v0x7f411272dfe0 = makeNative(22, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj v0x7f41127435e0 = PRIM_ISCONS(closureRef(co, 4));
if (True == v0x7f41127435e0) {
Obj v0x7f4112743900 = PRIM_CAR(closureRef(co, 4));
Obj v0x7f4112743940 = PRIM_EQ(symlambda, v0x7f4112743900);
if (True == v0x7f4112743940) {
Obj v0x7f4112743d20 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f4112743d40 = PRIM_ISCONS(v0x7f4112743d20);
if (True == v0x7f4112743d40) {
Obj v0x7f4112743fa0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f411273e060 = PRIM_CAR(v0x7f4112743fa0);
Obj args = v0x7f411273e060;
Obj v0x7f411273e3c0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f411273e3e0 = PRIM_CDR(v0x7f411273e3c0);
Obj v0x7f411273e400 = PRIM_ISCONS(v0x7f411273e3e0);
if (True == v0x7f411273e400) {
Obj v0x7f411273e800 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f411273e820 = PRIM_CDR(v0x7f411273e800);
Obj v0x7f411273e840 = PRIM_CAR(v0x7f411273e820);
Obj body = v0x7f411273e840;
Obj v0x7f411273ee40 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f411273ee80 = PRIM_CDR(v0x7f411273ee40);
Obj v0x7f411273eea0 = PRIM_CDR(v0x7f411273ee80);
Obj v0x7f411273eec0 = PRIM_EQ(Nil, v0x7f411273eea0);
if (True == v0x7f411273eec0) {
pushCont(co, 20, clofun8, 5, ns, import, globals, body, args);
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
__arg0 = v0x7f411272dfe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272dfe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272dfe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272dfe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f411272dfe0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj v0x7f411272d6c0 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 21, clofun8, 1, args);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = v0x7f411272d6c0;
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

label21:
{
Obj v0x7f411272d780 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f411272d7c0 = makeCons(v0x7f411272d780, Nil);
Obj v0x7f411272d7e0 = makeCons(args, v0x7f411272d7c0);
Obj v0x7f411272d800 = makeCons(symlambda, v0x7f411272d7e0);
__nargs = 2;
__arg1 = v0x7f411272d800;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj v0x7f41126cf420 = makeNative(25, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj v0x7f41125c1620 = PRIM_ISCONS(closureRef(co, 4));
if (True == v0x7f41125c1620) {
Obj v0x7f41125c17e0 = PRIM_CAR(closureRef(co, 4));
Obj v0x7f41125c1800 = PRIM_EQ(symif, v0x7f41125c17e0);
if (True == v0x7f41125c1800) {
Obj v0x7f41125c1900 = PRIM_CDR(closureRef(co, 4));
Obj args = v0x7f41125c1900;
pushCont(co, 23, clofun8, 1, args);
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
__arg0 = v0x7f41126cf420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj v0x7f41125c1b80 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 24, clofun8);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = v0x7f41125c1b80;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj v0x7f41125c1bc0 = __arg1;
Obj v0x7f41125c1be0 = makeCons(symif, v0x7f41125c1bc0);
__nargs = 2;
__arg1 = v0x7f41125c1be0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj v0x7f41126cf760 = makeNative(28, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj v0x7f41125d2460 = PRIM_ISCONS(closureRef(co, 4));
if (True == v0x7f41125d2460) {
Obj v0x7f41125d2640 = PRIM_CAR(closureRef(co, 4));
Obj v0x7f41125d2660 = PRIM_EQ(symdo, v0x7f41125d2640);
if (True == v0x7f41125d2660) {
Obj v0x7f41125d2840 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125d2860 = PRIM_ISCONS(v0x7f41125d2840);
if (True == v0x7f41125d2860) {
Obj v0x7f41125d2aa0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125d2ac0 = PRIM_CAR(v0x7f41125d2aa0);
Obj v0x7f41125d2ae0 = PRIM_ISCONS(v0x7f41125d2ac0);
if (True == v0x7f41125d2ae0) {
Obj v0x7f41125d2de0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125d2e00 = PRIM_CAR(v0x7f41125d2de0);
Obj v0x7f41125d2e20 = PRIM_CAR(v0x7f41125d2e00);
Obj v0x7f41125d2e40 = PRIM_EQ(symimport, v0x7f41125d2e20);
if (True == v0x7f41125d2e40) {
Obj v0x7f41125cf120 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125cf140 = PRIM_CAR(v0x7f41125cf120);
Obj v0x7f41125cf160 = PRIM_CDR(v0x7f41125cf140);
Obj v0x7f41125cf180 = PRIM_ISCONS(v0x7f41125cf160);
if (True == v0x7f41125cf180) {
Obj v0x7f41125cf4a0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125cf4c0 = PRIM_CAR(v0x7f41125cf4a0);
Obj v0x7f41125cf4e0 = PRIM_CDR(v0x7f41125cf4c0);
Obj v0x7f41125cf500 = PRIM_CAR(v0x7f41125cf4e0);
Obj pkg = v0x7f41125cf500;
Obj v0x7f41125cf900 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125cf920 = PRIM_CAR(v0x7f41125cf900);
Obj v0x7f41125cf940 = PRIM_CDR(v0x7f41125cf920);
Obj v0x7f41125cf960 = PRIM_CDR(v0x7f41125cf940);
Obj v0x7f41125cf980 = PRIM_EQ(Nil, v0x7f41125cf960);
if (True == v0x7f41125cf980) {
Obj v0x7f41125cfc20 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125cfc40 = PRIM_CDR(v0x7f41125cfc20);
Obj v0x7f41125cfc60 = PRIM_ISCONS(v0x7f41125cfc40);
if (True == v0x7f41125cfc60) {
Obj v0x7f41125cff00 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125cff20 = PRIM_CDR(v0x7f41125cff00);
Obj v0x7f41125cff40 = PRIM_CAR(v0x7f41125cff20);
Obj y = v0x7f41125cff40;
Obj v0x7f41125cd600 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125cd620 = PRIM_CDR(v0x7f41125cd600);
Obj v0x7f41125cd640 = PRIM_CDR(v0x7f41125cd620);
Obj v0x7f41125cd660 = PRIM_EQ(Nil, v0x7f41125cd640);
if (True == v0x7f41125cd660) {
Obj v0x7f41125cd760 = primIsString(pkg);
if (True == v0x7f41125cd760) {
Obj v0x7f41125cdb80 = makeCons(pkg, Nil);
Obj v0x7f41125cdba0 = makeCons(symimport, v0x7f41125cdb80);
pushCont(co, 26, clofun8, 6, pkg, import, env, ns, globals, y);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->args[5] = v0x7f41125cdba0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f41126cf760;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf760;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf760;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf760;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf760;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf760;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf760;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf760;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf760;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cf760;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj v0x7f41125cdbc0 = __arg1;
Obj pkg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj v0x7f41125cde40 = makeCons(pkg, import);
pushCont(co, 27, clofun8, 1, v0x7f41125cdbc0);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = v0x7f41125cde40;
co->args[4] = globals;
co->args[5] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj v0x7f41125cdea0 = __arg1;
Obj v0x7f41125cdbc0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41125cdee0 = makeCons(v0x7f41125cdea0, Nil);
Obj v0x7f41125cdf00 = makeCons(v0x7f41125cdbc0, v0x7f41125cdee0);
Obj v0x7f41125cdf20 = makeCons(symdo, v0x7f41125cdf00);
__nargs = 2;
__arg1 = v0x7f41125cdf20;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj v0x7f41126cfc80 = makeNative(31, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj v0x7f41125e5b40 = PRIM_ISCONS(closureRef(co, 4));
if (True == v0x7f41125e5b40) {
Obj v0x7f41125e5d20 = PRIM_CAR(closureRef(co, 4));
Obj v0x7f41125e5d40 = PRIM_EQ(symdo, v0x7f41125e5d20);
if (True == v0x7f41125e5d40) {
Obj v0x7f41125e5ee0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125e5f00 = PRIM_ISCONS(v0x7f41125e5ee0);
if (True == v0x7f41125e5f00) {
Obj v0x7f41125d60c0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125d60e0 = PRIM_CAR(v0x7f41125d60c0);
Obj x = v0x7f41125d60e0;
Obj v0x7f41125d6360 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125d6380 = PRIM_CDR(v0x7f41125d6360);
Obj v0x7f41125d63a0 = PRIM_ISCONS(v0x7f41125d6380);
if (True == v0x7f41125d63a0) {
Obj v0x7f41125d6600 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125d6620 = PRIM_CDR(v0x7f41125d6600);
Obj v0x7f41125d6640 = PRIM_CAR(v0x7f41125d6620);
Obj y = v0x7f41125d6640;
Obj v0x7f41125d69c0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125d69e0 = PRIM_CDR(v0x7f41125d69c0);
Obj v0x7f41125d6a00 = PRIM_CDR(v0x7f41125d69e0);
Obj v0x7f41125d6a20 = PRIM_EQ(Nil, v0x7f41125d6a00);
if (True == v0x7f41125d6a20) {
pushCont(co, 29, clofun8, 5, env, ns, import, globals, y);
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
__arg0 = v0x7f41126cfc80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cfc80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cfc80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cfc80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126cfc80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj v0x7f41125d6d00 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 30, clofun8, 1, v0x7f41125d6d00);
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

label30:
{
Obj v0x7f41125d6f20 = __arg1;
Obj v0x7f41125d6d00= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41125d6f60 = makeCons(v0x7f41125d6f20, Nil);
Obj v0x7f41125d6f80 = makeCons(v0x7f41125d6d00, v0x7f41125d6f60);
Obj v0x7f41125d6fa0 = makeCons(symdo, v0x7f41125d6f80);
__nargs = 2;
__arg1 = v0x7f41125d6fa0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj v0x7f41126b50c0 = makeNative(34, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj v0x7f41125ec760 = PRIM_ISCONS(closureRef(co, 4));
if (True == v0x7f41125ec760) {
Obj v0x7f41125ec940 = PRIM_CAR(closureRef(co, 4));
Obj v0x7f41125ec960 = PRIM_EQ(symlet, v0x7f41125ec940);
if (True == v0x7f41125ec960) {
Obj v0x7f41125ecb40 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125ecb60 = PRIM_ISCONS(v0x7f41125ecb40);
if (True == v0x7f41125ecb60) {
Obj v0x7f41125ecd20 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125ecd40 = PRIM_CAR(v0x7f41125ecd20);
Obj a = v0x7f41125ecd40;
Obj v0x7f41125ecf80 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125ecfa0 = PRIM_CDR(v0x7f41125ecf80);
Obj v0x7f41125ecfc0 = PRIM_ISCONS(v0x7f41125ecfa0);
if (True == v0x7f41125ecfc0) {
Obj v0x7f41125e7240 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125e7260 = PRIM_CDR(v0x7f41125e7240);
Obj v0x7f41125e7280 = PRIM_CAR(v0x7f41125e7260);
Obj b = v0x7f41125e7280;
Obj v0x7f41125e75a0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125e75c0 = PRIM_CDR(v0x7f41125e75a0);
Obj v0x7f41125e75e0 = PRIM_CDR(v0x7f41125e75c0);
Obj v0x7f41125e7600 = PRIM_ISCONS(v0x7f41125e75e0);
if (True == v0x7f41125e7600) {
Obj v0x7f41125e7960 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125e7980 = PRIM_CDR(v0x7f41125e7960);
Obj v0x7f41125e79a0 = PRIM_CDR(v0x7f41125e7980);
Obj v0x7f41125e79c0 = PRIM_CAR(v0x7f41125e79a0);
Obj c = v0x7f41125e79c0;
Obj v0x7f41125e7e00 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125e7e20 = PRIM_CDR(v0x7f41125e7e00);
Obj v0x7f41125e7e40 = PRIM_CDR(v0x7f41125e7e20);
Obj v0x7f41125e7e60 = PRIM_CDR(v0x7f41125e7e40);
Obj v0x7f41125e7e80 = PRIM_EQ(Nil, v0x7f41125e7e60);
if (True == v0x7f41125e7e80) {
pushCont(co, 32, clofun8, 6, env, ns, import, globals, c, a);
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
__arg0 = v0x7f41126b50c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126b50c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126b50c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126b50c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126b50c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126b50c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj v0x7f41125e5220 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj v0x7f41125e5460 = makeCons(a, env);
pushCont(co, 33, clofun8, 2, v0x7f41125e5220, a);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = v0x7f41125e5460;
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

label33:
{
Obj v0x7f41125e5500 = __arg1;
Obj v0x7f41125e5220= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41125e5560 = makeCons(v0x7f41125e5500, Nil);
Obj v0x7f41125e5580 = makeCons(v0x7f41125e5220, v0x7f41125e5560);
Obj v0x7f41125e55a0 = makeCons(a, v0x7f41125e5580);
Obj v0x7f41125e55c0 = makeCons(symlet, v0x7f41125e55a0);
__nargs = 2;
__arg1 = v0x7f41125e55c0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj v0x7f41126b5580 = makeNative(35, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj __ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj v0x7f41125fec20 = PRIM_ISCONS(closureRef(co, 4));
if (True == v0x7f41125fec20) {
Obj v0x7f41125fede0 = PRIM_CAR(closureRef(co, 4));
Obj v0x7f41125fee00 = PRIM_EQ(symns, v0x7f41125fede0);
if (True == v0x7f41125fee00) {
Obj v0x7f41125fefa0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125fefc0 = PRIM_ISCONS(v0x7f41125fefa0);
if (True == v0x7f41125fefc0) {
Obj v0x7f41125fb160 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125fb180 = PRIM_CAR(v0x7f41125fb160);
Obj path = v0x7f41125fb180;
Obj v0x7f41125fb3c0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125fb3e0 = PRIM_CDR(v0x7f41125fb3c0);
Obj v0x7f41125fb400 = PRIM_ISCONS(v0x7f41125fb3e0);
if (True == v0x7f41125fb400) {
Obj v0x7f41125fb640 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125fb660 = PRIM_CDR(v0x7f41125fb640);
Obj v0x7f41125fb680 = PRIM_CAR(v0x7f41125fb660);
Obj import = v0x7f41125fb680;
Obj v0x7f41125fb980 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125fb9a0 = PRIM_CDR(v0x7f41125fb980);
Obj v0x7f41125fb9c0 = PRIM_CDR(v0x7f41125fb9a0);
Obj v0x7f41125fb9e0 = PRIM_ISCONS(v0x7f41125fb9c0);
if (True == v0x7f41125fb9e0) {
Obj v0x7f41125fbcc0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125fbce0 = PRIM_CDR(v0x7f41125fbcc0);
Obj v0x7f41125fbd00 = PRIM_CDR(v0x7f41125fbce0);
Obj v0x7f41125fbd20 = PRIM_CAR(v0x7f41125fbd00);
Obj body = v0x7f41125fbd20;
Obj v0x7f41125ec0c0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41125ec0e0 = PRIM_CDR(v0x7f41125ec0c0);
Obj v0x7f41125ec100 = PRIM_CDR(v0x7f41125ec0e0);
Obj v0x7f41125ec120 = PRIM_CDR(v0x7f41125ec100);
Obj v0x7f41125ec140 = PRIM_EQ(Nil, v0x7f41125ec120);
if (True == v0x7f41125ec140) {
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
__arg0 = v0x7f41126b5580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126b5580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126b5580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126b5580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126b5580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126b5580;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj v0x7f41126b5a40 = makeNative(39, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj v0x7f4112603040 = PRIM_ISCONS(closureRef(co, 4));
if (True == v0x7f4112603040) {
Obj v0x7f4112603200 = PRIM_CAR(closureRef(co, 4));
Obj v0x7f4112603220 = PRIM_EQ(symdef, v0x7f4112603200);
if (True == v0x7f4112603220) {
Obj v0x7f41126033c0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41126033e0 = PRIM_ISCONS(v0x7f41126033c0);
if (True == v0x7f41126033e0) {
Obj v0x7f4112603580 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f41126035a0 = PRIM_CAR(v0x7f4112603580);
Obj var = v0x7f41126035a0;
Obj v0x7f41126037e0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f4112603800 = PRIM_CDR(v0x7f41126037e0);
Obj v0x7f4112603820 = PRIM_ISCONS(v0x7f4112603800);
if (True == v0x7f4112603820) {
Obj v0x7f4112603a60 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f4112603a80 = PRIM_CDR(v0x7f4112603a60);
Obj v0x7f4112603aa0 = PRIM_CAR(v0x7f4112603a80);
Obj val = v0x7f4112603aa0;
Obj v0x7f4112603da0 = PRIM_CDR(closureRef(co, 4));
Obj v0x7f4112603dc0 = PRIM_CDR(v0x7f4112603da0);
Obj v0x7f4112603de0 = PRIM_CDR(v0x7f4112603dc0);
Obj v0x7f4112603e00 = PRIM_EQ(Nil, v0x7f4112603de0);
if (True == v0x7f4112603e00) {
pushCont(co, 36, clofun8, 5, env, ns, import, globals, val);
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
__arg0 = v0x7f41126b5a40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126b5a40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126b5a40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126b5a40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41126b5a40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj v0x7f4112603f20 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj var1 = v0x7f4112603f20;
pushCont(co, 37, clofun8, 6, var1, env, ns, import, globals, val);
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

label37:
{
Obj v0x7f41125fe040 = __arg1;
Obj var1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj v0x7f41125fe280 = makeCons(symset, Nil);
Obj v0x7f41125fe2a0 = makeCons(sym_37builtin, v0x7f41125fe280);
Obj v0x7f41125fe500 = makeCons(var1, Nil);
Obj v0x7f41125fe520 = makeCons(sym_37const, v0x7f41125fe500);
pushCont(co, 38, clofun8, 2, v0x7f41125fe520, v0x7f41125fe2a0);
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

label38:
{
Obj v0x7f41125fe720 = __arg1;
Obj v0x7f41125fe520= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f41125fe2a0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41125fe760 = makeCons(v0x7f41125fe720, Nil);
Obj v0x7f41125fe780 = makeCons(v0x7f41125fe520, v0x7f41125fe760);
Obj v0x7f41125fe7a0 = makeCons(v0x7f41125fe2a0, v0x7f41125fe780);
__nargs = 2;
__arg1 = v0x7f41125fe7a0;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label39:
{
Obj v0x7f41126b5e80 = makeNative(47, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj v0x7f4112669940 = PRIM_ISCONS(closureRef(co, 4));
if (True == v0x7f4112669940) {
Obj v0x7f4112669a40 = PRIM_CAR(closureRef(co, 4));
Obj op = v0x7f4112669a40;
Obj v0x7f4112669b40 = PRIM_CDR(closureRef(co, 4));
Obj args = v0x7f4112669b40;
pushCont(co, 40, clofun8, 7, op, args, env, ns, import, globals, v0x7f41126b5e80);
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
__arg0 = v0x7f41126b5e80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj v0x7f4112669c40 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj v0x7f41126b5e80= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
if (True == v0x7f4112669c40) {
pushCont(co, 41, clofun8, 6, op, args, env, ns, import, globals);
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
__arg0 = v0x7f41126b5e80;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj v0x7f4112669d40 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj required = v0x7f4112669d40;
pushCont(co, 42, clofun8, 7, required, op, args, env, ns, import, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj v0x7f4112669e40 = __arg1;
Obj required= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
Obj provided = v0x7f4112669e40;
Obj v0x7f4112669f60 = PRIM_EQ(required, provided);
if (True == v0x7f4112669f60) {
Obj v0x7f411261b1a0 = makeCons(op, Nil);
Obj v0x7f411261b1c0 = makeCons(sym_37builtin, v0x7f411261b1a0);
pushCont(co, 45, clofun8, 2, args, v0x7f411261b1c0);
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
Obj v0x7f411261b520 = PRIM_GT(required, provided);
if (True == v0x7f411261b520) {
Obj v0x7f411261b6e0 = PRIM_SUB(required, provided);
pushCont(co, 43, clofun8, 6, op, args, env, ns, import, globals);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35temp_45list);
__arg1 = v0x7f411261b6e0;
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

label43:
{
Obj v0x7f411261b720 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj tmp = v0x7f411261b720;
Obj v0x7f411261bbe0 = makeCons(op, args);
pushCont(co, 44, clofun8, 5, tmp, env, ns, import, globals);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35append);
__arg1 = v0x7f411261bbe0;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj v0x7f411261bc20 = __arg1;
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj v0x7f411261bc60 = makeCons(v0x7f411261bc20, Nil);
Obj v0x7f411261bc80 = makeCons(tmp, v0x7f411261bc60);
Obj v0x7f411261bca0 = makeCons(symlambda, v0x7f411261bc80);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->args[5] = v0x7f411261bca0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj v0x7f411261b3a0 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f411261b1c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 46, clofun8, 1, v0x7f411261b1c0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = v0x7f411261b3a0;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj v0x7f411261b3e0 = __arg1;
Obj v0x7f411261b1c0= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v0x7f411261b400 = makeCons(v0x7f411261b1c0, v0x7f411261b3e0);
__nargs = 2;
__arg1 = v0x7f411261b400;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label47:
{
Obj v0x7f41126af1e0 = makeNative(49, clofun8, 0, 0);
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj ls = closureRef(co, 4);
pushCont(co, 48, clofun8, 1, ls);
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

label48:
{
Obj v0x7f4112669720 = __arg1;
Obj ls= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = v0x7f4112669720;
__arg2 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
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

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj v0x7f411273e740 = __arg1;
Obj v0x7f411273e760 = __arg2;
Obj v0x7f411273e780 = __arg3;
Obj v0x7f411273e880 = makeNative(1, clofun9, 0, 3, v0x7f411273e740, v0x7f411273e760, v0x7f411273e780);
Obj s = v0x7f411273e740;
Obj ns = v0x7f411273e760;
Obj v0x7f41126a7ae0 = PRIM_EQ(Nil, v0x7f411273e780);
if (True == v0x7f41126a7ae0) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35var_45with_45ns);
__arg1 = s;
__arg2 = ns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f411273e880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj v0x7f411273ea60 = makeNative(9, clofun9, 0, 0);
Obj s = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj v0x7f41126afee0 = PRIM_ISCONS(closureRef(co, 2));
if (True == v0x7f41126afee0) {
Obj v0x7f41126affe0 = PRIM_CAR(closureRef(co, 2));
Obj import = v0x7f41126affe0;
Obj v0x7f41126a70e0 = PRIM_CDR(closureRef(co, 2));
Obj more = v0x7f41126a70e0;
pushCont(co, 2, clofun9, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = import;
__arg2 = makeCString("#*ns-export*");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f411273ea60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj v0x7f41126a7340 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 3, clofun9, 4, import, s, ns, more);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35intern);
__arg1 = v0x7f41126a7340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj v0x7f41126a7360 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 4, clofun9, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35value_45or);
__arg1 = v0x7f41126a7360;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj v0x7f41126a73a0 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj export = v0x7f41126a73a0;
pushCont(co, 5, clofun9, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35elem_63);
__arg1 = s;
__arg2 = export;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj v0x7f41126a74c0 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == v0x7f41126a74c0) {
pushCont(co, 6, clofun9, 1, import);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35symbol_45_62string);
__arg1 = s;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj v0x7f41126a77a0 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 7, clofun9, 1, import);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = makeCString("#");
__arg2 = v0x7f41126a77a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj v0x7f41126a77c0 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 8, clofun9);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = import;
__arg2 = v0x7f41126a77c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj v0x7f41126a77e0 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35intern);
__arg1 = v0x7f41126a77e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj var = __arg1;
Obj ns = __arg2;
Obj v0x7f41126af640 = PRIM_EQ(ns, makeCString(""));
if (True == v0x7f41126af640) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 11, clofun9, 2, var, ns);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35symbol_45cooked_63);
__arg1 = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj v0x7f41126af740 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == v0x7f41126af740) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 12, clofun9, 1, ns);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35symbol_45_62string);
__arg1 = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj v0x7f41126afa20 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 13, clofun9, 1, ns);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = makeCString("#");
__arg2 = v0x7f41126afa20;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj v0x7f41126afa40 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 14, clofun9);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = ns;
__arg2 = v0x7f41126afa40;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj v0x7f41126afa60 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35intern);
__arg1 = v0x7f41126afa60;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj v0x7f411273e2a0 = __arg1;
Obj v0x7f411273e2c0 = __arg2;
Obj v0x7f411273e380 = makeNative(16, clofun9, 0, 2, v0x7f411273e2a0, v0x7f411273e2c0);
Obj v0x7f41126af300 = PRIM_EQ(MAKE_NUMBER(0), v0x7f411273e2a0);
if (True == v0x7f41126af300) {
Obj res = v0x7f411273e2c0;
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411273e380;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj v0x7f411273e4e0 = makeNative(17, clofun9, 0, 0);
Obj n = closureRef(co, 0);
Obj res = closureRef(co, 1);
Obj v0x7f41126af020 = PRIM_SUB(n, MAKE_NUMBER(1));
Obj v0x7f41126af180 = primGenSym();
Obj v0x7f41126af1c0 = makeCons(v0x7f41126af180, res);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35temp_45list);
__arg1 = v0x7f41126af020;
__arg2 = v0x7f41126af1c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x = __arg1;
PUSH_CONT_0(co, 19, clofun9);
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

label19:
{
Obj v0x7f41126b5940 = __arg1;
Obj find = v0x7f41126b5940;
pushCont(co, 20, clofun9, 1, find);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj v0x7f41126b5a60 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == v0x7f41126b5a60) {
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

label21:
{
Obj x = __arg1;
PUSH_CONT_0(co, 22, clofun9);
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

label22:
{
Obj v0x7f41126b5500 = __arg1;
Obj find = v0x7f41126b5500;
pushCont(co, 23, clofun9, 1, find);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj v0x7f41126b5620 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == v0x7f41126b5620) {
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

label24:
{
Obj x = __arg1;
PUSH_CONT_0(co, 25, clofun9);
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

label25:
{
Obj v0x7f41126b5240 = __arg1;
PUSH_CONT_0(co, 26, clofun9);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = v0x7f41126b5240;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj v0x7f41126b5260 = __arg1;
Obj v0x7f41126b5280 = primNot(v0x7f41126b5260);
__nargs = 2;
__arg1 = v0x7f41126b5280;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label27:
{
Obj v0x7f4112743de0 = __arg1;
Obj v0x7f4112743e00 = __arg2;
Obj v0x7f4112743ec0 = makeNative(28, clofun9, 0, 2, v0x7f4112743de0, v0x7f4112743e00);
Obj x = v0x7f4112743de0;
Obj v0x7f41125cf1c0 = PRIM_EQ(Nil, v0x7f4112743e00);
if (True == v0x7f41125cf1c0) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112743ec0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj v0x7f411273e020 = makeNative(30, clofun9, 0, 0);
Obj x = closureRef(co, 0);
Obj v0x7f41125d2320 = PRIM_ISCONS(closureRef(co, 1));
if (True == v0x7f41125d2320) {
Obj v0x7f41125d2420 = PRIM_CAR(closureRef(co, 1));
Obj hd = v0x7f41125d2420;
Obj v0x7f41125d2520 = PRIM_CDR(closureRef(co, 1));
Obj tl = v0x7f41125d2520;
pushCont(co, 29, clofun9, 2, x, tl);
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
__arg0 = v0x7f411273e020;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj v0x7f41125d26e0 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tl= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v0x7f41125d2720 = PRIM_LT(v0x7f41125d26e0, MAKE_NUMBER(0));
if (True == v0x7f41125d2720) {
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

label30:
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

label31:
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

label32:
{
Obj v0x7f4112743560 = __arg1;
Obj v0x7f4112743580 = __arg2;
Obj v0x7f41127435a0 = __arg3;
Obj v0x7f41127436a0 = makeNative(33, clofun9, 0, 3, v0x7f4112743560, v0x7f4112743580, v0x7f41127435a0);
Obj __ = v0x7f4112743560;
Obj x = v0x7f4112743580;
Obj v0x7f41125d6c20 = PRIM_EQ(Nil, v0x7f41127435a0);
if (True == v0x7f41125d6c20) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f41127436a0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj v0x7f4112743880 = makeNative(34, clofun9, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj v0x7f41125d6660 = PRIM_ISCONS(closureRef(co, 2));
if (True == v0x7f41125d6660) {
Obj v0x7f41125d6760 = PRIM_CAR(closureRef(co, 2));
Obj a = v0x7f41125d6760;
Obj v0x7f41125d6860 = PRIM_CDR(closureRef(co, 2));
Obj b = v0x7f41125d6860;
Obj v0x7f41125d6980 = PRIM_EQ(x, a);
if (True == v0x7f41125d6980) {
__nargs = 2;
__arg1 = pos;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112743880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f4112743880;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj v0x7f4112743ae0 = makeNative(35, clofun9, 0, 0);
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj v0x7f41125d60a0 = PRIM_ISCONS(closureRef(co, 2));
if (True == v0x7f41125d60a0) {
Obj v0x7f41125d61a0 = PRIM_CAR(closureRef(co, 2));
Obj a = v0x7f41125d61a0;
Obj v0x7f41125d62a0 = PRIM_CDR(closureRef(co, 2));
Obj b = v0x7f41125d62a0;
Obj v0x7f41125d6420 = PRIM_ADD(pos, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35pos_45in_45list0);
__arg1 = v0x7f41125d6420;
__arg2 = x;
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = v0x7f4112743ae0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
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

label36:
{
Obj v0x7f41124adea0 = __arg1;
Obj v0x7f41124adec0 = __arg2;
Obj v0x7f41124adf00 = __arg3;
Obj v0x7f411248c160 = makeNative(37, clofun9, 0, 3, v0x7f41124adea0, v0x7f41124adec0, v0x7f41124adf00);
Obj f = v0x7f41124adea0;
Obj acc = v0x7f41124adec0;
Obj v0x7f41125e5b20 = PRIM_EQ(Nil, v0x7f41124adf00);
if (True == v0x7f41125e5b20) {
__nargs = 2;
__arg1 = acc;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f411248c160;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj v0x7f41127431c0 = makeNative(39, clofun9, 0, 0);
Obj f = closureRef(co, 0);
Obj acc = closureRef(co, 1);
Obj v0x7f41125e5540 = PRIM_ISCONS(closureRef(co, 2));
if (True == v0x7f41125e5540) {
Obj v0x7f41125e5640 = PRIM_CAR(closureRef(co, 2));
Obj x = v0x7f41125e5640;
Obj v0x7f41125e5740 = PRIM_CDR(closureRef(co, 2));
Obj y = v0x7f41125e5740;
pushCont(co, 38, clofun9, 2, f, y);
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
__arg0 = v0x7f41127431c0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj v0x7f41125e58e0 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = f;
__arg2 = v0x7f41125e58e0;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj v0x7f41124c4f20 = __arg1;
Obj v0x7f41124c4f40 = __arg2;
Obj v0x7f41124ad020 = makeNative(41, clofun9, 0, 2, v0x7f41124c4f20, v0x7f41124c4f40);
Obj var = v0x7f41124c4f20;
Obj v0x7f41125e5040 = PRIM_EQ(Nil, v0x7f41124c4f40);
if (True == v0x7f41125e5040) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f41124ad020;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj v0x7f41124ad320 = makeNative(42, clofun9, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj v0x7f41125e7520 = PRIM_ISCONS(closureRef(co, 1));
if (True == v0x7f41125e7520) {
Obj v0x7f41125e76c0 = PRIM_CAR(closureRef(co, 1));
Obj v0x7f41125e76e0 = PRIM_ISCONS(v0x7f41125e76c0);
if (True == v0x7f41125e76e0) {
Obj v0x7f41125e7880 = PRIM_CAR(closureRef(co, 1));
Obj v0x7f41125e78a0 = PRIM_CAR(v0x7f41125e7880);
Obj x = v0x7f41125e78a0;
Obj v0x7f41125e7a40 = PRIM_CAR(closureRef(co, 1));
Obj v0x7f41125e7a60 = PRIM_CDR(v0x7f41125e7a40);
Obj y = v0x7f41125e7a60;
Obj v0x7f41125e7b60 = PRIM_CDR(closureRef(co, 1));
Obj __ = v0x7f41125e7b60;
Obj v0x7f41125e7c80 = PRIM_EQ(var, x);
if (True == v0x7f41125e7c80) {
Obj v0x7f41125e7d60 = makeCons(x, y);
__nargs = 2;
__arg1 = v0x7f41125e7d60;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = v0x7f41124ad320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41124ad320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = v0x7f41124ad320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj v0x7f41124ad7e0 = makeNative(43, clofun9, 0, 0);
Obj var = closureRef(co, 0);
Obj v0x7f41125e70a0 = PRIM_ISCONS(closureRef(co, 1));
if (True == v0x7f41125e70a0) {
Obj v0x7f41125e71a0 = PRIM_CAR(closureRef(co, 1));
Obj __ = v0x7f41125e71a0;
Obj v0x7f41125e72a0 = PRIM_CDR(closureRef(co, 1));
Obj y = v0x7f41125e72a0;
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
__arg0 = v0x7f41124ad7e0;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
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

