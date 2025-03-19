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
Obj _35val3523 = __arg1;
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
Obj _35val3524 = __arg1;
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
Obj _35val3525 = __arg1;
Obj _35reg3526 = primSet(co, symcora_47lib_47toc_35_42ns_45export_42, Nil);
Obj _35reg3541 = primSet(co, symcora_47lib_47toc_35assq, makeNative(30, clofun9, 2, 0));
Obj _35reg3547 = primSet(co, symcora_47lib_47toc_35foldl, makeNative(26, clofun9, 3, 0));
Obj _35reg3557 = primSet(co, symcora_47lib_47toc_35pos_45in_45list0, makeNative(22, clofun9, 3, 0));
Obj _35reg3558 = primSet(co, symcora_47lib_47toc_35index, makeNative(21, clofun9, 2, 0));
Obj _35reg3565 = primSet(co, symcora_47lib_47toc_35exist_45in_45env, makeNative(17, clofun9, 2, 0));
Obj _35reg3566 = makeCons(makeCString("primSet"), Nil);
Obj _35reg3567 = makeCons(MAKE_NUMBER(2), _35reg3566);
Obj _35reg3568 = makeCons(symset, _35reg3567);
Obj _35reg3569 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _35reg3570 = makeCons(MAKE_NUMBER(1), _35reg3569);
Obj _35reg3571 = makeCons(symcar, _35reg3570);
Obj _35reg3572 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _35reg3573 = makeCons(MAKE_NUMBER(1), _35reg3572);
Obj _35reg3574 = makeCons(symcdr, _35reg3573);
Obj _35reg3575 = makeCons(makeCString("makeCons"), Nil);
Obj _35reg3576 = makeCons(MAKE_NUMBER(2), _35reg3575);
Obj _35reg3577 = makeCons(symcons, _35reg3576);
Obj _35reg3578 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _35reg3579 = makeCons(MAKE_NUMBER(1), _35reg3578);
Obj _35reg3580 = makeCons(symcons_63, _35reg3579);
Obj _35reg3581 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _35reg3582 = makeCons(MAKE_NUMBER(2), _35reg3581);
Obj _35reg3583 = makeCons(sym_43, _35reg3582);
Obj _35reg3584 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _35reg3585 = makeCons(MAKE_NUMBER(2), _35reg3584);
Obj _35reg3586 = makeCons(sym_45, _35reg3585);
Obj _35reg3587 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _35reg3588 = makeCons(MAKE_NUMBER(2), _35reg3587);
Obj _35reg3589 = makeCons(sym_42, _35reg3588);
Obj _35reg3590 = makeCons(makeCString("primDiv"), Nil);
Obj _35reg3591 = makeCons(MAKE_NUMBER(2), _35reg3590);
Obj _35reg3592 = makeCons(sym_47, _35reg3591);
Obj _35reg3593 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _35reg3594 = makeCons(MAKE_NUMBER(2), _35reg3593);
Obj _35reg3595 = makeCons(sym_61, _35reg3594);
Obj _35reg3596 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _35reg3597 = makeCons(MAKE_NUMBER(2), _35reg3596);
Obj _35reg3598 = makeCons(sym_62, _35reg3597);
Obj _35reg3599 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _35reg3600 = makeCons(MAKE_NUMBER(2), _35reg3599);
Obj _35reg3601 = makeCons(sym_60, _35reg3600);
Obj _35reg3602 = makeCons(makeCString("primGenSym"), Nil);
Obj _35reg3603 = makeCons(MAKE_NUMBER(1), _35reg3602);
Obj _35reg3604 = makeCons(symgensym, _35reg3603);
Obj _35reg3605 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _35reg3606 = makeCons(MAKE_NUMBER(1), _35reg3605);
Obj _35reg3607 = makeCons(symsymbol_63, _35reg3606);
Obj _35reg3608 = makeCons(makeCString("primNot"), Nil);
Obj _35reg3609 = makeCons(MAKE_NUMBER(1), _35reg3608);
Obj _35reg3610 = makeCons(symnot, _35reg3609);
Obj _35reg3611 = makeCons(makeCString("primIsNumber"), Nil);
Obj _35reg3612 = makeCons(MAKE_NUMBER(1), _35reg3611);
Obj _35reg3613 = makeCons(syminteger_63, _35reg3612);
Obj _35reg3614 = makeCons(makeCString("primIsString"), Nil);
Obj _35reg3615 = makeCons(MAKE_NUMBER(1), _35reg3614);
Obj _35reg3616 = makeCons(symstring_63, _35reg3615);
Obj _35reg3617 = makeCons(_35reg3616, Nil);
Obj _35reg3618 = makeCons(_35reg3613, _35reg3617);
Obj _35reg3619 = makeCons(_35reg3610, _35reg3618);
Obj _35reg3620 = makeCons(_35reg3607, _35reg3619);
Obj _35reg3621 = makeCons(_35reg3604, _35reg3620);
Obj _35reg3622 = makeCons(_35reg3601, _35reg3621);
Obj _35reg3623 = makeCons(_35reg3598, _35reg3622);
Obj _35reg3624 = makeCons(_35reg3595, _35reg3623);
Obj _35reg3625 = makeCons(_35reg3592, _35reg3624);
Obj _35reg3626 = makeCons(_35reg3589, _35reg3625);
Obj _35reg3627 = makeCons(_35reg3586, _35reg3626);
Obj _35reg3628 = makeCons(_35reg3583, _35reg3627);
Obj _35reg3629 = makeCons(_35reg3580, _35reg3628);
Obj _35reg3630 = makeCons(_35reg3577, _35reg3629);
Obj _35reg3631 = makeCons(_35reg3574, _35reg3630);
Obj _35reg3632 = makeCons(_35reg3571, _35reg3631);
Obj _35reg3633 = makeCons(_35reg3568, _35reg3632);
Obj _35reg3634 = primSet(co, symcora_47lib_47toc_35_42builtin_45prims_42, _35reg3633);
Obj _35reg3638 = primSet(co, symcora_47lib_47toc_35builtin_63, makeNative(14, clofun9, 1, 0));
Obj _35reg3641 = primSet(co, symcora_47lib_47toc_35builtin_45_62name, makeNative(11, clofun9, 1, 0));
Obj _35reg3644 = primSet(co, symcora_47lib_47toc_35builtin_45_62args, makeNative(8, clofun9, 1, 0));
Obj _35reg3649 = primSet(co, symcora_47lib_47toc_35temp_45list, makeNative(5, clofun9, 2, 0));
Obj _35reg3655 = primSet(co, symcora_47lib_47toc_35var_45with_45ns, makeNative(0, clofun9, 2, 0));
Obj _35reg3667 = primSet(co, symcora_47lib_47toc_35lookup_45var, makeNative(40, clofun8, 3, 0));
Obj _35reg3903 = primSet(co, symcora_47lib_47toc_35parse, makeNative(49, clofun7, 5, 0));
Obj _35reg3914 = primSet(co, symcora_47lib_47toc_35union, makeNative(43, clofun7, 2, 0));
Obj _35reg3925 = primSet(co, symcora_47lib_47toc_35diff, makeNative(37, clofun7, 2, 0));
Obj _35reg3976 = primSet(co, symcora_47lib_47toc_35convert_45protect_63, makeNative(30, clofun7, 1, 0));
Obj _35reg4151 = primSet(co, symcora_47lib_47toc_35free_45vars, makeNative(7, clofun7, 1, 0));
Obj _35reg4224 = primSet(co, symcora_47lib_47toc_35closure_45convert, makeNative(42, clofun6, 2, 0));
Obj _35reg4227 = primSet(co, symcora_47lib_47toc_35id, makeNative(41, clofun6, 1, 0));
Obj _35reg4364 = primSet(co, symcora_47lib_47toc_35tailify, makeNative(23, clofun6, 2, 0));
Obj _35reg4411 = primSet(co, symcora_47lib_47toc_35tailify_45list, makeNative(13, clofun6, 3, 0));
Obj _35reg4490 = primSet(co, symcora_47lib_47toc_35explicit_45stack, makeNative(45, clofun5, 2, 0));
Obj _35reg4588 = primSet(co, symcora_47lib_47toc_35collect_45lambda, makeNative(25, clofun5, 2, 0));
Obj _35reg4596 = primSet(co, symcora_47lib_47toc_35append_45result, makeNative(21, clofun5, 2, 0));
Obj _35reg4603 = primSet(co, symcora_47lib_47toc_35wrap_45var, makeNative(19, clofun5, 2, 0));
Obj _35reg4623 = primSet(co, symcora_47lib_47toc_35generate_45call_45list, makeNative(5, clofun5, 4, 0));
Obj _35reg4628 = primSet(co, symcora_47lib_47toc_35add_45symbol_45to_45list, makeNative(2, clofun5, 2, 0));
Obj _35reg4901 = primSet(co, symcora_47lib_47toc_35generate_45inst, makeNative(18, clofun3, 4, 0));
Obj _35reg4926 = primSet(co, symcora_47lib_47toc_35generate_45cont, makeNative(4, clofun3, 3, 0));
Obj _35reg4935 = primSet(co, symcora_47lib_47toc_35generate_45inst_45list_45h, makeNative(48, clofun2, 5, 0));
Obj _35reg4936 = primSet(co, symcora_47lib_47toc_35generate_45inst_45list, makeNative(47, clofun2, 4, 0));
Obj _35reg4937 = primSet(co, symcora_47lib_47toc_35_42mod_45num_42, MAKE_NUMBER(50));
Obj _35reg4941 = primSet(co, symcora_47lib_47toc_35generate_45group_45name, makeNative(45, clofun2, 3, 0));
Obj _35reg4945 = primSet(co, symcora_47lib_47toc_35code_45gen_45func_45declare, makeNative(41, clofun2, 3, 0));
Obj _35reg4953 = primSet(co, symcora_47lib_47toc_35local_45from_45params, makeNative(34, clofun2, 3, 0));
Obj _35reg4958 = primSet(co, symcora_47lib_47toc_35local_45from_45cont, makeNative(29, clofun2, 3, 0));
Obj _35reg4965 = primSet(co, symcora_47lib_47toc_35generate_45call_45args_45reverse, makeNative(25, clofun2, 4, 0));
Obj _35reg5028 = primSet(co, symcora_47lib_47toc_35code_45gen_45toplevel, makeNative(13, clofun2, 3, 0));
Obj _35reg5029 = primSet(co, symcora_47lib_47toc_35parse_45pass, makeNative(12, clofun2, 2, 0));
Obj _35reg5030 = primSet(co, symcora_47lib_47toc_35closure_45convert_45pass, makeNative(11, clofun2, 1, 0));
Obj _35reg5031 = primSet(co, symcora_47lib_47toc_35tailify_45pass, makeNative(10, clofun2, 1, 0));
Obj _35reg5032 = primSet(co, symcora_47lib_47toc_35explicit_45stack_45pass, makeNative(9, clofun2, 1, 0));
Obj _35reg5042 = primSet(co, symcora_47lib_47toc_35collect_45lambda_45pass, makeNative(3, clofun2, 1, 0));
Obj _35reg5049 = primSet(co, symcora_47lib_47toc_35rewrite_45_45_62macro, makeNative(0, clofun2, 2, 0));
PUSH_CONT(co, 4, clofun0, 0);
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
Obj _35val5052 = __arg1;
Obj _35reg5058 = primSet(co, symcora_47lib_47toc_35compile, makeNative(41, clofun1, 2, 0));
Obj _35reg5064 = primSet(co, symcora_47lib_47toc_35for_45each, makeNative(37, clofun1, 2, 0));
Obj _35reg5071 = primSet(co, symcora_47lib_47toc_35generate_45jumptable, makeNative(33, clofun1, 3, 0));
Obj _35reg5092 = primSet(co, symcora_47lib_47toc_35generate_45toplevel_45group, makeNative(11, clofun1, 3, 0));
Obj _35reg5107 = primSet(co, symcora_47lib_47toc_35group_45by_45mod_45h, makeNative(5, clofun1, 4, 0));
Obj _35reg5118 = primSet(co, symcora_47lib_47toc_35generate_45entry, makeNative(42, clofun0, 2, 0));
Obj _35reg5129 = primSet(co, symcora_47lib_47toc_35generate_45c, makeNative(29, clofun0, 3, 0));
Obj _35reg5170 = primSet(co, symcora_47lib_47toc_35handle_45import_45eagerly, makeNative(22, clofun0, 1, 0));
Obj _35reg5211 = primSet(co, symcora_47lib_47toc_35split_45type_45and_45code, makeNative(15, clofun0, 4, 0));
Obj _35reg5212 = primSet(co, symcora_47lib_47infer_35_42typecheck_42, False);
Obj _35reg5215 = primSet(co, symcora_47lib_47toc_35preprocess, makeNative(12, clofun0, 1, 0));
Obj _35reg5224 = primSet(co, symcora_47lib_47toc_35compile_45to_45c, makeNative(5, clofun0, 2, 0));
__nargs = 2;
__arg1 = _35reg5224;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj from = __arg1;
Obj to = __arg2;
Obj _35reg5216 = primGenSym(symcollect);
Obj globals = _35reg5216;
Obj _35reg5217 = primSet(co, globals, Nil);
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
Obj _35val5218 = __arg1;
Obj from= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 7, clofun0, 3, _35val5218, to, globals);
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
Obj _35val5219 = __arg1;
Obj _35val5218= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 8, clofun0, 3, _35val5218, to, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = _35val5219;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val5220 = __arg1;
Obj _35val5218= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 9, clofun0, 2, to, globals);
__nargs = 2;
__arg0 = _35val5218;
__arg1 = _35val5220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val5221 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj bc = _35val5221;
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
Obj _35val5222 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stream = _35val5222;
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
Obj _35val5223 = __arg1;
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
Obj _35val5213 = __arg1;
Obj sexp = _35val5213;
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
Obj _35val5214 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg1 = sexp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35p3515 = __arg1;
Obj _35p3516 = __arg2;
Obj _35p3517 = __arg3;
Obj _35p3518 = co->args[4];
Obj _35cc3519 = makeNative(18, clofun0, 0, 4, _35p3515, _35p3516, _35p3517, _35p3518);
Obj _35reg5208 = PRIM_EQ(Nil, _35p3515);
if (True == _35reg5208) {
Obj type = _35p3516;
Obj code = _35p3517;
Obj k = _35p3518;
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
__arg0 = _35cc3519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val5209 = __arg1;
Obj code= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 17, clofun0, 2, k, _35val5209);
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
Obj _35val5210 = __arg1;
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35val5209= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = k;
__arg1 = _35val5209;
__arg2 = _35val5210;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35cc3520 = makeNative(19, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg5197 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg5197) {
Obj _35reg5198 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5199 = PRIM_ISCONS(_35reg5198);
if (True == _35reg5199) {
Obj _35reg5200 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5201 = PRIM_CAR(_35reg5200);
Obj _35reg5202 = PRIM_EQ(sym_58type, _35reg5201);
if (True == _35reg5202) {
Obj _35reg5203 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5204 = PRIM_CDR(_35reg5203);
Obj exp = _35reg5204;
Obj _35reg5205 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg5205;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg5206 = makeCons(symbegin, exp);
Obj _35reg5207 = makeCons(_35reg5206, type);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = _35reg5207;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3520;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35cc3521 = makeNative(20, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg5186 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg5186) {
Obj _35reg5187 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5188 = PRIM_ISCONS(_35reg5187);
if (True == _35reg5188) {
Obj _35reg5189 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5190 = PRIM_CAR(_35reg5189);
Obj _35reg5191 = PRIM_EQ(sym_58declare, _35reg5190);
if (True == _35reg5191) {
Obj _35reg5192 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5193 = PRIM_CDR(_35reg5192);
Obj exp = _35reg5193;
Obj _35reg5194 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg5194;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg5195 = makeCons(symdeclare, exp);
Obj _35reg5196 = makeCons(_35reg5195, type);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = _35reg5196;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3521;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3521;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3521;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc3522 = makeNative(21, clofun0, 0, 0);
Obj _35reg5171 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg5171) {
Obj _35reg5172 = PRIM_CAR(closureRef(co, 0));
Obj exp = _35reg5172;
Obj _35reg5173 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg5173;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg5174 = makeCons(exp, Nil);
Obj _35reg5175 = makeCons(symbackquote, _35reg5174);
Obj _35reg5176 = makeCons(_35reg5175, Nil);
Obj _35reg5177 = makeCons(symmacroexpand, _35reg5176);
Obj _35reg5178 = makeCons(symtvar, Nil);
Obj _35reg5179 = makeCons(Nil, Nil);
Obj _35reg5180 = makeCons(Nil, _35reg5179);
Obj _35reg5181 = makeCons(_35reg5178, _35reg5180);
Obj _35reg5182 = makeCons(_35reg5177, _35reg5181);
Obj _35reg5183 = makeCons(symcora_47lib_47infer_35check_45type, _35reg5182);
Obj _35reg5184 = makeCons(_35reg5183, type);
Obj _35reg5185 = makeCons(exp, code);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = _35reg5184;
__arg3 = _35reg5185;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3522;
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
Obj _35p3509 = __arg1;
Obj _35cc3510 = makeNative(23, clofun0, 0, 1, _35p3509);
Obj _35reg5161 = PRIM_ISCONS(_35p3509);
if (True == _35reg5161) {
Obj _35reg5162 = PRIM_CAR(_35p3509);
Obj _35reg5163 = PRIM_EQ(symdefine_45library, _35reg5162);
if (True == _35reg5163) {
Obj _35reg5164 = PRIM_CDR(_35p3509);
Obj _35reg5165 = PRIM_ISCONS(_35reg5164);
if (True == _35reg5165) {
Obj _35reg5166 = PRIM_CDR(_35p3509);
Obj _35reg5167 = PRIM_CAR(_35reg5166);
Obj __ = _35reg5167;
Obj _35reg5168 = PRIM_CDR(_35p3509);
Obj _35reg5169 = PRIM_CDR(_35reg5168);
Obj remain = _35reg5169;
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
__arg0 = _35cc3510;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3510;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3510;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35cc3511 = makeNative(24, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg5157 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg5157) {
Obj _35reg5158 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5159 = PRIM_EQ(symbegin, _35reg5158);
if (True == _35reg5159) {
Obj _35reg5160 = PRIM_CDR(closureRef(co, 0));
Obj remain = _35reg5160;
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
__arg0 = _35cc3511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _35cc3512 = makeNative(25, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg5148 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg5148) {
Obj _35reg5149 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5150 = PRIM_ISCONS(_35reg5149);
if (True == _35reg5150) {
Obj _35reg5151 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5152 = PRIM_CAR(_35reg5151);
Obj _35reg5153 = PRIM_EQ(symexport, _35reg5152);
if (True == _35reg5153) {
Obj _35reg5154 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5155 = PRIM_CDR(_35reg5154);
Obj more = _35reg5155;
Obj _35reg5156 = PRIM_CDR(closureRef(co, 0));
Obj remain = _35reg5156;
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
__arg0 = _35cc3512;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3512;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3512;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35cc3513 = makeNative(27, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg5130 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg5130) {
Obj _35reg5131 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5132 = PRIM_ISCONS(_35reg5131);
if (True == _35reg5132) {
Obj _35reg5133 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5134 = PRIM_CAR(_35reg5133);
Obj _35reg5135 = PRIM_EQ(symimport, _35reg5134);
if (True == _35reg5135) {
Obj _35reg5136 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5137 = PRIM_CDR(_35reg5136);
Obj _35reg5138 = PRIM_ISCONS(_35reg5137);
if (True == _35reg5138) {
Obj _35reg5139 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5140 = PRIM_CDR(_35reg5139);
Obj _35reg5141 = PRIM_CAR(_35reg5140);
Obj pkg = _35reg5141;
Obj _35reg5142 = PRIM_CAR(closureRef(co, 0));
Obj _35reg5143 = PRIM_CDR(_35reg5142);
Obj _35reg5144 = PRIM_CDR(_35reg5143);
Obj _35reg5145 = PRIM_EQ(Nil, _35reg5144);
if (True == _35reg5145) {
Obj _35reg5146 = PRIM_CDR(closureRef(co, 0));
Obj remain = _35reg5146;
PUSH_CONT(co, 26, clofun0, 1, remain);
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
__arg0 = _35cc3513;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3513;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3513;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3513;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3513;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35val5147 = __arg1;
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
Obj _35cc3514 = makeNative(28, clofun0, 0, 0);
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
PUSH_CONT(co, 30, clofun0, 3, bc, globals, to);
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
Obj _35val5119 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups = _35val5119;
PUSH_CONT(co, 31, clofun0, 3, globals, to, groups);
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
Obj _35val5120 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj maxid = _35val5120;
PUSH_CONT(co, 32, clofun0, 4, globals, to, maxid, groups);
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
Obj _35val5121 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 33, clofun0, 4, globals, to, maxid, groups);
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
Obj _35val5122 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 34, clofun0, 4, globals, to, maxid, groups);
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
Obj _35val5125 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 35, clofun0, 4, globals, to, maxid, groups);
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
Obj _35val5126 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 36, clofun0, 3, to, maxid, groups);
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
Obj _35val5127 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 37, clofun0, 3, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45entry);
__arg1 = to;
__arg2 = _35val5127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _35val5128 = __arg1;
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
PUSH_CONT(co, 40, clofun0, 0);
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
Obj _35val5123 = __arg1;
PUSH_CONT(co, 41, clofun0, 0);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35code_45gen_45func_45declare);
__arg1 = closureRef(co, 1);
__arg2 = _35val5123;
__arg3 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val5124 = __arg1;
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
PUSH_CONT(co, 43, clofun0, 2, globals, to);
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
Obj _35val5110 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 44, clofun0, 2, globals, to);
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
Obj _35val5111 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 45, clofun0, 1, to);
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
Obj _35val5117 = __arg1;
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
PUSH_CONT(co, 47, clofun0, 1, sym);
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
Obj _35val5112 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 48, clofun0, 1, sym);
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
Obj _35val5113 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 49, clofun0, 1, sym);
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
Obj _35val5114 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 0, clofun1, 0);
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
Obj _35val5115 = __arg1;
PUSH_CONT(co, 1, clofun1, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = _35val5115;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val5116 = __arg1;
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
PUSH_CONT(co, 3, clofun1, 1, sym);
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
Obj _35val5108 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 4, clofun1, 0);
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
Obj _35val5109 = __arg1;
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
Obj _35p3503 = __arg1;
Obj _35p3504 = __arg2;
Obj _35p3505 = __arg3;
Obj _35p3506 = co->args[4];
Obj _35cc3507 = makeNative(8, clofun1, 0, 4, _35p3503, _35p3504, _35p3505, _35p3506);
Obj res = _35p3503;
Obj idx = _35p3504;
Obj acc = _35p3505;
Obj _35reg5102 = PRIM_EQ(Nil, _35p3506);
if (True == _35reg5102) {
PUSH_CONT(co, 6, clofun1, 2, acc, res);
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
__arg0 = _35cc3507;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val5103 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg5104 = primNot(_35val5103);
if (True == _35reg5104) {
PUSH_CONT(co, 7, clofun1, 1, res);
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
Obj _35val5105 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg5106 = makeCons(_35val5105, res);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = _35reg5106;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc3508 = makeNative(10, clofun1, 0, 0);
Obj res = closureRef(co, 0);
Obj idx = closureRef(co, 1);
Obj acc = closureRef(co, 2);
Obj _35reg5093 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg5093) {
Obj _35reg5094 = PRIM_CAR(closureRef(co, 3));
Obj bc = _35reg5094;
Obj _35reg5095 = PRIM_CDR(closureRef(co, 3));
Obj more = _35reg5095;
Obj _35reg5096 = PRIM_EQ(idx, globalRef(symcora_47lib_47toc_35_42mod_45num_42));
if (True == _35reg5096) {
PUSH_CONT(co, 9, clofun1, 3, res, bc, more);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = acc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg5100 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj _35reg5101 = makeCons(bc, acc);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = res;
__arg2 = _35reg5100;
__arg3 = _35reg5101;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3508;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val5097 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg5098 = makeCons(_35val5097, res);
Obj _35reg5099 = makeCons(bc, more);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = _35reg5098;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = _35reg5099;
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
PUSH_CONT(co, 12, clofun1, 3, maxid, group, to);
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
Obj _35val5072 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 13, clofun1, 3, maxid, group, to);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35code_45gen_45func_45declare);
__arg1 = to;
__arg2 = _35val5072;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val5073 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 14, clofun1, 3, maxid, group, to);
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
Obj _35val5074 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 15, clofun1, 3, maxid, group, to);
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
Obj _35val5075 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 16, clofun1, 3, maxid, group, to);
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
Obj _35val5076 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 17, clofun1, 3, maxid, group, to);
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
Obj _35val5077 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 18, clofun1, 3, maxid, group, to);
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
Obj _35val5078 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 19, clofun1, 3, maxid, group, to);
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
Obj _35val5079 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 20, clofun1, 3, maxid, group, to);
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
Obj _35val5080 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 21, clofun1, 3, maxid, group, to);
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
Obj _35val5081 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 22, clofun1, 3, maxid, group, to);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45jumptable);
__arg1 = to;
__arg2 = MAKE_NUMBER(0);
__arg3 = _35val5081;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _35val5082 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 23, clofun1, 3, maxid, group, to);
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
Obj _35val5083 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 24, clofun1, 3, maxid, group, to);
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
Obj _35val5084 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 25, clofun1, 1, to);
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
Obj _35val5085 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 26, clofun1, 1, to);
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
Obj _35val5086 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 27, clofun1, 1, to);
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
Obj _35val5087 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 28, clofun1, 1, to);
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
Obj _35val5088 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 29, clofun1, 1, to);
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
Obj _35val5089 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 30, clofun1, 1, to);
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
Obj _35val5090 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 31, clofun1, 1, to);
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
Obj _35val5091 = __arg1;
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
Obj _35reg5065 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == _35reg5065) {
PUSH_CONT(co, 36, clofun1, 2, to, n);
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
Obj _35reg5067 = PRIM_LT(i, n);
if (True == _35reg5067) {
PUSH_CONT(co, 34, clofun1, 3, i, to, n);
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
Obj _35val5068 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 35, clofun1, 3, i, to, n);
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
Obj _35val5069 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg5070 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45jumptable);
__arg1 = to;
__arg2 = _35reg5070;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35val5066 = __arg1;
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
Obj _35p3499 = __arg1;
Obj _35p3500 = __arg2;
Obj _35cc3501 = makeNative(38, clofun1, 0, 2, _35p3499, _35p3500);
Obj fn = _35p3499;
Obj _35reg5063 = PRIM_EQ(Nil, _35p3500);
if (True == _35reg5063) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3501;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35cc3502 = makeNative(40, clofun1, 0, 0);
Obj fn = closureRef(co, 0);
Obj _35reg5059 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg5059) {
Obj _35reg5060 = PRIM_CAR(closureRef(co, 1));
Obj x = _35reg5060;
Obj _35reg5061 = PRIM_CDR(closureRef(co, 1));
Obj y = _35reg5061;
PUSH_CONT(co, 39, clofun1, 2, fn, y);
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
__arg0 = _35cc3502;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _35val5062 = __arg1;
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
PUSH_CONT(co, 42, clofun1, 1, exp);
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
Obj _35val5053 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 43, clofun1, 0);
__nargs = 2;
__arg0 = _35val5053;
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _35val5054 = __arg1;
PUSH_CONT(co, 44, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert_45pass);
__arg1 = _35val5054;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val5055 = __arg1;
PUSH_CONT(co, 45, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45pass);
__arg1 = _35val5055;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35val5056 = __arg1;
PUSH_CONT(co, 46, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack_45pass);
__arg1 = _35val5056;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _35val5057 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda_45pass);
__arg1 = _35val5057;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj exp = __arg1;
PUSH_CONT(co, 48, clofun1, 1, exp);
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
Obj _35val5050 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj obj = _35val5050;
PUSH_CONT(co, 49, clofun1, 1, obj);
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
Obj _35val5051 = __arg1;
Obj obj= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fns = _35val5051;
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
Obj _35p3495 = __arg1;
Obj _35p3496 = __arg2;
Obj _35cc3497 = makeNative(1, clofun2, 0, 2, _35p3495, _35p3496);
Obj obj = _35p3495;
Obj _35reg5048 = PRIM_EQ(Nil, _35p3496);
if (True == _35reg5048) {
__nargs = 2;
__arg1 = obj;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3497;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35cc3498 = makeNative(2, clofun2, 0, 0);
Obj obj = closureRef(co, 0);
Obj _35reg5043 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg5043) {
Obj _35reg5044 = PRIM_CAR(closureRef(co, 1));
Obj hd = _35reg5044;
Obj _35reg5045 = PRIM_CDR(closureRef(co, 1));
Obj more = _35reg5045;
Obj _35reg5046 = makeCons(obj, Nil);
Obj _35reg5047 = makeCons(hd, _35reg5046);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35rewrite_45_45_62macro);
__arg1 = _35reg5047;
__arg2 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3498;
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
PUSH_CONT(co, 4, clofun2, 1, exp);
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
Obj _35val5033 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v = _35val5033;
PUSH_CONT(co, 5, clofun2, 2, exp, v);
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
Obj _35val5034 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 6, clofun2, 2, exp, v);
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
Obj _35val5035 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 7, clofun2, 1, v);
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
Obj _35val5036 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1 = _35val5036;
Obj _35reg5037 = makeCons(e1, Nil);
Obj _35reg5038 = makeCons(Nil, _35reg5037);
Obj _35reg5039 = makeCons(Nil, _35reg5038);
Obj _35reg5040 = makeCons(symlambda, _35reg5039);
PUSH_CONT(co, 8, clofun2, 1, v);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg5040;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val5041 = __arg1;
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
Obj _35p3490 = __arg1;
Obj _35p3491 = __arg2;
Obj _35p3492 = __arg3;
Obj _35cc3493 = makeNative(21, clofun2, 0, 3, _35p3490, _35p3491, _35p3492);
Obj w = _35p3490;
Obj _35reg4968 = PRIM_ISCONS(_35p3491);
if (True == _35reg4968) {
Obj _35reg4969 = PRIM_CAR(_35p3491);
Obj label = _35reg4969;
Obj _35reg4970 = PRIM_CDR(_35p3491);
Obj _35reg4971 = PRIM_ISCONS(_35reg4970);
if (True == _35reg4971) {
Obj _35reg4972 = PRIM_CDR(_35p3491);
Obj _35reg4973 = PRIM_CAR(_35reg4972);
Obj _35reg4974 = PRIM_ISCONS(_35reg4973);
if (True == _35reg4974) {
Obj _35reg4975 = PRIM_CDR(_35p3491);
Obj _35reg4976 = PRIM_CAR(_35reg4975);
Obj _35reg4977 = PRIM_CAR(_35reg4976);
Obj _35reg4978 = PRIM_EQ(symlambda, _35reg4977);
if (True == _35reg4978) {
Obj _35reg4979 = PRIM_CDR(_35p3491);
Obj _35reg4980 = PRIM_CAR(_35reg4979);
Obj _35reg4981 = PRIM_CDR(_35reg4980);
Obj _35reg4982 = PRIM_ISCONS(_35reg4981);
if (True == _35reg4982) {
Obj _35reg4983 = PRIM_CDR(_35p3491);
Obj _35reg4984 = PRIM_CAR(_35reg4983);
Obj _35reg4985 = PRIM_CDR(_35reg4984);
Obj _35reg4986 = PRIM_CAR(_35reg4985);
Obj params = _35reg4986;
Obj _35reg4987 = PRIM_CDR(_35p3491);
Obj _35reg4988 = PRIM_CAR(_35reg4987);
Obj _35reg4989 = PRIM_CDR(_35reg4988);
Obj _35reg4990 = PRIM_CDR(_35reg4989);
Obj _35reg4991 = PRIM_ISCONS(_35reg4990);
if (True == _35reg4991) {
Obj _35reg4992 = PRIM_CDR(_35p3491);
Obj _35reg4993 = PRIM_CAR(_35reg4992);
Obj _35reg4994 = PRIM_CDR(_35reg4993);
Obj _35reg4995 = PRIM_CDR(_35reg4994);
Obj _35reg4996 = PRIM_CAR(_35reg4995);
Obj actives = _35reg4996;
Obj _35reg4997 = PRIM_CDR(_35p3491);
Obj _35reg4998 = PRIM_CAR(_35reg4997);
Obj _35reg4999 = PRIM_CDR(_35reg4998);
Obj _35reg5000 = PRIM_CDR(_35reg4999);
Obj _35reg5001 = PRIM_CDR(_35reg5000);
Obj _35reg5002 = PRIM_ISCONS(_35reg5001);
if (True == _35reg5002) {
Obj _35reg5003 = PRIM_CDR(_35p3491);
Obj _35reg5004 = PRIM_CAR(_35reg5003);
Obj _35reg5005 = PRIM_CDR(_35reg5004);
Obj _35reg5006 = PRIM_CDR(_35reg5005);
Obj _35reg5007 = PRIM_CDR(_35reg5006);
Obj _35reg5008 = PRIM_CAR(_35reg5007);
Obj body = _35reg5008;
Obj _35reg5009 = PRIM_CDR(_35p3491);
Obj _35reg5010 = PRIM_CAR(_35reg5009);
Obj _35reg5011 = PRIM_CDR(_35reg5010);
Obj _35reg5012 = PRIM_CDR(_35reg5011);
Obj _35reg5013 = PRIM_CDR(_35reg5012);
Obj _35reg5014 = PRIM_CDR(_35reg5013);
Obj _35reg5015 = PRIM_EQ(Nil, _35reg5014);
if (True == _35reg5015) {
Obj _35reg5016 = PRIM_CDR(_35p3491);
Obj _35reg5017 = PRIM_CDR(_35reg5016);
Obj _35reg5018 = PRIM_EQ(Nil, _35reg5017);
if (True == _35reg5018) {
Obj maxid = _35p3492;
PUSH_CONT(co, 14, clofun2, 6, actives, maxid, label, params, body, w);
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
__arg0 = _35cc3493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3493;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val5019 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _35reg5020 = PRIM_SUB(maxid, label);
PUSH_CONT(co, 15, clofun2, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = _35reg5020;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val5021 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
PUSH_CONT(co, 16, clofun2, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = _35val5021;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val5022 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
PUSH_CONT(co, 17, clofun2, 6, actives, maxid, label, params, body, w);
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
Obj _35val5023 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
PUSH_CONT(co, 18, clofun2, 6, actives, maxid, label, params, body, w);
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
Obj _35val5024 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
PUSH_CONT(co, 19, clofun2, 5, maxid, label, params, body, w);
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
Obj _35val5025 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _35reg5026 = makeCons(maxid, label);
PUSH_CONT(co, 20, clofun2, 1, w);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = _35reg5026;
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
Obj _35val5027 = __arg1;
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
Obj _35cc3494 = makeNative(24, clofun2, 0, 0);
Obj w = closureRef(co, 0);
Obj other = closureRef(co, 1);
Obj maxid = closureRef(co, 2);
PUSH_CONT(co, 22, clofun2, 1, other);
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
Obj _35val4966 = __arg1;
Obj other= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 23, clofun2, 0);
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
Obj _35val4967 = __arg1;
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
Obj _35p3484 = __arg1;
Obj _35p3485 = __arg2;
Obj _35p3486 = __arg3;
Obj _35p3487 = co->args[4];
Obj _35cc3488 = makeNative(26, clofun2, 0, 4, _35p3484, _35p3485, _35p3486, _35p3487);
Obj fn = _35p3484;
Obj w = _35p3485;
Obj idx = _35p3486;
Obj _35reg4964 = PRIM_EQ(Nil, _35p3487);
if (True == _35reg4964) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3488;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35cc3489 = makeNative(28, clofun2, 0, 0);
Obj fn = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj idx = closureRef(co, 2);
Obj _35reg4959 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg4959) {
Obj _35reg4960 = PRIM_CAR(closureRef(co, 3));
Obj a = _35reg4960;
Obj _35reg4961 = PRIM_CDR(closureRef(co, 3));
Obj b = _35reg4961;
PUSH_CONT(co, 27, clofun2, 4, idx, fn, w, b);
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
__arg0 = _35cc3489;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35val4962 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _35reg4963 = PRIM_ADD(idx, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45args_45reverse);
__arg1 = fn;
__arg2 = w;
__arg3 = _35reg4963;
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
PUSH_CONT(co, 30, clofun2, 3, var, i, w);
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
Obj _35val4954 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 31, clofun2, 2, i, w);
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
Obj _35val4955 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 32, clofun2, 2, i, w);
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
Obj _35val4956 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 33, clofun2, 1, w);
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
Obj _35val4957 = __arg1;
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
PUSH_CONT(co, 35, clofun2, 3, var, i, w);
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
Obj _35val4946 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 36, clofun2, 2, i, w);
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
Obj _35val4947 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4948 = PRIM_LT(i, MAKE_NUMBER(4));
if (True == _35reg4948) {
PUSH_CONT(co, 39, clofun2, 2, i, w);
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
PUSH_CONT(co, 37, clofun2, 2, i, w);
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
Obj _35val4951 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 38, clofun2, 1, w);
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
Obj _35val4952 = __arg1;
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
Obj _35val4949 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 40, clofun2, 1, w);
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
Obj _35val4950 = __arg1;
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
PUSH_CONT(co, 42, clofun2, 3, label, maxid, w);
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
Obj _35val4942 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 43, clofun2, 1, w);
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
Obj _35val4943 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 44, clofun2, 1, w);
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
Obj _35val4944 = __arg1;
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
Obj _35reg4938 = PRIM_SUB(maxid, label);
Obj _35reg4939 = primDiv(_35reg4938, globalRef(symcora_47lib_47toc_35_42mod_45num_42));
Obj gid = _35reg4939;
PUSH_CONT(co, 46, clofun2, 2, w, gid);
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
Obj _35val4940 = __arg1;
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
Obj _35p3477 = __arg1;
Obj _35p3478 = __arg2;
Obj _35p3479 = __arg3;
Obj _35p3480 = co->args[4];
Obj _35p3481 = co->args[5];
Obj _35cc3482 = makeNative(49, clofun2, 0, 5, _35p3477, _35p3478, _35p3479, _35p3480, _35p3481);
Obj self = _35p3477;
Obj env = _35p3478;
Obj fn = _35p3479;
Obj w = _35p3480;
Obj _35reg4934 = PRIM_EQ(Nil, _35p3481);
if (True == _35reg4934) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3482;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj _35cc3483 = makeNative(3, clofun3, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj fn = closureRef(co, 2);
Obj w = closureRef(co, 3);
Obj _35reg4927 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg4927) {
Obj _35reg4928 = PRIM_CAR(closureRef(co, 4));
Obj a = _35reg4928;
Obj _35reg4929 = PRIM_CDR(closureRef(co, 4));
Obj b = _35reg4929;
PUSH_CONT(co, 0, clofun3, 5, self, env, fn, w, b);
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
__arg0 = _35cc3483;
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
Obj _35val4930 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
PUSH_CONT(co, 1, clofun3, 5, self, env, fn, w, b);
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
Obj _35val4931 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _35reg4932 = primNot(_35val4931);
if (True == _35reg4932) {
PUSH_CONT(co, 2, clofun3, 5, self, env, fn, w, b);
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
Obj _35val4933 = __arg1;
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
Obj _35p3473 = __arg1;
Obj _35p3474 = __arg2;
Obj _35p3475 = __arg3;
Obj _35cc3476 = makeNative(17, clofun3, 0, 0);
Obj self = _35p3473;
Obj w = _35p3474;
Obj _35reg4902 = PRIM_ISCONS(_35p3475);
if (True == _35reg4902) {
Obj _35reg4903 = PRIM_CAR(_35p3475);
Obj _35reg4904 = PRIM_EQ(sym_37continuation, _35reg4903);
if (True == _35reg4904) {
Obj _35reg4905 = PRIM_CDR(_35p3475);
Obj _35reg4906 = PRIM_ISCONS(_35reg4905);
if (True == _35reg4906) {
Obj _35reg4907 = PRIM_CDR(_35p3475);
Obj _35reg4908 = PRIM_CAR(_35reg4907);
Obj label = _35reg4908;
Obj _35reg4909 = PRIM_CDR(_35p3475);
Obj _35reg4910 = PRIM_CDR(_35reg4909);
Obj stacks = _35reg4910;
PUSH_CONT(co, 5, clofun3, 4, label, self, stacks, w);
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
__arg0 = _35cc3476;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3476;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3476;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val4911 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _35reg4912 = PRIM_CAR(self);
Obj _35reg4913 = PRIM_SUB(_35reg4912, label);
PUSH_CONT(co, 6, clofun3, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = _35reg4913;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val4914 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 7, clofun3, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = _35val4914;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val4915 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 8, clofun3, 4, label, self, stacks, w);
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
Obj _35val4916 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _35reg4917 = PRIM_CAR(self);
PUSH_CONT(co, 9, clofun3, 3, self, stacks, w);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = w;
__arg2 = label;
__arg3 = _35reg4917;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val4918 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 10, clofun3, 3, self, stacks, w);
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

label10:
{
Obj _35val4919 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 11, clofun3, 3, self, stacks, w);
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
Obj _35val4920 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 12, clofun3, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = _35val4920;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val4921 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 13, clofun3, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val4922 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg4923 = primNot(_35val4922);
if (True == _35reg4923) {
PUSH_CONT(co, 14, clofun3, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(15, clofun3, 1, 2, self, w);
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

label14:
{
Obj _35val4925 = __arg1;
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

label15:
{
Obj x = __arg1;
PUSH_CONT(co, 16, clofun3, 1, x);
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

label16:
{
Obj _35val4924 = __arg1;
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

label17:
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

label18:
{
Obj self = __arg1;
Obj env = __arg2;
Obj w = __arg3;
Obj x1 = co->args[4];
Obj _35reg4629 = primIsSymbol(x1);
if (True == _35reg4629) {
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
Obj _35cc3460 = makeNative(21, clofun3, 0, 4, self, env, x1, w);
Obj _35reg4889 = PRIM_ISCONS(x1);
if (True == _35reg4889) {
Obj _35reg4890 = PRIM_CAR(x1);
Obj _35reg4891 = PRIM_EQ(sym_37global, _35reg4890);
if (True == _35reg4891) {
Obj _35reg4892 = PRIM_CDR(x1);
Obj _35reg4893 = PRIM_ISCONS(_35reg4892);
if (True == _35reg4893) {
Obj _35reg4894 = PRIM_CDR(x1);
Obj _35reg4895 = PRIM_CAR(_35reg4894);
Obj x = _35reg4895;
Obj _35reg4896 = PRIM_CDR(x1);
Obj _35reg4897 = PRIM_CDR(_35reg4896);
Obj _35reg4898 = PRIM_EQ(Nil, _35reg4897);
if (True == _35reg4898) {
PUSH_CONT(co, 19, clofun3, 2, x, w);
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
__arg0 = _35cc3460;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3460;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3460;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3460;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label19:
{
Obj _35val4899 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 20, clofun3, 1, w);
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

label20:
{
Obj _35val4900 = __arg1;
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

label21:
{
Obj _35cc3461 = makeNative(24, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg4877 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg4877) {
Obj _35reg4878 = PRIM_CAR(closureRef(co, 2));
Obj _35reg4879 = PRIM_EQ(sym_37closure_45ref, _35reg4878);
if (True == _35reg4879) {
Obj _35reg4880 = PRIM_CDR(closureRef(co, 2));
Obj _35reg4881 = PRIM_ISCONS(_35reg4880);
if (True == _35reg4881) {
Obj _35reg4882 = PRIM_CDR(closureRef(co, 2));
Obj _35reg4883 = PRIM_CAR(_35reg4882);
Obj idx = _35reg4883;
Obj _35reg4884 = PRIM_CDR(closureRef(co, 2));
Obj _35reg4885 = PRIM_CDR(_35reg4884);
Obj _35reg4886 = PRIM_EQ(Nil, _35reg4885);
if (True == _35reg4886) {
PUSH_CONT(co, 22, clofun3, 1, idx);
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
__arg0 = _35cc3461;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3461;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3461;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3461;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35val4887 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 23, clofun3, 0);
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

label23:
{
Obj _35val4888 = __arg1;
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

label24:
{
Obj _35cc3462 = makeNative(27, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg4865 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg4865) {
Obj _35reg4866 = PRIM_CAR(closureRef(co, 2));
Obj _35reg4867 = PRIM_EQ(sym_37stack_45ref, _35reg4866);
if (True == _35reg4867) {
Obj _35reg4868 = PRIM_CDR(closureRef(co, 2));
Obj _35reg4869 = PRIM_ISCONS(_35reg4868);
if (True == _35reg4869) {
Obj _35reg4870 = PRIM_CDR(closureRef(co, 2));
Obj _35reg4871 = PRIM_CAR(_35reg4870);
Obj idx = _35reg4871;
Obj _35reg4872 = PRIM_CDR(closureRef(co, 2));
Obj _35reg4873 = PRIM_CDR(_35reg4872);
Obj _35reg4874 = PRIM_EQ(Nil, _35reg4873);
if (True == _35reg4874) {
PUSH_CONT(co, 25, clofun3, 1, idx);
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
__arg0 = _35cc3462;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3462;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3462;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3462;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35val4875 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 26, clofun3, 0);
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

label26:
{
Obj _35val4876 = __arg1;
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

label27:
{
Obj _35cc3463 = makeNative(35, clofun3, 0, 4, closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 3));
Obj _35reg4843 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg4843) {
Obj _35reg4844 = PRIM_CAR(closureRef(co, 2));
Obj _35reg4845 = PRIM_EQ(sym_37const, _35reg4844);
if (True == _35reg4845) {
Obj _35reg4846 = PRIM_CDR(closureRef(co, 2));
Obj _35reg4847 = PRIM_ISCONS(_35reg4846);
if (True == _35reg4847) {
Obj _35reg4848 = PRIM_CDR(closureRef(co, 2));
Obj _35reg4849 = PRIM_CAR(_35reg4848);
Obj x = _35reg4849;
Obj _35reg4850 = PRIM_CDR(closureRef(co, 2));
Obj _35reg4851 = PRIM_CDR(_35reg4850);
Obj _35reg4852 = PRIM_EQ(Nil, _35reg4851);
if (True == _35reg4852) {
Obj _35reg4853 = primIsSymbol(x);
if (True == _35reg4853) {
PUSH_CONT(co, 34, clofun3, 1, x);
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
PUSH_CONT(co, 28, clofun3, 1, x);
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
__arg0 = _35cc3463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35val4855 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _35val4855) {
PUSH_CONT(co, 32, clofun3, 1, x);
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
Obj _35reg4858 = primIsString(x);
if (True == _35reg4858) {
PUSH_CONT(co, 29, clofun3, 1, x);
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
Obj _35reg4862 = PRIM_EQ(x, Nil);
if (True == _35reg4862) {
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
Obj _35reg4863 = PRIM_EQ(x, True);
if (True == _35reg4863) {
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
Obj _35reg4864 = PRIM_EQ(x, False);
if (True == _35reg4864) {
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

label29:
{
Obj _35val4859 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 30, clofun3, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35escape_45str);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val4860 = __arg1;
PUSH_CONT(co, 31, clofun3, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = _35val4860;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val4861 = __arg1;
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

label32:
{
Obj _35val4856 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 33, clofun3, 0);
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

label33:
{
Obj _35val4857 = __arg1;
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
Obj _35val4854 = __arg1;
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

label35:
{
Obj _35cc3464 = makeNative(46, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg4804 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4804) {
Obj _35reg4805 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4806 = PRIM_EQ(symlet, _35reg4805);
if (True == _35reg4806) {
Obj _35reg4807 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4808 = PRIM_ISCONS(_35reg4807);
if (True == _35reg4808) {
Obj _35reg4809 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4810 = PRIM_CAR(_35reg4809);
Obj a = _35reg4810;
Obj _35reg4811 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4812 = PRIM_CDR(_35reg4811);
Obj _35reg4813 = PRIM_ISCONS(_35reg4812);
if (True == _35reg4813) {
Obj _35reg4814 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4815 = PRIM_CDR(_35reg4814);
Obj _35reg4816 = PRIM_CAR(_35reg4815);
Obj b = _35reg4816;
Obj _35reg4817 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4818 = PRIM_CDR(_35reg4817);
Obj _35reg4819 = PRIM_CDR(_35reg4818);
Obj _35reg4820 = PRIM_ISCONS(_35reg4819);
if (True == _35reg4820) {
Obj _35reg4821 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4822 = PRIM_CDR(_35reg4821);
Obj _35reg4823 = PRIM_CDR(_35reg4822);
Obj _35reg4824 = PRIM_CAR(_35reg4823);
Obj c = _35reg4824;
Obj _35reg4825 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4826 = PRIM_CDR(_35reg4825);
Obj _35reg4827 = PRIM_CDR(_35reg4826);
Obj _35reg4828 = PRIM_CDR(_35reg4827);
Obj _35reg4829 = PRIM_EQ(Nil, _35reg4828);
if (True == _35reg4829) {
PUSH_CONT(co, 36, clofun3, 3, b, a, c);
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
__arg0 = _35cc3464;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3464;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3464;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3464;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3464;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3464;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj _35val4830 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj idx = _35val4830;
Obj _35reg4831 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == _35reg4831) {
PUSH_CONT(co, 41, clofun3, 3, b, a, c);
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
PUSH_CONT(co, 37, clofun3, 3, b, a, c);
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

label37:
{
Obj _35val4838 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 38, clofun3, 3, b, a, c);
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

label38:
{
Obj _35val4839 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 39, clofun3, 2, a, c);
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

label39:
{
Obj _35val4840 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 40, clofun3, 2, a, c);
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

label40:
{
Obj _35val4841 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4842 = makeCons(a, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = _35reg4842;
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val4832 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 42, clofun3, 3, b, a, c);
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

label42:
{
Obj _35val4833 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 43, clofun3, 3, b, a, c);
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

label43:
{
Obj _35val4834 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 44, clofun3, 2, a, c);
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

label44:
{
Obj _35val4835 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 45, clofun3, 2, a, c);
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

label45:
{
Obj _35val4836 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4837 = makeCons(a, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = _35reg4837;
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _35cc3465 = makeNative(3, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg4780 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4780) {
Obj _35reg4781 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4782 = PRIM_ISCONS(_35reg4781);
if (True == _35reg4782) {
Obj _35reg4783 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4784 = PRIM_CAR(_35reg4783);
Obj _35reg4785 = PRIM_EQ(sym_37builtin, _35reg4784);
if (True == _35reg4785) {
Obj _35reg4786 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4787 = PRIM_CDR(_35reg4786);
Obj _35reg4788 = PRIM_ISCONS(_35reg4787);
if (True == _35reg4788) {
Obj _35reg4789 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4790 = PRIM_CDR(_35reg4789);
Obj _35reg4791 = PRIM_CAR(_35reg4790);
Obj f = _35reg4791;
Obj _35reg4792 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4793 = PRIM_CDR(_35reg4792);
Obj _35reg4794 = PRIM_CDR(_35reg4793);
Obj _35reg4795 = PRIM_EQ(Nil, _35reg4794);
if (True == _35reg4795) {
Obj _35reg4796 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg4796;
PUSH_CONT(co, 47, clofun3, 2, f, args);
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
__arg0 = _35cc3465;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3465;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3465;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3465;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3465;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _35val4797 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 48, clofun3, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = _35val4797;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35val4798 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4799 = PRIM_EQ(f, symset);
if (True == _35reg4799) {
PUSH_CONT(co, 1, clofun4, 1, args);
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
PUSH_CONT(co, 49, clofun3, 1, args);
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

label49:
{
Obj _35val4802 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 0, clofun4, 0);
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
Obj _35val4803 = __arg1;
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

label1:
{
Obj _35val4800 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 2, clofun4, 0);
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

label2:
{
Obj _35val4801 = __arg1;
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

label3:
{
Obj _35cc3466 = makeNative(10, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg4748 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4748) {
Obj _35reg4749 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4750 = PRIM_EQ(symif, _35reg4749);
if (True == _35reg4750) {
Obj _35reg4751 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4752 = PRIM_ISCONS(_35reg4751);
if (True == _35reg4752) {
Obj _35reg4753 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4754 = PRIM_CAR(_35reg4753);
Obj a = _35reg4754;
Obj _35reg4755 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4756 = PRIM_CDR(_35reg4755);
Obj _35reg4757 = PRIM_ISCONS(_35reg4756);
if (True == _35reg4757) {
Obj _35reg4758 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4759 = PRIM_CDR(_35reg4758);
Obj _35reg4760 = PRIM_CAR(_35reg4759);
Obj b = _35reg4760;
Obj _35reg4761 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4762 = PRIM_CDR(_35reg4761);
Obj _35reg4763 = PRIM_CDR(_35reg4762);
Obj _35reg4764 = PRIM_ISCONS(_35reg4763);
if (True == _35reg4764) {
Obj _35reg4765 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4766 = PRIM_CDR(_35reg4765);
Obj _35reg4767 = PRIM_CDR(_35reg4766);
Obj _35reg4768 = PRIM_CAR(_35reg4767);
Obj c = _35reg4768;
Obj _35reg4769 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4770 = PRIM_CDR(_35reg4769);
Obj _35reg4771 = PRIM_CDR(_35reg4770);
Obj _35reg4772 = PRIM_CDR(_35reg4771);
Obj _35reg4773 = PRIM_EQ(Nil, _35reg4772);
if (True == _35reg4773) {
PUSH_CONT(co, 4, clofun4, 3, a, b, c);
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
__arg0 = _35cc3466;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3466;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3466;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3466;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3466;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3466;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val4774 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 5, clofun4, 2, b, c);
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

label5:
{
Obj _35val4775 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 6, clofun4, 2, b, c);
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

label6:
{
Obj _35val4776 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 7, clofun4, 1, c);
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

label7:
{
Obj _35val4777 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 8, clofun4, 1, c);
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

label8:
{
Obj _35val4778 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 9, clofun4, 0);
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

label9:
{
Obj _35val4779 = __arg1;
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

label10:
{
Obj _35cc3467 = makeNative(24, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg4715 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4715) {
Obj _35reg4716 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4717 = PRIM_EQ(sym_37closure, _35reg4716);
if (True == _35reg4717) {
Obj _35reg4718 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4719 = PRIM_ISCONS(_35reg4718);
if (True == _35reg4719) {
Obj _35reg4720 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4721 = PRIM_CAR(_35reg4720);
Obj label = _35reg4721;
Obj _35reg4722 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4723 = PRIM_CDR(_35reg4722);
Obj _35reg4724 = PRIM_ISCONS(_35reg4723);
if (True == _35reg4724) {
Obj _35reg4725 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4726 = PRIM_CDR(_35reg4725);
Obj _35reg4727 = PRIM_CAR(_35reg4726);
Obj nargs = _35reg4727;
Obj _35reg4728 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4729 = PRIM_CDR(_35reg4728);
Obj _35reg4730 = PRIM_CDR(_35reg4729);
Obj frees = _35reg4730;
PUSH_CONT(co, 11, clofun4, 3, label, nargs, frees);
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
__arg0 = _35cc3467;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3467;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3467;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3467;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val4731 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg4732 = PRIM_CAR(closureRef(co, 1));
Obj _35reg4733 = PRIM_SUB(_35reg4732, label);
PUSH_CONT(co, 12, clofun4, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = _35reg4733;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val4734 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 13, clofun4, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = _35val4734;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val4735 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 14, clofun4, 3, label, nargs, frees);
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

label14:
{
Obj _35val4736 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg4737 = PRIM_CAR(closureRef(co, 1));
PUSH_CONT(co, 15, clofun4, 2, nargs, frees);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 3);
__arg2 = label;
__arg3 = _35reg4737;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val4738 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 16, clofun4, 2, nargs, frees);
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

label16:
{
Obj _35val4739 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 17, clofun4, 1, frees);
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

label17:
{
Obj _35val4740 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 18, clofun4, 1, frees);
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

label18:
{
Obj _35val4741 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 19, clofun4, 1, frees);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val4742 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 20, clofun4, 1, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = _35val4742;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val4743 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 21, clofun4, 1, frees);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj _35val4744 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg4745 = primNot(_35val4744);
if (True == _35reg4745) {
PUSH_CONT(co, 22, clofun4, 1, frees);
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

label22:
{
Obj _35val4746 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 23, clofun4, 0);
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

label23:
{
Obj _35val4747 = __arg1;
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

label24:
{
Obj _35cc3468 = makeNative(27, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 3));
Obj _35reg4696 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4696) {
Obj _35reg4697 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4698 = PRIM_EQ(symdo, _35reg4697);
if (True == _35reg4698) {
Obj _35reg4699 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4700 = PRIM_ISCONS(_35reg4699);
if (True == _35reg4700) {
Obj _35reg4701 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4702 = PRIM_CAR(_35reg4701);
Obj a = _35reg4702;
Obj _35reg4703 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4704 = PRIM_CDR(_35reg4703);
Obj _35reg4705 = PRIM_ISCONS(_35reg4704);
if (True == _35reg4705) {
Obj _35reg4706 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4707 = PRIM_CDR(_35reg4706);
Obj _35reg4708 = PRIM_CAR(_35reg4707);
Obj b = _35reg4708;
Obj _35reg4709 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4710 = PRIM_CDR(_35reg4709);
Obj _35reg4711 = PRIM_CDR(_35reg4710);
Obj _35reg4712 = PRIM_EQ(Nil, _35reg4711);
if (True == _35reg4712) {
PUSH_CONT(co, 25, clofun4, 1, b);
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
__arg0 = _35cc3468;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3468;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3468;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3468;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3468;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35val4713 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 26, clofun4, 1, b);
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

label26:
{
Obj _35val4714 = __arg1;
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

label27:
{
Obj _35cc3469 = makeNative(36, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 3));
Obj _35reg4676 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4676) {
Obj _35reg4677 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4678 = PRIM_EQ(symreturn, _35reg4677);
if (True == _35reg4678) {
Obj _35reg4679 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4680 = PRIM_ISCONS(_35reg4679);
if (True == _35reg4680) {
Obj _35reg4681 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4682 = PRIM_CAR(_35reg4681);
Obj x = _35reg4682;
Obj _35reg4683 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4684 = PRIM_CDR(_35reg4683);
Obj _35reg4685 = PRIM_EQ(Nil, _35reg4684);
if (True == _35reg4685) {
PUSH_CONT(co, 28, clofun4, 1, x);
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
__arg0 = _35cc3469;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3469;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3469;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3469;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35val4686 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 29, clofun4, 1, x);
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

label29:
{
Obj _35val4687 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 30, clofun4, 0);
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

label30:
{
Obj _35val4688 = __arg1;
PUSH_CONT(co, 31, clofun4, 0);
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

label31:
{
Obj _35val4689 = __arg1;
PUSH_CONT(co, 32, clofun4, 0);
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

label32:
{
Obj _35val4690 = __arg1;
PUSH_CONT(co, 33, clofun4, 0);
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

label33:
{
Obj _35val4691 = __arg1;
Obj _35reg4692 = PRIM_CDR(closureRef(co, 2));
Obj _35reg4693 = PRIM_CAR(closureRef(co, 2));
PUSH_CONT(co, 34, clofun4, 0);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 3);
__arg2 = _35reg4692;
__arg3 = _35reg4693;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _35val4694 = __arg1;
PUSH_CONT(co, 35, clofun4, 0);
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

label35:
{
Obj _35val4695 = __arg1;
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

label36:
{
Obj _35cc3470 = makeNative(37, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg4666 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4666) {
Obj _35reg4667 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4668 = PRIM_EQ(symtailcall, _35reg4667);
if (True == _35reg4668) {
Obj _35reg4669 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4670 = PRIM_ISCONS(_35reg4669);
if (True == _35reg4670) {
Obj _35reg4671 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4672 = PRIM_CAR(_35reg4671);
Obj exp = _35reg4672;
Obj _35reg4673 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4674 = PRIM_CDR(_35reg4673);
Obj _35reg4675 = PRIM_EQ(Nil, _35reg4674);
if (True == _35reg4675) {
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
__arg0 = _35cc3470;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3470;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3470;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3470;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _35cc3471 = makeNative(39, clofun4, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 3));
Obj _35reg4648 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4648) {
Obj _35reg4649 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4650 = PRIM_EQ(symcall, _35reg4649);
if (True == _35reg4650) {
Obj _35reg4651 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4652 = PRIM_ISCONS(_35reg4651);
if (True == _35reg4652) {
Obj _35reg4653 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4654 = PRIM_CAR(_35reg4653);
Obj exp = _35reg4654;
Obj _35reg4655 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4656 = PRIM_CDR(_35reg4655);
Obj _35reg4657 = PRIM_ISCONS(_35reg4656);
if (True == _35reg4657) {
Obj _35reg4658 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4659 = PRIM_CDR(_35reg4658);
Obj _35reg4660 = PRIM_CAR(_35reg4659);
Obj cont = _35reg4660;
Obj _35reg4661 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4662 = PRIM_CDR(_35reg4661);
Obj _35reg4663 = PRIM_CDR(_35reg4662);
Obj _35reg4664 = PRIM_EQ(Nil, _35reg4663);
if (True == _35reg4664) {
PUSH_CONT(co, 38, clofun4, 1, exp);
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
__arg0 = _35cc3471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35val4665 = __arg1;
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

label39:
{
Obj _35cc3472 = makeNative(1, clofun5, 0, 0);
Obj _35reg4630 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4630) {
Obj _35reg4631 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg4631;
Obj _35reg4632 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg4632;
PUSH_CONT(co, 40, clofun4, 2, f, args);
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
__arg0 = _35cc3472;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj _35val4633 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 41, clofun4, 2, f, args);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val4634 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4635 = PRIM_ADD(MAKE_NUMBER(1), _35val4634);
PUSH_CONT(co, 42, clofun4, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 2);
__arg2 = _35reg4635;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val4636 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 43, clofun4, 2, f, args);
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

label43:
{
Obj _35val4637 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4638 = makeCons(f, args);
PUSH_CONT(co, 44, clofun4, 0);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = MAKE_NUMBER(0);
co->args[4] = _35reg4638;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val4639 = __arg1;
PUSH_CONT(co, 45, clofun4, 0);
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

label45:
{
Obj _35val4640 = __arg1;
PUSH_CONT(co, 46, clofun4, 0);
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

label46:
{
Obj _35val4641 = __arg1;
PUSH_CONT(co, 47, clofun4, 0);
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

label47:
{
Obj _35val4642 = __arg1;
PUSH_CONT(co, 48, clofun4, 0);
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

label48:
{
Obj _35val4643 = __arg1;
Obj _35reg4644 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4645 = PRIM_CAR(closureRef(co, 1));
PUSH_CONT(co, 49, clofun4, 0);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 2);
__arg2 = _35reg4644;
__arg3 = _35reg4645;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35val4646 = __arg1;
PUSH_CONT(co, 0, clofun5, 0);
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
Obj _35val4647 = __arg1;
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

label1:
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

label2:
{
Obj sym = __arg1;
Obj globals = __arg2;
PUSH_CONT(co, 3, clofun5, 2, sym, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35value);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val4624 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val = _35val4624;
PUSH_CONT(co, 4, clofun5, 3, sym, val, globals);
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

label4:
{
Obj _35val4625 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _35val4625) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg4626 = makeCons(sym, val);
Obj _35reg4627 = primSet(co, globals, _35reg4626);
__nargs = 2;
__arg1 = _35reg4627;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label5:
{
Obj _35p3454 = __arg1;
Obj _35p3455 = __arg2;
Obj _35p3456 = __arg3;
Obj _35p3457 = co->args[4];
Obj _35cc3458 = makeNative(6, clofun5, 0, 4, _35p3454, _35p3455, _35p3456, _35p3457);
Obj self = _35p3454;
Obj w = _35p3455;
Obj i = _35p3456;
Obj _35reg4622 = PRIM_EQ(Nil, _35p3457);
if (True == _35reg4622) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3458;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc3459 = makeNative(18, clofun5, 0, 0);
Obj self = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj i = closureRef(co, 2);
Obj _35reg4604 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg4604) {
Obj _35reg4605 = PRIM_CAR(closureRef(co, 3));
Obj x = _35reg4605;
Obj _35reg4606 = PRIM_CDR(closureRef(co, 3));
Obj more = _35reg4606;
Obj _35reg4607 = PRIM_GT(i, MAKE_NUMBER(3));
Obj _35reg4608 = primNot(_35reg4607);
if (True == _35reg4608) {
PUSH_CONT(co, 13, clofun5, 5, x, i, self, w, more);
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
PUSH_CONT(co, 7, clofun5, 5, x, i, self, w, more);
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
__arg0 = _35cc3459;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val4615 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
PUSH_CONT(co, 8, clofun5, 5, x, i, self, w, more);
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

label8:
{
Obj _35val4616 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
PUSH_CONT(co, 9, clofun5, 5, x, i, self, w, more);
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

label9:
{
Obj _35val4617 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
PUSH_CONT(co, 10, clofun5, 5, x, i, self, w, more);
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

label10:
{
Obj _35val4618 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
PUSH_CONT(co, 11, clofun5, 4, i, self, w, more);
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

label11:
{
Obj _35val4619 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 12, clofun5, 4, i, self, w, more);
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

label12:
{
Obj _35val4620 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _35reg4621 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = self;
__arg2 = w;
__arg3 = _35reg4621;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val4609 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
PUSH_CONT(co, 14, clofun5, 5, x, i, self, w, more);
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

label14:
{
Obj _35val4610 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
PUSH_CONT(co, 15, clofun5, 5, x, i, self, w, more);
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

label15:
{
Obj _35val4611 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
PUSH_CONT(co, 16, clofun5, 4, i, self, w, more);
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

label16:
{
Obj _35val4612 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 17, clofun5, 4, i, self, w, more);
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

label17:
{
Obj _35val4613 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj _35reg4614 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = self;
__arg2 = w;
__arg3 = _35reg4614;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
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

label19:
{
Obj x = __arg1;
Obj k = __arg2;
Obj _35reg4597 = primGenSym(symreg);
Obj tmp = _35reg4597;
PUSH_CONT(co, 20, clofun5, 2, x, tmp);
__nargs = 2;
__arg0 = k;
__arg1 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val4598 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4599 = makeCons(_35val4598, Nil);
Obj _35reg4600 = makeCons(x, _35reg4599);
Obj _35reg4601 = makeCons(tmp, _35reg4600);
Obj _35reg4602 = makeCons(symlet, _35reg4601);
__nargs = 2;
__arg1 = _35reg4602;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label21:
{
Obj v = __arg1;
Obj val = __arg2;
PUSH_CONT(co, 22, clofun5, 2, val, v);
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

label22:
{
Obj _35val4589 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj idx = _35val4589;
PUSH_CONT(co, 23, clofun5, 3, val, idx, v);
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

label23:
{
Obj _35val4590 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cur = _35val4590;
Obj _35reg4591 = makeCons(val, Nil);
Obj _35reg4592 = makeCons(idx, _35reg4591);
Obj _35reg4593 = makeCons(_35reg4592, cur);
Obj cur1 = _35reg4593;
Obj _35reg4594 = PRIM_ADD(idx, MAKE_NUMBER(1));
PUSH_CONT(co, 24, clofun5, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35vector_45set_33);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
__arg3 = _35reg4594;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _35val4595 = __arg1;
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

label25:
{
Obj _35p3449 = __arg1;
Obj _35p3450 = __arg2;
Obj _35cc3451 = makeNative(41, clofun5, 0, 2, _35p3449, _35p3450);
Obj v = _35p3449;
Obj _35reg4492 = PRIM_ISCONS(_35p3450);
if (True == _35reg4492) {
Obj _35reg4493 = PRIM_CAR(_35p3450);
Obj clo_45or_45cont = _35reg4493;
Obj _35reg4494 = PRIM_CDR(_35p3450);
Obj _35reg4495 = PRIM_ISCONS(_35reg4494);
if (True == _35reg4495) {
Obj _35reg4496 = PRIM_CDR(_35p3450);
Obj _35reg4497 = PRIM_CAR(_35reg4496);
Obj _35reg4498 = PRIM_ISCONS(_35reg4497);
if (True == _35reg4498) {
Obj _35reg4499 = PRIM_CDR(_35p3450);
Obj _35reg4500 = PRIM_CAR(_35reg4499);
Obj _35reg4501 = PRIM_CAR(_35reg4500);
Obj _35reg4502 = PRIM_EQ(symlambda, _35reg4501);
if (True == _35reg4502) {
Obj _35reg4503 = PRIM_CDR(_35p3450);
Obj _35reg4504 = PRIM_CAR(_35reg4503);
Obj _35reg4505 = PRIM_CDR(_35reg4504);
Obj _35reg4506 = PRIM_ISCONS(_35reg4505);
if (True == _35reg4506) {
Obj _35reg4507 = PRIM_CDR(_35p3450);
Obj _35reg4508 = PRIM_CAR(_35reg4507);
Obj _35reg4509 = PRIM_CDR(_35reg4508);
Obj _35reg4510 = PRIM_CAR(_35reg4509);
Obj params = _35reg4510;
Obj _35reg4511 = PRIM_CDR(_35p3450);
Obj _35reg4512 = PRIM_CAR(_35reg4511);
Obj _35reg4513 = PRIM_CDR(_35reg4512);
Obj _35reg4514 = PRIM_CDR(_35reg4513);
Obj _35reg4515 = PRIM_ISCONS(_35reg4514);
if (True == _35reg4515) {
Obj _35reg4516 = PRIM_CDR(_35p3450);
Obj _35reg4517 = PRIM_CAR(_35reg4516);
Obj _35reg4518 = PRIM_CDR(_35reg4517);
Obj _35reg4519 = PRIM_CDR(_35reg4518);
Obj _35reg4520 = PRIM_CAR(_35reg4519);
Obj body = _35reg4520;
Obj _35reg4521 = PRIM_CDR(_35p3450);
Obj _35reg4522 = PRIM_CAR(_35reg4521);
Obj _35reg4523 = PRIM_CDR(_35reg4522);
Obj _35reg4524 = PRIM_CDR(_35reg4523);
Obj _35reg4525 = PRIM_CDR(_35reg4524);
Obj _35reg4526 = PRIM_EQ(Nil, _35reg4525);
if (True == _35reg4526) {
Obj _35reg4527 = PRIM_CDR(_35p3450);
Obj _35reg4528 = PRIM_CDR(_35reg4527);
Obj fvs = _35reg4528;
Obj _35reg4529 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == _35reg4529) {
if (True == True) {
PUSH_CONT(co, 36, clofun5, 4, params, v, fvs, clo_45or_45cont);
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
__arg0 = _35cc3451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg4549 = PRIM_EQ(clo_45or_45cont, sym_37continuation);
if (True == _35reg4549) {
if (True == True) {
PUSH_CONT(co, 31, clofun5, 4, params, v, fvs, clo_45or_45cont);
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
__arg0 = _35cc3451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
PUSH_CONT(co, 26, clofun5, 4, params, v, fvs, clo_45or_45cont);
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
__arg0 = _35cc3451;
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
__arg0 = _35cc3451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3451;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35val4569 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body1 = _35val4569;
PUSH_CONT(co, 27, clofun5, 5, body1, params, v, fvs, clo_45or_45cont);
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

label27:
{
Obj _35val4570 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj cur = _35val4570;
Obj _35reg4571 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == _35reg4571) {
Obj _35reg4572 = makeCons(body1, Nil);
Obj _35reg4573 = makeCons(Nil, _35reg4572);
Obj _35reg4574 = makeCons(params, _35reg4573);
Obj _35reg4575 = makeCons(symlambda, _35reg4574);
PUSH_CONT(co, 29, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg4575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4581 = makeCons(body1, Nil);
Obj _35reg4582 = makeCons(fvs, _35reg4581);
Obj _35reg4583 = makeCons(params, _35reg4582);
Obj _35reg4584 = makeCons(symlambda, _35reg4583);
PUSH_CONT(co, 28, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg4584;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35val4585 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg4586 = makeCons(cur, fvs);
Obj _35reg4587 = makeCons(clo_45or_45cont, _35reg4586);
__nargs = 2;
__arg1 = _35reg4587;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
Obj _35val4576 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 30, clofun5, 3, fvs, cur, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj _35val4577 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg4578 = makeCons(_35val4577, fvs);
Obj _35reg4579 = makeCons(cur, _35reg4578);
Obj _35reg4580 = makeCons(clo_45or_45cont, _35reg4579);
__nargs = 2;
__arg1 = _35reg4580;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj _35val4550 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body1 = _35val4550;
PUSH_CONT(co, 32, clofun5, 5, body1, params, v, fvs, clo_45or_45cont);
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
Obj _35val4551 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj cur = _35val4551;
Obj _35reg4552 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == _35reg4552) {
Obj _35reg4553 = makeCons(body1, Nil);
Obj _35reg4554 = makeCons(Nil, _35reg4553);
Obj _35reg4555 = makeCons(params, _35reg4554);
Obj _35reg4556 = makeCons(symlambda, _35reg4555);
PUSH_CONT(co, 34, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg4556;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4562 = makeCons(body1, Nil);
Obj _35reg4563 = makeCons(fvs, _35reg4562);
Obj _35reg4564 = makeCons(params, _35reg4563);
Obj _35reg4565 = makeCons(symlambda, _35reg4564);
PUSH_CONT(co, 33, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg4565;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _35val4566 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg4567 = makeCons(cur, fvs);
Obj _35reg4568 = makeCons(clo_45or_45cont, _35reg4567);
__nargs = 2;
__arg1 = _35reg4568;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj _35val4557 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 35, clofun5, 3, fvs, cur, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _35val4558 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg4559 = makeCons(_35val4558, fvs);
Obj _35reg4560 = makeCons(cur, _35reg4559);
Obj _35reg4561 = makeCons(clo_45or_45cont, _35reg4560);
__nargs = 2;
__arg1 = _35reg4561;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj _35val4530 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body1 = _35val4530;
PUSH_CONT(co, 37, clofun5, 5, body1, params, v, fvs, clo_45or_45cont);
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
Obj _35val4531 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj cur = _35val4531;
Obj _35reg4532 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == _35reg4532) {
Obj _35reg4533 = makeCons(body1, Nil);
Obj _35reg4534 = makeCons(Nil, _35reg4533);
Obj _35reg4535 = makeCons(params, _35reg4534);
Obj _35reg4536 = makeCons(symlambda, _35reg4535);
PUSH_CONT(co, 39, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg4536;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg4542 = makeCons(body1, Nil);
Obj _35reg4543 = makeCons(fvs, _35reg4542);
Obj _35reg4544 = makeCons(params, _35reg4543);
Obj _35reg4545 = makeCons(symlambda, _35reg4544);
PUSH_CONT(co, 38, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg4545;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35val4546 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg4547 = makeCons(cur, fvs);
Obj _35reg4548 = makeCons(clo_45or_45cont, _35reg4547);
__nargs = 2;
__arg1 = _35reg4548;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label39:
{
Obj _35val4537 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 40, clofun5, 3, fvs, cur, clo_45or_45cont);
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
Obj _35val4538 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg4539 = makeCons(_35val4538, fvs);
Obj _35reg4540 = makeCons(cur, _35reg4539);
Obj _35reg4541 = makeCons(clo_45or_45cont, _35reg4540);
__nargs = 2;
__arg1 = _35reg4541;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj _35cc3452 = makeNative(43, clofun5, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v = closureRef(co, 0);
Obj f_45args = closureRef(co, 1);
Obj _35reg4491 = PRIM_ISCONS(f_45args);
if (True == _35reg4491) {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = makeNative(42, clofun5, 1, 1, v);
__arg2 = f_45args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3452;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
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

label43:
{
Obj _35cc3453 = makeNative(44, clofun5, 0, 0);
Obj v = closureRef(co, 0);
Obj x = closureRef(co, 1);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label44:
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

label45:
{
Obj _35p3441 = __arg1;
Obj _35p3442 = __arg2;
Obj _35cc3443 = makeNative(47, clofun5, 0, 2, _35p3441, _35p3442);
Obj __ = _35p3441;
Obj x = _35p3442;
PUSH_CONT(co, 46, clofun5, 2, x, _35cc3443);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _35val4489 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35cc3443= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val4489) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3443;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _35cc3444 = makeNative(48, clofun5, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg4488 = primIsSymbol(var);
if (True == _35reg4488) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3444;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj _35cc3445 = makeNative(0, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg4467 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg4467) {
Obj _35reg4468 = PRIM_CAR(closureRef(co, 1));
Obj _35reg4469 = PRIM_EQ(symlambda, _35reg4468);
if (True == _35reg4469) {
Obj _35reg4470 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4471 = PRIM_ISCONS(_35reg4470);
if (True == _35reg4471) {
Obj _35reg4472 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4473 = PRIM_CAR(_35reg4472);
Obj args = _35reg4473;
Obj _35reg4474 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4475 = PRIM_CDR(_35reg4474);
Obj _35reg4476 = PRIM_ISCONS(_35reg4475);
if (True == _35reg4476) {
Obj _35reg4477 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4478 = PRIM_CDR(_35reg4477);
Obj _35reg4479 = PRIM_CAR(_35reg4478);
Obj body = _35reg4479;
Obj _35reg4480 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4481 = PRIM_CDR(_35reg4480);
Obj _35reg4482 = PRIM_CDR(_35reg4481);
Obj _35reg4483 = PRIM_EQ(Nil, _35reg4482);
if (True == _35reg4483) {
PUSH_CONT(co, 49, clofun5, 1, args);
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
__arg0 = _35cc3445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3445;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj _35val4484 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg4485 = makeCons(_35val4484, Nil);
Obj _35reg4486 = makeCons(args, _35reg4485);
Obj _35reg4487 = makeCons(symlambda, _35reg4486);
__nargs = 2;
__arg1 = _35reg4487;
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
Obj _35cc3446 = makeNative(6, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg4440 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg4440) {
Obj _35reg4441 = PRIM_CAR(closureRef(co, 1));
Obj _35reg4442 = PRIM_EQ(symcontinuation, _35reg4441);
if (True == _35reg4442) {
Obj _35reg4443 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4444 = PRIM_ISCONS(_35reg4443);
if (True == _35reg4444) {
Obj _35reg4445 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4446 = PRIM_CAR(_35reg4445);
Obj val = _35reg4446;
Obj _35reg4447 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4448 = PRIM_CDR(_35reg4447);
Obj _35reg4449 = PRIM_ISCONS(_35reg4448);
if (True == _35reg4449) {
Obj _35reg4450 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4451 = PRIM_CDR(_35reg4450);
Obj _35reg4452 = PRIM_CAR(_35reg4451);
Obj body = _35reg4452;
Obj _35reg4453 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4454 = PRIM_CDR(_35reg4453);
Obj _35reg4455 = PRIM_CDR(_35reg4454);
Obj _35reg4456 = PRIM_EQ(Nil, _35reg4455);
if (True == _35reg4456) {
PUSH_CONT(co, 1, clofun6, 3, fvs, body, val);
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
__arg0 = _35cc3446;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3446;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3446;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3446;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3446;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val4457 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 2, clofun6, 3, fvs, body, val);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = _35val4457;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val4458 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs1 = _35val4458;
PUSH_CONT(co, 3, clofun6, 3, fvs1, body, val);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val4459 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 4, clofun6, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val4459;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val4460 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs2 = _35val4460;
PUSH_CONT(co, 5, clofun6, 2, val, fvs2);
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

label5:
{
Obj _35val4461 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4462 = makeCons(_35val4461, Nil);
Obj _35reg4463 = makeCons(val, _35reg4462);
Obj _35reg4464 = makeCons(symlambda, _35reg4463);
Obj _35reg4465 = makeCons(_35reg4464, fvs2);
Obj _35reg4466 = makeCons(sym_37continuation, _35reg4465);
__nargs = 2;
__arg1 = _35reg4466;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35cc3447 = makeNative(10, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg4417 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg4417) {
Obj _35reg4418 = PRIM_CAR(closureRef(co, 1));
Obj _35reg4419 = PRIM_EQ(symcall, _35reg4418);
if (True == _35reg4419) {
Obj _35reg4420 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4421 = PRIM_ISCONS(_35reg4420);
if (True == _35reg4421) {
Obj _35reg4422 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4423 = PRIM_CAR(_35reg4422);
Obj exp = _35reg4423;
Obj _35reg4424 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4425 = PRIM_CDR(_35reg4424);
Obj _35reg4426 = PRIM_ISCONS(_35reg4425);
if (True == _35reg4426) {
Obj _35reg4427 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4428 = PRIM_CDR(_35reg4427);
Obj _35reg4429 = PRIM_CAR(_35reg4428);
Obj cont = _35reg4429;
Obj _35reg4430 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4431 = PRIM_CDR(_35reg4430);
Obj _35reg4432 = PRIM_CDR(_35reg4431);
Obj _35reg4433 = PRIM_EQ(Nil, _35reg4432);
if (True == _35reg4433) {
PUSH_CONT(co, 7, clofun6, 3, exp, fvs, cont);
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
__arg0 = _35cc3447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val4434 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 8, clofun6, 2, fvs, cont);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val4434;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val4435 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 9, clofun6, 1, _35val4435);
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

label9:
{
Obj _35val4436 = __arg1;
Obj _35val4435= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg4437 = makeCons(_35val4436, Nil);
Obj _35reg4438 = makeCons(_35val4435, _35reg4437);
Obj _35reg4439 = makeCons(symcall, _35reg4438);
__nargs = 2;
__arg1 = _35reg4439;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35cc3448 = makeNative(12, clofun6, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg4412 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg4412) {
Obj _35reg4413 = PRIM_CAR(closureRef(co, 1));
Obj f = _35reg4413;
Obj _35reg4414 = PRIM_CDR(closureRef(co, 1));
Obj args = _35reg4414;
PUSH_CONT(co, 11, clofun6, 2, f, args);
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
__arg0 = _35cc3448;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val4415 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4416 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val4415;
__arg2 = _35reg4416;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
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

label13:
{
Obj _35p3436 = __arg1;
Obj _35p3437 = __arg2;
Obj _35p3438 = __arg3;
Obj _35cc3439 = makeNative(20, clofun6, 0, 3, _35p3436, _35p3437, _35p3438);
Obj _35reg4369 = PRIM_EQ(Nil, _35p3436);
if (True == _35reg4369) {
Obj ls = _35p3437;
Obj next = _35p3438;
PUSH_CONT(co, 14, clofun6, 1, next);
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
__arg0 = _35cc3439;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val4370 = __arg1;
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp = _35val4370;
Obj _35reg4371 = PRIM_CAR(exp);
PUSH_CONT(co, 15, clofun6, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35pair_63);
__arg1 = _35reg4371;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val4372 = __arg1;
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val4372) {
PUSH_CONT(co, 17, clofun6, 2, next, exp);
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
Obj _35reg4399 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == _35reg4399) {
Obj _35reg4400 = makeCons(exp, Nil);
Obj _35reg4401 = makeCons(symtailcall, _35reg4400);
__nargs = 2;
__arg1 = _35reg4401;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg4402 = primGenSym(symval);
Obj val = _35reg4402;
Obj _35reg4403 = makeCons(val, Nil);
PUSH_CONT(co, 16, clofun6, 2, _35reg4403, exp);
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

label16:
{
Obj _35val4404 = __arg1;
Obj _35reg4403= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4405 = makeCons(_35val4404, Nil);
Obj _35reg4406 = makeCons(_35reg4403, _35reg4405);
Obj _35reg4407 = makeCons(symcontinuation, _35reg4406);
Obj _35reg4408 = makeCons(_35reg4407, Nil);
Obj _35reg4409 = makeCons(exp, _35reg4408);
Obj _35reg4410 = makeCons(symcall, _35reg4409);
__nargs = 2;
__arg1 = _35reg4410;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35val4373 = __arg1;
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4374 = PRIM_EQ(_35val4373, sym_37builtin);
if (True == _35reg4374) {
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
Obj _35reg4375 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == _35reg4375) {
Obj _35reg4376 = makeCons(exp, Nil);
Obj _35reg4377 = makeCons(symtailcall, _35reg4376);
__nargs = 2;
__arg1 = _35reg4377;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg4378 = primGenSym(symval);
Obj val = _35reg4378;
Obj _35reg4379 = makeCons(val, Nil);
PUSH_CONT(co, 19, clofun6, 2, _35reg4379, exp);
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
Obj _35reg4387 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == _35reg4387) {
Obj _35reg4388 = makeCons(exp, Nil);
Obj _35reg4389 = makeCons(symtailcall, _35reg4388);
__nargs = 2;
__arg1 = _35reg4389;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg4390 = primGenSym(symval);
Obj val = _35reg4390;
Obj _35reg4391 = makeCons(val, Nil);
PUSH_CONT(co, 18, clofun6, 2, _35reg4391, exp);
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

label18:
{
Obj _35val4392 = __arg1;
Obj _35reg4391= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4393 = makeCons(_35val4392, Nil);
Obj _35reg4394 = makeCons(_35reg4391, _35reg4393);
Obj _35reg4395 = makeCons(symcontinuation, _35reg4394);
Obj _35reg4396 = makeCons(_35reg4395, Nil);
Obj _35reg4397 = makeCons(exp, _35reg4396);
Obj _35reg4398 = makeCons(symcall, _35reg4397);
__nargs = 2;
__arg1 = _35reg4398;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35val4380 = __arg1;
Obj _35reg4379= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4381 = makeCons(_35val4380, Nil);
Obj _35reg4382 = makeCons(_35reg4379, _35reg4381);
Obj _35reg4383 = makeCons(symcontinuation, _35reg4382);
Obj _35reg4384 = makeCons(_35reg4383, Nil);
Obj _35reg4385 = makeCons(exp, _35reg4384);
Obj _35reg4386 = makeCons(symcall, _35reg4385);
__nargs = 2;
__arg1 = _35reg4386;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35cc3440 = makeNative(22, clofun6, 0, 0);
Obj _35reg4365 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4365) {
Obj _35reg4366 = PRIM_CAR(closureRef(co, 0));
Obj hd = _35reg4366;
Obj _35reg4367 = PRIM_CDR(closureRef(co, 0));
Obj tl = _35reg4367;
Obj ls = closureRef(co, 1);
Obj next = closureRef(co, 2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = hd;
__arg2 = makeNative(21, clofun6, 1, 3, tl, ls, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3440;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj hd1 = __arg1;
Obj _35reg4368 = makeCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45list);
__arg1 = closureRef(co, 0);
__arg2 = _35reg4368;
__arg3 = closureRef(co, 2);
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
Obj _35p3427 = __arg1;
Obj _35p3428 = __arg2;
Obj _35cc3429 = makeNative(25, clofun6, 0, 2, _35p3427, _35p3428);
Obj x = _35p3427;
Obj next = _35p3428;
Obj _35reg4362 = primIsSymbol(x);
if (True == _35reg4362) {
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
__arg0 = _35cc3429;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
PUSH_CONT(co, 24, clofun6, 3, next, x, _35cc3429);
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

label24:
{
Obj _35val4363 = __arg1;
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35cc3429= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _35val4363) {
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
__arg0 = _35cc3429;
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
__arg0 = _35cc3429;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label25:
{
Obj _35cc3430 = makeNative(27, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x = closureRef(co, 0);
Obj __ = closureRef(co, 1);
PUSH_CONT(co, 26, clofun6, 2, x, _35cc3430);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj _35val4361 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35cc3430= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val4361) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3430;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35cc3431 = makeNative(31, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg4329 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4329) {
Obj _35reg4330 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4331 = PRIM_EQ(symif, _35reg4330);
if (True == _35reg4331) {
Obj _35reg4332 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4333 = PRIM_ISCONS(_35reg4332);
if (True == _35reg4333) {
Obj _35reg4334 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4335 = PRIM_CAR(_35reg4334);
Obj a = _35reg4335;
Obj _35reg4336 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4337 = PRIM_CDR(_35reg4336);
Obj _35reg4338 = PRIM_ISCONS(_35reg4337);
if (True == _35reg4338) {
Obj _35reg4339 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4340 = PRIM_CDR(_35reg4339);
Obj _35reg4341 = PRIM_CAR(_35reg4340);
Obj b = _35reg4341;
Obj _35reg4342 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4343 = PRIM_CDR(_35reg4342);
Obj _35reg4344 = PRIM_CDR(_35reg4343);
Obj _35reg4345 = PRIM_ISCONS(_35reg4344);
if (True == _35reg4345) {
Obj _35reg4346 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4347 = PRIM_CDR(_35reg4346);
Obj _35reg4348 = PRIM_CDR(_35reg4347);
Obj _35reg4349 = PRIM_CAR(_35reg4348);
Obj c = _35reg4349;
Obj _35reg4350 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4351 = PRIM_CDR(_35reg4350);
Obj _35reg4352 = PRIM_CDR(_35reg4351);
Obj _35reg4353 = PRIM_CDR(_35reg4352);
Obj _35reg4354 = PRIM_EQ(Nil, _35reg4353);
if (True == _35reg4354) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = a;
__arg2 = makeNative(28, clofun6, 1, 3, b, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3431;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj ra = __arg1;
PUSH_CONT(co, 29, clofun6, 1, ra);
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

label29:
{
Obj _35val4355 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 30, clofun6, 2, _35val4355, ra);
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

label30:
{
Obj _35val4356 = __arg1;
Obj _35val4355= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4357 = makeCons(_35val4356, Nil);
Obj _35reg4358 = makeCons(_35val4355, _35reg4357);
Obj _35reg4359 = makeCons(ra, _35reg4358);
Obj _35reg4360 = makeCons(symif, _35reg4359);
__nargs = 2;
__arg1 = _35reg4360;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj _35cc3432 = makeNative(34, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg4307 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4307) {
Obj _35reg4308 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4309 = PRIM_EQ(symdo, _35reg4308);
if (True == _35reg4309) {
Obj _35reg4310 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4311 = PRIM_ISCONS(_35reg4310);
if (True == _35reg4311) {
Obj _35reg4312 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4313 = PRIM_CAR(_35reg4312);
Obj a = _35reg4313;
Obj _35reg4314 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4315 = PRIM_CDR(_35reg4314);
Obj _35reg4316 = PRIM_ISCONS(_35reg4315);
if (True == _35reg4316) {
Obj _35reg4317 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4318 = PRIM_CDR(_35reg4317);
Obj _35reg4319 = PRIM_CAR(_35reg4318);
Obj b = _35reg4319;
Obj _35reg4320 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4321 = PRIM_CDR(_35reg4320);
Obj _35reg4322 = PRIM_CDR(_35reg4321);
Obj _35reg4323 = PRIM_EQ(Nil, _35reg4322);
if (True == _35reg4323) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = a;
__arg2 = makeNative(32, clofun6, 1, 2, b, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3432;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3432;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3432;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3432;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3432;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj ra = __arg1;
Obj _35reg4324 = primIsSymbol(ra);
if (True == _35reg4324) {
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
PUSH_CONT(co, 33, clofun6, 1, ra);
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

label33:
{
Obj _35val4325 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg4326 = makeCons(_35val4325, Nil);
Obj _35reg4327 = makeCons(ra, _35reg4326);
Obj _35reg4328 = makeCons(symdo, _35reg4327);
__nargs = 2;
__arg1 = _35reg4328;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj _35cc3433 = makeNative(37, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg4276 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4276) {
Obj _35reg4277 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4278 = PRIM_EQ(symlet, _35reg4277);
if (True == _35reg4278) {
Obj _35reg4279 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4280 = PRIM_ISCONS(_35reg4279);
if (True == _35reg4280) {
Obj _35reg4281 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4282 = PRIM_CAR(_35reg4281);
Obj a = _35reg4282;
Obj _35reg4283 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4284 = PRIM_CDR(_35reg4283);
Obj _35reg4285 = PRIM_ISCONS(_35reg4284);
if (True == _35reg4285) {
Obj _35reg4286 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4287 = PRIM_CDR(_35reg4286);
Obj _35reg4288 = PRIM_CAR(_35reg4287);
Obj b = _35reg4288;
Obj _35reg4289 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4290 = PRIM_CDR(_35reg4289);
Obj _35reg4291 = PRIM_CDR(_35reg4290);
Obj _35reg4292 = PRIM_ISCONS(_35reg4291);
if (True == _35reg4292) {
Obj _35reg4293 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4294 = PRIM_CDR(_35reg4293);
Obj _35reg4295 = PRIM_CDR(_35reg4294);
Obj _35reg4296 = PRIM_CAR(_35reg4295);
Obj c = _35reg4296;
Obj _35reg4297 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4298 = PRIM_CDR(_35reg4297);
Obj _35reg4299 = PRIM_CDR(_35reg4298);
Obj _35reg4300 = PRIM_CDR(_35reg4299);
Obj _35reg4301 = PRIM_EQ(Nil, _35reg4300);
if (True == _35reg4301) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = b;
__arg2 = makeNative(35, clofun6, 1, 3, a, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3433;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3433;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3433;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3433;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3433;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3433;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj rb = __arg1;
PUSH_CONT(co, 36, clofun6, 1, rb);
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

label36:
{
Obj _35val4302 = __arg1;
Obj rb= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg4303 = makeCons(_35val4302, Nil);
Obj _35reg4304 = makeCons(rb, _35reg4303);
Obj _35reg4305 = makeCons(closureRef(co, 0), _35reg4304);
Obj _35reg4306 = makeCons(symlet, _35reg4305);
__nargs = 2;
__arg1 = _35reg4306;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj _35cc3434 = makeNative(39, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg4232 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4232) {
Obj _35reg4233 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4234 = PRIM_EQ(sym_37closure, _35reg4233);
if (True == _35reg4234) {
Obj _35reg4235 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4236 = PRIM_ISCONS(_35reg4235);
if (True == _35reg4236) {
Obj _35reg4237 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4238 = PRIM_CAR(_35reg4237);
Obj _35reg4239 = PRIM_ISCONS(_35reg4238);
if (True == _35reg4239) {
Obj _35reg4240 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4241 = PRIM_CAR(_35reg4240);
Obj _35reg4242 = PRIM_CAR(_35reg4241);
Obj _35reg4243 = PRIM_EQ(symlambda, _35reg4242);
if (True == _35reg4243) {
Obj _35reg4244 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4245 = PRIM_CAR(_35reg4244);
Obj _35reg4246 = PRIM_CDR(_35reg4245);
Obj _35reg4247 = PRIM_ISCONS(_35reg4246);
if (True == _35reg4247) {
Obj _35reg4248 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4249 = PRIM_CAR(_35reg4248);
Obj _35reg4250 = PRIM_CDR(_35reg4249);
Obj _35reg4251 = PRIM_CAR(_35reg4250);
Obj args = _35reg4251;
Obj _35reg4252 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4253 = PRIM_CAR(_35reg4252);
Obj _35reg4254 = PRIM_CDR(_35reg4253);
Obj _35reg4255 = PRIM_CDR(_35reg4254);
Obj _35reg4256 = PRIM_ISCONS(_35reg4255);
if (True == _35reg4256) {
Obj _35reg4257 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4258 = PRIM_CAR(_35reg4257);
Obj _35reg4259 = PRIM_CDR(_35reg4258);
Obj _35reg4260 = PRIM_CDR(_35reg4259);
Obj _35reg4261 = PRIM_CAR(_35reg4260);
Obj body = _35reg4261;
Obj _35reg4262 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4263 = PRIM_CAR(_35reg4262);
Obj _35reg4264 = PRIM_CDR(_35reg4263);
Obj _35reg4265 = PRIM_CDR(_35reg4264);
Obj _35reg4266 = PRIM_CDR(_35reg4265);
Obj _35reg4267 = PRIM_EQ(Nil, _35reg4266);
if (True == _35reg4267) {
Obj _35reg4268 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4269 = PRIM_CDR(_35reg4268);
Obj frees = _35reg4269;
Obj next = closureRef(co, 1);
PUSH_CONT(co, 38, clofun6, 3, args, frees, next);
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
__arg0 = _35cc3434;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3434;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3434;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3434;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3434;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3434;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3434;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3434;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35val4270 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg4271 = makeCons(_35val4270, Nil);
Obj _35reg4272 = makeCons(args, _35reg4271);
Obj _35reg4273 = makeCons(symlambda, _35reg4272);
Obj _35reg4274 = makeCons(_35reg4273, frees);
Obj _35reg4275 = makeCons(sym_37closure, _35reg4274);
__nargs = 2;
__arg0 = next;
__arg1 = _35reg4275;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _35cc3435 = makeNative(40, clofun6, 0, 0);
Obj _35reg4228 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4228) {
Obj _35reg4229 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg4229;
Obj _35reg4230 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg4230;
Obj next = closureRef(co, 1);
Obj _35reg4231 = makeCons(f, args);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45list);
__arg1 = _35reg4231;
__arg2 = Nil;
__arg3 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3435;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
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

label41:
{
Obj x = __arg1;
Obj _35reg4225 = makeCons(x, Nil);
Obj _35reg4226 = makeCons(symreturn, _35reg4225);
__nargs = 2;
__arg1 = _35reg4226;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label42:
{
Obj _35p3420 = __arg1;
Obj _35p3421 = __arg2;
Obj _35cc3422 = makeNative(44, clofun6, 0, 2, _35p3420, _35p3421);
Obj __ = _35p3420;
Obj x = _35p3421;
PUSH_CONT(co, 43, clofun6, 2, x, _35cc3422);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _35val4223 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35cc3422= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val4223) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3422;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj _35cc3423 = makeNative(46, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg4218 = primIsSymbol(var);
if (True == _35reg4218) {
PUSH_CONT(co, 45, clofun6, 1, var);
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
__arg0 = _35cc3423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj _35val4219 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pos = _35val4219;
Obj _35reg4220 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == _35reg4220) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg4221 = makeCons(pos, Nil);
Obj _35reg4222 = makeCons(sym_37closure_45ref, _35reg4221);
__nargs = 2;
__arg1 = _35reg4222;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label46:
{
Obj _35cc3424 = makeNative(1, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg4189 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg4189) {
Obj _35reg4190 = PRIM_CAR(closureRef(co, 1));
Obj _35reg4191 = PRIM_EQ(symlambda, _35reg4190);
if (True == _35reg4191) {
Obj _35reg4192 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4193 = PRIM_ISCONS(_35reg4192);
if (True == _35reg4193) {
Obj _35reg4194 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4195 = PRIM_CAR(_35reg4194);
Obj args = _35reg4195;
Obj _35reg4196 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4197 = PRIM_CDR(_35reg4196);
Obj _35reg4198 = PRIM_ISCONS(_35reg4197);
if (True == _35reg4198) {
Obj _35reg4199 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4200 = PRIM_CDR(_35reg4199);
Obj _35reg4201 = PRIM_CAR(_35reg4200);
Obj body = _35reg4201;
Obj _35reg4202 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4203 = PRIM_CDR(_35reg4202);
Obj _35reg4204 = PRIM_CDR(_35reg4203);
Obj _35reg4205 = PRIM_EQ(Nil, _35reg4204);
if (True == _35reg4205) {
Obj _35reg4206 = makeCons(body, Nil);
Obj _35reg4207 = makeCons(args, _35reg4206);
Obj _35reg4208 = makeCons(symlambda, _35reg4207);
PUSH_CONT(co, 47, clofun6, 3, body, args, fvs);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = _35reg4208;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3424;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _35val4209 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs1 = _35val4209;
PUSH_CONT(co, 48, clofun6, 3, args, fvs, fvs1);
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

label48:
{
Obj _35val4210 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj _35reg4211 = makeCons(_35val4210, Nil);
Obj _35reg4212 = makeCons(args, _35reg4211);
Obj _35reg4213 = makeCons(symlambda, _35reg4212);
PUSH_CONT(co, 49, clofun6, 2, fvs1, _35reg4213);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35val4214 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg4213= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 0, clofun7, 1, _35reg4213);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val4214;
__arg2 = fvs1;
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
Obj _35val4215 = __arg1;
Obj _35reg4213= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg4216 = makeCons(_35reg4213, _35val4215);
Obj _35reg4217 = makeCons(sym_37closure, _35reg4216);
__nargs = 2;
__arg1 = _35reg4217;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35cc3425 = makeNative(4, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg4157 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg4157) {
Obj _35reg4158 = PRIM_CAR(closureRef(co, 1));
Obj _35reg4159 = PRIM_EQ(symlet, _35reg4158);
if (True == _35reg4159) {
Obj _35reg4160 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4161 = PRIM_ISCONS(_35reg4160);
if (True == _35reg4161) {
Obj _35reg4162 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4163 = PRIM_CAR(_35reg4162);
Obj a = _35reg4163;
Obj _35reg4164 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4165 = PRIM_CDR(_35reg4164);
Obj _35reg4166 = PRIM_ISCONS(_35reg4165);
if (True == _35reg4166) {
Obj _35reg4167 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4168 = PRIM_CDR(_35reg4167);
Obj _35reg4169 = PRIM_CAR(_35reg4168);
Obj b = _35reg4169;
Obj _35reg4170 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4171 = PRIM_CDR(_35reg4170);
Obj _35reg4172 = PRIM_CDR(_35reg4171);
Obj _35reg4173 = PRIM_ISCONS(_35reg4172);
if (True == _35reg4173) {
Obj _35reg4174 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4175 = PRIM_CDR(_35reg4174);
Obj _35reg4176 = PRIM_CDR(_35reg4175);
Obj _35reg4177 = PRIM_CAR(_35reg4176);
Obj c = _35reg4177;
Obj _35reg4178 = PRIM_CDR(closureRef(co, 1));
Obj _35reg4179 = PRIM_CDR(_35reg4178);
Obj _35reg4180 = PRIM_CDR(_35reg4179);
Obj _35reg4181 = PRIM_CDR(_35reg4180);
Obj _35reg4182 = PRIM_EQ(Nil, _35reg4181);
if (True == _35reg4182) {
PUSH_CONT(co, 2, clofun7, 3, fvs, c, a);
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
__arg0 = _35cc3425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3425;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val4183 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
PUSH_CONT(co, 3, clofun7, 2, _35val4183, a);
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

label3:
{
Obj _35val4184 = __arg1;
Obj _35val4183= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4185 = makeCons(_35val4184, Nil);
Obj _35reg4186 = makeCons(_35val4183, _35reg4185);
Obj _35reg4187 = makeCons(a, _35reg4186);
Obj _35reg4188 = makeCons(symlet, _35reg4187);
__nargs = 2;
__arg1 = _35reg4188;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35cc3426 = makeNative(6, clofun7, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg4152 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg4152) {
Obj _35reg4153 = PRIM_CAR(closureRef(co, 1));
Obj f = _35reg4153;
Obj _35reg4154 = PRIM_CDR(closureRef(co, 1));
Obj args = _35reg4154;
PUSH_CONT(co, 5, clofun7, 2, f, args);
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
__arg0 = _35cc3426;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val4155 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4156 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val4155;
__arg2 = _35reg4156;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
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

label7:
{
Obj _35p3407 = __arg1;
Obj _35cc3408 = makeNative(9, clofun7, 0, 1, _35p3407);
Obj x = _35p3407;
PUSH_CONT(co, 8, clofun7, 1, _35cc3408);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val4150 = __arg1;
Obj _35cc3408= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _35val4150) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3408;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35cc3409 = makeNative(10, clofun7, 0, 1, closureRef(co, 0));
Obj x = closureRef(co, 0);
Obj _35reg4148 = primIsSymbol(x);
if (True == _35reg4148) {
Obj _35reg4149 = makeCons(x, Nil);
__nargs = 2;
__arg1 = _35reg4149;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3409;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc3410 = makeNative(12, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg4130 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4130) {
Obj _35reg4131 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4132 = PRIM_EQ(symlambda, _35reg4131);
if (True == _35reg4132) {
Obj _35reg4133 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4134 = PRIM_ISCONS(_35reg4133);
if (True == _35reg4134) {
Obj _35reg4135 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4136 = PRIM_CAR(_35reg4135);
Obj args = _35reg4136;
Obj _35reg4137 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4138 = PRIM_CDR(_35reg4137);
Obj _35reg4139 = PRIM_ISCONS(_35reg4138);
if (True == _35reg4139) {
Obj _35reg4140 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4141 = PRIM_CDR(_35reg4140);
Obj _35reg4142 = PRIM_CAR(_35reg4141);
Obj body = _35reg4142;
Obj _35reg4143 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4144 = PRIM_CDR(_35reg4143);
Obj _35reg4145 = PRIM_CDR(_35reg4144);
Obj _35reg4146 = PRIM_EQ(Nil, _35reg4145);
if (True == _35reg4146) {
PUSH_CONT(co, 11, clofun7, 1, args);
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
__arg0 = _35cc3410;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3410;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3410;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3410;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3410;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val4147 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = _35val4147;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc3411 = makeNative(14, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg4100 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4100) {
Obj _35reg4101 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4102 = PRIM_EQ(symif, _35reg4101);
if (True == _35reg4102) {
Obj _35reg4103 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4104 = PRIM_ISCONS(_35reg4103);
if (True == _35reg4104) {
Obj _35reg4105 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4106 = PRIM_CAR(_35reg4105);
Obj x = _35reg4106;
Obj _35reg4107 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4108 = PRIM_CDR(_35reg4107);
Obj _35reg4109 = PRIM_ISCONS(_35reg4108);
if (True == _35reg4109) {
Obj _35reg4110 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4111 = PRIM_CDR(_35reg4110);
Obj _35reg4112 = PRIM_CAR(_35reg4111);
Obj y = _35reg4112;
Obj _35reg4113 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4114 = PRIM_CDR(_35reg4113);
Obj _35reg4115 = PRIM_CDR(_35reg4114);
Obj _35reg4116 = PRIM_ISCONS(_35reg4115);
if (True == _35reg4116) {
Obj _35reg4117 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4118 = PRIM_CDR(_35reg4117);
Obj _35reg4119 = PRIM_CDR(_35reg4118);
Obj _35reg4120 = PRIM_CAR(_35reg4119);
Obj z = _35reg4120;
Obj _35reg4121 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4122 = PRIM_CDR(_35reg4121);
Obj _35reg4123 = PRIM_CDR(_35reg4122);
Obj _35reg4124 = PRIM_CDR(_35reg4123);
Obj _35reg4125 = PRIM_EQ(Nil, _35reg4124);
if (True == _35reg4125) {
Obj _35reg4126 = makeCons(z, Nil);
Obj _35reg4127 = makeCons(y, _35reg4126);
Obj _35reg4128 = makeCons(x, _35reg4127);
PUSH_CONT(co, 13, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = _35reg4128;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3411;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3411;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3411;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3411;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3411;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3411;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val4129 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = _35val4129;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc3412 = makeNative(16, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg4080 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4080) {
Obj _35reg4081 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4082 = PRIM_EQ(symdo, _35reg4081);
if (True == _35reg4082) {
Obj _35reg4083 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4084 = PRIM_ISCONS(_35reg4083);
if (True == _35reg4084) {
Obj _35reg4085 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4086 = PRIM_CAR(_35reg4085);
Obj x = _35reg4086;
Obj _35reg4087 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4088 = PRIM_CDR(_35reg4087);
Obj _35reg4089 = PRIM_ISCONS(_35reg4088);
if (True == _35reg4089) {
Obj _35reg4090 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4091 = PRIM_CDR(_35reg4090);
Obj _35reg4092 = PRIM_CAR(_35reg4091);
Obj y = _35reg4092;
Obj _35reg4093 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4094 = PRIM_CDR(_35reg4093);
Obj _35reg4095 = PRIM_CDR(_35reg4094);
Obj _35reg4096 = PRIM_EQ(Nil, _35reg4095);
if (True == _35reg4096) {
Obj _35reg4097 = makeCons(y, Nil);
Obj _35reg4098 = makeCons(x, _35reg4097);
PUSH_CONT(co, 15, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = _35reg4098;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3412;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3412;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3412;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3412;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3412;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val4099 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = _35val4099;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35cc3413 = makeNative(20, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg4050 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4050) {
Obj _35reg4051 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4052 = PRIM_EQ(symlet, _35reg4051);
if (True == _35reg4052) {
Obj _35reg4053 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4054 = PRIM_ISCONS(_35reg4053);
if (True == _35reg4054) {
Obj _35reg4055 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4056 = PRIM_CAR(_35reg4055);
Obj a = _35reg4056;
Obj _35reg4057 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4058 = PRIM_CDR(_35reg4057);
Obj _35reg4059 = PRIM_ISCONS(_35reg4058);
if (True == _35reg4059) {
Obj _35reg4060 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4061 = PRIM_CDR(_35reg4060);
Obj _35reg4062 = PRIM_CAR(_35reg4061);
Obj b = _35reg4062;
Obj _35reg4063 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4064 = PRIM_CDR(_35reg4063);
Obj _35reg4065 = PRIM_CDR(_35reg4064);
Obj _35reg4066 = PRIM_ISCONS(_35reg4065);
if (True == _35reg4066) {
Obj _35reg4067 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4068 = PRIM_CDR(_35reg4067);
Obj _35reg4069 = PRIM_CDR(_35reg4068);
Obj _35reg4070 = PRIM_CAR(_35reg4069);
Obj c = _35reg4070;
Obj _35reg4071 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4072 = PRIM_CDR(_35reg4071);
Obj _35reg4073 = PRIM_CDR(_35reg4072);
Obj _35reg4074 = PRIM_CDR(_35reg4073);
Obj _35reg4075 = PRIM_EQ(Nil, _35reg4074);
if (True == _35reg4075) {
PUSH_CONT(co, 17, clofun7, 2, c, a);
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
__arg0 = _35cc3413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val4076 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 18, clofun7, 2, a, _35val4076);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35val4077 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35val4076= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg4078 = makeCons(a, Nil);
PUSH_CONT(co, 19, clofun7, 1, _35val4076);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = _35val4077;
__arg2 = _35reg4078;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val4079 = __arg1;
Obj _35val4076= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35union);
__arg1 = _35val4076;
__arg2 = _35val4079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35cc3414 = makeNative(21, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg4040 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4040) {
Obj _35reg4041 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4042 = PRIM_EQ(sym_37closure, _35reg4041);
if (True == _35reg4042) {
Obj _35reg4043 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4044 = PRIM_ISCONS(_35reg4043);
if (True == _35reg4044) {
Obj _35reg4045 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4046 = PRIM_CAR(_35reg4045);
Obj lam = _35reg4046;
Obj _35reg4047 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4048 = PRIM_CDR(_35reg4047);
Obj more = _35reg4048;
Obj _35reg4049 = makeCons(lam, more);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = _35reg4049;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3414;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3414;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3414;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj _35cc3415 = makeNative(22, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg4030 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4030) {
Obj _35reg4031 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4032 = PRIM_EQ(symreturn, _35reg4031);
if (True == _35reg4032) {
Obj _35reg4033 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4034 = PRIM_ISCONS(_35reg4033);
if (True == _35reg4034) {
Obj _35reg4035 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4036 = PRIM_CAR(_35reg4035);
Obj x = _35reg4036;
Obj _35reg4037 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4038 = PRIM_CDR(_35reg4037);
Obj _35reg4039 = PRIM_EQ(Nil, _35reg4038);
if (True == _35reg4039) {
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
__arg0 = _35cc3415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35cc3416 = makeNative(24, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg4010 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4010) {
Obj _35reg4011 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4012 = PRIM_EQ(symcall, _35reg4011);
if (True == _35reg4012) {
Obj _35reg4013 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4014 = PRIM_ISCONS(_35reg4013);
if (True == _35reg4014) {
Obj _35reg4015 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4016 = PRIM_CAR(_35reg4015);
Obj exp = _35reg4016;
Obj _35reg4017 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4018 = PRIM_CDR(_35reg4017);
Obj _35reg4019 = PRIM_ISCONS(_35reg4018);
if (True == _35reg4019) {
Obj _35reg4020 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4021 = PRIM_CDR(_35reg4020);
Obj _35reg4022 = PRIM_CAR(_35reg4021);
Obj cont = _35reg4022;
Obj _35reg4023 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4024 = PRIM_CDR(_35reg4023);
Obj _35reg4025 = PRIM_CDR(_35reg4024);
Obj _35reg4026 = PRIM_EQ(Nil, _35reg4025);
if (True == _35reg4026) {
Obj _35reg4027 = makeCons(cont, Nil);
Obj _35reg4028 = makeCons(exp, _35reg4027);
PUSH_CONT(co, 23, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = _35reg4028;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3416;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3416;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3416;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3416;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3416;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35val4029 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = _35val4029;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _35cc3417 = makeNative(25, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg4000 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg4000) {
Obj _35reg4001 = PRIM_CAR(closureRef(co, 0));
Obj _35reg4002 = PRIM_EQ(symtailcall, _35reg4001);
if (True == _35reg4002) {
Obj _35reg4003 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4004 = PRIM_ISCONS(_35reg4003);
if (True == _35reg4004) {
Obj _35reg4005 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4006 = PRIM_CAR(_35reg4005);
Obj exp = _35reg4006;
Obj _35reg4007 = PRIM_CDR(closureRef(co, 0));
Obj _35reg4008 = PRIM_CDR(_35reg4007);
Obj _35reg4009 = PRIM_EQ(Nil, _35reg4008);
if (True == _35reg4009) {
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
__arg0 = _35cc3417;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3417;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3417;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3417;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35cc3418 = makeNative(27, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg3982 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3982) {
Obj _35reg3983 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3984 = PRIM_EQ(symcontinuation, _35reg3983);
if (True == _35reg3984) {
Obj _35reg3985 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3986 = PRIM_ISCONS(_35reg3985);
if (True == _35reg3986) {
Obj _35reg3987 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3988 = PRIM_CAR(_35reg3987);
Obj arg = _35reg3988;
Obj _35reg3989 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3990 = PRIM_CDR(_35reg3989);
Obj _35reg3991 = PRIM_ISCONS(_35reg3990);
if (True == _35reg3991) {
Obj _35reg3992 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3993 = PRIM_CDR(_35reg3992);
Obj _35reg3994 = PRIM_CAR(_35reg3993);
Obj body = _35reg3994;
Obj _35reg3995 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3996 = PRIM_CDR(_35reg3995);
Obj _35reg3997 = PRIM_CDR(_35reg3996);
Obj _35reg3998 = PRIM_EQ(Nil, _35reg3997);
if (True == _35reg3998) {
PUSH_CONT(co, 26, clofun7, 1, arg);
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
__arg0 = _35cc3418;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3418;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3418;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3418;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3418;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35val3999 = __arg1;
Obj arg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = _35val3999;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _35cc3419 = makeNative(29, clofun7, 0, 0);
Obj _35reg3977 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3977) {
Obj _35reg3978 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg3978;
Obj _35reg3979 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg3979;
Obj _35reg3980 = makeCons(f, args);
PUSH_CONT(co, 28, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = _35reg3980;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3419;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35val3981 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = _35val3981;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
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

label30:
{
Obj _35p3400 = __arg1;
Obj _35cc3401 = makeNative(31, clofun7, 0, 1, _35p3400);
Obj _35reg3966 = PRIM_ISCONS(_35p3400);
if (True == _35reg3966) {
Obj _35reg3967 = PRIM_CAR(_35p3400);
Obj _35reg3968 = PRIM_EQ(sym_37const, _35reg3967);
if (True == _35reg3968) {
Obj _35reg3969 = PRIM_CDR(_35p3400);
Obj _35reg3970 = PRIM_ISCONS(_35reg3969);
if (True == _35reg3970) {
Obj _35reg3971 = PRIM_CDR(_35p3400);
Obj _35reg3972 = PRIM_CAR(_35reg3971);
Obj x = _35reg3972;
Obj _35reg3973 = PRIM_CDR(_35p3400);
Obj _35reg3974 = PRIM_CDR(_35reg3973);
Obj _35reg3975 = PRIM_EQ(Nil, _35reg3974);
if (True == _35reg3975) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3401;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3401;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3401;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3401;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj _35cc3402 = makeNative(32, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg3956 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3956) {
Obj _35reg3957 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3958 = PRIM_EQ(sym_37global, _35reg3957);
if (True == _35reg3958) {
Obj _35reg3959 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3960 = PRIM_ISCONS(_35reg3959);
if (True == _35reg3960) {
Obj _35reg3961 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3962 = PRIM_CAR(_35reg3961);
Obj x = _35reg3962;
Obj _35reg3963 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3964 = PRIM_CDR(_35reg3963);
Obj _35reg3965 = PRIM_EQ(Nil, _35reg3964);
if (True == _35reg3965) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3402;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3402;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3402;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3402;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _35cc3403 = makeNative(33, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg3946 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3946) {
Obj _35reg3947 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3948 = PRIM_EQ(sym_37builtin, _35reg3947);
if (True == _35reg3948) {
Obj _35reg3949 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3950 = PRIM_ISCONS(_35reg3949);
if (True == _35reg3950) {
Obj _35reg3951 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3952 = PRIM_CAR(_35reg3951);
Obj op = _35reg3952;
Obj _35reg3953 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3954 = PRIM_CDR(_35reg3953);
Obj _35reg3955 = PRIM_EQ(Nil, _35reg3954);
if (True == _35reg3955) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3403;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3403;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3403;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3403;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _35cc3404 = makeNative(34, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg3936 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3936) {
Obj _35reg3937 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3938 = PRIM_EQ(symquote, _35reg3937);
if (True == _35reg3938) {
Obj _35reg3939 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3940 = PRIM_ISCONS(_35reg3939);
if (True == _35reg3940) {
Obj _35reg3941 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3942 = PRIM_CAR(_35reg3941);
Obj x = _35reg3942;
Obj _35reg3943 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3944 = PRIM_CDR(_35reg3943);
Obj _35reg3945 = PRIM_EQ(Nil, _35reg3944);
if (True == _35reg3945) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3404;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj _35cc3405 = makeNative(35, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg3926 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3926) {
Obj _35reg3927 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3928 = PRIM_EQ(sym_37closure_45ref, _35reg3927);
if (True == _35reg3928) {
Obj _35reg3929 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3930 = PRIM_ISCONS(_35reg3929);
if (True == _35reg3930) {
Obj _35reg3931 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3932 = PRIM_CAR(_35reg3931);
Obj __ = _35reg3932;
Obj _35reg3933 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3934 = PRIM_CDR(_35reg3933);
Obj _35reg3935 = PRIM_EQ(Nil, _35reg3934);
if (True == _35reg3935) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3405;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3405;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3405;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3405;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj _35cc3406 = makeNative(36, clofun7, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
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

label37:
{
Obj _35p3395 = __arg1;
Obj _35p3396 = __arg2;
Obj _35cc3397 = makeNative(38, clofun7, 0, 2, _35p3395, _35p3396);
Obj _35reg3924 = PRIM_EQ(Nil, _35p3395);
if (True == _35reg3924) {
Obj __ = _35p3396;
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3397;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35cc3398 = makeNative(40, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg3920 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3920) {
Obj _35reg3921 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg3921;
Obj _35reg3922 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg3922;
Obj s2 = closureRef(co, 1);
PUSH_CONT(co, 39, clofun7, 3, y, s2, _35cc3398);
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
__arg0 = _35cc3398;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _35val3923 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35cc3398= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _35val3923) {
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
__arg0 = _35cc3398;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj _35cc3399 = makeNative(42, clofun7, 0, 0);
Obj _35reg3915 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3915) {
Obj _35reg3916 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg3916;
Obj _35reg3917 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg3917;
Obj s2 = closureRef(co, 1);
PUSH_CONT(co, 41, clofun7, 1, x);
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
__arg0 = _35cc3399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj _35val3918 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg3919 = makeCons(x, _35val3918);
__nargs = 2;
__arg1 = _35reg3919;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label42:
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

label43:
{
Obj _35p3390 = __arg1;
Obj _35p3391 = __arg2;
Obj _35cc3392 = makeNative(44, clofun7, 0, 2, _35p3390, _35p3391);
Obj _35reg3913 = PRIM_EQ(Nil, _35p3390);
if (True == _35reg3913) {
Obj s2 = _35p3391;
__nargs = 2;
__arg1 = s2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3392;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj _35cc3393 = makeNative(46, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg3909 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3909) {
Obj _35reg3910 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg3910;
Obj _35reg3911 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg3911;
Obj s2 = closureRef(co, 1);
PUSH_CONT(co, 45, clofun7, 3, y, s2, _35cc3393);
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
__arg0 = _35cc3393;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj _35val3912 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35cc3393= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == _35val3912) {
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
__arg0 = _35cc3393;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _35cc3394 = makeNative(48, clofun7, 0, 0);
Obj _35reg3904 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3904) {
Obj _35reg3905 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg3905;
Obj _35reg3906 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg3906;
Obj s2 = closureRef(co, 1);
PUSH_CONT(co, 47, clofun7, 1, x);
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
__arg0 = _35cc3394;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _35val3907 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg3908 = makeCons(x, _35val3907);
__nargs = 2;
__arg1 = _35reg3908;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label48:
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

label49:
{
Obj _35p3373 = __arg1;
Obj _35p3374 = __arg2;
Obj _35p3375 = __arg3;
Obj _35p3376 = co->args[4];
Obj _35p3377 = co->args[5];
Obj _35cc3378 = makeNative(3, clofun8, 0, 5, _35p3373, _35p3374, _35p3375, _35p3376, _35p3377);
Obj __ = _35p3373;
__ = _35p3374;
__ = _35p3375;
Obj globals = _35p3376;
Obj x = _35p3377;
PUSH_CONT(co, 0, clofun8, 2, x, _35cc3378);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35number_63);
__arg1 = x;
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

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val3889 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35cc3378= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val3889) {
if (True == True) {
Obj _35reg3890 = makeCons(x, Nil);
Obj _35reg3891 = makeCons(sym_37const, _35reg3890);
__nargs = 2;
__arg1 = _35reg3891;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3378;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg3892 = primIsString(x);
if (True == _35reg3892) {
if (True == True) {
Obj _35reg3893 = makeCons(x, Nil);
Obj _35reg3894 = makeCons(sym_37const, _35reg3893);
__nargs = 2;
__arg1 = _35reg3894;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3378;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
PUSH_CONT(co, 1, clofun8, 2, x, _35cc3378);
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

label1:
{
Obj _35val3895 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35cc3378= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val3895) {
if (True == True) {
Obj _35reg3896 = makeCons(x, Nil);
Obj _35reg3897 = makeCons(sym_37const, _35reg3896);
__nargs = 2;
__arg1 = _35reg3897;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3378;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
PUSH_CONT(co, 2, clofun8, 2, x, _35cc3378);
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

label2:
{
Obj _35val3898 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35cc3378= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val3898) {
if (True == True) {
Obj _35reg3899 = makeCons(x, Nil);
Obj _35reg3900 = makeCons(sym_37const, _35reg3899);
__nargs = 2;
__arg1 = _35reg3900;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3378;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg3901 = makeCons(x, Nil);
Obj _35reg3902 = makeCons(sym_37const, _35reg3901);
__nargs = 2;
__arg1 = _35reg3902;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3378;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label3:
{
Obj _35cc3379 = makeNative(5, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj __ = closureRef(co, 0);
__ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg3876 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg3876) {
Obj _35reg3877 = PRIM_CAR(closureRef(co, 4));
Obj _35reg3878 = PRIM_EQ(symquote, _35reg3877);
if (True == _35reg3878) {
Obj _35reg3879 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3880 = PRIM_ISCONS(_35reg3879);
if (True == _35reg3880) {
Obj _35reg3881 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3882 = PRIM_CAR(_35reg3881);
Obj x = _35reg3882;
Obj _35reg3883 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3884 = PRIM_CDR(_35reg3883);
Obj _35reg3885 = PRIM_EQ(Nil, _35reg3884);
if (True == _35reg3885) {
PUSH_CONT(co, 4, clofun8, 1, x);
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
__arg0 = _35cc3379;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3379;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3379;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3379;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val3886 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg3887 = makeCons(x, Nil);
Obj _35reg3888 = makeCons(sym_37const, _35reg3887);
__nargs = 2;
__arg1 = _35reg3888;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35cc3380 = makeNative(9, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj x = closureRef(co, 4);
Obj _35reg3870 = primIsSymbol(x);
if (True == _35reg3870) {
PUSH_CONT(co, 6, clofun8, 4, x, ns, import, globals);
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
__arg0 = _35cc3380;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val3871 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _35val3871) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 7, clofun8, 1, globals);
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

label7:
{
Obj _35val3872 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v = _35val3872;
PUSH_CONT(co, 8, clofun8, 1, v);
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

label8:
{
Obj _35val3873 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg3874 = makeCons(v, Nil);
Obj _35reg3875 = makeCons(sym_37global, _35reg3874);
__nargs = 2;
__arg1 = _35reg3875;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35cc3381 = makeNative(12, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg3848 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg3848) {
Obj _35reg3849 = PRIM_CAR(closureRef(co, 4));
Obj _35reg3850 = PRIM_EQ(symlambda, _35reg3849);
if (True == _35reg3850) {
Obj _35reg3851 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3852 = PRIM_ISCONS(_35reg3851);
if (True == _35reg3852) {
Obj _35reg3853 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3854 = PRIM_CAR(_35reg3853);
Obj args = _35reg3854;
Obj _35reg3855 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3856 = PRIM_CDR(_35reg3855);
Obj _35reg3857 = PRIM_ISCONS(_35reg3856);
if (True == _35reg3857) {
Obj _35reg3858 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3859 = PRIM_CDR(_35reg3858);
Obj _35reg3860 = PRIM_CAR(_35reg3859);
Obj body = _35reg3860;
Obj _35reg3861 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3862 = PRIM_CDR(_35reg3861);
Obj _35reg3863 = PRIM_CDR(_35reg3862);
Obj _35reg3864 = PRIM_EQ(Nil, _35reg3863);
if (True == _35reg3864) {
PUSH_CONT(co, 10, clofun8, 5, ns, import, globals, body, args);
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
__arg0 = _35cc3381;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3381;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3381;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3381;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3381;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val3865 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
PUSH_CONT(co, 11, clofun8, 1, args);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = _35val3865;
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

label11:
{
Obj _35val3866 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg3867 = makeCons(_35val3866, Nil);
Obj _35reg3868 = makeCons(args, _35reg3867);
Obj _35reg3869 = makeCons(symlambda, _35reg3868);
__nargs = 2;
__arg1 = _35reg3869;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35cc3382 = makeNative(15, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg3841 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg3841) {
Obj _35reg3842 = PRIM_CAR(closureRef(co, 4));
Obj _35reg3843 = PRIM_EQ(symif, _35reg3842);
if (True == _35reg3843) {
Obj _35reg3844 = PRIM_CDR(closureRef(co, 4));
Obj args = _35reg3844;
PUSH_CONT(co, 13, clofun8, 1, args);
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
__arg0 = _35cc3382;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3382;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val3845 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 14, clofun8, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val3845;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val3846 = __arg1;
Obj _35reg3847 = makeCons(symif, _35val3846);
__nargs = 2;
__arg1 = _35reg3847;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35cc3383 = makeNative(18, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg3797 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg3797) {
Obj _35reg3798 = PRIM_CAR(closureRef(co, 4));
Obj _35reg3799 = PRIM_EQ(symdo, _35reg3798);
if (True == _35reg3799) {
Obj _35reg3800 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3801 = PRIM_ISCONS(_35reg3800);
if (True == _35reg3801) {
Obj _35reg3802 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3803 = PRIM_CAR(_35reg3802);
Obj _35reg3804 = PRIM_ISCONS(_35reg3803);
if (True == _35reg3804) {
Obj _35reg3805 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3806 = PRIM_CAR(_35reg3805);
Obj _35reg3807 = PRIM_CAR(_35reg3806);
Obj _35reg3808 = PRIM_EQ(symimport, _35reg3807);
if (True == _35reg3808) {
Obj _35reg3809 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3810 = PRIM_CAR(_35reg3809);
Obj _35reg3811 = PRIM_CDR(_35reg3810);
Obj _35reg3812 = PRIM_ISCONS(_35reg3811);
if (True == _35reg3812) {
Obj _35reg3813 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3814 = PRIM_CAR(_35reg3813);
Obj _35reg3815 = PRIM_CDR(_35reg3814);
Obj _35reg3816 = PRIM_CAR(_35reg3815);
Obj pkg = _35reg3816;
Obj _35reg3817 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3818 = PRIM_CAR(_35reg3817);
Obj _35reg3819 = PRIM_CDR(_35reg3818);
Obj _35reg3820 = PRIM_CDR(_35reg3819);
Obj _35reg3821 = PRIM_EQ(Nil, _35reg3820);
if (True == _35reg3821) {
Obj _35reg3822 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3823 = PRIM_CDR(_35reg3822);
Obj _35reg3824 = PRIM_ISCONS(_35reg3823);
if (True == _35reg3824) {
Obj _35reg3825 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3826 = PRIM_CDR(_35reg3825);
Obj _35reg3827 = PRIM_CAR(_35reg3826);
Obj y = _35reg3827;
Obj _35reg3828 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3829 = PRIM_CDR(_35reg3828);
Obj _35reg3830 = PRIM_CDR(_35reg3829);
Obj _35reg3831 = PRIM_EQ(Nil, _35reg3830);
if (True == _35reg3831) {
Obj _35reg3832 = primIsString(pkg);
if (True == _35reg3832) {
Obj _35reg3833 = makeCons(pkg, Nil);
Obj _35reg3834 = makeCons(symimport, _35reg3833);
PUSH_CONT(co, 16, clofun8, 6, pkg, import, env, ns, globals, y);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->args[5] = _35reg3834;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val3835 = __arg1;
Obj pkg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _35reg3836 = makeCons(pkg, import);
PUSH_CONT(co, 17, clofun8, 1, _35val3835);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = _35reg3836;
co->args[4] = globals;
co->args[5] = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj _35val3837 = __arg1;
Obj _35val3835= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg3838 = makeCons(_35val3837, Nil);
Obj _35reg3839 = makeCons(_35val3835, _35reg3838);
Obj _35reg3840 = makeCons(symdo, _35reg3839);
__nargs = 2;
__arg1 = _35reg3840;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35cc3384 = makeNative(21, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg3775 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg3775) {
Obj _35reg3776 = PRIM_CAR(closureRef(co, 4));
Obj _35reg3777 = PRIM_EQ(symdo, _35reg3776);
if (True == _35reg3777) {
Obj _35reg3778 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3779 = PRIM_ISCONS(_35reg3778);
if (True == _35reg3779) {
Obj _35reg3780 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3781 = PRIM_CAR(_35reg3780);
Obj x = _35reg3781;
Obj _35reg3782 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3783 = PRIM_CDR(_35reg3782);
Obj _35reg3784 = PRIM_ISCONS(_35reg3783);
if (True == _35reg3784) {
Obj _35reg3785 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3786 = PRIM_CDR(_35reg3785);
Obj _35reg3787 = PRIM_CAR(_35reg3786);
Obj y = _35reg3787;
Obj _35reg3788 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3789 = PRIM_CDR(_35reg3788);
Obj _35reg3790 = PRIM_CDR(_35reg3789);
Obj _35reg3791 = PRIM_EQ(Nil, _35reg3790);
if (True == _35reg3791) {
PUSH_CONT(co, 19, clofun8, 5, env, ns, import, globals, y);
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
__arg0 = _35cc3384;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3384;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3384;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3384;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3384;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val3792 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
PUSH_CONT(co, 20, clofun8, 1, _35val3792);
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

label20:
{
Obj _35val3793 = __arg1;
Obj _35val3792= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg3794 = makeCons(_35val3793, Nil);
Obj _35reg3795 = makeCons(_35val3792, _35reg3794);
Obj _35reg3796 = makeCons(symdo, _35reg3795);
__nargs = 2;
__arg1 = _35reg3796;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label21:
{
Obj _35cc3385 = makeNative(24, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg3742 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg3742) {
Obj _35reg3743 = PRIM_CAR(closureRef(co, 4));
Obj _35reg3744 = PRIM_EQ(symlet, _35reg3743);
if (True == _35reg3744) {
Obj _35reg3745 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3746 = PRIM_ISCONS(_35reg3745);
if (True == _35reg3746) {
Obj _35reg3747 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3748 = PRIM_CAR(_35reg3747);
Obj a = _35reg3748;
Obj _35reg3749 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3750 = PRIM_CDR(_35reg3749);
Obj _35reg3751 = PRIM_ISCONS(_35reg3750);
if (True == _35reg3751) {
Obj _35reg3752 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3753 = PRIM_CDR(_35reg3752);
Obj _35reg3754 = PRIM_CAR(_35reg3753);
Obj b = _35reg3754;
Obj _35reg3755 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3756 = PRIM_CDR(_35reg3755);
Obj _35reg3757 = PRIM_CDR(_35reg3756);
Obj _35reg3758 = PRIM_ISCONS(_35reg3757);
if (True == _35reg3758) {
Obj _35reg3759 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3760 = PRIM_CDR(_35reg3759);
Obj _35reg3761 = PRIM_CDR(_35reg3760);
Obj _35reg3762 = PRIM_CAR(_35reg3761);
Obj c = _35reg3762;
Obj _35reg3763 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3764 = PRIM_CDR(_35reg3763);
Obj _35reg3765 = PRIM_CDR(_35reg3764);
Obj _35reg3766 = PRIM_CDR(_35reg3765);
Obj _35reg3767 = PRIM_EQ(Nil, _35reg3766);
if (True == _35reg3767) {
PUSH_CONT(co, 22, clofun8, 6, env, ns, import, globals, c, a);
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
__arg0 = _35cc3385;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3385;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3385;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3385;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3385;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3385;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35val3768 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _35reg3769 = makeCons(a, env);
PUSH_CONT(co, 23, clofun8, 2, _35val3768, a);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = _35reg3769;
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

label23:
{
Obj _35val3770 = __arg1;
Obj _35val3768= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg3771 = makeCons(_35val3770, Nil);
Obj _35reg3772 = makeCons(_35val3768, _35reg3771);
Obj _35reg3773 = makeCons(a, _35reg3772);
Obj _35reg3774 = makeCons(symlet, _35reg3773);
__nargs = 2;
__arg1 = _35reg3774;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label24:
{
Obj _35cc3386 = makeNative(25, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj __ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg3716 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg3716) {
Obj _35reg3717 = PRIM_CAR(closureRef(co, 4));
Obj _35reg3718 = PRIM_EQ(symns, _35reg3717);
if (True == _35reg3718) {
Obj _35reg3719 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3720 = PRIM_ISCONS(_35reg3719);
if (True == _35reg3720) {
Obj _35reg3721 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3722 = PRIM_CAR(_35reg3721);
Obj path = _35reg3722;
Obj _35reg3723 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3724 = PRIM_CDR(_35reg3723);
Obj _35reg3725 = PRIM_ISCONS(_35reg3724);
if (True == _35reg3725) {
Obj _35reg3726 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3727 = PRIM_CDR(_35reg3726);
Obj _35reg3728 = PRIM_CAR(_35reg3727);
Obj import = _35reg3728;
Obj _35reg3729 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3730 = PRIM_CDR(_35reg3729);
Obj _35reg3731 = PRIM_CDR(_35reg3730);
Obj _35reg3732 = PRIM_ISCONS(_35reg3731);
if (True == _35reg3732) {
Obj _35reg3733 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3734 = PRIM_CDR(_35reg3733);
Obj _35reg3735 = PRIM_CDR(_35reg3734);
Obj _35reg3736 = PRIM_CAR(_35reg3735);
Obj body = _35reg3736;
Obj _35reg3737 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3738 = PRIM_CDR(_35reg3737);
Obj _35reg3739 = PRIM_CDR(_35reg3738);
Obj _35reg3740 = PRIM_CDR(_35reg3739);
Obj _35reg3741 = PRIM_EQ(Nil, _35reg3740);
if (True == _35reg3741) {
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
__arg0 = _35cc3386;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3386;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3386;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3386;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3386;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3386;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35cc3387 = makeNative(29, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg3689 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg3689) {
Obj _35reg3690 = PRIM_CAR(closureRef(co, 4));
Obj _35reg3691 = PRIM_EQ(symdef, _35reg3690);
if (True == _35reg3691) {
Obj _35reg3692 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3693 = PRIM_ISCONS(_35reg3692);
if (True == _35reg3693) {
Obj _35reg3694 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3695 = PRIM_CAR(_35reg3694);
Obj var = _35reg3695;
Obj _35reg3696 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3697 = PRIM_CDR(_35reg3696);
Obj _35reg3698 = PRIM_ISCONS(_35reg3697);
if (True == _35reg3698) {
Obj _35reg3699 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3700 = PRIM_CDR(_35reg3699);
Obj _35reg3701 = PRIM_CAR(_35reg3700);
Obj val = _35reg3701;
Obj _35reg3702 = PRIM_CDR(closureRef(co, 4));
Obj _35reg3703 = PRIM_CDR(_35reg3702);
Obj _35reg3704 = PRIM_CDR(_35reg3703);
Obj _35reg3705 = PRIM_EQ(Nil, _35reg3704);
if (True == _35reg3705) {
PUSH_CONT(co, 26, clofun8, 5, env, ns, import, globals, val);
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
__arg0 = _35cc3387;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3387;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3387;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3387;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3387;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35val3706 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj var1 = _35val3706;
PUSH_CONT(co, 27, clofun8, 6, var1, env, ns, import, globals, val);
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

label27:
{
Obj _35val3707 = __arg1;
Obj var1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _35reg3708 = makeCons(symset, Nil);
Obj _35reg3709 = makeCons(sym_37builtin, _35reg3708);
Obj _35reg3710 = makeCons(var1, Nil);
Obj _35reg3711 = makeCons(sym_37const, _35reg3710);
PUSH_CONT(co, 28, clofun8, 2, _35reg3711, _35reg3709);
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

label28:
{
Obj _35val3712 = __arg1;
Obj _35reg3711= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg3709= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg3713 = makeCons(_35val3712, Nil);
Obj _35reg3714 = makeCons(_35reg3711, _35reg3713);
Obj _35reg3715 = makeCons(_35reg3709, _35reg3714);
__nargs = 2;
__arg1 = _35reg3715;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
Obj _35cc3388 = makeNative(37, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg3669 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg3669) {
Obj _35reg3670 = PRIM_CAR(closureRef(co, 4));
Obj op = _35reg3670;
Obj _35reg3671 = PRIM_CDR(closureRef(co, 4));
Obj args = _35reg3671;
PUSH_CONT(co, 30, clofun8, 7, op, args, env, ns, import, globals, _35cc3388);
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
__arg0 = _35cc3388;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label30:
{
Obj _35val3672 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj _35cc3388= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
if (True == _35val3672) {
PUSH_CONT(co, 31, clofun8, 6, op, args, env, ns, import, globals);
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
__arg0 = _35cc3388;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj _35val3673 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj required = _35val3673;
PUSH_CONT(co, 32, clofun8, 7, required, op, args, env, ns, import, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val3674 = __arg1;
Obj required= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 6];
Obj provided = _35val3674;
Obj _35reg3675 = PRIM_EQ(required, provided);
if (True == _35reg3675) {
Obj _35reg3676 = makeCons(op, Nil);
Obj _35reg3677 = makeCons(sym_37builtin, _35reg3676);
PUSH_CONT(co, 35, clofun8, 2, args, _35reg3677);
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
Obj _35reg3681 = PRIM_GT(required, provided);
if (True == _35reg3681) {
Obj _35reg3682 = PRIM_SUB(required, provided);
PUSH_CONT(co, 33, clofun8, 6, op, args, env, ns, import, globals);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35temp_45list);
__arg1 = _35reg3682;
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

label33:
{
Obj _35val3683 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj tmp = _35val3683;
Obj _35reg3684 = makeCons(op, args);
PUSH_CONT(co, 34, clofun8, 5, tmp, env, ns, import, globals);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35append);
__arg1 = _35reg3684;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _35val3685 = __arg1;
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj _35reg3686 = makeCons(_35val3685, Nil);
Obj _35reg3687 = makeCons(tmp, _35reg3686);
Obj _35reg3688 = makeCons(symlambda, _35reg3687);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->args[5] = _35reg3688;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj _35val3678 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg3677= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
PUSH_CONT(co, 36, clofun8, 1, _35reg3677);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val3678;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35val3679 = __arg1;
Obj _35reg3677= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj _35reg3680 = makeCons(_35reg3677, _35val3679);
__nargs = 2;
__arg1 = _35reg3680;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj _35cc3389 = makeNative(39, clofun8, 0, 0);
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj ls = closureRef(co, 4);
PUSH_CONT(co, 38, clofun8, 1, ls);
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

label38:
{
Obj _35val3668 = __arg1;
Obj ls= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val3668;
__arg2 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _35p3368 = __arg1;
Obj _35p3369 = __arg2;
Obj _35p3370 = __arg3;
Obj _35cc3371 = makeNative(41, clofun8, 0, 3, _35p3368, _35p3369, _35p3370);
Obj s = _35p3368;
Obj ns = _35p3369;
Obj _35reg3666 = PRIM_EQ(Nil, _35p3370);
if (True == _35reg3666) {
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
__arg0 = _35cc3371;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj _35cc3372 = makeNative(49, clofun8, 0, 0);
Obj s = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj _35reg3656 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg3656) {
Obj _35reg3657 = PRIM_CAR(closureRef(co, 2));
Obj import = _35reg3657;
Obj _35reg3658 = PRIM_CDR(closureRef(co, 2));
Obj more = _35reg3658;
PUSH_CONT(co, 42, clofun8, 4, import, s, ns, more);
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
__arg0 = _35cc3372;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj _35val3659 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 43, clofun8, 4, import, s, ns, more);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35intern);
__arg1 = _35val3659;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _35val3660 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
PUSH_CONT(co, 44, clofun8, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35value_45or);
__arg1 = _35val3660;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val3661 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj export = _35val3661;
PUSH_CONT(co, 45, clofun8, 4, import, s, ns, more);
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

label45:
{
Obj _35val3662 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
if (True == _35val3662) {
PUSH_CONT(co, 46, clofun8, 1, import);
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

label46:
{
Obj _35val3663 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 47, clofun8, 1, import);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = makeCString("#");
__arg2 = _35val3663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj _35val3664 = __arg1;
Obj import= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 48, clofun8, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = import;
__arg2 = _35val3664;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35val3665 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35intern);
__arg1 = _35val3665;
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

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj var = __arg1;
Obj ns = __arg2;
Obj _35reg3650 = PRIM_EQ(ns, makeCString(""));
if (True == _35reg3650) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 1, clofun9, 2, var, ns);
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

label1:
{
Obj _35val3651 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == _35val3651) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 2, clofun9, 1, ns);
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

label2:
{
Obj _35val3652 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 3, clofun9, 1, ns);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = makeCString("#");
__arg2 = _35val3652;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj _35val3653 = __arg1;
Obj ns= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT(co, 4, clofun9, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = ns;
__arg2 = _35val3653;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3654 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35intern);
__arg1 = _35val3654;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj _35p3364 = __arg1;
Obj _35p3365 = __arg2;
Obj _35cc3366 = makeNative(6, clofun9, 0, 2, _35p3364, _35p3365);
Obj _35reg3648 = PRIM_EQ(MAKE_NUMBER(0), _35p3364);
if (True == _35reg3648) {
Obj res = _35p3365;
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3366;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc3367 = makeNative(7, clofun9, 0, 0);
Obj n = closureRef(co, 0);
Obj res = closureRef(co, 1);
Obj _35reg3645 = PRIM_SUB(n, MAKE_NUMBER(1));
Obj _35reg3646 = primGenSym(symtmp);
Obj _35reg3647 = makeCons(_35reg3646, res);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35temp_45list);
__arg1 = _35reg3645;
__arg2 = _35reg3647;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
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

label8:
{
Obj x = __arg1;
PUSH_CONT(co, 9, clofun9, 0);
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

label9:
{
Obj _35val3642 = __arg1;
Obj find = _35val3642;
PUSH_CONT(co, 10, clofun9, 1, find);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj _35val3643 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _35val3643) {
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

label11:
{
Obj x = __arg1;
PUSH_CONT(co, 12, clofun9, 0);
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

label12:
{
Obj _35val3639 = __arg1;
Obj find = _35val3639;
PUSH_CONT(co, 13, clofun9, 1, find);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3640 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == _35val3640) {
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

label14:
{
Obj x = __arg1;
PUSH_CONT(co, 15, clofun9, 0);
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

label15:
{
Obj _35val3635 = __arg1;
PUSH_CONT(co, 16, clofun9, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = _35val3635;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3636 = __arg1;
Obj _35reg3637 = primNot(_35val3636);
__nargs = 2;
__arg1 = _35reg3637;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35p3360 = __arg1;
Obj _35p3361 = __arg2;
Obj _35cc3362 = makeNative(18, clofun9, 0, 2, _35p3360, _35p3361);
Obj x = _35p3360;
Obj _35reg3564 = PRIM_EQ(Nil, _35p3361);
if (True == _35reg3564) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3362;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj _35cc3363 = makeNative(20, clofun9, 0, 0);
Obj x = closureRef(co, 0);
Obj _35reg3559 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg3559) {
Obj _35reg3560 = PRIM_CAR(closureRef(co, 1));
Obj hd = _35reg3560;
Obj _35reg3561 = PRIM_CDR(closureRef(co, 1));
Obj tl = _35reg3561;
PUSH_CONT(co, 19, clofun9, 2, x, tl);
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
__arg0 = _35cc3363;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val3562 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tl= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj _35reg3563 = PRIM_LT(_35val3562, MAKE_NUMBER(0));
if (True == _35reg3563) {
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

label20:
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

label21:
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

label22:
{
Obj _35p3354 = __arg1;
Obj _35p3355 = __arg2;
Obj _35p3356 = __arg3;
Obj _35cc3357 = makeNative(23, clofun9, 0, 3, _35p3354, _35p3355, _35p3356);
Obj __ = _35p3354;
Obj x = _35p3355;
Obj _35reg3556 = PRIM_EQ(Nil, _35p3356);
if (True == _35reg3556) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3357;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35cc3358 = makeNative(24, clofun9, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg3552 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg3552) {
Obj _35reg3553 = PRIM_CAR(closureRef(co, 2));
Obj a = _35reg3553;
Obj _35reg3554 = PRIM_CDR(closureRef(co, 2));
Obj b = _35reg3554;
Obj _35reg3555 = PRIM_EQ(x, a);
if (True == _35reg3555) {
__nargs = 2;
__arg1 = pos;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3358;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3358;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _35cc3359 = makeNative(25, clofun9, 0, 0);
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg3548 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg3548) {
Obj _35reg3549 = PRIM_CAR(closureRef(co, 2));
Obj a = _35reg3549;
Obj _35reg3550 = PRIM_CDR(closureRef(co, 2));
Obj b = _35reg3550;
Obj _35reg3551 = PRIM_ADD(pos, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35pos_45in_45list0);
__arg1 = _35reg3551;
__arg2 = x;
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc3359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
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
Obj _35p3349 = __arg1;
Obj _35p3350 = __arg2;
Obj _35p3351 = __arg3;
Obj _35cc3352 = makeNative(27, clofun9, 0, 3, _35p3349, _35p3350, _35p3351);
Obj f = _35p3349;
Obj acc = _35p3350;
Obj _35reg3546 = PRIM_EQ(Nil, _35p3351);
if (True == _35reg3546) {
__nargs = 2;
__arg1 = acc;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3352;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35cc3353 = makeNative(29, clofun9, 0, 0);
Obj f = closureRef(co, 0);
Obj acc = closureRef(co, 1);
Obj _35reg3542 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg3542) {
Obj _35reg3543 = PRIM_CAR(closureRef(co, 2));
Obj x = _35reg3543;
Obj _35reg3544 = PRIM_CDR(closureRef(co, 2));
Obj y = _35reg3544;
PUSH_CONT(co, 28, clofun9, 2, f, y);
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
__arg0 = _35cc3353;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35val3545 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = f;
__arg2 = _35val3545;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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

label30:
{
Obj _35p3344 = __arg1;
Obj _35p3345 = __arg2;
Obj _35cc3346 = makeNative(31, clofun9, 0, 2, _35p3344, _35p3345);
Obj var = _35p3344;
Obj _35reg3540 = PRIM_EQ(Nil, _35p3345);
if (True == _35reg3540) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3346;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj _35cc3347 = makeNative(32, clofun9, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj _35reg3530 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg3530) {
Obj _35reg3531 = PRIM_CAR(closureRef(co, 1));
Obj _35reg3532 = PRIM_ISCONS(_35reg3531);
if (True == _35reg3532) {
Obj _35reg3533 = PRIM_CAR(closureRef(co, 1));
Obj _35reg3534 = PRIM_CAR(_35reg3533);
Obj x = _35reg3534;
Obj _35reg3535 = PRIM_CAR(closureRef(co, 1));
Obj _35reg3536 = PRIM_CDR(_35reg3535);
Obj y = _35reg3536;
Obj _35reg3537 = PRIM_CDR(closureRef(co, 1));
Obj __ = _35reg3537;
Obj _35reg3538 = PRIM_EQ(var, x);
if (True == _35reg3538) {
Obj _35reg3539 = makeCons(x, y);
__nargs = 2;
__arg1 = _35reg3539;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc3347;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3347;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc3347;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _35cc3348 = makeNative(33, clofun9, 0, 0);
Obj var = closureRef(co, 0);
Obj _35reg3527 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg3527) {
Obj _35reg3528 = PRIM_CAR(closureRef(co, 1));
Obj __ = _35reg3528;
Obj _35reg3529 = PRIM_CDR(closureRef(co, 1));
Obj y = _35reg3529;
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
__arg0 = _35cc3348;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
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

