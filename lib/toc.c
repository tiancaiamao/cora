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
symexport = intern("export");
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
Obj _35val2342 = __arg1;
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
Obj _35val2343 = __arg1;
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
Obj _35val2344 = __arg1;
Obj _35reg2345 = primSet(co, symcora_47lib_47toc_35_42ns_45export_42, Nil);
Obj _35reg2360 = primSet(co, symcora_47lib_47toc_35assq, makeNative(27, clofun9, 2, 0));
Obj _35reg2366 = primSet(co, symcora_47lib_47toc_35foldl, makeNative(23, clofun9, 3, 0));
Obj _35reg2376 = primSet(co, symcora_47lib_47toc_35pos_45in_45list0, makeNative(19, clofun9, 3, 0));
Obj _35reg2377 = primSet(co, symcora_47lib_47toc_35index, makeNative(18, clofun9, 2, 0));
Obj _35reg2384 = primSet(co, symcora_47lib_47toc_35exist_45in_45env, makeNative(14, clofun9, 2, 0));
Obj _35reg2385 = makeCons(makeCString("primSet"), Nil);
Obj _35reg2386 = makeCons(MAKE_NUMBER(2), _35reg2385);
Obj _35reg2387 = makeCons(symset, _35reg2386);
Obj _35reg2388 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj _35reg2389 = makeCons(MAKE_NUMBER(1), _35reg2388);
Obj _35reg2390 = makeCons(symcar, _35reg2389);
Obj _35reg2391 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj _35reg2392 = makeCons(MAKE_NUMBER(1), _35reg2391);
Obj _35reg2393 = makeCons(symcdr, _35reg2392);
Obj _35reg2394 = makeCons(makeCString("makeCons"), Nil);
Obj _35reg2395 = makeCons(MAKE_NUMBER(2), _35reg2394);
Obj _35reg2396 = makeCons(symcons, _35reg2395);
Obj _35reg2397 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj _35reg2398 = makeCons(MAKE_NUMBER(1), _35reg2397);
Obj _35reg2399 = makeCons(symcons_63, _35reg2398);
Obj _35reg2400 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj _35reg2401 = makeCons(MAKE_NUMBER(2), _35reg2400);
Obj _35reg2402 = makeCons(sym_43, _35reg2401);
Obj _35reg2403 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj _35reg2404 = makeCons(MAKE_NUMBER(2), _35reg2403);
Obj _35reg2405 = makeCons(sym_45, _35reg2404);
Obj _35reg2406 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj _35reg2407 = makeCons(MAKE_NUMBER(2), _35reg2406);
Obj _35reg2408 = makeCons(sym_42, _35reg2407);
Obj _35reg2409 = makeCons(makeCString("primDiv"), Nil);
Obj _35reg2410 = makeCons(MAKE_NUMBER(2), _35reg2409);
Obj _35reg2411 = makeCons(sym_47, _35reg2410);
Obj _35reg2412 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj _35reg2413 = makeCons(MAKE_NUMBER(2), _35reg2412);
Obj _35reg2414 = makeCons(sym_61, _35reg2413);
Obj _35reg2415 = makeCons(makeCString("PRIM_GT"), Nil);
Obj _35reg2416 = makeCons(MAKE_NUMBER(2), _35reg2415);
Obj _35reg2417 = makeCons(sym_62, _35reg2416);
Obj _35reg2418 = makeCons(makeCString("PRIM_LT"), Nil);
Obj _35reg2419 = makeCons(MAKE_NUMBER(2), _35reg2418);
Obj _35reg2420 = makeCons(sym_60, _35reg2419);
Obj _35reg2421 = makeCons(makeCString("primGenSym"), Nil);
Obj _35reg2422 = makeCons(MAKE_NUMBER(1), _35reg2421);
Obj _35reg2423 = makeCons(symgensym, _35reg2422);
Obj _35reg2424 = makeCons(makeCString("primIsSymbol"), Nil);
Obj _35reg2425 = makeCons(MAKE_NUMBER(1), _35reg2424);
Obj _35reg2426 = makeCons(symsymbol_63, _35reg2425);
Obj _35reg2427 = makeCons(makeCString("primNot"), Nil);
Obj _35reg2428 = makeCons(MAKE_NUMBER(1), _35reg2427);
Obj _35reg2429 = makeCons(symnot, _35reg2428);
Obj _35reg2430 = makeCons(makeCString("primIsNumber"), Nil);
Obj _35reg2431 = makeCons(MAKE_NUMBER(1), _35reg2430);
Obj _35reg2432 = makeCons(syminteger_63, _35reg2431);
Obj _35reg2433 = makeCons(makeCString("primIsString"), Nil);
Obj _35reg2434 = makeCons(MAKE_NUMBER(1), _35reg2433);
Obj _35reg2435 = makeCons(symstring_63, _35reg2434);
Obj _35reg2436 = makeCons(_35reg2435, Nil);
Obj _35reg2437 = makeCons(_35reg2432, _35reg2436);
Obj _35reg2438 = makeCons(_35reg2429, _35reg2437);
Obj _35reg2439 = makeCons(_35reg2426, _35reg2438);
Obj _35reg2440 = makeCons(_35reg2423, _35reg2439);
Obj _35reg2441 = makeCons(_35reg2420, _35reg2440);
Obj _35reg2442 = makeCons(_35reg2417, _35reg2441);
Obj _35reg2443 = makeCons(_35reg2414, _35reg2442);
Obj _35reg2444 = makeCons(_35reg2411, _35reg2443);
Obj _35reg2445 = makeCons(_35reg2408, _35reg2444);
Obj _35reg2446 = makeCons(_35reg2405, _35reg2445);
Obj _35reg2447 = makeCons(_35reg2402, _35reg2446);
Obj _35reg2448 = makeCons(_35reg2399, _35reg2447);
Obj _35reg2449 = makeCons(_35reg2396, _35reg2448);
Obj _35reg2450 = makeCons(_35reg2393, _35reg2449);
Obj _35reg2451 = makeCons(_35reg2390, _35reg2450);
Obj _35reg2452 = makeCons(_35reg2387, _35reg2451);
Obj _35reg2453 = primSet(co, symcora_47lib_47toc_35_42builtin_45prims_42, _35reg2452);
Obj _35reg2457 = primSet(co, symcora_47lib_47toc_35builtin_63, makeNative(11, clofun9, 1, 0));
Obj _35reg2460 = primSet(co, symcora_47lib_47toc_35builtin_45_62name, makeNative(8, clofun9, 1, 0));
Obj _35reg2463 = primSet(co, symcora_47lib_47toc_35builtin_45_62args, makeNative(5, clofun9, 1, 0));
Obj _35reg2468 = primSet(co, symcora_47lib_47toc_35temp_45list, makeNative(2, clofun9, 2, 0));
Obj _35reg2474 = primSet(co, symcora_47lib_47toc_35var_45with_45ns, makeNative(47, clofun8, 2, 0));
Obj _35reg2486 = primSet(co, symcora_47lib_47toc_35lookup_45var, makeNative(37, clofun8, 3, 0));
Obj _35reg2678 = primSet(co, symcora_47lib_47toc_35parse, makeNative(49, clofun7, 5, 0));
Obj _35reg2689 = primSet(co, symcora_47lib_47toc_35union, makeNative(43, clofun7, 2, 0));
Obj _35reg2700 = primSet(co, symcora_47lib_47toc_35diff, makeNative(37, clofun7, 2, 0));
Obj _35reg2751 = primSet(co, symcora_47lib_47toc_35convert_45protect_63, makeNative(30, clofun7, 1, 0));
Obj _35reg2926 = primSet(co, symcora_47lib_47toc_35free_45vars, makeNative(7, clofun7, 1, 0));
Obj _35reg2999 = primSet(co, symcora_47lib_47toc_35closure_45convert, makeNative(42, clofun6, 2, 0));
Obj _35reg3002 = primSet(co, symcora_47lib_47toc_35id, makeNative(41, clofun6, 1, 0));
Obj _35reg3139 = primSet(co, symcora_47lib_47toc_35tailify, makeNative(23, clofun6, 2, 0));
Obj _35reg3186 = primSet(co, symcora_47lib_47toc_35tailify_45list, makeNative(13, clofun6, 3, 0));
Obj _35reg3265 = primSet(co, symcora_47lib_47toc_35explicit_45stack, makeNative(45, clofun5, 2, 0));
Obj _35reg3363 = primSet(co, symcora_47lib_47toc_35collect_45lambda, makeNative(25, clofun5, 2, 0));
Obj _35reg3371 = primSet(co, symcora_47lib_47toc_35append_45result, makeNative(21, clofun5, 2, 0));
Obj _35reg3378 = primSet(co, symcora_47lib_47toc_35wrap_45var, makeNative(19, clofun5, 2, 0));
Obj _35reg3398 = primSet(co, symcora_47lib_47toc_35generate_45call_45list, makeNative(5, clofun5, 4, 0));
Obj _35reg3403 = primSet(co, symcora_47lib_47toc_35add_45symbol_45to_45list, makeNative(2, clofun5, 2, 0));
Obj _35reg3676 = primSet(co, symcora_47lib_47toc_35generate_45inst, makeNative(18, clofun3, 4, 0));
Obj _35reg3701 = primSet(co, symcora_47lib_47toc_35generate_45cont, makeNative(4, clofun3, 3, 0));
Obj _35reg3710 = primSet(co, symcora_47lib_47toc_35generate_45inst_45list_45h, makeNative(48, clofun2, 5, 0));
Obj _35reg3711 = primSet(co, symcora_47lib_47toc_35generate_45inst_45list, makeNative(47, clofun2, 4, 0));
Obj _35reg3712 = primSet(co, symcora_47lib_47toc_35_42mod_45num_42, MAKE_NUMBER(50));
Obj _35reg3716 = primSet(co, symcora_47lib_47toc_35generate_45group_45name, makeNative(45, clofun2, 3, 0));
Obj _35reg3720 = primSet(co, symcora_47lib_47toc_35code_45gen_45func_45declare, makeNative(41, clofun2, 3, 0));
Obj _35reg3728 = primSet(co, symcora_47lib_47toc_35local_45from_45params, makeNative(34, clofun2, 3, 0));
Obj _35reg3733 = primSet(co, symcora_47lib_47toc_35local_45from_45cont, makeNative(29, clofun2, 3, 0));
Obj _35reg3740 = primSet(co, symcora_47lib_47toc_35generate_45call_45args_45reverse, makeNative(25, clofun2, 4, 0));
Obj _35reg3803 = primSet(co, symcora_47lib_47toc_35code_45gen_45toplevel, makeNative(13, clofun2, 3, 0));
Obj _35reg3804 = primSet(co, symcora_47lib_47toc_35parse_45pass, makeNative(12, clofun2, 2, 0));
Obj _35reg3805 = primSet(co, symcora_47lib_47toc_35closure_45convert_45pass, makeNative(11, clofun2, 1, 0));
Obj _35reg3806 = primSet(co, symcora_47lib_47toc_35tailify_45pass, makeNative(10, clofun2, 1, 0));
Obj _35reg3807 = primSet(co, symcora_47lib_47toc_35explicit_45stack_45pass, makeNative(9, clofun2, 1, 0));
Obj _35reg3817 = primSet(co, symcora_47lib_47toc_35collect_45lambda_45pass, makeNative(3, clofun2, 1, 0));
Obj _35reg3824 = primSet(co, symcora_47lib_47toc_35rewrite_45_45_62macro, makeNative(0, clofun2, 2, 0));
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
Obj _35val3827 = __arg1;
Obj _35reg3833 = primSet(co, symcora_47lib_47toc_35compile, makeNative(41, clofun1, 2, 0));
Obj _35reg3839 = primSet(co, symcora_47lib_47toc_35for_45each, makeNative(37, clofun1, 2, 0));
Obj _35reg3846 = primSet(co, symcora_47lib_47toc_35generate_45jumptable, makeNative(33, clofun1, 3, 0));
Obj _35reg3867 = primSet(co, symcora_47lib_47toc_35generate_45toplevel_45group, makeNative(11, clofun1, 3, 0));
Obj _35reg3882 = primSet(co, symcora_47lib_47toc_35group_45by_45mod_45h, makeNative(5, clofun1, 4, 0));
Obj _35reg3893 = primSet(co, symcora_47lib_47toc_35generate_45entry, makeNative(42, clofun0, 2, 0));
Obj _35reg3904 = primSet(co, symcora_47lib_47toc_35generate_45c, makeNative(29, clofun0, 3, 0));
Obj _35reg3945 = primSet(co, symcora_47lib_47toc_35handle_45import_45eagerly, makeNative(22, clofun0, 1, 0));
Obj _35reg3986 = primSet(co, symcora_47lib_47toc_35split_45type_45and_45code, makeNative(15, clofun0, 4, 0));
Obj _35reg3987 = primSet(co, symcora_47lib_47infer_35_42typecheck_42, False);
Obj _35reg3990 = primSet(co, symcora_47lib_47toc_35preprocess, makeNative(12, clofun0, 1, 0));
Obj _35reg3999 = primSet(co, symcora_47lib_47toc_35compile_45to_45c, makeNative(5, clofun0, 2, 0));
__nargs = 2;
__arg1 = _35reg3999;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj from = __arg1;
Obj to = __arg2;
Obj _35reg3991 = primGenSym(symcollect);
Obj globals = _35reg3991;
Obj _35reg3992 = primSet(co, globals, Nil);
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
Obj _35val3993 = __arg1;
Obj from= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 7, clofun0, 3, _35val3993, to, globals);
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
Obj _35val3994 = __arg1;
Obj _35val3993= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 8, clofun0, 3, _35val3993, to, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = _35val3994;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3995 = __arg1;
Obj _35val3993= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 9, clofun0, 2, to, globals);
__nargs = 2;
__arg0 = _35val3993;
__arg1 = _35val3995;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3996 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj bc = _35val3996;
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
Obj _35val3997 = __arg1;
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stream = _35val3997;
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
Obj _35val3998 = __arg1;
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
Obj _35val3988 = __arg1;
Obj sexp = _35val3988;
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
Obj _35val3989 = __arg1;
Obj sexp= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 2;
__arg1 = sexp;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun0) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35p2334 = __arg1;
Obj _35p2335 = __arg2;
Obj _35p2336 = __arg3;
Obj _35p2337 = co->args[4];
Obj _35cc2338 = makeNative(18, clofun0, 0, 4, _35p2334, _35p2335, _35p2336, _35p2337);
Obj _35reg3983 = PRIM_EQ(Nil, _35p2334);
if (True == _35reg3983) {
Obj type = _35p2335;
Obj code = _35p2336;
Obj k = _35p2337;
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
__arg0 = _35cc2338;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val3984 = __arg1;
Obj code= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 17, clofun0, 2, k, _35val3984);
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
Obj _35val3985 = __arg1;
Obj k= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val3984= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = k;
__arg1 = _35val3984;
__arg2 = _35val3985;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj _35cc2339 = makeNative(19, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3972 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3972) {
Obj _35reg3973 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3974 = PRIM_ISCONS(_35reg3973);
if (True == _35reg3974) {
Obj _35reg3975 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3976 = PRIM_CAR(_35reg3975);
Obj _35reg3977 = PRIM_EQ(sym_58type, _35reg3976);
if (True == _35reg3977) {
Obj _35reg3978 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3979 = PRIM_CDR(_35reg3978);
Obj exp = _35reg3979;
Obj _35reg3980 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg3980;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3981 = makeCons(symbegin, exp);
Obj _35reg3982 = makeCons(_35reg3981, type);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = _35reg3982;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2339;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35cc2340 = makeNative(20, clofun0, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3961 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3961) {
Obj _35reg3962 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3963 = PRIM_ISCONS(_35reg3962);
if (True == _35reg3963) {
Obj _35reg3964 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3965 = PRIM_CAR(_35reg3964);
Obj _35reg3966 = PRIM_EQ(sym_58declare, _35reg3965);
if (True == _35reg3966) {
Obj _35reg3967 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3968 = PRIM_CDR(_35reg3967);
Obj exp = _35reg3968;
Obj _35reg3969 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg3969;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3970 = makeCons(symdeclare, exp);
Obj _35reg3971 = makeCons(_35reg3970, type);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = _35reg3971;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc2341 = makeNative(21, clofun0, 0, 0);
Obj _35reg3946 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3946) {
Obj _35reg3947 = PRIM_CAR(closureRef(co, 0));
Obj exp = _35reg3947;
Obj _35reg3948 = PRIM_CDR(closureRef(co, 0));
Obj more = _35reg3948;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj _35reg3949 = makeCons(exp, Nil);
Obj _35reg3950 = makeCons(symbackquote, _35reg3949);
Obj _35reg3951 = makeCons(_35reg3950, Nil);
Obj _35reg3952 = makeCons(symmacroexpand, _35reg3951);
Obj _35reg3953 = makeCons(symtvar, Nil);
Obj _35reg3954 = makeCons(Nil, Nil);
Obj _35reg3955 = makeCons(Nil, _35reg3954);
Obj _35reg3956 = makeCons(_35reg3953, _35reg3955);
Obj _35reg3957 = makeCons(_35reg3952, _35reg3956);
Obj _35reg3958 = makeCons(symcora_47lib_47infer_35check_45type, _35reg3957);
Obj _35reg3959 = makeCons(_35reg3958, type);
Obj _35reg3960 = makeCons(exp, code);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = _35reg3959;
__arg3 = _35reg3960;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2341;
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
Obj _35p2328 = __arg1;
Obj _35cc2329 = makeNative(23, clofun0, 0, 1, _35p2328);
Obj _35reg3936 = PRIM_ISCONS(_35p2328);
if (True == _35reg3936) {
Obj _35reg3937 = PRIM_CAR(_35p2328);
Obj _35reg3938 = PRIM_EQ(symdefine_45library, _35reg3937);
if (True == _35reg3938) {
Obj _35reg3939 = PRIM_CDR(_35p2328);
Obj _35reg3940 = PRIM_ISCONS(_35reg3939);
if (True == _35reg3940) {
Obj _35reg3941 = PRIM_CDR(_35p2328);
Obj _35reg3942 = PRIM_CAR(_35reg3941);
Obj __ = _35reg3942;
Obj _35reg3943 = PRIM_CDR(_35p2328);
Obj _35reg3944 = PRIM_CDR(_35reg3943);
Obj remain = _35reg3944;
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
__arg0 = _35cc2329;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2329;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2329;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35cc2330 = makeNative(24, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg3932 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3932) {
Obj _35reg3933 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3934 = PRIM_EQ(symbegin, _35reg3933);
if (True == _35reg3934) {
Obj _35reg3935 = PRIM_CDR(closureRef(co, 0));
Obj remain = _35reg3935;
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
__arg0 = _35cc2330;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2330;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _35cc2331 = makeNative(25, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg3923 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3923) {
Obj _35reg3924 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3925 = PRIM_ISCONS(_35reg3924);
if (True == _35reg3925) {
Obj _35reg3926 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3927 = PRIM_CAR(_35reg3926);
Obj _35reg3928 = PRIM_EQ(symexport, _35reg3927);
if (True == _35reg3928) {
Obj _35reg3929 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3930 = PRIM_CDR(_35reg3929);
Obj more = _35reg3930;
Obj _35reg3931 = PRIM_CDR(closureRef(co, 0));
Obj remain = _35reg3931;
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
__arg0 = _35cc2331;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2331;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2331;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35cc2332 = makeNative(27, clofun0, 0, 1, closureRef(co, 0));
Obj _35reg3905 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3905) {
Obj _35reg3906 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3907 = PRIM_ISCONS(_35reg3906);
if (True == _35reg3907) {
Obj _35reg3908 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3909 = PRIM_CAR(_35reg3908);
Obj _35reg3910 = PRIM_EQ(symimport, _35reg3909);
if (True == _35reg3910) {
Obj _35reg3911 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3912 = PRIM_CDR(_35reg3911);
Obj _35reg3913 = PRIM_ISCONS(_35reg3912);
if (True == _35reg3913) {
Obj _35reg3914 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3915 = PRIM_CDR(_35reg3914);
Obj _35reg3916 = PRIM_CAR(_35reg3915);
Obj pkg = _35reg3916;
Obj _35reg3917 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3918 = PRIM_CDR(_35reg3917);
Obj _35reg3919 = PRIM_CDR(_35reg3918);
Obj _35reg3920 = PRIM_EQ(Nil, _35reg3919);
if (True == _35reg3920) {
Obj _35reg3921 = PRIM_CDR(closureRef(co, 0));
Obj remain = _35reg3921;
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
__arg0 = _35cc2332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2332;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35val3922 = __arg1;
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

label27:
{
Obj _35cc2333 = makeNative(28, clofun0, 0, 0);
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
Obj _35val3894 = __arg1;
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj groups = _35val3894;
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
Obj _35val3895 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj maxid = _35val3895;
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
Obj _35val3896 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 3];
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
Obj _35val3897 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 3];
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
Obj _35val3900 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 3];
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
Obj _35val3901 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 3];
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
Obj _35val3902 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 37, clofun0, 3, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45entry);
__arg1 = to;
__arg2 = _35val3902;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj _35val3903 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj groups= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3898 = __arg1;
PUSH_CONT(co, 41, clofun0, 0);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35code_45gen_45func_45declare);
__arg1 = closureRef(co, 1);
__arg2 = _35val3898;
__arg3 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val3899 = __arg1;
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
Obj _35val3885 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3886 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3892 = __arg1;
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
Obj _35val3887 = __arg1;
Obj sym= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3888 = __arg1;
Obj sym= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3889 = __arg1;
Obj sym= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3890 = __arg1;
PUSH_CONT(co, 1, clofun1, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = _35val3890;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val3891 = __arg1;
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
Obj _35val3883 = __arg1;
Obj sym= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3884 = __arg1;
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
Obj _35p2322 = __arg1;
Obj _35p2323 = __arg2;
Obj _35p2324 = __arg3;
Obj _35p2325 = co->args[4];
Obj _35cc2326 = makeNative(8, clofun1, 0, 4, _35p2322, _35p2323, _35p2324, _35p2325);
Obj res = _35p2322;
Obj idx = _35p2323;
Obj acc = _35p2324;
Obj _35reg3877 = PRIM_EQ(Nil, _35p2325);
if (True == _35reg3877) {
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
__arg0 = _35cc2326;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val3878 = __arg1;
Obj acc= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3879 = primNot(_35val3878);
if (True == _35reg3879) {
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
Obj _35val3880 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3881 = makeCons(_35val3880, res);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = _35reg3881;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35cc2327 = makeNative(10, clofun1, 0, 0);
Obj res = closureRef(co, 0);
Obj idx = closureRef(co, 1);
Obj acc = closureRef(co, 2);
Obj _35reg3868 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg3868) {
Obj _35reg3869 = PRIM_CAR(closureRef(co, 3));
Obj bc = _35reg3869;
Obj _35reg3870 = PRIM_CDR(closureRef(co, 3));
Obj more = _35reg3870;
Obj _35reg3871 = PRIM_EQ(idx, globalRef(symcora_47lib_47toc_35_42mod_45num_42));
if (True == _35reg3871) {
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
Obj _35reg3875 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj _35reg3876 = makeCons(bc, acc);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = res;
__arg2 = _35reg3875;
__arg3 = _35reg3876;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35val3872 = __arg1;
Obj res= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj bc= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3873 = makeCons(_35val3872, res);
Obj _35reg3874 = makeCons(bc, more);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = _35reg3873;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = _35reg3874;
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
Obj _35val3847 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 13, clofun1, 3, maxid, group, to);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35code_45gen_45func_45declare);
__arg1 = to;
__arg2 = _35val3847;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3848 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3849 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3850 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3851 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3852 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3853 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3854 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3855 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3856 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 22, clofun1, 3, maxid, group, to);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45jumptable);
__arg1 = to;
__arg2 = MAKE_NUMBER(0);
__arg3 = _35val3856;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj _35val3857 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3858 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3859 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj group= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3860 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3861 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3862 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3863 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3864 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3865 = __arg1;
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3866 = __arg1;
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
Obj _35reg3840 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == _35reg3840) {
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
Obj _35reg3842 = PRIM_LT(i, n);
if (True == _35reg3842) {
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
Obj _35val3843 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3844 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj to= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj n= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3845 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45jumptable);
__arg1 = to;
__arg2 = _35reg3845;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj _35val3841 = __arg1;
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

label37:
{
Obj _35p2318 = __arg1;
Obj _35p2319 = __arg2;
Obj _35cc2320 = makeNative(38, clofun1, 0, 2, _35p2318, _35p2319);
Obj fn = _35p2318;
Obj _35reg3838 = PRIM_EQ(Nil, _35p2319);
if (True == _35reg3838) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun1) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35cc2321 = makeNative(40, clofun1, 0, 0);
Obj fn = closureRef(co, 0);
Obj _35reg3834 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg3834) {
Obj _35reg3835 = PRIM_CAR(closureRef(co, 1));
Obj x = _35reg3835;
Obj _35reg3836 = PRIM_CDR(closureRef(co, 1));
Obj y = _35reg3836;
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
__arg0 = _35cc2321;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _35val3837 = __arg1;
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
Obj _35val3828 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 43, clofun1, 0);
__nargs = 2;
__arg0 = _35val3828;
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj _35val3829 = __arg1;
PUSH_CONT(co, 44, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert_45pass);
__arg1 = _35val3829;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val3830 = __arg1;
PUSH_CONT(co, 45, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45pass);
__arg1 = _35val3830;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35val3831 = __arg1;
PUSH_CONT(co, 46, clofun1, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack_45pass);
__arg1 = _35val3831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj _35val3832 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda_45pass);
__arg1 = _35val3832;
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
Obj _35val3825 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj obj = _35val3825;
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
Obj _35val3826 = __arg1;
Obj obj= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fns = _35val3826;
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
Obj _35p2314 = __arg1;
Obj _35p2315 = __arg2;
Obj _35cc2316 = makeNative(1, clofun2, 0, 2, _35p2314, _35p2315);
Obj obj = _35p2314;
Obj _35reg3823 = PRIM_EQ(Nil, _35p2315);
if (True == _35reg3823) {
__nargs = 2;
__arg1 = obj;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2316;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35cc2317 = makeNative(2, clofun2, 0, 0);
Obj obj = closureRef(co, 0);
Obj _35reg3818 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg3818) {
Obj _35reg3819 = PRIM_CAR(closureRef(co, 1));
Obj hd = _35reg3819;
Obj _35reg3820 = PRIM_CDR(closureRef(co, 1));
Obj more = _35reg3820;
Obj _35reg3821 = makeCons(obj, Nil);
Obj _35reg3822 = makeCons(hd, _35reg3821);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35rewrite_45_45_62macro);
__arg1 = _35reg3822;
__arg2 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2317;
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
Obj _35val3808 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v = _35val3808;
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
Obj _35val3809 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3810 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3811 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj e1 = _35val3811;
Obj _35reg3812 = makeCons(e1, Nil);
Obj _35reg3813 = makeCons(Nil, _35reg3812);
Obj _35reg3814 = makeCons(Nil, _35reg3813);
Obj _35reg3815 = makeCons(symlambda, _35reg3814);
PUSH_CONT(co, 8, clofun2, 1, v);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg3815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3816 = __arg1;
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
Obj _35p2309 = __arg1;
Obj _35p2310 = __arg2;
Obj _35p2311 = __arg3;
Obj _35cc2312 = makeNative(21, clofun2, 0, 3, _35p2309, _35p2310, _35p2311);
Obj w = _35p2309;
Obj _35reg3743 = PRIM_ISCONS(_35p2310);
if (True == _35reg3743) {
Obj _35reg3744 = PRIM_CAR(_35p2310);
Obj label = _35reg3744;
Obj _35reg3745 = PRIM_CDR(_35p2310);
Obj _35reg3746 = PRIM_ISCONS(_35reg3745);
if (True == _35reg3746) {
Obj _35reg3747 = PRIM_CDR(_35p2310);
Obj _35reg3748 = PRIM_CAR(_35reg3747);
Obj _35reg3749 = PRIM_ISCONS(_35reg3748);
if (True == _35reg3749) {
Obj _35reg3750 = PRIM_CDR(_35p2310);
Obj _35reg3751 = PRIM_CAR(_35reg3750);
Obj _35reg3752 = PRIM_CAR(_35reg3751);
Obj _35reg3753 = PRIM_EQ(symlambda, _35reg3752);
if (True == _35reg3753) {
Obj _35reg3754 = PRIM_CDR(_35p2310);
Obj _35reg3755 = PRIM_CAR(_35reg3754);
Obj _35reg3756 = PRIM_CDR(_35reg3755);
Obj _35reg3757 = PRIM_ISCONS(_35reg3756);
if (True == _35reg3757) {
Obj _35reg3758 = PRIM_CDR(_35p2310);
Obj _35reg3759 = PRIM_CAR(_35reg3758);
Obj _35reg3760 = PRIM_CDR(_35reg3759);
Obj _35reg3761 = PRIM_CAR(_35reg3760);
Obj params = _35reg3761;
Obj _35reg3762 = PRIM_CDR(_35p2310);
Obj _35reg3763 = PRIM_CAR(_35reg3762);
Obj _35reg3764 = PRIM_CDR(_35reg3763);
Obj _35reg3765 = PRIM_CDR(_35reg3764);
Obj _35reg3766 = PRIM_ISCONS(_35reg3765);
if (True == _35reg3766) {
Obj _35reg3767 = PRIM_CDR(_35p2310);
Obj _35reg3768 = PRIM_CAR(_35reg3767);
Obj _35reg3769 = PRIM_CDR(_35reg3768);
Obj _35reg3770 = PRIM_CDR(_35reg3769);
Obj _35reg3771 = PRIM_CAR(_35reg3770);
Obj actives = _35reg3771;
Obj _35reg3772 = PRIM_CDR(_35p2310);
Obj _35reg3773 = PRIM_CAR(_35reg3772);
Obj _35reg3774 = PRIM_CDR(_35reg3773);
Obj _35reg3775 = PRIM_CDR(_35reg3774);
Obj _35reg3776 = PRIM_CDR(_35reg3775);
Obj _35reg3777 = PRIM_ISCONS(_35reg3776);
if (True == _35reg3777) {
Obj _35reg3778 = PRIM_CDR(_35p2310);
Obj _35reg3779 = PRIM_CAR(_35reg3778);
Obj _35reg3780 = PRIM_CDR(_35reg3779);
Obj _35reg3781 = PRIM_CDR(_35reg3780);
Obj _35reg3782 = PRIM_CDR(_35reg3781);
Obj _35reg3783 = PRIM_CAR(_35reg3782);
Obj body = _35reg3783;
Obj _35reg3784 = PRIM_CDR(_35p2310);
Obj _35reg3785 = PRIM_CAR(_35reg3784);
Obj _35reg3786 = PRIM_CDR(_35reg3785);
Obj _35reg3787 = PRIM_CDR(_35reg3786);
Obj _35reg3788 = PRIM_CDR(_35reg3787);
Obj _35reg3789 = PRIM_CDR(_35reg3788);
Obj _35reg3790 = PRIM_EQ(Nil, _35reg3789);
if (True == _35reg3790) {
Obj _35reg3791 = PRIM_CDR(_35p2310);
Obj _35reg3792 = PRIM_CDR(_35reg3791);
Obj _35reg3793 = PRIM_EQ(Nil, _35reg3792);
if (True == _35reg3793) {
Obj maxid = _35p2311;
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
__arg0 = _35cc2312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2312;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val3794 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg3795 = PRIM_SUB(maxid, label);
PUSH_CONT(co, 15, clofun2, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = _35reg3795;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3796 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
PUSH_CONT(co, 16, clofun2, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = _35val3796;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35val3797 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
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
Obj _35val3798 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
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
Obj _35val3799 = __arg1;
Obj actives= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 5];
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
Obj _35val3800 = __arg1;
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3801 = makeCons(maxid, label);
PUSH_CONT(co, 20, clofun2, 1, w);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = _35reg3801;
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
Obj _35val3802 = __arg1;
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

label21:
{
Obj _35cc2313 = makeNative(24, clofun2, 0, 0);
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
Obj _35val3741 = __arg1;
Obj other= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3742 = __arg1;
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
Obj _35p2303 = __arg1;
Obj _35p2304 = __arg2;
Obj _35p2305 = __arg3;
Obj _35p2306 = co->args[4];
Obj _35cc2307 = makeNative(26, clofun2, 0, 4, _35p2303, _35p2304, _35p2305, _35p2306);
Obj fn = _35p2303;
Obj w = _35p2304;
Obj idx = _35p2305;
Obj _35reg3739 = PRIM_EQ(Nil, _35p2306);
if (True == _35reg3739) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2307;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35cc2308 = makeNative(28, clofun2, 0, 0);
Obj fn = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj idx = closureRef(co, 2);
Obj _35reg3734 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg3734) {
Obj _35reg3735 = PRIM_CAR(closureRef(co, 3));
Obj a = _35reg3735;
Obj _35reg3736 = PRIM_CDR(closureRef(co, 3));
Obj b = _35reg3736;
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
__arg0 = _35cc2308;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35val3737 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3738 = PRIM_ADD(idx, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45args_45reverse);
__arg1 = fn;
__arg2 = w;
__arg3 = _35reg3738;
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
Obj _35val3729 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3730 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 32, clofun2, 2, i, w);
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

label32:
{
Obj _35val3731 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3732 = __arg1;
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
Obj _35val3721 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3722 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3723 = PRIM_LT(i, MAKE_NUMBER(4));
if (True == _35reg3723) {
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
Obj _35val3726 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3727 = __arg1;
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

label39:
{
Obj _35val3724 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3725 = __arg1;
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
Obj _35val3717 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj maxid= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3718 = __arg1;
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3719 = __arg1;
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

label45:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
Obj _35reg3713 = PRIM_SUB(maxid, label);
Obj _35reg3714 = primDiv(_35reg3713, globalRef(symcora_47lib_47toc_35_42mod_45num_42));
Obj gid = _35reg3714;
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
Obj _35val3715 = __arg1;
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
Obj _35p2296 = __arg1;
Obj _35p2297 = __arg2;
Obj _35p2298 = __arg3;
Obj _35p2299 = co->args[4];
Obj _35p2300 = co->args[5];
Obj _35cc2301 = makeNative(49, clofun2, 0, 5, _35p2296, _35p2297, _35p2298, _35p2299, _35p2300);
Obj self = _35p2296;
Obj env = _35p2297;
Obj fn = _35p2298;
Obj w = _35p2299;
Obj _35reg3709 = PRIM_EQ(Nil, _35p2300);
if (True == _35reg3709) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun2) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2301;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj _35cc2302 = makeNative(3, clofun3, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj fn = closureRef(co, 2);
Obj w = closureRef(co, 3);
Obj _35reg3702 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg3702) {
Obj _35reg3703 = PRIM_CAR(closureRef(co, 4));
Obj a = _35reg3703;
Obj _35reg3704 = PRIM_CDR(closureRef(co, 4));
Obj b = _35reg3704;
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
__arg0 = _35cc2302;
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
Obj _35val3705 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
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
Obj _35val3706 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fn= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg3707 = primNot(_35val3706);
if (True == _35reg3707) {
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
Obj _35val3708 = __arg1;
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
Obj _35p2292 = __arg1;
Obj _35p2293 = __arg2;
Obj _35p2294 = __arg3;
Obj _35cc2295 = makeNative(17, clofun3, 0, 0);
Obj self = _35p2292;
Obj w = _35p2293;
Obj _35reg3677 = PRIM_ISCONS(_35p2294);
if (True == _35reg3677) {
Obj _35reg3678 = PRIM_CAR(_35p2294);
Obj _35reg3679 = PRIM_EQ(sym_37continuation, _35reg3678);
if (True == _35reg3679) {
Obj _35reg3680 = PRIM_CDR(_35p2294);
Obj _35reg3681 = PRIM_ISCONS(_35reg3680);
if (True == _35reg3681) {
Obj _35reg3682 = PRIM_CDR(_35p2294);
Obj _35reg3683 = PRIM_CAR(_35reg3682);
Obj label = _35reg3683;
Obj _35reg3684 = PRIM_CDR(_35p2294);
Obj _35reg3685 = PRIM_CDR(_35reg3684);
Obj stacks = _35reg3685;
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
__arg0 = _35cc2295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val3686 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3687 = PRIM_CAR(self);
Obj _35reg3688 = PRIM_SUB(_35reg3687, label);
PUSH_CONT(co, 6, clofun3, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = _35reg3688;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj _35val3689 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 7, clofun3, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = _35val3689;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val3690 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
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
Obj _35val3691 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3692 = PRIM_CAR(self);
PUSH_CONT(co, 9, clofun3, 3, self, stacks, w);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = w;
__arg2 = label;
__arg3 = _35reg3692;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj _35val3693 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3694 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3695 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 12, clofun3, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = _35val3695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3696 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3697 = __arg1;
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj stacks= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3698 = primNot(_35val3697);
if (True == _35reg3698) {
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
Obj _35val3700 = __arg1;
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
Obj _35val3699 = __arg1;
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
Obj _35reg3404 = primIsSymbol(x1);
if (True == _35reg3404) {
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
Obj _35cc2279 = makeNative(21, clofun3, 0, 4, self, env, x1, w);
Obj _35reg3664 = PRIM_ISCONS(x1);
if (True == _35reg3664) {
Obj _35reg3665 = PRIM_CAR(x1);
Obj _35reg3666 = PRIM_EQ(sym_37global, _35reg3665);
if (True == _35reg3666) {
Obj _35reg3667 = PRIM_CDR(x1);
Obj _35reg3668 = PRIM_ISCONS(_35reg3667);
if (True == _35reg3668) {
Obj _35reg3669 = PRIM_CDR(x1);
Obj _35reg3670 = PRIM_CAR(_35reg3669);
Obj x = _35reg3670;
Obj _35reg3671 = PRIM_CDR(x1);
Obj _35reg3672 = PRIM_CDR(_35reg3671);
Obj _35reg3673 = PRIM_EQ(Nil, _35reg3672);
if (True == _35reg3673) {
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
__arg0 = _35cc2279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2279;
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
Obj _35val3674 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3675 = __arg1;
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

label21:
{
Obj _35cc2280 = makeNative(24, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3652 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg3652) {
Obj _35reg3653 = PRIM_CAR(closureRef(co, 2));
Obj _35reg3654 = PRIM_EQ(sym_37closure_45ref, _35reg3653);
if (True == _35reg3654) {
Obj _35reg3655 = PRIM_CDR(closureRef(co, 2));
Obj _35reg3656 = PRIM_ISCONS(_35reg3655);
if (True == _35reg3656) {
Obj _35reg3657 = PRIM_CDR(closureRef(co, 2));
Obj _35reg3658 = PRIM_CAR(_35reg3657);
Obj idx = _35reg3658;
Obj _35reg3659 = PRIM_CDR(closureRef(co, 2));
Obj _35reg3660 = PRIM_CDR(_35reg3659);
Obj _35reg3661 = PRIM_EQ(Nil, _35reg3660);
if (True == _35reg3661) {
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
__arg0 = _35cc2280;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2280;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2280;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2280;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35val3662 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3663 = __arg1;
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
Obj _35cc2281 = makeNative(27, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3640 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg3640) {
Obj _35reg3641 = PRIM_CAR(closureRef(co, 2));
Obj _35reg3642 = PRIM_EQ(sym_37stack_45ref, _35reg3641);
if (True == _35reg3642) {
Obj _35reg3643 = PRIM_CDR(closureRef(co, 2));
Obj _35reg3644 = PRIM_ISCONS(_35reg3643);
if (True == _35reg3644) {
Obj _35reg3645 = PRIM_CDR(closureRef(co, 2));
Obj _35reg3646 = PRIM_CAR(_35reg3645);
Obj idx = _35reg3646;
Obj _35reg3647 = PRIM_CDR(closureRef(co, 2));
Obj _35reg3648 = PRIM_CDR(_35reg3647);
Obj _35reg3649 = PRIM_EQ(Nil, _35reg3648);
if (True == _35reg3649) {
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
__arg0 = _35cc2281;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2281;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2281;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2281;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35val3650 = __arg1;
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3651 = __arg1;
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
Obj _35cc2282 = makeNative(35, clofun3, 0, 4, closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 3));
Obj _35reg3618 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg3618) {
Obj _35reg3619 = PRIM_CAR(closureRef(co, 2));
Obj _35reg3620 = PRIM_EQ(sym_37const, _35reg3619);
if (True == _35reg3620) {
Obj _35reg3621 = PRIM_CDR(closureRef(co, 2));
Obj _35reg3622 = PRIM_ISCONS(_35reg3621);
if (True == _35reg3622) {
Obj _35reg3623 = PRIM_CDR(closureRef(co, 2));
Obj _35reg3624 = PRIM_CAR(_35reg3623);
Obj x = _35reg3624;
Obj _35reg3625 = PRIM_CDR(closureRef(co, 2));
Obj _35reg3626 = PRIM_CDR(_35reg3625);
Obj _35reg3627 = PRIM_EQ(Nil, _35reg3626);
if (True == _35reg3627) {
Obj _35reg3628 = primIsSymbol(x);
if (True == _35reg3628) {
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
__arg0 = _35cc2282;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2282;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2282;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2282;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35val3630 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val3630) {
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
Obj _35reg3633 = primIsString(x);
if (True == _35reg3633) {
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
Obj _35reg3637 = PRIM_EQ(x, Nil);
if (True == _35reg3637) {
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
Obj _35reg3638 = PRIM_EQ(x, True);
if (True == _35reg3638) {
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
Obj _35reg3639 = PRIM_EQ(x, False);
if (True == _35reg3639) {
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
Obj _35val3634 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3635 = __arg1;
PUSH_CONT(co, 31, clofun3, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = _35val3635;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val3636 = __arg1;
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
Obj _35val3631 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3632 = __arg1;
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
Obj _35val3629 = __arg1;
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

label35:
{
Obj _35cc2283 = makeNative(46, clofun3, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3579 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3579) {
Obj _35reg3580 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3581 = PRIM_EQ(symlet, _35reg3580);
if (True == _35reg3581) {
Obj _35reg3582 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3583 = PRIM_ISCONS(_35reg3582);
if (True == _35reg3583) {
Obj _35reg3584 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3585 = PRIM_CAR(_35reg3584);
Obj a = _35reg3585;
Obj _35reg3586 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3587 = PRIM_CDR(_35reg3586);
Obj _35reg3588 = PRIM_ISCONS(_35reg3587);
if (True == _35reg3588) {
Obj _35reg3589 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3590 = PRIM_CDR(_35reg3589);
Obj _35reg3591 = PRIM_CAR(_35reg3590);
Obj b = _35reg3591;
Obj _35reg3592 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3593 = PRIM_CDR(_35reg3592);
Obj _35reg3594 = PRIM_CDR(_35reg3593);
Obj _35reg3595 = PRIM_ISCONS(_35reg3594);
if (True == _35reg3595) {
Obj _35reg3596 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3597 = PRIM_CDR(_35reg3596);
Obj _35reg3598 = PRIM_CDR(_35reg3597);
Obj _35reg3599 = PRIM_CAR(_35reg3598);
Obj c = _35reg3599;
Obj _35reg3600 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3601 = PRIM_CDR(_35reg3600);
Obj _35reg3602 = PRIM_CDR(_35reg3601);
Obj _35reg3603 = PRIM_CDR(_35reg3602);
Obj _35reg3604 = PRIM_EQ(Nil, _35reg3603);
if (True == _35reg3604) {
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
__arg0 = _35cc2283;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2283;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2283;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2283;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2283;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2283;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj _35val3605 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj idx = _35val3605;
Obj _35reg3606 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == _35reg3606) {
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
Obj _35val3613 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3614 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3615 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3616 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3617 = makeCons(a, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = _35reg3617;
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
Obj _35val3607 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3608 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3609 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3610 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3611 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3612 = makeCons(a, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = _35reg3612;
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
Obj _35cc2284 = makeNative(3, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3555 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3555) {
Obj _35reg3556 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3557 = PRIM_ISCONS(_35reg3556);
if (True == _35reg3557) {
Obj _35reg3558 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3559 = PRIM_CAR(_35reg3558);
Obj _35reg3560 = PRIM_EQ(sym_37builtin, _35reg3559);
if (True == _35reg3560) {
Obj _35reg3561 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3562 = PRIM_CDR(_35reg3561);
Obj _35reg3563 = PRIM_ISCONS(_35reg3562);
if (True == _35reg3563) {
Obj _35reg3564 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3565 = PRIM_CDR(_35reg3564);
Obj _35reg3566 = PRIM_CAR(_35reg3565);
Obj f = _35reg3566;
Obj _35reg3567 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3568 = PRIM_CDR(_35reg3567);
Obj _35reg3569 = PRIM_CDR(_35reg3568);
Obj _35reg3570 = PRIM_EQ(Nil, _35reg3569);
if (True == _35reg3570) {
Obj _35reg3571 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg3571;
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
__arg0 = _35cc2284;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2284;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2284;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2284;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2284;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _35val3572 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 48, clofun3, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = _35val3572;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj _35val3573 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3574 = PRIM_EQ(f, symset);
if (True == _35reg3574) {
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
Obj _35val3577 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3578 = __arg1;
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
Obj _35val3575 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3576 = __arg1;
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
Obj _35cc2285 = makeNative(10, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3523 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3523) {
Obj _35reg3524 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3525 = PRIM_EQ(symif, _35reg3524);
if (True == _35reg3525) {
Obj _35reg3526 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3527 = PRIM_ISCONS(_35reg3526);
if (True == _35reg3527) {
Obj _35reg3528 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3529 = PRIM_CAR(_35reg3528);
Obj a = _35reg3529;
Obj _35reg3530 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3531 = PRIM_CDR(_35reg3530);
Obj _35reg3532 = PRIM_ISCONS(_35reg3531);
if (True == _35reg3532) {
Obj _35reg3533 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3534 = PRIM_CDR(_35reg3533);
Obj _35reg3535 = PRIM_CAR(_35reg3534);
Obj b = _35reg3535;
Obj _35reg3536 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3537 = PRIM_CDR(_35reg3536);
Obj _35reg3538 = PRIM_CDR(_35reg3537);
Obj _35reg3539 = PRIM_ISCONS(_35reg3538);
if (True == _35reg3539) {
Obj _35reg3540 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3541 = PRIM_CDR(_35reg3540);
Obj _35reg3542 = PRIM_CDR(_35reg3541);
Obj _35reg3543 = PRIM_CAR(_35reg3542);
Obj c = _35reg3543;
Obj _35reg3544 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3545 = PRIM_CDR(_35reg3544);
Obj _35reg3546 = PRIM_CDR(_35reg3545);
Obj _35reg3547 = PRIM_CDR(_35reg3546);
Obj _35reg3548 = PRIM_EQ(Nil, _35reg3547);
if (True == _35reg3548) {
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
__arg0 = _35cc2285;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2285;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2285;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2285;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2285;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2285;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val3549 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3550 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3551 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3552 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3553 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3554 = __arg1;
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
Obj _35cc2286 = makeNative(24, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3490 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3490) {
Obj _35reg3491 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3492 = PRIM_EQ(sym_37closure, _35reg3491);
if (True == _35reg3492) {
Obj _35reg3493 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3494 = PRIM_ISCONS(_35reg3493);
if (True == _35reg3494) {
Obj _35reg3495 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3496 = PRIM_CAR(_35reg3495);
Obj label = _35reg3496;
Obj _35reg3497 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3498 = PRIM_CDR(_35reg3497);
Obj _35reg3499 = PRIM_ISCONS(_35reg3498);
if (True == _35reg3499) {
Obj _35reg3500 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3501 = PRIM_CDR(_35reg3500);
Obj _35reg3502 = PRIM_CAR(_35reg3501);
Obj nargs = _35reg3502;
Obj _35reg3503 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3504 = PRIM_CDR(_35reg3503);
Obj _35reg3505 = PRIM_CDR(_35reg3504);
Obj frees = _35reg3505;
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
__arg0 = _35cc2286;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2286;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2286;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2286;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val3506 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3507 = PRIM_CAR(closureRef(co, 1));
Obj _35reg3508 = PRIM_SUB(_35reg3507, label);
PUSH_CONT(co, 12, clofun4, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = _35reg3508;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35val3509 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 13, clofun4, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = _35val3509;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3510 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
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
Obj _35val3511 = __arg1;
Obj label= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3512 = PRIM_CAR(closureRef(co, 1));
PUSH_CONT(co, 15, clofun4, 2, nargs, frees);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 3);
__arg2 = label;
__arg3 = _35reg3512;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3513 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3514 = __arg1;
Obj nargs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3515 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3516 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3517 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 20, clofun4, 1, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = _35val3517;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35val3518 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3519 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3520 = primNot(_35val3519);
if (True == _35reg3520) {
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
Obj _35val3521 = __arg1;
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3522 = __arg1;
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
Obj _35cc2287 = makeNative(27, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 3));
Obj _35reg3471 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3471) {
Obj _35reg3472 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3473 = PRIM_EQ(symdo, _35reg3472);
if (True == _35reg3473) {
Obj _35reg3474 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3475 = PRIM_ISCONS(_35reg3474);
if (True == _35reg3475) {
Obj _35reg3476 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3477 = PRIM_CAR(_35reg3476);
Obj a = _35reg3477;
Obj _35reg3478 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3479 = PRIM_CDR(_35reg3478);
Obj _35reg3480 = PRIM_ISCONS(_35reg3479);
if (True == _35reg3480) {
Obj _35reg3481 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3482 = PRIM_CDR(_35reg3481);
Obj _35reg3483 = PRIM_CAR(_35reg3482);
Obj b = _35reg3483;
Obj _35reg3484 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3485 = PRIM_CDR(_35reg3484);
Obj _35reg3486 = PRIM_CDR(_35reg3485);
Obj _35reg3487 = PRIM_EQ(Nil, _35reg3486);
if (True == _35reg3487) {
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
__arg0 = _35cc2287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35val3488 = __arg1;
Obj b= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3489 = __arg1;
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

label27:
{
Obj _35cc2288 = makeNative(36, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 3));
Obj _35reg3451 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3451) {
Obj _35reg3452 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3453 = PRIM_EQ(symreturn, _35reg3452);
if (True == _35reg3453) {
Obj _35reg3454 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3455 = PRIM_ISCONS(_35reg3454);
if (True == _35reg3455) {
Obj _35reg3456 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3457 = PRIM_CAR(_35reg3456);
Obj x = _35reg3457;
Obj _35reg3458 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3459 = PRIM_CDR(_35reg3458);
Obj _35reg3460 = PRIM_EQ(Nil, _35reg3459);
if (True == _35reg3460) {
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
__arg0 = _35cc2288;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2288;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2288;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2288;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35val3461 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3462 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
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
Obj _35val3463 = __arg1;
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
Obj _35val3464 = __arg1;
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
Obj _35val3465 = __arg1;
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
Obj _35val3466 = __arg1;
Obj _35reg3467 = PRIM_CDR(closureRef(co, 2));
Obj _35reg3468 = PRIM_CAR(closureRef(co, 2));
PUSH_CONT(co, 34, clofun4, 0);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 3);
__arg2 = _35reg3467;
__arg3 = _35reg3468;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj _35val3469 = __arg1;
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
Obj _35val3470 = __arg1;
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
Obj _35cc2289 = makeNative(37, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj _35reg3441 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3441) {
Obj _35reg3442 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3443 = PRIM_EQ(symtailcall, _35reg3442);
if (True == _35reg3443) {
Obj _35reg3444 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3445 = PRIM_ISCONS(_35reg3444);
if (True == _35reg3445) {
Obj _35reg3446 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3447 = PRIM_CAR(_35reg3446);
Obj exp = _35reg3447;
Obj _35reg3448 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3449 = PRIM_CDR(_35reg3448);
Obj _35reg3450 = PRIM_EQ(Nil, _35reg3449);
if (True == _35reg3450) {
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
__arg0 = _35cc2289;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2289;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2289;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2289;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj _35cc2290 = makeNative(39, clofun4, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 3));
Obj _35reg3423 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3423) {
Obj _35reg3424 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3425 = PRIM_EQ(symcall, _35reg3424);
if (True == _35reg3425) {
Obj _35reg3426 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3427 = PRIM_ISCONS(_35reg3426);
if (True == _35reg3427) {
Obj _35reg3428 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3429 = PRIM_CAR(_35reg3428);
Obj exp = _35reg3429;
Obj _35reg3430 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3431 = PRIM_CDR(_35reg3430);
Obj _35reg3432 = PRIM_ISCONS(_35reg3431);
if (True == _35reg3432) {
Obj _35reg3433 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3434 = PRIM_CDR(_35reg3433);
Obj _35reg3435 = PRIM_CAR(_35reg3434);
Obj cont = _35reg3435;
Obj _35reg3436 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3437 = PRIM_CDR(_35reg3436);
Obj _35reg3438 = PRIM_CDR(_35reg3437);
Obj _35reg3439 = PRIM_EQ(Nil, _35reg3438);
if (True == _35reg3439) {
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
__arg0 = _35cc2290;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2290;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2290;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2290;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2290;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35val3440 = __arg1;
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

label39:
{
Obj _35cc2291 = makeNative(1, clofun5, 0, 0);
Obj _35reg3405 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3405) {
Obj _35reg3406 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg3406;
Obj _35reg3407 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg3407;
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
__arg0 = _35cc2291;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj _35val3408 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3409 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3410 = PRIM_ADD(MAKE_NUMBER(1), _35val3409);
PUSH_CONT(co, 42, clofun4, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 2);
__arg2 = _35reg3410;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj _35val3411 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
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
Obj _35val3412 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3413 = makeCons(f, args);
PUSH_CONT(co, 44, clofun4, 0);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = MAKE_NUMBER(0);
co->args[4] = _35reg3413;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val3414 = __arg1;
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
Obj _35val3415 = __arg1;
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
Obj _35val3416 = __arg1;
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
Obj _35val3417 = __arg1;
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
Obj _35val3418 = __arg1;
Obj _35reg3419 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3420 = PRIM_CAR(closureRef(co, 1));
PUSH_CONT(co, 49, clofun4, 0);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 2);
__arg2 = _35reg3419;
__arg3 = _35reg3420;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj _35val3421 = __arg1;
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
Obj _35val3422 = __arg1;
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
Obj _35val3399 = __arg1;
Obj sym= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val = _35val3399;
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
Obj _35val3400 = __arg1;
Obj sym= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val3400) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3401 = makeCons(sym, val);
Obj _35reg3402 = primSet(co, globals, _35reg3401);
__nargs = 2;
__arg1 = _35reg3402;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label5:
{
Obj _35p2273 = __arg1;
Obj _35p2274 = __arg2;
Obj _35p2275 = __arg3;
Obj _35p2276 = co->args[4];
Obj _35cc2277 = makeNative(6, clofun5, 0, 4, _35p2273, _35p2274, _35p2275, _35p2276);
Obj self = _35p2273;
Obj w = _35p2274;
Obj i = _35p2275;
Obj _35reg3397 = PRIM_EQ(Nil, _35p2276);
if (True == _35reg3397) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2277;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35cc2278 = makeNative(18, clofun5, 0, 0);
Obj self = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj i = closureRef(co, 2);
Obj _35reg3379 = PRIM_ISCONS(closureRef(co, 3));
if (True == _35reg3379) {
Obj _35reg3380 = PRIM_CAR(closureRef(co, 3));
Obj x = _35reg3380;
Obj _35reg3381 = PRIM_CDR(closureRef(co, 3));
Obj more = _35reg3381;
Obj _35reg3382 = PRIM_GT(i, MAKE_NUMBER(3));
Obj _35reg3383 = primNot(_35reg3382);
if (True == _35reg3383) {
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
__arg0 = _35cc2278;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val3390 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
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
Obj _35val3391 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
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
Obj _35val3392 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
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
Obj _35val3393 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
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
Obj _35val3394 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
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
Obj _35val3395 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3396 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = self;
__arg2 = w;
__arg3 = _35reg3396;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val3384 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
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
Obj _35val3385 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
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
Obj _35val3386 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 4];
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
Obj _35val3387 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
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
Obj _35val3388 = __arg1;
Obj i= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj self= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj w= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj _35reg3389 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = self;
__arg2 = w;
__arg3 = _35reg3389;
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
Obj _35reg3372 = primGenSym(symreg);
Obj tmp = _35reg3372;
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
Obj _35val3373 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3374 = makeCons(_35val3373, Nil);
Obj _35reg3375 = makeCons(x, _35reg3374);
Obj _35reg3376 = makeCons(tmp, _35reg3375);
Obj _35reg3377 = makeCons(symlet, _35reg3376);
__nargs = 2;
__arg1 = _35reg3377;
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
Obj _35val3364 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj idx = _35val3364;
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
Obj _35val3365 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj idx= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj cur = _35val3365;
Obj _35reg3366 = makeCons(val, Nil);
Obj _35reg3367 = makeCons(idx, _35reg3366);
Obj _35reg3368 = makeCons(_35reg3367, cur);
Obj cur1 = _35reg3368;
Obj _35reg3369 = PRIM_ADD(idx, MAKE_NUMBER(1));
PUSH_CONT(co, 24, clofun5, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35vector_45set_33);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
__arg3 = _35reg3369;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _35val3370 = __arg1;
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

label25:
{
Obj _35p2268 = __arg1;
Obj _35p2269 = __arg2;
Obj _35cc2270 = makeNative(41, clofun5, 0, 2, _35p2268, _35p2269);
Obj v = _35p2268;
Obj _35reg3267 = PRIM_ISCONS(_35p2269);
if (True == _35reg3267) {
Obj _35reg3268 = PRIM_CAR(_35p2269);
Obj clo_45or_45cont = _35reg3268;
Obj _35reg3269 = PRIM_CDR(_35p2269);
Obj _35reg3270 = PRIM_ISCONS(_35reg3269);
if (True == _35reg3270) {
Obj _35reg3271 = PRIM_CDR(_35p2269);
Obj _35reg3272 = PRIM_CAR(_35reg3271);
Obj _35reg3273 = PRIM_ISCONS(_35reg3272);
if (True == _35reg3273) {
Obj _35reg3274 = PRIM_CDR(_35p2269);
Obj _35reg3275 = PRIM_CAR(_35reg3274);
Obj _35reg3276 = PRIM_CAR(_35reg3275);
Obj _35reg3277 = PRIM_EQ(symlambda, _35reg3276);
if (True == _35reg3277) {
Obj _35reg3278 = PRIM_CDR(_35p2269);
Obj _35reg3279 = PRIM_CAR(_35reg3278);
Obj _35reg3280 = PRIM_CDR(_35reg3279);
Obj _35reg3281 = PRIM_ISCONS(_35reg3280);
if (True == _35reg3281) {
Obj _35reg3282 = PRIM_CDR(_35p2269);
Obj _35reg3283 = PRIM_CAR(_35reg3282);
Obj _35reg3284 = PRIM_CDR(_35reg3283);
Obj _35reg3285 = PRIM_CAR(_35reg3284);
Obj params = _35reg3285;
Obj _35reg3286 = PRIM_CDR(_35p2269);
Obj _35reg3287 = PRIM_CAR(_35reg3286);
Obj _35reg3288 = PRIM_CDR(_35reg3287);
Obj _35reg3289 = PRIM_CDR(_35reg3288);
Obj _35reg3290 = PRIM_ISCONS(_35reg3289);
if (True == _35reg3290) {
Obj _35reg3291 = PRIM_CDR(_35p2269);
Obj _35reg3292 = PRIM_CAR(_35reg3291);
Obj _35reg3293 = PRIM_CDR(_35reg3292);
Obj _35reg3294 = PRIM_CDR(_35reg3293);
Obj _35reg3295 = PRIM_CAR(_35reg3294);
Obj body = _35reg3295;
Obj _35reg3296 = PRIM_CDR(_35p2269);
Obj _35reg3297 = PRIM_CAR(_35reg3296);
Obj _35reg3298 = PRIM_CDR(_35reg3297);
Obj _35reg3299 = PRIM_CDR(_35reg3298);
Obj _35reg3300 = PRIM_CDR(_35reg3299);
Obj _35reg3301 = PRIM_EQ(Nil, _35reg3300);
if (True == _35reg3301) {
Obj _35reg3302 = PRIM_CDR(_35p2269);
Obj _35reg3303 = PRIM_CDR(_35reg3302);
Obj fvs = _35reg3303;
Obj _35reg3304 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == _35reg3304) {
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
__arg0 = _35cc2270;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg3324 = PRIM_EQ(clo_45or_45cont, sym_37continuation);
if (True == _35reg3324) {
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
__arg0 = _35cc2270;
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
__arg0 = _35cc2270;
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
__arg0 = _35cc2270;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2270;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2270;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2270;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2270;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2270;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2270;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35val3344 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val3344;
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
Obj _35val3345 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj cur = _35val3345;
Obj _35reg3346 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == _35reg3346) {
Obj _35reg3347 = makeCons(body1, Nil);
Obj _35reg3348 = makeCons(Nil, _35reg3347);
Obj _35reg3349 = makeCons(params, _35reg3348);
Obj _35reg3350 = makeCons(symlambda, _35reg3349);
PUSH_CONT(co, 29, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg3350;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3356 = makeCons(body1, Nil);
Obj _35reg3357 = makeCons(fvs, _35reg3356);
Obj _35reg3358 = makeCons(params, _35reg3357);
Obj _35reg3359 = makeCons(symlambda, _35reg3358);
PUSH_CONT(co, 28, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg3359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35val3360 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3361 = makeCons(cur, fvs);
Obj _35reg3362 = makeCons(clo_45or_45cont, _35reg3361);
__nargs = 2;
__arg1 = _35reg3362;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
Obj _35val3351 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
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
Obj _35val3352 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3353 = makeCons(_35val3352, fvs);
Obj _35reg3354 = makeCons(cur, _35reg3353);
Obj _35reg3355 = makeCons(clo_45or_45cont, _35reg3354);
__nargs = 2;
__arg1 = _35reg3355;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj _35val3325 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val3325;
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
Obj _35val3326 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj cur = _35val3326;
Obj _35reg3327 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == _35reg3327) {
Obj _35reg3328 = makeCons(body1, Nil);
Obj _35reg3329 = makeCons(Nil, _35reg3328);
Obj _35reg3330 = makeCons(params, _35reg3329);
Obj _35reg3331 = makeCons(symlambda, _35reg3330);
PUSH_CONT(co, 34, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg3331;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3337 = makeCons(body1, Nil);
Obj _35reg3338 = makeCons(fvs, _35reg3337);
Obj _35reg3339 = makeCons(params, _35reg3338);
Obj _35reg3340 = makeCons(symlambda, _35reg3339);
PUSH_CONT(co, 33, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg3340;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _35val3341 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3342 = makeCons(cur, fvs);
Obj _35reg3343 = makeCons(clo_45or_45cont, _35reg3342);
__nargs = 2;
__arg1 = _35reg3343;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj _35val3332 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
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
Obj _35val3333 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3334 = makeCons(_35val3333, fvs);
Obj _35reg3335 = makeCons(cur, _35reg3334);
Obj _35reg3336 = makeCons(clo_45or_45cont, _35reg3335);
__nargs = 2;
__arg1 = _35reg3336;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label36:
{
Obj _35val3305 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj body1 = _35val3305;
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
Obj _35val3306 = __arg1;
Obj body1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj cur = _35val3306;
Obj _35reg3307 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == _35reg3307) {
Obj _35reg3308 = makeCons(body1, Nil);
Obj _35reg3309 = makeCons(Nil, _35reg3308);
Obj _35reg3310 = makeCons(params, _35reg3309);
Obj _35reg3311 = makeCons(symlambda, _35reg3310);
PUSH_CONT(co, 39, clofun5, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg3311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj _35reg3317 = makeCons(body1, Nil);
Obj _35reg3318 = makeCons(fvs, _35reg3317);
Obj _35reg3319 = makeCons(params, _35reg3318);
Obj _35reg3320 = makeCons(symlambda, _35reg3319);
PUSH_CONT(co, 38, clofun5, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = _35reg3320;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35val3321 = __arg1;
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3322 = makeCons(cur, fvs);
Obj _35reg3323 = makeCons(clo_45or_45cont, _35reg3322);
__nargs = 2;
__arg1 = _35reg3323;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label39:
{
Obj _35val3312 = __arg1;
Obj params= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 3];
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
Obj _35val3313 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cur= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj clo_45or_45cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3314 = makeCons(_35val3313, fvs);
Obj _35reg3315 = makeCons(cur, _35reg3314);
Obj _35reg3316 = makeCons(clo_45or_45cont, _35reg3315);
__nargs = 2;
__arg1 = _35reg3316;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label41:
{
Obj _35cc2271 = makeNative(43, clofun5, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v = closureRef(co, 0);
Obj f_45args = closureRef(co, 1);
Obj _35reg3266 = PRIM_ISCONS(f_45args);
if (True == _35reg3266) {
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
__arg0 = _35cc2271;
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
Obj _35cc2272 = makeNative(44, clofun5, 0, 0);
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
Obj _35p2260 = __arg1;
Obj _35p2261 = __arg2;
Obj _35cc2262 = makeNative(47, clofun5, 0, 2, _35p2260, _35p2261);
Obj __ = _35p2260;
Obj x = _35p2261;
PUSH_CONT(co, 46, clofun5, 2, x, _35cc2262);
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
Obj _35val3264 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2262= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val3264) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2262;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _35cc2263 = makeNative(48, clofun5, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg3263 = primIsSymbol(var);
if (True == _35reg3263) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj _35cc2264 = makeNative(0, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg3242 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg3242) {
Obj _35reg3243 = PRIM_CAR(closureRef(co, 1));
Obj _35reg3244 = PRIM_EQ(symlambda, _35reg3243);
if (True == _35reg3244) {
Obj _35reg3245 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3246 = PRIM_ISCONS(_35reg3245);
if (True == _35reg3246) {
Obj _35reg3247 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3248 = PRIM_CAR(_35reg3247);
Obj args = _35reg3248;
Obj _35reg3249 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3250 = PRIM_CDR(_35reg3249);
Obj _35reg3251 = PRIM_ISCONS(_35reg3250);
if (True == _35reg3251) {
Obj _35reg3252 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3253 = PRIM_CDR(_35reg3252);
Obj _35reg3254 = PRIM_CAR(_35reg3253);
Obj body = _35reg3254;
Obj _35reg3255 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3256 = PRIM_CDR(_35reg3255);
Obj _35reg3257 = PRIM_CDR(_35reg3256);
Obj _35reg3258 = PRIM_EQ(Nil, _35reg3257);
if (True == _35reg3258) {
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
__arg0 = _35cc2264;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2264;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2264;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2264;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2264;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj _35val3259 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3260 = makeCons(_35val3259, Nil);
Obj _35reg3261 = makeCons(args, _35reg3260);
Obj _35reg3262 = makeCons(symlambda, _35reg3261);
__nargs = 2;
__arg1 = _35reg3262;
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
Obj _35cc2265 = makeNative(6, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg3215 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg3215) {
Obj _35reg3216 = PRIM_CAR(closureRef(co, 1));
Obj _35reg3217 = PRIM_EQ(symcontinuation, _35reg3216);
if (True == _35reg3217) {
Obj _35reg3218 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3219 = PRIM_ISCONS(_35reg3218);
if (True == _35reg3219) {
Obj _35reg3220 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3221 = PRIM_CAR(_35reg3220);
Obj val = _35reg3221;
Obj _35reg3222 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3223 = PRIM_CDR(_35reg3222);
Obj _35reg3224 = PRIM_ISCONS(_35reg3223);
if (True == _35reg3224) {
Obj _35reg3225 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3226 = PRIM_CDR(_35reg3225);
Obj _35reg3227 = PRIM_CAR(_35reg3226);
Obj body = _35reg3227;
Obj _35reg3228 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3229 = PRIM_CDR(_35reg3228);
Obj _35reg3230 = PRIM_CDR(_35reg3229);
Obj _35reg3231 = PRIM_EQ(Nil, _35reg3230);
if (True == _35reg3231) {
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
__arg0 = _35cc2265;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2265;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2265;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2265;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2265;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj _35val3232 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 2, clofun6, 3, fvs, body, val);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = _35val3232;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35val3233 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val3233;
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
Obj _35val3234 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 4, clofun6, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val3234;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj _35val3235 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs2 = _35val3235;
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
Obj _35val3236 = __arg1;
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3237 = makeCons(_35val3236, Nil);
Obj _35reg3238 = makeCons(val, _35reg3237);
Obj _35reg3239 = makeCons(symlambda, _35reg3238);
Obj _35reg3240 = makeCons(_35reg3239, fvs2);
Obj _35reg3241 = makeCons(sym_37continuation, _35reg3240);
__nargs = 2;
__arg1 = _35reg3241;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label6:
{
Obj _35cc2266 = makeNative(10, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg3192 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg3192) {
Obj _35reg3193 = PRIM_CAR(closureRef(co, 1));
Obj _35reg3194 = PRIM_EQ(symcall, _35reg3193);
if (True == _35reg3194) {
Obj _35reg3195 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3196 = PRIM_ISCONS(_35reg3195);
if (True == _35reg3196) {
Obj _35reg3197 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3198 = PRIM_CAR(_35reg3197);
Obj exp = _35reg3198;
Obj _35reg3199 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3200 = PRIM_CDR(_35reg3199);
Obj _35reg3201 = PRIM_ISCONS(_35reg3200);
if (True == _35reg3201) {
Obj _35reg3202 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3203 = PRIM_CDR(_35reg3202);
Obj _35reg3204 = PRIM_CAR(_35reg3203);
Obj cont = _35reg3204;
Obj _35reg3205 = PRIM_CDR(closureRef(co, 1));
Obj _35reg3206 = PRIM_CDR(_35reg3205);
Obj _35reg3207 = PRIM_CDR(_35reg3206);
Obj _35reg3208 = PRIM_EQ(Nil, _35reg3207);
if (True == _35reg3208) {
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
__arg0 = _35cc2266;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2266;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2266;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2266;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2266;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj _35val3209 = __arg1;
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 8, clofun6, 2, fvs, cont);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val3209;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj _35val3210 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj cont= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 9, clofun6, 1, _35val3210);
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
Obj _35val3211 = __arg1;
Obj _35val3210= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3212 = makeCons(_35val3211, Nil);
Obj _35reg3213 = makeCons(_35val3210, _35reg3212);
Obj _35reg3214 = makeCons(symcall, _35reg3213);
__nargs = 2;
__arg1 = _35reg3214;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj _35cc2267 = makeNative(12, clofun6, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg3187 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg3187) {
Obj _35reg3188 = PRIM_CAR(closureRef(co, 1));
Obj f = _35reg3188;
Obj _35reg3189 = PRIM_CDR(closureRef(co, 1));
Obj args = _35reg3189;
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
__arg0 = _35cc2267;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val3190 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3191 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val3190;
__arg2 = _35reg3191;
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
Obj _35p2255 = __arg1;
Obj _35p2256 = __arg2;
Obj _35p2257 = __arg3;
Obj _35cc2258 = makeNative(20, clofun6, 0, 3, _35p2255, _35p2256, _35p2257);
Obj _35reg3144 = PRIM_EQ(Nil, _35p2255);
if (True == _35reg3144) {
Obj ls = _35p2256;
Obj next = _35p2257;
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
__arg0 = _35cc2258;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj _35val3145 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp = _35val3145;
Obj _35reg3146 = PRIM_CAR(exp);
PUSH_CONT(co, 15, clofun6, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35pair_63);
__arg1 = _35reg3146;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj _35val3147 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val3147) {
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
Obj _35reg3174 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == _35reg3174) {
Obj _35reg3175 = makeCons(exp, Nil);
Obj _35reg3176 = makeCons(symtailcall, _35reg3175);
__nargs = 2;
__arg1 = _35reg3176;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3177 = primGenSym(symval);
Obj val = _35reg3177;
Obj _35reg3178 = makeCons(val, Nil);
PUSH_CONT(co, 16, clofun6, 2, _35reg3178, exp);
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
Obj _35val3179 = __arg1;
Obj _35reg3178= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3180 = makeCons(_35val3179, Nil);
Obj _35reg3181 = makeCons(_35reg3178, _35reg3180);
Obj _35reg3182 = makeCons(symcontinuation, _35reg3181);
Obj _35reg3183 = makeCons(_35reg3182, Nil);
Obj _35reg3184 = makeCons(exp, _35reg3183);
Obj _35reg3185 = makeCons(symcall, _35reg3184);
__nargs = 2;
__arg1 = _35reg3185;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj _35val3148 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3149 = PRIM_EQ(_35val3148, sym_37builtin);
if (True == _35reg3149) {
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
Obj _35reg3150 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == _35reg3150) {
Obj _35reg3151 = makeCons(exp, Nil);
Obj _35reg3152 = makeCons(symtailcall, _35reg3151);
__nargs = 2;
__arg1 = _35reg3152;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3153 = primGenSym(symval);
Obj val = _35reg3153;
Obj _35reg3154 = makeCons(val, Nil);
PUSH_CONT(co, 19, clofun6, 2, _35reg3154, exp);
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
Obj _35reg3162 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == _35reg3162) {
Obj _35reg3163 = makeCons(exp, Nil);
Obj _35reg3164 = makeCons(symtailcall, _35reg3163);
__nargs = 2;
__arg1 = _35reg3164;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg3165 = primGenSym(symval);
Obj val = _35reg3165;
Obj _35reg3166 = makeCons(val, Nil);
PUSH_CONT(co, 18, clofun6, 2, _35reg3166, exp);
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
Obj _35val3167 = __arg1;
Obj _35reg3166= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3168 = makeCons(_35val3167, Nil);
Obj _35reg3169 = makeCons(_35reg3166, _35reg3168);
Obj _35reg3170 = makeCons(symcontinuation, _35reg3169);
Obj _35reg3171 = makeCons(_35reg3170, Nil);
Obj _35reg3172 = makeCons(exp, _35reg3171);
Obj _35reg3173 = makeCons(symcall, _35reg3172);
__nargs = 2;
__arg1 = _35reg3173;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj _35val3155 = __arg1;
Obj _35reg3154= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj exp= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3156 = makeCons(_35val3155, Nil);
Obj _35reg3157 = makeCons(_35reg3154, _35reg3156);
Obj _35reg3158 = makeCons(symcontinuation, _35reg3157);
Obj _35reg3159 = makeCons(_35reg3158, Nil);
Obj _35reg3160 = makeCons(exp, _35reg3159);
Obj _35reg3161 = makeCons(symcall, _35reg3160);
__nargs = 2;
__arg1 = _35reg3161;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label20:
{
Obj _35cc2259 = makeNative(22, clofun6, 0, 0);
Obj _35reg3140 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3140) {
Obj _35reg3141 = PRIM_CAR(closureRef(co, 0));
Obj hd = _35reg3141;
Obj _35reg3142 = PRIM_CDR(closureRef(co, 0));
Obj tl = _35reg3142;
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
__arg0 = _35cc2259;
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
Obj _35reg3143 = makeCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45list);
__arg1 = closureRef(co, 0);
__arg2 = _35reg3143;
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
Obj _35p2246 = __arg1;
Obj _35p2247 = __arg2;
Obj _35cc2248 = makeNative(25, clofun6, 0, 2, _35p2246, _35p2247);
Obj x = _35p2246;
Obj next = _35p2247;
Obj _35reg3137 = primIsSymbol(x);
if (True == _35reg3137) {
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
__arg0 = _35cc2248;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
PUSH_CONT(co, 24, clofun6, 3, next, x, _35cc2248);
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
Obj _35val3138 = __arg1;
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc2248= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val3138) {
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
__arg0 = _35cc2248;
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
__arg0 = _35cc2248;
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
Obj _35cc2249 = makeNative(27, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x = closureRef(co, 0);
Obj __ = closureRef(co, 1);
PUSH_CONT(co, 26, clofun6, 2, x, _35cc2249);
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
Obj _35val3136 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2249= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val3136) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2249;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35cc2250 = makeNative(31, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg3104 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3104) {
Obj _35reg3105 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3106 = PRIM_EQ(symif, _35reg3105);
if (True == _35reg3106) {
Obj _35reg3107 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3108 = PRIM_ISCONS(_35reg3107);
if (True == _35reg3108) {
Obj _35reg3109 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3110 = PRIM_CAR(_35reg3109);
Obj a = _35reg3110;
Obj _35reg3111 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3112 = PRIM_CDR(_35reg3111);
Obj _35reg3113 = PRIM_ISCONS(_35reg3112);
if (True == _35reg3113) {
Obj _35reg3114 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3115 = PRIM_CDR(_35reg3114);
Obj _35reg3116 = PRIM_CAR(_35reg3115);
Obj b = _35reg3116;
Obj _35reg3117 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3118 = PRIM_CDR(_35reg3117);
Obj _35reg3119 = PRIM_CDR(_35reg3118);
Obj _35reg3120 = PRIM_ISCONS(_35reg3119);
if (True == _35reg3120) {
Obj _35reg3121 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3122 = PRIM_CDR(_35reg3121);
Obj _35reg3123 = PRIM_CDR(_35reg3122);
Obj _35reg3124 = PRIM_CAR(_35reg3123);
Obj c = _35reg3124;
Obj _35reg3125 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3126 = PRIM_CDR(_35reg3125);
Obj _35reg3127 = PRIM_CDR(_35reg3126);
Obj _35reg3128 = PRIM_CDR(_35reg3127);
Obj _35reg3129 = PRIM_EQ(Nil, _35reg3128);
if (True == _35reg3129) {
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
__arg0 = _35cc2250;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2250;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2250;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2250;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2250;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2250;
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
Obj _35val3130 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 30, clofun6, 2, _35val3130, ra);
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
Obj _35val3131 = __arg1;
Obj _35val3130= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg3132 = makeCons(_35val3131, Nil);
Obj _35reg3133 = makeCons(_35val3130, _35reg3132);
Obj _35reg3134 = makeCons(ra, _35reg3133);
Obj _35reg3135 = makeCons(symif, _35reg3134);
__nargs = 2;
__arg1 = _35reg3135;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj _35cc2251 = makeNative(34, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg3082 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3082) {
Obj _35reg3083 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3084 = PRIM_EQ(symdo, _35reg3083);
if (True == _35reg3084) {
Obj _35reg3085 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3086 = PRIM_ISCONS(_35reg3085);
if (True == _35reg3086) {
Obj _35reg3087 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3088 = PRIM_CAR(_35reg3087);
Obj a = _35reg3088;
Obj _35reg3089 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3090 = PRIM_CDR(_35reg3089);
Obj _35reg3091 = PRIM_ISCONS(_35reg3090);
if (True == _35reg3091) {
Obj _35reg3092 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3093 = PRIM_CDR(_35reg3092);
Obj _35reg3094 = PRIM_CAR(_35reg3093);
Obj b = _35reg3094;
Obj _35reg3095 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3096 = PRIM_CDR(_35reg3095);
Obj _35reg3097 = PRIM_CDR(_35reg3096);
Obj _35reg3098 = PRIM_EQ(Nil, _35reg3097);
if (True == _35reg3098) {
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
__arg0 = _35cc2251;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2251;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2251;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2251;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2251;
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
Obj _35reg3099 = primIsSymbol(ra);
if (True == _35reg3099) {
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
Obj _35val3100 = __arg1;
Obj ra= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3101 = makeCons(_35val3100, Nil);
Obj _35reg3102 = makeCons(ra, _35reg3101);
Obj _35reg3103 = makeCons(symdo, _35reg3102);
__nargs = 2;
__arg1 = _35reg3103;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj _35cc2252 = makeNative(37, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg3051 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3051) {
Obj _35reg3052 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3053 = PRIM_EQ(symlet, _35reg3052);
if (True == _35reg3053) {
Obj _35reg3054 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3055 = PRIM_ISCONS(_35reg3054);
if (True == _35reg3055) {
Obj _35reg3056 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3057 = PRIM_CAR(_35reg3056);
Obj a = _35reg3057;
Obj _35reg3058 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3059 = PRIM_CDR(_35reg3058);
Obj _35reg3060 = PRIM_ISCONS(_35reg3059);
if (True == _35reg3060) {
Obj _35reg3061 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3062 = PRIM_CDR(_35reg3061);
Obj _35reg3063 = PRIM_CAR(_35reg3062);
Obj b = _35reg3063;
Obj _35reg3064 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3065 = PRIM_CDR(_35reg3064);
Obj _35reg3066 = PRIM_CDR(_35reg3065);
Obj _35reg3067 = PRIM_ISCONS(_35reg3066);
if (True == _35reg3067) {
Obj _35reg3068 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3069 = PRIM_CDR(_35reg3068);
Obj _35reg3070 = PRIM_CDR(_35reg3069);
Obj _35reg3071 = PRIM_CAR(_35reg3070);
Obj c = _35reg3071;
Obj _35reg3072 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3073 = PRIM_CDR(_35reg3072);
Obj _35reg3074 = PRIM_CDR(_35reg3073);
Obj _35reg3075 = PRIM_CDR(_35reg3074);
Obj _35reg3076 = PRIM_EQ(Nil, _35reg3075);
if (True == _35reg3076) {
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
__arg0 = _35cc2252;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2252;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2252;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2252;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2252;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2252;
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
Obj _35val3077 = __arg1;
Obj rb= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg3078 = makeCons(_35val3077, Nil);
Obj _35reg3079 = makeCons(rb, _35reg3078);
Obj _35reg3080 = makeCons(closureRef(co, 0), _35reg3079);
Obj _35reg3081 = makeCons(symlet, _35reg3080);
__nargs = 2;
__arg1 = _35reg3081;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label37:
{
Obj _35cc2253 = makeNative(39, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg3007 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3007) {
Obj _35reg3008 = PRIM_CAR(closureRef(co, 0));
Obj _35reg3009 = PRIM_EQ(sym_37closure, _35reg3008);
if (True == _35reg3009) {
Obj _35reg3010 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3011 = PRIM_ISCONS(_35reg3010);
if (True == _35reg3011) {
Obj _35reg3012 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3013 = PRIM_CAR(_35reg3012);
Obj _35reg3014 = PRIM_ISCONS(_35reg3013);
if (True == _35reg3014) {
Obj _35reg3015 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3016 = PRIM_CAR(_35reg3015);
Obj _35reg3017 = PRIM_CAR(_35reg3016);
Obj _35reg3018 = PRIM_EQ(symlambda, _35reg3017);
if (True == _35reg3018) {
Obj _35reg3019 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3020 = PRIM_CAR(_35reg3019);
Obj _35reg3021 = PRIM_CDR(_35reg3020);
Obj _35reg3022 = PRIM_ISCONS(_35reg3021);
if (True == _35reg3022) {
Obj _35reg3023 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3024 = PRIM_CAR(_35reg3023);
Obj _35reg3025 = PRIM_CDR(_35reg3024);
Obj _35reg3026 = PRIM_CAR(_35reg3025);
Obj args = _35reg3026;
Obj _35reg3027 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3028 = PRIM_CAR(_35reg3027);
Obj _35reg3029 = PRIM_CDR(_35reg3028);
Obj _35reg3030 = PRIM_CDR(_35reg3029);
Obj _35reg3031 = PRIM_ISCONS(_35reg3030);
if (True == _35reg3031) {
Obj _35reg3032 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3033 = PRIM_CAR(_35reg3032);
Obj _35reg3034 = PRIM_CDR(_35reg3033);
Obj _35reg3035 = PRIM_CDR(_35reg3034);
Obj _35reg3036 = PRIM_CAR(_35reg3035);
Obj body = _35reg3036;
Obj _35reg3037 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3038 = PRIM_CAR(_35reg3037);
Obj _35reg3039 = PRIM_CDR(_35reg3038);
Obj _35reg3040 = PRIM_CDR(_35reg3039);
Obj _35reg3041 = PRIM_CDR(_35reg3040);
Obj _35reg3042 = PRIM_EQ(Nil, _35reg3041);
if (True == _35reg3042) {
Obj _35reg3043 = PRIM_CDR(closureRef(co, 0));
Obj _35reg3044 = PRIM_CDR(_35reg3043);
Obj frees = _35reg3044;
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
__arg0 = _35cc2253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2253;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35val3045 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj frees= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj next= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg3046 = makeCons(_35val3045, Nil);
Obj _35reg3047 = makeCons(args, _35reg3046);
Obj _35reg3048 = makeCons(symlambda, _35reg3047);
Obj _35reg3049 = makeCons(_35reg3048, frees);
Obj _35reg3050 = makeCons(sym_37closure, _35reg3049);
__nargs = 2;
__arg0 = next;
__arg1 = _35reg3050;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj _35cc2254 = makeNative(40, clofun6, 0, 0);
Obj _35reg3003 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg3003) {
Obj _35reg3004 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg3004;
Obj _35reg3005 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg3005;
Obj next = closureRef(co, 1);
Obj _35reg3006 = makeCons(f, args);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45list);
__arg1 = _35reg3006;
__arg2 = Nil;
__arg3 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2254;
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
Obj _35reg3000 = makeCons(x, Nil);
Obj _35reg3001 = makeCons(symreturn, _35reg3000);
__nargs = 2;
__arg1 = _35reg3001;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label42:
{
Obj _35p2239 = __arg1;
Obj _35p2240 = __arg2;
Obj _35cc2241 = makeNative(44, clofun6, 0, 2, _35p2239, _35p2240);
Obj __ = _35p2239;
Obj x = _35p2240;
PUSH_CONT(co, 43, clofun6, 2, x, _35cc2241);
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
Obj _35val2998 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2241= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2998) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2241;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj _35cc2242 = makeNative(46, clofun6, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj _35reg2993 = primIsSymbol(var);
if (True == _35reg2993) {
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
__arg0 = _35cc2242;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj _35val2994 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj pos = _35val2994;
Obj _35reg2995 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == _35reg2995) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj _35reg2996 = makeCons(pos, Nil);
Obj _35reg2997 = makeCons(sym_37closure_45ref, _35reg2996);
__nargs = 2;
__arg1 = _35reg2997;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label46:
{
Obj _35cc2243 = makeNative(1, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2964 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg2964) {
Obj _35reg2965 = PRIM_CAR(closureRef(co, 1));
Obj _35reg2966 = PRIM_EQ(symlambda, _35reg2965);
if (True == _35reg2966) {
Obj _35reg2967 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2968 = PRIM_ISCONS(_35reg2967);
if (True == _35reg2968) {
Obj _35reg2969 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2970 = PRIM_CAR(_35reg2969);
Obj args = _35reg2970;
Obj _35reg2971 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2972 = PRIM_CDR(_35reg2971);
Obj _35reg2973 = PRIM_ISCONS(_35reg2972);
if (True == _35reg2973) {
Obj _35reg2974 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2975 = PRIM_CDR(_35reg2974);
Obj _35reg2976 = PRIM_CAR(_35reg2975);
Obj body = _35reg2976;
Obj _35reg2977 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2978 = PRIM_CDR(_35reg2977);
Obj _35reg2979 = PRIM_CDR(_35reg2978);
Obj _35reg2980 = PRIM_EQ(Nil, _35reg2979);
if (True == _35reg2980) {
Obj _35reg2981 = makeCons(body, Nil);
Obj _35reg2982 = makeCons(args, _35reg2981);
Obj _35reg2983 = makeCons(symlambda, _35reg2982);
PUSH_CONT(co, 47, clofun6, 3, body, args, fvs);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = _35reg2983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2243;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2243;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2243;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2243;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2243;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _35val2984 = __arg1;
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj fvs1 = _35val2984;
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
Obj _35val2985 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj _35reg2986 = makeCons(_35val2985, Nil);
Obj _35reg2987 = makeCons(args, _35reg2986);
Obj _35reg2988 = makeCons(symlambda, _35reg2987);
PUSH_CONT(co, 49, clofun6, 2, fvs1, _35reg2988);
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
Obj _35val2989 = __arg1;
Obj fvs1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2988= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 0, clofun7, 1, _35reg2988);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val2989;
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
Obj _35val2990 = __arg1;
Obj _35reg2988= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2991 = makeCons(_35reg2988, _35val2990);
Obj _35reg2992 = makeCons(sym_37closure, _35reg2991);
__nargs = 2;
__arg1 = _35reg2992;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label1:
{
Obj _35cc2244 = makeNative(4, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj _35reg2932 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg2932) {
Obj _35reg2933 = PRIM_CAR(closureRef(co, 1));
Obj _35reg2934 = PRIM_EQ(symlet, _35reg2933);
if (True == _35reg2934) {
Obj _35reg2935 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2936 = PRIM_ISCONS(_35reg2935);
if (True == _35reg2936) {
Obj _35reg2937 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2938 = PRIM_CAR(_35reg2937);
Obj a = _35reg2938;
Obj _35reg2939 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2940 = PRIM_CDR(_35reg2939);
Obj _35reg2941 = PRIM_ISCONS(_35reg2940);
if (True == _35reg2941) {
Obj _35reg2942 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2943 = PRIM_CDR(_35reg2942);
Obj _35reg2944 = PRIM_CAR(_35reg2943);
Obj b = _35reg2944;
Obj _35reg2945 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2946 = PRIM_CDR(_35reg2945);
Obj _35reg2947 = PRIM_CDR(_35reg2946);
Obj _35reg2948 = PRIM_ISCONS(_35reg2947);
if (True == _35reg2948) {
Obj _35reg2949 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2950 = PRIM_CDR(_35reg2949);
Obj _35reg2951 = PRIM_CDR(_35reg2950);
Obj _35reg2952 = PRIM_CAR(_35reg2951);
Obj c = _35reg2952;
Obj _35reg2953 = PRIM_CDR(closureRef(co, 1));
Obj _35reg2954 = PRIM_CDR(_35reg2953);
Obj _35reg2955 = PRIM_CDR(_35reg2954);
Obj _35reg2956 = PRIM_CDR(_35reg2955);
Obj _35reg2957 = PRIM_EQ(Nil, _35reg2956);
if (True == _35reg2957) {
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
__arg0 = _35cc2244;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2244;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2244;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2244;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2244;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2244;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj _35val2958 = __arg1;
Obj fvs= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 2];
PUSH_CONT(co, 3, clofun7, 2, _35val2958, a);
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
Obj _35val2959 = __arg1;
Obj _35val2958= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2960 = makeCons(_35val2959, Nil);
Obj _35reg2961 = makeCons(_35val2958, _35reg2960);
Obj _35reg2962 = makeCons(a, _35reg2961);
Obj _35reg2963 = makeCons(symlet, _35reg2962);
__nargs = 2;
__arg1 = _35reg2963;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj _35cc2245 = makeNative(6, clofun7, 0, 0);
Obj fvs = closureRef(co, 0);
Obj _35reg2927 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg2927) {
Obj _35reg2928 = PRIM_CAR(closureRef(co, 1));
Obj f = _35reg2928;
Obj _35reg2929 = PRIM_CDR(closureRef(co, 1));
Obj args = _35reg2929;
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
__arg0 = _35cc2245;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj _35val2930 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2931 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val2930;
__arg2 = _35reg2931;
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
Obj _35p2226 = __arg1;
Obj _35cc2227 = makeNative(9, clofun7, 0, 1, _35p2226);
Obj x = _35p2226;
PUSH_CONT(co, 8, clofun7, 1, _35cc2227);
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
Obj _35val2925 = __arg1;
Obj _35cc2227= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2925) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2227;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj _35cc2228 = makeNative(10, clofun7, 0, 1, closureRef(co, 0));
Obj x = closureRef(co, 0);
Obj _35reg2923 = primIsSymbol(x);
if (True == _35reg2923) {
Obj _35reg2924 = makeCons(x, Nil);
__nargs = 2;
__arg1 = _35reg2924;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2228;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35cc2229 = makeNative(12, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2905 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2905) {
Obj _35reg2906 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2907 = PRIM_EQ(symlambda, _35reg2906);
if (True == _35reg2907) {
Obj _35reg2908 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2909 = PRIM_ISCONS(_35reg2908);
if (True == _35reg2909) {
Obj _35reg2910 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2911 = PRIM_CAR(_35reg2910);
Obj args = _35reg2911;
Obj _35reg2912 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2913 = PRIM_CDR(_35reg2912);
Obj _35reg2914 = PRIM_ISCONS(_35reg2913);
if (True == _35reg2914) {
Obj _35reg2915 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2916 = PRIM_CDR(_35reg2915);
Obj _35reg2917 = PRIM_CAR(_35reg2916);
Obj body = _35reg2917;
Obj _35reg2918 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2919 = PRIM_CDR(_35reg2918);
Obj _35reg2920 = PRIM_CDR(_35reg2919);
Obj _35reg2921 = PRIM_EQ(Nil, _35reg2920);
if (True == _35reg2921) {
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
__arg0 = _35cc2229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2229;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj _35val2922 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = _35val2922;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj _35cc2230 = makeNative(14, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2875 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2875) {
Obj _35reg2876 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2877 = PRIM_EQ(symif, _35reg2876);
if (True == _35reg2877) {
Obj _35reg2878 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2879 = PRIM_ISCONS(_35reg2878);
if (True == _35reg2879) {
Obj _35reg2880 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2881 = PRIM_CAR(_35reg2880);
Obj x = _35reg2881;
Obj _35reg2882 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2883 = PRIM_CDR(_35reg2882);
Obj _35reg2884 = PRIM_ISCONS(_35reg2883);
if (True == _35reg2884) {
Obj _35reg2885 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2886 = PRIM_CDR(_35reg2885);
Obj _35reg2887 = PRIM_CAR(_35reg2886);
Obj y = _35reg2887;
Obj _35reg2888 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2889 = PRIM_CDR(_35reg2888);
Obj _35reg2890 = PRIM_CDR(_35reg2889);
Obj _35reg2891 = PRIM_ISCONS(_35reg2890);
if (True == _35reg2891) {
Obj _35reg2892 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2893 = PRIM_CDR(_35reg2892);
Obj _35reg2894 = PRIM_CDR(_35reg2893);
Obj _35reg2895 = PRIM_CAR(_35reg2894);
Obj z = _35reg2895;
Obj _35reg2896 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2897 = PRIM_CDR(_35reg2896);
Obj _35reg2898 = PRIM_CDR(_35reg2897);
Obj _35reg2899 = PRIM_CDR(_35reg2898);
Obj _35reg2900 = PRIM_EQ(Nil, _35reg2899);
if (True == _35reg2900) {
Obj _35reg2901 = makeCons(z, Nil);
Obj _35reg2902 = makeCons(y, _35reg2901);
Obj _35reg2903 = makeCons(x, _35reg2902);
PUSH_CONT(co, 13, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = _35reg2903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2230;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val2904 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = _35val2904;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35cc2231 = makeNative(16, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2855 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2855) {
Obj _35reg2856 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2857 = PRIM_EQ(symdo, _35reg2856);
if (True == _35reg2857) {
Obj _35reg2858 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2859 = PRIM_ISCONS(_35reg2858);
if (True == _35reg2859) {
Obj _35reg2860 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2861 = PRIM_CAR(_35reg2860);
Obj x = _35reg2861;
Obj _35reg2862 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2863 = PRIM_CDR(_35reg2862);
Obj _35reg2864 = PRIM_ISCONS(_35reg2863);
if (True == _35reg2864) {
Obj _35reg2865 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2866 = PRIM_CDR(_35reg2865);
Obj _35reg2867 = PRIM_CAR(_35reg2866);
Obj y = _35reg2867;
Obj _35reg2868 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2869 = PRIM_CDR(_35reg2868);
Obj _35reg2870 = PRIM_CDR(_35reg2869);
Obj _35reg2871 = PRIM_EQ(Nil, _35reg2870);
if (True == _35reg2871) {
Obj _35reg2872 = makeCons(y, Nil);
Obj _35reg2873 = makeCons(x, _35reg2872);
PUSH_CONT(co, 15, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = _35reg2873;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35val2874 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = _35val2874;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj _35cc2232 = makeNative(20, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2825 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2825) {
Obj _35reg2826 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2827 = PRIM_EQ(symlet, _35reg2826);
if (True == _35reg2827) {
Obj _35reg2828 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2829 = PRIM_ISCONS(_35reg2828);
if (True == _35reg2829) {
Obj _35reg2830 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2831 = PRIM_CAR(_35reg2830);
Obj a = _35reg2831;
Obj _35reg2832 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2833 = PRIM_CDR(_35reg2832);
Obj _35reg2834 = PRIM_ISCONS(_35reg2833);
if (True == _35reg2834) {
Obj _35reg2835 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2836 = PRIM_CDR(_35reg2835);
Obj _35reg2837 = PRIM_CAR(_35reg2836);
Obj b = _35reg2837;
Obj _35reg2838 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2839 = PRIM_CDR(_35reg2838);
Obj _35reg2840 = PRIM_CDR(_35reg2839);
Obj _35reg2841 = PRIM_ISCONS(_35reg2840);
if (True == _35reg2841) {
Obj _35reg2842 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2843 = PRIM_CDR(_35reg2842);
Obj _35reg2844 = PRIM_CDR(_35reg2843);
Obj _35reg2845 = PRIM_CAR(_35reg2844);
Obj c = _35reg2845;
Obj _35reg2846 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2847 = PRIM_CDR(_35reg2846);
Obj _35reg2848 = PRIM_CDR(_35reg2847);
Obj _35reg2849 = PRIM_CDR(_35reg2848);
Obj _35reg2850 = PRIM_EQ(Nil, _35reg2849);
if (True == _35reg2850) {
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
__arg0 = _35cc2232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2232;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj _35val2851 = __arg1;
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 18, clofun7, 2, a, _35val2851);
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
Obj _35val2852 = __arg1;
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35val2851= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2853 = makeCons(a, Nil);
PUSH_CONT(co, 19, clofun7, 1, _35val2851);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = _35val2852;
__arg2 = _35reg2853;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj _35val2854 = __arg1;
Obj _35val2851= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35union);
__arg1 = _35val2851;
__arg2 = _35val2854;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj _35cc2233 = makeNative(21, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2815 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2815) {
Obj _35reg2816 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2817 = PRIM_EQ(sym_37closure, _35reg2816);
if (True == _35reg2817) {
Obj _35reg2818 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2819 = PRIM_ISCONS(_35reg2818);
if (True == _35reg2819) {
Obj _35reg2820 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2821 = PRIM_CAR(_35reg2820);
Obj lam = _35reg2821;
Obj _35reg2822 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2823 = PRIM_CDR(_35reg2822);
Obj more = _35reg2823;
Obj _35reg2824 = makeCons(lam, more);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = _35reg2824;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2233;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj _35cc2234 = makeNative(22, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2805 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2805) {
Obj _35reg2806 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2807 = PRIM_EQ(symreturn, _35reg2806);
if (True == _35reg2807) {
Obj _35reg2808 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2809 = PRIM_ISCONS(_35reg2808);
if (True == _35reg2809) {
Obj _35reg2810 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2811 = PRIM_CAR(_35reg2810);
Obj x = _35reg2811;
Obj _35reg2812 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2813 = PRIM_CDR(_35reg2812);
Obj _35reg2814 = PRIM_EQ(Nil, _35reg2813);
if (True == _35reg2814) {
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
__arg0 = _35cc2234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2234;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35cc2235 = makeNative(24, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2785 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2785) {
Obj _35reg2786 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2787 = PRIM_EQ(symcall, _35reg2786);
if (True == _35reg2787) {
Obj _35reg2788 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2789 = PRIM_ISCONS(_35reg2788);
if (True == _35reg2789) {
Obj _35reg2790 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2791 = PRIM_CAR(_35reg2790);
Obj exp = _35reg2791;
Obj _35reg2792 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2793 = PRIM_CDR(_35reg2792);
Obj _35reg2794 = PRIM_ISCONS(_35reg2793);
if (True == _35reg2794) {
Obj _35reg2795 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2796 = PRIM_CDR(_35reg2795);
Obj _35reg2797 = PRIM_CAR(_35reg2796);
Obj cont = _35reg2797;
Obj _35reg2798 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2799 = PRIM_CDR(_35reg2798);
Obj _35reg2800 = PRIM_CDR(_35reg2799);
Obj _35reg2801 = PRIM_EQ(Nil, _35reg2800);
if (True == _35reg2801) {
Obj _35reg2802 = makeCons(cont, Nil);
Obj _35reg2803 = makeCons(exp, _35reg2802);
PUSH_CONT(co, 23, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = _35reg2803;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2235;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35val2804 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = _35val2804;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj _35cc2236 = makeNative(25, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2775 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2775) {
Obj _35reg2776 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2777 = PRIM_EQ(symtailcall, _35reg2776);
if (True == _35reg2777) {
Obj _35reg2778 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2779 = PRIM_ISCONS(_35reg2778);
if (True == _35reg2779) {
Obj _35reg2780 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2781 = PRIM_CAR(_35reg2780);
Obj exp = _35reg2781;
Obj _35reg2782 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2783 = PRIM_CDR(_35reg2782);
Obj _35reg2784 = PRIM_EQ(Nil, _35reg2783);
if (True == _35reg2784) {
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
__arg0 = _35cc2236;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2236;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2236;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2236;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35cc2237 = makeNative(27, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2757 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2757) {
Obj _35reg2758 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2759 = PRIM_EQ(symcontinuation, _35reg2758);
if (True == _35reg2759) {
Obj _35reg2760 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2761 = PRIM_ISCONS(_35reg2760);
if (True == _35reg2761) {
Obj _35reg2762 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2763 = PRIM_CAR(_35reg2762);
Obj arg = _35reg2763;
Obj _35reg2764 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2765 = PRIM_CDR(_35reg2764);
Obj _35reg2766 = PRIM_ISCONS(_35reg2765);
if (True == _35reg2766) {
Obj _35reg2767 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2768 = PRIM_CDR(_35reg2767);
Obj _35reg2769 = PRIM_CAR(_35reg2768);
Obj body = _35reg2769;
Obj _35reg2770 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2771 = PRIM_CDR(_35reg2770);
Obj _35reg2772 = PRIM_CDR(_35reg2771);
Obj _35reg2773 = PRIM_EQ(Nil, _35reg2772);
if (True == _35reg2773) {
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
__arg0 = _35cc2237;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2237;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2237;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2237;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2237;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj _35val2774 = __arg1;
Obj arg= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = _35val2774;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj _35cc2238 = makeNative(29, clofun7, 0, 0);
Obj _35reg2752 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2752) {
Obj _35reg2753 = PRIM_CAR(closureRef(co, 0));
Obj f = _35reg2753;
Obj _35reg2754 = PRIM_CDR(closureRef(co, 0));
Obj args = _35reg2754;
Obj _35reg2755 = makeCons(f, args);
PUSH_CONT(co, 28, clofun7, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = _35reg2755;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2238;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35val2756 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = _35val2756;
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
Obj _35p2219 = __arg1;
Obj _35cc2220 = makeNative(31, clofun7, 0, 1, _35p2219);
Obj _35reg2741 = PRIM_ISCONS(_35p2219);
if (True == _35reg2741) {
Obj _35reg2742 = PRIM_CAR(_35p2219);
Obj _35reg2743 = PRIM_EQ(sym_37const, _35reg2742);
if (True == _35reg2743) {
Obj _35reg2744 = PRIM_CDR(_35p2219);
Obj _35reg2745 = PRIM_ISCONS(_35reg2744);
if (True == _35reg2745) {
Obj _35reg2746 = PRIM_CDR(_35p2219);
Obj _35reg2747 = PRIM_CAR(_35reg2746);
Obj x = _35reg2747;
Obj _35reg2748 = PRIM_CDR(_35p2219);
Obj _35reg2749 = PRIM_CDR(_35reg2748);
Obj _35reg2750 = PRIM_EQ(Nil, _35reg2749);
if (True == _35reg2750) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2220;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label31:
{
Obj _35cc2221 = makeNative(32, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2731 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2731) {
Obj _35reg2732 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2733 = PRIM_EQ(sym_37global, _35reg2732);
if (True == _35reg2733) {
Obj _35reg2734 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2735 = PRIM_ISCONS(_35reg2734);
if (True == _35reg2735) {
Obj _35reg2736 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2737 = PRIM_CAR(_35reg2736);
Obj x = _35reg2737;
Obj _35reg2738 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2739 = PRIM_CDR(_35reg2738);
Obj _35reg2740 = PRIM_EQ(Nil, _35reg2739);
if (True == _35reg2740) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2221;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2221;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2221;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2221;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj _35cc2222 = makeNative(33, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2721 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2721) {
Obj _35reg2722 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2723 = PRIM_EQ(sym_37builtin, _35reg2722);
if (True == _35reg2723) {
Obj _35reg2724 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2725 = PRIM_ISCONS(_35reg2724);
if (True == _35reg2725) {
Obj _35reg2726 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2727 = PRIM_CAR(_35reg2726);
Obj op = _35reg2727;
Obj _35reg2728 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2729 = PRIM_CDR(_35reg2728);
Obj _35reg2730 = PRIM_EQ(Nil, _35reg2729);
if (True == _35reg2730) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2222;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj _35cc2223 = makeNative(34, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2711 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2711) {
Obj _35reg2712 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2713 = PRIM_EQ(symquote, _35reg2712);
if (True == _35reg2713) {
Obj _35reg2714 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2715 = PRIM_ISCONS(_35reg2714);
if (True == _35reg2715) {
Obj _35reg2716 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2717 = PRIM_CAR(_35reg2716);
Obj x = _35reg2717;
Obj _35reg2718 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2719 = PRIM_CDR(_35reg2718);
Obj _35reg2720 = PRIM_EQ(Nil, _35reg2719);
if (True == _35reg2720) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj _35cc2224 = makeNative(35, clofun7, 0, 1, closureRef(co, 0));
Obj _35reg2701 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2701) {
Obj _35reg2702 = PRIM_CAR(closureRef(co, 0));
Obj _35reg2703 = PRIM_EQ(sym_37closure_45ref, _35reg2702);
if (True == _35reg2703) {
Obj _35reg2704 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2705 = PRIM_ISCONS(_35reg2704);
if (True == _35reg2705) {
Obj _35reg2706 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2707 = PRIM_CAR(_35reg2706);
Obj __ = _35reg2707;
Obj _35reg2708 = PRIM_CDR(closureRef(co, 0));
Obj _35reg2709 = PRIM_CDR(_35reg2708);
Obj _35reg2710 = PRIM_EQ(Nil, _35reg2709);
if (True == _35reg2710) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2224;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2224;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2224;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2224;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj _35cc2225 = makeNative(36, clofun7, 0, 0);
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
Obj _35p2214 = __arg1;
Obj _35p2215 = __arg2;
Obj _35cc2216 = makeNative(38, clofun7, 0, 2, _35p2214, _35p2215);
Obj _35reg2699 = PRIM_EQ(Nil, _35p2214);
if (True == _35reg2699) {
Obj __ = _35p2215;
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2216;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35cc2217 = makeNative(40, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2695 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2695) {
Obj _35reg2696 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg2696;
Obj _35reg2697 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg2697;
Obj s2 = closureRef(co, 1);
PUSH_CONT(co, 39, clofun7, 3, y, s2, _35cc2217);
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
__arg0 = _35cc2217;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _35val2698 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc2217= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2698) {
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
__arg0 = _35cc2217;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj _35cc2218 = makeNative(42, clofun7, 0, 0);
Obj _35reg2690 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2690) {
Obj _35reg2691 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg2691;
Obj _35reg2692 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg2692;
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
__arg0 = _35cc2218;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label41:
{
Obj _35val2693 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2694 = makeCons(x, _35val2693);
__nargs = 2;
__arg1 = _35reg2694;
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
Obj _35p2209 = __arg1;
Obj _35p2210 = __arg2;
Obj _35cc2211 = makeNative(44, clofun7, 0, 2, _35p2209, _35p2210);
Obj _35reg2688 = PRIM_EQ(Nil, _35p2209);
if (True == _35reg2688) {
Obj s2 = _35p2210;
__nargs = 2;
__arg1 = s2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun7) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2211;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj _35cc2212 = makeNative(46, clofun7, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj _35reg2684 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2684) {
Obj _35reg2685 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg2685;
Obj _35reg2686 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg2686;
Obj s2 = closureRef(co, 1);
PUSH_CONT(co, 45, clofun7, 3, y, s2, _35cc2212);
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
__arg0 = _35cc2212;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj _35val2687 = __arg1;
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s2= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35cc2212= co->ctx.stk.stack[co->ctx.stk.base + 2];
if (True == _35val2687) {
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
__arg0 = _35cc2212;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj _35cc2213 = makeNative(48, clofun7, 0, 0);
Obj _35reg2679 = PRIM_ISCONS(closureRef(co, 0));
if (True == _35reg2679) {
Obj _35reg2680 = PRIM_CAR(closureRef(co, 0));
Obj x = _35reg2680;
Obj _35reg2681 = PRIM_CDR(closureRef(co, 0));
Obj y = _35reg2681;
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
__arg0 = _35cc2213;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj _35val2682 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2683 = makeCons(x, _35val2682);
__nargs = 2;
__arg1 = _35reg2683;
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
Obj _35p2193 = __arg1;
Obj _35p2194 = __arg2;
Obj _35p2195 = __arg3;
Obj _35p2196 = co->args[4];
Obj _35p2197 = co->args[5];
Obj _35cc2198 = makeNative(3, clofun8, 0, 5, _35p2193, _35p2194, _35p2195, _35p2196, _35p2197);
Obj __ = _35p2193;
__ = _35p2194;
__ = _35p2195;
Obj globals = _35p2196;
Obj x = _35p2197;
PUSH_CONT(co, 0, clofun8, 2, x, _35cc2198);
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
Obj _35val2664 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2198= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2664) {
if (True == True) {
Obj _35reg2665 = makeCons(x, Nil);
Obj _35reg2666 = makeCons(sym_37const, _35reg2665);
__nargs = 2;
__arg1 = _35reg2666;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2198;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj _35reg2667 = primIsString(x);
if (True == _35reg2667) {
if (True == True) {
Obj _35reg2668 = makeCons(x, Nil);
Obj _35reg2669 = makeCons(sym_37const, _35reg2668);
__nargs = 2;
__arg1 = _35reg2669;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2198;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
PUSH_CONT(co, 1, clofun8, 2, x, _35cc2198);
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
Obj _35val2670 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2198= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2670) {
if (True == True) {
Obj _35reg2671 = makeCons(x, Nil);
Obj _35reg2672 = makeCons(sym_37const, _35reg2671);
__nargs = 2;
__arg1 = _35reg2672;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2198;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
PUSH_CONT(co, 2, clofun8, 2, x, _35cc2198);
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
Obj _35val2673 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35cc2198= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2673) {
if (True == True) {
Obj _35reg2674 = makeCons(x, Nil);
Obj _35reg2675 = makeCons(sym_37const, _35reg2674);
__nargs = 2;
__arg1 = _35reg2675;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2198;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj _35reg2676 = makeCons(x, Nil);
Obj _35reg2677 = makeCons(sym_37const, _35reg2676);
__nargs = 2;
__arg1 = _35reg2677;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2198;
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
Obj _35cc2199 = makeNative(5, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj __ = closureRef(co, 0);
__ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg2651 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg2651) {
Obj _35reg2652 = PRIM_CAR(closureRef(co, 4));
Obj _35reg2653 = PRIM_EQ(symquote, _35reg2652);
if (True == _35reg2653) {
Obj _35reg2654 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2655 = PRIM_ISCONS(_35reg2654);
if (True == _35reg2655) {
Obj _35reg2656 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2657 = PRIM_CAR(_35reg2656);
Obj x = _35reg2657;
Obj _35reg2658 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2659 = PRIM_CDR(_35reg2658);
Obj _35reg2660 = PRIM_EQ(Nil, _35reg2659);
if (True == _35reg2660) {
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
__arg0 = _35cc2199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label4:
{
Obj _35val2661 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2662 = makeCons(x, Nil);
Obj _35reg2663 = makeCons(sym_37const, _35reg2662);
__nargs = 2;
__arg1 = _35reg2663;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
Obj _35cc2200 = makeNative(9, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj x = closureRef(co, 4);
Obj _35reg2645 = primIsSymbol(x);
if (True == _35reg2645) {
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
__arg0 = _35cc2200;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj _35val2646 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val2646) {
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
Obj _35val2647 = __arg1;
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj v = _35val2647;
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
Obj _35val2648 = __arg1;
Obj v= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2649 = makeCons(v, Nil);
Obj _35reg2650 = makeCons(sym_37global, _35reg2649);
__nargs = 2;
__arg1 = _35reg2650;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
Obj _35cc2201 = makeNative(12, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg2623 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg2623) {
Obj _35reg2624 = PRIM_CAR(closureRef(co, 4));
Obj _35reg2625 = PRIM_EQ(symlambda, _35reg2624);
if (True == _35reg2625) {
Obj _35reg2626 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2627 = PRIM_ISCONS(_35reg2626);
if (True == _35reg2627) {
Obj _35reg2628 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2629 = PRIM_CAR(_35reg2628);
Obj args = _35reg2629;
Obj _35reg2630 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2631 = PRIM_CDR(_35reg2630);
Obj _35reg2632 = PRIM_ISCONS(_35reg2631);
if (True == _35reg2632) {
Obj _35reg2633 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2634 = PRIM_CDR(_35reg2633);
Obj _35reg2635 = PRIM_CAR(_35reg2634);
Obj body = _35reg2635;
Obj _35reg2636 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2637 = PRIM_CDR(_35reg2636);
Obj _35reg2638 = PRIM_CDR(_35reg2637);
Obj _35reg2639 = PRIM_EQ(Nil, _35reg2638);
if (True == _35reg2639) {
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
__arg0 = _35cc2201;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2201;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2201;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2201;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2201;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj _35val2640 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj body= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 11, clofun8, 1, args);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = _35val2640;
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
Obj _35val2641 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2642 = makeCons(_35val2641, Nil);
Obj _35reg2643 = makeCons(args, _35reg2642);
Obj _35reg2644 = makeCons(symlambda, _35reg2643);
__nargs = 2;
__arg1 = _35reg2644;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj _35cc2202 = makeNative(15, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg2616 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg2616) {
Obj _35reg2617 = PRIM_CAR(closureRef(co, 4));
Obj _35reg2618 = PRIM_EQ(symif, _35reg2617);
if (True == _35reg2618) {
Obj _35reg2619 = PRIM_CDR(closureRef(co, 4));
Obj args = _35reg2619;
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
__arg0 = _35cc2202;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2202;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj _35val2620 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 14, clofun8, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val2620;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj _35val2621 = __arg1;
Obj _35reg2622 = makeCons(symif, _35val2621);
__nargs = 2;
__arg1 = _35reg2622;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj _35cc2203 = makeNative(18, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg2594 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg2594) {
Obj _35reg2595 = PRIM_CAR(closureRef(co, 4));
Obj _35reg2596 = PRIM_EQ(symdo, _35reg2595);
if (True == _35reg2596) {
Obj _35reg2597 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2598 = PRIM_ISCONS(_35reg2597);
if (True == _35reg2598) {
Obj _35reg2599 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2600 = PRIM_CAR(_35reg2599);
Obj x = _35reg2600;
Obj _35reg2601 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2602 = PRIM_CDR(_35reg2601);
Obj _35reg2603 = PRIM_ISCONS(_35reg2602);
if (True == _35reg2603) {
Obj _35reg2604 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2605 = PRIM_CDR(_35reg2604);
Obj _35reg2606 = PRIM_CAR(_35reg2605);
Obj y = _35reg2606;
Obj _35reg2607 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2608 = PRIM_CDR(_35reg2607);
Obj _35reg2609 = PRIM_CDR(_35reg2608);
Obj _35reg2610 = PRIM_EQ(Nil, _35reg2609);
if (True == _35reg2610) {
PUSH_CONT(co, 16, clofun8, 5, env, ns, import, globals, y);
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
__arg0 = _35cc2203;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2203;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2203;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2203;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2203;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2611 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 4];
PUSH_CONT(co, 17, clofun8, 1, _35val2611);
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

label17:
{
Obj _35val2612 = __arg1;
Obj _35val2611= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2613 = makeCons(_35val2612, Nil);
Obj _35reg2614 = makeCons(_35val2611, _35reg2613);
Obj _35reg2615 = makeCons(symdo, _35reg2614);
__nargs = 2;
__arg1 = _35reg2615;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label18:
{
Obj _35cc2204 = makeNative(21, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg2561 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg2561) {
Obj _35reg2562 = PRIM_CAR(closureRef(co, 4));
Obj _35reg2563 = PRIM_EQ(symlet, _35reg2562);
if (True == _35reg2563) {
Obj _35reg2564 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2565 = PRIM_ISCONS(_35reg2564);
if (True == _35reg2565) {
Obj _35reg2566 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2567 = PRIM_CAR(_35reg2566);
Obj a = _35reg2567;
Obj _35reg2568 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2569 = PRIM_CDR(_35reg2568);
Obj _35reg2570 = PRIM_ISCONS(_35reg2569);
if (True == _35reg2570) {
Obj _35reg2571 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2572 = PRIM_CDR(_35reg2571);
Obj _35reg2573 = PRIM_CAR(_35reg2572);
Obj b = _35reg2573;
Obj _35reg2574 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2575 = PRIM_CDR(_35reg2574);
Obj _35reg2576 = PRIM_CDR(_35reg2575);
Obj _35reg2577 = PRIM_ISCONS(_35reg2576);
if (True == _35reg2577) {
Obj _35reg2578 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2579 = PRIM_CDR(_35reg2578);
Obj _35reg2580 = PRIM_CDR(_35reg2579);
Obj _35reg2581 = PRIM_CAR(_35reg2580);
Obj c = _35reg2581;
Obj _35reg2582 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2583 = PRIM_CDR(_35reg2582);
Obj _35reg2584 = PRIM_CDR(_35reg2583);
Obj _35reg2585 = PRIM_CDR(_35reg2584);
Obj _35reg2586 = PRIM_EQ(Nil, _35reg2585);
if (True == _35reg2586) {
PUSH_CONT(co, 19, clofun8, 6, env, ns, import, globals, c, a);
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
__arg0 = _35cc2204;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2204;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2204;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2204;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2204;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2204;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj _35val2587 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj c= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg2588 = makeCons(a, env);
PUSH_CONT(co, 20, clofun8, 2, _35val2587, a);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = _35reg2588;
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

label20:
{
Obj _35val2589 = __arg1;
Obj _35val2587= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj a= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2590 = makeCons(_35val2589, Nil);
Obj _35reg2591 = makeCons(_35val2587, _35reg2590);
Obj _35reg2592 = makeCons(a, _35reg2591);
Obj _35reg2593 = makeCons(symlet, _35reg2592);
__nargs = 2;
__arg1 = _35reg2593;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label21:
{
Obj _35cc2205 = makeNative(22, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj __ = closureRef(co, 1);
__ = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg2535 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg2535) {
Obj _35reg2536 = PRIM_CAR(closureRef(co, 4));
Obj _35reg2537 = PRIM_EQ(symns, _35reg2536);
if (True == _35reg2537) {
Obj _35reg2538 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2539 = PRIM_ISCONS(_35reg2538);
if (True == _35reg2539) {
Obj _35reg2540 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2541 = PRIM_CAR(_35reg2540);
Obj path = _35reg2541;
Obj _35reg2542 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2543 = PRIM_CDR(_35reg2542);
Obj _35reg2544 = PRIM_ISCONS(_35reg2543);
if (True == _35reg2544) {
Obj _35reg2545 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2546 = PRIM_CDR(_35reg2545);
Obj _35reg2547 = PRIM_CAR(_35reg2546);
Obj import = _35reg2547;
Obj _35reg2548 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2549 = PRIM_CDR(_35reg2548);
Obj _35reg2550 = PRIM_CDR(_35reg2549);
Obj _35reg2551 = PRIM_ISCONS(_35reg2550);
if (True == _35reg2551) {
Obj _35reg2552 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2553 = PRIM_CDR(_35reg2552);
Obj _35reg2554 = PRIM_CDR(_35reg2553);
Obj _35reg2555 = PRIM_CAR(_35reg2554);
Obj body = _35reg2555;
Obj _35reg2556 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2557 = PRIM_CDR(_35reg2556);
Obj _35reg2558 = PRIM_CDR(_35reg2557);
Obj _35reg2559 = PRIM_CDR(_35reg2558);
Obj _35reg2560 = PRIM_EQ(Nil, _35reg2559);
if (True == _35reg2560) {
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
__arg0 = _35cc2205;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2205;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2205;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2205;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2205;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2205;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj _35cc2206 = makeNative(26, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg2508 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg2508) {
Obj _35reg2509 = PRIM_CAR(closureRef(co, 4));
Obj _35reg2510 = PRIM_EQ(symdef, _35reg2509);
if (True == _35reg2510) {
Obj _35reg2511 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2512 = PRIM_ISCONS(_35reg2511);
if (True == _35reg2512) {
Obj _35reg2513 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2514 = PRIM_CAR(_35reg2513);
Obj var = _35reg2514;
Obj _35reg2515 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2516 = PRIM_CDR(_35reg2515);
Obj _35reg2517 = PRIM_ISCONS(_35reg2516);
if (True == _35reg2517) {
Obj _35reg2518 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2519 = PRIM_CDR(_35reg2518);
Obj _35reg2520 = PRIM_CAR(_35reg2519);
Obj val = _35reg2520;
Obj _35reg2521 = PRIM_CDR(closureRef(co, 4));
Obj _35reg2522 = PRIM_CDR(_35reg2521);
Obj _35reg2523 = PRIM_CDR(_35reg2522);
Obj _35reg2524 = PRIM_EQ(Nil, _35reg2523);
if (True == _35reg2524) {
PUSH_CONT(co, 23, clofun8, 5, env, ns, import, globals, val);
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
__arg0 = _35cc2206;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2206;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2206;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2206;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2206;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj _35val2525 = __arg1;
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj var1 = _35val2525;
PUSH_CONT(co, 24, clofun8, 6, var1, env, ns, import, globals, val);
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

label24:
{
Obj _35val2526 = __arg1;
Obj var1= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj val= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35reg2527 = makeCons(symset, Nil);
Obj _35reg2528 = makeCons(sym_37builtin, _35reg2527);
Obj _35reg2529 = makeCons(var1, Nil);
Obj _35reg2530 = makeCons(sym_37const, _35reg2529);
PUSH_CONT(co, 25, clofun8, 2, _35reg2530, _35reg2528);
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

label25:
{
Obj _35val2531 = __arg1;
Obj _35reg2530= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2528= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2532 = makeCons(_35val2531, Nil);
Obj _35reg2533 = makeCons(_35reg2530, _35reg2532);
Obj _35reg2534 = makeCons(_35reg2528, _35reg2533);
__nargs = 2;
__arg1 = _35reg2534;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label26:
{
Obj _35cc2207 = makeNative(34, clofun8, 0, 5, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3), closureRef(co, 4));
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj _35reg2488 = PRIM_ISCONS(closureRef(co, 4));
if (True == _35reg2488) {
Obj _35reg2489 = PRIM_CAR(closureRef(co, 4));
Obj op = _35reg2489;
Obj _35reg2490 = PRIM_CDR(closureRef(co, 4));
Obj args = _35reg2490;
PUSH_CONT(co, 27, clofun8, 7, op, args, env, ns, import, globals, _35cc2207);
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
__arg0 = _35cc2207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj _35val2491 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj _35cc2207= co->ctx.stk.stack[co->ctx.stk.base + 6];
if (True == _35val2491) {
PUSH_CONT(co, 28, clofun8, 6, op, args, env, ns, import, globals);
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
__arg0 = _35cc2207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35val2492 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj required = _35val2492;
PUSH_CONT(co, 29, clofun8, 7, required, op, args, env, ns, import, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj _35val2493 = __arg1;
Obj required= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 6];
Obj provided = _35val2493;
Obj _35reg2494 = PRIM_EQ(required, provided);
if (True == _35reg2494) {
Obj _35reg2495 = makeCons(op, Nil);
Obj _35reg2496 = makeCons(sym_37builtin, _35reg2495);
PUSH_CONT(co, 32, clofun8, 2, args, _35reg2496);
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
Obj _35reg2500 = PRIM_GT(required, provided);
if (True == _35reg2500) {
Obj _35reg2501 = PRIM_SUB(required, provided);
PUSH_CONT(co, 30, clofun8, 6, op, args, env, ns, import, globals);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35temp_45list);
__arg1 = _35reg2501;
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

label30:
{
Obj _35val2502 = __arg1;
Obj op= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 5];
Obj tmp = _35val2502;
Obj _35reg2503 = makeCons(op, args);
PUSH_CONT(co, 31, clofun8, 5, tmp, env, ns, import, globals);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35append);
__arg1 = _35reg2503;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj _35val2504 = __arg1;
Obj tmp= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj env= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj globals= co->ctx.stk.stack[co->ctx.stk.base + 4];
Obj _35reg2505 = makeCons(_35val2504, Nil);
Obj _35reg2506 = makeCons(tmp, _35reg2505);
Obj _35reg2507 = makeCons(symlambda, _35reg2506);
__nargs = 6;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = ns;
__arg3 = import;
co->args[4] = globals;
co->args[5] = _35reg2507;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj _35val2497 = __arg1;
Obj args= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2496= co->ctx.stk.stack[co->ctx.stk.base + 1];
PUSH_CONT(co, 33, clofun8, 1, _35reg2496);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val2497;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj _35val2498 = __arg1;
Obj _35reg2496= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj _35reg2499 = makeCons(_35reg2496, _35val2498);
__nargs = 2;
__arg1 = _35reg2499;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label34:
{
Obj _35cc2208 = makeNative(36, clofun8, 0, 0);
Obj env = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj import = closureRef(co, 2);
Obj globals = closureRef(co, 3);
Obj ls = closureRef(co, 4);
PUSH_CONT(co, 35, clofun8, 1, ls);
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

label35:
{
Obj _35val2487 = __arg1;
Obj ls= co->ctx.stk.stack[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = _35val2487;
__arg2 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
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

label37:
{
Obj _35p2188 = __arg1;
Obj _35p2189 = __arg2;
Obj _35p2190 = __arg3;
Obj _35cc2191 = makeNative(38, clofun8, 0, 3, _35p2188, _35p2189, _35p2190);
Obj s = _35p2188;
Obj ns = _35p2189;
Obj _35reg2485 = PRIM_EQ(Nil, _35p2190);
if (True == _35reg2485) {
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
__arg0 = _35cc2191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj _35cc2192 = makeNative(46, clofun8, 0, 0);
Obj s = closureRef(co, 0);
Obj ns = closureRef(co, 1);
Obj _35reg2475 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg2475) {
Obj _35reg2476 = PRIM_CAR(closureRef(co, 2));
Obj import = _35reg2476;
Obj _35reg2477 = PRIM_CDR(closureRef(co, 2));
Obj more = _35reg2477;
PUSH_CONT(co, 39, clofun8, 4, import, s, ns, more);
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
__arg0 = _35cc2192;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj _35val2478 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 40, clofun8, 4, import, s, ns, more);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35intern);
__arg1 = _35val2478;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj _35val2479 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
PUSH_CONT(co, 41, clofun8, 4, import, s, ns, more);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35value_45or);
__arg1 = _35val2479;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj _35val2480 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
Obj export = _35val2480;
PUSH_CONT(co, 42, clofun8, 4, import, s, ns, more);
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

label42:
{
Obj _35val2481 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj s= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 2];
Obj more= co->ctx.stk.stack[co->ctx.stk.base + 3];
if (True == _35val2481) {
PUSH_CONT(co, 43, clofun8, 1, import);
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

label43:
{
Obj _35val2482 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 44, clofun8, 1, import);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = makeCString("#");
__arg2 = _35val2482;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj _35val2483 = __arg1;
Obj import= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 45, clofun8, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = import;
__arg2 = _35val2483;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj _35val2484 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35intern);
__arg1 = _35val2484;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
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

label47:
{
Obj var = __arg1;
Obj ns = __arg2;
Obj _35reg2469 = PRIM_EQ(ns, makeCString(""));
if (True == _35reg2469) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 48, clofun8, 2, var, ns);
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

label48:
{
Obj _35val2470 = __arg1;
Obj var= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 1];
if (True == _35val2470) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun8) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
PUSH_CONT(co, 49, clofun8, 1, ns);
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

label49:
{
Obj _35val2471 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 0, clofun9, 1, ns);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = makeCString("#");
__arg2 = _35val2471;
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

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj _35val2472 = __arg1;
Obj ns= co->ctx.stk.stack[co->ctx.stk.base + 0];
PUSH_CONT(co, 1, clofun9, 0);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35string_45append);
__arg1 = ns;
__arg2 = _35val2472;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj _35val2473 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47init_35intern);
__arg1 = _35val2473;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj _35p2184 = __arg1;
Obj _35p2185 = __arg2;
Obj _35cc2186 = makeNative(3, clofun9, 0, 2, _35p2184, _35p2185);
Obj _35reg2467 = PRIM_EQ(MAKE_NUMBER(0), _35p2184);
if (True == _35reg2467) {
Obj res = _35p2185;
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2186;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj _35cc2187 = makeNative(4, clofun9, 0, 0);
Obj n = closureRef(co, 0);
Obj res = closureRef(co, 1);
Obj _35reg2464 = PRIM_SUB(n, MAKE_NUMBER(1));
Obj _35reg2465 = primGenSym(symtmp);
Obj _35reg2466 = makeCons(_35reg2465, res);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35temp_45list);
__arg1 = _35reg2464;
__arg2 = _35reg2466;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
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

label5:
{
Obj x = __arg1;
PUSH_CONT(co, 6, clofun9, 0);
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

label6:
{
Obj _35val2461 = __arg1;
Obj find = _35val2461;
PUSH_CONT(co, 7, clofun9, 1, find);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj _35val2462 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2462) {
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
Obj _35val2458 = __arg1;
Obj find = _35val2458;
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
Obj _35val2459 = __arg1;
Obj find= co->ctx.stk.stack[co->ctx.stk.base + 0];
if (True == _35val2459) {
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
Obj _35val2454 = __arg1;
PUSH_CONT(co, 13, clofun9, 0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = _35val2454;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj _35val2455 = __arg1;
Obj _35reg2456 = primNot(_35val2455);
__nargs = 2;
__arg1 = _35reg2456;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj _35p2180 = __arg1;
Obj _35p2181 = __arg2;
Obj _35cc2182 = makeNative(15, clofun9, 0, 2, _35p2180, _35p2181);
Obj x = _35p2180;
Obj _35reg2383 = PRIM_EQ(Nil, _35p2181);
if (True == _35reg2383) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2182;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj _35cc2183 = makeNative(17, clofun9, 0, 0);
Obj x = closureRef(co, 0);
Obj _35reg2378 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg2378) {
Obj _35reg2379 = PRIM_CAR(closureRef(co, 1));
Obj hd = _35reg2379;
Obj _35reg2380 = PRIM_CDR(closureRef(co, 1));
Obj tl = _35reg2380;
PUSH_CONT(co, 16, clofun9, 2, x, tl);
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
__arg0 = _35cc2183;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj _35val2381 = __arg1;
Obj x= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj tl= co->ctx.stk.stack[co->ctx.stk.base + 1];
Obj _35reg2382 = PRIM_LT(_35val2381, MAKE_NUMBER(0));
if (True == _35reg2382) {
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

label19:
{
Obj _35p2174 = __arg1;
Obj _35p2175 = __arg2;
Obj _35p2176 = __arg3;
Obj _35cc2177 = makeNative(20, clofun9, 0, 3, _35p2174, _35p2175, _35p2176);
Obj __ = _35p2174;
Obj x = _35p2175;
Obj _35reg2375 = PRIM_EQ(Nil, _35p2176);
if (True == _35reg2375) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2177;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj _35cc2178 = makeNative(21, clofun9, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg2371 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg2371) {
Obj _35reg2372 = PRIM_CAR(closureRef(co, 2));
Obj a = _35reg2372;
Obj _35reg2373 = PRIM_CDR(closureRef(co, 2));
Obj b = _35reg2373;
Obj _35reg2374 = PRIM_EQ(x, a);
if (True == _35reg2374) {
__nargs = 2;
__arg1 = pos;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2178;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2178;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj _35cc2179 = makeNative(22, clofun9, 0, 0);
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj _35reg2367 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg2367) {
Obj _35reg2368 = PRIM_CAR(closureRef(co, 2));
Obj a = _35reg2368;
Obj _35reg2369 = PRIM_CDR(closureRef(co, 2));
Obj b = _35reg2369;
Obj _35reg2370 = PRIM_ADD(pos, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35pos_45in_45list0);
__arg1 = _35reg2370;
__arg2 = x;
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = _35cc2179;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
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

label23:
{
Obj _35p2169 = __arg1;
Obj _35p2170 = __arg2;
Obj _35p2171 = __arg3;
Obj _35cc2172 = makeNative(24, clofun9, 0, 3, _35p2169, _35p2170, _35p2171);
Obj f = _35p2169;
Obj acc = _35p2170;
Obj _35reg2365 = PRIM_EQ(Nil, _35p2171);
if (True == _35reg2365) {
__nargs = 2;
__arg1 = acc;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2172;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj _35cc2173 = makeNative(26, clofun9, 0, 0);
Obj f = closureRef(co, 0);
Obj acc = closureRef(co, 1);
Obj _35reg2361 = PRIM_ISCONS(closureRef(co, 2));
if (True == _35reg2361) {
Obj _35reg2362 = PRIM_CAR(closureRef(co, 2));
Obj x = _35reg2362;
Obj _35reg2363 = PRIM_CDR(closureRef(co, 2));
Obj y = _35reg2363;
PUSH_CONT(co, 25, clofun9, 2, f, y);
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
__arg0 = _35cc2173;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj _35val2364 = __arg1;
Obj f= co->ctx.stk.stack[co->ctx.stk.base + 0];
Obj y= co->ctx.stk.stack[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = f;
__arg2 = _35val2364;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
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

label27:
{
Obj _35p2164 = __arg1;
Obj _35p2165 = __arg2;
Obj _35cc2166 = makeNative(28, clofun9, 0, 2, _35p2164, _35p2165);
Obj var = _35p2164;
Obj _35reg2359 = PRIM_EQ(Nil, _35p2165);
if (True == _35reg2359) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2166;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj _35cc2167 = makeNative(29, clofun9, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj _35reg2349 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg2349) {
Obj _35reg2350 = PRIM_CAR(closureRef(co, 1));
Obj _35reg2351 = PRIM_ISCONS(_35reg2350);
if (True == _35reg2351) {
Obj _35reg2352 = PRIM_CAR(closureRef(co, 1));
Obj _35reg2353 = PRIM_CAR(_35reg2352);
Obj x = _35reg2353;
Obj _35reg2354 = PRIM_CAR(closureRef(co, 1));
Obj _35reg2355 = PRIM_CDR(_35reg2354);
Obj y = _35reg2355;
Obj _35reg2356 = PRIM_CDR(closureRef(co, 1));
Obj __ = _35reg2356;
Obj _35reg2357 = PRIM_EQ(var, x);
if (True == _35reg2357) {
Obj _35reg2358 = makeCons(x, y);
__nargs = 2;
__arg1 = _35reg2358;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = _35cc2167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = _35cc2167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj _35cc2168 = makeNative(30, clofun9, 0, 0);
Obj var = closureRef(co, 0);
Obj _35reg2346 = PRIM_ISCONS(closureRef(co, 1));
if (True == _35reg2346) {
Obj _35reg2347 = PRIM_CAR(closureRef(co, 1));
Obj __ = _35reg2347;
Obj _35reg2348 = PRIM_CDR(closureRef(co, 1));
Obj y = _35reg2348;
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
__arg0 = _35cc2168;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

