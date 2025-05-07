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
static void clofun10(struct Cora* co);
static void clofun11(struct Cora* co);
static void clofun12(struct Cora* co);
static void clofun13(struct Cora* co);


static Obj symcora_47lib_47io_35close_45output_45file;
static Obj symcora_47lib_47io_35open_45output_45file;
static Obj symcora_47lib_47toc_35compile_45to_45c;
static Obj symcora_47init_35read_45file_45as_45sexp;
static Obj symcora_47lib_47toc_35preprocess;
static Obj symcora_47lib_47toc_35split_45type_45and_45code_45toplevel;
static Obj symcora_47lib_47toc_35generate_45typecheck_45code;
static Obj symcora_47lib_47toc_35extract_45typecheck_45body;
static Obj symcora_47lib_47toc_35split_45type_45and_45code;
static Obj symcora_47lib_47toc_35handle_45import_45eagerly;
static Obj symcora_47lib_47toc_35generate_45c;
static Obj symcora_47init_35symbol_45_62string;
static Obj symcora_47lib_47toc_35generate_45entry;
static Obj symcora_47lib_47toc_35group_45by_45mod_45h;
static Obj symcora_47lib_47toc_35generate_45toplevel_45group;
static Obj symcora_47lib_47toc_35generate_45jumptable;
static Obj symcora_47lib_47toc_35compile;
static Obj symcora_47init_35cddr;
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
static Obj symcora_47lib_47toc_35local_45from_45params;
static Obj symcora_47lib_47toc_35code_45gen_45func_45declare;
static Obj symcora_47lib_47toc_35generate_45inst_45list_45h;
static Obj symcora_47lib_47toc_35for_45each;
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
static Obj symcora_47lib_47toc_35explicit_45stack;
static Obj symcora_47lib_47toc_35wrap_45var;
static Obj symcora_47init_35caar;
static Obj symcora_47init_35pair_63;
static Obj symcora_47init_35reverse;
static Obj symcora_47lib_47toc_35tailify_45list;
static Obj symcora_47lib_47toc_35tailify;
static Obj symcora_47lib_47toc_35id;
static Obj symcora_47lib_47toc_35closure_45convert;
static Obj symcora_47lib_47toc_35free_45vars;
static Obj symcora_47lib_47toc_35convert_45protect_63;
static Obj symcora_47lib_47toc_35diff;
static Obj symcora_47lib_47toc_35union;
static Obj symcora_47init_35boolean_63;
static Obj symcora_47init_35number_63;
static Obj symcora_47lib_47toc_35add_45symbol_45to_45list;
static Obj symcora_47init_35elem_63;
static Obj symcora_47init_35append;
static Obj symcora_47init_35length;
static Obj symcora_47init_35map;
static Obj symcora_47lib_47toc_35parse;
static Obj symcora_47lib_47toc_35temp_45list;
static Obj symcora_47init_35cadr;
static Obj symcora_47lib_47toc_35builtin_45_62args;
static Obj symcora_47init_35caddr;
static Obj symcora_47lib_47toc_35builtin_45_62name;
static Obj symcora_47init_35null_63;
static Obj symcora_47lib_47toc_35builtin_63;
static Obj symcora_47lib_47toc_35_42builtin_45prims_42;
static Obj symcora_47lib_47toc_35exist_45in_45env;
static Obj symcora_47lib_47toc_35index;
static Obj symcora_47lib_47toc_35pos_45in_45list0;
static Obj symcora_47lib_47toc_35foldl;
static Obj symcora_47lib_47toc_35error;
static Obj symcora_47lib_47toc_35assq;
static Obj symclose_45output_45file;
static Obj symopen_45output_45file;
static Obj symstream;
static Obj symfrom;
static Obj symcompile_45to_45c;
static Obj symsexp1;
static Obj symread_45file_45as_45sexp;
static Obj symsexp;
static Obj symfile_45path;
static Obj sympreprocess;
static Obj symsingle;
static Obj symsplit_45type_45and_45code_45toplevel;
static Obj symcora_47lib_47infer_35_42typecheck_42;
static Obj symgenerate_45typecheck_45code;
static Obj symsymbols;
static Obj symname;
static Obj symextract_45typecheck_45body;
static Obj symbackquote;
static Obj symmacroexpand;
static Obj symdeclare;
static Obj sym_58declare;
static Obj sym_58type;
static Obj symcode;
static Obj symtype;
static Obj symsplit_45type_45and_45code;
static Obj sympkg;
static Obj symimport;
static Obj symexport;
static Obj symremain;
static Obj sympackage;
static Obj symhandle_45import_45eagerly;
static Obj symgroups;
static Obj symgenerate_45c;
static Obj symsymbol_45_62string;
static Obj symgenerate_45entry;
static Obj symbc;
static Obj symgroup_45by_45mod_45h;
static Obj symgroup;
static Obj symgenerate_45toplevel_45group;
static Obj symto;
static Obj symgenerate_45jumptable;
static Obj symcompile;
static Obj symcddr;
static Obj symfns;
static Obj sym_45_62;
static Obj symdefmacro;
static Obj symobj;
static Obj symrewrite_45_45_62macro;
static Obj syme1;
static Obj symvector;
static Obj symcollect_45lambda_45pass;
static Obj symexplicit_45stack_45pass;
static Obj symtailify_45pass;
static Obj symclosure_45convert_45pass;
static Obj symparse_45pass;
static Obj symdisplay;
static Obj symother;
static Obj symactives;
static Obj symcode_45gen_45toplevel;
static Obj symgenerate_45call_45args_45reverse;
static Obj symlocal_45from_45cont;
static Obj symignore;
static Obj symlocal_45from_45params;
static Obj symcode_45gen_45func_45declare;
static Obj symgid;
static Obj symmaxid;
static Obj symfn;
static Obj symgenerate_45inst_45list_45h;
static Obj symfor_45each;
static Obj symstacks;
static Obj symgenerate_45cont;
static Obj symgenerate_45group_45name;
static Obj sym_42mod_45num_42;
static Obj symmod;
static Obj symnargs;
static Obj symlabel;
static Obj symgenerate_45inst_45list;
static Obj symescape_45str;
static Obj sym_37stack_45ref;
static Obj symmatch;
static Obj symgenerate_45sym;
static Obj symx1;
static Obj symvalue;
static Obj symsym;
static Obj symgenerate_45inst;
static Obj symgenerate_45num;
static Obj symgenerate_45str;
static Obj symi;
static Obj symw;
static Obj symself;
static Obj symgenerate_45call_45list;
static Obj symk;
static Obj symvector_45set_33;
static Obj symcur1;
static Obj symidx;
static Obj syme;
static Obj symf_45args;
static Obj symappend_45result;
static Obj symvector_45ref;
static Obj symcur;
static Obj symbody1;
static Obj symparams;
static Obj symclo_45or_45cont;
static Obj symv;
static Obj symcollect_45lambda;
static Obj sym_37continuation;
static Obj symfvs2;
static Obj symexplicit_45stack;
static Obj symhd1;
static Obj symval;
static Obj symwrap_45var;
static Obj symcaar;
static Obj sympair_63;
static Obj symand;
static Obj symreverse;
static Obj symtailify_45list;
static Obj symfrees;
static Obj symrb;
static Obj symra;
static Obj symnext;
static Obj symtailify;
static Obj symid;
static Obj symfvs1;
static Obj symfvs;
static Obj symclosure_45convert;
static Obj symarg;
static Obj symcontinuation;
static Obj symtailcall;
static Obj symcont;
static Obj symexp;
static Obj symcall;
static Obj symreturn;
static Obj symmore;
static Obj symlam;
static Obj sym_37closure;
static Obj symz;
static Obj symfree_45vars;
static Obj sym_37closure_45ref;
static Obj symconvert_45protect_63;
static Obj symdiff;
static Obj syms2;
static Obj symunion;
static Obj symls;
static Obj symerror;
static Obj symtmp;
static Obj sym_37builtin;
static Obj symcond;
static Obj symlength;
static Obj symprovided;
static Obj symrequired;
static Obj symop;
static Obj symc;
static Obj symdo;
static Obj symmap;
static Obj symappend;
static Obj symbody;
static Obj symargs;
static Obj symlambda;
static Obj sym_37global;
static Obj symelem_63;
static Obj symenv;
static Obj symadd_45symbol_45to_45list;
static Obj symbegin;
static Obj symboolean_63;
static Obj symnumber_63;
static Obj symor;
static Obj sym_37const;
static Obj symglobals;
static Obj symparse;
static Obj symn;
static Obj symres;
static Obj symtemp_45list;
static Obj symcadr;
static Obj symbuiltin_45_62args;
static Obj symcaddr;
static Obj symfind;
static Obj symlet;
static Obj symbuiltin_45_62name;
static Obj symnull_63;
static Obj symbuiltin_63;
static Obj symstring_63;
static Obj syminteger_63;
static Obj symnot;
static Obj symsymbol_63;
static Obj symgensym;
static Obj sym_62;
static Obj sym_47;
static Obj sym_42;
static Obj sym_45;
static Obj symcons_63;
static Obj symcdr;
static Obj symcar;
static Obj symset;
static Obj symquote;
static Obj sym_42builtin_45prims_42;
static Obj symdef;
static Obj sym_60;
static Obj symif;
static Obj symtl;
static Obj symhd;
static Obj symexist_45in_45env;
static Obj syml;
static Obj symindex;
static Obj symdefun;
static Obj sym_43;
static Obj symb;
static Obj syma;
static Obj sympos;
static Obj sympos_45in_45list0;
static Obj symacc;
static Obj symf;
static Obj symfoldl;
static Obj symcora_47lib_47infer_35tvar;
static Obj sym_61;
static Obj symwhere;
static Obj sym__;
static Obj symy;
static Obj symx;
static Obj symcons;
static Obj symlist_45rest;
static Obj sym_61_62;
static Obj symlist;
static Obj symvar;
static Obj symassq;
static Obj symfunc;
static Obj symcora_47init_35macroexpand;
static Obj symcora_47lib_47infer_35check_45type_33;
static Obj symcora_47lib_47toc_35_42ns_45export_42;
static Obj symcora_47init_35import;
void entry(struct Cora *co) {
symcora_47lib_47io_35close_45output_45file = intern("cora/lib/io#close-output-file");
symcora_47lib_47io_35open_45output_45file = intern("cora/lib/io#open-output-file");
symcora_47lib_47toc_35compile_45to_45c = intern("cora/lib/toc#compile-to-c");
symcora_47init_35read_45file_45as_45sexp = intern("cora/init#read-file-as-sexp");
symcora_47lib_47toc_35preprocess = intern("cora/lib/toc#preprocess");
symcora_47lib_47toc_35split_45type_45and_45code_45toplevel = intern("cora/lib/toc#split-type-and-code-toplevel");
symcora_47lib_47toc_35generate_45typecheck_45code = intern("cora/lib/toc#generate-typecheck-code");
symcora_47lib_47toc_35extract_45typecheck_45body = intern("cora/lib/toc#extract-typecheck-body");
symcora_47lib_47toc_35split_45type_45and_45code = intern("cora/lib/toc#split-type-and-code");
symcora_47lib_47toc_35handle_45import_45eagerly = intern("cora/lib/toc#handle-import-eagerly");
symcora_47lib_47toc_35generate_45c = intern("cora/lib/toc#generate-c");
symcora_47init_35symbol_45_62string = intern("cora/init#symbol->string");
symcora_47lib_47toc_35generate_45entry = intern("cora/lib/toc#generate-entry");
symcora_47lib_47toc_35group_45by_45mod_45h = intern("cora/lib/toc#group-by-mod-h");
symcora_47lib_47toc_35generate_45toplevel_45group = intern("cora/lib/toc#generate-toplevel-group");
symcora_47lib_47toc_35generate_45jumptable = intern("cora/lib/toc#generate-jumptable");
symcora_47lib_47toc_35compile = intern("cora/lib/toc#compile");
symcora_47init_35cddr = intern("cora/init#cddr");
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
symcora_47lib_47toc_35local_45from_45params = intern("cora/lib/toc#local-from-params");
symcora_47lib_47toc_35code_45gen_45func_45declare = intern("cora/lib/toc#code-gen-func-declare");
symcora_47lib_47toc_35generate_45inst_45list_45h = intern("cora/lib/toc#generate-inst-list-h");
symcora_47lib_47toc_35for_45each = intern("cora/lib/toc#for-each");
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
symcora_47lib_47toc_35explicit_45stack = intern("cora/lib/toc#explicit-stack");
symcora_47lib_47toc_35wrap_45var = intern("cora/lib/toc#wrap-var");
symcora_47init_35caar = intern("cora/init#caar");
symcora_47init_35pair_63 = intern("cora/init#pair?");
symcora_47init_35reverse = intern("cora/init#reverse");
symcora_47lib_47toc_35tailify_45list = intern("cora/lib/toc#tailify-list");
symcora_47lib_47toc_35tailify = intern("cora/lib/toc#tailify");
symcora_47lib_47toc_35id = intern("cora/lib/toc#id");
symcora_47lib_47toc_35closure_45convert = intern("cora/lib/toc#closure-convert");
symcora_47lib_47toc_35free_45vars = intern("cora/lib/toc#free-vars");
symcora_47lib_47toc_35convert_45protect_63 = intern("cora/lib/toc#convert-protect?");
symcora_47lib_47toc_35diff = intern("cora/lib/toc#diff");
symcora_47lib_47toc_35union = intern("cora/lib/toc#union");
symcora_47init_35boolean_63 = intern("cora/init#boolean?");
symcora_47init_35number_63 = intern("cora/init#number?");
symcora_47lib_47toc_35add_45symbol_45to_45list = intern("cora/lib/toc#add-symbol-to-list");
symcora_47init_35elem_63 = intern("cora/init#elem?");
symcora_47init_35append = intern("cora/init#append");
symcora_47init_35length = intern("cora/init#length");
symcora_47init_35map = intern("cora/init#map");
symcora_47lib_47toc_35parse = intern("cora/lib/toc#parse");
symcora_47lib_47toc_35temp_45list = intern("cora/lib/toc#temp-list");
symcora_47init_35cadr = intern("cora/init#cadr");
symcora_47lib_47toc_35builtin_45_62args = intern("cora/lib/toc#builtin->args");
symcora_47init_35caddr = intern("cora/init#caddr");
symcora_47lib_47toc_35builtin_45_62name = intern("cora/lib/toc#builtin->name");
symcora_47init_35null_63 = intern("cora/init#null?");
symcora_47lib_47toc_35builtin_63 = intern("cora/lib/toc#builtin?");
symcora_47lib_47toc_35_42builtin_45prims_42 = intern("cora/lib/toc#*builtin-prims*");
symcora_47lib_47toc_35exist_45in_45env = intern("cora/lib/toc#exist-in-env");
symcora_47lib_47toc_35index = intern("cora/lib/toc#index");
symcora_47lib_47toc_35pos_45in_45list0 = intern("cora/lib/toc#pos-in-list0");
symcora_47lib_47toc_35foldl = intern("cora/lib/toc#foldl");
symcora_47lib_47toc_35error = intern("cora/lib/toc#error");
symcora_47lib_47toc_35assq = intern("cora/lib/toc#assq");
symclose_45output_45file = intern("close-output-file");
symopen_45output_45file = intern("open-output-file");
symstream = intern("stream");
symfrom = intern("from");
symcompile_45to_45c = intern("compile-to-c");
symsexp1 = intern("sexp1");
symread_45file_45as_45sexp = intern("read-file-as-sexp");
symsexp = intern("sexp");
symfile_45path = intern("file-path");
sympreprocess = intern("preprocess");
symsingle = intern("single");
symsplit_45type_45and_45code_45toplevel = intern("split-type-and-code-toplevel");
symcora_47lib_47infer_35_42typecheck_42 = intern("cora/lib/infer#*typecheck*");
symgenerate_45typecheck_45code = intern("generate-typecheck-code");
symsymbols = intern("symbols");
symname = intern("name");
symextract_45typecheck_45body = intern("extract-typecheck-body");
symbackquote = intern("backquote");
symmacroexpand = intern("macroexpand");
symdeclare = intern("declare");
sym_58declare = intern(":declare");
sym_58type = intern(":type");
symcode = intern("code");
symtype = intern("type");
symsplit_45type_45and_45code = intern("split-type-and-code");
sympkg = intern("pkg");
symimport = intern("import");
symexport = intern("export");
symremain = intern("remain");
sympackage = intern("package");
symhandle_45import_45eagerly = intern("handle-import-eagerly");
symgroups = intern("groups");
symgenerate_45c = intern("generate-c");
symsymbol_45_62string = intern("symbol->string");
symgenerate_45entry = intern("generate-entry");
symbc = intern("bc");
symgroup_45by_45mod_45h = intern("group-by-mod-h");
symgroup = intern("group");
symgenerate_45toplevel_45group = intern("generate-toplevel-group");
symto = intern("to");
symgenerate_45jumptable = intern("generate-jumptable");
symcompile = intern("compile");
symcddr = intern("cddr");
symfns = intern("fns");
sym_45_62 = intern("->");
symdefmacro = intern("defmacro");
symobj = intern("obj");
symrewrite_45_45_62macro = intern("rewrite-->macro");
syme1 = intern("e1");
symvector = intern("vector");
symcollect_45lambda_45pass = intern("collect-lambda-pass");
symexplicit_45stack_45pass = intern("explicit-stack-pass");
symtailify_45pass = intern("tailify-pass");
symclosure_45convert_45pass = intern("closure-convert-pass");
symparse_45pass = intern("parse-pass");
symdisplay = intern("display");
symother = intern("other");
symactives = intern("actives");
symcode_45gen_45toplevel = intern("code-gen-toplevel");
symgenerate_45call_45args_45reverse = intern("generate-call-args-reverse");
symlocal_45from_45cont = intern("local-from-cont");
symignore = intern("ignore");
symlocal_45from_45params = intern("local-from-params");
symcode_45gen_45func_45declare = intern("code-gen-func-declare");
symgid = intern("gid");
symmaxid = intern("maxid");
symfn = intern("fn");
symgenerate_45inst_45list_45h = intern("generate-inst-list-h");
symfor_45each = intern("for-each");
symstacks = intern("stacks");
symgenerate_45cont = intern("generate-cont");
symgenerate_45group_45name = intern("generate-group-name");
sym_42mod_45num_42 = intern("*mod-num*");
symmod = intern("mod");
symnargs = intern("nargs");
symlabel = intern("label");
symgenerate_45inst_45list = intern("generate-inst-list");
symescape_45str = intern("escape-str");
sym_37stack_45ref = intern("%stack-ref");
symmatch = intern("match");
symgenerate_45sym = intern("generate-sym");
symx1 = intern("x1");
symvalue = intern("value");
symsym = intern("sym");
symgenerate_45inst = intern("generate-inst");
symgenerate_45num = intern("generate-num");
symgenerate_45str = intern("generate-str");
symi = intern("i");
symw = intern("w");
symself = intern("self");
symgenerate_45call_45list = intern("generate-call-list");
symk = intern("k");
symvector_45set_33 = intern("vector-set!");
symcur1 = intern("cur1");
symidx = intern("idx");
syme = intern("e");
symf_45args = intern("f-args");
symappend_45result = intern("append-result");
symvector_45ref = intern("vector-ref");
symcur = intern("cur");
symbody1 = intern("body1");
symparams = intern("params");
symclo_45or_45cont = intern("clo-or-cont");
symv = intern("v");
symcollect_45lambda = intern("collect-lambda");
sym_37continuation = intern("%continuation");
symfvs2 = intern("fvs2");
symexplicit_45stack = intern("explicit-stack");
symhd1 = intern("hd1");
symval = intern("val");
symwrap_45var = intern("wrap-var");
symcaar = intern("caar");
sympair_63 = intern("pair?");
symand = intern("and");
symreverse = intern("reverse");
symtailify_45list = intern("tailify-list");
symfrees = intern("frees");
symrb = intern("rb");
symra = intern("ra");
symnext = intern("next");
symtailify = intern("tailify");
symid = intern("id");
symfvs1 = intern("fvs1");
symfvs = intern("fvs");
symclosure_45convert = intern("closure-convert");
symarg = intern("arg");
symcontinuation = intern("continuation");
symtailcall = intern("tailcall");
symcont = intern("cont");
symexp = intern("exp");
symcall = intern("call");
symreturn = intern("return");
symmore = intern("more");
symlam = intern("lam");
sym_37closure = intern("%closure");
symz = intern("z");
symfree_45vars = intern("free-vars");
sym_37closure_45ref = intern("%closure-ref");
symconvert_45protect_63 = intern("convert-protect?");
symdiff = intern("diff");
syms2 = intern("s2");
symunion = intern("union");
symls = intern("ls");
symerror = intern("error");
symtmp = intern("tmp");
sym_37builtin = intern("%builtin");
symcond = intern("cond");
symlength = intern("length");
symprovided = intern("provided");
symrequired = intern("required");
symop = intern("op");
symc = intern("c");
symdo = intern("do");
symmap = intern("map");
symappend = intern("append");
symbody = intern("body");
symargs = intern("args");
symlambda = intern("lambda");
sym_37global = intern("%global");
symelem_63 = intern("elem?");
symenv = intern("env");
symadd_45symbol_45to_45list = intern("add-symbol-to-list");
symbegin = intern("begin");
symboolean_63 = intern("boolean?");
symnumber_63 = intern("number?");
symor = intern("or");
sym_37const = intern("%const");
symglobals = intern("globals");
symparse = intern("parse");
symn = intern("n");
symres = intern("res");
symtemp_45list = intern("temp-list");
symcadr = intern("cadr");
symbuiltin_45_62args = intern("builtin->args");
symcaddr = intern("caddr");
symfind = intern("find");
symlet = intern("let");
symbuiltin_45_62name = intern("builtin->name");
symnull_63 = intern("null?");
symbuiltin_63 = intern("builtin?");
symstring_63 = intern("string?");
syminteger_63 = intern("integer?");
symnot = intern("not");
symsymbol_63 = intern("symbol?");
symgensym = intern("gensym");
sym_62 = intern(">");
sym_47 = intern("/");
sym_42 = intern("*");
sym_45 = intern("-");
symcons_63 = intern("cons?");
symcdr = intern("cdr");
symcar = intern("car");
symset = intern("set");
symquote = intern("quote");
sym_42builtin_45prims_42 = intern("*builtin-prims*");
symdef = intern("def");
sym_60 = intern("<");
symif = intern("if");
symtl = intern("tl");
symhd = intern("hd");
symexist_45in_45env = intern("exist-in-env");
syml = intern("l");
symindex = intern("index");
symdefun = intern("defun");
sym_43 = intern("+");
symb = intern("b");
syma = intern("a");
sympos = intern("pos");
sympos_45in_45list0 = intern("pos-in-list0");
symacc = intern("acc");
symf = intern("f");
symfoldl = intern("foldl");
symcora_47lib_47infer_35tvar = intern("cora/lib/infer#tvar");
sym_61 = intern("=");
symwhere = intern("where");
sym__ = intern("_");
symy = intern("y");
symx = intern("x");
symcons = intern("cons");
symlist_45rest = intern("list-rest");
sym_61_62 = intern("=>");
symlist = intern("list");
symvar = intern("var");
symassq = intern("assq");
symfunc = intern("func");
symcora_47init_35macroexpand = intern("cora/init#macroexpand");
symcora_47lib_47infer_35check_45type_33 = intern("cora/lib/infer#check-type!");
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
Obj x140289292104359 = __arg1;
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
Obj x140289292104615 = __arg1;
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
Obj x140289292104871 = __arg1;
Obj x140289292105159 = primSet(co, symcora_47lib_47toc_35_42ns_45export_42, Nil);
Obj x140289292106503 = makeCons(symlist, Nil);
Obj x140289292100039 = makeCons(symy, Nil);
Obj x140289292100071 = makeCons(symx, x140289292100039);
Obj x140289292100103 = makeCons(symcons, x140289292100071);
Obj x140289292100359 = makeCons(sym__, Nil);
Obj x140289292100391 = makeCons(x140289292100103, x140289292100359);
Obj x140289292100423 = makeCons(symlist_45rest, x140289292100391);
Obj x140289292101415 = makeCons(symy, Nil);
Obj x140289292101447 = makeCons(symx, x140289292101415);
Obj x140289292101479 = makeCons(symcons, x140289292101447);
Obj x140289292102471 = makeCons(symx, Nil);
Obj x140289292102503 = makeCons(symvar, x140289292102471);
Obj x140289292102535 = makeCons(sym_61, x140289292102503);
Obj x140289292103527 = makeCons(symy, Nil);
Obj x140289292103559 = makeCons(sym__, x140289292103527);
Obj x140289292103591 = makeCons(symlist_45rest, x140289292103559);
Obj x140289291518855 = makeCons(symy, Nil);
Obj x140289291518887 = makeCons(symvar, x140289291518855);
Obj x140289291518919 = makeCons(symassq, x140289291518887);
Obj x140289291518983 = makeCons(x140289291518919, Nil);
Obj x140289291519015 = makeCons(sym_61_62, x140289291518983);
Obj x140289291519047 = makeCons(x140289292103591, x140289291519015);
Obj x140289291519079 = makeCons(symvar, x140289291519047);
Obj x140289291519111 = makeCons(x140289292102535, x140289291519079);
Obj x140289291519143 = makeCons(symwhere, x140289291519111);
Obj x140289291519175 = makeCons(x140289292101479, x140289291519143);
Obj x140289291519207 = makeCons(sym_61_62, x140289291519175);
Obj x140289291519239 = makeCons(x140289292100423, x140289291519207);
Obj x140289291519271 = makeCons(symvar, x140289291519239);
Obj x140289291519303 = makeCons(Nil, x140289291519271);
Obj x140289291519335 = makeCons(sym_61_62, x140289291519303);
Obj x140289291519367 = makeCons(x140289292106503, x140289291519335);
Obj x140289291519399 = makeCons(symvar, x140289291519367);
Obj x140289291519431 = makeCons(symassq, x140289291519399);
Obj x140289291519463 = makeCons(symfunc, x140289291519431);
PUSH_CONT_0(co, 4, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291519463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140289291519495 = __arg1;
pushCont(co, 5, clofun0, 1, x140289291519495);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140289291519687 = __arg1;
Obj x140289291519495= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 6, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291519495;
__arg2 = x140289291519687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140289291519719 = __arg1;
Obj x140289291521255 = makeCons(symlist, Nil);
Obj x140289291477767 = makeCons(symy, Nil);
Obj x140289291477799 = makeCons(symx, x140289291477767);
Obj x140289291477831 = makeCons(symlist_45rest, x140289291477799);
Obj x140289291479367 = makeCons(symx, Nil);
Obj x140289291479399 = makeCons(symacc, x140289291479367);
Obj x140289291479431 = makeCons(symf, x140289291479399);
Obj x140289291479687 = makeCons(symy, Nil);
Obj x140289291479719 = makeCons(x140289291479431, x140289291479687);
Obj x140289291479751 = makeCons(symf, x140289291479719);
Obj x140289291479783 = makeCons(symfoldl, x140289291479751);
Obj x140289291479847 = makeCons(x140289291479783, Nil);
Obj x140289291479879 = makeCons(sym_61_62, x140289291479847);
Obj x140289291479911 = makeCons(x140289291477831, x140289291479879);
Obj x140289291479943 = makeCons(symacc, x140289291479911);
Obj x140289291479975 = makeCons(symf, x140289291479943);
Obj x140289291480007 = makeCons(symacc, x140289291479975);
Obj x140289291480039 = makeCons(sym_61_62, x140289291480007);
Obj x140289291480071 = makeCons(x140289291521255, x140289291480039);
Obj x140289291480103 = makeCons(symacc, x140289291480071);
Obj x140289291480135 = makeCons(symf, x140289291480103);
Obj x140289291480167 = makeCons(symfoldl, x140289291480135);
Obj x140289291480199 = makeCons(symfunc, x140289291480167);
PUSH_CONT_0(co, 7, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291480199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140289291480231 = __arg1;
pushCont(co, 8, clofun0, 1, x140289291480231);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140289291480423 = __arg1;
Obj x140289291480231= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 9, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291480231;
__arg2 = x140289291480423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140289291480455 = __arg1;
Obj x140289291461511 = makeCons(symlist, Nil);
Obj x140289291463079 = makeCons(symb, Nil);
Obj x140289291463111 = makeCons(syma, x140289291463079);
Obj x140289291463143 = makeCons(symlist_45rest, x140289291463111);
Obj x140289291464519 = makeCons(syma, Nil);
Obj x140289291464551 = makeCons(symx, x140289291464519);
Obj x140289291464583 = makeCons(sym_61, x140289291464551);
Obj x140289291449383 = makeCons(symb, Nil);
Obj x140289291449415 = makeCons(syma, x140289291449383);
Obj x140289291449447 = makeCons(symlist_45rest, x140289291449415);
Obj x140289291450791 = makeCons(MAKE_NUMBER(1), Nil);
Obj x140289291450823 = makeCons(sympos, x140289291450791);
Obj x140289291450855 = makeCons(sym_43, x140289291450823);
Obj x140289291451303 = makeCons(symb, Nil);
Obj x140289291451335 = makeCons(symx, x140289291451303);
Obj x140289291451367 = makeCons(x140289291450855, x140289291451335);
Obj x140289291451399 = makeCons(sympos_45in_45list0, x140289291451367);
Obj x140289291451463 = makeCons(x140289291451399, Nil);
Obj x140289291451495 = makeCons(sym_61_62, x140289291451463);
Obj x140289291451527 = makeCons(x140289291449447, x140289291451495);
Obj x140289291451559 = makeCons(symx, x140289291451527);
Obj x140289291451591 = makeCons(sympos, x140289291451559);
Obj x140289291451623 = makeCons(x140289291464583, x140289291451591);
Obj x140289291451655 = makeCons(symwhere, x140289291451623);
Obj x140289291451687 = makeCons(sympos, x140289291451655);
Obj x140289291451719 = makeCons(sym_61_62, x140289291451687);
Obj x140289291451751 = makeCons(x140289291463143, x140289291451719);
Obj x140289291451783 = makeCons(symx, x140289291451751);
Obj x140289291451815 = makeCons(sympos, x140289291451783);
Obj x140289291451847 = makeCons(MAKE_NUMBER(-1), x140289291451815);
Obj x140289291451879 = makeCons(sym_61_62, x140289291451847);
Obj x140289291451911 = makeCons(x140289291461511, x140289291451879);
Obj x140289291451943 = makeCons(symx, x140289291451911);
Obj x140289291451975 = makeCons(sym__, x140289291451943);
Obj x140289291452007 = makeCons(sympos_45in_45list0, x140289291451975);
Obj x140289291452039 = makeCons(symfunc, x140289291452007);
PUSH_CONT_0(co, 10, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291452039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140289291452071 = __arg1;
pushCont(co, 11, clofun0, 1, x140289291452071);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140289291452263 = __arg1;
Obj x140289291452071= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 12, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291452071;
__arg2 = x140289291452263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140289291452295 = __arg1;
Obj x140289291429063 = makeCons(syml, Nil);
Obj x140289291429095 = makeCons(symx, x140289291429063);
Obj x140289291430087 = makeCons(syml, Nil);
Obj x140289291430119 = makeCons(symx, x140289291430087);
Obj x140289291430151 = makeCons(MAKE_NUMBER(0), x140289291430119);
Obj x140289291430183 = makeCons(sympos_45in_45list0, x140289291430151);
Obj x140289291430247 = makeCons(x140289291430183, Nil);
Obj x140289291430279 = makeCons(x140289291429095, x140289291430247);
Obj x140289291430311 = makeCons(symindex, x140289291430279);
Obj x140289291430343 = makeCons(symdefun, x140289291430311);
PUSH_CONT_0(co, 13, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291430343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140289291430375 = __arg1;
pushCont(co, 14, clofun0, 1, x140289291430375);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140289291430567 = __arg1;
Obj x140289291430375= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 15, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291430375;
__arg2 = x140289291430567;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140289291430599 = __arg1;
Obj x140289291395079 = makeCons(symlist, Nil);
Obj x140289291396455 = makeCons(symtl, Nil);
Obj x140289291396487 = makeCons(symhd, x140289291396455);
Obj x140289291396519 = makeCons(symlist_45rest, x140289291396487);
Obj x140289291398215 = makeCons(symhd, Nil);
Obj x140289291398247 = makeCons(symx, x140289291398215);
Obj x140289291398279 = makeCons(symindex, x140289291398247);
Obj x140289291398535 = makeCons(MAKE_NUMBER(0), Nil);
Obj x140289291398567 = makeCons(x140289291398279, x140289291398535);
Obj x140289291398599 = makeCons(sym_60, x140289291398567);
Obj x140289291387111 = makeCons(symtl, Nil);
Obj x140289291387143 = makeCons(symx, x140289291387111);
Obj x140289291387175 = makeCons(symexist_45in_45env, x140289291387143);
Obj x140289291387431 = makeCons(True, Nil);
Obj x140289291387463 = makeCons(x140289291387175, x140289291387431);
Obj x140289291387495 = makeCons(x140289291398599, x140289291387463);
Obj x140289291387527 = makeCons(symif, x140289291387495);
Obj x140289291387591 = makeCons(x140289291387527, Nil);
Obj x140289291387623 = makeCons(sym_61_62, x140289291387591);
Obj x140289291387655 = makeCons(x140289291396519, x140289291387623);
Obj x140289291387687 = makeCons(symx, x140289291387655);
Obj x140289291387719 = makeCons(False, x140289291387687);
Obj x140289291387751 = makeCons(sym_61_62, x140289291387719);
Obj x140289291387783 = makeCons(x140289291395079, x140289291387751);
Obj x140289291387815 = makeCons(symx, x140289291387783);
Obj x140289291387847 = makeCons(symexist_45in_45env, x140289291387815);
Obj x140289291387879 = makeCons(symfunc, x140289291387847);
PUSH_CONT_0(co, 16, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291387879;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140289291387911 = __arg1;
pushCont(co, 17, clofun0, 1, x140289291387911);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140289291388103 = __arg1;
Obj x140289291387911= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 18, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291387911;
__arg2 = x140289291388103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140289291388135 = __arg1;
Obj x140289291390183 = makeCons(symset, Nil);
Obj x140289291390215 = makeCons(symquote, x140289291390183);
Obj x140289291390663 = makeCons(makeCString("primSet"), Nil);
Obj x140289291390695 = makeCons(MAKE_NUMBER(2), x140289291390663);
Obj x140289291390727 = makeCons(x140289291390215, x140289291390695);
Obj x140289291390759 = makeCons(symlist, x140289291390727);
Obj x140289291358951 = makeCons(symcar, Nil);
Obj x140289291358983 = makeCons(symquote, x140289291358951);
Obj x140289291359431 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x140289291359463 = makeCons(MAKE_NUMBER(1), x140289291359431);
Obj x140289291359495 = makeCons(x140289291358983, x140289291359463);
Obj x140289291359527 = makeCons(symlist, x140289291359495);
Obj x140289291360487 = makeCons(symcdr, Nil);
Obj x140289291360519 = makeCons(symquote, x140289291360487);
Obj x140289291360967 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x140289291360999 = makeCons(MAKE_NUMBER(1), x140289291360967);
Obj x140289291361031 = makeCons(x140289291360519, x140289291360999);
Obj x140289291361063 = makeCons(symlist, x140289291361031);
Obj x140289291362023 = makeCons(symcons, Nil);
Obj x140289291362055 = makeCons(symquote, x140289291362023);
Obj x140289291333831 = makeCons(makeCString("makeCons"), Nil);
Obj x140289291333863 = makeCons(MAKE_NUMBER(2), x140289291333831);
Obj x140289291333895 = makeCons(x140289291362055, x140289291333863);
Obj x140289291333927 = makeCons(symlist, x140289291333895);
Obj x140289291334887 = makeCons(symcons_63, Nil);
Obj x140289291334919 = makeCons(symquote, x140289291334887);
Obj x140289291335367 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x140289291335399 = makeCons(MAKE_NUMBER(1), x140289291335367);
Obj x140289291335431 = makeCons(x140289291334919, x140289291335399);
Obj x140289291335463 = makeCons(symlist, x140289291335431);
Obj x140289291336423 = makeCons(sym_43, Nil);
Obj x140289291336455 = makeCons(symquote, x140289291336423);
Obj x140289291336903 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x140289291336935 = makeCons(MAKE_NUMBER(2), x140289291336903);
Obj x140289291336967 = makeCons(x140289291336455, x140289291336935);
Obj x140289291336999 = makeCons(symlist, x140289291336967);
Obj x140289291321575 = makeCons(sym_45, Nil);
Obj x140289291321607 = makeCons(symquote, x140289291321575);
Obj x140289291322055 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x140289291322087 = makeCons(MAKE_NUMBER(2), x140289291322055);
Obj x140289291322119 = makeCons(x140289291321607, x140289291322087);
Obj x140289291322151 = makeCons(symlist, x140289291322119);
Obj x140289291323111 = makeCons(sym_42, Nil);
Obj x140289291323143 = makeCons(symquote, x140289291323111);
Obj x140289291323591 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x140289291323623 = makeCons(MAKE_NUMBER(2), x140289291323591);
Obj x140289291323655 = makeCons(x140289291323143, x140289291323623);
Obj x140289291323687 = makeCons(symlist, x140289291323655);
Obj x140289291324647 = makeCons(sym_47, Nil);
Obj x140289291324679 = makeCons(symquote, x140289291324647);
Obj x140289291325127 = makeCons(makeCString("primDiv"), Nil);
Obj x140289291325159 = makeCons(MAKE_NUMBER(2), x140289291325127);
Obj x140289291325191 = makeCons(x140289291324679, x140289291325159);
Obj x140289291325223 = makeCons(symlist, x140289291325191);
Obj x140289291281127 = makeCons(sym_61, Nil);
Obj x140289291281159 = makeCons(symquote, x140289291281127);
Obj x140289291281607 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x140289291281639 = makeCons(MAKE_NUMBER(2), x140289291281607);
Obj x140289291281671 = makeCons(x140289291281159, x140289291281639);
Obj x140289291281703 = makeCons(symlist, x140289291281671);
Obj x140289291282663 = makeCons(sym_62, Nil);
Obj x140289291282695 = makeCons(symquote, x140289291282663);
Obj x140289291283143 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x140289291283175 = makeCons(MAKE_NUMBER(2), x140289291283143);
Obj x140289291283207 = makeCons(x140289291282695, x140289291283175);
Obj x140289291283239 = makeCons(symlist, x140289291283207);
Obj x140289291284199 = makeCons(sym_60, Nil);
Obj x140289291284231 = makeCons(symquote, x140289291284199);
Obj x140289291243719 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x140289291243751 = makeCons(MAKE_NUMBER(2), x140289291243719);
Obj x140289291243783 = makeCons(x140289291284231, x140289291243751);
Obj x140289291243815 = makeCons(symlist, x140289291243783);
Obj x140289291244775 = makeCons(symgensym, Nil);
Obj x140289291244807 = makeCons(symquote, x140289291244775);
Obj x140289291245255 = makeCons(makeCString("primGenSym"), Nil);
Obj x140289291245287 = makeCons(MAKE_NUMBER(0), x140289291245255);
Obj x140289291245319 = makeCons(x140289291244807, x140289291245287);
Obj x140289291245351 = makeCons(symlist, x140289291245319);
Obj x140289291246311 = makeCons(symsymbol_63, Nil);
Obj x140289291246343 = makeCons(symquote, x140289291246311);
Obj x140289291246791 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x140289291246823 = makeCons(MAKE_NUMBER(1), x140289291246791);
Obj x140289291246855 = makeCons(x140289291246343, x140289291246823);
Obj x140289291246887 = makeCons(symlist, x140289291246855);
Obj x140289291235559 = makeCons(symnot, Nil);
Obj x140289291235591 = makeCons(symquote, x140289291235559);
Obj x140289291236039 = makeCons(makeCString("primNot"), Nil);
Obj x140289291236071 = makeCons(MAKE_NUMBER(1), x140289291236039);
Obj x140289291236103 = makeCons(x140289291235591, x140289291236071);
Obj x140289291236135 = makeCons(symlist, x140289291236103);
Obj x140289291237095 = makeCons(syminteger_63, Nil);
Obj x140289291237127 = makeCons(symquote, x140289291237095);
Obj x140289291237575 = makeCons(makeCString("primIsNumber"), Nil);
Obj x140289291237607 = makeCons(MAKE_NUMBER(1), x140289291237575);
Obj x140289291237639 = makeCons(x140289291237127, x140289291237607);
Obj x140289291237671 = makeCons(symlist, x140289291237639);
Obj x140289291238631 = makeCons(symstring_63, Nil);
Obj x140289291238663 = makeCons(symquote, x140289291238631);
Obj x140289291239111 = makeCons(makeCString("primIsString"), Nil);
Obj x140289291239143 = makeCons(MAKE_NUMBER(1), x140289291239111);
Obj x140289291239175 = makeCons(x140289291238663, x140289291239143);
Obj x140289291239207 = makeCons(symlist, x140289291239175);
Obj x140289291239271 = makeCons(x140289291239207, Nil);
Obj x140289291239303 = makeCons(x140289291237671, x140289291239271);
Obj x140289291239335 = makeCons(x140289291236135, x140289291239303);
Obj x140289291239367 = makeCons(x140289291246887, x140289291239335);
Obj x140289291239399 = makeCons(x140289291245351, x140289291239367);
Obj x140289291231239 = makeCons(x140289291243815, x140289291239399);
Obj x140289291231271 = makeCons(x140289291283239, x140289291231239);
Obj x140289291231303 = makeCons(x140289291281703, x140289291231271);
Obj x140289291231335 = makeCons(x140289291325223, x140289291231303);
Obj x140289291231367 = makeCons(x140289291323687, x140289291231335);
Obj x140289291231399 = makeCons(x140289291322151, x140289291231367);
Obj x140289291231431 = makeCons(x140289291336999, x140289291231399);
Obj x140289291231463 = makeCons(x140289291335463, x140289291231431);
Obj x140289291231495 = makeCons(x140289291333927, x140289291231463);
Obj x140289291231527 = makeCons(x140289291361063, x140289291231495);
Obj x140289291231559 = makeCons(x140289291359527, x140289291231527);
Obj x140289291231591 = makeCons(x140289291390759, x140289291231559);
Obj x140289291231623 = makeCons(symlist, x140289291231591);
Obj x140289291231687 = makeCons(x140289291231623, Nil);
Obj x140289291231719 = makeCons(sym_42builtin_45prims_42, x140289291231687);
Obj x140289291231751 = makeCons(symdef, x140289291231719);
PUSH_CONT_0(co, 19, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291231751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140289291231783 = __arg1;
pushCont(co, 20, clofun0, 1, x140289291231783);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140289291231975 = __arg1;
Obj x140289291231783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 21, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291231783;
__arg2 = x140289291231975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140289291232007 = __arg1;
Obj x140289291233159 = makeCons(symx, Nil);
Obj x140289291234663 = makeCons(sym_42builtin_45prims_42, Nil);
Obj x140289291234695 = makeCons(symx, x140289291234663);
Obj x140289291234727 = makeCons(symassq, x140289291234695);
Obj x140289291234791 = makeCons(x140289291234727, Nil);
Obj x140289291234823 = makeCons(symnull_63, x140289291234791);
Obj x140289291234887 = makeCons(x140289291234823, Nil);
Obj x140289291234919 = makeCons(symnot, x140289291234887);
Obj x140289291234983 = makeCons(x140289291234919, Nil);
Obj x140289291235015 = makeCons(x140289291233159, x140289291234983);
Obj x140289291235047 = makeCons(symbuiltin_63, x140289291235015);
Obj x140289291235079 = makeCons(symdefun, x140289291235047);
PUSH_CONT_0(co, 22, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291235079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140289291235111 = __arg1;
pushCont(co, 23, clofun0, 1, x140289291235111);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140289291235303 = __arg1;
Obj x140289291235111= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 24, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291235111;
__arg2 = x140289291235303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140289291198471 = __arg1;
Obj x140289291199623 = makeCons(symx, Nil);
Obj x140289291200967 = makeCons(sym_42builtin_45prims_42, Nil);
Obj x140289291200999 = makeCons(symx, x140289291200967);
Obj x140289291201031 = makeCons(symassq, x140289291200999);
Obj x140289291201991 = makeCons(symfind, Nil);
Obj x140289291202023 = makeCons(symnull_63, x140289291201991);
Obj x140289291157767 = makeCons(symfind, Nil);
Obj x140289291157799 = makeCons(symcaddr, x140289291157767);
Obj x140289291157863 = makeCons(x140289291157799, Nil);
Obj x140289291157895 = makeCons(makeCString("ERROR"), x140289291157863);
Obj x140289291157927 = makeCons(x140289291202023, x140289291157895);
Obj x140289291157959 = makeCons(symif, x140289291157927);
Obj x140289291158023 = makeCons(x140289291157959, Nil);
Obj x140289291158055 = makeCons(x140289291201031, x140289291158023);
Obj x140289291158087 = makeCons(symfind, x140289291158055);
Obj x140289291158119 = makeCons(symlet, x140289291158087);
Obj x140289291158183 = makeCons(x140289291158119, Nil);
Obj x140289291158215 = makeCons(x140289291199623, x140289291158183);
Obj x140289291158247 = makeCons(symbuiltin_45_62name, x140289291158215);
Obj x140289291158279 = makeCons(symdefun, x140289291158247);
PUSH_CONT_0(co, 25, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291158279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140289291158311 = __arg1;
pushCont(co, 26, clofun0, 1, x140289291158311);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140289291158503 = __arg1;
Obj x140289291158311= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 27, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291158311;
__arg2 = x140289291158503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140289291158535 = __arg1;
Obj x140289291159687 = makeCons(symx, Nil);
Obj x140289291161031 = makeCons(sym_42builtin_45prims_42, Nil);
Obj x140289291161063 = makeCons(symx, x140289291161031);
Obj x140289291161095 = makeCons(symassq, x140289291161063);
Obj x140289291145671 = makeCons(symfind, Nil);
Obj x140289291145703 = makeCons(symnull_63, x140289291145671);
Obj x140289291146503 = makeCons(symfind, Nil);
Obj x140289291146535 = makeCons(symcadr, x140289291146503);
Obj x140289291146599 = makeCons(x140289291146535, Nil);
Obj x140289291146631 = makeCons(makeCString("ERROR"), x140289291146599);
Obj x140289291146663 = makeCons(x140289291145703, x140289291146631);
Obj x140289291146695 = makeCons(symif, x140289291146663);
Obj x140289291146759 = makeCons(x140289291146695, Nil);
Obj x140289291146791 = makeCons(x140289291161095, x140289291146759);
Obj x140289291146823 = makeCons(symfind, x140289291146791);
Obj x140289291146855 = makeCons(symlet, x140289291146823);
Obj x140289291146919 = makeCons(x140289291146855, Nil);
Obj x140289291146951 = makeCons(x140289291159687, x140289291146919);
Obj x140289291146983 = makeCons(symbuiltin_45_62args, x140289291146951);
Obj x140289291147015 = makeCons(symdefun, x140289291146983);
PUSH_CONT_0(co, 28, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291147015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140289291147047 = __arg1;
pushCont(co, 29, clofun0, 1, x140289291147047);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x140289291147239 = __arg1;
Obj x140289291147047= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 30, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291147047;
__arg2 = x140289291147239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140289291147271 = __arg1;
Obj x140289291076775 = makeCons(MAKE_NUMBER(1), Nil);
Obj x140289291076807 = makeCons(symn, x140289291076775);
Obj x140289291076839 = makeCons(sym_45, x140289291076807);
Obj x140289291077607 = makeCons(symgensym, Nil);
Obj x140289291077863 = makeCons(symres, Nil);
Obj x140289291077895 = makeCons(x140289291077607, x140289291077863);
Obj x140289291077927 = makeCons(symcons, x140289291077895);
Obj x140289291077991 = makeCons(x140289291077927, Nil);
Obj x140289291078023 = makeCons(x140289291076839, x140289291077991);
Obj x140289291078055 = makeCons(symtemp_45list, x140289291078023);
Obj x140289291078119 = makeCons(x140289291078055, Nil);
Obj x140289291078151 = makeCons(sym_61_62, x140289291078119);
Obj x140289291078183 = makeCons(symres, x140289291078151);
Obj x140289291078215 = makeCons(symn, x140289291078183);
Obj x140289291078247 = makeCons(symres, x140289291078215);
Obj x140289291078279 = makeCons(sym_61_62, x140289291078247);
Obj x140289291078311 = makeCons(symres, x140289291078279);
Obj x140289291078343 = makeCons(MAKE_NUMBER(0), x140289291078311);
Obj x140289291078375 = makeCons(symtemp_45list, x140289291078343);
Obj x140289291078407 = makeCons(symfunc, x140289291078375);
PUSH_CONT_0(co, 31, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291078407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140289291078439 = __arg1;
pushCont(co, 32, clofun0, 1, x140289291078439);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140289291078631 = __arg1;
Obj x140289291078439= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 33, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291078439;
__arg2 = x140289291078631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140289291078663 = __arg1;
Obj x140289290999207 = makeCons(sym_37const, Nil);
Obj x140289290999239 = makeCons(symquote, x140289290999207);
Obj x140289290999495 = makeCons(symx, Nil);
Obj x140289290999527 = makeCons(x140289290999239, x140289290999495);
Obj x140289290999559 = makeCons(symlist, x140289290999527);
Obj x140289291000711 = makeCons(symx, Nil);
Obj x140289291000743 = makeCons(symnumber_63, x140289291000711);
Obj x140289291001351 = makeCons(symx, Nil);
Obj x140289291001383 = makeCons(symstring_63, x140289291001351);
Obj x140289290965127 = makeCons(symx, Nil);
Obj x140289290965159 = makeCons(symboolean_63, x140289290965127);
Obj x140289290965767 = makeCons(symx, Nil);
Obj x140289290965799 = makeCons(symnull_63, x140289290965767);
Obj x140289290965863 = makeCons(x140289290965799, Nil);
Obj x140289290965895 = makeCons(x140289290965159, x140289290965863);
Obj x140289290965927 = makeCons(x140289291001383, x140289290965895);
Obj x140289290965959 = makeCons(x140289291000743, x140289290965927);
Obj x140289290965991 = makeCons(symor, x140289290965959);
Obj x140289290967335 = makeCons(symquote, Nil);
Obj x140289290967367 = makeCons(symquote, x140289290967335);
Obj x140289290967623 = makeCons(symx, Nil);
Obj x140289290967655 = makeCons(x140289290967367, x140289290967623);
Obj x140289290967687 = makeCons(symlist, x140289290967655);
Obj x140289290908295 = makeCons(symglobals, Nil);
Obj x140289290908327 = makeCons(symx, x140289290908295);
Obj x140289290908359 = makeCons(symadd_45symbol_45to_45list, x140289290908327);
Obj x140289290909319 = makeCons(sym_37const, Nil);
Obj x140289290909351 = makeCons(symquote, x140289290909319);
Obj x140289290909607 = makeCons(symx, Nil);
Obj x140289290909639 = makeCons(x140289290909351, x140289290909607);
Obj x140289290909671 = makeCons(symlist, x140289290909639);
Obj x140289290909735 = makeCons(x140289290909671, Nil);
Obj x140289290909767 = makeCons(x140289290908359, x140289290909735);
Obj x140289290909799 = makeCons(symbegin, x140289290909767);
Obj x140289290911719 = makeCons(symenv, Nil);
Obj x140289290846215 = makeCons(symx, x140289290911719);
Obj x140289290846247 = makeCons(symelem_63, x140289290846215);
Obj x140289290847591 = makeCons(symglobals, Nil);
Obj x140289290847623 = makeCons(symx, x140289290847591);
Obj x140289290847655 = makeCons(symadd_45symbol_45to_45list, x140289290847623);
Obj x140289290848615 = makeCons(sym_37global, Nil);
Obj x140289290848647 = makeCons(symquote, x140289290848615);
Obj x140289290848903 = makeCons(symx, Nil);
Obj x140289290848935 = makeCons(x140289290848647, x140289290848903);
Obj x140289290848967 = makeCons(symlist, x140289290848935);
Obj x140289290849031 = makeCons(x140289290848967, Nil);
Obj x140289290849063 = makeCons(x140289290847655, x140289290849031);
Obj x140289290849095 = makeCons(symbegin, x140289290849063);
Obj x140289290849159 = makeCons(x140289290849095, Nil);
Obj x140289290849191 = makeCons(symx, x140289290849159);
Obj x140289290849223 = makeCons(x140289290846247, x140289290849191);
Obj x140289290849255 = makeCons(symif, x140289290849223);
Obj x140289290850055 = makeCons(symx, Nil);
Obj x140289290850087 = makeCons(symsymbol_63, x140289290850055);
Obj x140289290802279 = makeCons(symlambda, Nil);
Obj x140289290802311 = makeCons(symquote, x140289290802279);
Obj x140289290802759 = makeCons(symbody, Nil);
Obj x140289290802791 = makeCons(symargs, x140289290802759);
Obj x140289290802823 = makeCons(x140289290802311, x140289290802791);
Obj x140289290802855 = makeCons(symlist, x140289290802823);
Obj x140289290804007 = makeCons(symlambda, Nil);
Obj x140289290804039 = makeCons(symquote, x140289290804007);
Obj x140289290719367 = makeCons(symenv, Nil);
Obj x140289290719399 = makeCons(symargs, x140289290719367);
Obj x140289290719431 = makeCons(symappend, x140289290719399);
Obj x140289290719879 = makeCons(symbody, Nil);
Obj x140289290719911 = makeCons(symglobals, x140289290719879);
Obj x140289290719943 = makeCons(x140289290719431, x140289290719911);
Obj x140289290719975 = makeCons(symparse, x140289290719943);
Obj x140289290720039 = makeCons(x140289290719975, Nil);
Obj x140289290720071 = makeCons(symargs, x140289290720039);
Obj x140289290720103 = makeCons(x140289290804039, x140289290720071);
Obj x140289290720135 = makeCons(symlist, x140289290720103);
Obj x140289290721479 = makeCons(symif, Nil);
Obj x140289290721511 = makeCons(symquote, x140289290721479);
Obj x140289290721767 = makeCons(symargs, Nil);
Obj x140289290721799 = makeCons(x140289290721511, x140289290721767);
Obj x140289290721831 = makeCons(symlist_45rest, x140289290721799);
Obj x140289290722983 = makeCons(symif, Nil);
Obj x140289290723015 = makeCons(symquote, x140289290722983);
Obj x140289290666823 = makeCons(symglobals, Nil);
Obj x140289290666855 = makeCons(symenv, x140289290666823);
Obj x140289290666887 = makeCons(symparse, x140289290666855);
Obj x140289290667143 = makeCons(symargs, Nil);
Obj x140289290667175 = makeCons(x140289290666887, x140289290667143);
Obj x140289290667207 = makeCons(symmap, x140289290667175);
Obj x140289290667271 = makeCons(x140289290667207, Nil);
Obj x140289290667303 = makeCons(x140289290723015, x140289290667271);
Obj x140289290667335 = makeCons(symlist_45rest, x140289290667303);
Obj x140289290668679 = makeCons(symdo, Nil);
Obj x140289290668711 = makeCons(symquote, x140289290668679);
Obj x140289290669159 = makeCons(symy, Nil);
Obj x140289290669191 = makeCons(symx, x140289290669159);
Obj x140289290669223 = makeCons(x140289290668711, x140289290669191);
Obj x140289290669255 = makeCons(symlist, x140289290669223);
Obj x140289290625351 = makeCons(symdo, Nil);
Obj x140289290625383 = makeCons(symquote, x140289290625351);
Obj x140289290626375 = makeCons(symx, Nil);
Obj x140289290626407 = makeCons(symglobals, x140289290626375);
Obj x140289290626439 = makeCons(symenv, x140289290626407);
Obj x140289290626471 = makeCons(symparse, x140289290626439);
Obj x140289290627463 = makeCons(symy, Nil);
Obj x140289290627495 = makeCons(symglobals, x140289290627463);
Obj x140289290627527 = makeCons(symenv, x140289290627495);
Obj x140289290627559 = makeCons(symparse, x140289290627527);
Obj x140289290627623 = makeCons(x140289290627559, Nil);
Obj x140289290627655 = makeCons(x140289290626471, x140289290627623);
Obj x140289290627687 = makeCons(x140289290625383, x140289290627655);
Obj x140289290627719 = makeCons(symlist, x140289290627687);
Obj x140289290629063 = makeCons(symlet, Nil);
Obj x140289290629095 = makeCons(symquote, x140289290629063);
Obj x140289290551911 = makeCons(symc, Nil);
Obj x140289290551943 = makeCons(symb, x140289290551911);
Obj x140289290551975 = makeCons(syma, x140289290551943);
Obj x140289290552007 = makeCons(x140289290629095, x140289290551975);
Obj x140289290552039 = makeCons(symlist, x140289290552007);
Obj x140289290553191 = makeCons(symlet, Nil);
Obj x140289290553223 = makeCons(symquote, x140289290553191);
Obj x140289290554407 = makeCons(symb, Nil);
Obj x140289290554439 = makeCons(symglobals, x140289290554407);
Obj x140289290554471 = makeCons(symenv, x140289290554439);
Obj x140289290554503 = makeCons(symparse, x140289290554471);
Obj x140289290338567 = makeCons(symenv, Nil);
Obj x140289290338599 = makeCons(syma, x140289290338567);
Obj x140289290338631 = makeCons(symcons, x140289290338599);
Obj x140289290339079 = makeCons(symc, Nil);
Obj x140289290339111 = makeCons(symglobals, x140289290339079);
Obj x140289290339143 = makeCons(x140289290338631, x140289290339111);
Obj x140289290339175 = makeCons(symparse, x140289290339143);
Obj x140289290339239 = makeCons(x140289290339175, Nil);
Obj x140289290339271 = makeCons(x140289290554503, x140289290339239);
Obj x140289290339303 = makeCons(syma, x140289290339271);
Obj x140289290339335 = makeCons(x140289290553223, x140289290339303);
Obj x140289290339367 = makeCons(symlist, x140289290339335);
Obj x140289290340551 = makeCons(symargs, Nil);
Obj x140289290340583 = makeCons(symop, x140289290340551);
Obj x140289290340615 = makeCons(symlist_45rest, x140289290340583);
Obj x140289290341959 = makeCons(symop, Nil);
Obj x140289290341991 = makeCons(symbuiltin_45_62args, x140289290341959);
Obj x140289290334599 = makeCons(symargs, Nil);
Obj x140289290334631 = makeCons(symlength, x140289290334599);
Obj x140289290335943 = makeCons(symprovided, Nil);
Obj x140289290335975 = makeCons(symrequired, x140289290335943);
Obj x140289290336007 = makeCons(sym_61, x140289290335975);
Obj x140289290337319 = makeCons(sym_37builtin, Nil);
Obj x140289290337351 = makeCons(symquote, x140289290337319);
Obj x140289290337607 = makeCons(symop, Nil);
Obj x140289290337639 = makeCons(x140289290337351, x140289290337607);
Obj x140289290337671 = makeCons(symlist, x140289290337639);
Obj x140289290330631 = makeCons(symglobals, Nil);
Obj x140289290330663 = makeCons(symenv, x140289290330631);
Obj x140289290330695 = makeCons(symparse, x140289290330663);
Obj x140289290330951 = makeCons(symargs, Nil);
Obj x140289290330983 = makeCons(x140289290330695, x140289290330951);
Obj x140289290331015 = makeCons(symmap, x140289290330983);
Obj x140289290331079 = makeCons(x140289290331015, Nil);
Obj x140289290331111 = makeCons(x140289290337671, x140289290331079);
Obj x140289290331143 = makeCons(symlist_45rest, x140289290331111);
Obj x140289290331207 = makeCons(x140289290331143, Nil);
Obj x140289290331239 = makeCons(x140289290336007, x140289290331207);
Obj x140289290332199 = makeCons(symprovided, Nil);
Obj x140289290332231 = makeCons(symrequired, x140289290332199);
Obj x140289290332263 = makeCons(sym_62, x140289290332231);
Obj x140289290333959 = makeCons(symprovided, Nil);
Obj x140289290333991 = makeCons(symrequired, x140289290333959);
Obj x140289290334023 = makeCons(sym_45, x140289290333991);
Obj x140289290276935 = makeCons(Nil, Nil);
Obj x140289290276967 = makeCons(x140289290334023, x140289290276935);
Obj x140289290276999 = makeCons(symtemp_45list, x140289290276967);
Obj x140289298088455 = makeCons(symlambda, Nil);
Obj x140289298088487 = makeCons(symquote, x140289298088455);
Obj x140289298089831 = makeCons(symargs, Nil);
Obj x140289298089863 = makeCons(symop, x140289298089831);
Obj x140289298089895 = makeCons(symlist_45rest, x140289298089863);
Obj x140289298090151 = makeCons(symtmp, Nil);
Obj x140289298090183 = makeCons(x140289298089895, x140289298090151);
Obj x140289298090215 = makeCons(symappend, x140289298090183);
Obj x140289298090279 = makeCons(x140289298090215, Nil);
Obj x140289298090311 = makeCons(symtmp, x140289298090279);
Obj x140289298090343 = makeCons(x140289298088487, x140289298090311);
Obj x140289298090375 = makeCons(symlist, x140289298090343);
Obj x140289298090439 = makeCons(x140289298090375, Nil);
Obj x140289298090471 = makeCons(symglobals, x140289298090439);
Obj x140289298090503 = makeCons(symenv, x140289298090471);
Obj x140289298090535 = makeCons(symparse, x140289298090503);
Obj x140289298090599 = makeCons(x140289298090535, Nil);
Obj x140289298090631 = makeCons(x140289290276999, x140289298090599);
Obj x140289298090663 = makeCons(symtmp, x140289298090631);
Obj x140289298090695 = makeCons(symlet, x140289298090663);
Obj x140289298090759 = makeCons(x140289298090695, Nil);
Obj x140289298090791 = makeCons(x140289290332263, x140289298090759);
Obj x140289298091751 = makeCons(makeCString("primitive call mismatch"), Nil);
Obj x140289298091783 = makeCons(symerror, x140289298091751);
Obj x140289298091847 = makeCons(x140289298091783, Nil);
Obj x140289298091879 = makeCons(True, x140289298091847);
Obj x140289298091943 = makeCons(x140289298091879, Nil);
Obj x140289298091975 = makeCons(x140289298090791, x140289298091943);
Obj x140289298092007 = makeCons(x140289290331239, x140289298091975);
Obj x140289298055175 = makeCons(symcond, x140289298092007);
Obj x140289298055239 = makeCons(x140289298055175, Nil);
Obj x140289298055271 = makeCons(x140289290334631, x140289298055239);
Obj x140289298055303 = makeCons(symprovided, x140289298055271);
Obj x140289298055335 = makeCons(x140289290341991, x140289298055303);
Obj x140289298055367 = makeCons(symrequired, x140289298055335);
Obj x140289298055399 = makeCons(symlet, x140289298055367);
Obj x140289298056199 = makeCons(symop, Nil);
Obj x140289298056231 = makeCons(symbuiltin_63, x140289298056199);
Obj x140289298058151 = makeCons(symglobals, Nil);
Obj x140289298058183 = makeCons(symenv, x140289298058151);
Obj x140289298058215 = makeCons(symparse, x140289298058183);
Obj x140289298058471 = makeCons(symls, Nil);
Obj x140289298058503 = makeCons(x140289298058215, x140289298058471);
Obj x140289298058535 = makeCons(symmap, x140289298058503);
Obj x140289298058599 = makeCons(x140289298058535, Nil);
Obj x140289298058631 = makeCons(sym_61_62, x140289298058599);
Obj x140289298058663 = makeCons(symls, x140289298058631);
Obj x140289298058695 = makeCons(symglobals, x140289298058663);
Obj x140289298058727 = makeCons(symenv, x140289298058695);
Obj x140289298058759 = makeCons(x140289298056231, x140289298058727);
Obj x140289298058791 = makeCons(symwhere, x140289298058759);
Obj x140289298058823 = makeCons(x140289298055399, x140289298058791);
Obj x140289298058855 = makeCons(sym_61_62, x140289298058823);
Obj x140289298058887 = makeCons(x140289290340615, x140289298058855);
Obj x140289298058919 = makeCons(symglobals, x140289298058887);
Obj x140289298058951 = makeCons(symenv, x140289298058919);
Obj x140289298058983 = makeCons(x140289290339367, x140289298058951);
Obj x140289298059015 = makeCons(sym_61_62, x140289298058983);
Obj x140289298059047 = makeCons(x140289290552039, x140289298059015);
Obj x140289298059079 = makeCons(symglobals, x140289298059047);
Obj x140289298059111 = makeCons(symenv, x140289298059079);
Obj x140289298059143 = makeCons(x140289290627719, x140289298059111);
Obj x140289298059175 = makeCons(sym_61_62, x140289298059143);
Obj x140289298059207 = makeCons(x140289290669255, x140289298059175);
Obj x140289298059239 = makeCons(symglobals, x140289298059207);
Obj x140289298030599 = makeCons(symenv, x140289298059239);
Obj x140289298030631 = makeCons(x140289290667335, x140289298030599);
Obj x140289298030663 = makeCons(sym_61_62, x140289298030631);
Obj x140289298030695 = makeCons(x140289290721831, x140289298030663);
Obj x140289298030727 = makeCons(symglobals, x140289298030695);
Obj x140289298030759 = makeCons(symenv, x140289298030727);
Obj x140289298030791 = makeCons(x140289290720135, x140289298030759);
Obj x140289298030823 = makeCons(sym_61_62, x140289298030791);
Obj x140289298030855 = makeCons(x140289290802855, x140289298030823);
Obj x140289298030887 = makeCons(symglobals, x140289298030855);
Obj x140289298030919 = makeCons(symenv, x140289298030887);
Obj x140289298030951 = makeCons(x140289290850087, x140289298030919);
Obj x140289298030983 = makeCons(symwhere, x140289298030951);
Obj x140289298031015 = makeCons(x140289290849255, x140289298030983);
Obj x140289298031047 = makeCons(sym_61_62, x140289298031015);
Obj x140289298031079 = makeCons(symx, x140289298031047);
Obj x140289298031111 = makeCons(symglobals, x140289298031079);
Obj x140289298031143 = makeCons(symenv, x140289298031111);
Obj x140289298031175 = makeCons(x140289290909799, x140289298031143);
Obj x140289298031207 = makeCons(sym_61_62, x140289298031175);
Obj x140289298031239 = makeCons(x140289290967687, x140289298031207);
Obj x140289298031271 = makeCons(symglobals, x140289298031239);
Obj x140289298031303 = makeCons(sym__, x140289298031271);
Obj x140289298031335 = makeCons(x140289290965991, x140289298031303);
Obj x140289298031367 = makeCons(symwhere, x140289298031335);
Obj x140289298031399 = makeCons(x140289290999559, x140289298031367);
Obj x140289298031431 = makeCons(sym_61_62, x140289298031399);
Obj x140289298031463 = makeCons(symx, x140289298031431);
Obj x140289298031495 = makeCons(symglobals, x140289298031463);
Obj x140289298031527 = makeCons(sym__, x140289298031495);
Obj x140289298031559 = makeCons(symparse, x140289298031527);
Obj x140289298031591 = makeCons(symfunc, x140289298031559);
PUSH_CONT_0(co, 34, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289298031591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140289298031623 = __arg1;
pushCont(co, 35, clofun0, 1, x140289298031623);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140289298031815 = __arg1;
Obj x140289298031623= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 36, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289298031623;
__arg2 = x140289298031815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140289298031847 = __arg1;
Obj x140289298032999 = makeCons(symlist, Nil);
Obj x140289298034375 = makeCons(symy, Nil);
Obj x140289298034407 = makeCons(symx, x140289298034375);
Obj x140289298034439 = makeCons(symlist_45rest, x140289298034407);
Obj x140289297826727 = makeCons(syms2, Nil);
Obj x140289297826759 = makeCons(symy, x140289297826727);
Obj x140289297826791 = makeCons(symunion, x140289297826759);
Obj x140289297827783 = makeCons(syms2, Nil);
Obj x140289297827815 = makeCons(symx, x140289297827783);
Obj x140289297827847 = makeCons(symelem_63, x140289297827815);
Obj x140289297828647 = makeCons(symy, Nil);
Obj x140289297828679 = makeCons(symx, x140289297828647);
Obj x140289297828711 = makeCons(symlist_45rest, x140289297828679);
Obj x140289297781287 = makeCons(syms2, Nil);
Obj x140289297781319 = makeCons(symy, x140289297781287);
Obj x140289297781351 = makeCons(symunion, x140289297781319);
Obj x140289297781415 = makeCons(x140289297781351, Nil);
Obj x140289297781447 = makeCons(symx, x140289297781415);
Obj x140289297781479 = makeCons(symcons, x140289297781447);
Obj x140289297781543 = makeCons(x140289297781479, Nil);
Obj x140289297781575 = makeCons(sym_61_62, x140289297781543);
Obj x140289297781607 = makeCons(syms2, x140289297781575);
Obj x140289297781639 = makeCons(x140289297828711, x140289297781607);
Obj x140289297781671 = makeCons(x140289297827847, x140289297781639);
Obj x140289297781703 = makeCons(symwhere, x140289297781671);
Obj x140289297781735 = makeCons(x140289297826791, x140289297781703);
Obj x140289297781767 = makeCons(sym_61_62, x140289297781735);
Obj x140289297781799 = makeCons(syms2, x140289297781767);
Obj x140289297781831 = makeCons(x140289298034439, x140289297781799);
Obj x140289297781863 = makeCons(syms2, x140289297781831);
Obj x140289297781895 = makeCons(sym_61_62, x140289297781863);
Obj x140289297781927 = makeCons(syms2, x140289297781895);
Obj x140289297781959 = makeCons(x140289298032999, x140289297781927);
Obj x140289297781991 = makeCons(symunion, x140289297781959);
Obj x140289297782023 = makeCons(symfunc, x140289297781991);
PUSH_CONT_0(co, 37, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289297782023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140289297782055 = __arg1;
pushCont(co, 38, clofun0, 1, x140289297782055);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140289297782247 = __arg1;
Obj x140289297782055= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 39, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289297782055;
__arg2 = x140289297782247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140289297782279 = __arg1;
Obj x140289297783431 = makeCons(symlist, Nil);
Obj x140289297784231 = makeCons(symlist, Nil);
Obj x140289297756359 = makeCons(symy, Nil);
Obj x140289297756391 = makeCons(symx, x140289297756359);
Obj x140289297756423 = makeCons(symlist_45rest, x140289297756391);
Obj x140289297757607 = makeCons(syms2, Nil);
Obj x140289297757639 = makeCons(symy, x140289297757607);
Obj x140289297757671 = makeCons(symdiff, x140289297757639);
Obj x140289297758663 = makeCons(syms2, Nil);
Obj x140289297758695 = makeCons(symx, x140289297758663);
Obj x140289297758727 = makeCons(symelem_63, x140289297758695);
Obj x140289297759527 = makeCons(symy, Nil);
Obj x140289297759559 = makeCons(symx, x140289297759527);
Obj x140289297759591 = makeCons(symlist_45rest, x140289297759559);
Obj x140289297732647 = makeCons(syms2, Nil);
Obj x140289297732679 = makeCons(symy, x140289297732647);
Obj x140289297732711 = makeCons(symdiff, x140289297732679);
Obj x140289297732775 = makeCons(x140289297732711, Nil);
Obj x140289297732807 = makeCons(symx, x140289297732775);
Obj x140289297732839 = makeCons(symcons, x140289297732807);
Obj x140289297732903 = makeCons(x140289297732839, Nil);
Obj x140289297732935 = makeCons(sym_61_62, x140289297732903);
Obj x140289297732967 = makeCons(syms2, x140289297732935);
Obj x140289297732999 = makeCons(x140289297759591, x140289297732967);
Obj x140289297733031 = makeCons(x140289297758727, x140289297732999);
Obj x140289297733063 = makeCons(symwhere, x140289297733031);
Obj x140289297733095 = makeCons(x140289297757671, x140289297733063);
Obj x140289297733127 = makeCons(sym_61_62, x140289297733095);
Obj x140289297733159 = makeCons(syms2, x140289297733127);
Obj x140289297733191 = makeCons(x140289297756423, x140289297733159);
Obj x140289297733223 = makeCons(x140289297784231, x140289297733191);
Obj x140289297733255 = makeCons(sym_61_62, x140289297733223);
Obj x140289297733287 = makeCons(sym__, x140289297733255);
Obj x140289297733319 = makeCons(x140289297783431, x140289297733287);
Obj x140289297733351 = makeCons(symdiff, x140289297733319);
Obj x140289297733383 = makeCons(symfunc, x140289297733351);
PUSH_CONT_0(co, 40, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289297733383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140289297733415 = __arg1;
pushCont(co, 41, clofun0, 1, x140289297733415);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140289297733607 = __arg1;
Obj x140289297733415= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 42, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289297733415;
__arg2 = x140289297733607;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140289297733639 = __arg1;
Obj x140289297735335 = makeCons(sym_37const, Nil);
Obj x140289297735367 = makeCons(symquote, x140289297735335);
Obj x140289297735623 = makeCons(symx, Nil);
Obj x140289297735655 = makeCons(x140289297735367, x140289297735623);
Obj x140289297326087 = makeCons(symlist, x140289297735655);
Obj x140289297327431 = makeCons(sym_37global, Nil);
Obj x140289297327463 = makeCons(symquote, x140289297327431);
Obj x140289297327719 = makeCons(symx, Nil);
Obj x140289297327751 = makeCons(x140289297327463, x140289297327719);
Obj x140289297327783 = makeCons(symlist, x140289297327751);
Obj x140289297329127 = makeCons(sym_37builtin, Nil);
Obj x140289297329159 = makeCons(symquote, x140289297329127);
Obj x140289297329415 = makeCons(symop, Nil);
Obj x140289297329447 = makeCons(x140289297329159, x140289297329415);
Obj x140289297329479 = makeCons(symlist, x140289297329447);
Obj x140289297298055 = makeCons(symquote, Nil);
Obj x140289297298087 = makeCons(symquote, x140289297298055);
Obj x140289297298343 = makeCons(symx, Nil);
Obj x140289297298375 = makeCons(x140289297298087, x140289297298343);
Obj x140289297298407 = makeCons(symlist, x140289297298375);
Obj x140289297299751 = makeCons(sym_37closure_45ref, Nil);
Obj x140289297299783 = makeCons(symquote, x140289297299751);
Obj x140289297300039 = makeCons(sym__, Nil);
Obj x140289297300071 = makeCons(x140289297299783, x140289297300039);
Obj x140289297300103 = makeCons(symlist, x140289297300071);
Obj x140289297301127 = makeCons(False, Nil);
Obj x140289297301159 = makeCons(sym_61_62, x140289297301127);
Obj x140289297301191 = makeCons(symx, x140289297301159);
Obj x140289297301223 = makeCons(True, x140289297301191);
Obj x140289297301255 = makeCons(sym_61_62, x140289297301223);
Obj x140289297301287 = makeCons(x140289297300103, x140289297301255);
Obj x140289297301319 = makeCons(True, x140289297301287);
Obj x140289297301351 = makeCons(sym_61_62, x140289297301319);
Obj x140289297301383 = makeCons(x140289297298407, x140289297301351);
Obj x140289297301415 = makeCons(True, x140289297301383);
Obj x140289297301447 = makeCons(sym_61_62, x140289297301415);
Obj x140289297301479 = makeCons(x140289297329479, x140289297301447);
Obj x140289297272839 = makeCons(True, x140289297301479);
Obj x140289297272871 = makeCons(sym_61_62, x140289297272839);
Obj x140289297272903 = makeCons(x140289297327783, x140289297272871);
Obj x140289297272935 = makeCons(True, x140289297272903);
Obj x140289297272967 = makeCons(sym_61_62, x140289297272935);
Obj x140289297272999 = makeCons(x140289297326087, x140289297272967);
Obj x140289297273031 = makeCons(symconvert_45protect_63, x140289297272999);
Obj x140289297273063 = makeCons(symfunc, x140289297273031);
PUSH_CONT_0(co, 43, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289297273063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140289297273095 = __arg1;
pushCont(co, 44, clofun0, 1, x140289297273095);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140289297273287 = __arg1;
Obj x140289297273095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 45, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289297273095;
__arg2 = x140289297273287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140289297273319 = __arg1;
Obj x140289297274855 = makeCons(symlist, Nil);
Obj x140289297275655 = makeCons(symx, Nil);
Obj x140289297275687 = makeCons(symconvert_45protect_63, x140289297275655);
Obj x140289297276679 = makeCons(symx, Nil);
Obj x140289297276711 = makeCons(symlist, x140289297276679);
Obj x140289297097287 = makeCons(symx, Nil);
Obj x140289297097319 = makeCons(symsymbol_63, x140289297097287);
Obj x140289297098279 = makeCons(symlambda, Nil);
Obj x140289297098311 = makeCons(symquote, x140289297098279);
Obj x140289297098759 = makeCons(symbody, Nil);
Obj x140289297098791 = makeCons(symargs, x140289297098759);
Obj x140289297098823 = makeCons(x140289297098311, x140289297098791);
Obj x140289297098855 = makeCons(symlist, x140289297098823);
Obj x140289297100007 = makeCons(symbody, Nil);
Obj x140289297100039 = makeCons(symfree_45vars, x140289297100007);
Obj x140289297100295 = makeCons(symargs, Nil);
Obj x140289297100327 = makeCons(x140289297100039, x140289297100295);
Obj x140289297100359 = makeCons(symdiff, x140289297100327);
Obj x140289297076743 = makeCons(symif, Nil);
Obj x140289297076775 = makeCons(symquote, x140289297076743);
Obj x140289297077415 = makeCons(symz, Nil);
Obj x140289297077447 = makeCons(symy, x140289297077415);
Obj x140289297077479 = makeCons(symx, x140289297077447);
Obj x140289297077511 = makeCons(x140289297076775, x140289297077479);
Obj x140289297077543 = makeCons(symlist, x140289297077511);
Obj x140289297078695 = makeCons(symlist, Nil);
Obj x140289297080231 = makeCons(symz, Nil);
Obj x140289297080263 = makeCons(symy, x140289297080231);
Obj x140289297080295 = makeCons(symx, x140289297080263);
Obj x140289297027079 = makeCons(symlist, x140289297080295);
Obj x140289297027143 = makeCons(x140289297027079, Nil);
Obj x140289297027175 = makeCons(symfree_45vars, x140289297027143);
Obj x140289297027207 = makeCons(symmap, x140289297027175);
Obj x140289297027271 = makeCons(x140289297027207, Nil);
Obj x140289297027303 = makeCons(x140289297078695, x140289297027271);
Obj x140289297027335 = makeCons(symunion, x140289297027303);
Obj x140289297027367 = makeCons(symfoldl, x140289297027335);
Obj x140289297028327 = makeCons(symdo, Nil);
Obj x140289297028359 = makeCons(symquote, x140289297028327);
Obj x140289297028807 = makeCons(symy, Nil);
Obj x140289297028839 = makeCons(symx, x140289297028807);
Obj x140289297028871 = makeCons(x140289297028359, x140289297028839);
Obj x140289297028903 = makeCons(symlist, x140289297028871);
Obj x140289297030055 = makeCons(symlist, Nil);
Obj x140289296998631 = makeCons(symy, Nil);
Obj x140289296998663 = makeCons(symx, x140289296998631);
Obj x140289296998695 = makeCons(symlist, x140289296998663);
Obj x140289296998759 = makeCons(x140289296998695, Nil);
Obj x140289296998791 = makeCons(symfree_45vars, x140289296998759);
Obj x140289296998823 = makeCons(symmap, x140289296998791);
Obj x140289296998887 = makeCons(x140289296998823, Nil);
Obj x140289296998919 = makeCons(x140289297030055, x140289296998887);
Obj x140289296998951 = makeCons(symunion, x140289296998919);
Obj x140289296998983 = makeCons(symfoldl, x140289296998951);
Obj x140289296999943 = makeCons(symlet, Nil);
Obj x140289296999975 = makeCons(symquote, x140289296999943);
Obj x140289297000615 = makeCons(symc, Nil);
Obj x140289297000647 = makeCons(symb, x140289297000615);
Obj x140289297000679 = makeCons(syma, x140289297000647);
Obj x140289297000711 = makeCons(x140289296999975, x140289297000679);
Obj x140289297000743 = makeCons(symlist, x140289297000711);
Obj x140289297001895 = makeCons(symb, Nil);
Obj x140289297001927 = makeCons(symfree_45vars, x140289297001895);
Obj x140289296683399 = makeCons(symc, Nil);
Obj x140289296683431 = makeCons(symfree_45vars, x140289296683399);
Obj x140289296684039 = makeCons(syma, Nil);
Obj x140289296684071 = makeCons(symlist, x140289296684039);
Obj x140289296684135 = makeCons(x140289296684071, Nil);
Obj x140289296684167 = makeCons(x140289296683431, x140289296684135);
Obj x140289296684199 = makeCons(symdiff, x140289296684167);
Obj x140289296684263 = makeCons(x140289296684199, Nil);
Obj x140289296684295 = makeCons(x140289297001927, x140289296684263);
Obj x140289296684327 = makeCons(symunion, x140289296684295);
Obj x140289296685287 = makeCons(sym_37closure, Nil);
Obj x140289296685319 = makeCons(symquote, x140289296685287);
Obj x140289296685767 = makeCons(symmore, Nil);
Obj x140289296685799 = makeCons(symlam, x140289296685767);
Obj x140289296685831 = makeCons(x140289296685319, x140289296685799);
Obj x140289296685863 = makeCons(symlist_45rest, x140289296685831);
Obj x140289296662631 = makeCons(symmore, Nil);
Obj x140289296662663 = makeCons(symlam, x140289296662631);
Obj x140289296662695 = makeCons(symlist_45rest, x140289296662663);
Obj x140289296662759 = makeCons(x140289296662695, Nil);
Obj x140289296662791 = makeCons(symfree_45vars, x140289296662759);
Obj x140289296663751 = makeCons(symreturn, Nil);
Obj x140289296663783 = makeCons(symquote, x140289296663751);
Obj x140289296664039 = makeCons(symx, Nil);
Obj x140289296664071 = makeCons(x140289296663783, x140289296664039);
Obj x140289296664103 = makeCons(symlist, x140289296664071);
Obj x140289296664903 = makeCons(symx, Nil);
Obj x140289296664935 = makeCons(symfree_45vars, x140289296664903);
Obj x140289296665895 = makeCons(symcall, Nil);
Obj x140289296665927 = makeCons(symquote, x140289296665895);
Obj x140289296666375 = makeCons(symcont, Nil);
Obj x140289296666407 = makeCons(symexp, x140289296666375);
Obj x140289296666439 = makeCons(x140289296665927, x140289296666407);
Obj x140289296666471 = makeCons(symlist, x140289296666439);
Obj x140289296389095 = makeCons(symlist, Nil);
Obj x140289296390439 = makeCons(symcont, Nil);
Obj x140289296390471 = makeCons(symexp, x140289296390439);
Obj x140289296390503 = makeCons(symlist, x140289296390471);
Obj x140289296390567 = makeCons(x140289296390503, Nil);
Obj x140289296390599 = makeCons(symfree_45vars, x140289296390567);
Obj x140289296390631 = makeCons(symmap, x140289296390599);
Obj x140289296390695 = makeCons(x140289296390631, Nil);
Obj x140289296390727 = makeCons(x140289296389095, x140289296390695);
Obj x140289296390759 = makeCons(symunion, x140289296390727);
Obj x140289296390791 = makeCons(symfoldl, x140289296390759);
Obj x140289296391751 = makeCons(symtailcall, Nil);
Obj x140289296391783 = makeCons(symquote, x140289296391751);
Obj x140289296392039 = makeCons(symexp, Nil);
Obj x140289296392071 = makeCons(x140289296391783, x140289296392039);
Obj x140289296392103 = makeCons(symlist, x140289296392071);
Obj x140289296360135 = makeCons(symexp, Nil);
Obj x140289296360167 = makeCons(symfree_45vars, x140289296360135);
Obj x140289296361127 = makeCons(symcontinuation, Nil);
Obj x140289296361159 = makeCons(symquote, x140289296361127);
Obj x140289296361607 = makeCons(symbody, Nil);
Obj x140289296361639 = makeCons(symarg, x140289296361607);
Obj x140289296361671 = makeCons(x140289296361159, x140289296361639);
Obj x140289296361703 = makeCons(symlist, x140289296361671);
Obj x140289296362855 = makeCons(symbody, Nil);
Obj x140289296362887 = makeCons(symfree_45vars, x140289296362855);
Obj x140289296363143 = makeCons(symarg, Nil);
Obj x140289296363175 = makeCons(x140289296362887, x140289296363143);
Obj x140289296363207 = makeCons(symdiff, x140289296363175);
Obj x140289296314855 = makeCons(symargs, Nil);
Obj x140289296314887 = makeCons(symf, x140289296314855);
Obj x140289296314919 = makeCons(symlist_45rest, x140289296314887);
Obj x140289296316071 = makeCons(symlist, Nil);
Obj x140289296317415 = makeCons(symargs, Nil);
Obj x140289296317447 = makeCons(symf, x140289296317415);
Obj x140289296317479 = makeCons(symlist_45rest, x140289296317447);
Obj x140289296317543 = makeCons(x140289296317479, Nil);
Obj x140289296317575 = makeCons(symfree_45vars, x140289296317543);
Obj x140289296317607 = makeCons(symmap, x140289296317575);
Obj x140289296317671 = makeCons(x140289296317607, Nil);
Obj x140289296317703 = makeCons(x140289296316071, x140289296317671);
Obj x140289296317735 = makeCons(symunion, x140289296317703);
Obj x140289296317767 = makeCons(symfoldl, x140289296317735);
Obj x140289296317831 = makeCons(x140289296317767, Nil);
Obj x140289296317863 = makeCons(sym_61_62, x140289296317831);
Obj x140289296317895 = makeCons(x140289296314919, x140289296317863);
Obj x140289296317927 = makeCons(x140289296363207, x140289296317895);
Obj x140289296317959 = makeCons(sym_61_62, x140289296317927);
Obj x140289296317991 = makeCons(x140289296361703, x140289296317959);
Obj x140289296318023 = makeCons(x140289296360167, x140289296317991);
Obj x140289296318055 = makeCons(sym_61_62, x140289296318023);
Obj x140289296318087 = makeCons(x140289296392103, x140289296318055);
Obj x140289296318119 = makeCons(x140289296390791, x140289296318087);
Obj x140289296318151 = makeCons(sym_61_62, x140289296318119);
Obj x140289296318183 = makeCons(x140289296666471, x140289296318151);
Obj x140289296318215 = makeCons(x140289296664935, x140289296318183);
Obj x140289296318247 = makeCons(sym_61_62, x140289296318215);
Obj x140289296318279 = makeCons(x140289296664103, x140289296318247);
Obj x140289296318311 = makeCons(x140289296662791, x140289296318279);
Obj x140289296318343 = makeCons(sym_61_62, x140289296318311);
Obj x140289296318375 = makeCons(x140289296685863, x140289296318343);
Obj x140289296318407 = makeCons(x140289296684327, x140289296318375);
Obj x140289296318439 = makeCons(sym_61_62, x140289296318407);
Obj x140289296240647 = makeCons(x140289297000743, x140289296318439);
Obj x140289296240679 = makeCons(x140289296998983, x140289296240647);
Obj x140289296240711 = makeCons(sym_61_62, x140289296240679);
Obj x140289296240743 = makeCons(x140289297028903, x140289296240711);
Obj x140289296240775 = makeCons(x140289297027367, x140289296240743);
Obj x140289296240807 = makeCons(sym_61_62, x140289296240775);
Obj x140289296240839 = makeCons(x140289297077543, x140289296240807);
Obj x140289296240871 = makeCons(x140289297100359, x140289296240839);
Obj x140289296240903 = makeCons(sym_61_62, x140289296240871);
Obj x140289296240935 = makeCons(x140289297098855, x140289296240903);
Obj x140289296240967 = makeCons(x140289297097319, x140289296240935);
Obj x140289296240999 = makeCons(symwhere, x140289296240967);
Obj x140289296241031 = makeCons(x140289297276711, x140289296240999);
Obj x140289296241063 = makeCons(sym_61_62, x140289296241031);
Obj x140289296241095 = makeCons(symx, x140289296241063);
Obj x140289296241127 = makeCons(x140289297275687, x140289296241095);
Obj x140289296241159 = makeCons(symwhere, x140289296241127);
Obj x140289296241191 = makeCons(x140289297274855, x140289296241159);
Obj x140289296241223 = makeCons(sym_61_62, x140289296241191);
Obj x140289296241255 = makeCons(symx, x140289296241223);
Obj x140289296241287 = makeCons(symfree_45vars, x140289296241255);
Obj x140289296241319 = makeCons(symfunc, x140289296241287);
PUSH_CONT_0(co, 46, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289296241319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140289296241351 = __arg1;
pushCont(co, 47, clofun0, 1, x140289296241351);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140289296241543 = __arg1;
Obj x140289296241351= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 48, clofun0);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289296241351;
__arg2 = x140289296241543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj x140289296241575 = __arg1;
Obj x140289296243879 = makeCons(symx, Nil);
Obj x140289296243911 = makeCons(symconvert_45protect_63, x140289296243879);
Obj x140289296233543 = makeCons(symfvs, Nil);
Obj x140289296233575 = makeCons(symvar, x140289296233543);
Obj x140289296233607 = makeCons(symindex, x140289296233575);
Obj x140289296234759 = makeCons(sympos, Nil);
Obj x140289296234791 = makeCons(MAKE_NUMBER(-1), x140289296234759);
Obj x140289296234823 = makeCons(sym_61, x140289296234791);
Obj x140289296235975 = makeCons(sym_37closure_45ref, Nil);
Obj x140289296236007 = makeCons(symquote, x140289296235975);
Obj x140289296236263 = makeCons(sympos, Nil);
Obj x140289296236295 = makeCons(x140289296236007, x140289296236263);
Obj x140289296236327 = makeCons(symlist, x140289296236295);
Obj x140289296236391 = makeCons(x140289296236327, Nil);
Obj x140289296236423 = makeCons(symvar, x140289296236391);
Obj x140289296236455 = makeCons(x140289296234823, x140289296236423);
Obj x140289296236487 = makeCons(symif, x140289296236455);
Obj x140289296097287 = makeCons(x140289296236487, Nil);
Obj x140289296097319 = makeCons(x140289296233607, x140289296097287);
Obj x140289296097351 = makeCons(sympos, x140289296097319);
Obj x140289296097383 = makeCons(symlet, x140289296097351);
Obj x140289296098183 = makeCons(symvar, Nil);
Obj x140289296098215 = makeCons(symsymbol_63, x140289296098183);
Obj x140289296099367 = makeCons(symlambda, Nil);
Obj x140289296099399 = makeCons(symquote, x140289296099367);
Obj x140289296099847 = makeCons(symbody, Nil);
Obj x140289296099879 = makeCons(symargs, x140289296099847);
Obj x140289296099911 = makeCons(x140289296099399, x140289296099879);
Obj x140289296099943 = makeCons(symlist, x140289296099911);
Obj x140289296073319 = makeCons(symlambda, Nil);
Obj x140289296073351 = makeCons(symquote, x140289296073319);
Obj x140289296073799 = makeCons(symbody, Nil);
Obj x140289296073831 = makeCons(symargs, x140289296073799);
Obj x140289296073863 = makeCons(x140289296073351, x140289296073831);
Obj x140289296073895 = makeCons(symlist, x140289296073863);
Obj x140289296073959 = makeCons(x140289296073895, Nil);
Obj x140289296073991 = makeCons(symfree_45vars, x140289296073959);
Obj x140289296074951 = makeCons(sym_37closure, Nil);
Obj x140289296074983 = makeCons(symquote, x140289296074951);
Obj x140289296075943 = makeCons(symlambda, Nil);
Obj x140289296075975 = makeCons(symquote, x140289296075943);
Obj x140289295937703 = makeCons(symbody, Nil);
Obj x140289295937735 = makeCons(symfvs1, x140289295937703);
Obj x140289295937767 = makeCons(symclosure_45convert, x140289295937735);
Obj x140289295937831 = makeCons(x140289295937767, Nil);
Obj x140289295937863 = makeCons(symargs, x140289295937831);
Obj x140289295937895 = makeCons(x140289296075975, x140289295937863);
Obj x140289295937927 = makeCons(symlist, x140289295937895);
Obj x140289295938887 = makeCons(symfvs, Nil);
Obj x140289295938919 = makeCons(symclosure_45convert, x140289295938887);
Obj x140289295939175 = makeCons(symfvs1, Nil);
Obj x140289295939207 = makeCons(x140289295938919, x140289295939175);
Obj x140289295939239 = makeCons(symmap, x140289295939207);
Obj x140289295939303 = makeCons(x140289295939239, Nil);
Obj x140289295939335 = makeCons(x140289295937927, x140289295939303);
Obj x140289295939367 = makeCons(x140289296074983, x140289295939335);
Obj x140289295939399 = makeCons(symlist_45rest, x140289295939367);
Obj x140289295939463 = makeCons(x140289295939399, Nil);
Obj x140289295939495 = makeCons(x140289296073991, x140289295939463);
Obj x140289295939527 = makeCons(symfvs1, x140289295939495);
Obj x140289295939559 = makeCons(symlet, x140289295939527);
Obj x140289295940711 = makeCons(symlet, Nil);
Obj x140289295940743 = makeCons(symquote, x140289295940711);
Obj x140289295941383 = makeCons(symc, Nil);
Obj x140289295941415 = makeCons(symb, x140289295941383);
Obj x140289295941447 = makeCons(syma, x140289295941415);
Obj x140289295941479 = makeCons(x140289295940743, x140289295941447);
Obj x140289295941511 = makeCons(symlist, x140289295941479);
Obj x140289294842183 = makeCons(symlet, Nil);
Obj x140289294842215 = makeCons(symquote, x140289294842183);
Obj x140289294843463 = makeCons(symb, Nil);
Obj x140289294843495 = makeCons(symfvs, x140289294843463);
Obj x140289294843527 = makeCons(symclosure_45convert, x140289294843495);
Obj x140289294808007 = makeCons(symc, Nil);
Obj x140289294808039 = makeCons(symfvs, x140289294808007);
Obj x140289294808071 = makeCons(symclosure_45convert, x140289294808039);
Obj x140289294808167 = makeCons(x140289294808071, Nil);
Obj x140289294808199 = makeCons(x140289294843527, x140289294808167);
Obj x140289294808231 = makeCons(syma, x140289294808199);
Obj x140289294808263 = makeCons(x140289294842215, x140289294808231);
Obj x140289294808327 = makeCons(symlist, x140289294808263);
Obj x140289294809607 = makeCons(symargs, Nil);
Obj x140289294809639 = makeCons(symf, x140289294809607);
Obj x140289294809671 = makeCons(symlist_45rest, x140289294809639);
Obj x140289294802983 = makeCons(symfvs, Nil);
Obj x140289294803015 = makeCons(symclosure_45convert, x140289294802983);
Obj x140289294804455 = makeCons(symargs, Nil);
Obj x140289294804519 = makeCons(symf, x140289294804455);
Obj x140289294804551 = makeCons(symlist_45rest, x140289294804519);
Obj x140289294804615 = makeCons(x140289294804551, Nil);
Obj x140289294804647 = makeCons(x140289294803015, x140289294804615);
Obj x140289294804679 = makeCons(symmap, x140289294804647);
Obj x140289294804743 = makeCons(x140289294804679, Nil);
Obj x140289294804775 = makeCons(sym_61_62, x140289294804743);
Obj x140289294804807 = makeCons(x140289294809671, x140289294804775);
Obj x140289294804839 = makeCons(symfvs, x140289294804807);
Obj x140289294804903 = makeCons(x140289294808327, x140289294804839);
Obj x140289294805255 = makeCons(sym_61_62, x140289294804903);
Obj x140289294805287 = makeCons(x140289295941511, x140289294805255);
Obj x140289294805383 = makeCons(symfvs, x140289294805287);
Obj x140289294805415 = makeCons(x140289295939559, x140289294805383);
Obj x140289294805447 = makeCons(sym_61_62, x140289294805415);
Obj x140289294805479 = makeCons(x140289296099943, x140289294805447);
Obj x140289294805511 = makeCons(symfvs, x140289294805479);
Obj x140289294805863 = makeCons(x140289296098215, x140289294805511);
Obj x140289294805927 = makeCons(symwhere, x140289294805863);
Obj x140289294805959 = makeCons(x140289296097383, x140289294805927);
Obj x140289294805991 = makeCons(sym_61_62, x140289294805959);
Obj x140289294806023 = makeCons(symvar, x140289294805991);
Obj x140289294806375 = makeCons(symfvs, x140289294806023);
Obj x140289294806439 = makeCons(x140289296243911, x140289294806375);
Obj x140289294806471 = makeCons(symwhere, x140289294806439);
Obj x140289294806535 = makeCons(symx, x140289294806471);
Obj x140289294806727 = makeCons(sym_61_62, x140289294806535);
Obj x140289294806759 = makeCons(symx, x140289294806727);
Obj x140289294806951 = makeCons(sym__, x140289294806759);
Obj x140289294806983 = makeCons(symclosure_45convert, x140289294806951);
Obj x140289294807015 = makeCons(symfunc, x140289294806983);
PUSH_CONT_0(co, 49, clofun0);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289294807015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun0) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140289294761991 = __arg1;
pushCont(co, 0, clofun1, 1, x140289294761991);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
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
Obj x140289294762279 = __arg1;
Obj x140289294761991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 1, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289294761991;
__arg2 = x140289294762279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x140289294762471 = __arg1;
Obj x140289294764007 = makeCons(symx, Nil);
Obj x140289294765383 = makeCons(symreturn, Nil);
Obj x140289294765415 = makeCons(symquote, x140289294765383);
Obj x140289294765671 = makeCons(symx, Nil);
Obj x140289294765703 = makeCons(x140289294765415, x140289294765671);
Obj x140289294765735 = makeCons(symlist, x140289294765703);
Obj x140289294765863 = makeCons(x140289294765735, Nil);
Obj x140289294765895 = makeCons(x140289294764007, x140289294765863);
Obj x140289294765927 = makeCons(symid, x140289294765895);
Obj x140289294765959 = makeCons(symdefun, x140289294765927);
PUSH_CONT_0(co, 2, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289294765959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x140289294765991 = __arg1;
pushCont(co, 3, clofun1, 1, x140289294765991);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140289294618759 = __arg1;
Obj x140289294765991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 4, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289294765991;
__arg2 = x140289294618759;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140289294618823 = __arg1;
Obj x140289294621127 = makeCons(symx, Nil);
Obj x140289294621159 = makeCons(symnext, x140289294621127);
Obj x140289294622567 = makeCons(symx, Nil);
Obj x140289294622599 = makeCons(symsymbol_63, x140289294622567);
Obj x140289294606887 = makeCons(symx, Nil);
Obj x140289294606919 = makeCons(symconvert_45protect_63, x140289294606887);
Obj x140289294607015 = makeCons(x140289294606919, Nil);
Obj x140289294607047 = makeCons(x140289294622599, x140289294607015);
Obj x140289294607079 = makeCons(symor, x140289294607047);
Obj x140289294608903 = makeCons(symx, Nil);
Obj x140289294608935 = makeCons(symconvert_45protect_63, x140289294608903);
Obj x140289294609959 = makeCons(symif, Nil);
Obj x140289294610023 = makeCons(symquote, x140289294609959);
Obj x140289294205159 = makeCons(symc, Nil);
Obj x140289294205191 = makeCons(symb, x140289294205159);
Obj x140289294205223 = makeCons(syma, x140289294205191);
Obj x140289294205255 = makeCons(x140289294610023, x140289294205223);
Obj x140289294205287 = makeCons(symlist, x140289294205255);
Obj x140289294206983 = makeCons(symra, Nil);
Obj x140289294207943 = makeCons(symif, Nil);
Obj x140289294207975 = makeCons(symquote, x140289294207943);
Obj x140289294208967 = makeCons(symnext, Nil);
Obj x140289294208999 = makeCons(symb, x140289294208967);
Obj x140289294118919 = makeCons(symtailify, x140289294208999);
Obj x140289294119751 = makeCons(symnext, Nil);
Obj x140289294119783 = makeCons(symc, x140289294119751);
Obj x140289294119815 = makeCons(symtailify, x140289294119783);
Obj x140289294119911 = makeCons(x140289294119815, Nil);
Obj x140289294119943 = makeCons(x140289294118919, x140289294119911);
Obj x140289294119975 = makeCons(symra, x140289294119943);
Obj x140289294120007 = makeCons(x140289294207975, x140289294119975);
Obj x140289294120039 = makeCons(symlist, x140289294120007);
Obj x140289294120135 = makeCons(x140289294120039, Nil);
Obj x140289294120167 = makeCons(x140289294206983, x140289294120135);
Obj x140289294120199 = makeCons(symlambda, x140289294120167);
Obj x140289294120263 = makeCons(x140289294120199, Nil);
Obj x140289294120295 = makeCons(syma, x140289294120263);
Obj x140289294120327 = makeCons(symtailify, x140289294120295);
Obj x140289294121351 = makeCons(symdo, Nil);
Obj x140289294121383 = makeCons(symquote, x140289294121351);
Obj x140289294121831 = makeCons(symb, Nil);
Obj x140289294121863 = makeCons(syma, x140289294121831);
Obj x140289294121895 = makeCons(x140289294121383, x140289294121863);
Obj x140289294121927 = makeCons(symlist, x140289294121895);
Obj x140289294066279 = makeCons(symra, Nil);
Obj x140289294067239 = makeCons(symra, Nil);
Obj x140289294067271 = makeCons(symsymbol_63, x140289294067239);
Obj x140289294068071 = makeCons(symnext, Nil);
Obj x140289294068103 = makeCons(symb, x140289294068071);
Obj x140289294068135 = makeCons(symtailify, x140289294068103);
Obj x140289294069095 = makeCons(symdo, Nil);
Obj x140289294069127 = makeCons(symquote, x140289294069095);
Obj x140289293996391 = makeCons(symnext, Nil);
Obj x140289293996423 = makeCons(symb, x140289293996391);
Obj x140289293996455 = makeCons(symtailify, x140289293996423);
Obj x140289293996519 = makeCons(x140289293996455, Nil);
Obj x140289293996551 = makeCons(symra, x140289293996519);
Obj x140289293996583 = makeCons(x140289294069127, x140289293996551);
Obj x140289293996615 = makeCons(symlist, x140289293996583);
Obj x140289293996679 = makeCons(x140289293996615, Nil);
Obj x140289293996711 = makeCons(x140289294068135, x140289293996679);
Obj x140289293996743 = makeCons(x140289294067271, x140289293996711);
Obj x140289293996775 = makeCons(symif, x140289293996743);
Obj x140289293996839 = makeCons(x140289293996775, Nil);
Obj x140289293996871 = makeCons(x140289294066279, x140289293996839);
Obj x140289293996903 = makeCons(symlambda, x140289293996871);
Obj x140289293996967 = makeCons(x140289293996903, Nil);
Obj x140289293996999 = makeCons(syma, x140289293996967);
Obj x140289293997031 = makeCons(symtailify, x140289293996999);
Obj x140289293997991 = makeCons(symlet, Nil);
Obj x140289293998023 = makeCons(symquote, x140289293997991);
Obj x140289293998663 = makeCons(symc, Nil);
Obj x140289293998695 = makeCons(symb, x140289293998663);
Obj x140289293998727 = makeCons(syma, x140289293998695);
Obj x140289293998759 = makeCons(x140289293998023, x140289293998727);
Obj x140289293998791 = makeCons(symlist, x140289293998759);
Obj x140289293902183 = makeCons(symrb, Nil);
Obj x140289293903143 = makeCons(symlet, Nil);
Obj x140289293903175 = makeCons(symquote, x140289293903143);
Obj x140289293904359 = makeCons(symnext, Nil);
Obj x140289293904391 = makeCons(symc, x140289293904359);
Obj x140289293904423 = makeCons(symtailify, x140289293904391);
Obj x140289293904487 = makeCons(x140289293904423, Nil);
Obj x140289293904519 = makeCons(symrb, x140289293904487);
Obj x140289293904551 = makeCons(syma, x140289293904519);
Obj x140289293904583 = makeCons(x140289293903175, x140289293904551);
Obj x140289293904615 = makeCons(symlist, x140289293904583);
Obj x140289293904679 = makeCons(x140289293904615, Nil);
Obj x140289293904711 = makeCons(x140289293902183, x140289293904679);
Obj x140289293904743 = makeCons(symlambda, x140289293904711);
Obj x140289293904807 = makeCons(x140289293904743, Nil);
Obj x140289293904839 = makeCons(symb, x140289293904807);
Obj x140289293904871 = makeCons(symtailify, x140289293904839);
Obj x140289293905831 = makeCons(sym_37closure, Nil);
Obj x140289293905863 = makeCons(symquote, x140289293905831);
Obj x140289293874055 = makeCons(symlambda, Nil);
Obj x140289293874087 = makeCons(symquote, x140289293874055);
Obj x140289293874535 = makeCons(symbody, Nil);
Obj x140289293874567 = makeCons(symargs, x140289293874535);
Obj x140289293874599 = makeCons(x140289293874087, x140289293874567);
Obj x140289293874631 = makeCons(symlist, x140289293874599);
Obj x140289293874887 = makeCons(symfrees, Nil);
Obj x140289293874919 = makeCons(x140289293874631, x140289293874887);
Obj x140289293874951 = makeCons(x140289293905863, x140289293874919);
Obj x140289293874983 = makeCons(symlist_45rest, x140289293874951);
Obj x140289293876679 = makeCons(sym_37closure, Nil);
Obj x140289293876711 = makeCons(symquote, x140289293876679);
Obj x140289293836711 = makeCons(symlambda, Nil);
Obj x140289293836743 = makeCons(symquote, x140289293836711);
Obj x140289293837735 = makeCons(symid, Nil);
Obj x140289293837767 = makeCons(symbody, x140289293837735);
Obj x140289293837799 = makeCons(symtailify, x140289293837767);
Obj x140289293837863 = makeCons(x140289293837799, Nil);
Obj x140289293837895 = makeCons(symargs, x140289293837863);
Obj x140289293837927 = makeCons(x140289293836743, x140289293837895);
Obj x140289293837959 = makeCons(symlist, x140289293837927);
Obj x140289293838215 = makeCons(symfrees, Nil);
Obj x140289293838247 = makeCons(x140289293837959, x140289293838215);
Obj x140289293838279 = makeCons(x140289293876711, x140289293838247);
Obj x140289293838311 = makeCons(symlist_45rest, x140289293838279);
Obj x140289293838375 = makeCons(x140289293838311, Nil);
Obj x140289293838407 = makeCons(symnext, x140289293838375);
Obj x140289293839207 = makeCons(symargs, Nil);
Obj x140289293839239 = makeCons(symf, x140289293839207);
Obj x140289293839271 = makeCons(symlist_45rest, x140289293839239);
Obj x140289293828519 = makeCons(symargs, Nil);
Obj x140289293828551 = makeCons(symf, x140289293828519);
Obj x140289293828583 = makeCons(symlist_45rest, x140289293828551);
Obj x140289293828999 = makeCons(symlist, Nil);
Obj x140289293829255 = makeCons(symnext, Nil);
Obj x140289293829287 = makeCons(x140289293828999, x140289293829255);
Obj x140289293829319 = makeCons(x140289293828583, x140289293829287);
Obj x140289293829351 = makeCons(symtailify_45list, x140289293829319);
Obj x140289293829415 = makeCons(x140289293829351, Nil);
Obj x140289293829447 = makeCons(sym_61_62, x140289293829415);
Obj x140289293829479 = makeCons(symnext, x140289293829447);
Obj x140289293829511 = makeCons(x140289293839271, x140289293829479);
Obj x140289293829543 = makeCons(x140289293838407, x140289293829511);
Obj x140289293829575 = makeCons(sym_61_62, x140289293829543);
Obj x140289293829607 = makeCons(symnext, x140289293829575);
Obj x140289293829639 = makeCons(x140289293874983, x140289293829607);
Obj x140289293829671 = makeCons(x140289293904871, x140289293829639);
Obj x140289293829703 = makeCons(sym_61_62, x140289293829671);
Obj x140289293829735 = makeCons(symnext, x140289293829703);
Obj x140289293829767 = makeCons(x140289293998791, x140289293829735);
Obj x140289293829799 = makeCons(x140289293997031, x140289293829767);
Obj x140289293829831 = makeCons(sym_61_62, x140289293829799);
Obj x140289293829863 = makeCons(symnext, x140289293829831);
Obj x140289293829895 = makeCons(x140289294121927, x140289293829863);
Obj x140289293829927 = makeCons(x140289294120327, x140289293829895);
Obj x140289293829959 = makeCons(sym_61_62, x140289293829927);
Obj x140289293829991 = makeCons(symnext, x140289293829959);
Obj x140289293830023 = makeCons(x140289294205287, x140289293829991);
Obj x140289293830055 = makeCons(x140289294608935, x140289293830023);
Obj x140289293830087 = makeCons(symwhere, x140289293830055);
Obj x140289293830119 = makeCons(symx, x140289293830087);
Obj x140289293830151 = makeCons(sym_61_62, x140289293830119);
Obj x140289293830183 = makeCons(sym__, x140289293830151);
Obj x140289293830215 = makeCons(symx, x140289293830183);
Obj x140289293830247 = makeCons(x140289294607079, x140289293830215);
Obj x140289293830279 = makeCons(symwhere, x140289293830247);
Obj x140289293830311 = makeCons(x140289294621159, x140289293830279);
Obj x140289293830343 = makeCons(sym_61_62, x140289293830311);
Obj x140289293830375 = makeCons(symnext, x140289293830343);
Obj x140289293830407 = makeCons(symx, x140289293830375);
Obj x140289293830439 = makeCons(symtailify, x140289293830407);
Obj x140289293830471 = makeCons(symfunc, x140289293830439);
PUSH_CONT_0(co, 5, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289293830471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140289293830503 = __arg1;
pushCont(co, 6, clofun1, 1, x140289293830503);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140289293830695 = __arg1;
Obj x140289293830503= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 7, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289293830503;
__arg2 = x140289293830695;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140289293830727 = __arg1;
Obj x140289293831879 = makeCons(symlist, Nil);
Obj x140289293784455 = makeCons(symls, Nil);
Obj x140289293784487 = makeCons(symreverse, x140289293784455);
Obj x140289293786311 = makeCons(symexp, Nil);
Obj x140289293786343 = makeCons(symcar, x140289293786311);
Obj x140289293786407 = makeCons(x140289293786343, Nil);
Obj x140289293786439 = makeCons(sympair_63, x140289293786407);
Obj x140289293746439 = makeCons(symexp, Nil);
Obj x140289293746471 = makeCons(symcaar, x140289293746439);
Obj x140289293747079 = makeCons(sym_37builtin, Nil);
Obj x140289293747111 = makeCons(symquote, x140289293747079);
Obj x140289293747175 = makeCons(x140289293747111, Nil);
Obj x140289293747207 = makeCons(x140289293746471, x140289293747175);
Obj x140289293747239 = makeCons(sym_61, x140289293747207);
Obj x140289293747303 = makeCons(x140289293747239, Nil);
Obj x140289293747335 = makeCons(x140289293786439, x140289293747303);
Obj x140289293747367 = makeCons(symand, x140289293747335);
Obj x140289293748167 = makeCons(symnext, Nil);
Obj x140289293748199 = makeCons(symexp, x140289293748167);
Obj x140289293748231 = makeCons(symwrap_45var, x140289293748199);
Obj x140289293748295 = makeCons(x140289293748231, Nil);
Obj x140289293748327 = makeCons(x140289293747367, x140289293748295);
Obj x140289293749287 = makeCons(symid, Nil);
Obj x140289293749319 = makeCons(symnext, x140289293749287);
Obj x140289293749351 = makeCons(sym_61, x140289293749319);
Obj x140289293525031 = makeCons(symtailcall, Nil);
Obj x140289293525063 = makeCons(symquote, x140289293525031);
Obj x140289293525319 = makeCons(symexp, Nil);
Obj x140289293525351 = makeCons(x140289293525063, x140289293525319);
Obj x140289293525383 = makeCons(symlist, x140289293525351);
Obj x140289293525447 = makeCons(x140289293525383, Nil);
Obj x140289293525479 = makeCons(x140289293749351, x140289293525447);
Obj x140289293526791 = makeCons(symgensym, Nil);
Obj x140289293527751 = makeCons(symcall, Nil);
Obj x140289293527783 = makeCons(symquote, x140289293527751);
Obj x140289293528935 = makeCons(symcontinuation, Nil);
Obj x140289293528967 = makeCons(symquote, x140289293528935);
Obj x140289293455847 = makeCons(symval, Nil);
Obj x140289293455879 = makeCons(symlist, x140289293455847);
Obj x140289293456487 = makeCons(symval, Nil);
Obj x140289293456519 = makeCons(symnext, x140289293456487);
Obj x140289293456583 = makeCons(x140289293456519, Nil);
Obj x140289293456615 = makeCons(x140289293455879, x140289293456583);
Obj x140289293456647 = makeCons(x140289293528967, x140289293456615);
Obj x140289293456679 = makeCons(symlist, x140289293456647);
Obj x140289293456743 = makeCons(x140289293456679, Nil);
Obj x140289293456775 = makeCons(symexp, x140289293456743);
Obj x140289293456807 = makeCons(x140289293527783, x140289293456775);
Obj x140289293456839 = makeCons(symlist, x140289293456807);
Obj x140289293456903 = makeCons(x140289293456839, Nil);
Obj x140289293456935 = makeCons(x140289293526791, x140289293456903);
Obj x140289293456967 = makeCons(symval, x140289293456935);
Obj x140289293456999 = makeCons(symlet, x140289293456967);
Obj x140289293457063 = makeCons(x140289293456999, Nil);
Obj x140289293457095 = makeCons(True, x140289293457063);
Obj x140289293457159 = makeCons(x140289293457095, Nil);
Obj x140289293457191 = makeCons(x140289293525479, x140289293457159);
Obj x140289293457223 = makeCons(x140289293748327, x140289293457191);
Obj x140289293457255 = makeCons(symcond, x140289293457223);
Obj x140289293457319 = makeCons(x140289293457255, Nil);
Obj x140289293457351 = makeCons(x140289293784487, x140289293457319);
Obj x140289293457383 = makeCons(symexp, x140289293457351);
Obj x140289293457415 = makeCons(symlet, x140289293457383);
Obj x140289293458215 = makeCons(symtl, Nil);
Obj x140289293458247 = makeCons(symhd, x140289293458215);
Obj x140289293458279 = makeCons(symlist_45rest, x140289293458247);
Obj x140289293181639 = makeCons(symhd1, Nil);
Obj x140289293182983 = makeCons(symls, Nil);
Obj x140289293183015 = makeCons(symhd1, x140289293182983);
Obj x140289293183047 = makeCons(symlist_45rest, x140289293183015);
Obj x140289293183303 = makeCons(symnext, Nil);
Obj x140289293183335 = makeCons(x140289293183047, x140289293183303);
Obj x140289293183367 = makeCons(symtl, x140289293183335);
Obj x140289293183399 = makeCons(symtailify_45list, x140289293183367);
Obj x140289293183463 = makeCons(x140289293183399, Nil);
Obj x140289293183495 = makeCons(x140289293181639, x140289293183463);
Obj x140289293183527 = makeCons(symlambda, x140289293183495);
Obj x140289293183591 = makeCons(x140289293183527, Nil);
Obj x140289293183623 = makeCons(symhd, x140289293183591);
Obj x140289293183655 = makeCons(symtailify, x140289293183623);
Obj x140289293183719 = makeCons(x140289293183655, Nil);
Obj x140289293183751 = makeCons(sym_61_62, x140289293183719);
Obj x140289293183783 = makeCons(symnext, x140289293183751);
Obj x140289293183815 = makeCons(symls, x140289293183783);
Obj x140289293183847 = makeCons(x140289293458279, x140289293183815);
Obj x140289293183879 = makeCons(x140289293457415, x140289293183847);
Obj x140289293183911 = makeCons(sym_61_62, x140289293183879);
Obj x140289293183943 = makeCons(symnext, x140289293183911);
Obj x140289293183975 = makeCons(symls, x140289293183943);
Obj x140289293184007 = makeCons(x140289293831879, x140289293183975);
Obj x140289293184039 = makeCons(symtailify_45list, x140289293184007);
Obj x140289293184071 = makeCons(symfunc, x140289293184039);
PUSH_CONT_0(co, 8, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289293184071;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140289293184103 = __arg1;
pushCont(co, 9, clofun1, 1, x140289293184103);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140289293184295 = __arg1;
Obj x140289293184103= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 10, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289293184103;
__arg2 = x140289293184295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140289293184327 = __arg1;
Obj x140289292826183 = makeCons(symx, Nil);
Obj x140289292826215 = makeCons(symconvert_45protect_63, x140289292826183);
Obj x140289292827783 = makeCons(symvar, Nil);
Obj x140289292827815 = makeCons(symsymbol_63, x140289292827783);
Obj x140289292816679 = makeCons(symlambda, Nil);
Obj x140289292816711 = makeCons(symquote, x140289292816679);
Obj x140289292817159 = makeCons(symbody, Nil);
Obj x140289292817191 = makeCons(symargs, x140289292817159);
Obj x140289292817223 = makeCons(x140289292816711, x140289292817191);
Obj x140289292817255 = makeCons(symlist, x140289292817223);
Obj x140289292818407 = makeCons(symlambda, Nil);
Obj x140289292818439 = makeCons(symquote, x140289292818407);
Obj x140289292819431 = makeCons(symbody, Nil);
Obj x140289292819463 = makeCons(symfvs, x140289292819431);
Obj x140289292819495 = makeCons(symexplicit_45stack, x140289292819463);
Obj x140289292819559 = makeCons(x140289292819495, Nil);
Obj x140289292819591 = makeCons(symargs, x140289292819559);
Obj x140289292819623 = makeCons(x140289292818439, x140289292819591);
Obj x140289292819655 = makeCons(symlist, x140289292819623);
Obj x140289292775751 = makeCons(symcontinuation, Nil);
Obj x140289292775783 = makeCons(symquote, x140289292775751);
Obj x140289292776231 = makeCons(symbody, Nil);
Obj x140289292776263 = makeCons(symval, x140289292776231);
Obj x140289292776295 = makeCons(x140289292775783, x140289292776263);
Obj x140289292776327 = makeCons(symlist, x140289292776295);
Obj x140289292778023 = makeCons(symbody, Nil);
Obj x140289292778055 = makeCons(symfree_45vars, x140289292778023);
Obj x140289292778311 = makeCons(symval, Nil);
Obj x140289292778343 = makeCons(x140289292778055, x140289292778311);
Obj x140289292778375 = makeCons(symdiff, x140289292778343);
Obj x140289292734823 = makeCons(symfvs, Nil);
Obj x140289292734855 = makeCons(symexplicit_45stack, x140289292734823);
Obj x140289292735111 = makeCons(symfvs1, Nil);
Obj x140289292735143 = makeCons(x140289292734855, x140289292735111);
Obj x140289292735175 = makeCons(symmap, x140289292735143);
Obj x140289292736135 = makeCons(sym_37continuation, Nil);
Obj x140289292736167 = makeCons(symquote, x140289292736135);
Obj x140289292737127 = makeCons(symlambda, Nil);
Obj x140289292737159 = makeCons(symquote, x140289292737127);
Obj x140289292738151 = makeCons(symbody, Nil);
Obj x140289292738183 = makeCons(symfvs1, x140289292738151);
Obj x140289292738215 = makeCons(symexplicit_45stack, x140289292738183);
Obj x140289292738279 = makeCons(x140289292738215, Nil);
Obj x140289292738311 = makeCons(symval, x140289292738279);
Obj x140289292738343 = makeCons(x140289292737159, x140289292738311);
Obj x140289292738375 = makeCons(symlist, x140289292738343);
Obj x140289292730439 = makeCons(symfvs2, Nil);
Obj x140289292730471 = makeCons(x140289292738375, x140289292730439);
Obj x140289292730503 = makeCons(x140289292736167, x140289292730471);
Obj x140289292730535 = makeCons(symlist_45rest, x140289292730503);
Obj x140289292730599 = makeCons(x140289292730535, Nil);
Obj x140289292730631 = makeCons(x140289292735175, x140289292730599);
Obj x140289292730663 = makeCons(symfvs2, x140289292730631);
Obj x140289292730695 = makeCons(symlet, x140289292730663);
Obj x140289292730759 = makeCons(x140289292730695, Nil);
Obj x140289292730791 = makeCons(x140289292778375, x140289292730759);
Obj x140289292730823 = makeCons(symfvs1, x140289292730791);
Obj x140289292730855 = makeCons(symlet, x140289292730823);
Obj x140289292732007 = makeCons(symcall, Nil);
Obj x140289292732039 = makeCons(symquote, x140289292732007);
Obj x140289292732487 = makeCons(symcont, Nil);
Obj x140289292732519 = makeCons(symexp, x140289292732487);
Obj x140289292732551 = makeCons(x140289292732039, x140289292732519);
Obj x140289292732583 = makeCons(symlist, x140289292732551);
Obj x140289292733735 = makeCons(symcall, Nil);
Obj x140289292733767 = makeCons(symquote, x140289292733735);
Obj x140289292701959 = makeCons(symfvs, Nil);
Obj x140289292701991 = makeCons(symexplicit_45stack, x140289292701959);
Obj x140289292702247 = makeCons(symexp, Nil);
Obj x140289292702279 = makeCons(x140289292701991, x140289292702247);
Obj x140289292702311 = makeCons(symmap, x140289292702279);
Obj x140289292703111 = makeCons(symcont, Nil);
Obj x140289292703143 = makeCons(symfvs, x140289292703111);
Obj x140289292703175 = makeCons(symexplicit_45stack, x140289292703143);
Obj x140289292703239 = makeCons(x140289292703175, Nil);
Obj x140289292703271 = makeCons(x140289292702311, x140289292703239);
Obj x140289292703303 = makeCons(x140289292733767, x140289292703271);
Obj x140289292703335 = makeCons(symlist, x140289292703303);
Obj x140289292704327 = makeCons(symargs, Nil);
Obj x140289292704359 = makeCons(symf, x140289292704327);
Obj x140289292704391 = makeCons(symlist_45rest, x140289292704359);
Obj x140289292705543 = makeCons(symfvs, Nil);
Obj x140289292705575 = makeCons(symexplicit_45stack, x140289292705543);
Obj x140289292608071 = makeCons(symargs, Nil);
Obj x140289292608103 = makeCons(symf, x140289292608071);
Obj x140289292608135 = makeCons(symlist_45rest, x140289292608103);
Obj x140289292608199 = makeCons(x140289292608135, Nil);
Obj x140289292608231 = makeCons(x140289292705575, x140289292608199);
Obj x140289292608263 = makeCons(symmap, x140289292608231);
Obj x140289292608327 = makeCons(x140289292608263, Nil);
Obj x140289292608359 = makeCons(sym_61_62, x140289292608327);
Obj x140289292608391 = makeCons(x140289292704391, x140289292608359);
Obj x140289292608423 = makeCons(symfvs, x140289292608391);
Obj x140289292608455 = makeCons(x140289292703335, x140289292608423);
Obj x140289292608487 = makeCons(sym_61_62, x140289292608455);
Obj x140289292608519 = makeCons(x140289292732583, x140289292608487);
Obj x140289292608551 = makeCons(symfvs, x140289292608519);
Obj x140289292608583 = makeCons(x140289292730855, x140289292608551);
Obj x140289292608615 = makeCons(sym_61_62, x140289292608583);
Obj x140289292608647 = makeCons(x140289292776327, x140289292608615);
Obj x140289292608679 = makeCons(symfvs, x140289292608647);
Obj x140289292608711 = makeCons(x140289292819655, x140289292608679);
Obj x140289292608743 = makeCons(sym_61_62, x140289292608711);
Obj x140289292608775 = makeCons(x140289292817255, x140289292608743);
Obj x140289292608807 = makeCons(symfvs, x140289292608775);
Obj x140289292608839 = makeCons(x140289292827815, x140289292608807);
Obj x140289292608871 = makeCons(symwhere, x140289292608839);
Obj x140289292608903 = makeCons(symvar, x140289292608871);
Obj x140289292608935 = makeCons(sym_61_62, x140289292608903);
Obj x140289292608967 = makeCons(symvar, x140289292608935);
Obj x140289292608999 = makeCons(symfvs, x140289292608967);
Obj x140289292609031 = makeCons(x140289292826215, x140289292608999);
Obj x140289292609063 = makeCons(symwhere, x140289292609031);
Obj x140289292609095 = makeCons(symx, x140289292609063);
Obj x140289292609127 = makeCons(sym_61_62, x140289292609095);
Obj x140289292609159 = makeCons(symx, x140289292609127);
Obj x140289292609191 = makeCons(sym__, x140289292609159);
Obj x140289292609223 = makeCons(symexplicit_45stack, x140289292609191);
Obj x140289292609255 = makeCons(symfunc, x140289292609223);
PUSH_CONT_0(co, 11, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289292609255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140289292609287 = __arg1;
pushCont(co, 12, clofun1, 1, x140289292609287);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140289292609479 = __arg1;
Obj x140289292609287= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 13, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289292609287;
__arg2 = x140289292609479;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140289292609511 = __arg1;
Obj x140289292572903 = makeCons(symlambda, Nil);
Obj x140289292572935 = makeCons(symquote, x140289292572903);
Obj x140289292573383 = makeCons(symbody, Nil);
Obj x140289292573415 = makeCons(symparams, x140289292573383);
Obj x140289292573447 = makeCons(x140289292572935, x140289292573415);
Obj x140289292573479 = makeCons(symlist, x140289292573447);
Obj x140289292573735 = makeCons(symfvs, Nil);
Obj x140289292573767 = makeCons(x140289292573479, x140289292573735);
Obj x140289292573799 = makeCons(symclo_45or_45cont, x140289292573767);
Obj x140289292573831 = makeCons(symlist_45rest, x140289292573799);
Obj x140289292546823 = makeCons(symbody, Nil);
Obj x140289292546855 = makeCons(symv, x140289292546823);
Obj x140289292546887 = makeCons(symcollect_45lambda, x140289292546855);
Obj x140289292547879 = makeCons(MAKE_NUMBER(0), Nil);
Obj x140289292547911 = makeCons(symv, x140289292547879);
Obj x140289292547943 = makeCons(symvector_45ref, x140289292547911);
Obj x140289292549447 = makeCons(sym_37closure, Nil);
Obj x140289292549479 = makeCons(symquote, x140289292549447);
Obj x140289292549543 = makeCons(x140289292549479, Nil);
Obj x140289292549575 = makeCons(symclo_45or_45cont, x140289292549543);
Obj x140289292549607 = makeCons(sym_61, x140289292549575);
Obj x140289292526887 = makeCons(symlambda, Nil);
Obj x140289292526919 = makeCons(symquote, x140289292526887);
Obj x140289292527559 = makeCons(symbody1, Nil);
Obj x140289292527591 = makeCons(Nil, x140289292527559);
Obj x140289292527623 = makeCons(symparams, x140289292527591);
Obj x140289292527655 = makeCons(x140289292526919, x140289292527623);
Obj x140289292527687 = makeCons(symlist, x140289292527655);
Obj x140289292527751 = makeCons(x140289292527687, Nil);
Obj x140289292527783 = makeCons(symv, x140289292527751);
Obj x140289292527815 = makeCons(symappend_45result, x140289292527783);
Obj x140289292529159 = makeCons(symparams, Nil);
Obj x140289292529191 = makeCons(symlength, x140289292529159);
Obj x140289292529447 = makeCons(symfvs, Nil);
Obj x140289292529479 = makeCons(x140289292529191, x140289292529447);
Obj x140289292529511 = makeCons(symcur, x140289292529479);
Obj x140289292529543 = makeCons(symclo_45or_45cont, x140289292529511);
Obj x140289292529575 = makeCons(symlist_45rest, x140289292529543);
Obj x140289292529639 = makeCons(x140289292529575, Nil);
Obj x140289292509191 = makeCons(x140289292527815, x140289292529639);
Obj x140289292509223 = makeCons(symbegin, x140289292509191);
Obj x140289292511079 = makeCons(symlambda, Nil);
Obj x140289292511111 = makeCons(symquote, x140289292511079);
Obj x140289292511751 = makeCons(symbody1, Nil);
Obj x140289292511783 = makeCons(symfvs, x140289292511751);
Obj x140289292511815 = makeCons(symparams, x140289292511783);
Obj x140289292511847 = makeCons(x140289292511111, x140289292511815);
Obj x140289292511879 = makeCons(symlist, x140289292511847);
Obj x140289292511943 = makeCons(x140289292511879, Nil);
Obj x140289292511975 = makeCons(symv, x140289292511943);
Obj x140289292512007 = makeCons(symappend_45result, x140289292511975);
Obj x140289292512999 = makeCons(symfvs, Nil);
Obj x140289292513031 = makeCons(symcur, x140289292512999);
Obj x140289292513063 = makeCons(symclo_45or_45cont, x140289292513031);
Obj x140289292513095 = makeCons(symlist_45rest, x140289292513063);
Obj x140289292513159 = makeCons(x140289292513095, Nil);
Obj x140289292513191 = makeCons(x140289292512007, x140289292513159);
Obj x140289292513223 = makeCons(symbegin, x140289292513191);
Obj x140289292124167 = makeCons(x140289292513223, Nil);
Obj x140289292124199 = makeCons(x140289292509223, x140289292124167);
Obj x140289292124231 = makeCons(x140289292549607, x140289292124199);
Obj x140289292124263 = makeCons(symif, x140289292124231);
Obj x140289292124327 = makeCons(x140289292124263, Nil);
Obj x140289292124359 = makeCons(x140289292547943, x140289292124327);
Obj x140289292124391 = makeCons(symcur, x140289292124359);
Obj x140289292124423 = makeCons(x140289292546887, x140289292124391);
Obj x140289292124455 = makeCons(symbody1, x140289292124423);
Obj x140289292124487 = makeCons(symlet, x140289292124455);
Obj x140289292126183 = makeCons(sym_37closure, Nil);
Obj x140289292126215 = makeCons(symquote, x140289292126183);
Obj x140289292126279 = makeCons(x140289292126215, Nil);
Obj x140289292126311 = makeCons(symclo_45or_45cont, x140289292126279);
Obj x140289292126343 = makeCons(sym_61, x140289292126311);
Obj x140289292127527 = makeCons(sym_37continuation, Nil);
Obj x140289292127559 = makeCons(symquote, x140289292127527);
Obj x140289292127623 = makeCons(x140289292127559, Nil);
Obj x140289292127655 = makeCons(symclo_45or_45cont, x140289292127623);
Obj x140289292127687 = makeCons(sym_61, x140289292127655);
Obj x140289292127751 = makeCons(x140289292127687, Nil);
Obj x140289292127783 = makeCons(x140289292126343, x140289292127751);
Obj x140289292127815 = makeCons(symor, x140289292127783);
Obj x140289292105031 = makeCons(syme, Nil);
Obj x140289292105863 = makeCons(syme, Nil);
Obj x140289292105895 = makeCons(symv, x140289292105863);
Obj x140289292105927 = makeCons(symcollect_45lambda, x140289292105895);
Obj x140289292105991 = makeCons(x140289292105927, Nil);
Obj x140289292106023 = makeCons(x140289292105031, x140289292105991);
Obj x140289292106055 = makeCons(symlambda, x140289292106023);
Obj x140289292106311 = makeCons(symf_45args, Nil);
Obj x140289292106343 = makeCons(x140289292106055, x140289292106311);
Obj x140289292106375 = makeCons(symmap, x140289292106343);
Obj x140289292107207 = makeCons(symf_45args, Nil);
Obj x140289292107239 = makeCons(symcons_63, x140289292107207);
Obj x140289292099879 = makeCons(symx, Nil);
Obj x140289292099911 = makeCons(sym_61_62, x140289292099879);
Obj x140289292099943 = makeCons(symx, x140289292099911);
Obj x140289292099975 = makeCons(symv, x140289292099943);
Obj x140289292100007 = makeCons(x140289292107239, x140289292099975);
Obj x140289292100135 = makeCons(symwhere, x140289292100007);
Obj x140289292100167 = makeCons(x140289292106375, x140289292100135);
Obj x140289292100199 = makeCons(sym_61_62, x140289292100167);
Obj x140289292100231 = makeCons(symf_45args, x140289292100199);
Obj x140289292100263 = makeCons(symv, x140289292100231);
Obj x140289292100295 = makeCons(x140289292127815, x140289292100263);
Obj x140289292100327 = makeCons(symwhere, x140289292100295);
Obj x140289292100455 = makeCons(x140289292124487, x140289292100327);
Obj x140289292100487 = makeCons(sym_61_62, x140289292100455);
Obj x140289292100519 = makeCons(x140289292573831, x140289292100487);
Obj x140289292100551 = makeCons(symv, x140289292100519);
Obj x140289292100583 = makeCons(symcollect_45lambda, x140289292100551);
Obj x140289292100615 = makeCons(symfunc, x140289292100583);
PUSH_CONT_0(co, 14, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289292100615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140289292100647 = __arg1;
pushCont(co, 15, clofun1, 1, x140289292100647);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140289292100839 = __arg1;
Obj x140289292100647= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 16, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289292100647;
__arg2 = x140289292100839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140289292100871 = __arg1;
Obj x140289292102311 = makeCons(symval, Nil);
Obj x140289292102343 = makeCons(symv, x140289292102311);
Obj x140289291518151 = makeCons(MAKE_NUMBER(0), Nil);
Obj x140289291518183 = makeCons(symv, x140289291518151);
Obj x140289291518215 = makeCons(symvector_45ref, x140289291518183);
Obj x140289291519911 = makeCons(MAKE_NUMBER(1), Nil);
Obj x140289291519943 = makeCons(symv, x140289291519911);
Obj x140289291519975 = makeCons(symvector_45ref, x140289291519943);
Obj x140289291521703 = makeCons(symval, Nil);
Obj x140289291521735 = makeCons(symidx, x140289291521703);
Obj x140289291521767 = makeCons(symlist, x140289291521735);
Obj x140289291522023 = makeCons(symcur, Nil);
Obj x140289291476999 = makeCons(x140289291521767, x140289291522023);
Obj x140289291477031 = makeCons(symcons, x140289291476999);
Obj x140289291479015 = makeCons(MAKE_NUMBER(1), Nil);
Obj x140289291479047 = makeCons(symidx, x140289291479015);
Obj x140289291479079 = makeCons(sym_43, x140289291479047);
Obj x140289291479143 = makeCons(x140289291479079, Nil);
Obj x140289291479175 = makeCons(MAKE_NUMBER(0), x140289291479143);
Obj x140289291479207 = makeCons(symv, x140289291479175);
Obj x140289291479239 = makeCons(symvector_45set_33, x140289291479207);
Obj x140289291480935 = makeCons(symcur1, Nil);
Obj x140289291480967 = makeCons(MAKE_NUMBER(1), x140289291480935);
Obj x140289291480999 = makeCons(symv, x140289291480967);
Obj x140289291481031 = makeCons(symvector_45set_33, x140289291480999);
Obj x140289291460615 = makeCons(x140289291481031, Nil);
Obj x140289291460647 = makeCons(x140289291479239, x140289291460615);
Obj x140289291460679 = makeCons(symbegin, x140289291460647);
Obj x140289291460743 = makeCons(x140289291460679, Nil);
Obj x140289291460775 = makeCons(x140289291477031, x140289291460743);
Obj x140289291460807 = makeCons(symcur1, x140289291460775);
Obj x140289291460839 = makeCons(symlet, x140289291460807);
Obj x140289291460903 = makeCons(x140289291460839, Nil);
Obj x140289291460935 = makeCons(x140289291519975, x140289291460903);
Obj x140289291460967 = makeCons(symcur, x140289291460935);
Obj x140289291460999 = makeCons(x140289291518215, x140289291460967);
Obj x140289291461031 = makeCons(symidx, x140289291460999);
Obj x140289291461063 = makeCons(symlet, x140289291461031);
Obj x140289291461127 = makeCons(x140289291461063, Nil);
Obj x140289291461159 = makeCons(x140289292102343, x140289291461127);
Obj x140289291461191 = makeCons(symappend_45result, x140289291461159);
Obj x140289291461223 = makeCons(symdefun, x140289291461191);
PUSH_CONT_0(co, 17, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291461223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140289291461255 = __arg1;
pushCont(co, 18, clofun1, 1, x140289291461255);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140289291461447 = __arg1;
Obj x140289291461255= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 19, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291461255;
__arg2 = x140289291461447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140289291461479 = __arg1;
Obj x140289291462855 = makeCons(symk, Nil);
Obj x140289291462887 = makeCons(symx, x140289291462855);
Obj x140289291463943 = makeCons(symgensym, Nil);
Obj x140289291448615 = makeCons(symlet, Nil);
Obj x140289291448647 = makeCons(symquote, x140289291448615);
Obj x140289291449735 = makeCons(symtmp, Nil);
Obj x140289291449767 = makeCons(symk, x140289291449735);
Obj x140289291449831 = makeCons(x140289291449767, Nil);
Obj x140289291449863 = makeCons(symx, x140289291449831);
Obj x140289291449895 = makeCons(symtmp, x140289291449863);
Obj x140289291449927 = makeCons(x140289291448647, x140289291449895);
Obj x140289291449959 = makeCons(symlist, x140289291449927);
Obj x140289291450023 = makeCons(x140289291449959, Nil);
Obj x140289291450055 = makeCons(x140289291463943, x140289291450023);
Obj x140289291450087 = makeCons(symtmp, x140289291450055);
Obj x140289291450119 = makeCons(symlet, x140289291450087);
Obj x140289291450183 = makeCons(x140289291450119, Nil);
Obj x140289291450215 = makeCons(x140289291462887, x140289291450183);
Obj x140289291450247 = makeCons(symwrap_45var, x140289291450215);
Obj x140289291450279 = makeCons(symdefun, x140289291450247);
PUSH_CONT_0(co, 20, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291450279;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140289291450311 = __arg1;
pushCont(co, 21, clofun1, 1, x140289291450311);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140289291450503 = __arg1;
Obj x140289291450311= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 22, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291450311;
__arg2 = x140289291450503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140289291450535 = __arg1;
Obj x140289291428615 = makeCons(symlist, Nil);
Obj x140289291430791 = makeCons(symmore, Nil);
Obj x140289291430823 = makeCons(symx, x140289291430791);
Obj x140289291430855 = makeCons(symlist_45rest, x140289291430823);
Obj x140289291396071 = makeCons(MAKE_NUMBER(3), Nil);
Obj x140289291396103 = makeCons(symi, x140289291396071);
Obj x140289291396135 = makeCons(sym_62, x140289291396103);
Obj x140289291396199 = makeCons(x140289291396135, Nil);
Obj x140289291396231 = makeCons(symnot, x140289291396199);
Obj x140289291397479 = makeCons(makeCString("__arg"), Nil);
Obj x140289291397511 = makeCons(symw, x140289291397479);
Obj x140289291397543 = makeCons(symgenerate_45str, x140289291397511);
Obj x140289291398439 = makeCons(symi, Nil);
Obj x140289291398471 = makeCons(symw, x140289291398439);
Obj x140289291398503 = makeCons(symgenerate_45num, x140289291398471);
Obj x140289291398663 = makeCons(x140289291398503, Nil);
Obj x140289291398695 = makeCons(x140289291397543, x140289291398663);
Obj x140289291398727 = makeCons(symbegin, x140289291398695);
Obj x140289291388231 = makeCons(makeCString("co->args["), Nil);
Obj x140289291388263 = makeCons(symw, x140289291388231);
Obj x140289291388295 = makeCons(symgenerate_45str, x140289291388263);
Obj x140289291389095 = makeCons(symi, Nil);
Obj x140289291389127 = makeCons(symw, x140289291389095);
Obj x140289291389159 = makeCons(symgenerate_45num, x140289291389127);
Obj x140289291389959 = makeCons(makeCString("]"), Nil);
Obj x140289291389991 = makeCons(symw, x140289291389959);
Obj x140289291390023 = makeCons(symgenerate_45str, x140289291389991);
Obj x140289291390087 = makeCons(x140289291390023, Nil);
Obj x140289291390119 = makeCons(x140289291389159, x140289291390087);
Obj x140289291390151 = makeCons(x140289291388295, x140289291390119);
Obj x140289291390247 = makeCons(symbegin, x140289291390151);
Obj x140289291390311 = makeCons(x140289291390247, Nil);
Obj x140289291390343 = makeCons(x140289291398727, x140289291390311);
Obj x140289291390375 = makeCons(x140289291396231, x140289291390343);
Obj x140289291390407 = makeCons(symif, x140289291390375);
Obj x140289291358567 = makeCons(makeCString(" = "), Nil);
Obj x140289291358599 = makeCons(symw, x140289291358567);
Obj x140289291358631 = makeCons(symgenerate_45str, x140289291358599);
Obj x140289291360007 = makeCons(symx, Nil);
Obj x140289291360039 = makeCons(symw, x140289291360007);
Obj x140289291360071 = makeCons(Nil, x140289291360039);
Obj x140289291360103 = makeCons(symself, x140289291360071);
Obj x140289291360135 = makeCons(symgenerate_45inst, x140289291360103);
Obj x140289291361127 = makeCons(makeCString(";\n"), Nil);
Obj x140289291361159 = makeCons(symw, x140289291361127);
Obj x140289291361191 = makeCons(symgenerate_45str, x140289291361159);
Obj x140289291334247 = makeCons(MAKE_NUMBER(1), Nil);
Obj x140289291334279 = makeCons(symi, x140289291334247);
Obj x140289291334311 = makeCons(sym_43, x140289291334279);
Obj x140289291334567 = makeCons(symmore, Nil);
Obj x140289291334599 = makeCons(x140289291334311, x140289291334567);
Obj x140289291334631 = makeCons(symw, x140289291334599);
Obj x140289291334663 = makeCons(symself, x140289291334631);
Obj x140289291334695 = makeCons(symgenerate_45call_45list, x140289291334663);
Obj x140289291334759 = makeCons(x140289291334695, Nil);
Obj x140289291334791 = makeCons(x140289291361191, x140289291334759);
Obj x140289291334823 = makeCons(x140289291360135, x140289291334791);
Obj x140289291334855 = makeCons(x140289291358631, x140289291334823);
Obj x140289291334951 = makeCons(x140289291390407, x140289291334855);
Obj x140289291334983 = makeCons(symbegin, x140289291334951);
Obj x140289291335047 = makeCons(x140289291334983, Nil);
Obj x140289291335079 = makeCons(sym_61_62, x140289291335047);
Obj x140289291335111 = makeCons(x140289291430855, x140289291335079);
Obj x140289291335143 = makeCons(symi, x140289291335111);
Obj x140289291335175 = makeCons(symw, x140289291335143);
Obj x140289291335207 = makeCons(symself, x140289291335175);
Obj x140289291335239 = makeCons(Nil, x140289291335207);
Obj x140289291335271 = makeCons(sym_61_62, x140289291335239);
Obj x140289291335303 = makeCons(x140289291428615, x140289291335271);
Obj x140289291335335 = makeCons(symi, x140289291335303);
Obj x140289291335495 = makeCons(symw, x140289291335335);
Obj x140289291335527 = makeCons(symself, x140289291335495);
Obj x140289291335559 = makeCons(symgenerate_45call_45list, x140289291335527);
Obj x140289291335591 = makeCons(symfunc, x140289291335559);
PUSH_CONT_0(co, 23, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291335591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140289291335623 = __arg1;
pushCont(co, 24, clofun1, 1, x140289291335623);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140289291335815 = __arg1;
Obj x140289291335623= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 25, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291335623;
__arg2 = x140289291335815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140289291335847 = __arg1;
Obj x140289291337383 = makeCons(symglobals, Nil);
Obj x140289291337415 = makeCons(symsym, x140289291337383);
Obj x140289291322375 = makeCons(symglobals, Nil);
Obj x140289291322407 = makeCons(symvalue, x140289291322375);
Obj x140289291323751 = makeCons(symval, Nil);
Obj x140289291323783 = makeCons(symsym, x140289291323751);
Obj x140289291323815 = makeCons(symelem_63, x140289291323783);
Obj x140289291280487 = makeCons(symval, Nil);
Obj x140289291280519 = makeCons(symsym, x140289291280487);
Obj x140289291280551 = makeCons(symcons, x140289291280519);
Obj x140289291280615 = makeCons(x140289291280551, Nil);
Obj x140289291280647 = makeCons(symglobals, x140289291280615);
Obj x140289291280679 = makeCons(symset, x140289291280647);
Obj x140289291280743 = makeCons(x140289291280679, Nil);
Obj x140289291280775 = makeCons(Nil, x140289291280743);
Obj x140289291280807 = makeCons(x140289291323815, x140289291280775);
Obj x140289291280839 = makeCons(symif, x140289291280807);
Obj x140289291280903 = makeCons(x140289291280839, Nil);
Obj x140289291280935 = makeCons(x140289291322407, x140289291280903);
Obj x140289291280967 = makeCons(symval, x140289291280935);
Obj x140289291280999 = makeCons(symlet, x140289291280967);
Obj x140289291281063 = makeCons(x140289291280999, Nil);
Obj x140289291281095 = makeCons(x140289291337415, x140289291281063);
Obj x140289291281191 = makeCons(symadd_45symbol_45to_45list, x140289291281095);
Obj x140289291281223 = makeCons(symdefun, x140289291281191);
PUSH_CONT_0(co, 26, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291281223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140289291281255 = __arg1;
pushCont(co, 27, clofun1, 1, x140289291281255);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140289291281447 = __arg1;
Obj x140289291281255= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 28, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291281255;
__arg2 = x140289291281447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140289291281479 = __arg1;
Obj x140289291283527 = makeCons(symx1, Nil);
Obj x140289291283559 = makeCons(symw, x140289291283527);
Obj x140289291283591 = makeCons(symenv, x140289291283559);
Obj x140289291283623 = makeCons(symself, x140289291283591);
Obj x140289291243687 = makeCons(symx1, Nil);
Obj x140289291243847 = makeCons(symsymbol_63, x140289291243687);
Obj x140289291244647 = makeCons(symx1, Nil);
Obj x140289291244679 = makeCons(symw, x140289291244647);
Obj x140289291244711 = makeCons(symgenerate_45sym, x140289291244679);
Obj x140289291246471 = makeCons(sym_37global, Nil);
Obj x140289291246503 = makeCons(symquote, x140289291246471);
Obj x140289291246759 = makeCons(symx, Nil);
Obj x140289291246919 = makeCons(x140289291246503, x140289291246759);
Obj x140289291246951 = makeCons(symlist, x140289291246919);
Obj x140289291235879 = makeCons(makeCString("globalRef(sym"), Nil);
Obj x140289291235911 = makeCons(symw, x140289291235879);
Obj x140289291235943 = makeCons(symgenerate_45str, x140289291235911);
Obj x140289291236871 = makeCons(symx, Nil);
Obj x140289291236903 = makeCons(symw, x140289291236871);
Obj x140289291236935 = makeCons(symgenerate_45sym, x140289291236903);
Obj x140289291237927 = makeCons(makeCString(")"), Nil);
Obj x140289291237959 = makeCons(symw, x140289291237927);
Obj x140289291237991 = makeCons(symgenerate_45str, x140289291237959);
Obj x140289291238055 = makeCons(x140289291237991, Nil);
Obj x140289291238087 = makeCons(x140289291236935, x140289291238055);
Obj x140289291238119 = makeCons(x140289291235943, x140289291238087);
Obj x140289291238151 = makeCons(symbegin, x140289291238119);
Obj x140289291231815 = makeCons(sym_37closure_45ref, Nil);
Obj x140289291231847 = makeCons(symquote, x140289291231815);
Obj x140289291232167 = makeCons(symidx, Nil);
Obj x140289291232199 = makeCons(x140289291231847, x140289291232167);
Obj x140289291232231 = makeCons(symlist, x140289291232199);
Obj x140289291233415 = makeCons(makeCString("closureRef(co, "), Nil);
Obj x140289291233447 = makeCons(symw, x140289291233415);
Obj x140289291233479 = makeCons(symgenerate_45str, x140289291233447);
Obj x140289291234279 = makeCons(symidx, Nil);
Obj x140289291234311 = makeCons(symw, x140289291234279);
Obj x140289291234343 = makeCons(symgenerate_45num, x140289291234311);
Obj x140289291198727 = makeCons(makeCString(")"), Nil);
Obj x140289291198759 = makeCons(symw, x140289291198727);
Obj x140289291198791 = makeCons(symgenerate_45str, x140289291198759);
Obj x140289291198855 = makeCons(x140289291198791, Nil);
Obj x140289291198887 = makeCons(x140289291234343, x140289291198855);
Obj x140289291198919 = makeCons(x140289291233479, x140289291198887);
Obj x140289291198951 = makeCons(symbegin, x140289291198919);
Obj x140289291199943 = makeCons(sym_37stack_45ref, Nil);
Obj x140289291199975 = makeCons(symquote, x140289291199943);
Obj x140289291200231 = makeCons(symidx, Nil);
Obj x140289291200263 = makeCons(x140289291199975, x140289291200231);
Obj x140289291200295 = makeCons(symlist, x140289291200263);
Obj x140289291201543 = makeCons(makeCString("stackRef(co, "), Nil);
Obj x140289291201575 = makeCons(symw, x140289291201543);
Obj x140289291201607 = makeCons(symgenerate_45str, x140289291201575);
Obj x140289291202471 = makeCons(symidx, Nil);
Obj x140289291202503 = makeCons(symw, x140289291202471);
Obj x140289291202535 = makeCons(symgenerate_45num, x140289291202503);
Obj x140289291158823 = makeCons(makeCString(")"), Nil);
Obj x140289291158855 = makeCons(symw, x140289291158823);
Obj x140289291158887 = makeCons(symgenerate_45str, x140289291158855);
Obj x140289291158951 = makeCons(x140289291158887, Nil);
Obj x140289291158983 = makeCons(x140289291202535, x140289291158951);
Obj x140289291159015 = makeCons(x140289291201607, x140289291158983);
Obj x140289291159047 = makeCons(symbegin, x140289291159015);
Obj x140289291160039 = makeCons(sym_37const, Nil);
Obj x140289291160071 = makeCons(symquote, x140289291160039);
Obj x140289291160327 = makeCons(symx, Nil);
Obj x140289291160359 = makeCons(x140289291160071, x140289291160327);
Obj x140289291160391 = makeCons(symlist, x140289291160359);
Obj x140289291145223 = makeCons(symx, Nil);
Obj x140289291145255 = makeCons(symsymbol_63, x140289291145223);
Obj x140289291146471 = makeCons(makeCString("sym"), Nil);
Obj x140289291146567 = makeCons(symw, x140289291146471);
Obj x140289291146727 = makeCons(symgenerate_45str, x140289291146567);
Obj x140289291147879 = makeCons(symx, Nil);
Obj x140289291147911 = makeCons(symw, x140289291147879);
Obj x140289291147943 = makeCons(symgenerate_45sym, x140289291147911);
Obj x140289291148007 = makeCons(x140289291147943, Nil);
Obj x140289291148039 = makeCons(x140289291146727, x140289291148007);
Obj x140289291148071 = makeCons(symbegin, x140289291148039);
Obj x140289291148135 = makeCons(x140289291148071, Nil);
Obj x140289291148167 = makeCons(x140289291145255, x140289291148135);
Obj x140289291148935 = makeCons(symx, Nil);
Obj x140289291148967 = makeCons(symnumber_63, x140289291148935);
Obj x140289291076391 = makeCons(makeCString("MAKE_NUMBER("), Nil);
Obj x140289291076423 = makeCons(symw, x140289291076391);
Obj x140289291076455 = makeCons(symgenerate_45str, x140289291076423);
Obj x140289291077351 = makeCons(symx, Nil);
Obj x140289291077383 = makeCons(symw, x140289291077351);
Obj x140289291077415 = makeCons(symgenerate_45num, x140289291077383);
Obj x140289291078855 = makeCons(makeCString(")"), Nil);
Obj x140289291078887 = makeCons(symw, x140289291078855);
Obj x140289291078919 = makeCons(symgenerate_45str, x140289291078887);
Obj x140289291078983 = makeCons(x140289291078919, Nil);
Obj x140289291079015 = makeCons(x140289291077415, x140289291078983);
Obj x140289291079047 = makeCons(x140289291076455, x140289291079015);
Obj x140289291079079 = makeCons(symbegin, x140289291079047);
Obj x140289291079143 = makeCons(x140289291079079, Nil);
Obj x140289291079175 = makeCons(x140289291148967, x140289291079143);
Obj x140289290998023 = makeCons(symx, Nil);
Obj x140289290998055 = makeCons(symstring_63, x140289290998023);
Obj x140289290999271 = makeCons(makeCString("makeCString(\""), Nil);
Obj x140289290999303 = makeCons(symw, x140289290999271);
Obj x140289290999335 = makeCons(symgenerate_45str, x140289290999303);
Obj x140289291000583 = makeCons(symx, Nil);
Obj x140289291000615 = makeCons(symescape_45str, x140289291000583);
Obj x140289291000679 = makeCons(x140289291000615, Nil);
Obj x140289291000775 = makeCons(symw, x140289291000679);
Obj x140289291000807 = makeCons(symgenerate_45str, x140289291000775);
Obj x140289291001671 = makeCons(makeCString("\")"), Nil);
Obj x140289291001703 = makeCons(symw, x140289291001671);
Obj x140289291001735 = makeCons(symgenerate_45str, x140289291001703);
Obj x140289291001799 = makeCons(x140289291001735, Nil);
Obj x140289291001831 = makeCons(x140289291000807, x140289291001799);
Obj x140289290964999 = makeCons(x140289290999335, x140289291001831);
Obj x140289290965031 = makeCons(symbegin, x140289290964999);
Obj x140289290965095 = makeCons(x140289290965031, Nil);
Obj x140289290965191 = makeCons(x140289290998055, x140289290965095);
Obj x140289290966375 = makeCons(Nil, Nil);
Obj x140289290966407 = makeCons(symx, x140289290966375);
Obj x140289290966439 = makeCons(sym_61, x140289290966407);
Obj x140289290967239 = makeCons(makeCString("Nil"), Nil);
Obj x140289290967271 = makeCons(symw, x140289290967239);
Obj x140289290967303 = makeCons(symgenerate_45str, x140289290967271);
Obj x140289290967431 = makeCons(x140289290967303, Nil);
Obj x140289290967463 = makeCons(x140289290966439, x140289290967431);
Obj x140289290907783 = makeCons(True, Nil);
Obj x140289290907815 = makeCons(symx, x140289290907783);
Obj x140289290907847 = makeCons(sym_61, x140289290907815);
Obj x140289290908743 = makeCons(makeCString("True"), Nil);
Obj x140289290908775 = makeCons(symw, x140289290908743);
Obj x140289290908807 = makeCons(symgenerate_45str, x140289290908775);
Obj x140289290908871 = makeCons(x140289290908807, Nil);
Obj x140289290908903 = makeCons(x140289290907847, x140289290908871);
Obj x140289290910119 = makeCons(False, Nil);
Obj x140289290910151 = makeCons(symx, x140289290910119);
Obj x140289290910183 = makeCons(sym_61, x140289290910151);
Obj x140289290910983 = makeCons(makeCString("False"), Nil);
Obj x140289290911015 = makeCons(symw, x140289290910983);
Obj x140289290911047 = makeCons(symgenerate_45str, x140289290911015);
Obj x140289290911111 = makeCons(x140289290911047, Nil);
Obj x140289290911143 = makeCons(x140289290910183, x140289290911111);
Obj x140289290911207 = makeCons(x140289290911143, Nil);
Obj x140289290911239 = makeCons(x140289290908903, x140289290911207);
Obj x140289290911271 = makeCons(x140289290967463, x140289290911239);
Obj x140289290911303 = makeCons(x140289290965191, x140289290911271);
Obj x140289290911335 = makeCons(x140289291079175, x140289290911303);
Obj x140289290911367 = makeCons(x140289291148167, x140289290911335);
Obj x140289290911399 = makeCons(symcond, x140289290911367);
Obj x140289290846919 = makeCons(symlet, Nil);
Obj x140289290846951 = makeCons(symquote, x140289290846919);
Obj x140289290847687 = makeCons(symc, Nil);
Obj x140289290847719 = makeCons(symb, x140289290847687);
Obj x140289290847751 = makeCons(syma, x140289290847719);
Obj x140289290847783 = makeCons(x140289290846951, x140289290847751);
Obj x140289290847815 = makeCons(symlist, x140289290847783);
Obj x140289290849543 = makeCons(symenv, Nil);
Obj x140289290849575 = makeCons(syma, x140289290849543);
Obj x140289290849607 = makeCons(symindex, x140289290849575);
Obj x140289290802023 = makeCons(MAKE_NUMBER(0), Nil);
Obj x140289290802055 = makeCons(symidx, x140289290802023);
Obj x140289290802087 = makeCons(sym_60, x140289290802055);
Obj x140289290803079 = makeCons(makeCString("Obj "), Nil);
Obj x140289290803111 = makeCons(symw, x140289290803079);
Obj x140289290803143 = makeCons(symgenerate_45str, x140289290803111);
Obj x140289290803399 = makeCons(Nil, Nil);
Obj x140289290803431 = makeCons(x140289290803143, x140289290803399);
Obj x140289290803463 = makeCons(x140289290802087, x140289290803431);
Obj x140289290803495 = makeCons(symif, x140289290803463);
Obj x140289290804359 = makeCons(syma, Nil);
Obj x140289290804391 = makeCons(symw, x140289290804359);
Obj x140289290804423 = makeCons(symgenerate_45sym, x140289290804391);
Obj x140289290805223 = makeCons(makeCString(" = "), Nil);
Obj x140289290719239 = makeCons(symw, x140289290805223);
Obj x140289290719271 = makeCons(symgenerate_45str, x140289290719239);
Obj x140289290720807 = makeCons(symb, Nil);
Obj x140289290720839 = makeCons(symw, x140289290720807);
Obj x140289290720871 = makeCons(symenv, x140289290720839);
Obj x140289290720903 = makeCons(symself, x140289290720871);
Obj x140289290720935 = makeCons(symgenerate_45inst, x140289290720903);
Obj x140289290721895 = makeCons(makeCString(";\n"), Nil);
Obj x140289290721927 = makeCons(symw, x140289290721895);
Obj x140289290721959 = makeCons(symgenerate_45str, x140289290721927);
Obj x140289290666023 = makeCons(symenv, Nil);
Obj x140289290666055 = makeCons(syma, x140289290666023);
Obj x140289290666087 = makeCons(symcons, x140289290666055);
Obj x140289290666535 = makeCons(symc, Nil);
Obj x140289290666567 = makeCons(symw, x140289290666535);
Obj x140289290666599 = makeCons(x140289290666087, x140289290666567);
Obj x140289290666631 = makeCons(symself, x140289290666599);
Obj x140289290666663 = makeCons(symgenerate_45inst, x140289290666631);
Obj x140289290666727 = makeCons(x140289290666663, Nil);
Obj x140289290666759 = makeCons(x140289290721959, x140289290666727);
Obj x140289290666791 = makeCons(x140289290720935, x140289290666759);
Obj x140289290666919 = makeCons(x140289290719271, x140289290666791);
Obj x140289290666951 = makeCons(x140289290804423, x140289290666919);
Obj x140289290666983 = makeCons(x140289290803495, x140289290666951);
Obj x140289290667015 = makeCons(symbegin, x140289290666983);
Obj x140289290667079 = makeCons(x140289290667015, Nil);
Obj x140289290667111 = makeCons(x140289290849607, x140289290667079);
Obj x140289290667239 = makeCons(symidx, x140289290667111);
Obj x140289290667367 = makeCons(symlet, x140289290667239);
Obj x140289290668743 = makeCons(sym_37builtin, Nil);
Obj x140289290668775 = makeCons(symquote, x140289290668743);
Obj x140289290669031 = makeCons(symf, Nil);
Obj x140289290669063 = makeCons(x140289290668775, x140289290669031);
Obj x140289290669095 = makeCons(symlist, x140289290669063);
Obj x140289290669479 = makeCons(symargs, Nil);
Obj x140289290669511 = makeCons(x140289290669095, x140289290669479);
Obj x140289290669543 = makeCons(symlist_45rest, x140289290669511);
Obj x140289290626055 = makeCons(symf, Nil);
Obj x140289290626087 = makeCons(symbuiltin_45_62name, x140289290626055);
Obj x140289290626151 = makeCons(x140289290626087, Nil);
Obj x140289290626183 = makeCons(symw, x140289290626151);
Obj x140289290626215 = makeCons(symgenerate_45str, x140289290626183);
Obj x140289290628103 = makeCons(symset, Nil);
Obj x140289290628135 = makeCons(symquote, x140289290628103);
Obj x140289290628199 = makeCons(x140289290628135, Nil);
Obj x140289290628231 = makeCons(symf, x140289290628199);
Obj x140289290628263 = makeCons(sym_61, x140289290628231);
Obj x140289290551303 = makeCons(makeCString("(co, "), Nil);
Obj x140289290551335 = makeCons(symw, x140289290551303);
Obj x140289290551367 = makeCons(symgenerate_45str, x140289290551335);
Obj x140289290552327 = makeCons(makeCString("("), Nil);
Obj x140289290552359 = makeCons(symw, x140289290552327);
Obj x140289290552391 = makeCons(symgenerate_45str, x140289290552359);
Obj x140289290552455 = makeCons(x140289290552391, Nil);
Obj x140289290552487 = makeCons(x140289290551367, x140289290552455);
Obj x140289290552519 = makeCons(x140289290628263, x140289290552487);
Obj x140289290552551 = makeCons(symif, x140289290552519);
Obj x140289290553799 = makeCons(symargs, Nil);
Obj x140289290553831 = makeCons(symw, x140289290553799);
Obj x140289290553863 = makeCons(symenv, x140289290553831);
Obj x140289290553895 = makeCons(symself, x140289290553863);
Obj x140289290553927 = makeCons(symgenerate_45inst_45list, x140289290553895);
Obj x140289290554855 = makeCons(makeCString(")"), Nil);
Obj x140289290554887 = makeCons(symw, x140289290554855);
Obj x140289290554919 = makeCons(symgenerate_45str, x140289290554887);
Obj x140289290554983 = makeCons(x140289290554919, Nil);
Obj x140289290555015 = makeCons(x140289290553927, x140289290554983);
Obj x140289290555047 = makeCons(x140289290552551, x140289290555015);
Obj x140289290555079 = makeCons(x140289290626215, x140289290555047);
Obj x140289290555111 = makeCons(symbegin, x140289290555079);
Obj x140289290339207 = makeCons(symif, Nil);
Obj x140289290339399 = makeCons(symquote, x140289290339207);
Obj x140289290340039 = makeCons(symc, Nil);
Obj x140289290340071 = makeCons(symb, x140289290340039);
Obj x140289290340103 = makeCons(syma, x140289290340071);
Obj x140289290340135 = makeCons(x140289290339399, x140289290340103);
Obj x140289290340167 = makeCons(symlist, x140289290340135);
Obj x140289290341415 = makeCons(makeCString("if (True == "), Nil);
Obj x140289290341447 = makeCons(symw, x140289290341415);
Obj x140289290341479 = makeCons(symgenerate_45str, x140289290341447);
Obj x140289290334535 = makeCons(syma, Nil);
Obj x140289290334567 = makeCons(symw, x140289290334535);
Obj x140289290334663 = makeCons(symenv, x140289290334567);
Obj x140289290334695 = makeCons(symself, x140289290334663);
Obj x140289290334727 = makeCons(symgenerate_45inst, x140289290334695);
Obj x140289290335527 = makeCons(makeCString(") {\n"), Nil);
Obj x140289290335559 = makeCons(symw, x140289290335527);
Obj x140289290335591 = makeCons(symgenerate_45str, x140289290335559);
Obj x140289290336871 = makeCons(symb, Nil);
Obj x140289290336903 = makeCons(symw, x140289290336871);
Obj x140289290336935 = makeCons(symenv, x140289290336903);
Obj x140289290336967 = makeCons(symself, x140289290336935);
Obj x140289290336999 = makeCons(symgenerate_45inst, x140289290336967);
Obj x140289290337991 = makeCons(makeCString("} else {\n"), Nil);
Obj x140289290278183 = makeCons(symw, x140289290337991);
Obj x140289290278215 = makeCons(symgenerate_45str, x140289290278183);
Obj x140289290279399 = makeCons(symc, Nil);
Obj x140289290279431 = makeCons(symw, x140289290279399);
Obj x140289290279463 = makeCons(symenv, x140289290279431);
Obj x140289290279495 = makeCons(symself, x140289290279463);
Obj x140289290279527 = makeCons(symgenerate_45inst, x140289290279495);
Obj x140289290280327 = makeCons(makeCString("}\n"), Nil);
Obj x140289290280359 = makeCons(symw, x140289290280327);
Obj x140289290280391 = makeCons(symgenerate_45str, x140289290280359);
Obj x140289290280455 = makeCons(x140289290280391, Nil);
Obj x140289290280487 = makeCons(x140289290279527, x140289290280455);
Obj x140289290280519 = makeCons(x140289290278215, x140289290280487);
Obj x140289290280551 = makeCons(x140289290336999, x140289290280519);
Obj x140289290280583 = makeCons(x140289290335591, x140289290280551);
Obj x140289290280615 = makeCons(x140289290334727, x140289290280583);
Obj x140289290280647 = makeCons(x140289290341479, x140289290280615);
Obj x140289290280679 = makeCons(symbegin, x140289290280647);
Obj x140289290220199 = makeCons(sym_37closure, Nil);
Obj x140289290220231 = makeCons(symquote, x140289290220199);
Obj x140289290220871 = makeCons(symfrees, Nil);
Obj x140289290220903 = makeCons(symnargs, x140289290220871);
Obj x140289290220935 = makeCons(symlabel, x140289290220903);
Obj x140289290220967 = makeCons(x140289290220231, x140289290220935);
Obj x140289290220999 = makeCons(symlist_45rest, x140289290220967);
Obj x140289290222151 = makeCons(makeCString("makeNative("), Nil);
Obj x140289290222183 = makeCons(symw, x140289290222151);
Obj x140289290222215 = makeCons(symgenerate_45str, x140289290222183);
Obj x140289290133959 = makeCons(symself, Nil);
Obj x140289290133991 = makeCons(symcar, x140289290133959);
Obj x140289290134247 = makeCons(symlabel, Nil);
Obj x140289290134311 = makeCons(x140289290133991, x140289290134247);
Obj x140289290134343 = makeCons(sym_45, x140289290134311);
Obj x140289290134599 = makeCons(sym_42mod_45num_42, Nil);
Obj x140289290134631 = makeCons(x140289290134343, x140289290134599);
Obj x140289290134663 = makeCons(symmod, x140289290134631);
Obj x140289290134727 = makeCons(x140289290134663, Nil);
Obj x140289290134791 = makeCons(symw, x140289290134727);
Obj x140289290134823 = makeCons(symgenerate_45num, x140289290134791);
Obj x140289290135623 = makeCons(makeCString(", "), Nil);
Obj x140289290135655 = makeCons(symw, x140289290135623);
Obj x140289290135687 = makeCons(symgenerate_45str, x140289290135655);
Obj x140289290137031 = makeCons(symself, Nil);
Obj x140289290137063 = makeCons(symcar, x140289290137031);
Obj x140289290137127 = makeCons(x140289290137063, Nil);
Obj x140289290137159 = makeCons(symlabel, x140289290137127);
Obj x140289290137191 = makeCons(symw, x140289290137159);
Obj x140289290137223 = makeCons(symgenerate_45group_45name, x140289290137191);
Obj x140289290108583 = makeCons(makeCString(", "), Nil);
Obj x140289290108615 = makeCons(symw, x140289290108583);
Obj x140289290108647 = makeCons(symgenerate_45str, x140289290108615);
Obj x140289298039303 = makeCons(symnargs, Nil);
Obj x140289298039335 = makeCons(symw, x140289298039303);
Obj x140289298039367 = makeCons(symgenerate_45num, x140289298039335);
Obj x140289298040167 = makeCons(makeCString(", "), Nil);
Obj x140289298040199 = makeCons(symw, x140289298040167);
Obj x140289298040231 = makeCons(symgenerate_45str, x140289298040199);
Obj x140289298041383 = makeCons(symfrees, Nil);
Obj x140289298041415 = makeCons(symlength, x140289298041383);
Obj x140289298041479 = makeCons(x140289298041415, Nil);
Obj x140289298041511 = makeCons(symw, x140289298041479);
Obj x140289298041543 = makeCons(symgenerate_45num, x140289298041511);
Obj x140289298042855 = makeCons(symfrees, Nil);
Obj x140289298034695 = makeCons(symnull_63, x140289298042855);
Obj x140289298034759 = makeCons(x140289298034695, Nil);
Obj x140289298034791 = makeCons(symnot, x140289298034759);
Obj x140289298035943 = makeCons(makeCString(", "), Nil);
Obj x140289298035975 = makeCons(symw, x140289298035943);
Obj x140289298036007 = makeCons(symgenerate_45str, x140289298035975);
Obj x140289298037191 = makeCons(symfrees, Nil);
Obj x140289298037223 = makeCons(symw, x140289298037191);
Obj x140289298037255 = makeCons(symenv, x140289298037223);
Obj x140289298037287 = makeCons(symself, x140289298037255);
Obj x140289298037319 = makeCons(symgenerate_45inst_45list, x140289298037287);
Obj x140289298037383 = makeCons(x140289298037319, Nil);
Obj x140289298037415 = makeCons(x140289298036007, x140289298037383);
Obj x140289298037447 = makeCons(symbegin, x140289298037415);
Obj x140289298037703 = makeCons(Nil, Nil);
Obj x140289298037735 = makeCons(x140289298037447, x140289298037703);
Obj x140289298037767 = makeCons(x140289298034791, x140289298037735);
Obj x140289298037799 = makeCons(symif, x140289298037767);
Obj x140289298038599 = makeCons(makeCString(")"), Nil);
Obj x140289298038631 = makeCons(symw, x140289298038599);
Obj x140289298038663 = makeCons(symgenerate_45str, x140289298038631);
Obj x140289298038727 = makeCons(x140289298038663, Nil);
Obj x140289298038759 = makeCons(x140289298037799, x140289298038727);
Obj x140289298026503 = makeCons(x140289298041543, x140289298038759);
Obj x140289298026535 = makeCons(x140289298040231, x140289298026503);
Obj x140289298026567 = makeCons(x140289298039367, x140289298026535);
Obj x140289298026599 = makeCons(x140289290108647, x140289298026567);
Obj x140289298026631 = makeCons(x140289290137223, x140289298026599);
Obj x140289298026663 = makeCons(x140289290135687, x140289298026631);
Obj x140289298026695 = makeCons(x140289290134823, x140289298026663);
Obj x140289298026727 = makeCons(x140289290222215, x140289298026695);
Obj x140289298026759 = makeCons(symbegin, x140289298026727);
Obj x140289298027719 = makeCons(symdo, Nil);
Obj x140289298027751 = makeCons(symquote, x140289298027719);
Obj x140289298028199 = makeCons(symb, Nil);
Obj x140289298028231 = makeCons(syma, x140289298028199);
Obj x140289298028263 = makeCons(x140289298027751, x140289298028231);
Obj x140289298028295 = makeCons(symlist, x140289298028263);
Obj x140289298029831 = makeCons(syma, Nil);
Obj x140289298029863 = makeCons(symw, x140289298029831);
Obj x140289298029895 = makeCons(symenv, x140289298029863);
Obj x140289298029927 = makeCons(symself, x140289298029895);
Obj x140289298029959 = makeCons(symgenerate_45inst, x140289298029927);
Obj x140289298022567 = makeCons(makeCString(";\n"), Nil);
Obj x140289298022599 = makeCons(symw, x140289298022567);
Obj x140289298022631 = makeCons(symgenerate_45str, x140289298022599);
Obj x140289298023815 = makeCons(symb, Nil);
Obj x140289298023847 = makeCons(symw, x140289298023815);
Obj x140289298023879 = makeCons(symenv, x140289298023847);
Obj x140289298023911 = makeCons(symself, x140289298023879);
Obj x140289298023943 = makeCons(symgenerate_45inst, x140289298023911);
Obj x140289298024007 = makeCons(x140289298023943, Nil);
Obj x140289298024039 = makeCons(x140289298022631, x140289298024007);
Obj x140289298024071 = makeCons(x140289298029959, x140289298024039);
Obj x140289298024103 = makeCons(symbegin, x140289298024071);
Obj x140289298025063 = makeCons(symreturn, Nil);
Obj x140289298025095 = makeCons(symquote, x140289298025063);
Obj x140289298025351 = makeCons(symx, Nil);
Obj x140289298025383 = makeCons(x140289298025095, x140289298025351);
Obj x140289298025415 = makeCons(symlist, x140289298025383);
Obj x140289298018375 = makeCons(makeCString("__nargs = 2;\n"), Nil);
Obj x140289298018407 = makeCons(symw, x140289298018375);
Obj x140289298018439 = makeCons(symgenerate_45str, x140289298018407);
Obj x140289298019239 = makeCons(makeCString("__arg1 = "), Nil);
Obj x140289298019271 = makeCons(symw, x140289298019239);
Obj x140289298019303 = makeCons(symgenerate_45str, x140289298019271);
Obj x140289298020487 = makeCons(symx, Nil);
Obj x140289298020519 = makeCons(symw, x140289298020487);
Obj x140289298020551 = makeCons(symenv, x140289298020519);
Obj x140289298020583 = makeCons(symself, x140289298020551);
Obj x140289298020615 = makeCons(symgenerate_45inst, x140289298020583);
Obj x140289298021415 = makeCons(makeCString(";\n"), Nil);
Obj x140289298021447 = makeCons(symw, x140289298021415);
Obj x140289298021479 = makeCons(symgenerate_45str, x140289298021447);
Obj x140289298022279 = makeCons(makeCString("co->ctx = co->callstack.data[--co->callstack.len];\n"), Nil);
Obj x140289298022311 = makeCons(symw, x140289298022279);
Obj x140289298022343 = makeCons(symgenerate_45str, x140289298022311);
Obj x140289298014951 = makeCons(makeCString("if (co->ctx.pc.func != "), Nil);
Obj x140289298014983 = makeCons(symw, x140289298014951);
Obj x140289298015015 = makeCons(symgenerate_45str, x140289298014983);
Obj x140289298016167 = makeCons(symself, Nil);
Obj x140289298016199 = makeCons(symcdr, x140289298016167);
Obj x140289298016807 = makeCons(symself, Nil);
Obj x140289298016839 = makeCons(symcar, x140289298016807);
Obj x140289298016903 = makeCons(x140289298016839, Nil);
Obj x140289298016935 = makeCons(x140289298016199, x140289298016903);
Obj x140289298016967 = makeCons(symw, x140289298016935);
Obj x140289298016999 = makeCons(symgenerate_45group_45name, x140289298016967);
Obj x140289298017799 = makeCons(makeCString(") { goto fail; }\n"), Nil);
Obj x140289298017831 = makeCons(symw, x140289298017799);
Obj x140289298017863 = makeCons(symgenerate_45str, x140289298017831);
Obj x140289298010471 = makeCons(makeCString("goto *jumpTable[co->ctx.pc.label];\n"), Nil);
Obj x140289298010503 = makeCons(symw, x140289298010471);
Obj x140289298010535 = makeCons(symgenerate_45str, x140289298010503);
Obj x140289298010599 = makeCons(x140289298010535, Nil);
Obj x140289298010631 = makeCons(x140289298017863, x140289298010599);
Obj x140289298010663 = makeCons(x140289298016999, x140289298010631);
Obj x140289298010695 = makeCons(x140289298015015, x140289298010663);
Obj x140289298010727 = makeCons(x140289298022343, x140289298010695);
Obj x140289298010759 = makeCons(x140289298021479, x140289298010727);
Obj x140289298010791 = makeCons(x140289298020615, x140289298010759);
Obj x140289298010823 = makeCons(x140289298019303, x140289298010791);
Obj x140289298010855 = makeCons(x140289298018439, x140289298010823);
Obj x140289298010887 = makeCons(symbegin, x140289298010855);
Obj x140289298011847 = makeCons(symtailcall, Nil);
Obj x140289298011879 = makeCons(symquote, x140289298011847);
Obj x140289298012135 = makeCons(symexp, Nil);
Obj x140289298012167 = makeCons(x140289298011879, x140289298012135);
Obj x140289298012199 = makeCons(symlist, x140289298012167);
Obj x140289298013383 = makeCons(symexp, Nil);
Obj x140289298013415 = makeCons(symw, x140289298013383);
Obj x140289298013447 = makeCons(symenv, x140289298013415);
Obj x140289298013479 = makeCons(symself, x140289298013447);
Obj x140289298013511 = makeCons(symgenerate_45inst, x140289298013479);
Obj x140289298006279 = makeCons(symcall, Nil);
Obj x140289298006311 = makeCons(symquote, x140289298006279);
Obj x140289298006759 = makeCons(symcont, Nil);
Obj x140289298006791 = makeCons(symexp, x140289298006759);
Obj x140289298006823 = makeCons(x140289298006311, x140289298006791);
Obj x140289298006855 = makeCons(symlist, x140289298006823);
Obj x140289298008199 = makeCons(symcont, Nil);
Obj x140289298008231 = makeCons(symw, x140289298008199);
Obj x140289298008263 = makeCons(symself, x140289298008231);
Obj x140289298008295 = makeCons(symgenerate_45cont, x140289298008263);
Obj x140289298009479 = makeCons(symexp, Nil);
Obj x140289298009511 = makeCons(symw, x140289298009479);
Obj x140289298009543 = makeCons(symenv, x140289298009511);
Obj x140289298009575 = makeCons(symself, x140289298009543);
Obj x140289298009607 = makeCons(symgenerate_45inst, x140289298009575);
Obj x140289298009671 = makeCons(x140289298009607, Nil);
Obj x140289298009703 = makeCons(x140289298008295, x140289298009671);
Obj x140289298009735 = makeCons(symbegin, x140289298009703);
Obj x140289298002343 = makeCons(symargs, Nil);
Obj x140289298002375 = makeCons(symf, x140289298002343);
Obj x140289298002407 = makeCons(symlist_45rest, x140289298002375);
Obj x140289298003559 = makeCons(makeCString("__nargs = "), Nil);
Obj x140289298003591 = makeCons(symw, x140289298003559);
Obj x140289298003623 = makeCons(symgenerate_45str, x140289298003591);
Obj x140289298005319 = makeCons(symargs, Nil);
Obj x140289298005351 = makeCons(symlength, x140289298005319);
Obj x140289298005415 = makeCons(x140289298005351, Nil);
Obj x140289298005447 = makeCons(MAKE_NUMBER(1), x140289298005415);
Obj x140289298005479 = makeCons(sym_43, x140289298005447);
Obj x140289298005543 = makeCons(x140289298005479, Nil);
Obj x140289298005575 = makeCons(symw, x140289298005543);
Obj x140289298005607 = makeCons(symgenerate_45num, x140289298005575);
Obj x140289297998215 = makeCons(makeCString(";\n"), Nil);
Obj x140289297998247 = makeCons(symw, x140289297998215);
Obj x140289297998279 = makeCons(symgenerate_45str, x140289297998247);
Obj x140289298000007 = makeCons(symargs, Nil);
Obj x140289298000039 = makeCons(symf, x140289298000007);
Obj x140289298000071 = makeCons(symlist_45rest, x140289298000039);
Obj x140289298000135 = makeCons(x140289298000071, Nil);
Obj x140289298000167 = makeCons(MAKE_NUMBER(0), x140289298000135);
Obj x140289298000199 = makeCons(symw, x140289298000167);
Obj x140289298000231 = makeCons(symself, x140289298000199);
Obj x140289298000263 = makeCons(symgenerate_45call_45list, x140289298000231);
Obj x140289298001063 = makeCons(makeCString("co->ctx.frees = __arg0;\n"), Nil);
Obj x140289298001095 = makeCons(symw, x140289298001063);
Obj x140289298001127 = makeCons(symgenerate_45str, x140289298001095);
Obj x140289297993735 = makeCons(makeCString("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n"), Nil);
Obj x140289297993767 = makeCons(symw, x140289297993735);
Obj x140289297993799 = makeCons(symgenerate_45str, x140289297993767);
Obj x140289297994599 = makeCons(makeCString("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n"), Nil);
Obj x140289297994631 = makeCons(symw, x140289297994599);
Obj x140289297994663 = makeCons(symgenerate_45str, x140289297994631);
Obj x140289297995463 = makeCons(makeCString("if (ps.func != "), Nil);
Obj x140289297995495 = makeCons(symw, x140289297995463);
Obj x140289297995527 = makeCons(symgenerate_45str, x140289297995495);
Obj x140289297996679 = makeCons(symself, Nil);
Obj x140289297996711 = makeCons(symcdr, x140289297996679);
Obj x140289297997319 = makeCons(symself, Nil);
Obj x140289297997351 = makeCons(symcar, x140289297997319);
Obj x140289297997415 = makeCons(x140289297997351, Nil);
Obj x140289297997447 = makeCons(x140289297996711, x140289297997415);
Obj x140289297997479 = makeCons(symw, x140289297997447);
Obj x140289297997511 = makeCons(symgenerate_45group_45name, x140289297997479);
Obj x140289297961447 = makeCons(makeCString(") { co->ctx.pc = ps; goto fail; };\n"), Nil);
Obj x140289297961479 = makeCons(symw, x140289297961447);
Obj x140289297961511 = makeCons(symgenerate_45str, x140289297961479);
Obj x140289297962311 = makeCons(makeCString("goto *jumpTable[ps.label];\n"), Nil);
Obj x140289297962343 = makeCons(symw, x140289297962311);
Obj x140289297962375 = makeCons(symgenerate_45str, x140289297962343);
Obj x140289297962439 = makeCons(x140289297962375, Nil);
Obj x140289297962471 = makeCons(x140289297961511, x140289297962439);
Obj x140289297962503 = makeCons(x140289297997511, x140289297962471);
Obj x140289297962535 = makeCons(x140289297995527, x140289297962503);
Obj x140289297962567 = makeCons(x140289297994663, x140289297962535);
Obj x140289297962599 = makeCons(x140289297993799, x140289297962567);
Obj x140289297962631 = makeCons(x140289298001127, x140289297962599);
Obj x140289297962663 = makeCons(x140289298000263, x140289297962631);
Obj x140289297962695 = makeCons(x140289297998279, x140289297962663);
Obj x140289297962727 = makeCons(x140289298005607, x140289297962695);
Obj x140289297962759 = makeCons(x140289298003623, x140289297962727);
Obj x140289297962791 = makeCons(symbegin, x140289297962759);
Obj x140289297962855 = makeCons(x140289297962791, Nil);
Obj x140289297962887 = makeCons(x140289298002407, x140289297962855);
Obj x140289297962919 = makeCons(x140289298009735, x140289297962887);
Obj x140289297962951 = makeCons(x140289298006855, x140289297962919);
Obj x140289297962983 = makeCons(x140289298013511, x140289297962951);
Obj x140289297963015 = makeCons(x140289298012199, x140289297962983);
Obj x140289297963047 = makeCons(x140289298010887, x140289297963015);
Obj x140289297963079 = makeCons(x140289298025415, x140289297963047);
Obj x140289297963111 = makeCons(x140289298024103, x140289297963079);
Obj x140289297963143 = makeCons(x140289298028295, x140289297963111);
Obj x140289297963175 = makeCons(x140289298026759, x140289297963143);
Obj x140289297963207 = makeCons(x140289290220999, x140289297963175);
Obj x140289297963239 = makeCons(x140289290280679, x140289297963207);
Obj x140289297963271 = makeCons(x140289290340167, x140289297963239);
Obj x140289297963303 = makeCons(x140289290555111, x140289297963271);
Obj x140289297963335 = makeCons(x140289290669543, x140289297963303);
Obj x140289297963367 = makeCons(x140289290667367, x140289297963335);
Obj x140289297963399 = makeCons(x140289290847815, x140289297963367);
Obj x140289297963431 = makeCons(x140289290911399, x140289297963399);
Obj x140289297963463 = makeCons(x140289291160391, x140289297963431);
Obj x140289297963495 = makeCons(x140289291159047, x140289297963463);
Obj x140289297963527 = makeCons(x140289291200295, x140289297963495);
Obj x140289297963559 = makeCons(x140289291198951, x140289297963527);
Obj x140289297963591 = makeCons(x140289291232231, x140289297963559);
Obj x140289297963623 = makeCons(x140289291238151, x140289297963591);
Obj x140289297963655 = makeCons(x140289291246951, x140289297963623);
Obj x140289297963687 = makeCons(symx1, x140289297963655);
Obj x140289297963719 = makeCons(symmatch, x140289297963687);
Obj x140289297963783 = makeCons(x140289297963719, Nil);
Obj x140289297963815 = makeCons(x140289291244711, x140289297963783);
Obj x140289297963847 = makeCons(x140289291243847, x140289297963815);
Obj x140289297963879 = makeCons(symif, x140289297963847);
Obj x140289297963943 = makeCons(x140289297963879, Nil);
Obj x140289297963975 = makeCons(x140289291283623, x140289297963943);
Obj x140289297964007 = makeCons(symgenerate_45inst, x140289297963975);
Obj x140289297964039 = makeCons(symdefun, x140289297964007);
PUSH_CONT_0(co, 29, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289297964039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x140289297964071 = __arg1;
pushCont(co, 30, clofun1, 1, x140289297964071);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140289297964263 = __arg1;
Obj x140289297964071= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 31, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289297964071;
__arg2 = x140289297964263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140289297964295 = __arg1;
Obj x140289298090247 = makeCons(sym_37continuation, Nil);
Obj x140289298090407 = makeCons(symquote, x140289298090247);
Obj x140289298091175 = makeCons(symstacks, Nil);
Obj x140289298091207 = makeCons(symlabel, x140289298091175);
Obj x140289298091239 = makeCons(x140289298090407, x140289298091207);
Obj x140289298091271 = makeCons(symlist_45rest, x140289298091239);
Obj x140289298056615 = makeCons(Nil, Nil);
Obj x140289298056647 = makeCons(symstacks, x140289298056615);
Obj x140289298056679 = makeCons(sym_61, x140289298056647);
Obj x140289298057479 = makeCons(makeCString("PUSH_CONT_0(co, "), Nil);
Obj x140289298057511 = makeCons(symw, x140289298057479);
Obj x140289298057543 = makeCons(symgenerate_45str, x140289298057511);
Obj x140289298058439 = makeCons(makeCString("pushCont(co, "), Nil);
Obj x140289298058567 = makeCons(symw, x140289298058439);
Obj x140289298038791 = makeCons(symgenerate_45str, x140289298058567);
Obj x140289298038855 = makeCons(x140289298038791, Nil);
Obj x140289298038887 = makeCons(x140289298057543, x140289298038855);
Obj x140289298038919 = makeCons(x140289298056679, x140289298038887);
Obj x140289298038951 = makeCons(symif, x140289298038919);
Obj x140289298040999 = makeCons(symself, Nil);
Obj x140289298041031 = makeCons(symcar, x140289298040999);
Obj x140289298041287 = makeCons(symlabel, Nil);
Obj x140289298041319 = makeCons(x140289298041031, x140289298041287);
Obj x140289298041351 = makeCons(sym_45, x140289298041319);
Obj x140289298041767 = makeCons(sym_42mod_45num_42, Nil);
Obj x140289298041799 = makeCons(x140289298041351, x140289298041767);
Obj x140289298041831 = makeCons(symmod, x140289298041799);
Obj x140289298041895 = makeCons(x140289298041831, Nil);
Obj x140289298041927 = makeCons(symw, x140289298041895);
Obj x140289298041959 = makeCons(symgenerate_45num, x140289298041927);
Obj x140289298042759 = makeCons(makeCString(", "), Nil);
Obj x140289298042791 = makeCons(symw, x140289298042759);
Obj x140289298042823 = makeCons(symgenerate_45str, x140289298042791);
Obj x140289298036199 = makeCons(symself, Nil);
Obj x140289298036231 = makeCons(symcar, x140289298036199);
Obj x140289298036295 = makeCons(x140289298036231, Nil);
Obj x140289298036327 = makeCons(symlabel, x140289298036295);
Obj x140289298036359 = makeCons(symw, x140289298036327);
Obj x140289298036391 = makeCons(symgenerate_45group_45name, x140289298036359);
Obj x140289298037927 = makeCons(Nil, Nil);
Obj x140289298037959 = makeCons(symstacks, x140289298037927);
Obj x140289298037991 = makeCons(sym_61, x140289298037959);
Obj x140289298032423 = makeCons(makeCString(", "), Nil);
Obj x140289298032455 = makeCons(symw, x140289298032423);
Obj x140289298032487 = makeCons(symgenerate_45str, x140289298032455);
Obj x140289298033671 = makeCons(symstacks, Nil);
Obj x140289298033703 = makeCons(symlength, x140289298033671);
Obj x140289298033767 = makeCons(x140289298033703, Nil);
Obj x140289298033799 = makeCons(symw, x140289298033767);
Obj x140289298033831 = makeCons(symgenerate_45num, x140289298033799);
Obj x140289298027143 = makeCons(symx, Nil);
Obj x140289298028487 = makeCons(makeCString(", "), Nil);
Obj x140289298028519 = makeCons(symw, x140289298028487);
Obj x140289298028551 = makeCons(symgenerate_45str, x140289298028519);
Obj x140289298029735 = makeCons(symx, Nil);
Obj x140289298029767 = makeCons(symw, x140289298029735);
Obj x140289298029799 = makeCons(Nil, x140289298029767);
Obj x140289298029991 = makeCons(symself, x140289298029799);
Obj x140289298030023 = makeCons(symgenerate_45inst, x140289298029991);
Obj x140289298030087 = makeCons(x140289298030023, Nil);
Obj x140289298030119 = makeCons(x140289298028551, x140289298030087);
Obj x140289298030151 = makeCons(symbegin, x140289298030119);
Obj x140289298030215 = makeCons(x140289298030151, Nil);
Obj x140289298030247 = makeCons(x140289298027143, x140289298030215);
Obj x140289298030279 = makeCons(symlambda, x140289298030247);
Obj x140289298030535 = makeCons(symstacks, Nil);
Obj x140289298030567 = makeCons(x140289298030279, x140289298030535);
Obj x140289298022407 = makeCons(symfor_45each, x140289298030567);
Obj x140289298022471 = makeCons(x140289298022407, Nil);
Obj x140289298022503 = makeCons(x140289298033831, x140289298022471);
Obj x140289298022535 = makeCons(x140289298032487, x140289298022503);
Obj x140289298022663 = makeCons(symbegin, x140289298022535);
Obj x140289298022727 = makeCons(x140289298022663, Nil);
Obj x140289298022759 = makeCons(Nil, x140289298022727);
Obj x140289298022791 = makeCons(x140289298037991, x140289298022759);
Obj x140289298022823 = makeCons(symif, x140289298022791);
Obj x140289298023623 = makeCons(makeCString(");\n"), Nil);
Obj x140289298023655 = makeCons(symw, x140289298023623);
Obj x140289298023687 = makeCons(symgenerate_45str, x140289298023655);
Obj x140289298023751 = makeCons(x140289298023687, Nil);
Obj x140289298023783 = makeCons(x140289298022823, x140289298023751);
Obj x140289298023975 = makeCons(x140289298036391, x140289298023783);
Obj x140289298024135 = makeCons(x140289298042823, x140289298023975);
Obj x140289298024167 = makeCons(x140289298041959, x140289298024135);
Obj x140289298024199 = makeCons(x140289298038951, x140289298024167);
Obj x140289298024231 = makeCons(symbegin, x140289298024199);
Obj x140289298024295 = makeCons(x140289298024231, Nil);
Obj x140289298024327 = makeCons(sym_61_62, x140289298024295);
Obj x140289298024359 = makeCons(x140289298091271, x140289298024327);
Obj x140289298024391 = makeCons(symw, x140289298024359);
Obj x140289298024423 = makeCons(symself, x140289298024391);
Obj x140289298024455 = makeCons(symgenerate_45cont, x140289298024423);
Obj x140289298024487 = makeCons(symfunc, x140289298024455);
PUSH_CONT_0(co, 32, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289298024487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140289298024519 = __arg1;
pushCont(co, 33, clofun1, 1, x140289298024519);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140289298024711 = __arg1;
Obj x140289298024519= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 34, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289298024519;
__arg2 = x140289298024711;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140289298024743 = __arg1;
Obj x140289298018727 = makeCons(symlist, Nil);
Obj x140289298020935 = makeCons(symb, Nil);
Obj x140289298020967 = makeCons(syma, x140289298020935);
Obj x140289298020999 = makeCons(symlist_45rest, x140289298020967);
Obj x140289298014727 = makeCons(syma, Nil);
Obj x140289298014759 = makeCons(symw, x140289298014727);
Obj x140289298014791 = makeCons(symenv, x140289298014759);
Obj x140289298014823 = makeCons(symself, x140289298014791);
Obj x140289298014855 = makeCons(symfn, x140289298014823);
Obj x140289298016327 = makeCons(symb, Nil);
Obj x140289298016359 = makeCons(symnull_63, x140289298016327);
Obj x140289298016423 = makeCons(x140289298016359, Nil);
Obj x140289298016455 = makeCons(symnot, x140289298016423);
Obj x140289298017447 = makeCons(makeCString(", "), Nil);
Obj x140289298017479 = makeCons(symw, x140289298017447);
Obj x140289298017511 = makeCons(symgenerate_45str, x140289298017479);
Obj x140289298017767 = makeCons(Nil, Nil);
Obj x140289298017895 = makeCons(x140289298017511, x140289298017767);
Obj x140289298017927 = makeCons(x140289298016455, x140289298017895);
Obj x140289298017959 = makeCons(symif, x140289298017927);
Obj x140289298011559 = makeCons(symb, Nil);
Obj x140289298011591 = makeCons(symw, x140289298011559);
Obj x140289298011623 = makeCons(symfn, x140289298011591);
Obj x140289298011655 = makeCons(symenv, x140289298011623);
Obj x140289298011687 = makeCons(symself, x140289298011655);
Obj x140289298011719 = makeCons(symgenerate_45inst_45list_45h, x140289298011687);
Obj x140289298011783 = makeCons(x140289298011719, Nil);
Obj x140289298011815 = makeCons(x140289298017959, x140289298011783);
Obj x140289298011911 = makeCons(x140289298014855, x140289298011815);
Obj x140289298011943 = makeCons(symbegin, x140289298011911);
Obj x140289298012007 = makeCons(x140289298011943, Nil);
Obj x140289298012039 = makeCons(sym_61_62, x140289298012007);
Obj x140289298012071 = makeCons(x140289298020999, x140289298012039);
Obj x140289298012103 = makeCons(symw, x140289298012071);
Obj x140289298012231 = makeCons(symfn, x140289298012103);
Obj x140289298012263 = makeCons(symenv, x140289298012231);
Obj x140289298012295 = makeCons(symself, x140289298012263);
Obj x140289298012327 = makeCons(Nil, x140289298012295);
Obj x140289298012359 = makeCons(sym_61_62, x140289298012327);
Obj x140289298012391 = makeCons(x140289298018727, x140289298012359);
Obj x140289298012423 = makeCons(symw, x140289298012391);
Obj x140289298012455 = makeCons(symfn, x140289298012423);
Obj x140289298012487 = makeCons(symenv, x140289298012455);
Obj x140289298012519 = makeCons(symself, x140289298012487);
Obj x140289298012551 = makeCons(symgenerate_45inst_45list_45h, x140289298012519);
Obj x140289298012583 = makeCons(symfunc, x140289298012551);
PUSH_CONT_0(co, 35, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289298012583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140289298012615 = __arg1;
pushCont(co, 36, clofun1, 1, x140289298012615);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140289298012807 = __arg1;
Obj x140289298012615= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 37, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289298012615;
__arg2 = x140289298012807;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140289298012839 = __arg1;
Obj x140289298006599 = makeCons(syml, Nil);
Obj x140289298006631 = makeCons(symw, x140289298006599);
Obj x140289298006663 = makeCons(symenv, x140289298006631);
Obj x140289298006695 = makeCons(symself, x140289298006663);
Obj x140289298008327 = makeCons(syml, Nil);
Obj x140289298008359 = makeCons(symw, x140289298008327);
Obj x140289298008391 = makeCons(symgenerate_45inst, x140289298008359);
Obj x140289298008423 = makeCons(symenv, x140289298008391);
Obj x140289298008455 = makeCons(symself, x140289298008423);
Obj x140289298008487 = makeCons(symgenerate_45inst_45list_45h, x140289298008455);
Obj x140289298008551 = makeCons(x140289298008487, Nil);
Obj x140289298008583 = makeCons(x140289298006695, x140289298008551);
Obj x140289298008615 = makeCons(symgenerate_45inst_45list, x140289298008583);
Obj x140289298008647 = makeCons(symdefun, x140289298008615);
PUSH_CONT_0(co, 38, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289298008647;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140289298008679 = __arg1;
pushCont(co, 39, clofun1, 1, x140289298008679);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140289298008871 = __arg1;
Obj x140289298008679= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 40, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289298008679;
__arg2 = x140289298008871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140289298008903 = __arg1;
Obj x140289298001959 = makeCons(MAKE_NUMBER(50), Nil);
Obj x140289298001991 = makeCons(sym_42mod_45num_42, x140289298001959);
Obj x140289298002023 = makeCons(symdef, x140289298001991);
PUSH_CONT_0(co, 41, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289298002023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140289298002055 = __arg1;
pushCont(co, 42, clofun1, 1, x140289298002055);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140289298002247 = __arg1;
Obj x140289298002055= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 43, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289298002055;
__arg2 = x140289298002247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140289298002279 = __arg1;
Obj x140289298004007 = makeCons(symmaxid, Nil);
Obj x140289298004039 = makeCons(symlabel, x140289298004007);
Obj x140289298004071 = makeCons(symw, x140289298004039);
Obj x140289297997831 = makeCons(symlabel, Nil);
Obj x140289297997863 = makeCons(symmaxid, x140289297997831);
Obj x140289297997895 = makeCons(sym_45, x140289297997863);
Obj x140289297998151 = makeCons(sym_42mod_45num_42, Nil);
Obj x140289297998183 = makeCons(x140289297997895, x140289297998151);
Obj x140289297998311 = makeCons(sym_47, x140289297998183);
Obj x140289297999463 = makeCons(makeCString("clofun"), Nil);
Obj x140289297999495 = makeCons(symw, x140289297999463);
Obj x140289297999527 = makeCons(symgenerate_45str, x140289297999495);
Obj x140289298000583 = makeCons(symgid, Nil);
Obj x140289298000615 = makeCons(symw, x140289298000583);
Obj x140289298000647 = makeCons(symgenerate_45num, x140289298000615);
Obj x140289298000711 = makeCons(x140289298000647, Nil);
Obj x140289298000743 = makeCons(x140289297999527, x140289298000711);
Obj x140289298000775 = makeCons(symbegin, x140289298000743);
Obj x140289298000839 = makeCons(x140289298000775, Nil);
Obj x140289298000871 = makeCons(x140289297998311, x140289298000839);
Obj x140289298000903 = makeCons(symgid, x140289298000871);
Obj x140289298000935 = makeCons(symlet, x140289298000903);
Obj x140289298000999 = makeCons(x140289298000935, Nil);
Obj x140289298001031 = makeCons(x140289298004071, x140289298000999);
Obj x140289298001159 = makeCons(symgenerate_45group_45name, x140289298001031);
Obj x140289298001191 = makeCons(symdefun, x140289298001159);
PUSH_CONT_0(co, 44, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289298001191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140289298001223 = __arg1;
pushCont(co, 45, clofun1, 1, x140289298001223);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140289298001415 = __arg1;
Obj x140289298001223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 46, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289298001223;
__arg2 = x140289298001415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140289298001447 = __arg1;
Obj x140289297994983 = makeCons(symmaxid, Nil);
Obj x140289297995015 = makeCons(symlabel, x140289297994983);
Obj x140289297995047 = makeCons(symw, x140289297995015);
Obj x140289297964807 = makeCons(makeCString("static void "), Nil);
Obj x140289297964839 = makeCons(symw, x140289297964807);
Obj x140289297964871 = makeCons(symgenerate_45str, x140289297964839);
Obj x140289297826599 = makeCons(symmaxid, Nil);
Obj x140289297826631 = makeCons(symlabel, x140289297826599);
Obj x140289297826663 = makeCons(symw, x140289297826631);
Obj x140289297826695 = makeCons(symgenerate_45group_45name, x140289297826663);
Obj x140289297827591 = makeCons(makeCString("(struct Cora* co"), Nil);
Obj x140289297827623 = makeCons(symw, x140289297827591);
Obj x140289297827655 = makeCons(symgenerate_45str, x140289297827623);
Obj x140289297828551 = makeCons(makeCString(")"), Nil);
Obj x140289297828583 = makeCons(symw, x140289297828551);
Obj x140289297828615 = makeCons(symgenerate_45str, x140289297828583);
Obj x140289297828775 = makeCons(x140289297828615, Nil);
Obj x140289297828807 = makeCons(x140289297827655, x140289297828775);
Obj x140289297828839 = makeCons(x140289297826695, x140289297828807);
Obj x140289297828871 = makeCons(x140289297964871, x140289297828839);
Obj x140289297828903 = makeCons(symbegin, x140289297828871);
Obj x140289297828967 = makeCons(x140289297828903, Nil);
Obj x140289297828999 = makeCons(x140289297995047, x140289297828967);
Obj x140289297829031 = makeCons(symcode_45gen_45func_45declare, x140289297828999);
Obj x140289297829063 = makeCons(symdefun, x140289297829031);
PUSH_CONT_0(co, 47, clofun1);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289297829063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140289297829095 = __arg1;
pushCont(co, 48, clofun1, 1, x140289297829095);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj x140289297829287 = __arg1;
Obj x140289297829095= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 49, clofun1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289297829095;
__arg2 = x140289297829287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun1) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140289297829319 = __arg1;
Obj x140289297782503 = makeCons(symvar, Nil);
Obj x140289297782535 = makeCons(symi, x140289297782503);
Obj x140289297782567 = makeCons(symw, x140289297782535);
Obj x140289297783751 = makeCons(makeCString("Obj "), Nil);
Obj x140289297783783 = makeCons(symw, x140289297783751);
Obj x140289297783815 = makeCons(symgenerate_45str, x140289297783783);
Obj x140289297784807 = makeCons(symignore, Nil);
Obj x140289297756167 = makeCons(symquote, x140289297784807);
Obj x140289297756903 = makeCons(symvar, Nil);
Obj x140289297756935 = makeCons(symw, x140289297756903);
Obj x140289297756967 = makeCons(Nil, x140289297756935);
Obj x140289297756999 = makeCons(x140289297756167, x140289297756967);
Obj x140289297757031 = makeCons(symgenerate_45inst, x140289297756999);
Obj x140289297758279 = makeCons(MAKE_NUMBER(4), Nil);
Obj x140289297758311 = makeCons(symi, x140289297758279);
Obj x140289297758343 = makeCons(sym_60, x140289297758311);
Obj x140289297759687 = makeCons(makeCString(" = __arg"), Nil);
Obj x140289297759719 = makeCons(symw, x140289297759687);
Obj x140289297759751 = makeCons(symgenerate_45str, x140289297759719);
Obj x140289297731879 = makeCons(symi, Nil);
Obj x140289297731911 = makeCons(symw, x140289297731879);
Obj x140289297731943 = makeCons(symgenerate_45num, x140289297731911);
Obj x140289297733479 = makeCons(makeCString(";\n"), Nil);
Obj x140289297733511 = makeCons(symw, x140289297733479);
Obj x140289297733543 = makeCons(symgenerate_45str, x140289297733511);
Obj x140289297733671 = makeCons(x140289297733543, Nil);
Obj x140289297733703 = makeCons(x140289297731943, x140289297733671);
Obj x140289297733735 = makeCons(x140289297759751, x140289297733703);
Obj x140289297733767 = makeCons(symbegin, x140289297733735);
Obj x140289297734919 = makeCons(makeCString(" = co->args["), Nil);
Obj x140289297734951 = makeCons(symw, x140289297734919);
Obj x140289297734983 = makeCons(symgenerate_45str, x140289297734951);
Obj x140289297326343 = makeCons(symi, Nil);
Obj x140289297326375 = makeCons(symw, x140289297326343);
Obj x140289297326407 = makeCons(symgenerate_45num, x140289297326375);
Obj x140289297327207 = makeCons(makeCString("];\n"), Nil);
Obj x140289297327239 = makeCons(symw, x140289297327207);
Obj x140289297327271 = makeCons(symgenerate_45str, x140289297327239);
Obj x140289297327335 = makeCons(x140289297327271, Nil);
Obj x140289297327367 = makeCons(x140289297326407, x140289297327335);
Obj x140289297327399 = makeCons(x140289297734983, x140289297327367);
Obj x140289297327495 = makeCons(symbegin, x140289297327399);
Obj x140289297327559 = makeCons(x140289297327495, Nil);
Obj x140289297327591 = makeCons(x140289297733767, x140289297327559);
Obj x140289297327623 = makeCons(x140289297758343, x140289297327591);
Obj x140289297327655 = makeCons(symif, x140289297327623);
Obj x140289297327815 = makeCons(x140289297327655, Nil);
Obj x140289297327847 = makeCons(x140289297757031, x140289297327815);
Obj x140289297327879 = makeCons(x140289297783815, x140289297327847);
Obj x140289297327911 = makeCons(symbegin, x140289297327879);
Obj x140289297327975 = makeCons(x140289297327911, Nil);
Obj x140289297328007 = makeCons(x140289297782567, x140289297327975);
Obj x140289297328039 = makeCons(symlocal_45from_45params, x140289297328007);
Obj x140289297328071 = makeCons(symdefun, x140289297328039);
PUSH_CONT_0(co, 0, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289297328071;
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
Obj x140289297328103 = __arg1;
pushCont(co, 1, clofun2, 1, x140289297328103);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x140289297328295 = __arg1;
Obj x140289297328103= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 2, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289297328103;
__arg2 = x140289297328295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x140289297328327 = __arg1;
Obj x140289297330023 = makeCons(symvar, Nil);
Obj x140289297330055 = makeCons(symi, x140289297330023);
Obj x140289297330087 = makeCons(symw, x140289297330055);
Obj x140289297298631 = makeCons(makeCString("Obj "), Nil);
Obj x140289297298663 = makeCons(symw, x140289297298631);
Obj x140289297298695 = makeCons(symgenerate_45str, x140289297298663);
Obj x140289297299655 = makeCons(symignore, Nil);
Obj x140289297299687 = makeCons(symquote, x140289297299655);
Obj x140289297300487 = makeCons(symvar, Nil);
Obj x140289297300519 = makeCons(symw, x140289297300487);
Obj x140289297300551 = makeCons(Nil, x140289297300519);
Obj x140289297300583 = makeCons(x140289297299687, x140289297300551);
Obj x140289297300615 = makeCons(symgenerate_45inst, x140289297300583);
Obj x140289297273479 = makeCons(makeCString("= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + "), Nil);
Obj x140289297273511 = makeCons(symw, x140289297273479);
Obj x140289297273543 = makeCons(symgenerate_45str, x140289297273511);
Obj x140289297274343 = makeCons(symi, Nil);
Obj x140289297274375 = makeCons(symw, x140289297274343);
Obj x140289297274407 = makeCons(symgenerate_45num, x140289297274375);
Obj x140289297275239 = makeCons(makeCString("];\n"), Nil);
Obj x140289297275271 = makeCons(symw, x140289297275239);
Obj x140289297275303 = makeCons(symgenerate_45str, x140289297275271);
Obj x140289297275367 = makeCons(x140289297275303, Nil);
Obj x140289297275399 = makeCons(x140289297274407, x140289297275367);
Obj x140289297275431 = makeCons(x140289297273543, x140289297275399);
Obj x140289297275463 = makeCons(x140289297300615, x140289297275431);
Obj x140289297275495 = makeCons(x140289297298695, x140289297275463);
Obj x140289297275527 = makeCons(symbegin, x140289297275495);
Obj x140289297275591 = makeCons(x140289297275527, Nil);
Obj x140289297275623 = makeCons(x140289297330087, x140289297275591);
Obj x140289297275719 = makeCons(symlocal_45from_45cont, x140289297275623);
Obj x140289297275751 = makeCons(symdefun, x140289297275719);
PUSH_CONT_0(co, 3, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289297275751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140289297275783 = __arg1;
pushCont(co, 4, clofun2, 1, x140289297275783);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140289297275975 = __arg1;
Obj x140289297275783= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 5, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289297275783;
__arg2 = x140289297275975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140289297276007 = __arg1;
Obj x140289297097639 = makeCons(symlist, Nil);
Obj x140289297099591 = makeCons(symb, Nil);
Obj x140289297099623 = makeCons(syma, x140289297099591);
Obj x140289297099655 = makeCons(symlist_45rest, x140289297099623);
Obj x140289297076839 = makeCons(syma, Nil);
Obj x140289297076871 = makeCons(symidx, x140289297076839);
Obj x140289297076903 = makeCons(symw, x140289297076871);
Obj x140289297076935 = makeCons(symfn, x140289297076903);
Obj x140289297078631 = makeCons(MAKE_NUMBER(1), Nil);
Obj x140289297078663 = makeCons(symidx, x140289297078631);
Obj x140289297078727 = makeCons(sym_43, x140289297078663);
Obj x140289297078983 = makeCons(symb, Nil);
Obj x140289297079015 = makeCons(x140289297078727, x140289297078983);
Obj x140289297079047 = makeCons(symw, x140289297079015);
Obj x140289297079079 = makeCons(symfn, x140289297079047);
Obj x140289297079111 = makeCons(symgenerate_45call_45args_45reverse, x140289297079079);
Obj x140289297079175 = makeCons(x140289297079111, Nil);
Obj x140289297079207 = makeCons(x140289297076935, x140289297079175);
Obj x140289297079239 = makeCons(symbegin, x140289297079207);
Obj x140289297079303 = makeCons(x140289297079239, Nil);
Obj x140289297079335 = makeCons(sym_61_62, x140289297079303);
Obj x140289297079367 = makeCons(x140289297099655, x140289297079335);
Obj x140289297079399 = makeCons(symidx, x140289297079367);
Obj x140289297079431 = makeCons(symw, x140289297079399);
Obj x140289297079463 = makeCons(symfn, x140289297079431);
Obj x140289297079495 = makeCons(Nil, x140289297079463);
Obj x140289297079527 = makeCons(sym_61_62, x140289297079495);
Obj x140289297079559 = makeCons(x140289297097639, x140289297079527);
Obj x140289297079591 = makeCons(symidx, x140289297079559);
Obj x140289297079623 = makeCons(symw, x140289297079591);
Obj x140289297079655 = makeCons(symfn, x140289297079623);
Obj x140289297079687 = makeCons(symgenerate_45call_45args_45reverse, x140289297079655);
Obj x140289297079719 = makeCons(symfunc, x140289297079687);
PUSH_CONT_0(co, 6, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289297079719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140289297079751 = __arg1;
pushCont(co, 7, clofun2, 1, x140289297079751);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140289297079943 = __arg1;
Obj x140289297079751= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 8, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289297079751;
__arg2 = x140289297079943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140289297079975 = __arg1;
Obj x140289297029703 = makeCons(symlambda, Nil);
Obj x140289297029735 = makeCons(symquote, x140289297029703);
Obj x140289297030407 = makeCons(symbody, Nil);
Obj x140289297030439 = makeCons(symactives, x140289297030407);
Obj x140289297030471 = makeCons(symparams, x140289297030439);
Obj x140289297030503 = makeCons(x140289297029735, x140289297030471);
Obj x140289297030535 = makeCons(symlist, x140289297030503);
Obj x140289297030599 = makeCons(x140289297030535, Nil);
Obj x140289297030631 = makeCons(symlabel, x140289297030599);
Obj x140289297030663 = makeCons(symlist, x140289297030631);
Obj x140289296999751 = makeCons(makeCString("label"), Nil);
Obj x140289296999783 = makeCons(symw, x140289296999751);
Obj x140289296999815 = makeCons(symgenerate_45str, x140289296999783);
Obj x140289297001735 = makeCons(symlabel, Nil);
Obj x140289297001767 = makeCons(symmaxid, x140289297001735);
Obj x140289297001799 = makeCons(sym_45, x140289297001767);
Obj x140289297002119 = makeCons(sym_42mod_45num_42, Nil);
Obj x140289297002151 = makeCons(x140289297001799, x140289297002119);
Obj x140289297002183 = makeCons(symmod, x140289297002151);
Obj x140289297002247 = makeCons(x140289297002183, Nil);
Obj x140289297002279 = makeCons(symw, x140289297002247);
Obj x140289297002311 = makeCons(symgenerate_45num, x140289297002279);
Obj x140289296683687 = makeCons(makeCString(":\n{\n"), Nil);
Obj x140289296683719 = makeCons(symw, x140289296683687);
Obj x140289296683751 = makeCons(symgenerate_45str, x140289296683719);
Obj x140289296685191 = makeCons(symparams, Nil);
Obj x140289296685223 = makeCons(MAKE_NUMBER(1), x140289296685191);
Obj x140289296685255 = makeCons(symw, x140289296685223);
Obj x140289296685351 = makeCons(symlocal_45from_45params, x140289296685255);
Obj x140289296685383 = makeCons(symgenerate_45call_45args_45reverse, x140289296685351);
Obj x140289296686695 = makeCons(symactives, Nil);
Obj x140289296686727 = makeCons(MAKE_NUMBER(0), x140289296686695);
Obj x140289296686759 = makeCons(symw, x140289296686727);
Obj x140289296686791 = makeCons(symlocal_45from_45cont, x140289296686759);
Obj x140289296686823 = makeCons(symgenerate_45call_45args_45reverse, x140289296686791);
Obj x140289296663559 = makeCons(symlabel, Nil);
Obj x140289296663591 = makeCons(symmaxid, x140289296663559);
Obj x140289296663623 = makeCons(symcons, x140289296663591);
Obj x140289296664423 = makeCons(symbody, Nil);
Obj x140289296664455 = makeCons(symw, x140289296664423);
Obj x140289296664487 = makeCons(symparams, x140289296664455);
Obj x140289296664519 = makeCons(x140289296663623, x140289296664487);
Obj x140289296664551 = makeCons(symgenerate_45inst, x140289296664519);
Obj x140289296665415 = makeCons(makeCString("}\n\n"), Nil);
Obj x140289296665447 = makeCons(symw, x140289296665415);
Obj x140289296665479 = makeCons(symgenerate_45str, x140289296665447);
Obj x140289296665543 = makeCons(x140289296665479, Nil);
Obj x140289296665575 = makeCons(x140289296664551, x140289296665543);
Obj x140289296665607 = makeCons(x140289296686823, x140289296665575);
Obj x140289296665639 = makeCons(x140289296685383, x140289296665607);
Obj x140289296665671 = makeCons(x140289296683751, x140289296665639);
Obj x140289296665703 = makeCons(x140289297002311, x140289296665671);
Obj x140289296665735 = makeCons(x140289296999815, x140289296665703);
Obj x140289296665767 = makeCons(symbegin, x140289296665735);
Obj x140289296389191 = makeCons(makeCString("wrong format of toplevel\n"), Nil);
Obj x140289296389223 = makeCons(symdisplay, x140289296389191);
Obj x140289296389831 = makeCons(symother, Nil);
Obj x140289296389863 = makeCons(symdisplay, x140289296389831);
Obj x140289296390663 = makeCons(makeCString("\n"), Nil);
Obj x140289296390823 = makeCons(symdisplay, x140289296390663);
Obj x140289296390887 = makeCons(x140289296390823, Nil);
Obj x140289296390919 = makeCons(x140289296389863, x140289296390887);
Obj x140289296390951 = makeCons(x140289296389223, x140289296390919);
Obj x140289296390983 = makeCons(symbegin, x140289296390951);
Obj x140289296391047 = makeCons(x140289296390983, Nil);
Obj x140289296391079 = makeCons(sym_61_62, x140289296391047);
Obj x140289296391111 = makeCons(symmaxid, x140289296391079);
Obj x140289296391143 = makeCons(symother, x140289296391111);
Obj x140289296391175 = makeCons(symw, x140289296391143);
Obj x140289296391207 = makeCons(x140289296665767, x140289296391175);
Obj x140289296391239 = makeCons(sym_61_62, x140289296391207);
Obj x140289296391271 = makeCons(symmaxid, x140289296391239);
Obj x140289296391303 = makeCons(x140289297030663, x140289296391271);
Obj x140289296391335 = makeCons(symw, x140289296391303);
Obj x140289296391367 = makeCons(symcode_45gen_45toplevel, x140289296391335);
Obj x140289296391399 = makeCons(symfunc, x140289296391367);
PUSH_CONT_0(co, 9, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289296391399;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140289296391431 = __arg1;
pushCont(co, 10, clofun2, 1, x140289296391431);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140289296391623 = __arg1;
Obj x140289296391431= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 11, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289296391431;
__arg2 = x140289296391623;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140289296391655 = __arg1;
Obj x140289296360455 = makeCons(symexp, Nil);
Obj x140289296360487 = makeCons(symglobals, x140289296360455);
Obj x140289296361319 = makeCons(symlist, Nil);
Obj x140289296361895 = makeCons(symexp, Nil);
Obj x140289296361927 = makeCons(symglobals, x140289296361895);
Obj x140289296361959 = makeCons(x140289296361319, x140289296361927);
Obj x140289296361991 = makeCons(symparse, x140289296361959);
Obj x140289296362055 = makeCons(x140289296361991, Nil);
Obj x140289296362087 = makeCons(x140289296360487, x140289296362055);
Obj x140289296362119 = makeCons(symparse_45pass, x140289296362087);
Obj x140289296362151 = makeCons(symdefun, x140289296362119);
PUSH_CONT_0(co, 12, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289296362151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140289296362183 = __arg1;
pushCont(co, 13, clofun2, 1, x140289296362183);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140289296362375 = __arg1;
Obj x140289296362183= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 14, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289296362183;
__arg2 = x140289296362375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140289296362407 = __arg1;
Obj x140289296314567 = makeCons(symexp, Nil);
Obj x140289296315431 = makeCons(symlist, Nil);
Obj x140289296315687 = makeCons(symexp, Nil);
Obj x140289296315719 = makeCons(x140289296315431, x140289296315687);
Obj x140289296315751 = makeCons(symclosure_45convert, x140289296315719);
Obj x140289296315815 = makeCons(x140289296315751, Nil);
Obj x140289296315847 = makeCons(x140289296314567, x140289296315815);
Obj x140289296315879 = makeCons(symclosure_45convert_45pass, x140289296315847);
Obj x140289296315911 = makeCons(symdefun, x140289296315879);
PUSH_CONT_0(co, 15, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289296315911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140289296315943 = __arg1;
pushCont(co, 16, clofun2, 1, x140289296315943);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140289296316167 = __arg1;
Obj x140289296315943= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 17, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289296315943;
__arg2 = x140289296316167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140289296316199 = __arg1;
Obj x140289296317351 = makeCons(symexp, Nil);
Obj x140289296242087 = makeCons(symid, Nil);
Obj x140289296242119 = makeCons(symexp, x140289296242087);
Obj x140289296242151 = makeCons(symtailify, x140289296242119);
Obj x140289296242215 = makeCons(x140289296242151, Nil);
Obj x140289296242247 = makeCons(x140289296317351, x140289296242215);
Obj x140289296242279 = makeCons(symtailify_45pass, x140289296242247);
Obj x140289296242311 = makeCons(symdefun, x140289296242279);
PUSH_CONT_0(co, 18, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289296242311;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140289296242343 = __arg1;
pushCont(co, 19, clofun2, 1, x140289296242343);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140289296242535 = __arg1;
Obj x140289296242343= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 20, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289296242343;
__arg2 = x140289296242535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140289296242567 = __arg1;
Obj x140289296243719 = makeCons(symexp, Nil);
Obj x140289296244551 = makeCons(symlist, Nil);
Obj x140289296232519 = makeCons(symexp, Nil);
Obj x140289296232551 = makeCons(x140289296244551, x140289296232519);
Obj x140289296232583 = makeCons(symexplicit_45stack, x140289296232551);
Obj x140289296232647 = makeCons(x140289296232583, Nil);
Obj x140289296232679 = makeCons(x140289296243719, x140289296232647);
Obj x140289296232711 = makeCons(symexplicit_45stack_45pass, x140289296232679);
Obj x140289296232743 = makeCons(symdefun, x140289296232711);
PUSH_CONT_0(co, 21, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289296232743;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140289296232775 = __arg1;
pushCont(co, 22, clofun2, 1, x140289296232775);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140289296232967 = __arg1;
Obj x140289296232775= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 23, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289296232775;
__arg2 = x140289296232967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140289296232999 = __arg1;
Obj x140289296234247 = makeCons(symexp, Nil);
Obj x140289296235495 = makeCons(MAKE_NUMBER(2), Nil);
Obj x140289296235527 = makeCons(symvector, x140289296235495);
Obj x140289296098023 = makeCons(MAKE_NUMBER(0), Nil);
Obj x140289296098055 = makeCons(MAKE_NUMBER(0), x140289296098023);
Obj x140289296098087 = makeCons(symv, x140289296098055);
Obj x140289296098119 = makeCons(symvector_45set_33, x140289296098087);
Obj x140289296099175 = makeCons(Nil, Nil);
Obj x140289296099207 = makeCons(MAKE_NUMBER(1), x140289296099175);
Obj x140289296099239 = makeCons(symv, x140289296099207);
Obj x140289296099271 = makeCons(symvector_45set_33, x140289296099239);
Obj x140289296100807 = makeCons(symexp, Nil);
Obj x140289296100839 = makeCons(symv, x140289296100807);
Obj x140289296100871 = makeCons(symcollect_45lambda, x140289296100839);
Obj x140289296074311 = makeCons(symlambda, Nil);
Obj x140289296074343 = makeCons(symquote, x140289296074311);
Obj x140289296075047 = makeCons(syme1, Nil);
Obj x140289296075079 = makeCons(Nil, x140289296075047);
Obj x140289296075111 = makeCons(Nil, x140289296075079);
Obj x140289296075143 = makeCons(x140289296074343, x140289296075111);
Obj x140289296075175 = makeCons(symlist, x140289296075143);
Obj x140289296075239 = makeCons(x140289296075175, Nil);
Obj x140289296075271 = makeCons(symv, x140289296075239);
Obj x140289296075303 = makeCons(symappend_45result, x140289296075271);
Obj x140289296076167 = makeCons(MAKE_NUMBER(1), Nil);
Obj x140289296076199 = makeCons(symv, x140289296076167);
Obj x140289296076231 = makeCons(symvector_45ref, x140289296076199);
Obj x140289296076295 = makeCons(x140289296076231, Nil);
Obj x140289296076327 = makeCons(x140289296075303, x140289296076295);
Obj x140289296076359 = makeCons(symbegin, x140289296076327);
Obj x140289296076423 = makeCons(x140289296076359, Nil);
Obj x140289296076455 = makeCons(x140289296100871, x140289296076423);
Obj x140289296076487 = makeCons(syme1, x140289296076455);
Obj x140289296076519 = makeCons(symlet, x140289296076487);
Obj x140289296076583 = makeCons(x140289296076519, Nil);
Obj x140289296076615 = makeCons(x140289296099271, x140289296076583);
Obj x140289296076647 = makeCons(x140289296098119, x140289296076615);
Obj x140289296076679 = makeCons(symbegin, x140289296076647);
Obj x140289296076743 = makeCons(x140289296076679, Nil);
Obj x140289296076775 = makeCons(x140289296235527, x140289296076743);
Obj x140289295937543 = makeCons(symv, x140289296076775);
Obj x140289295937575 = makeCons(symlet, x140289295937543);
Obj x140289295937639 = makeCons(x140289295937575, Nil);
Obj x140289295937671 = makeCons(x140289296234247, x140289295937639);
Obj x140289295937799 = makeCons(symcollect_45lambda_45pass, x140289295937671);
Obj x140289295937959 = makeCons(symdefun, x140289295937799);
PUSH_CONT_0(co, 24, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289295937959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140289295937991 = __arg1;
pushCont(co, 25, clofun2, 1, x140289295937991);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140289295938183 = __arg1;
Obj x140289295937991= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 26, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289295937991;
__arg2 = x140289295938183;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140289295938215 = __arg1;
Obj x140289295939975 = makeCons(symlist, Nil);
Obj x140289295941575 = makeCons(symmore, Nil);
Obj x140289295941607 = makeCons(symhd, x140289295941575);
Obj x140289294840167 = makeCons(symlist_45rest, x140289295941607);
Obj x140289294842567 = makeCons(symobj, Nil);
Obj x140289294842631 = makeCons(symhd, x140289294842567);
Obj x140289294842695 = makeCons(symlist, x140289294842631);
Obj x140289294843047 = makeCons(symmore, Nil);
Obj x140289294843079 = makeCons(x140289294842695, x140289294843047);
Obj x140289294843111 = makeCons(symrewrite_45_45_62macro, x140289294843079);
Obj x140289294843175 = makeCons(x140289294843111, Nil);
Obj x140289294843207 = makeCons(sym_61_62, x140289294843175);
Obj x140289294843239 = makeCons(x140289294840167, x140289294843207);
Obj x140289294843335 = makeCons(symobj, x140289294843239);
Obj x140289294843399 = makeCons(symobj, x140289294843335);
Obj x140289294843431 = makeCons(sym_61_62, x140289294843399);
Obj x140289294843559 = makeCons(x140289295939975, x140289294843431);
Obj x140289294843591 = makeCons(symobj, x140289294843559);
Obj x140289294843623 = makeCons(symrewrite_45_45_62macro, x140289294843591);
Obj x140289294843655 = makeCons(symfunc, x140289294843623);
PUSH_CONT_0(co, 27, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289294843655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140289294843687 = __arg1;
pushCont(co, 28, clofun2, 1, x140289294843687);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140289294807239 = __arg1;
Obj x140289294843687= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 29, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289294843687;
__arg2 = x140289294807239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x140289294807271 = __arg1;
Obj x140289294809319 = makeCons(symexp, Nil);
Obj x140289294810887 = makeCons(symexp, Nil);
Obj x140289294810951 = makeCons(symcadr, x140289294810887);
Obj x140289294762183 = makeCons(symexp, Nil);
Obj x140289294762503 = makeCons(symcddr, x140289294762183);
Obj x140289294763495 = makeCons(symfns, Nil);
Obj x140289294763527 = makeCons(symobj, x140289294763495);
Obj x140289294763559 = makeCons(symrewrite_45_45_62macro, x140289294763527);
Obj x140289294763623 = makeCons(x140289294763559, Nil);
Obj x140289294763783 = makeCons(x140289294762503, x140289294763623);
Obj x140289294763879 = makeCons(symfns, x140289294763783);
Obj x140289294763911 = makeCons(symlet, x140289294763879);
Obj x140289294763975 = makeCons(x140289294763911, Nil);
Obj x140289294764039 = makeCons(x140289294810951, x140289294763975);
Obj x140289294764071 = makeCons(symobj, x140289294764039);
Obj x140289294764103 = makeCons(symlet, x140289294764071);
Obj x140289294764167 = makeCons(x140289294764103, Nil);
Obj x140289294764199 = makeCons(x140289294809319, x140289294764167);
Obj x140289294764231 = makeCons(sym_45_62, x140289294764199);
Obj x140289294764263 = makeCons(symdefmacro, x140289294764231);
PUSH_CONT_0(co, 30, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289294764263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140289294764327 = __arg1;
pushCont(co, 31, clofun2, 1, x140289294764327);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140289294764647 = __arg1;
Obj x140289294764327= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 32, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289294764327;
__arg2 = x140289294764647;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140289294764711 = __arg1;
Obj x140289294619431 = makeCons(symexp, Nil);
Obj x140289294619463 = makeCons(symglobals, x140289294619431);
Obj x140289294620839 = makeCons(symglobals, Nil);
Obj x140289294620871 = makeCons(symparse_45pass, x140289294620839);
Obj x140289294621991 = makeCons(symcollect_45lambda_45pass, Nil);
Obj x140289294622023 = makeCons(symexplicit_45stack_45pass, x140289294621991);
Obj x140289294622055 = makeCons(symtailify_45pass, x140289294622023);
Obj x140289294622087 = makeCons(symclosure_45convert_45pass, x140289294622055);
Obj x140289294622119 = makeCons(x140289294620871, x140289294622087);
Obj x140289294622151 = makeCons(symexp, x140289294622119);
Obj x140289294622183 = makeCons(sym_45_62, x140289294622151);
Obj x140289294622247 = makeCons(x140289294622183, Nil);
Obj x140289294622279 = makeCons(x140289294619463, x140289294622247);
Obj x140289294622311 = makeCons(symcompile, x140289294622279);
Obj x140289294622343 = makeCons(symdefun, x140289294622311);
PUSH_CONT_0(co, 33, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289294622343;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140289294622375 = __arg1;
pushCont(co, 34, clofun2, 1, x140289294622375);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140289294606375 = __arg1;
Obj x140289294622375= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 35, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289294622375;
__arg2 = x140289294606375;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140289294606407 = __arg1;
Obj x140289294608167 = makeCons(symlist, Nil);
Obj x140289294608839 = makeCons(symlist, Nil);
Obj x140289294610055 = makeCons(symy, Nil);
Obj x140289294610087 = makeCons(symx, x140289294610055);
Obj x140289294610119 = makeCons(symlist_45rest, x140289294610087);
Obj x140289294205927 = makeCons(symx, Nil);
Obj x140289294205959 = makeCons(symfn, x140289294205927);
Obj x140289294206759 = makeCons(symy, Nil);
Obj x140289294206791 = makeCons(symfn, x140289294206759);
Obj x140289294206823 = makeCons(symfor_45each, x140289294206791);
Obj x140289294206887 = makeCons(x140289294206823, Nil);
Obj x140289294206919 = makeCons(x140289294205959, x140289294206887);
Obj x140289294206951 = makeCons(symbegin, x140289294206919);
Obj x140289294207047 = makeCons(x140289294206951, Nil);
Obj x140289294207079 = makeCons(sym_61_62, x140289294207047);
Obj x140289294207111 = makeCons(x140289294610119, x140289294207079);
Obj x140289294207143 = makeCons(symfn, x140289294207111);
Obj x140289294207175 = makeCons(x140289294608839, x140289294207143);
Obj x140289294207207 = makeCons(sym_61_62, x140289294207175);
Obj x140289294207239 = makeCons(x140289294608167, x140289294207207);
Obj x140289294207271 = makeCons(symfn, x140289294207239);
Obj x140289294207303 = makeCons(symfor_45each, x140289294207271);
Obj x140289294207335 = makeCons(symfunc, x140289294207303);
PUSH_CONT_0(co, 36, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289294207335;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140289294207367 = __arg1;
pushCont(co, 37, clofun2, 1, x140289294207367);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140289294207559 = __arg1;
Obj x140289294207367= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 38, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289294207367;
__arg2 = x140289294207559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140289294207591 = __arg1;
Obj x140289294119175 = makeCons(symn, Nil);
Obj x140289294119239 = makeCons(symi, x140289294119175);
Obj x140289294119271 = makeCons(symto, x140289294119239);
Obj x140289294121159 = makeCons(MAKE_NUMBER(0), Nil);
Obj x140289294121191 = makeCons(symi, x140289294121159);
Obj x140289294121223 = makeCons(sym_61, x140289294121191);
Obj x140289294122567 = makeCons(makeCString("&&label0"), Nil);
Obj x140289294122599 = makeCons(symto, x140289294122567);
Obj x140289294122631 = makeCons(symgenerate_45str, x140289294122599);
Obj x140289294066311 = makeCons(symn, Nil);
Obj x140289294066343 = makeCons(MAKE_NUMBER(1), x140289294066311);
Obj x140289294066375 = makeCons(symto, x140289294066343);
Obj x140289294066407 = makeCons(symgenerate_45jumptable, x140289294066375);
Obj x140289294066471 = makeCons(x140289294066407, Nil);
Obj x140289294066503 = makeCons(x140289294122631, x140289294066471);
Obj x140289294066535 = makeCons(symbegin, x140289294066503);
Obj x140289294066599 = makeCons(x140289294066535, Nil);
Obj x140289294066631 = makeCons(x140289294121223, x140289294066599);
Obj x140289294067655 = makeCons(symn, Nil);
Obj x140289294067687 = makeCons(symi, x140289294067655);
Obj x140289294067719 = makeCons(sym_60, x140289294067687);
Obj x140289294068967 = makeCons(makeCString(", &&label"), Nil);
Obj x140289294068999 = makeCons(symto, x140289294068967);
Obj x140289294069031 = makeCons(symgenerate_45str, x140289294068999);
Obj x140289293996167 = makeCons(symi, Nil);
Obj x140289293996199 = makeCons(symto, x140289293996167);
Obj x140289293996231 = makeCons(symgenerate_45num, x140289293996199);
Obj x140289293998183 = makeCons(MAKE_NUMBER(1), Nil);
Obj x140289293998215 = makeCons(symi, x140289293998183);
Obj x140289293998247 = makeCons(sym_43, x140289293998215);
Obj x140289293998503 = makeCons(symn, Nil);
Obj x140289293998535 = makeCons(x140289293998247, x140289293998503);
Obj x140289293998567 = makeCons(symto, x140289293998535);
Obj x140289293998599 = makeCons(symgenerate_45jumptable, x140289293998567);
Obj x140289293998823 = makeCons(x140289293998599, Nil);
Obj x140289293998855 = makeCons(x140289293996231, x140289293998823);
Obj x140289293998887 = makeCons(x140289294069031, x140289293998855);
Obj x140289293998919 = makeCons(symbegin, x140289293998887);
Obj x140289293998983 = makeCons(x140289293998919, Nil);
Obj x140289293999015 = makeCons(x140289294067719, x140289293998983);
Obj x140289293999623 = makeCons(Nil, Nil);
Obj x140289293999655 = makeCons(True, x140289293999623);
Obj x140289293999719 = makeCons(x140289293999655, Nil);
Obj x140289293999751 = makeCons(x140289293999015, x140289293999719);
Obj x140289293999783 = makeCons(x140289294066631, x140289293999751);
Obj x140289293999815 = makeCons(symcond, x140289293999783);
Obj x140289293999879 = makeCons(x140289293999815, Nil);
Obj x140289293999911 = makeCons(x140289294119271, x140289293999879);
Obj x140289293999943 = makeCons(symgenerate_45jumptable, x140289293999911);
Obj x140289293999975 = makeCons(symdefun, x140289293999943);
PUSH_CONT_0(co, 39, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289293999975;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140289294000007 = __arg1;
pushCont(co, 40, clofun2, 1, x140289294000007);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140289293901895 = __arg1;
Obj x140289294000007= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 41, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289294000007;
__arg2 = x140289293901895;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140289293901927 = __arg1;
Obj x140289293903559 = makeCons(symmaxid, Nil);
Obj x140289293903591 = makeCons(symgroup, x140289293903559);
Obj x140289293903623 = makeCons(symto, x140289293903591);
Obj x140289293905575 = makeCons(symgroup, Nil);
Obj x140289293905607 = makeCons(symcaar, x140289293905575);
Obj x140289293873159 = makeCons(symmaxid, Nil);
Obj x140289293873191 = makeCons(x140289293905607, x140289293873159);
Obj x140289293873223 = makeCons(symto, x140289293873191);
Obj x140289293873255 = makeCons(symcode_45gen_45func_45declare, x140289293873223);
Obj x140289293874119 = makeCons(makeCString("{\n"), Nil);
Obj x140289293874151 = makeCons(symto, x140289293874119);
Obj x140289293874183 = makeCons(symgenerate_45str, x140289293874151);
Obj x140289293875239 = makeCons(makeCString("int __nargs = co->nargs;\n"), Nil);
Obj x140289293875271 = makeCons(symto, x140289293875239);
Obj x140289293875303 = makeCons(symgenerate_45str, x140289293875271);
Obj x140289293876103 = makeCons(makeCString("Obj __arg0 = co->args[0];\n"), Nil);
Obj x140289293876135 = makeCons(symto, x140289293876103);
Obj x140289293876167 = makeCons(symgenerate_45str, x140289293876135);
Obj x140289293877031 = makeCons(makeCString("Obj __arg1 = co->args[1];\n"), Nil);
Obj x140289293877063 = makeCons(symto, x140289293877031);
Obj x140289293877095 = makeCons(symgenerate_45str, x140289293877063);
Obj x140289293836999 = makeCons(makeCString("Obj __arg2 = co->args[2];\n"), Nil);
Obj x140289293837031 = makeCons(symto, x140289293836999);
Obj x140289293837063 = makeCons(symgenerate_45str, x140289293837031);
Obj x140289293838087 = makeCons(makeCString("Obj __arg3 = co->args[3];\n\n"), Nil);
Obj x140289293838119 = makeCons(symto, x140289293838087);
Obj x140289293838151 = makeCons(symgenerate_45str, x140289293838119);
Obj x140289293839143 = makeCons(makeCString("static void* jumpTable[] = {"), Nil);
Obj x140289293839175 = makeCons(symto, x140289293839143);
Obj x140289293839303 = makeCons(symgenerate_45str, x140289293839175);
Obj x140289293828359 = makeCons(symgroup, Nil);
Obj x140289293828391 = makeCons(symlength, x140289293828359);
Obj x140289293828455 = makeCons(x140289293828391, Nil);
Obj x140289293828487 = makeCons(MAKE_NUMBER(0), x140289293828455);
Obj x140289293828615 = makeCons(symto, x140289293828487);
Obj x140289293828647 = makeCons(symgenerate_45jumptable, x140289293828615);
Obj x140289293830791 = makeCons(makeCString("};\n\n"), Nil);
Obj x140289293830823 = makeCons(symto, x140289293830791);
Obj x140289293830855 = makeCons(symgenerate_45str, x140289293830823);
Obj x140289293831655 = makeCons(makeCString("goto *jumpTable[co->ctx.pc.label];\n\n"), Nil);
Obj x140289293831687 = makeCons(symto, x140289293831655);
Obj x140289293831719 = makeCons(symgenerate_45str, x140289293831687);
Obj x140289293783719 = makeCons(symx, Nil);
Obj x140289293784775 = makeCons(symmaxid, Nil);
Obj x140289293784807 = makeCons(symx, x140289293784775);
Obj x140289293784839 = makeCons(symto, x140289293784807);
Obj x140289293784871 = makeCons(symcode_45gen_45toplevel, x140289293784839);
Obj x140289293784935 = makeCons(x140289293784871, Nil);
Obj x140289293784967 = makeCons(x140289293783719, x140289293784935);
Obj x140289293784999 = makeCons(symlambda, x140289293784967);
Obj x140289293785255 = makeCons(symgroup, Nil);
Obj x140289293785287 = makeCons(x140289293784999, x140289293785255);
Obj x140289293785319 = makeCons(symfor_45each, x140289293785287);
Obj x140289293786119 = makeCons(makeCString("fail:\n"), Nil);
Obj x140289293786151 = makeCons(symto, x140289293786119);
Obj x140289293786183 = makeCons(symgenerate_45str, x140289293786151);
Obj x140289293787111 = makeCons(makeCString("co->nargs = __nargs;\n"), Nil);
Obj x140289293746183 = makeCons(symto, x140289293787111);
Obj x140289293746215 = makeCons(symgenerate_45str, x140289293746183);
Obj x140289293747143 = makeCons(makeCString("co->args[0] = __arg0;\n"), Nil);
Obj x140289293747271 = makeCons(symto, x140289293747143);
Obj x140289293747399 = makeCons(symgenerate_45str, x140289293747271);
Obj x140289293748359 = makeCons(makeCString("co->args[1] = __arg1;\n"), Nil);
Obj x140289293748391 = makeCons(symto, x140289293748359);
Obj x140289293748423 = makeCons(symgenerate_45str, x140289293748391);
Obj x140289293749223 = makeCons(makeCString("co->args[2] = __arg2;\n"), Nil);
Obj x140289293749255 = makeCons(symto, x140289293749223);
Obj x140289293749383 = makeCons(symgenerate_45str, x140289293749255);
Obj x140289293750183 = makeCons(makeCString("co->args[3] = __arg3;\n"), Nil);
Obj x140289293750215 = makeCons(symto, x140289293750183);
Obj x140289293750247 = makeCons(symgenerate_45str, x140289293750215);
Obj x140289293525991 = makeCons(makeCString("\n}\n\n"), Nil);
Obj x140289293526023 = makeCons(symto, x140289293525991);
Obj x140289293526055 = makeCons(symgenerate_45str, x140289293526023);
Obj x140289293526119 = makeCons(x140289293526055, Nil);
Obj x140289293526151 = makeCons(x140289293750247, x140289293526119);
Obj x140289293526183 = makeCons(x140289293749383, x140289293526151);
Obj x140289293526215 = makeCons(x140289293748423, x140289293526183);
Obj x140289293526247 = makeCons(x140289293747399, x140289293526215);
Obj x140289293526279 = makeCons(x140289293746215, x140289293526247);
Obj x140289293526311 = makeCons(x140289293786183, x140289293526279);
Obj x140289293526343 = makeCons(x140289293785319, x140289293526311);
Obj x140289293526375 = makeCons(x140289293831719, x140289293526343);
Obj x140289293526407 = makeCons(x140289293830855, x140289293526375);
Obj x140289293526439 = makeCons(x140289293828647, x140289293526407);
Obj x140289293526471 = makeCons(x140289293839303, x140289293526439);
Obj x140289293526503 = makeCons(x140289293838151, x140289293526471);
Obj x140289293526535 = makeCons(x140289293837063, x140289293526503);
Obj x140289293526567 = makeCons(x140289293877095, x140289293526535);
Obj x140289293526599 = makeCons(x140289293876167, x140289293526567);
Obj x140289293526631 = makeCons(x140289293875303, x140289293526599);
Obj x140289293526663 = makeCons(x140289293874183, x140289293526631);
Obj x140289293526695 = makeCons(x140289293873255, x140289293526663);
Obj x140289293526727 = makeCons(symbegin, x140289293526695);
Obj x140289293526823 = makeCons(x140289293526727, Nil);
Obj x140289293526855 = makeCons(x140289293903623, x140289293526823);
Obj x140289293526887 = makeCons(symgenerate_45toplevel_45group, x140289293526855);
Obj x140289293526919 = makeCons(symdefun, x140289293526887);
PUSH_CONT_0(co, 42, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289293526919;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140289293526951 = __arg1;
pushCont(co, 43, clofun2, 1, x140289293526951);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140289293527143 = __arg1;
Obj x140289293526951= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 44, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289293526951;
__arg2 = x140289293527143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140289293527175 = __arg1;
Obj x140289293529031 = makeCons(symlist, Nil);
Obj x140289293457991 = makeCons(symacc, Nil);
Obj x140289293458023 = makeCons(symnull_63, x140289293457991);
Obj x140289293458087 = makeCons(x140289293458023, Nil);
Obj x140289293458119 = makeCons(symnot, x140289293458087);
Obj x140289293459175 = makeCons(symacc, Nil);
Obj x140289293459207 = makeCons(symreverse, x140289293459175);
Obj x140289293180935 = makeCons(symres, Nil);
Obj x140289293180967 = makeCons(x140289293459207, x140289293180935);
Obj x140289293180999 = makeCons(symcons, x140289293180967);
Obj x140289293181255 = makeCons(symres, Nil);
Obj x140289293181287 = makeCons(x140289293180999, x140289293181255);
Obj x140289293181319 = makeCons(x140289293458119, x140289293181287);
Obj x140289293181351 = makeCons(symif, x140289293181319);
Obj x140289293181415 = makeCons(x140289293181351, Nil);
Obj x140289293181447 = makeCons(symreverse, x140289293181415);
Obj x140289293182855 = makeCons(symmore, Nil);
Obj x140289293182887 = makeCons(symbc, x140289293182855);
Obj x140289293182919 = makeCons(symlist_45rest, x140289293182887);
Obj x140289292824711 = makeCons(sym_42mod_45num_42, Nil);
Obj x140289292824743 = makeCons(symidx, x140289292824711);
Obj x140289292824775 = makeCons(sym_61, x140289292824743);
Obj x140289292826087 = makeCons(symacc, Nil);
Obj x140289292826119 = makeCons(symreverse, x140289292826087);
Obj x140289292826439 = makeCons(symres, Nil);
Obj x140289292826471 = makeCons(x140289292826119, x140289292826439);
Obj x140289292826503 = makeCons(symcons, x140289292826471);
Obj x140289292827111 = makeCons(symlist, Nil);
Obj x140289292827975 = makeCons(symmore, Nil);
Obj x140289292828007 = makeCons(symbc, x140289292827975);
Obj x140289292828039 = makeCons(symlist_45rest, x140289292828007);
Obj x140289292828103 = makeCons(x140289292828039, Nil);
Obj x140289292828135 = makeCons(x140289292827111, x140289292828103);
Obj x140289292828167 = makeCons(MAKE_NUMBER(0), x140289292828135);
Obj x140289292828199 = makeCons(x140289292826503, x140289292828167);
Obj x140289292828231 = makeCons(symgroup_45by_45mod_45h, x140289292828199);
Obj x140289292817479 = makeCons(MAKE_NUMBER(1), Nil);
Obj x140289292817511 = makeCons(symidx, x140289292817479);
Obj x140289292817543 = makeCons(sym_43, x140289292817511);
Obj x140289292818343 = makeCons(symacc, Nil);
Obj x140289292818375 = makeCons(symbc, x140289292818343);
Obj x140289292818471 = makeCons(symcons, x140289292818375);
Obj x140289292818727 = makeCons(symmore, Nil);
Obj x140289292818759 = makeCons(x140289292818471, x140289292818727);
Obj x140289292818791 = makeCons(x140289292817543, x140289292818759);
Obj x140289292818823 = makeCons(symres, x140289292818791);
Obj x140289292818855 = makeCons(symgroup_45by_45mod_45h, x140289292818823);
Obj x140289292818919 = makeCons(x140289292818855, Nil);
Obj x140289292818951 = makeCons(x140289292828231, x140289292818919);
Obj x140289292818983 = makeCons(x140289292824775, x140289292818951);
Obj x140289292819015 = makeCons(symif, x140289292818983);
Obj x140289292819079 = makeCons(x140289292819015, Nil);
Obj x140289292819111 = makeCons(sym_61_62, x140289292819079);
Obj x140289292819143 = makeCons(x140289293182919, x140289292819111);
Obj x140289292819175 = makeCons(symacc, x140289292819143);
Obj x140289292819207 = makeCons(symidx, x140289292819175);
Obj x140289292819239 = makeCons(symres, x140289292819207);
Obj x140289292819271 = makeCons(x140289293181447, x140289292819239);
Obj x140289292819303 = makeCons(sym_61_62, x140289292819271);
Obj x140289292819335 = makeCons(x140289293529031, x140289292819303);
Obj x140289292819367 = makeCons(symacc, x140289292819335);
Obj x140289292819399 = makeCons(symidx, x140289292819367);
Obj x140289292819527 = makeCons(symres, x140289292819399);
Obj x140289292819687 = makeCons(symgroup_45by_45mod_45h, x140289292819527);
Obj x140289292819719 = makeCons(symfunc, x140289292819687);
PUSH_CONT_0(co, 45, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289292819719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140289292819751 = __arg1;
pushCont(co, 46, clofun2, 1, x140289292819751);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140289292819943 = __arg1;
Obj x140289292819751= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 47, clofun2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289292819751;
__arg2 = x140289292819943;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140289292819975 = __arg1;
Obj x140289292776455 = makeCons(symglobals, Nil);
Obj x140289292776487 = makeCons(symto, x140289292776455);
Obj x140289292777959 = makeCons(symsym, Nil);
Obj x140289292779271 = makeCons(makeCString("static Obj sym"), Nil);
Obj x140289292779303 = makeCons(symto, x140289292779271);
Obj x140289292779335 = makeCons(symgenerate_45str, x140289292779303);
Obj x140289292735239 = makeCons(symsym, Nil);
Obj x140289292735271 = makeCons(symto, x140289292735239);
Obj x140289292735303 = makeCons(symgenerate_45sym, x140289292735271);
Obj x140289292736103 = makeCons(makeCString(";\n"), Nil);
Obj x140289292736199 = makeCons(symto, x140289292736103);
Obj x140289292736231 = makeCons(symgenerate_45str, x140289292736199);
Obj x140289292736295 = makeCons(x140289292736231, Nil);
Obj x140289292736327 = makeCons(x140289292735303, x140289292736295);
Obj x140289292736359 = makeCons(x140289292779335, x140289292736327);
Obj x140289292736391 = makeCons(symbegin, x140289292736359);
Obj x140289292736455 = makeCons(x140289292736391, Nil);
Obj x140289292736487 = makeCons(x140289292777959, x140289292736455);
Obj x140289292736519 = makeCons(symlambda, x140289292736487);
Obj x140289292736775 = makeCons(symglobals, Nil);
Obj x140289292736807 = makeCons(x140289292736519, x140289292736775);
Obj x140289292736839 = makeCons(symfor_45each, x140289292736807);
Obj x140289292737703 = makeCons(makeCString("void entry(struct Cora *co) {\n"), Nil);
Obj x140289292737735 = makeCons(symto, x140289292737703);
Obj x140289292737767 = makeCons(symgenerate_45str, x140289292737735);
Obj x140289292731303 = makeCons(symsym, Nil);
Obj x140289292732647 = makeCons(makeCString("sym"), Nil);
Obj x140289292732679 = makeCons(symto, x140289292732647);
Obj x140289292732711 = makeCons(symgenerate_45str, x140289292732679);
Obj x140289292733511 = makeCons(symsym, Nil);
Obj x140289292733543 = makeCons(symto, x140289292733511);
Obj x140289292733575 = makeCons(symgenerate_45sym, x140289292733543);
Obj x140289292734439 = makeCons(makeCString(" = intern(\""), Nil);
Obj x140289292701703 = makeCons(symto, x140289292734439);
Obj x140289292701735 = makeCons(symgenerate_45str, x140289292701703);
Obj x140289292703047 = makeCons(symsym, Nil);
Obj x140289292703079 = makeCons(symsymbol_45_62string, x140289292703047);
Obj x140289292703367 = makeCons(x140289292703079, Nil);
Obj x140289292703399 = makeCons(symto, x140289292703367);
Obj x140289292703431 = makeCons(symgenerate_45str, x140289292703399);
Obj x140289292704231 = makeCons(makeCString("\");\n"), Nil);
Obj x140289292704263 = makeCons(symto, x140289292704231);
Obj x140289292704295 = makeCons(symgenerate_45str, x140289292704263);
Obj x140289292704455 = makeCons(x140289292704295, Nil);
Obj x140289292704487 = makeCons(x140289292703431, x140289292704455);
Obj x140289292704519 = makeCons(x140289292701735, x140289292704487);
Obj x140289292704551 = makeCons(x140289292733575, x140289292704519);
Obj x140289292704583 = makeCons(x140289292732711, x140289292704551);
Obj x140289292704615 = makeCons(symbegin, x140289292704583);
Obj x140289292704679 = makeCons(x140289292704615, Nil);
Obj x140289292704711 = makeCons(x140289292731303, x140289292704679);
Obj x140289292704743 = makeCons(symlambda, x140289292704711);
Obj x140289292704999 = makeCons(symglobals, Nil);
Obj x140289292705031 = makeCons(x140289292704743, x140289292704999);
Obj x140289292705063 = makeCons(symfor_45each, x140289292705031);
Obj x140289292607623 = makeCons(makeCString("clofun0(co);\n}\n"), Nil);
Obj x140289292607655 = makeCons(symto, x140289292607623);
Obj x140289292607687 = makeCons(symgenerate_45str, x140289292607655);
Obj x140289292607751 = makeCons(x140289292607687, Nil);
Obj x140289292607783 = makeCons(x140289292705063, x140289292607751);
Obj x140289292607815 = makeCons(x140289292737767, x140289292607783);
Obj x140289292607847 = makeCons(x140289292736839, x140289292607815);
Obj x140289292607879 = makeCons(symbegin, x140289292607847);
Obj x140289292607943 = makeCons(x140289292607879, Nil);
Obj x140289292607975 = makeCons(x140289292776487, x140289292607943);
Obj x140289292608007 = makeCons(symgenerate_45entry, x140289292607975);
Obj x140289292608039 = makeCons(symdefun, x140289292608007);
PUSH_CONT_0(co, 48, clofun2);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289292608039;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj x140289292608167 = __arg1;
pushCont(co, 49, clofun2, 1, x140289292608167);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun2) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140289292609447 = __arg1;
Obj x140289292608167= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 0, clofun3);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289292608167;
__arg2 = x140289292609447;
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
Obj x140289292609543 = __arg1;
Obj x140289292572007 = makeCons(symglobals, Nil);
Obj x140289292572039 = makeCons(symbc, x140289292572007);
Obj x140289292572071 = makeCons(symto, x140289292572039);
Obj x140289292573607 = makeCons(symlist, Nil);
Obj x140289292574343 = makeCons(symlist, Nil);
Obj x140289292546055 = makeCons(symbc, Nil);
Obj x140289292546087 = makeCons(x140289292574343, x140289292546055);
Obj x140289292546119 = makeCons(MAKE_NUMBER(0), x140289292546087);
Obj x140289292546151 = makeCons(x140289292573607, x140289292546119);
Obj x140289292546183 = makeCons(symgroup_45by_45mod_45h, x140289292546151);
Obj x140289292547079 = makeCons(symbc, Nil);
Obj x140289292547111 = makeCons(symcaar, x140289292547079);
Obj x140289292548359 = makeCons(makeCString("#include \"types.h\"\n"), Nil);
Obj x140289292548391 = makeCons(symto, x140289292548359);
Obj x140289292548423 = makeCons(symgenerate_45str, x140289292548391);
Obj x140289292549223 = makeCons(makeCString("#include \"runtime.h\"\n\n"), Nil);
Obj x140289292549255 = makeCons(symto, x140289292549223);
Obj x140289292549287 = makeCons(symgenerate_45str, x140289292549255);
Obj x140289292525991 = makeCons(symgroup, Nil);
Obj x140289292527719 = makeCons(symgroup, Nil);
Obj x140289292527847 = makeCons(symcaar, x140289292527719);
Obj x140289292528103 = makeCons(symmaxid, Nil);
Obj x140289292528135 = makeCons(x140289292527847, x140289292528103);
Obj x140289292528167 = makeCons(symto, x140289292528135);
Obj x140289292528199 = makeCons(symcode_45gen_45func_45declare, x140289292528167);
Obj x140289292528999 = makeCons(makeCString(";\n"), Nil);
Obj x140289292529031 = makeCons(symto, x140289292528999);
Obj x140289292529063 = makeCons(symgenerate_45str, x140289292529031);
Obj x140289292529127 = makeCons(x140289292529063, Nil);
Obj x140289292529223 = makeCons(x140289292528199, x140289292529127);
Obj x140289292529255 = makeCons(symbegin, x140289292529223);
Obj x140289292529319 = makeCons(x140289292529255, Nil);
Obj x140289292529351 = makeCons(x140289292525991, x140289292529319);
Obj x140289292529383 = makeCons(symlambda, x140289292529351);
Obj x140289292509415 = makeCons(symgroups, Nil);
Obj x140289292509447 = makeCons(x140289292529383, x140289292509415);
Obj x140289292509479 = makeCons(symfor_45each, x140289292509447);
Obj x140289292510279 = makeCons(makeCString("\n\n"), Nil);
Obj x140289292510311 = makeCons(symto, x140289292510279);
Obj x140289292510343 = makeCons(symgenerate_45str, x140289292510311);
Obj x140289292511559 = makeCons(symglobals, Nil);
Obj x140289292511591 = makeCons(symvalue, x140289292511559);
Obj x140289292511655 = makeCons(x140289292511591, Nil);
Obj x140289292511687 = makeCons(symto, x140289292511655);
Obj x140289292511719 = makeCons(symgenerate_45entry, x140289292511687);
Obj x140289292124519 = makeCons(symgroup, Nil);
Obj x140289292125511 = makeCons(symmaxid, Nil);
Obj x140289292125543 = makeCons(symgroup, x140289292125511);
Obj x140289292125575 = makeCons(symto, x140289292125543);
Obj x140289292125607 = makeCons(symgenerate_45toplevel_45group, x140289292125575);
Obj x140289292125671 = makeCons(x140289292125607, Nil);
Obj x140289292125703 = makeCons(x140289292124519, x140289292125671);
Obj x140289292125735 = makeCons(symlambda, x140289292125703);
Obj x140289292125991 = makeCons(symgroups, Nil);
Obj x140289292126023 = makeCons(x140289292125735, x140289292125991);
Obj x140289292126055 = makeCons(symfor_45each, x140289292126023);
Obj x140289292126119 = makeCons(x140289292126055, Nil);
Obj x140289292126151 = makeCons(x140289292511719, x140289292126119);
Obj x140289292126247 = makeCons(x140289292510343, x140289292126151);
Obj x140289292126375 = makeCons(x140289292509479, x140289292126247);
Obj x140289292126407 = makeCons(x140289292549287, x140289292126375);
Obj x140289292126439 = makeCons(x140289292548423, x140289292126407);
Obj x140289292126471 = makeCons(symbegin, x140289292126439);
Obj x140289292126535 = makeCons(x140289292126471, Nil);
Obj x140289292126567 = makeCons(x140289292547111, x140289292126535);
Obj x140289292126599 = makeCons(symmaxid, x140289292126567);
Obj x140289292126631 = makeCons(x140289292546183, x140289292126599);
Obj x140289292126663 = makeCons(symgroups, x140289292126631);
Obj x140289292126695 = makeCons(symlet, x140289292126663);
Obj x140289292126759 = makeCons(x140289292126695, Nil);
Obj x140289292126791 = makeCons(x140289292572071, x140289292126759);
Obj x140289292126823 = makeCons(symgenerate_45c, x140289292126791);
Obj x140289292126855 = makeCons(symdefun, x140289292126823);
PUSH_CONT_0(co, 1, clofun3);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289292126855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x140289292126887 = __arg1;
pushCont(co, 2, clofun3, 1, x140289292126887);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x140289292127079 = __arg1;
Obj x140289292126887= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 3, clofun3);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289292126887;
__arg2 = x140289292127079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140289292127111 = __arg1;
Obj x140289292104551 = makeCons(sympackage, Nil);
Obj x140289292104583 = makeCons(symquote, x140289292104551);
Obj x140289292105127 = makeCons(symremain, Nil);
Obj x140289292105191 = makeCons(sym__, x140289292105127);
Obj x140289292105223 = makeCons(x140289292104583, x140289292105191);
Obj x140289292105255 = makeCons(symlist_45rest, x140289292105223);
Obj x140289292106247 = makeCons(symremain, Nil);
Obj x140289292106279 = makeCons(symhandle_45import_45eagerly, x140289292106247);
Obj x140289292107431 = makeCons(symbegin, Nil);
Obj x140289292107463 = makeCons(symquote, x140289292107431);
Obj x140289292107719 = makeCons(symremain, Nil);
Obj x140289292107751 = makeCons(x140289292107463, x140289292107719);
Obj x140289292099591 = makeCons(symlist_45rest, x140289292107751);
Obj x140289292101255 = makeCons(symremain, Nil);
Obj x140289292101287 = makeCons(symhandle_45import_45eagerly, x140289292101255);
Obj x140289292102855 = makeCons(symexport, Nil);
Obj x140289292102887 = makeCons(symquote, x140289292102855);
Obj x140289292103143 = makeCons(symmore, Nil);
Obj x140289292103175 = makeCons(x140289292102887, x140289292103143);
Obj x140289292103207 = makeCons(symlist_45rest, x140289292103175);
Obj x140289292103463 = makeCons(symremain, Nil);
Obj x140289292103495 = makeCons(x140289292103207, x140289292103463);
Obj x140289292103623 = makeCons(symlist_45rest, x140289292103495);
Obj x140289291518791 = makeCons(symremain, Nil);
Obj x140289291518823 = makeCons(symhandle_45import_45eagerly, x140289291518791);
Obj x140289291520935 = makeCons(symimport, Nil);
Obj x140289291520967 = makeCons(symquote, x140289291520935);
Obj x140289291521223 = makeCons(sympkg, Nil);
Obj x140289291521287 = makeCons(x140289291520967, x140289291521223);
Obj x140289291521319 = makeCons(symlist, x140289291521287);
Obj x140289291521575 = makeCons(symremain, Nil);
Obj x140289291521607 = makeCons(x140289291521319, x140289291521575);
Obj x140289291521639 = makeCons(symlist_45rest, x140289291521607);
Obj x140289291478023 = makeCons(sympkg, Nil);
Obj x140289291478055 = makeCons(symimport, x140289291478023);
Obj x140289291478663 = makeCons(symremain, Nil);
Obj x140289291478695 = makeCons(symhandle_45import_45eagerly, x140289291478663);
Obj x140289291478759 = makeCons(x140289291478695, Nil);
Obj x140289291478791 = makeCons(x140289291478055, x140289291478759);
Obj x140289291478823 = makeCons(symbegin, x140289291478791);
Obj x140289291480327 = makeCons(Nil, Nil);
Obj x140289291480359 = makeCons(sym_61_62, x140289291480327);
Obj x140289291480391 = makeCons(sym__, x140289291480359);
Obj x140289291480487 = makeCons(x140289291478823, x140289291480391);
Obj x140289291480519 = makeCons(sym_61_62, x140289291480487);
Obj x140289291480551 = makeCons(x140289291521639, x140289291480519);
Obj x140289291480583 = makeCons(x140289291518823, x140289291480551);
Obj x140289291480615 = makeCons(sym_61_62, x140289291480583);
Obj x140289291480647 = makeCons(x140289292103623, x140289291480615);
Obj x140289291480679 = makeCons(x140289292101287, x140289291480647);
Obj x140289291480711 = makeCons(sym_61_62, x140289291480679);
Obj x140289291480743 = makeCons(x140289292099591, x140289291480711);
Obj x140289291480775 = makeCons(x140289292106279, x140289291480743);
Obj x140289291480807 = makeCons(sym_61_62, x140289291480775);
Obj x140289291480839 = makeCons(x140289292105255, x140289291480807);
Obj x140289291480871 = makeCons(symhandle_45import_45eagerly, x140289291480839);
Obj x140289291480903 = makeCons(symfunc, x140289291480871);
PUSH_CONT_0(co, 4, clofun3);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291480903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140289291481063 = __arg1;
pushCont(co, 5, clofun3, 1, x140289291481063);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140289291461351 = __arg1;
Obj x140289291481063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 6, clofun3);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291481063;
__arg2 = x140289291461351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140289291461383 = __arg1;
Obj x140289291462631 = makeCons(symlist, Nil);
Obj x140289291464647 = makeCons(symtype, Nil);
Obj x140289291464679 = makeCons(symreverse, x140289291464647);
Obj x140289291448967 = makeCons(symcode, Nil);
Obj x140289291448999 = makeCons(symreverse, x140289291448967);
Obj x140289291449063 = makeCons(x140289291448999, Nil);
Obj x140289291449095 = makeCons(x140289291464679, x140289291449063);
Obj x140289291449127 = makeCons(symk, x140289291449095);
Obj x140289291451207 = makeCons(sym_58type, Nil);
Obj x140289291451239 = makeCons(symquote, x140289291451207);
Obj x140289291452327 = makeCons(symexp, Nil);
Obj x140289291452359 = makeCons(x140289291451239, x140289291452327);
Obj x140289291452391 = makeCons(symlist_45rest, x140289291452359);
Obj x140289291428071 = makeCons(symmore, Nil);
Obj x140289291428103 = makeCons(x140289291452391, x140289291428071);
Obj x140289291428135 = makeCons(symlist_45rest, x140289291428103);
Obj x140289291431303 = makeCons(symbegin, Nil);
Obj x140289291431335 = makeCons(symquote, x140289291431303);
Obj x140289291431591 = makeCons(symexp, Nil);
Obj x140289291431623 = makeCons(x140289291431335, x140289291431591);
Obj x140289291431655 = makeCons(symlist_45rest, x140289291431623);
Obj x140289291431911 = makeCons(symtype, Nil);
Obj x140289291395111 = makeCons(x140289291431655, x140289291431911);
Obj x140289291395143 = makeCons(symcons, x140289291395111);
Obj x140289291395591 = makeCons(symk, Nil);
Obj x140289291395623 = makeCons(symcode, x140289291395591);
Obj x140289291395655 = makeCons(x140289291395143, x140289291395623);
Obj x140289291395687 = makeCons(symmore, x140289291395655);
Obj x140289291395719 = makeCons(symsplit_45type_45and_45code, x140289291395687);
Obj x140289291397287 = makeCons(sym_58declare, Nil);
Obj x140289291397319 = makeCons(symquote, x140289291397287);
Obj x140289291397671 = makeCons(symexp, Nil);
Obj x140289291397703 = makeCons(x140289291397319, x140289291397671);
Obj x140289291397735 = makeCons(symlist_45rest, x140289291397703);
Obj x140289291397991 = makeCons(symmore, Nil);
Obj x140289291398023 = makeCons(x140289291397735, x140289291397991);
Obj x140289291398055 = makeCons(symlist_45rest, x140289291398023);
Obj x140289291389607 = makeCons(symdeclare, Nil);
Obj x140289291389639 = makeCons(symquote, x140289291389607);
Obj x140289291389895 = makeCons(symexp, Nil);
Obj x140289291389927 = makeCons(x140289291389639, x140289291389895);
Obj x140289291390055 = makeCons(symlist_45rest, x140289291389927);
Obj x140289291390631 = makeCons(symtype, Nil);
Obj x140289291390791 = makeCons(x140289291390055, x140289291390631);
Obj x140289291390823 = makeCons(symcons, x140289291390791);
Obj x140289291358503 = makeCons(symk, Nil);
Obj x140289291358535 = makeCons(symcode, x140289291358503);
Obj x140289291358663 = makeCons(x140289291390823, x140289291358535);
Obj x140289291358695 = makeCons(symmore, x140289291358663);
Obj x140289291358727 = makeCons(symsplit_45type_45and_45code, x140289291358695);
Obj x140289291359719 = makeCons(symmore, Nil);
Obj x140289291359751 = makeCons(symexp, x140289291359719);
Obj x140289291359783 = makeCons(symlist_45rest, x140289291359751);
Obj x140289291334471 = makeCons(symcora_47lib_47infer_35check_45type_33, Nil);
Obj x140289291334503 = makeCons(symquote, x140289291334471);
Obj x140289291336615 = makeCons(symmacroexpand, Nil);
Obj x140289291336647 = makeCons(symquote, x140289291336615);
Obj x140289291321415 = makeCons(symbackquote, Nil);
Obj x140289291321447 = makeCons(symquote, x140289291321415);
Obj x140289291322503 = makeCons(Nil, Nil);
Obj x140289291322535 = makeCons(symexp, x140289291322503);
Obj x140289291322567 = makeCons(symcons, x140289291322535);
Obj x140289291322631 = makeCons(x140289291322567, Nil);
Obj x140289291322663 = makeCons(x140289291321447, x140289291322631);
Obj x140289291322695 = makeCons(symcons, x140289291322663);
Obj x140289291322759 = makeCons(x140289291322695, Nil);
Obj x140289291322791 = makeCons(x140289291336647, x140289291322759);
Obj x140289291322823 = makeCons(symlist, x140289291322791);
Obj x140289291324071 = makeCons(symcora_47lib_47infer_35tvar, Nil);
Obj x140289291324103 = makeCons(symquote, x140289291324071);
Obj x140289291324167 = makeCons(x140289291324103, Nil);
Obj x140289291324199 = makeCons(symlist, x140289291324167);
Obj x140289291324263 = makeCons(x140289291324199, Nil);
Obj x140289291324295 = makeCons(x140289291322823, x140289291324263);
Obj x140289291324327 = makeCons(x140289291334503, x140289291324295);
Obj x140289291324359 = makeCons(symlist, x140289291324327);
Obj x140289291324615 = makeCons(symtype, Nil);
Obj x140289291324711 = makeCons(x140289291324359, x140289291324615);
Obj x140289291324743 = makeCons(symcons, x140289291324711);
Obj x140289291281287 = makeCons(symcode, Nil);
Obj x140289291281319 = makeCons(symexp, x140289291281287);
Obj x140289291281351 = makeCons(symcons, x140289291281319);
Obj x140289291281799 = makeCons(symk, Nil);
Obj x140289291281831 = makeCons(x140289291281351, x140289291281799);
Obj x140289291281863 = makeCons(x140289291324743, x140289291281831);
Obj x140289291281895 = makeCons(symmore, x140289291281863);
Obj x140289291281927 = makeCons(symsplit_45type_45and_45code, x140289291281895);
Obj x140289291281991 = makeCons(x140289291281927, Nil);
Obj x140289291282023 = makeCons(sym_61_62, x140289291281991);
Obj x140289291282055 = makeCons(symk, x140289291282023);
Obj x140289291282087 = makeCons(symcode, x140289291282055);
Obj x140289291282119 = makeCons(symtype, x140289291282087);
Obj x140289291282151 = makeCons(x140289291359783, x140289291282119);
Obj x140289291282183 = makeCons(x140289291358727, x140289291282151);
Obj x140289291282215 = makeCons(sym_61_62, x140289291282183);
Obj x140289291282247 = makeCons(symk, x140289291282215);
Obj x140289291282279 = makeCons(symcode, x140289291282247);
Obj x140289291282311 = makeCons(symtype, x140289291282279);
Obj x140289291282343 = makeCons(x140289291398055, x140289291282311);
Obj x140289291282375 = makeCons(x140289291395719, x140289291282343);
Obj x140289291282407 = makeCons(sym_61_62, x140289291282375);
Obj x140289291282439 = makeCons(symk, x140289291282407);
Obj x140289291282471 = makeCons(symcode, x140289291282439);
Obj x140289291282503 = makeCons(symtype, x140289291282471);
Obj x140289291282535 = makeCons(x140289291428135, x140289291282503);
Obj x140289291282567 = makeCons(x140289291449127, x140289291282535);
Obj x140289291282599 = makeCons(sym_61_62, x140289291282567);
Obj x140289291282631 = makeCons(symk, x140289291282599);
Obj x140289291282727 = makeCons(symcode, x140289291282631);
Obj x140289291282759 = makeCons(symtype, x140289291282727);
Obj x140289291282791 = makeCons(x140289291462631, x140289291282759);
Obj x140289291282823 = makeCons(symsplit_45type_45and_45code, x140289291282791);
Obj x140289291282855 = makeCons(symfunc, x140289291282823);
PUSH_CONT_0(co, 7, clofun3);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291282855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140289291282887 = __arg1;
pushCont(co, 8, clofun3, 1, x140289291282887);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140289291283079 = __arg1;
Obj x140289291282887= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 9, clofun3);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291282887;
__arg2 = x140289291283079;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140289291283111 = __arg1;
Obj x140289291244359 = makeCons(sympackage, Nil);
Obj x140289291244391 = makeCons(symquote, x140289291244359);
Obj x140289291244999 = makeCons(symmore, Nil);
Obj x140289291245031 = makeCons(symname, x140289291244999);
Obj x140289291245063 = makeCons(x140289291244391, x140289291245031);
Obj x140289291245095 = makeCons(symlist_45rest, x140289291245063);
Obj x140289291246695 = makeCons(sympackage, Nil);
Obj x140289291246727 = makeCons(symquote, x140289291246695);
Obj x140289291235719 = makeCons(symk, Nil);
Obj x140289291235751 = makeCons(symmore, x140289291235719);
Obj x140289291235783 = makeCons(symextract_45typecheck_45body, x140289291235751);
Obj x140289291235847 = makeCons(x140289291235783, Nil);
Obj x140289291235975 = makeCons(symname, x140289291235847);
Obj x140289291236007 = makeCons(x140289291246727, x140289291235975);
Obj x140289291236167 = makeCons(symlist_45rest, x140289291236007);
Obj x140289291237767 = makeCons(symimport, Nil);
Obj x140289291237799 = makeCons(symquote, x140289291237767);
Obj x140289291238279 = makeCons(sympkg, Nil);
Obj x140289291238311 = makeCons(x140289291237799, x140289291238279);
Obj x140289291238343 = makeCons(symlist, x140289291238311);
Obj x140289291238599 = makeCons(symmore, Nil);
Obj x140289291238695 = makeCons(x140289291238343, x140289291238599);
Obj x140289291238727 = makeCons(symlist_45rest, x140289291238695);
Obj x140289291233319 = makeCons(symimport, Nil);
Obj x140289291233351 = makeCons(symquote, x140289291233319);
Obj x140289291233703 = makeCons(sympkg, Nil);
Obj x140289291233735 = makeCons(x140289291233351, x140289291233703);
Obj x140289291233767 = makeCons(symlist, x140289291233735);
Obj x140289291234759 = makeCons(symk, Nil);
Obj x140289291234855 = makeCons(symmore, x140289291234759);
Obj x140289291234951 = makeCons(symextract_45typecheck_45body, x140289291234855);
Obj x140289291235175 = makeCons(x140289291234951, Nil);
Obj x140289291235207 = makeCons(x140289291233767, x140289291235175);
Obj x140289291235239 = makeCons(symlist_45rest, x140289291235207);
Obj x140289291200071 = makeCons(symexport, Nil);
Obj x140289291200103 = makeCons(symquote, x140289291200071);
Obj x140289291200455 = makeCons(symsymbols, Nil);
Obj x140289291200487 = makeCons(x140289291200103, x140289291200455);
Obj x140289291200519 = makeCons(symlist_45rest, x140289291200487);
Obj x140289291200775 = makeCons(symmore, Nil);
Obj x140289291200807 = makeCons(x140289291200519, x140289291200775);
Obj x140289291200839 = makeCons(symlist_45rest, x140289291200807);
Obj x140289291158151 = makeCons(symexport, Nil);
Obj x140289291158343 = makeCons(symquote, x140289291158151);
Obj x140289291158663 = makeCons(symsymbols, Nil);
Obj x140289291158695 = makeCons(x140289291158343, x140289291158663);
Obj x140289291158727 = makeCons(symlist_45rest, x140289291158695);
Obj x140289291159783 = makeCons(symk, Nil);
Obj x140289291159815 = makeCons(symmore, x140289291159783);
Obj x140289291159847 = makeCons(symextract_45typecheck_45body, x140289291159815);
Obj x140289291159911 = makeCons(x140289291159847, Nil);
Obj x140289291159943 = makeCons(x140289291158727, x140289291159911);
Obj x140289291159975 = makeCons(symlist_45rest, x140289291159943);
Obj x140289291161191 = makeCons(symbegin, Nil);
Obj x140289291161223 = makeCons(symquote, x140289291161191);
Obj x140289291161479 = makeCons(symmore, Nil);
Obj x140289291161511 = makeCons(x140289291161223, x140289291161479);
Obj x140289291161543 = makeCons(symlist_45rest, x140289291161511);
Obj x140289291147207 = makeCons(symbegin, Nil);
Obj x140289291147303 = makeCons(symquote, x140289291147207);
Obj x140289291148359 = makeCons(symk, Nil);
Obj x140289291148391 = makeCons(symmore, x140289291148359);
Obj x140289291148423 = makeCons(symextract_45typecheck_45body, x140289291148391);
Obj x140289291148487 = makeCons(x140289291148423, Nil);
Obj x140289291148519 = makeCons(x140289291147303, x140289291148487);
Obj x140289291148551 = makeCons(symlist_45rest, x140289291148519);
Obj x140289291076071 = makeCons(symother, Nil);
Obj x140289291076103 = makeCons(symk, x140289291076071);
Obj x140289291076167 = makeCons(x140289291076103, Nil);
Obj x140289291076199 = makeCons(sym_61_62, x140289291076167);
Obj x140289291076231 = makeCons(symk, x140289291076199);
Obj x140289291076263 = makeCons(symother, x140289291076231);
Obj x140289291076295 = makeCons(x140289291148551, x140289291076263);
Obj x140289291076327 = makeCons(sym_61_62, x140289291076295);
Obj x140289291076359 = makeCons(symk, x140289291076327);
Obj x140289291076487 = makeCons(x140289291161543, x140289291076359);
Obj x140289291076519 = makeCons(x140289291159975, x140289291076487);
Obj x140289291076551 = makeCons(sym_61_62, x140289291076519);
Obj x140289291076583 = makeCons(symk, x140289291076551);
Obj x140289291076615 = makeCons(x140289291200839, x140289291076583);
Obj x140289291076647 = makeCons(x140289291235239, x140289291076615);
Obj x140289291076679 = makeCons(sym_61_62, x140289291076647);
Obj x140289291076711 = makeCons(symk, x140289291076679);
Obj x140289291076743 = makeCons(x140289291238727, x140289291076711);
Obj x140289291076871 = makeCons(x140289291236167, x140289291076743);
Obj x140289291076903 = makeCons(sym_61_62, x140289291076871);
Obj x140289291076935 = makeCons(symk, x140289291076903);
Obj x140289291076967 = makeCons(x140289291245095, x140289291076935);
Obj x140289291076999 = makeCons(symextract_45typecheck_45body, x140289291076967);
Obj x140289291077031 = makeCons(symfunc, x140289291076999);
PUSH_CONT_0(co, 10, clofun3);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291077031;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140289291077063 = __arg1;
pushCont(co, 11, clofun3, 1, x140289291077063);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140289291077255 = __arg1;
Obj x140289291077063= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 12, clofun3);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291077063;
__arg2 = x140289291077255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140289291077287 = __arg1;
Obj x140289291079655 = makeCons(symcode, Nil);
Obj x140289290997767 = makeCons(symtype, x140289291079655);
Obj x140289290999175 = makeCons(symcode, Nil);
Obj x140289290999367 = makeCons(symtype, x140289290999175);
Obj x140289290999399 = makeCons(symappend, x140289290999367);
Obj x140289290999751 = makeCons(symcode, Nil);
Obj x140289290999783 = makeCons(x140289290999399, x140289290999751);
Obj x140289290999815 = makeCons(symcora_47lib_47infer_35_42typecheck_42, x140289290999783);
Obj x140289290999847 = makeCons(symif, x140289290999815);
Obj x140289290999911 = makeCons(x140289290999847, Nil);
Obj x140289290999943 = makeCons(x140289290997767, x140289290999911);
Obj x140289290999975 = makeCons(symgenerate_45typecheck_45code, x140289290999943);
Obj x140289291000007 = makeCons(symdefun, x140289290999975);
PUSH_CONT_0(co, 13, clofun3);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291000007;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140289291000039 = __arg1;
pushCont(co, 14, clofun3, 1, x140289291000039);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140289291000231 = __arg1;
Obj x140289291000039= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 15, clofun3);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289291000039;
__arg2 = x140289291000231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140289291000263 = __arg1;
Obj x140289290965735 = makeCons(sympackage, Nil);
Obj x140289290965831 = makeCons(symquote, x140289290965735);
Obj x140289290966247 = makeCons(symmore, Nil);
Obj x140289290966279 = makeCons(x140289290965831, x140289290966247);
Obj x140289290966311 = makeCons(symlist_45rest, x140289290966279);
Obj x140289290968935 = makeCons(sympackage, Nil);
Obj x140289290968967 = makeCons(symquote, x140289290968935);
Obj x140289290907879 = makeCons(symmore, Nil);
Obj x140289290907911 = makeCons(x140289290968967, x140289290907879);
Obj x140289290907943 = makeCons(symlist_45rest, x140289290907911);
Obj x140289290908967 = makeCons(symbody, Nil);
Obj x140289290911591 = makeCons(symcode, Nil);
Obj x140289290911623 = makeCons(symtype, x140289290911591);
Obj x140289290847047 = makeCons(symcode, Nil);
Obj x140289290847079 = makeCons(symtype, x140289290847047);
Obj x140289290847111 = makeCons(symgenerate_45typecheck_45code, x140289290847079);
Obj x140289290847175 = makeCons(x140289290847111, Nil);
Obj x140289290847207 = makeCons(x140289290911623, x140289290847175);
Obj x140289290847239 = makeCons(symlambda, x140289290847207);
Obj x140289290847303 = makeCons(x140289290847239, Nil);
Obj x140289290847335 = makeCons(Nil, x140289290847303);
Obj x140289290847367 = makeCons(Nil, x140289290847335);
Obj x140289290847399 = makeCons(symbody, x140289290847367);
Obj x140289290847431 = makeCons(symsplit_45type_45and_45code, x140289290847399);
Obj x140289290847495 = makeCons(x140289290847431, Nil);
Obj x140289290847527 = makeCons(x140289290908967, x140289290847495);
Obj x140289290847559 = makeCons(symlambda, x140289290847527);
Obj x140289290847879 = makeCons(x140289290847559, Nil);
Obj x140289290847911 = makeCons(x140289290907943, x140289290847879);
Obj x140289290847943 = makeCons(symextract_45typecheck_45body, x140289290847911);
Obj x140289290849287 = makeCons(symbegin, Nil);
Obj x140289290849319 = makeCons(symquote, x140289290849287);
Obj x140289290849671 = makeCons(symmore, Nil);
Obj x140289290849703 = makeCons(x140289290849319, x140289290849671);
Obj x140289290849735 = makeCons(symlist_45rest, x140289290849703);
Obj x140289290802247 = makeCons(symbegin, Nil);
Obj x140289290802343 = makeCons(symquote, x140289290802247);
Obj x140289290802599 = makeCons(symmore, Nil);
Obj x140289290802631 = makeCons(x140289290802343, x140289290802599);
Obj x140289290802663 = makeCons(symlist_45rest, x140289290802631);
Obj x140289290803783 = makeCons(symbody, Nil);
Obj x140289290720263 = makeCons(symcode, Nil);
Obj x140289290720295 = makeCons(symtype, x140289290720263);
Obj x140289290721255 = makeCons(symcode, Nil);
Obj x140289290721287 = makeCons(symtype, x140289290721255);
Obj x140289290721319 = makeCons(symgenerate_45typecheck_45code, x140289290721287);
Obj x140289290721383 = makeCons(x140289290721319, Nil);
Obj x140289290721415 = makeCons(x140289290720295, x140289290721383);
Obj x140289290721447 = makeCons(symlambda, x140289290721415);
Obj x140289290721575 = makeCons(x140289290721447, Nil);
Obj x140289290721607 = makeCons(Nil, x140289290721575);
Obj x140289290721639 = makeCons(Nil, x140289290721607);
Obj x140289290721671 = makeCons(symbody, x140289290721639);
Obj x140289290721703 = makeCons(symsplit_45type_45and_45code, x140289290721671);
Obj x140289290721863 = makeCons(x140289290721703, Nil);
Obj x140289290721991 = makeCons(x140289290803783, x140289290721863);
Obj x140289290722023 = makeCons(symlambda, x140289290721991);
Obj x140289290722087 = makeCons(x140289290722023, Nil);
Obj x140289290722119 = makeCons(x140289290802663, x140289290722087);
Obj x140289290722151 = makeCons(symextract_45typecheck_45body, x140289290722119);
Obj x140289290666311 = makeCons(symsingle, Nil);
Obj x140289290666343 = makeCons(symlist, x140289290666311);
Obj x140289290668487 = makeCons(symcode, Nil);
Obj x140289290668519 = makeCons(symtype, x140289290668487);
Obj x140289290669927 = makeCons(symbegin, Nil);
Obj x140289290669959 = makeCons(symquote, x140289290669927);
Obj x140289290625767 = makeCons(symcode, Nil);
Obj x140289290625799 = makeCons(symtype, x140289290625767);
Obj x140289290625831 = makeCons(symgenerate_45typecheck_45code, x140289290625799);
Obj x140289290625895 = makeCons(x140289290625831, Nil);
Obj x140289290625927 = makeCons(x140289290669959, x140289290625895);
Obj x140289290625959 = makeCons(symlist_45rest, x140289290625927);
Obj x140289290626023 = makeCons(x140289290625959, Nil);
Obj x140289290626119 = makeCons(x140289290668519, x140289290626023);
Obj x140289290626247 = makeCons(symlambda, x140289290626119);
Obj x140289290626311 = makeCons(x140289290626247, Nil);
Obj x140289290626343 = makeCons(Nil, x140289290626311);
Obj x140289290626503 = makeCons(Nil, x140289290626343);
Obj x140289290626535 = makeCons(x140289290666343, x140289290626503);
Obj x140289290626567 = makeCons(symsplit_45type_45and_45code, x140289290626535);
Obj x140289290626631 = makeCons(x140289290626567, Nil);
Obj x140289290626663 = makeCons(sym_61_62, x140289290626631);
Obj x140289290626695 = makeCons(symsingle, x140289290626663);
Obj x140289290626727 = makeCons(x140289290722151, x140289290626695);
Obj x140289290626759 = makeCons(sym_61_62, x140289290626727);
Obj x140289290626791 = makeCons(x140289290849735, x140289290626759);
Obj x140289290626823 = makeCons(x140289290847943, x140289290626791);
Obj x140289290626855 = makeCons(sym_61_62, x140289290626823);
Obj x140289290626887 = makeCons(x140289290966311, x140289290626855);
Obj x140289290626919 = makeCons(symsplit_45type_45and_45code_45toplevel, x140289290626887);
Obj x140289290626951 = makeCons(symfunc, x140289290626919);
PUSH_CONT_0(co, 16, clofun3);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289290626951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140289290626983 = __arg1;
pushCont(co, 17, clofun3, 1, x140289290626983);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140289290627175 = __arg1;
Obj x140289290626983= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 18, clofun3);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289290626983;
__arg2 = x140289290627175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140289290627207 = __arg1;
Obj x140289290628775 = makeCons(symcora_47lib_47infer_35_42typecheck_42, Nil);
Obj x140289290628807 = makeCons(symquote, x140289290628775);
Obj x140289290551399 = makeCons(False, Nil);
Obj x140289290551431 = makeCons(x140289290628807, x140289290551399);
Obj x140289290551463 = makeCons(symset, x140289290551431);
PUSH_CONT_0(co, 19, clofun3);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289290551463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140289290551495 = __arg1;
pushCont(co, 20, clofun3, 1, x140289290551495);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140289290551687 = __arg1;
Obj x140289290551495= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 21, clofun3);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289290551495;
__arg2 = x140289290551687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140289290551719 = __arg1;
Obj x140289290553319 = makeCons(symfile_45path, Nil);
Obj x140289290554759 = makeCons(symfile_45path, Nil);
Obj x140289290554791 = makeCons(symread_45file_45as_45sexp, x140289290554759);
Obj x140289290340423 = makeCons(symsexp, Nil);
Obj x140289290340455 = makeCons(sympair_63, x140289290340423);
Obj x140289290341607 = makeCons(symbegin, Nil);
Obj x140289290341639 = makeCons(symquote, x140289290341607);
Obj x140289290342311 = makeCons(symsexp, Nil);
Obj x140289290342343 = makeCons(symcar, x140289290342311);
Obj x140289290334215 = makeCons(x140289290342343, Nil);
Obj x140289290334247 = makeCons(x140289290341639, x140289290334215);
Obj x140289290334279 = makeCons(sym_61, x140289290334247);
Obj x140289290334343 = makeCons(x140289290334279, Nil);
Obj x140289290334375 = makeCons(x140289290340455, x140289290334343);
Obj x140289290334407 = makeCons(symand, x140289290334375);
Obj x140289290335239 = makeCons(symsexp, Nil);
Obj x140289290335271 = makeCons(symcdr, x140289290335239);
Obj x140289290336263 = makeCons(Nil, Nil);
Obj x140289290336295 = makeCons(symsexp, x140289290336263);
Obj x140289290336327 = makeCons(symcons, x140289290336295);
Obj x140289290336391 = makeCons(x140289290336327, Nil);
Obj x140289290336423 = makeCons(x140289290335271, x140289290336391);
Obj x140289290336455 = makeCons(x140289290334407, x140289290336423);
Obj x140289290336487 = makeCons(symif, x140289290336455);
Obj x140289290337767 = makeCons(symsexp, Nil);
Obj x140289290337799 = makeCons(symhandle_45import_45eagerly, x140289290337767);
Obj x140289290330247 = makeCons(symsexp, Nil);
Obj x140289290330279 = makeCons(symsplit_45type_45and_45code_45toplevel, x140289290330247);
Obj x140289290330343 = makeCons(x140289290330279, Nil);
Obj x140289290330375 = makeCons(x140289290337799, x140289290330343);
Obj x140289290330407 = makeCons(symbegin, x140289290330375);
Obj x140289290330471 = makeCons(x140289290330407, Nil);
Obj x140289290330503 = makeCons(x140289290336487, x140289290330471);
Obj x140289290330535 = makeCons(symsexp1, x140289290330503);
Obj x140289290330567 = makeCons(symlet, x140289290330535);
Obj x140289290330727 = makeCons(x140289290330567, Nil);
Obj x140289290330759 = makeCons(x140289290554791, x140289290330727);
Obj x140289290330791 = makeCons(symsexp, x140289290330759);
Obj x140289290330823 = makeCons(symlet, x140289290330791);
Obj x140289290330887 = makeCons(x140289290330823, Nil);
Obj x140289290330919 = makeCons(x140289290553319, x140289290330887);
Obj x140289290331047 = makeCons(sympreprocess, x140289290330919);
Obj x140289290331175 = makeCons(symdefun, x140289290331047);
PUSH_CONT_0(co, 22, clofun3);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289290331175;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140289290331271 = __arg1;
pushCont(co, 23, clofun3, 1, x140289290331271);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140289290331463 = __arg1;
Obj x140289290331271= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 24, clofun3);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289290331271;
__arg2 = x140289290331463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140289290331495 = __arg1;
Obj x140289290332935 = makeCons(symto, Nil);
Obj x140289290332967 = makeCons(symfrom, x140289290332935);
Obj x140289290333927 = makeCons(symgensym, Nil);
Obj x140289290277927 = makeCons(Nil, Nil);
Obj x140289290277959 = makeCons(symglobals, x140289290277927);
Obj x140289290277991 = makeCons(symset, x140289290277959);
Obj x140289290280295 = makeCons(symglobals, Nil);
Obj x140289290280423 = makeCons(symcompile, x140289290280295);
Obj x140289290280743 = makeCons(x140289290280423, Nil);
Obj x140289290280775 = makeCons(symmacroexpand, x140289290280743);
Obj x140289290280807 = makeCons(sympreprocess, x140289290280775);
Obj x140289290280839 = makeCons(symfrom, x140289290280807);
Obj x140289290280871 = makeCons(sym_45_62, x140289290280839);
Obj x140289290220647 = makeCons(symto, Nil);
Obj x140289290220679 = makeCons(symopen_45output_45file, x140289290220647);
Obj x140289290222279 = makeCons(symglobals, Nil);
Obj x140289290222311 = makeCons(symbc, x140289290222279);
Obj x140289290222343 = makeCons(symstream, x140289290222311);
Obj x140289290222375 = makeCons(symgenerate_45c, x140289290222343);
Obj x140289290222983 = makeCons(symstream, Nil);
Obj x140289290223015 = makeCons(symclose_45output_45file, x140289290222983);
Obj x140289290223079 = makeCons(x140289290223015, Nil);
Obj x140289290223111 = makeCons(x140289290222375, x140289290223079);
Obj x140289290223143 = makeCons(symbegin, x140289290223111);
Obj x140289290223207 = makeCons(x140289290223143, Nil);
Obj x140289290223239 = makeCons(x140289290220679, x140289290223207);
Obj x140289290223271 = makeCons(symstream, x140289290223239);
Obj x140289290223303 = makeCons(symlet, x140289290223271);
Obj x140289290223367 = makeCons(x140289290223303, Nil);
Obj x140289290223399 = makeCons(x140289290280871, x140289290223367);
Obj x140289290223431 = makeCons(symbc, x140289290223399);
Obj x140289290223463 = makeCons(symlet, x140289290223431);
Obj x140289290223527 = makeCons(x140289290223463, Nil);
Obj x140289290223559 = makeCons(x140289290277991, x140289290223527);
Obj x140289290223591 = makeCons(symbegin, x140289290223559);
Obj x140289290133543 = makeCons(x140289290223591, Nil);
Obj x140289290133575 = makeCons(x140289290333927, x140289290133543);
Obj x140289290133607 = makeCons(symglobals, x140289290133575);
Obj x140289290133639 = makeCons(symlet, x140289290133607);
Obj x140289290133703 = makeCons(x140289290133639, Nil);
Obj x140289290133735 = makeCons(x140289290332967, x140289290133703);
Obj x140289290133767 = makeCons(symcompile_45to_45c, x140289290133735);
Obj x140289290133799 = makeCons(symdefun, x140289290133767);
PUSH_CONT_0(co, 25, clofun3);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289290133799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140289290133831 = __arg1;
pushCont(co, 26, clofun3, 1, x140289290133831);
__nargs = 1;
__arg0 = globalRef(symcora_47lib_47infer_35tvar);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140289290134087 = __arg1;
Obj x140289290133831= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 27, clofun3);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47infer_35check_45type_33);
__arg1 = x140289290133831;
__arg2 = x140289290134087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140289290134119 = __arg1;
Obj x140289297979175 = primSet(co, symcora_47lib_47toc_35assq, makeNative(17, clofun13, 2, 0));
Obj x140289297986055 = primSet(co, symcora_47lib_47toc_35foldl, makeNative(13, clofun13, 3, 0));
Obj x140289298091079 = primSet(co, symcora_47lib_47toc_35pos_45in_45list0, makeNative(9, clofun13, 3, 0));
Obj x140289298091911 = primSet(co, symcora_47lib_47toc_35index, makeNative(8, clofun13, 2, 0));
Obj x140289298039143 = primSet(co, symcora_47lib_47toc_35exist_45in_45env, makeNative(4, clofun13, 2, 0));
Obj x140289298040359 = makeCons(makeCString("primSet"), Nil);
Obj x140289298040391 = makeCons(MAKE_NUMBER(2), x140289298040359);
Obj x140289298040423 = makeCons(symset, x140289298040391);
Obj x140289298041447 = makeCons(makeCString("PRIM_CAR"), Nil);
Obj x140289298041575 = makeCons(MAKE_NUMBER(1), x140289298041447);
Obj x140289298041607 = makeCons(symcar, x140289298041575);
Obj x140289298042599 = makeCons(makeCString("PRIM_CDR"), Nil);
Obj x140289298042631 = makeCons(MAKE_NUMBER(1), x140289298042599);
Obj x140289298042663 = makeCons(symcdr, x140289298042631);
Obj x140289298035495 = makeCons(makeCString("makeCons"), Nil);
Obj x140289298035527 = makeCons(MAKE_NUMBER(2), x140289298035495);
Obj x140289298035559 = makeCons(symcons, x140289298035527);
Obj x140289298036647 = makeCons(makeCString("PRIM_ISCONS"), Nil);
Obj x140289298036679 = makeCons(MAKE_NUMBER(1), x140289298036647);
Obj x140289298036711 = makeCons(symcons_63, x140289298036679);
Obj x140289298037895 = makeCons(makeCString("PRIM_ADD"), Nil);
Obj x140289298038023 = makeCons(MAKE_NUMBER(2), x140289298037895);
Obj x140289298038055 = makeCons(sym_43, x140289298038023);
Obj x140289298031943 = makeCons(makeCString("PRIM_SUB"), Nil);
Obj x140289298031975 = makeCons(MAKE_NUMBER(2), x140289298031943);
Obj x140289298032007 = makeCons(sym_45, x140289298031975);
Obj x140289298032903 = makeCons(makeCString("PRIM_MUL"), Nil);
Obj x140289298032935 = makeCons(MAKE_NUMBER(2), x140289298032903);
Obj x140289298032967 = makeCons(sym_42, x140289298032935);
Obj x140289298033959 = makeCons(makeCString("primDiv"), Nil);
Obj x140289298033991 = makeCons(MAKE_NUMBER(2), x140289298033959);
Obj x140289298034023 = makeCons(sym_47, x140289298033991);
Obj x140289298027015 = makeCons(makeCString("PRIM_EQ"), Nil);
Obj x140289298027047 = makeCons(MAKE_NUMBER(2), x140289298027015);
Obj x140289298027079 = makeCons(sym_61, x140289298027047);
Obj x140289298027975 = makeCons(makeCString("PRIM_GT"), Nil);
Obj x140289298028007 = makeCons(MAKE_NUMBER(2), x140289298027975);
Obj x140289298028039 = makeCons(sym_62, x140289298028007);
Obj x140289298029063 = makeCons(makeCString("PRIM_LT"), Nil);
Obj x140289298029095 = makeCons(MAKE_NUMBER(2), x140289298029063);
Obj x140289298029127 = makeCons(sym_60, x140289298029095);
Obj x140289298030439 = makeCons(makeCString("primGenSym"), Nil);
Obj x140289298030471 = makeCons(MAKE_NUMBER(0), x140289298030439);
Obj x140289298030503 = makeCons(symgensym, x140289298030471);
Obj x140289298023559 = makeCons(makeCString("primIsSymbol"), Nil);
Obj x140289298023591 = makeCons(MAKE_NUMBER(1), x140289298023559);
Obj x140289298023719 = makeCons(symsymbol_63, x140289298023591);
Obj x140289298025511 = makeCons(makeCString("primNot"), Nil);
Obj x140289298025543 = makeCons(MAKE_NUMBER(1), x140289298025511);
Obj x140289298025575 = makeCons(symnot, x140289298025543);
Obj x140289298026375 = makeCons(makeCString("primIsNumber"), Nil);
Obj x140289298026407 = makeCons(MAKE_NUMBER(1), x140289298026375);
Obj x140289298026439 = makeCons(syminteger_63, x140289298026407);
Obj x140289298019175 = makeCons(makeCString("primIsString"), Nil);
Obj x140289298019207 = makeCons(MAKE_NUMBER(1), x140289298019175);
Obj x140289298019335 = makeCons(symstring_63, x140289298019207);
Obj x140289298019399 = makeCons(x140289298019335, Nil);
Obj x140289298019431 = makeCons(x140289298026439, x140289298019399);
Obj x140289298019463 = makeCons(x140289298025575, x140289298019431);
Obj x140289298019495 = makeCons(x140289298023719, x140289298019463);
Obj x140289298019527 = makeCons(x140289298030503, x140289298019495);
Obj x140289298019559 = makeCons(x140289298029127, x140289298019527);
Obj x140289298019591 = makeCons(x140289298028039, x140289298019559);
Obj x140289298019623 = makeCons(x140289298027079, x140289298019591);
Obj x140289298019655 = makeCons(x140289298034023, x140289298019623);
Obj x140289298019687 = makeCons(x140289298032967, x140289298019655);
Obj x140289298019719 = makeCons(x140289298032007, x140289298019687);
Obj x140289298019751 = makeCons(x140289298038055, x140289298019719);
Obj x140289298019783 = makeCons(x140289298036711, x140289298019751);
Obj x140289298019815 = makeCons(x140289298035559, x140289298019783);
Obj x140289298019847 = makeCons(x140289298042663, x140289298019815);
Obj x140289298019879 = makeCons(x140289298041607, x140289298019847);
Obj x140289298019911 = makeCons(x140289298040423, x140289298019879);
Obj x140289298019943 = primSet(co, symcora_47lib_47toc_35_42builtin_45prims_42, x140289298019911);
Obj x140289298021159 = primSet(co, symcora_47lib_47toc_35builtin_63, makeNative(1, clofun13, 1, 0));
Obj x140289298014215 = primSet(co, symcora_47lib_47toc_35builtin_45_62name, makeNative(48, clofun12, 1, 0));
Obj x140289298015527 = primSet(co, symcora_47lib_47toc_35builtin_45_62args, makeNative(45, clofun12, 1, 0));
Obj x140289298010215 = primSet(co, symcora_47lib_47toc_35temp_45list, makeNative(42, clofun12, 2, 0));
Obj x140289297299239 = primSet(co, symcora_47lib_47toc_35parse, makeNative(10, clofun12, 3, 0));
Obj x140289297276903 = primSet(co, symcora_47lib_47toc_35union, makeNative(4, clofun12, 2, 0));
Obj x140289297077191 = primSet(co, symcora_47lib_47toc_35diff, makeNative(48, clofun11, 2, 0));
Obj x140289296389127 = primSet(co, symcora_47lib_47toc_35convert_45protect_63, makeNative(41, clofun11, 1, 0));
Obj x140289293903367 = primSet(co, symcora_47lib_47toc_35free_45vars, makeNative(18, clofun11, 1, 0));
Obj x140289293529063 = primSet(co, symcora_47lib_47toc_35closure_45convert, makeNative(3, clofun11, 2, 0));
Obj x140289293456199 = primSet(co, symcora_47lib_47toc_35id, makeNative(2, clofun11, 1, 0));
Obj x140289292125095 = primSet(co, symcora_47lib_47toc_35tailify, makeNative(34, clofun10, 2, 0));
Obj x140289291462119 = primSet(co, symcora_47lib_47toc_35tailify_45list, makeNative(24, clofun10, 3, 0));
Obj x140289291283463 = primSet(co, symcora_47lib_47toc_35explicit_45stack, makeNative(6, clofun10, 2, 0));
Obj x140289290909543 = primSet(co, symcora_47lib_47toc_35collect_45lambda, makeNative(36, clofun9, 2, 0));
Obj x140289290848135 = primSet(co, symcora_47lib_47toc_35append_45result, makeNative(32, clofun9, 2, 0));
Obj x140289290801351 = primSet(co, symcora_47lib_47toc_35wrap_45var, makeNative(30, clofun9, 2, 0));
Obj x140289290668551 = primSet(co, symcora_47lib_47toc_35generate_45call_45list, makeNative(16, clofun9, 4, 0));
Obj x140289298089159 = primSet(co, symcora_47lib_47toc_35add_45symbol_45to_45list, makeNative(13, clofun9, 2, 0));
Obj x140289296665991 = primSet(co, symcora_47lib_47toc_35generate_45inst, makeNative(29, clofun7, 4, 0));
Obj x140289296234375 = primSet(co, symcora_47lib_47toc_35generate_45cont, makeNative(5, clofun7, 3, 0));
Obj x140289296101159 = primSet(co, symcora_47lib_47toc_35generate_45inst_45list_45h, makeNative(49, clofun6, 5, 0));
Obj x140289296073223 = primSet(co, symcora_47lib_47toc_35generate_45inst_45list, makeNative(48, clofun6, 4, 0));
Obj x140289296073639 = primSet(co, symcora_47lib_47toc_35_42mod_45num_42, MAKE_NUMBER(50));
Obj x140289296075719 = primSet(co, symcora_47lib_47toc_35generate_45group_45name, makeNative(46, clofun6, 3, 0));
Obj x140289295939431 = primSet(co, symcora_47lib_47toc_35code_45gen_45func_45declare, makeNative(42, clofun6, 3, 0));
Obj x140289294842951 = primSet(co, symcora_47lib_47toc_35local_45from_45params, makeNative(35, clofun6, 3, 0));
Obj x140289294810343 = primSet(co, symcora_47lib_47toc_35local_45from_45cont, makeNative(30, clofun6, 3, 0));
Obj x140289294619175 = primSet(co, symcora_47lib_47toc_35generate_45call_45args_45reverse, makeNative(26, clofun6, 4, 0));
Obj x140289293903303 = primSet(co, symcora_47lib_47toc_35code_45gen_45toplevel, makeNative(14, clofun6, 3, 0));
Obj x140289293904007 = primSet(co, symcora_47lib_47toc_35parse_45pass, makeNative(13, clofun6, 2, 0));
Obj x140289293904999 = primSet(co, symcora_47lib_47toc_35closure_45convert_45pass, makeNative(12, clofun6, 1, 0));
Obj x140289293905639 = primSet(co, symcora_47lib_47toc_35tailify_45pass, makeNative(11, clofun6, 1, 0));
Obj x140289293873671 = primSet(co, symcora_47lib_47toc_35explicit_45stack_45pass, makeNative(10, clofun6, 1, 0));
Obj x140289293836839 = primSet(co, symcora_47lib_47toc_35collect_45lambda_45pass, makeNative(4, clofun6, 1, 0));
Obj x140289293829031 = primSet(co, symcora_47lib_47toc_35rewrite_45_45_62macro, makeNative(1, clofun6, 2, 0));
PUSH_CONT_0(co, 28, clofun3);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35add_45to_45_42macros_42);
__arg1 = sym_45_62;
__arg2 = makeNative(48, clofun5, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140289293831783 = __arg1;
Obj x140289293784327 = primSet(co, symcora_47lib_47toc_35compile, makeNative(42, clofun5, 2, 0));
Obj x140289293747527 = primSet(co, symcora_47lib_47toc_35for_45each, makeNative(38, clofun5, 2, 0));
Obj x140289293525863 = primSet(co, symcora_47lib_47toc_35generate_45jumptable, makeNative(34, clofun5, 3, 0));
Obj x140289293184199 = primSet(co, symcora_47lib_47toc_35generate_45toplevel_45group, makeNative(12, clofun5, 3, 0));
Obj x140289292820071 = primSet(co, symcora_47lib_47toc_35group_45by_45mod_45h, makeNative(6, clofun5, 4, 0));
Obj x140289292734759 = primSet(co, symcora_47lib_47toc_35generate_45entry, makeNative(43, clofun4, 2, 0));
Obj x140289292732903 = primSet(co, symcora_47lib_47toc_35generate_45c, makeNative(30, clofun4, 3, 0));
Obj x140289292529287 = primSet(co, symcora_47lib_47toc_35handle_45import_45eagerly, makeNative(23, clofun4, 1, 0));
Obj x140289291521927 = primSet(co, symcora_47lib_47toc_35split_45type_45and_45code, makeNative(16, clofun4, 4, 0));
Obj x140289291359879 = primSet(co, symcora_47lib_47toc_35extract_45typecheck_45body, makeNative(6, clofun4, 2, 0));
Obj x140289291360903 = primSet(co, symcora_47lib_47toc_35generate_45typecheck_45code, makeNative(5, clofun4, 2, 0));
Obj x140289291283783 = primSet(co, symcora_47lib_47toc_35split_45type_45and_45code_45toplevel, makeNative(45, clofun3, 1, 0));
Obj x140289291284071 = primSet(co, symcora_47lib_47infer_35_42typecheck_42, False);
Obj x140289291231879 = primSet(co, symcora_47lib_47toc_35preprocess, makeNative(36, clofun3, 1, 0));
Obj x140289291199111 = primSet(co, symcora_47lib_47toc_35compile_45to_45c, makeNative(29, clofun3, 2, 0));
__nargs = 2;
__arg1 = x140289291199111;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun3) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
Obj from = __arg1;
Obj to = __arg2;
Obj x140289291232519 = primGenSym();
Obj globals = x140289291232519;
Obj x140289291232967 = primSet(co, globals, Nil);
pushCont(co, 30, clofun3, 3, from, to, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35compile);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140289291233543 = __arg1;
Obj from= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 31, clofun3, 3, x140289291233543, to, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35preprocess);
__arg1 = from;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140289291234023 = __arg1;
Obj x140289291233543= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 32, clofun3, 3, x140289291233543, to, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35macroexpand);
__arg1 = x140289291234023;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140289291234215 = __arg1;
Obj x140289291233543= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 33, clofun3, 2, to, globals);
__nargs = 2;
__arg0 = x140289291233543;
__arg1 = x140289291234215;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140289291234247 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj bc = x140289291234247;
pushCont(co, 34, clofun3, 2, bc, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35open_45output_45file);
__arg1 = to;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140289291234599 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stream = x140289291234599;
pushCont(co, 35, clofun3, 1, stream);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45c);
__arg1 = stream;
__arg2 = bc;
__arg3 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140289291198695 = __arg1;
Obj stream= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35close_45output_45file);
__arg1 = stream;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj file_45path = __arg1;
PUSH_CONT_0(co, 37, clofun3);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35read_45file_45as_45sexp);
__arg1 = file_45path;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140289291243943 = __arg1;
Obj sexp = x140289291243943;
pushCont(co, 38, clofun3, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35pair_63);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140289291244423 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140289291244423) {
Obj x140289291245159 = PRIM_CAR(sexp);
Obj x140289291245191 = PRIM_EQ(symbegin, x140289291245159);
if (True == x140289291245191) {
if (True == True) {
Obj x140289291245511 = PRIM_CDR(sexp);
Obj sexp1 = x140289291245511;
pushCont(co, 44, clofun3, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289291246215 = makeCons(sexp, Nil);
Obj sexp1 = x140289291246215;
pushCont(co, 43, clofun3, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj x140289291247303 = PRIM_CDR(sexp);
Obj sexp1 = x140289291247303;
pushCont(co, 42, clofun3, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289291236263 = makeCons(sexp, Nil);
Obj sexp1 = x140289291236263;
pushCont(co, 41, clofun3, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
} else {
if (True == False) {
Obj x140289291237159 = PRIM_CDR(sexp);
Obj sexp1 = x140289291237159;
pushCont(co, 40, clofun3, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289291238439 = makeCons(sexp, Nil);
Obj sexp1 = x140289291238439;
pushCont(co, 39, clofun3, 1, sexp);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label39:
{
Obj x140289291238855 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code_45toplevel);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140289291237543 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code_45toplevel);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140289291236647 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code_45toplevel);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140289291235367 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code_45toplevel);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140289291246663 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code_45toplevel);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140289291245799 = __arg1;
Obj sexp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code_45toplevel);
__arg1 = sexp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140289294119879 = __arg1;
Obj x140289294120103 = makeNative(48, clofun3, 0, 1, x140289294119879);
Obj x140289291323463 = PRIM_ISCONS(x140289294119879);
if (True == x140289291323463) {
Obj x140289291324519 = PRIM_CAR(x140289294119879);
Obj x140289291324551 = PRIM_EQ(sympackage, x140289291324519);
if (True == x140289291324551) {
Obj x140289291324967 = PRIM_CDR(x140289294119879);
Obj more = x140289291324967;
Obj x140289291280423 = makeCons(sympackage, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35extract_45typecheck_45body);
__arg1 = x140289291280423;
__arg2 = makeNative(46, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294120103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294120103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj body = __arg1;
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = body;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(47, clofun3, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
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
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj x140289294120615 = makeNative(1, clofun4, 0, 1, closureRef(co, 0));
Obj x140289291336295 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289291336295) {
Obj x140289291337095 = PRIM_CAR(closureRef(co, 0));
Obj x140289291337127 = PRIM_EQ(symbegin, x140289291337095);
if (True == x140289291337127) {
Obj x140289291337447 = PRIM_CDR(closureRef(co, 0));
Obj more = x140289291337447;
Obj x140289291321671 = makeCons(symbegin, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35extract_45typecheck_45body);
__arg1 = x140289291321671;
__arg2 = makeNative(49, clofun3, 1, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294120615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294120615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun3) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj body = __arg1;
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = body;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(0, clofun4, 2, 0);
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
Obj type = __arg1;
Obj code = __arg2;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45typecheck_45code);
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x140289294121127 = makeNative(4, clofun4, 0, 0);
Obj single = closureRef(co, 0);
Obj x140289291334055 = makeCons(single, Nil);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = x140289291334055;
__arg2 = Nil;
__arg3 = Nil;
co->args[4] = makeNative(2, clofun4, 2, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj type = __arg1;
Obj code = __arg2;
PUSH_CONT_0(co, 3, clofun4);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45typecheck_45code);
__arg1 = type;
__arg2 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140289291335943 = __arg1;
Obj x140289291335975 = makeCons(symbegin, x140289291335943);
__nargs = 2;
__arg1 = x140289291335975;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
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
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
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
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = code;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label6:
{
Obj x140289294622439 = __arg1;
Obj x140289294622471 = __arg2;
Obj x140289294606535 = makeNative(8, clofun4, 0, 2, x140289294622439, x140289294622471);
Obj x140289291387047 = PRIM_ISCONS(x140289294622439);
if (True == x140289291387047) {
Obj x140289291388327 = PRIM_CAR(x140289294622439);
Obj x140289291388359 = PRIM_EQ(sympackage, x140289291388327);
if (True == x140289291388359) {
Obj x140289291388871 = PRIM_CDR(x140289294622439);
Obj x140289291388903 = PRIM_ISCONS(x140289291388871);
if (True == x140289291388903) {
Obj x140289291389415 = PRIM_CDR(x140289294622439);
Obj x140289291389447 = PRIM_CAR(x140289291389415);
Obj name = x140289291389447;
Obj x140289291390567 = PRIM_CDR(x140289294622439);
Obj x140289291390599 = PRIM_CDR(x140289291390567);
Obj more = x140289291390599;
Obj k = x140289294622471;
pushCont(co, 7, clofun4, 1, name);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35extract_45typecheck_45body);
__arg1 = more;
__arg2 = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294606535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294606535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294606535;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj x140289291359175 = __arg1;
Obj name= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289291359207 = makeCons(name, x140289291359175);
Obj x140289291359239 = makeCons(sympackage, x140289291359207);
__nargs = 2;
__arg1 = x140289291359239;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label8:
{
Obj x140289294607687 = makeNative(10, clofun4, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140289291427943 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289291427943) {
Obj x140289291428519 = PRIM_CAR(closureRef(co, 0));
Obj x140289291428551 = PRIM_ISCONS(x140289291428519);
if (True == x140289291428551) {
Obj x140289291429351 = PRIM_CAR(closureRef(co, 0));
Obj x140289291429383 = PRIM_CAR(x140289291429351);
Obj x140289291429415 = PRIM_EQ(symimport, x140289291429383);
if (True == x140289291429415) {
Obj x140289291430215 = PRIM_CAR(closureRef(co, 0));
Obj x140289291430407 = PRIM_CDR(x140289291430215);
Obj x140289291430439 = PRIM_ISCONS(x140289291430407);
if (True == x140289291430439) {
Obj x140289291431367 = PRIM_CAR(closureRef(co, 0));
Obj x140289291431399 = PRIM_CDR(x140289291431367);
Obj x140289291431431 = PRIM_CAR(x140289291431399);
Obj pkg = x140289291431431;
Obj x140289291395911 = PRIM_CAR(closureRef(co, 0));
Obj x140289291395943 = PRIM_CDR(x140289291395911);
Obj x140289291395975 = PRIM_CDR(x140289291395943);
Obj x140289291396007 = PRIM_EQ(Nil, x140289291395975);
if (True == x140289291396007) {
Obj x140289291396423 = PRIM_CDR(closureRef(co, 0));
Obj more = x140289291396423;
Obj k = closureRef(co, 1);
Obj x140289291397191 = makeCons(pkg, Nil);
Obj x140289291397223 = makeCons(symimport, x140289291397191);
pushCont(co, 9, clofun4, 1, x140289291397223);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35extract_45typecheck_45body);
__arg1 = more;
__arg2 = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294607687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294607687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294607687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294607687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294607687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj x140289291397799 = __arg1;
Obj x140289291397223= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289291397831 = makeCons(x140289291397223, x140289291397799);
__nargs = 2;
__arg1 = x140289291397831;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label10:
{
Obj x140289294608967 = makeNative(12, clofun4, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140289291463207 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289291463207) {
Obj x140289291463623 = PRIM_CAR(closureRef(co, 0));
Obj x140289291463655 = PRIM_ISCONS(x140289291463623);
if (True == x140289291463655) {
Obj x140289291464359 = PRIM_CAR(closureRef(co, 0));
Obj x140289291464391 = PRIM_CAR(x140289291464359);
Obj x140289291464455 = PRIM_EQ(symexport, x140289291464391);
if (True == x140289291464455) {
Obj x140289291448743 = PRIM_CAR(closureRef(co, 0));
Obj x140289291448775 = PRIM_CDR(x140289291448743);
Obj symbols = x140289291448775;
Obj x140289291449223 = PRIM_CDR(closureRef(co, 0));
Obj more = x140289291449223;
Obj k = closureRef(co, 1);
Obj x140289291450151 = makeCons(symexport, symbols);
pushCont(co, 11, clofun4, 1, x140289291450151);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35extract_45typecheck_45body);
__arg1 = more;
__arg2 = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294608967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294608967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294608967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj x140289291450695 = __arg1;
Obj x140289291450151= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289291450727 = makeCons(x140289291450151, x140289291450695);
__nargs = 2;
__arg1 = x140289291450727;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj x140289294609991 = makeNative(14, clofun4, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140289291479303 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289291479303) {
Obj x140289291461287 = PRIM_CAR(closureRef(co, 0));
Obj x140289291461319 = PRIM_EQ(symbegin, x140289291461287);
if (True == x140289291461319) {
Obj x140289291461863 = PRIM_CDR(closureRef(co, 0));
Obj more = x140289291461863;
Obj k = closureRef(co, 1);
PUSH_CONT_0(co, 13, clofun4);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35extract_45typecheck_45body);
__arg1 = more;
__arg2 = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294609991;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294609991;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj x140289291462471 = __arg1;
Obj x140289291462503 = makeCons(symbegin, x140289291462471);
__nargs = 2;
__arg1 = x140289291462503;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label14:
{
Obj x140289294119207 = makeNative(15, clofun4, 0, 0);
Obj other = closureRef(co, 0);
Obj k = closureRef(co, 1);
__nargs = 2;
__arg0 = k;
__arg1 = other;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140289294762311 = __arg1;
Obj x140289294762343 = __arg2;
Obj x140289294762375 = __arg3;
Obj x140289294762439 = co->args[4];
Obj x140289294763239 = makeNative(19, clofun4, 0, 4, x140289294762311, x140289294762343, x140289294762375, x140289294762439);
Obj x140289291520359 = PRIM_EQ(Nil, x140289294762311);
if (True == x140289291520359) {
Obj type = x140289294762343;
Obj code = x140289294762375;
Obj k = x140289294762439;
pushCont(co, 17, clofun4, 2, code, k);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = type;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294763239;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj x140289291520999 = __arg1;
Obj code= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 18, clofun4, 2, k, x140289291520999);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = code;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140289291521383 = __arg1;
Obj k= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289291520999= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = k;
__arg1 = x140289291520999;
__arg2 = x140289291521383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140289294764679 = makeNative(20, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140289292099783 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289292099783) {
Obj x140289292101095 = PRIM_CAR(closureRef(co, 0));
Obj x140289292101127 = PRIM_ISCONS(x140289292101095);
if (True == x140289292101127) {
Obj x140289292101895 = PRIM_CAR(closureRef(co, 0));
Obj x140289292101927 = PRIM_CAR(x140289292101895);
Obj x140289292101959 = PRIM_EQ(sym_58type, x140289292101927);
if (True == x140289292101959) {
Obj x140289292102567 = PRIM_CAR(closureRef(co, 0));
Obj x140289292102599 = PRIM_CDR(x140289292102567);
Obj exp = x140289292102599;
Obj x140289292103239 = PRIM_CDR(closureRef(co, 0));
Obj more = x140289292103239;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj x140289291518663 = makeCons(symbegin, exp);
Obj x140289291518727 = makeCons(x140289291518663, type);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = x140289291518727;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294764679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294764679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294764679;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj x140289294619015 = makeNative(21, clofun4, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140289292127879 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289292127879) {
Obj x140289292103751 = PRIM_CAR(closureRef(co, 0));
Obj x140289292103783 = PRIM_ISCONS(x140289292103751);
if (True == x140289292103783) {
Obj x140289292104455 = PRIM_CAR(closureRef(co, 0));
Obj x140289292104487 = PRIM_CAR(x140289292104455);
Obj x140289292104519 = PRIM_EQ(sym_58declare, x140289292104487);
if (True == x140289292104519) {
Obj x140289292105287 = PRIM_CAR(closureRef(co, 0));
Obj x140289292105319 = PRIM_CDR(x140289292105287);
Obj exp = x140289292105319;
Obj x140289292105607 = PRIM_CDR(closureRef(co, 0));
Obj more = x140289292105607;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj x140289292106887 = makeCons(symdeclare, exp);
Obj x140289292106951 = makeCons(x140289292106887, type);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = x140289292106951;
__arg3 = code;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294619015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294619015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294619015;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj x140289294620647 = makeNative(22, clofun4, 0, 0);
Obj x140289292510791 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289292510791) {
Obj x140289292511047 = PRIM_CAR(closureRef(co, 0));
Obj exp = x140289292511047;
Obj x140289292511367 = PRIM_CDR(closureRef(co, 0));
Obj more = x140289292511367;
Obj type = closureRef(co, 1);
Obj code = closureRef(co, 2);
Obj k = closureRef(co, 3);
Obj x140289292124999 = makeCons(exp, Nil);
Obj x140289292125031 = makeCons(symbackquote, x140289292124999);
Obj x140289292125127 = makeCons(x140289292125031, Nil);
Obj x140289292125159 = makeCons(symmacroexpand, x140289292125127);
Obj x140289292125799 = makeCons(symcora_47lib_47infer_35tvar, Nil);
Obj x140289292125863 = makeCons(x140289292125799, Nil);
Obj x140289292125895 = makeCons(x140289292125159, x140289292125863);
Obj x140289292125927 = makeCons(symcora_47lib_47infer_35check_45type_33, x140289292125895);
Obj x140289292126087 = makeCons(x140289292125927, type);
Obj x140289292127143 = makeCons(exp, code);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35split_45type_45and_45code);
__arg1 = more;
__arg2 = x140289292126087;
__arg3 = x140289292127143;
co->args[4] = k;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294620647;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140289294808967 = __arg1;
Obj x140289294809223 = makeNative(24, clofun4, 0, 1, x140289294808967);
Obj x140289292525671 = PRIM_ISCONS(x140289294808967);
if (True == x140289292525671) {
Obj x140289292526279 = PRIM_CAR(x140289294808967);
Obj x140289292526311 = PRIM_EQ(sympackage, x140289292526279);
if (True == x140289292526311) {
Obj x140289292526855 = PRIM_CDR(x140289294808967);
Obj x140289292526951 = PRIM_ISCONS(x140289292526855);
if (True == x140289292526951) {
Obj x140289292527367 = PRIM_CDR(x140289294808967);
Obj x140289292527399 = PRIM_CAR(x140289292527367);
Obj __ = x140289292527399;
Obj x140289292528423 = PRIM_CDR(x140289294808967);
Obj x140289292528455 = PRIM_CDR(x140289292528423);
Obj remain = x140289292528455;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294809223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294809223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294809223;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj x140289294810087 = makeNative(25, clofun4, 0, 1, closureRef(co, 0));
Obj x140289292548295 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289292548295) {
Obj x140289292548935 = PRIM_CAR(closureRef(co, 0));
Obj x140289292548967 = PRIM_EQ(symbegin, x140289292548935);
if (True == x140289292548967) {
Obj x140289292549319 = PRIM_CDR(closureRef(co, 0));
Obj remain = x140289292549319;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294810087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj x140289294810727 = makeNative(26, clofun4, 0, 1, closureRef(co, 0));
Obj x140289292573127 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289292573127) {
Obj x140289292573959 = PRIM_CAR(closureRef(co, 0));
Obj x140289292573991 = PRIM_ISCONS(x140289292573959);
if (True == x140289292573991) {
Obj x140289292546247 = PRIM_CAR(closureRef(co, 0));
Obj x140289292546279 = PRIM_CAR(x140289292546247);
Obj x140289292546311 = PRIM_EQ(symexport, x140289292546279);
if (True == x140289292546311) {
Obj x140289292546759 = PRIM_CAR(closureRef(co, 0));
Obj x140289292546951 = PRIM_CDR(x140289292546759);
Obj more = x140289292546951;
Obj x140289292547271 = PRIM_CDR(closureRef(co, 0));
Obj remain = x140289292547271;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294810727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj x140289294803591 = makeNative(28, clofun4, 0, 1, closureRef(co, 0));
Obj x140289292702055 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289292702055) {
Obj x140289292702567 = PRIM_CAR(closureRef(co, 0));
Obj x140289292702599 = PRIM_ISCONS(x140289292702567);
if (True == x140289292702599) {
Obj x140289292703687 = PRIM_CAR(closureRef(co, 0));
Obj x140289292703719 = PRIM_CAR(x140289292703687);
Obj x140289292703751 = PRIM_EQ(symimport, x140289292703719);
if (True == x140289292703751) {
Obj x140289292704871 = PRIM_CAR(closureRef(co, 0));
Obj x140289292704903 = PRIM_CDR(x140289292704871);
Obj x140289292704935 = PRIM_ISCONS(x140289292704903);
if (True == x140289292704935) {
Obj x140289292607527 = PRIM_CAR(closureRef(co, 0));
Obj x140289292607559 = PRIM_CDR(x140289292607527);
Obj x140289292607591 = PRIM_CAR(x140289292607559);
Obj pkg = x140289292607591;
Obj x140289292610183 = PRIM_CAR(closureRef(co, 0));
Obj x140289292610215 = PRIM_CDR(x140289292610183);
Obj x140289292610247 = PRIM_CDR(x140289292610215);
Obj x140289292610279 = PRIM_EQ(Nil, x140289292610247);
if (True == x140289292610279) {
Obj x140289292571463 = PRIM_CDR(closureRef(co, 0));
Obj remain = x140289292571463;
pushCont(co, 27, clofun4, 1, remain);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35import);
__arg1 = pkg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294803591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294803591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294803591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294803591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294803591;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj x140289292571847 = __arg1;
Obj remain= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35handle_45import_45eagerly);
__arg1 = remain;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140289294805351 = makeNative(29, clofun4, 0, 0);
Obj __ = closureRef(co, 0);
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun4) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label29:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj to = __arg1;
Obj bc = __arg2;
Obj globals = __arg3;
pushCont(co, 31, clofun4, 3, bc, globals, to);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = Nil;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140289292735751 = __arg1;
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups = x140289292735751;
pushCont(co, 32, clofun4, 3, globals, to, groups);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = bc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140289292736263 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj maxid = x140289292736263;
pushCont(co, 33, clofun4, 4, globals, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("#include \"types.h\"\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140289292736871 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 34, clofun4, 4, globals, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("#include \"runtime.h\"\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140289292737319 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 35, clofun4, 4, globals, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(40, clofun4, 1, 2, maxid, to);
__arg2 = groups;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140289292731015 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 36, clofun4, 4, globals, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140289292731463 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 37, clofun4, 3, to, maxid, groups);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35value);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140289292731911 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 38, clofun4, 3, to, maxid, groups);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45entry);
__arg1 = to;
__arg2 = x140289292731911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140289292731943 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj groups= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(39, clofun4, 1, 2, to, maxid);
__arg2 = groups;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
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
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj group = __arg1;
PUSH_CONT_0(co, 41, clofun4);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140289292738503 = __arg1;
PUSH_CONT_0(co, 42, clofun4);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35code_45gen_45func_45declare);
__arg1 = closureRef(co, 1);
__arg2 = x140289292738503;
__arg3 = closureRef(co, 0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140289292730375 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 1);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj to = __arg1;
Obj globals = __arg2;
pushCont(co, 44, clofun4, 2, globals, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(3, clofun5, 1, 1, to);
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140289292776775 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 45, clofun4, 2, globals, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("void entry(struct Cora *co) {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140289292777255 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 46, clofun4, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(47, clofun4, 1, 1, to);
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140289292734471 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("clofun0(co);\n}\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj sym = __arg1;
pushCont(co, 48, clofun4, 1, sym);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = makeCString("sym");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj x140289292777831 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 49, clofun4, 1, sym);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = closureRef(co, 0);
__arg2 = sym;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun4) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140289292778215 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 0, clofun5, 1, sym);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = makeCString(" = intern(\"");
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
Obj x140289292778631 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 1, clofun5);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35symbol_45_62string);
__arg1 = sym;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x140289292779143 = __arg1;
PUSH_CONT_0(co, 2, clofun5);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = x140289292779143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x140289292779175 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = makeCString("\");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj sym = __arg1;
pushCont(co, 4, clofun5, 1, sym);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = makeCString("static Obj sym");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140289292776039 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 5, clofun5);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = closureRef(co, 0);
__arg2 = sym;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140289292776519 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 0);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140289294840775 = __arg1;
Obj x140289294840871 = __arg2;
Obj x140289294840903 = __arg3;
Obj x140289294841031 = co->args[4];
Obj x140289294842055 = makeNative(9, clofun5, 0, 4, x140289294840775, x140289294840871, x140289294840903, x140289294841031);
Obj res = x140289294840775;
Obj idx = x140289294840871;
Obj acc = x140289294840903;
Obj x140289292817383 = PRIM_EQ(Nil, x140289294841031);
if (True == x140289292817383) {
pushCont(co, 7, clofun5, 2, acc, res);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = acc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294842055;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj x140289292818055 = __arg1;
Obj acc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289292818087 = primNot(x140289292818055);
if (True == x140289292818087) {
pushCont(co, 8, clofun5, 1, res);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = acc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = res;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj x140289292818599 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289292818663 = makeCons(x140289292818599, res);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = x140289292818663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140289294843271 = makeNative(11, clofun5, 0, 0);
Obj res = closureRef(co, 0);
Obj idx = closureRef(co, 1);
Obj acc = closureRef(co, 2);
Obj x140289292825319 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140289292825319) {
Obj x140289292825575 = PRIM_CAR(closureRef(co, 3));
Obj bc = x140289292825575;
Obj x140289292825831 = PRIM_CDR(closureRef(co, 3));
Obj more = x140289292825831;
Obj x140289292826375 = PRIM_EQ(idx, globalRef(symcora_47lib_47toc_35_42mod_45num_42));
if (True == x140289292826375) {
pushCont(co, 10, clofun5, 3, res, bc, more);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = acc;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289292828263 = PRIM_ADD(idx, MAKE_NUMBER(1));
Obj x140289292816391 = makeCons(bc, acc);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = res;
__arg2 = x140289292828263;
__arg3 = x140289292816391;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294843271;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj x140289292827143 = __arg1;
Obj res= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj bc= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289292827207 = makeCons(x140289292827143, res);
Obj x140289292827527 = makeCons(bc, more);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35group_45by_45mod_45h);
__arg1 = x140289292827207;
__arg2 = MAKE_NUMBER(0);
__arg3 = Nil;
co->args[4] = x140289292827527;
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
Obj to = __arg1;
Obj group = __arg2;
Obj maxid = __arg3;
pushCont(co, 13, clofun5, 3, maxid, group, to);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140289293527687 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 14, clofun5, 3, maxid, group, to);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35code_45gen_45func_45declare);
__arg1 = to;
__arg2 = x140289293527687;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140289293527815 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 15, clofun5, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140289293528135 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 16, clofun5, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("int __nargs = co->nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140289293528487 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 17, clofun5, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("Obj __arg0 = co->args[0];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140289293528775 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 18, clofun5, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("Obj __arg1 = co->args[1];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140289293455495 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 19, clofun5, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("Obj __arg2 = co->args[2];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140289293455783 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 20, clofun5, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("Obj __arg3 = co->args[3];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140289293456231 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 21, clofun5, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("static void* jumpTable[] = {");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140289293456711 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 22, clofun5, 3, maxid, group, to);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140289293457767 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 23, clofun5, 3, maxid, group, to);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45jumptable);
__arg1 = to;
__arg2 = MAKE_NUMBER(0);
__arg3 = x140289293457767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140289293457799 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 24, clofun5, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("};\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140289293458311 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 25, clofun5, 3, maxid, group, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140289293458599 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj group= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 26, clofun5, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(33, clofun5, 1, 2, to, maxid);
__arg2 = group;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140289293459303 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 27, clofun5, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("fail:\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140289293181191 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 28, clofun5, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("co->nargs = __nargs;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140289293181735 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 29, clofun5, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("co->args[0] = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x140289293182023 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun5, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("co->args[1] = __arg1;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140289293182343 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 31, clofun5, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("co->args[2] = __arg2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140289293182695 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 32, clofun5, 1, to);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("co->args[3] = __arg3;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140289293183239 = __arg1;
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("\n}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
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
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj to = __arg1;
Obj i = __arg2;
Obj n = __arg3;
Obj x140289293748519 = PRIM_EQ(i, MAKE_NUMBER(0));
if (True == x140289293748519) {
pushCont(co, 37, clofun5, 2, to, n);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString("&&label0");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289293749543 = PRIM_LT(i, n);
if (True == x140289293749543) {
pushCont(co, 35, clofun5, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = to;
__arg2 = makeCString(", &&label");
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
}

label35:
{
Obj x140289293749927 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 36, clofun5, 3, i, to, n);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = to;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140289293525223 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj to= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj n= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289293525799 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45jumptable);
__arg1 = to;
__arg2 = x140289293525799;
__arg3 = n;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140289293748807 = __arg1;
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
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140289294607271 = __arg1;
Obj x140289294607367 = __arg2;
Obj x140289294607751 = makeNative(39, clofun5, 0, 2, x140289294607271, x140289294607367);
Obj fn = x140289294607271;
Obj x140289293747015 = PRIM_EQ(Nil, x140289294607367);
if (True == x140289293747015) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun5) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294607751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140289294608295 = makeNative(41, clofun5, 0, 0);
Obj fn = closureRef(co, 0);
Obj x140289293785927 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140289293785927) {
Obj x140289293786279 = PRIM_CAR(closureRef(co, 1));
Obj x = x140289293786279;
Obj x140289293786759 = PRIM_CDR(closureRef(co, 1));
Obj y = x140289293786759;
pushCont(co, 40, clofun5, 2, fn, y);
__nargs = 2;
__arg0 = fn;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294608295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label40:
{
Obj x140289293787015 = __arg1;
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = fn;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
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

label42:
{
Obj globals = __arg1;
Obj exp = __arg2;
pushCont(co, 43, clofun5, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35parse_45pass);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140289293784071 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 44, clofun5);
__nargs = 2;
__arg0 = x140289293784071;
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140289293784135 = __arg1;
PUSH_CONT_0(co, 45, clofun5);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert_45pass);
__arg1 = x140289293784135;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140289293784167 = __arg1;
PUSH_CONT_0(co, 46, clofun5);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45pass);
__arg1 = x140289293784167;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140289293784199 = __arg1;
PUSH_CONT_0(co, 47, clofun5);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack_45pass);
__arg1 = x140289293784199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140289293784295 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda_45pass);
__arg1 = x140289293784295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj exp = __arg1;
pushCont(co, 49, clofun5, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35cadr);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun5) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140289293831047 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj obj = x140289293831047;
pushCont(co, 0, clofun6, 1, obj);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35cddr);
__arg1 = exp;
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
Obj x140289293831463 = __arg1;
Obj obj= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fns = x140289293831463;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35rewrite_45_45_62macro);
__arg1 = obj;
__arg2 = fns;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x140289294621511 = __arg1;
Obj x140289294621543 = __arg2;
Obj x140289294621959 = makeNative(2, clofun6, 0, 2, x140289294621511, x140289294621543);
Obj obj = x140289294621511;
Obj x140289293828839 = PRIM_EQ(Nil, x140289294621543);
if (True == x140289293828839) {
__nargs = 2;
__arg1 = obj;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294621959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj x140289294622503 = makeNative(3, clofun6, 0, 0);
Obj obj = closureRef(co, 0);
Obj x140289293838727 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140289293838727) {
Obj x140289293838983 = PRIM_CAR(closureRef(co, 1));
Obj hd = x140289293838983;
Obj x140289293839559 = PRIM_CDR(closureRef(co, 1));
Obj more = x140289293839559;
Obj x140289293840135 = makeCons(obj, Nil);
Obj x140289293840167 = makeCons(hd, x140289293840135);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35rewrite_45_45_62macro);
__arg1 = x140289293840167;
__arg2 = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294622503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
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

label4:
{
Obj exp = __arg1;
pushCont(co, 5, clofun6, 1, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35vector);
__arg1 = MAKE_NUMBER(2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140289293874471 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v = x140289293874471;
pushCont(co, 6, clofun6, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35vector_45set_33);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
__arg3 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140289293875079 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 7, clofun6, 2, exp, v);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35vector_45set_33);
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
__arg3 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140289293875559 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 8, clofun6, 1, v);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda);
__arg1 = v;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140289293875911 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj e1 = x140289293875911;
Obj x140289293836423 = makeCons(e1, Nil);
Obj x140289293836455 = makeCons(Nil, x140289293836423);
Obj x140289293836487 = makeCons(Nil, x140289293836455);
Obj x140289293836519 = makeCons(symlambda, x140289293836487);
pushCont(co, 9, clofun6, 1, v);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = x140289293836519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140289293836551 = __arg1;
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35vector_45ref);
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = exp;
__arg2 = globalRef(symcora_47lib_47toc_35id);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj exp = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = Nil;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
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
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140289294764487 = __arg1;
Obj x140289294764519 = __arg2;
Obj x140289294764551 = __arg3;
Obj x140289294765255 = makeNative(22, clofun6, 0, 3, x140289294764487, x140289294764519, x140289294764551);
Obj w = x140289294764487;
Obj x140289294622215 = PRIM_ISCONS(x140289294764519);
if (True == x140289294622215) {
Obj x140289294606631 = PRIM_CAR(x140289294764519);
Obj label = x140289294606631;
Obj x140289294607463 = PRIM_CDR(x140289294764519);
Obj x140289294607495 = PRIM_ISCONS(x140289294607463);
if (True == x140289294607495) {
Obj x140289294608135 = PRIM_CDR(x140289294764519);
Obj x140289294608359 = PRIM_CAR(x140289294608135);
Obj x140289294608391 = PRIM_ISCONS(x140289294608359);
if (True == x140289294608391) {
Obj x140289294609415 = PRIM_CDR(x140289294764519);
Obj x140289294609447 = PRIM_CAR(x140289294609415);
Obj x140289294609479 = PRIM_CAR(x140289294609447);
Obj x140289294609511 = PRIM_EQ(symlambda, x140289294609479);
if (True == x140289294609511) {
Obj x140289294204967 = PRIM_CDR(x140289294764519);
Obj x140289294205031 = PRIM_CAR(x140289294204967);
Obj x140289294205063 = PRIM_CDR(x140289294205031);
Obj x140289294205095 = PRIM_ISCONS(x140289294205063);
if (True == x140289294205095) {
Obj x140289294206183 = PRIM_CDR(x140289294764519);
Obj x140289294206215 = PRIM_CAR(x140289294206183);
Obj x140289294206247 = PRIM_CDR(x140289294206215);
Obj x140289294206279 = PRIM_CAR(x140289294206247);
Obj params = x140289294206279;
Obj x140289294208039 = PRIM_CDR(x140289294764519);
Obj x140289294208071 = PRIM_CAR(x140289294208039);
Obj x140289294208103 = PRIM_CDR(x140289294208071);
Obj x140289294208135 = PRIM_CDR(x140289294208103);
Obj x140289294208167 = PRIM_ISCONS(x140289294208135);
if (True == x140289294208167) {
Obj x140289294119143 = PRIM_CDR(x140289294764519);
Obj x140289294119303 = PRIM_CAR(x140289294119143);
Obj x140289294119335 = PRIM_CDR(x140289294119303);
Obj x140289294119367 = PRIM_CDR(x140289294119335);
Obj x140289294119399 = PRIM_CAR(x140289294119367);
Obj actives = x140289294119399;
Obj x140289294121447 = PRIM_CDR(x140289294764519);
Obj x140289294121479 = PRIM_CAR(x140289294121447);
Obj x140289294121511 = PRIM_CDR(x140289294121479);
Obj x140289294121543 = PRIM_CDR(x140289294121511);
Obj x140289294121575 = PRIM_CDR(x140289294121543);
Obj x140289294121607 = PRIM_ISCONS(x140289294121575);
if (True == x140289294121607) {
Obj x140289294065703 = PRIM_CDR(x140289294764519);
Obj x140289294065735 = PRIM_CAR(x140289294065703);
Obj x140289294065767 = PRIM_CDR(x140289294065735);
Obj x140289294065799 = PRIM_CDR(x140289294065767);
Obj x140289294065831 = PRIM_CDR(x140289294065799);
Obj x140289294065863 = PRIM_CAR(x140289294065831);
Obj body = x140289294065863;
Obj x140289294067751 = PRIM_CDR(x140289294764519);
Obj x140289294067783 = PRIM_CAR(x140289294067751);
Obj x140289294067815 = PRIM_CDR(x140289294067783);
Obj x140289294067847 = PRIM_CDR(x140289294067815);
Obj x140289294067879 = PRIM_CDR(x140289294067847);
Obj x140289294067911 = PRIM_CDR(x140289294067879);
Obj x140289294067943 = PRIM_EQ(Nil, x140289294067911);
if (True == x140289294067943) {
Obj x140289294068775 = PRIM_CDR(x140289294764519);
Obj x140289294068807 = PRIM_CDR(x140289294068775);
Obj x140289294068839 = PRIM_EQ(Nil, x140289294068807);
if (True == x140289294068839) {
Obj maxid = x140289294764551;
pushCont(co, 15, clofun6, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("label");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294765255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj x140289294069415 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
Obj x140289293997063 = PRIM_SUB(maxid, label);
pushCont(co, 16, clofun6, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = x140289293997063;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140289293997127 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 17, clofun6, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = x140289293997127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140289293997159 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 18, clofun6, 6, actives, maxid, label, params, body, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(":\n{\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140289293997543 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 19, clofun6, 6, actives, maxid, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45args_45reverse);
__arg1 = globalRef(symcora_47lib_47toc_35local_45from_45params);
__arg2 = w;
__arg3 = MAKE_NUMBER(1);
co->args[4] = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140289293997895 = __arg1;
Obj actives= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 5];
pushCont(co, 20, clofun6, 5, maxid, label, params, body, w);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45args_45reverse);
__arg1 = globalRef(symcora_47lib_47toc_35local_45from_45cont);
__arg2 = w;
__arg3 = MAKE_NUMBER(0);
co->args[4] = actives;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140289293998951 = __arg1;
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140289293999495 = makeCons(maxid, label);
pushCont(co, 21, clofun6, 1, w);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = x140289293999495;
__arg2 = params;
__arg3 = w;
co->args[4] = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140289293999687 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("}\n\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140289294620167 = makeNative(25, clofun6, 0, 0);
Obj w = closureRef(co, 0);
Obj other = closureRef(co, 1);
Obj maxid = closureRef(co, 2);
pushCont(co, 23, clofun6, 1, other);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35display);
__arg1 = makeCString("wrong format of toplevel\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140289294620903 = __arg1;
Obj other= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 24, clofun6);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35display);
__arg1 = other;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140289294621351 = __arg1;
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47io_35display);
__arg1 = makeCString("\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140289294804167 = __arg1;
Obj x140289294804199 = __arg2;
Obj x140289294804231 = __arg3;
Obj x140289294804327 = co->args[4];
Obj x140289294805543 = makeNative(27, clofun6, 0, 4, x140289294804167, x140289294804199, x140289294804231, x140289294804327);
Obj fn = x140289294804167;
Obj w = x140289294804199;
Obj idx = x140289294804231;
Obj x140289294618951 = PRIM_EQ(Nil, x140289294804327);
if (True == x140289294618951) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294805543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label27:
{
Obj x140289294762631 = makeNative(29, clofun6, 0, 0);
Obj fn = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj idx = closureRef(co, 2);
Obj x140289294804135 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140289294804135) {
Obj x140289294762535 = PRIM_CAR(closureRef(co, 3));
Obj a = x140289294762535;
Obj x140289294763015 = PRIM_CDR(closureRef(co, 3));
Obj b = x140289294763015;
pushCont(co, 28, clofun6, 4, idx, fn, w, b);
__nargs = 4;
__arg0 = fn;
__arg1 = w;
__arg2 = idx;
__arg3 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294762631;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj x140289294763591 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140289294765127 = PRIM_ADD(idx, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45args_45reverse);
__arg1 = fn;
__arg2 = w;
__arg3 = x140289294765127;
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 31, clofun6, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140289294808359 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 32, clofun6, 2, i, w);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = symignore;
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140289294808807 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 33, clofun6, 2, i, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140289294809383 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 34, clofun6, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140289294809863 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj w = __arg1;
Obj i = __arg2;
Obj var = __arg3;
pushCont(co, 36, clofun6, 3, var, i, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140289295940263 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 37, clofun6, 2, i, w);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = symignore;
__arg2 = Nil;
__arg3 = w;
co->args[4] = var;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140289295940679 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289295941063 = PRIM_LT(i, MAKE_NUMBER(4));
if (True == x140289295941063) {
pushCont(co, 40, clofun6, 2, i, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(" = __arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 38, clofun6, 2, i, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(" = co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj x140289294841895 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 39, clofun6, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label39:
{
Obj x140289294842407 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140289295941351 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 41, clofun6, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140289294840647 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
pushCont(co, 43, clofun6, 3, label, maxid, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("static void ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140289295938119 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj maxid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 44, clofun6, 1, w);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = w;
__arg2 = label;
__arg3 = maxid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140289295938567 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 45, clofun6, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("(struct Cora* co");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140289295938855 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj w = __arg1;
Obj label = __arg2;
Obj maxid = __arg3;
Obj x140289296074727 = PRIM_SUB(maxid, label);
Obj x140289296074791 = primDiv(x140289296074727, globalRef(symcora_47lib_47toc_35_42mod_45num_42));
Obj gid = x140289296074791;
pushCont(co, 47, clofun6, 2, w, gid);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("clofun");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140289296075495 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj gid= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = gid;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
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
if (ps.func != clofun6) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140289294843719 = __arg1;
Obj x140289294843751 = __arg2;
Obj x140289294843783 = __arg3;
Obj x140289294843815 = co->args[4];
Obj x140289294843847 = co->args[5];
Obj x140289294808295 = makeNative(0, clofun7, 0, 5, x140289294843719, x140289294843751, x140289294843783, x140289294843815, x140289294843847);
Obj self = x140289294843719;
Obj env = x140289294843751;
Obj fn = x140289294843783;
Obj w = x140289294843815;
Obj x140289296100999 = PRIM_EQ(Nil, x140289294843847);
if (True == x140289296100999) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun6) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294808295;
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
Obj x140289294809767 = makeNative(4, clofun7, 0, 0);
Obj self = closureRef(co, 0);
Obj env = closureRef(co, 1);
Obj fn = closureRef(co, 2);
Obj w = closureRef(co, 3);
Obj x140289296236039 = PRIM_ISCONS(closureRef(co, 4));
if (True == x140289296236039) {
Obj x140289296097479 = PRIM_CAR(closureRef(co, 4));
Obj a = x140289296097479;
Obj x140289296097735 = PRIM_CDR(closureRef(co, 4));
Obj b = x140289296097735;
pushCont(co, 1, clofun7, 5, self, env, fn, w, b);
__nargs = 5;
__arg0 = fn;
__arg1 = self;
__arg2 = env;
__arg3 = w;
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294809767;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj x140289296098375 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 2, clofun7, 5, self, env, fn, w, b);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x140289296098855 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fn= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj x140289296098887 = primNot(x140289296098855);
if (True == x140289296098887) {
pushCont(co, 3, clofun7, 5, self, env, fn, w, b);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj x140289296099431 = __arg1;
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
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140289294840551 = __arg1;
Obj x140289294840583 = __arg2;
Obj x140289294840679 = __arg3;
Obj x140289294841575 = makeNative(28, clofun7, 0, 0);
Obj self = x140289294840551;
Obj w = x140289294840583;
Obj x140289296388743 = PRIM_ISCONS(x140289294840679);
if (True == x140289296388743) {
Obj x140289296389319 = PRIM_CAR(x140289294840679);
Obj x140289296389351 = PRIM_EQ(sym_37continuation, x140289296389319);
if (True == x140289296389351) {
Obj x140289296389767 = PRIM_CDR(x140289294840679);
Obj x140289296389799 = PRIM_ISCONS(x140289296389767);
if (True == x140289296389799) {
Obj x140289296390279 = PRIM_CDR(x140289294840679);
Obj x140289296390311 = PRIM_CAR(x140289296390279);
Obj label = x140289296390311;
Obj x140289296391719 = PRIM_CDR(x140289294840679);
Obj x140289296391815 = PRIM_CDR(x140289296391719);
Obj stacks = x140289296391815;
Obj x140289296359495 = PRIM_EQ(stacks, Nil);
if (True == x140289296359495) {
pushCont(co, 17, clofun7, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("PUSH_CONT_0(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 6, clofun7, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("pushCont(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294841575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294841575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294841575;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x140289296316807 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140289296241703 = PRIM_CAR(self);
Obj x140289296241767 = PRIM_SUB(x140289296241703, label);
pushCont(co, 7, clofun7, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = x140289296241767;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140289296241831 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 8, clofun7, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = x140289296241831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140289296241863 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 9, clofun7, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140289296242407 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140289296242983 = PRIM_CAR(self);
pushCont(co, 10, clofun7, 3, self, stacks, w);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = w;
__arg2 = label;
__arg3 = x140289296242983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140289296243015 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289296243431 = PRIM_EQ(stacks, Nil);
if (True == x140289296243431) {
Nil;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 11, clofun7, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj x140289296244071 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 12, clofun7, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140289296244615 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 13, clofun7, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = x140289296244615;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140289296244647 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 14, clofun7, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(15, clofun7, 1, 2, self, w);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140289296233703 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x = __arg1;
pushCont(co, 16, clofun7, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 1);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140289296233287 = __arg1;
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
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140289296359719 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140289296360711 = PRIM_CAR(self);
Obj x140289296360775 = PRIM_SUB(x140289296360711, label);
pushCont(co, 18, clofun7, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = x140289296360775;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140289296360839 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 19, clofun7, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = x140289296360839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140289296360871 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 20, clofun7, 4, label, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140289296361223 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140289296362247 = PRIM_CAR(self);
pushCont(co, 21, clofun7, 3, self, stacks, w);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = w;
__arg2 = label;
__arg3 = x140289296362247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140289296362279 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289296362759 = PRIM_EQ(stacks, Nil);
if (True == x140289296362759) {
Nil;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 22, clofun7, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj x140289296363463 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 23, clofun7, 3, self, stacks, w);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140289296314951 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 24, clofun7, 3, self, stacks, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = x140289296314951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140289296314983 = __arg1;
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj stacks= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 25, clofun7, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35for_45each);
__arg1 = makeNative(26, clofun7, 1, 2, self, w);
__arg2 = stacks;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140289296316391 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(");\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x = __arg1;
pushCont(co, 27, clofun7, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 1);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140289296315623 = __arg1;
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
Obj self = __arg1;
Obj env = __arg2;
Obj w = __arg3;
Obj x1 = co->args[4];
Obj x140289298089799 = primIsSymbol(x1);
if (True == x140289298089799) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = w;
__arg2 = x1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289294802951 = makeNative(32, clofun7, 0, 4, self, env, x1, w);
Obj x140289296685415 = PRIM_ISCONS(x1);
if (True == x140289296685415) {
Obj x140289296686055 = PRIM_CAR(x1);
Obj x140289296686087 = PRIM_EQ(sym_37global, x140289296686055);
if (True == x140289296686087) {
Obj x140289296686567 = PRIM_CDR(x1);
Obj x140289296686599 = PRIM_ISCONS(x140289296686567);
if (True == x140289296686599) {
Obj x140289296662823 = PRIM_CDR(x1);
Obj x140289296662855 = PRIM_CAR(x140289296662823);
Obj x = x140289296662855;
Obj x140289296663655 = PRIM_CDR(x1);
Obj x140289296663687 = PRIM_CDR(x140289296663655);
Obj x140289296663719 = PRIM_EQ(Nil, x140289296663687);
if (True == x140289296663719) {
pushCont(co, 30, clofun7, 2, x, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("globalRef(sym");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294802951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294802951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294802951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294802951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label30:
{
Obj x140289296664167 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 31, clofun7, 1, w);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = w;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140289296664647 = __arg1;
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140289294803783 = makeNative(35, clofun7, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140289296999559 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140289296999559) {
Obj x140289297000263 = PRIM_CAR(closureRef(co, 2));
Obj x140289297000295 = PRIM_EQ(sym_37closure_45ref, x140289297000263);
if (True == x140289297000295) {
Obj x140289297000871 = PRIM_CDR(closureRef(co, 2));
Obj x140289297000903 = PRIM_ISCONS(x140289297000871);
if (True == x140289297000903) {
Obj x140289297001351 = PRIM_CDR(closureRef(co, 2));
Obj x140289297001383 = PRIM_CAR(x140289297001351);
Obj idx = x140289297001383;
Obj x140289297002471 = PRIM_CDR(closureRef(co, 2));
Obj x140289296683015 = PRIM_CDR(x140289297002471);
Obj x140289296683047 = PRIM_EQ(Nil, x140289296683015);
if (True == x140289296683047) {
pushCont(co, 33, clofun7, 1, idx);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("closureRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294803783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294803783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294803783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294803783;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x140289296683463 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 34, clofun7);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140289296683847 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140289294804359 = makeNative(38, clofun7, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140289297027239 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140289297027239) {
Obj x140289297027943 = PRIM_CAR(closureRef(co, 2));
Obj x140289297027975 = PRIM_EQ(sym_37stack_45ref, x140289297027943);
if (True == x140289297027975) {
Obj x140289297028519 = PRIM_CDR(closureRef(co, 2));
Obj x140289297028551 = PRIM_ISCONS(x140289297028519);
if (True == x140289297028551) {
Obj x140289297029095 = PRIM_CDR(closureRef(co, 2));
Obj x140289297029223 = PRIM_CAR(x140289297029095);
Obj idx = x140289297029223;
Obj x140289297029895 = PRIM_CDR(closureRef(co, 2));
Obj x140289297029927 = PRIM_CDR(x140289297029895);
Obj x140289297029959 = PRIM_EQ(Nil, x140289297029927);
if (True == x140289297029959) {
pushCont(co, 36, clofun7, 1, idx);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("stackRef(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294804359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294804359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294804359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294804359;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj x140289297030311 = __arg1;
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 37, clofun7);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = idx;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140289297030919 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140289294805319 = makeNative(46, clofun7, 0, 4, closureRef(co, 2), closureRef(co, 0), closureRef(co, 1), closureRef(co, 3));
Obj x140289297274631 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140289297274631) {
Obj x140289297275175 = PRIM_CAR(closureRef(co, 2));
Obj x140289297275207 = PRIM_EQ(sym_37const, x140289297275175);
if (True == x140289297275207) {
Obj x140289297276231 = PRIM_CDR(closureRef(co, 2));
Obj x140289297276263 = PRIM_ISCONS(x140289297276231);
if (True == x140289297276263) {
Obj x140289297276775 = PRIM_CDR(closureRef(co, 2));
Obj x140289297276807 = PRIM_CAR(x140289297276775);
Obj x = x140289297276807;
Obj x140289297097223 = PRIM_CDR(closureRef(co, 2));
Obj x140289297097255 = PRIM_CDR(x140289297097223);
Obj x140289297097351 = PRIM_EQ(Nil, x140289297097255);
if (True == x140289297097351) {
Obj x140289297097607 = primIsSymbol(x);
if (True == x140289297097607) {
pushCont(co, 45, clofun7, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("sym");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 39, clofun7, 1, x);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35number_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294805319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294805319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294805319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294805319;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140289297098535 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140289297098535) {
pushCont(co, 43, clofun7, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("MAKE_NUMBER(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289297099911 = primIsString(x);
if (True == x140289297099911) {
pushCont(co, 40, clofun7, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("makeCString(\"");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289297077031 = PRIM_EQ(x, Nil);
if (True == x140289297077031) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("Nil");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289297077703 = PRIM_EQ(x, True);
if (True == x140289297077703) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("True");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289297078183 = PRIM_EQ(x, False);
if (True == x140289297078183) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("False");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no cond match");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}
}
}

label40:
{
Obj x140289297100391 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 41, clofun7);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35escape_45str);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140289297076295 = __arg1;
PUSH_CONT_0(co, 42, clofun7);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = x140289297076295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140289297076327 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("\")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140289297098951 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 44, clofun7);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140289297099303 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140289297097959 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = closureRef(co, 3);
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140289294806503 = makeNative(7, clofun8, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140289297757895 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289297757895) {
Obj x140289297758503 = PRIM_CAR(closureRef(co, 0));
Obj x140289297758535 = PRIM_EQ(symlet, x140289297758503);
if (True == x140289297758535) {
Obj x140289297759079 = PRIM_CDR(closureRef(co, 0));
Obj x140289297759111 = PRIM_ISCONS(x140289297759079);
if (True == x140289297759111) {
Obj x140289297759783 = PRIM_CDR(closureRef(co, 0));
Obj x140289297759815 = PRIM_CAR(x140289297759783);
Obj a = x140289297759815;
Obj x140289297731815 = PRIM_CDR(closureRef(co, 0));
Obj x140289297731847 = PRIM_CDR(x140289297731815);
Obj x140289297731975 = PRIM_ISCONS(x140289297731847);
if (True == x140289297731975) {
Obj x140289297732615 = PRIM_CDR(closureRef(co, 0));
Obj x140289297732743 = PRIM_CDR(x140289297732615);
Obj x140289297732871 = PRIM_CAR(x140289297732743);
Obj b = x140289297732871;
Obj x140289297734599 = PRIM_CDR(closureRef(co, 0));
Obj x140289297734631 = PRIM_CDR(x140289297734599);
Obj x140289297734663 = PRIM_CDR(x140289297734631);
Obj x140289297734695 = PRIM_ISCONS(x140289297734663);
if (True == x140289297734695) {
Obj x140289297326183 = PRIM_CDR(closureRef(co, 0));
Obj x140289297326215 = PRIM_CDR(x140289297326183);
Obj x140289297326247 = PRIM_CDR(x140289297326215);
Obj x140289297326279 = PRIM_CAR(x140289297326247);
Obj c = x140289297326279;
Obj x140289297328135 = PRIM_CDR(closureRef(co, 0));
Obj x140289297328231 = PRIM_CDR(x140289297328135);
Obj x140289297328263 = PRIM_CDR(x140289297328231);
Obj x140289297328359 = PRIM_CDR(x140289297328263);
Obj x140289297328391 = PRIM_EQ(Nil, x140289297328359);
if (True == x140289297328391) {
pushCont(co, 47, clofun7, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35index);
__arg1 = a;
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294806503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294806503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294806503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294806503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294806503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294806503;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label47:
{
Obj x140289297328711 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj idx = x140289297328711;
Obj x140289297329191 = PRIM_LT(idx, MAKE_NUMBER(0));
if (True == x140289297329191) {
pushCont(co, 2, clofun8, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("Obj ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Nil;
pushCont(co, 48, clofun7, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = closureRef(co, 3);
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj x140289297299367 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 49, clofun7, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun7) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140289297299719 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 0, clofun8, 2, a, c);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = b;
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
Obj x140289297300231 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 1, clofun8, 2, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x140289297300679 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289297273159 = makeCons(a, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = x140289297273159;
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x140289297329511 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 3, clofun8, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45sym);
__arg1 = closureRef(co, 3);
__arg2 = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140289297329831 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 4, clofun8, 3, b, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140289297297511 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 5, clofun8, 2, a, c);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140289297297895 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 6, clofun8, 2, a, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140289297298247 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289297298919 = makeCons(a, closureRef(co, 2));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = x140289297298919;
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140289294762855 = makeNative(14, clofun8, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140289297964711 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289297964711) {
Obj x140289297825991 = PRIM_CAR(closureRef(co, 0));
Obj x140289297826087 = PRIM_ISCONS(x140289297825991);
if (True == x140289297826087) {
Obj x140289297826951 = PRIM_CAR(closureRef(co, 0));
Obj x140289297826983 = PRIM_CAR(x140289297826951);
Obj x140289297827015 = PRIM_EQ(sym_37builtin, x140289297826983);
if (True == x140289297827015) {
Obj x140289297827879 = PRIM_CAR(closureRef(co, 0));
Obj x140289297827911 = PRIM_CDR(x140289297827879);
Obj x140289297827943 = PRIM_ISCONS(x140289297827911);
if (True == x140289297827943) {
Obj x140289297829127 = PRIM_CAR(closureRef(co, 0));
Obj x140289297829159 = PRIM_CDR(x140289297829127);
Obj x140289297829191 = PRIM_CAR(x140289297829159);
Obj f = x140289297829191;
Obj x140289297780999 = PRIM_CAR(closureRef(co, 0));
Obj x140289297781031 = PRIM_CDR(x140289297780999);
Obj x140289297781063 = PRIM_CDR(x140289297781031);
Obj x140289297781095 = PRIM_EQ(Nil, x140289297781063);
if (True == x140289297781095) {
Obj x140289297782087 = PRIM_CDR(closureRef(co, 0));
Obj args = x140289297782087;
pushCont(co, 8, clofun8, 2, f, args);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35builtin_45_62name);
__arg1 = f;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294762855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294762855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294762855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294762855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294762855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj x140289297782791 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 9, clofun8, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = x140289297782791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140289297782823 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289297783271 = PRIM_EQ(f, symset);
if (True == x140289297783271) {
pushCont(co, 12, clofun8, 1, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("(co, ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 10, clofun8, 1, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj x140289297784551 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 11, clofun8);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst_45list);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140289297756295 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label12:
{
Obj x140289297783527 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 13, clofun8);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst_45list);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140289297784103 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140289294763815 = makeNative(21, clofun8, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140289297985735 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289297985735) {
Obj x140289297986247 = PRIM_CAR(closureRef(co, 0));
Obj x140289297986279 = PRIM_EQ(symif, x140289297986247);
if (True == x140289297986279) {
Obj x140289297986695 = PRIM_CDR(closureRef(co, 0));
Obj x140289297986727 = PRIM_ISCONS(x140289297986695);
if (True == x140289297986727) {
Obj x140289297987143 = PRIM_CDR(closureRef(co, 0));
Obj x140289297987175 = PRIM_CAR(x140289297987143);
Obj a = x140289297987175;
Obj x140289297987847 = PRIM_CDR(closureRef(co, 0));
Obj x140289297987879 = PRIM_CDR(x140289297987847);
Obj x140289297987911 = PRIM_ISCONS(x140289297987879);
if (True == x140289297987911) {
Obj x140289297988679 = PRIM_CDR(closureRef(co, 0));
Obj x140289297988711 = PRIM_CDR(x140289297988679);
Obj x140289297988743 = PRIM_CAR(x140289297988711);
Obj b = x140289297988743;
Obj x140289297989479 = PRIM_CDR(closureRef(co, 0));
Obj x140289297989543 = PRIM_CDR(x140289297989479);
Obj x140289297989575 = PRIM_CDR(x140289297989543);
Obj x140289297989607 = PRIM_ISCONS(x140289297989575);
if (True == x140289297989607) {
Obj x140289297978343 = PRIM_CDR(closureRef(co, 0));
Obj x140289297978375 = PRIM_CDR(x140289297978343);
Obj x140289297978407 = PRIM_CDR(x140289297978375);
Obj x140289297978439 = PRIM_CAR(x140289297978407);
Obj c = x140289297978439;
Obj x140289297979591 = PRIM_CDR(closureRef(co, 0));
Obj x140289297979623 = PRIM_CDR(x140289297979591);
Obj x140289297979655 = PRIM_CDR(x140289297979623);
Obj x140289297979687 = PRIM_CDR(x140289297979655);
Obj x140289297979719 = PRIM_EQ(Nil, x140289297979687);
if (True == x140289297979719) {
pushCont(co, 15, clofun8, 3, a, b, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("if (True == ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294763815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294763815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294763815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294763815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294763815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294763815;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj x140289297980007 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 16, clofun8, 2, b, c);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140289297980487 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 17, clofun8, 2, b, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(") {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140289297980839 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 18, clofun8, 1, c);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140289297981351 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 19, clofun8, 1, c);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("} else {\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140289297961159 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 20, clofun8);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140289297961639 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("}\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140289294764999 = makeNative(35, clofun8, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140289298009831 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289298009831) {
Obj x140289298002471 = PRIM_CAR(closureRef(co, 0));
Obj x140289298002535 = PRIM_EQ(sym_37closure, x140289298002471);
if (True == x140289298002535) {
Obj x140289298002983 = PRIM_CDR(closureRef(co, 0));
Obj x140289298003047 = PRIM_ISCONS(x140289298002983);
if (True == x140289298003047) {
Obj x140289298003463 = PRIM_CDR(closureRef(co, 0));
Obj x140289298003495 = PRIM_CAR(x140289298003463);
Obj label = x140289298003495;
Obj x140289298004263 = PRIM_CDR(closureRef(co, 0));
Obj x140289298004295 = PRIM_CDR(x140289298004263);
Obj x140289298004327 = PRIM_ISCONS(x140289298004295);
if (True == x140289298004327) {
Obj x140289298005063 = PRIM_CDR(closureRef(co, 0));
Obj x140289298005095 = PRIM_CDR(x140289298005063);
Obj x140289298005127 = PRIM_CAR(x140289298005095);
Obj nargs = x140289298005127;
Obj x140289298005991 = PRIM_CDR(closureRef(co, 0));
Obj x140289297997927 = PRIM_CDR(x140289298005991);
Obj x140289297998023 = PRIM_CDR(x140289297997927);
Obj frees = x140289297998023;
pushCont(co, 22, clofun8, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("makeNative(");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294764999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294764999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294764999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294764999;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj x140289297998503 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289297999399 = PRIM_CAR(closureRef(co, 1));
Obj x140289297999559 = PRIM_SUB(x140289297999399, label);
pushCont(co, 23, clofun8, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47hash_45h_35mod);
__arg1 = x140289297999559;
__arg2 = globalRef(symcora_47lib_47toc_35_42mod_45num_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140289297999623 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 24, clofun8, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = x140289297999623;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140289297999655 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 25, clofun8, 3, label, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140289298000295 = __arg1;
Obj label= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289298001511 = PRIM_CAR(closureRef(co, 1));
pushCont(co, 26, clofun8, 2, nargs, frees);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 3);
__arg2 = label;
__arg3 = x140289298001511;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140289298001543 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 27, clofun8, 2, nargs, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140289298001831 = __arg1;
Obj nargs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 28, clofun8, 1, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = nargs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140289297994151 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 29, clofun8, 1, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x140289297994439 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 30, clofun8, 1, frees);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140289297995207 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 31, clofun8, 1, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 3);
__arg2 = x140289297995207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140289297995239 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 32, clofun8, 1, frees);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label32:
{
Obj x140289297995815 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289297995847 = primNot(x140289297995815);
if (True == x140289297995847) {
pushCont(co, 33, clofun8, 1, frees);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(", ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x140289297996295 = __arg1;
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 34, clofun8);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst_45list);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = frees;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140289297996583 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(")");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140289294765799 = makeNative(38, clofun8, 0, 4, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 3));
Obj x140289298017351 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289298017351) {
Obj x140289298018215 = PRIM_CAR(closureRef(co, 0));
Obj x140289298018247 = PRIM_EQ(symdo, x140289298018215);
if (True == x140289298018247) {
Obj x140289298010919 = PRIM_CDR(closureRef(co, 0));
Obj x140289298010951 = PRIM_ISCONS(x140289298010919);
if (True == x140289298010951) {
Obj x140289298011367 = PRIM_CDR(closureRef(co, 0));
Obj x140289298011399 = PRIM_CAR(x140289298011367);
Obj a = x140289298011399;
Obj x140289298013063 = PRIM_CDR(closureRef(co, 0));
Obj x140289298013095 = PRIM_CDR(x140289298013063);
Obj x140289298013127 = PRIM_ISCONS(x140289298013095);
if (True == x140289298013127) {
Obj x140289298013863 = PRIM_CDR(closureRef(co, 0));
Obj x140289298013895 = PRIM_CDR(x140289298013863);
Obj x140289298013927 = PRIM_CAR(x140289298013895);
Obj b = x140289298013927;
Obj x140289298006919 = PRIM_CDR(closureRef(co, 0));
Obj x140289298006951 = PRIM_CDR(x140289298006919);
Obj x140289298006983 = PRIM_CDR(x140289298006951);
Obj x140289298007015 = PRIM_EQ(Nil, x140289298006983);
if (True == x140289298007015) {
pushCont(co, 36, clofun8, 1, b);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = a;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294765799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765799;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj x140289298007431 = __arg1;
Obj b= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 37, clofun8, 1, b);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140289298007751 = __arg1;
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
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140289294619207 = makeNative(47, clofun8, 0, 4, closureRef(co, 0), closureRef(co, 2), closureRef(co, 1), closureRef(co, 3));
Obj x140289298025319 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289298025319) {
Obj x140289298025959 = PRIM_CAR(closureRef(co, 0));
Obj x140289298025991 = PRIM_EQ(symreturn, x140289298025959);
if (True == x140289298025991) {
Obj x140289298018311 = PRIM_CDR(closureRef(co, 0));
Obj x140289298018343 = PRIM_ISCONS(x140289298018311);
if (True == x140289298018343) {
Obj x140289298018887 = PRIM_CDR(closureRef(co, 0));
Obj x140289298018919 = PRIM_CAR(x140289298018887);
Obj x = x140289298018919;
Obj x140289298020295 = PRIM_CDR(closureRef(co, 0));
Obj x140289298020327 = PRIM_CDR(x140289298020295);
Obj x140289298020359 = PRIM_EQ(Nil, x140289298020327);
if (True == x140289298020359) {
pushCont(co, 39, clofun8, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("__nargs = 2;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294619207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294619207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294619207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294619207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140289298020807 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 40, clofun8, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("__arg1 = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140289298021319 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 41, clofun8);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 2);
__arg2 = closureRef(co, 1);
__arg3 = closureRef(co, 3);
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140289298021767 = __arg1;
PUSH_CONT_0(co, 42, clofun8);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140289298022087 = __arg1;
PUSH_CONT_0(co, 43, clofun8);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("co->ctx = co->callstack.data[--co->callstack.len];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140289298014343 = __arg1;
PUSH_CONT_0(co, 44, clofun8);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("if (co->ctx.pc.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
Obj x140289298014631 = __arg1;
Obj x140289298015399 = PRIM_CDR(closureRef(co, 2));
Obj x140289298015655 = PRIM_CAR(closureRef(co, 2));
PUSH_CONT_0(co, 45, clofun8);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 3);
__arg2 = x140289298015399;
__arg3 = x140289298015655;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x140289298015687 = __arg1;
PUSH_CONT_0(co, 46, clofun8);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString(") { goto fail; }\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140289298015975 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 3);
__arg2 = makeCString("goto *jumpTable[co->ctx.pc.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140289294619751 = makeNative(48, clofun8, 0, 4, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2), closureRef(co, 3));
Obj x140289298027879 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289298027879) {
Obj x140289298028647 = PRIM_CAR(closureRef(co, 0));
Obj x140289298028679 = PRIM_EQ(symtailcall, x140289298028647);
if (True == x140289298028679) {
Obj x140289298029191 = PRIM_CDR(closureRef(co, 0));
Obj x140289298029223 = PRIM_ISCONS(x140289298029191);
if (True == x140289298029223) {
Obj x140289298029639 = PRIM_CDR(closureRef(co, 0));
Obj x140289298029671 = PRIM_CAR(x140289298029639);
Obj exp = x140289298029671;
Obj x140289298023143 = PRIM_CDR(closureRef(co, 0));
Obj x140289298023175 = PRIM_CDR(x140289298023143);
Obj x140289298023207 = PRIM_EQ(Nil, x140289298023175);
if (True == x140289298023207) {
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = closureRef(co, 3);
co->args[4] = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294619751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294619751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294619751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294619751;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj x140289294620327 = makeNative(0, clofun9, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 3));
Obj x140289298035879 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289298035879) {
Obj x140289298036615 = PRIM_CAR(closureRef(co, 0));
Obj x140289298036743 = PRIM_EQ(symcall, x140289298036615);
if (True == x140289298036743) {
Obj x140289298037159 = PRIM_CDR(closureRef(co, 0));
Obj x140289298037351 = PRIM_ISCONS(x140289298037159);
if (True == x140289298037351) {
Obj x140289298038183 = PRIM_CDR(closureRef(co, 0));
Obj x140289298038215 = PRIM_CAR(x140289298038183);
Obj exp = x140289298038215;
Obj x140289298031879 = PRIM_CDR(closureRef(co, 0));
Obj x140289298031911 = PRIM_CDR(x140289298031879);
Obj x140289298032039 = PRIM_ISCONS(x140289298031911);
if (True == x140289298032039) {
Obj x140289298032711 = PRIM_CDR(closureRef(co, 0));
Obj x140289298032743 = PRIM_CDR(x140289298032711);
Obj x140289298032775 = PRIM_CAR(x140289298032743);
Obj cont = x140289298032775;
Obj x140289298033735 = PRIM_CDR(closureRef(co, 0));
Obj x140289298033863 = PRIM_CDR(x140289298033735);
Obj x140289298033895 = PRIM_CDR(x140289298033863);
Obj x140289298033927 = PRIM_EQ(Nil, x140289298033895);
if (True == x140289298033927) {
pushCont(co, 49, clofun8, 1, exp);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45cont);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 3);
__arg3 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294620327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294620327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294620327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294620327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294620327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun8) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj x140289298034343 = __arg1;
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

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140289294621095 = makeNative(12, clofun9, 0, 0);
Obj x140289298056775 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289298056775) {
Obj x140289298057063 = PRIM_CAR(closureRef(co, 0));
Obj f = x140289298057063;
Obj x140289298057351 = PRIM_CDR(closureRef(co, 0));
Obj args = x140289298057351;
pushCont(co, 1, clofun9, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("__nargs = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294621095;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj x140289298057799 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 2, clofun9, 2, f, args);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x140289298039079 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289298039111 = PRIM_ADD(MAKE_NUMBER(1), x140289298039079);
pushCont(co, 3, clofun9, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = closureRef(co, 2);
__arg2 = x140289298039111;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140289298039175 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 4, clofun9, 2, f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140289298039559 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289298040103 = makeCons(f, args);
PUSH_CONT_0(co, 5, clofun9);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
__arg3 = MAKE_NUMBER(0);
co->args[4] = x140289298040103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label5:
{
Obj x140289298040135 = __arg1;
PUSH_CONT_0(co, 6, clofun9);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("co->ctx.frees = __arg0;\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140289298040615 = __arg1;
PUSH_CONT_0(co, 7, clofun9);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140289298040903 = __arg1;
PUSH_CONT_0(co, 8, clofun9);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
{
Obj x140289298041255 = __arg1;
PUSH_CONT_0(co, 9, clofun9);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("if (ps.func != ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140289298042087 = __arg1;
Obj x140289298042535 = PRIM_CDR(closureRef(co, 1));
Obj x140289298034887 = PRIM_CAR(closureRef(co, 1));
PUSH_CONT_0(co, 10, clofun9);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45group_45name);
__arg1 = closureRef(co, 2);
__arg2 = x140289298042535;
__arg3 = x140289298034887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140289298034919 = __arg1;
PUSH_CONT_0(co, 11, clofun9);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString(") { co->ctx.pc = ps; goto fail; };\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140289298035207 = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = closureRef(co, 2);
__arg2 = makeCString("goto *jumpTable[ps.label];\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj sym = __arg1;
Obj globals = __arg2;
pushCont(co, 14, clofun9, 2, sym, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35value);
__arg1 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140289298088263 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val = x140289298088263;
pushCont(co, 15, clofun9, 3, sym, val, globals);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35elem_63);
__arg1 = sym;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140289298088615 = __arg1;
Obj sym= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140289298088615) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140289298089095 = makeCons(sym, val);
Obj x140289298089127 = primSet(co, globals, x140289298089095);
__nargs = 2;
__arg1 = x140289298089127;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label16:
{
Obj x140289294807399 = __arg1;
Obj x140289294807431 = __arg2;
Obj x140289294807527 = __arg3;
Obj x140289294807559 = co->args[4];
Obj x140289294808391 = makeNative(17, clofun9, 0, 4, x140289294807399, x140289294807431, x140289294807527, x140289294807559);
Obj self = x140289294807399;
Obj w = x140289294807431;
Obj i = x140289294807527;
Obj x140289290668327 = PRIM_EQ(Nil, x140289294807559);
if (True == x140289290668327) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294808391;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj x140289294809543 = makeNative(29, clofun9, 0, 0);
Obj self = closureRef(co, 0);
Obj w = closureRef(co, 1);
Obj i = closureRef(co, 2);
Obj x140289290802983 = PRIM_ISCONS(closureRef(co, 3));
if (True == x140289290802983) {
Obj x140289290803335 = PRIM_CAR(closureRef(co, 3));
Obj x = x140289290803335;
Obj x140289290803719 = PRIM_CDR(closureRef(co, 3));
Obj more = x140289290803719;
Obj x140289290804327 = PRIM_GT(i, MAKE_NUMBER(3));
Obj x140289290804455 = primNot(x140289290804327);
if (True == x140289290804455) {
pushCont(co, 24, clofun9, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("__arg");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 18, clofun9, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("co->args[");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294809543;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj x140289290721735 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 19, clofun9, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140289290722407 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 20, clofun9, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString("]");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140289290722631 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 21, clofun9, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140289290722919 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 22, clofun9, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label22:
{
Obj x140289290665991 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 23, clofun9, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140289290666439 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140289290667687 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = self;
__arg2 = w;
__arg3 = x140289290667687;
co->args[4] = more;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140289290804743 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 25, clofun9, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45num);
__arg1 = w;
__arg2 = i;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140289290804967 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 26, clofun9, 5, x, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(" = ");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140289290719335 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
pushCont(co, 27, clofun9, 4, i, self, w, more);
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45inst);
__arg1 = self;
__arg2 = Nil;
__arg3 = w;
co->args[4] = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140289290719783 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 28, clofun9, 4, i, self, w, more);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_47internal_35generate_45str);
__arg1 = w;
__arg2 = makeCString(";\n");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label28:
{
Obj x140289290720391 = __arg1;
Obj i= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj self= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj w= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj more= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140289290720999 = PRIM_ADD(i, MAKE_NUMBER(1));
__nargs = 5;
__arg0 = globalRef(symcora_47lib_47toc_35generate_45call_45list);
__arg1 = self;
__arg2 = w;
__arg3 = x140289290720999;
co->args[4] = more;
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
Obj x = __arg1;
Obj k = __arg2;
Obj x140289290848743 = primGenSym();
Obj tmp = x140289290848743;
pushCont(co, 31, clofun9, 2, x, tmp);
__nargs = 2;
__arg0 = k;
__arg1 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140289290801159 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289290801223 = makeCons(x140289290801159, Nil);
Obj x140289290801255 = makeCons(x, x140289290801223);
Obj x140289290801287 = makeCons(tmp, x140289290801255);
Obj x140289290801319 = makeCons(symlet, x140289290801287);
__nargs = 2;
__arg1 = x140289290801319;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label32:
{
Obj v = __arg1;
Obj val = __arg2;
pushCont(co, 33, clofun9, 2, val, v);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35vector_45ref);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
Obj x140289290910439 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj idx = x140289290910439;
pushCont(co, 34, clofun9, 3, val, idx, v);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35vector_45ref);
__arg1 = v;
__arg2 = MAKE_NUMBER(1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140289290910727 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj idx= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj cur = x140289290910727;
Obj x140289290846375 = makeCons(val, Nil);
Obj x140289290846407 = makeCons(idx, x140289290846375);
Obj x140289290846471 = makeCons(x140289290846407, cur);
Obj cur1 = x140289290846471;
Obj x140289290847143 = PRIM_ADD(idx, MAKE_NUMBER(1));
pushCont(co, 35, clofun9, 2, v, cur1);
__nargs = 4;
__arg0 = globalRef(symcora_47init_35vector_45set_33);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
__arg3 = x140289290847143;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140289290847271 = __arg1;
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
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140289294607303 = __arg1;
Obj x140289294607335 = __arg2;
Obj x140289294840327 = makeNative(2, clofun10, 0, 2, x140289294607303, x140289294607335);
Obj v = x140289294607303;
Obj x140289291245639 = PRIM_ISCONS(x140289294607335);
if (True == x140289291245639) {
Obj x140289291245895 = PRIM_CAR(x140289294607335);
Obj clo_45or_45cont = x140289291245895;
Obj x140289291246375 = PRIM_CDR(x140289294607335);
Obj x140289291246407 = PRIM_ISCONS(x140289291246375);
if (True == x140289291246407) {
Obj x140289291247335 = PRIM_CDR(x140289294607335);
Obj x140289291247367 = PRIM_CAR(x140289291247335);
Obj x140289291247399 = PRIM_ISCONS(x140289291247367);
if (True == x140289291247399) {
Obj x140289291236391 = PRIM_CDR(x140289294607335);
Obj x140289291236423 = PRIM_CAR(x140289291236391);
Obj x140289291236455 = PRIM_CAR(x140289291236423);
Obj x140289291236487 = PRIM_EQ(symlambda, x140289291236455);
if (True == x140289291236487) {
Obj x140289291237383 = PRIM_CDR(x140289294607335);
Obj x140289291237415 = PRIM_CAR(x140289291237383);
Obj x140289291237447 = PRIM_CDR(x140289291237415);
Obj x140289291237479 = PRIM_ISCONS(x140289291237447);
if (True == x140289291237479) {
Obj x140289291238887 = PRIM_CDR(x140289294607335);
Obj x140289291238919 = PRIM_CAR(x140289291238887);
Obj x140289291238951 = PRIM_CDR(x140289291238919);
Obj x140289291238983 = PRIM_CAR(x140289291238951);
Obj params = x140289291238983;
Obj x140289291232743 = PRIM_CDR(x140289294607335);
Obj x140289291232775 = PRIM_CAR(x140289291232743);
Obj x140289291232807 = PRIM_CDR(x140289291232775);
Obj x140289291232839 = PRIM_CDR(x140289291232807);
Obj x140289291232871 = PRIM_ISCONS(x140289291232839);
if (True == x140289291232871) {
Obj x140289291234055 = PRIM_CDR(x140289294607335);
Obj x140289291234087 = PRIM_CAR(x140289291234055);
Obj x140289291234119 = PRIM_CDR(x140289291234087);
Obj x140289291234151 = PRIM_CDR(x140289291234119);
Obj x140289291234183 = PRIM_CAR(x140289291234151);
Obj body = x140289291234183;
Obj x140289291199367 = PRIM_CDR(x140289294607335);
Obj x140289291199399 = PRIM_CAR(x140289291199367);
Obj x140289291199431 = PRIM_CDR(x140289291199399);
Obj x140289291199463 = PRIM_CDR(x140289291199431);
Obj x140289291199495 = PRIM_CDR(x140289291199463);
Obj x140289291199527 = PRIM_EQ(Nil, x140289291199495);
if (True == x140289291199527) {
Obj x140289291200039 = PRIM_CDR(x140289294607335);
Obj x140289291200135 = PRIM_CDR(x140289291200039);
Obj fvs = x140289291200135;
Obj x140289291200679 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == x140289291200679) {
if (True == True) {
pushCont(co, 47, clofun9, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda);
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294840327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj x140289291146343 = PRIM_EQ(clo_45or_45cont, sym_37continuation);
if (True == x140289291146343) {
if (True == True) {
pushCont(co, 42, clofun9, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda);
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294840327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
pushCont(co, 37, clofun9, 4, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda);
__arg1 = v;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294840327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
} else {
__nargs = 1;
__arg0 = x140289294840327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294840327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294840327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294840327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294840327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294840327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294840327;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj x140289290999079 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body1 = x140289290999079;
pushCont(co, 38, clofun9, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35vector_45ref);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140289290999719 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj cur = x140289290999719;
Obj x140289291000359 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == x140289291000359) {
Obj x140289290965063 = makeCons(body1, Nil);
Obj x140289290965223 = makeCons(Nil, x140289290965063);
Obj x140289290965255 = makeCons(params, x140289290965223);
Obj x140289290965287 = makeCons(symlambda, x140289290965255);
pushCont(co, 40, clofun9, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = x140289290965287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289290968039 = makeCons(body1, Nil);
Obj x140289290968775 = makeCons(fvs, x140289290968039);
Obj x140289290968807 = makeCons(params, x140289290968775);
Obj x140289290968839 = makeCons(symlambda, x140289290968807);
pushCont(co, 39, clofun9, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = x140289290968839;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140289290968871 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289290908103 = makeCons(cur, fvs);
Obj x140289290908135 = makeCons(clo_45or_45cont, x140289290908103);
__nargs = 2;
__arg1 = x140289290908135;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label40:
{
Obj x140289290965319 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 41, clofun9, 3, fvs, cur, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140289290966535 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289290966599 = makeCons(x140289290966535, fvs);
Obj x140289290966631 = makeCons(cur, x140289290966599);
Obj x140289290966663 = makeCons(clo_45or_45cont, x140289290966631);
__nargs = 2;
__arg1 = x140289290966663;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label42:
{
Obj x140289291147335 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body1 = x140289291147335;
pushCont(co, 43, clofun9, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35vector_45ref);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label43:
{
Obj x140289291147623 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj cur = x140289291147623;
Obj x140289291148103 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == x140289291148103) {
Obj x140289291075751 = makeCons(body1, Nil);
Obj x140289291075783 = makeCons(Nil, x140289291075751);
Obj x140289291075815 = makeCons(params, x140289291075783);
Obj x140289291075847 = makeCons(symlambda, x140289291075815);
pushCont(co, 45, clofun9, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = x140289291075847;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289290998087 = makeCons(body1, Nil);
Obj x140289290998119 = makeCons(fvs, x140289290998087);
Obj x140289290998151 = makeCons(params, x140289290998119);
Obj x140289290998183 = makeCons(symlambda, x140289290998151);
pushCont(co, 44, clofun9, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = x140289290998183;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj x140289290998215 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289290998631 = makeCons(cur, fvs);
Obj x140289290998663 = makeCons(clo_45or_45cont, x140289290998631);
__nargs = 2;
__arg1 = x140289290998663;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj x140289291075879 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 46, clofun9, 3, fvs, cur, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140289291077799 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289291077959 = makeCons(x140289291077799, fvs);
Obj x140289291078087 = makeCons(cur, x140289291077959);
Obj x140289291078471 = makeCons(clo_45or_45cont, x140289291078087);
__nargs = 2;
__arg1 = x140289291078471;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label47:
{
Obj x140289291201159 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj body1 = x140289291201159;
pushCont(co, 48, clofun9, 5, body1, params, v, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35vector_45ref);
__arg1 = v;
__arg2 = MAKE_NUMBER(0);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj x140289291201447 = __arg1;
Obj body1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj v= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj cur = x140289291201447;
Obj x140289291201831 = PRIM_EQ(clo_45or_45cont, sym_37closure);
if (True == x140289291201831) {
Obj x140289291158599 = makeCons(body1, Nil);
Obj x140289291158631 = makeCons(Nil, x140289291158599);
Obj x140289291158759 = makeCons(params, x140289291158631);
Obj x140289291158791 = makeCons(symlambda, x140289291158759);
pushCont(co, 0, clofun10, 4, params, fvs, cur, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = x140289291158791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289291145287 = makeCons(body1, Nil);
Obj x140289291145319 = makeCons(fvs, x140289291145287);
Obj x140289291145351 = makeCons(params, x140289291145319);
Obj x140289291145383 = makeCons(symlambda, x140289291145351);
pushCont(co, 49, clofun9, 3, cur, fvs, clo_45or_45cont);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35append_45result);
__arg1 = v;
__arg2 = x140289291145383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun9) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj x140289291145415 = __arg1;
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289291145895 = makeCons(cur, fvs);
Obj x140289291145927 = makeCons(clo_45or_45cont, x140289291145895);
__nargs = 2;
__arg1 = x140289291145927;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun9) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun10(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140289291158919 = __arg1;
Obj params= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
pushCont(co, 1, clofun10, 3, fvs, cur, clo_45or_45cont);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = params;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label1:
{
Obj x140289291160007 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cur= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj clo_45or_45cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289291160135 = makeCons(x140289291160007, fvs);
Obj x140289291160167 = makeCons(cur, x140289291160135);
Obj x140289291160199 = makeCons(clo_45or_45cont, x140289291160167);
__nargs = 2;
__arg1 = x140289291160199;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label2:
{
Obj x140289294842663 = makeNative(4, clofun10, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj v = closureRef(co, 0);
Obj f_45args = closureRef(co, 1);
Obj x140289291244263 = PRIM_ISCONS(f_45args);
if (True == x140289291244263) {
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = makeNative(3, clofun10, 1, 1, v);
__arg2 = f_45args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294842663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label3:
{
Obj e = __arg1;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35collect_45lambda);
__arg1 = closureRef(co, 0);
__arg2 = e;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140289294843303 = makeNative(5, clofun10, 0, 0);
Obj v = closureRef(co, 0);
Obj x = closureRef(co, 1);
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label5:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label6:
{
Obj x140289294764807 = __arg1;
Obj x140289294764839 = __arg2;
Obj x140289294765287 = makeNative(8, clofun10, 0, 2, x140289294764807, x140289294764839);
Obj __ = x140289294764807;
Obj x = x140289294764839;
pushCont(co, 7, clofun10, 2, x, x140289294765287);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label7:
{
Obj x140289291283303 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289294765287= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140289291283303) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294765287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj x140289294765831 = makeNative(9, clofun10, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj x140289291280871 = primIsSymbol(var);
if (True == x140289291280871) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294765831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label9:
{
Obj x140289294618983 = makeNative(11, clofun10, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj x140289291362087 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140289291362087) {
Obj x140289291333991 = PRIM_CAR(closureRef(co, 1));
Obj x140289291334023 = PRIM_EQ(symlambda, x140289291333991);
if (True == x140289291334023) {
Obj x140289291335015 = PRIM_CDR(closureRef(co, 1));
Obj x140289291335655 = PRIM_ISCONS(x140289291335015);
if (True == x140289291335655) {
Obj x140289291336135 = PRIM_CDR(closureRef(co, 1));
Obj x140289291336167 = PRIM_CAR(x140289291336135);
Obj args = x140289291336167;
Obj x140289291336871 = PRIM_CDR(closureRef(co, 1));
Obj x140289291337031 = PRIM_CDR(x140289291336871);
Obj x140289291337063 = PRIM_ISCONS(x140289291337031);
if (True == x140289291337063) {
Obj x140289291337703 = PRIM_CDR(closureRef(co, 1));
Obj x140289291321351 = PRIM_CDR(x140289291337703);
Obj x140289291321383 = PRIM_CAR(x140289291321351);
Obj body = x140289291321383;
Obj x140289291322471 = PRIM_CDR(closureRef(co, 1));
Obj x140289291322599 = PRIM_CDR(x140289291322471);
Obj x140289291322727 = PRIM_CDR(x140289291322599);
Obj x140289291322855 = PRIM_EQ(Nil, x140289291322727);
if (True == x140289291322855) {
pushCont(co, 10, clofun10, 1, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294618983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294618983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294618983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294618983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294618983;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj x140289291323911 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289291323975 = makeCons(x140289291323911, Nil);
Obj x140289291324007 = makeCons(args, x140289291323975);
Obj x140289291324039 = makeCons(symlambda, x140289291324007);
__nargs = 2;
__arg1 = x140289291324039;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label11:
{
Obj x140289294620231 = makeNative(17, clofun10, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj x140289291396935 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140289291396935) {
Obj x140289291397447 = PRIM_CAR(closureRef(co, 1));
Obj x140289291397575 = PRIM_EQ(symcontinuation, x140289291397447);
if (True == x140289291397575) {
Obj x140289291398183 = PRIM_CDR(closureRef(co, 1));
Obj x140289291398311 = PRIM_ISCONS(x140289291398183);
if (True == x140289291398311) {
Obj x140289291399015 = PRIM_CDR(closureRef(co, 1));
Obj x140289291399047 = PRIM_CAR(x140289291399015);
Obj val = x140289291399047;
Obj x140289291387559 = PRIM_CDR(closureRef(co, 1));
Obj x140289291387943 = PRIM_CDR(x140289291387559);
Obj x140289291387975 = PRIM_ISCONS(x140289291387943);
if (True == x140289291387975) {
Obj x140289291388711 = PRIM_CDR(closureRef(co, 1));
Obj x140289291388743 = PRIM_CDR(x140289291388711);
Obj x140289291388775 = PRIM_CAR(x140289291388743);
Obj body = x140289291388775;
Obj x140289291389703 = PRIM_CDR(closureRef(co, 1));
Obj x140289291389735 = PRIM_CDR(x140289291389703);
Obj x140289291389767 = PRIM_CDR(x140289291389735);
Obj x140289291389799 = PRIM_EQ(Nil, x140289291389767);
if (True == x140289291389799) {
pushCont(co, 12, clofun10, 3, fvs, body, val);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294620231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294620231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294620231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294620231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294620231;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
Obj x140289291390951 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 13, clofun10, 3, fvs, body, val);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = x140289291390951;
__arg2 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140289291358247 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs1 = x140289291358247;
pushCont(co, 14, clofun10, 3, fvs1, body, val);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140289291358919 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 15, clofun10, 3, fvs1, body, val);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x140289291358919;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label15:
{
Obj x140289291359047 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs2 = x140289291359047;
pushCont(co, 16, clofun10, 2, val, fvs2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label16:
{
Obj x140289291360615 = __arg1;
Obj val= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289291360679 = makeCons(x140289291360615, Nil);
Obj x140289291360711 = makeCons(val, x140289291360679);
Obj x140289291360743 = makeCons(symlambda, x140289291360711);
Obj x140289291360807 = makeCons(x140289291360743, fvs2);
Obj x140289291360839 = makeCons(sym_37continuation, x140289291360807);
__nargs = 2;
__arg1 = x140289291360839;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label17:
{
Obj x140289294621447 = makeNative(21, clofun10, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj x140289291449575 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140289291449575) {
Obj x140289291450599 = PRIM_CAR(closureRef(co, 1));
Obj x140289291450631 = PRIM_EQ(symcall, x140289291450599);
if (True == x140289291450631) {
Obj x140289291451143 = PRIM_CDR(closureRef(co, 1));
Obj x140289291451175 = PRIM_ISCONS(x140289291451143);
if (True == x140289291451175) {
Obj x140289291428007 = PRIM_CDR(closureRef(co, 1));
Obj x140289291428039 = PRIM_CAR(x140289291428007);
Obj exp = x140289291428039;
Obj x140289291428743 = PRIM_CDR(closureRef(co, 1));
Obj x140289291428775 = PRIM_CDR(x140289291428743);
Obj x140289291428807 = PRIM_ISCONS(x140289291428775);
if (True == x140289291428807) {
Obj x140289291429447 = PRIM_CDR(closureRef(co, 1));
Obj x140289291429479 = PRIM_CDR(x140289291429447);
Obj x140289291429511 = PRIM_CAR(x140289291429479);
Obj cont = x140289291429511;
Obj x140289291430631 = PRIM_CDR(closureRef(co, 1));
Obj x140289291430663 = PRIM_CDR(x140289291430631);
Obj x140289291430695 = PRIM_CDR(x140289291430663);
Obj x140289291430727 = PRIM_EQ(Nil, x140289291430695);
if (True == x140289291430727) {
pushCont(co, 18, clofun10, 3, exp, fvs, cont);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294621447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294621447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294621447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294621447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294621447;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj x140289291431687 = __arg1;
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 19, clofun10, 2, fvs, cont);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x140289291431687;
__arg2 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140289291431751 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj cont= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 20, clofun10, 1, x140289291431751);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs;
__arg2 = cont;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label20:
{
Obj x140289291395431 = __arg1;
Obj x140289291431751= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289291395495 = makeCons(x140289291395431, Nil);
Obj x140289291395527 = makeCons(x140289291431751, x140289291395495);
Obj x140289291395559 = makeCons(symcall, x140289291395527);
__nargs = 2;
__arg1 = x140289291395559;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label21:
{
Obj x140289294622663 = makeNative(23, clofun10, 0, 0);
Obj fvs = closureRef(co, 0);
Obj x140289291463879 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140289291463879) {
Obj x140289291464167 = PRIM_CAR(closureRef(co, 1));
Obj f = x140289291464167;
Obj x140289291464423 = PRIM_CDR(closureRef(co, 1));
Obj args = x140289291464423;
pushCont(co, 22, clofun10, 2, f, args);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35explicit_45stack);
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294622663;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj x140289291448551 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289291448871 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x140289291448551;
__arg2 = x140289291448871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140289294806055 = __arg1;
Obj x140289294806087 = __arg2;
Obj x140289294806343 = __arg3;
Obj x140289294762247 = makeNative(31, clofun10, 0, 3, x140289294806055, x140289294806087, x140289294806343);
Obj x140289292104807 = PRIM_EQ(Nil, x140289294806055);
if (True == x140289292104807) {
Obj ls = x140289294806087;
Obj next = x140289294806343;
pushCont(co, 25, clofun10, 1, next);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35reverse);
__arg1 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294762247;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label25:
{
Obj x140289292105415 = __arg1;
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp = x140289292105415;
Obj x140289292106087 = PRIM_CAR(exp);
pushCont(co, 26, clofun10, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35pair_63);
__arg1 = x140289292106087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label26:
{
Obj x140289292106119 = __arg1;
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140289292106119) {
pushCont(co, 28, clofun10, 2, next, exp);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caar);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289291477319 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == x140289291477319) {
Obj x140289291477735 = makeCons(exp, Nil);
Obj x140289291477863 = makeCons(symtailcall, x140289291477735);
__nargs = 2;
__arg1 = x140289291477863;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140289291478151 = primGenSym();
Obj val = x140289291478151;
Obj x140289291480295 = makeCons(val, Nil);
pushCont(co, 27, clofun10, 2, x140289291480295, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label27:
{
Obj x140289291461703 = __arg1;
Obj x140289291480295= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289291461767 = makeCons(x140289291461703, Nil);
Obj x140289291461799 = makeCons(x140289291480295, x140289291461767);
Obj x140289291461831 = makeCons(symcontinuation, x140289291461799);
Obj x140289291461895 = makeCons(x140289291461831, Nil);
Obj x140289291461927 = makeCons(exp, x140289291461895);
Obj x140289291461959 = makeCons(symcall, x140289291461927);
__nargs = 2;
__arg1 = x140289291461959;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj x140289292106727 = __arg1;
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289292106791 = PRIM_EQ(x140289292106727, sym_37builtin);
if (True == x140289292106791) {
if (True == True) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35wrap_45var);
__arg1 = exp;
__arg2 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289292107335 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == x140289292107335) {
Obj x140289292099719 = makeCons(exp, Nil);
Obj x140289292099751 = makeCons(symtailcall, x140289292099719);
__nargs = 2;
__arg1 = x140289292099751;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140289292100775 = primGenSym();
Obj val = x140289292100775;
Obj x140289292102119 = makeCons(val, Nil);
pushCont(co, 30, clofun10, 2, x140289292102119, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289291518023 = PRIM_EQ(next, globalRef(symcora_47lib_47toc_35id));
if (True == x140289291518023) {
Obj x140289291518535 = makeCons(exp, Nil);
Obj x140289291518567 = makeCons(symtailcall, x140289291518535);
__nargs = 2;
__arg1 = x140289291518567;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140289291518951 = primGenSym();
Obj val = x140289291518951;
Obj x140289291520775 = makeCons(val, Nil);
pushCont(co, 29, clofun10, 2, x140289291520775, exp);
__nargs = 2;
__arg0 = next;
__arg1 = val;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}
}

label29:
{
Obj x140289291521351 = __arg1;
Obj x140289291520775= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289291521415 = makeCons(x140289291521351, Nil);
Obj x140289291521447 = makeCons(x140289291520775, x140289291521415);
Obj x140289291521479 = makeCons(symcontinuation, x140289291521447);
Obj x140289291521543 = makeCons(x140289291521479, Nil);
Obj x140289291521671 = makeCons(exp, x140289291521543);
Obj x140289291521799 = makeCons(symcall, x140289291521671);
__nargs = 2;
__arg1 = x140289291521799;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label30:
{
Obj x140289292102663 = __arg1;
Obj x140289292102119= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj exp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289292102727 = makeCons(x140289292102663, Nil);
Obj x140289292102759 = makeCons(x140289292102119, x140289292102727);
Obj x140289292102791 = makeCons(symcontinuation, x140289292102759);
Obj x140289292102919 = makeCons(x140289292102791, Nil);
Obj x140289292102951 = makeCons(exp, x140289292102919);
Obj x140289292102983 = makeCons(symcall, x140289292102951);
__nargs = 2;
__arg1 = x140289292102983;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj x140289294763047 = makeNative(33, clofun10, 0, 0);
Obj x140289292127207 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289292127207) {
Obj x140289292127463 = PRIM_CAR(closureRef(co, 0));
Obj hd = x140289292127463;
Obj x140289292128007 = PRIM_CDR(closureRef(co, 0));
Obj tl = x140289292128007;
Obj ls = closureRef(co, 1);
Obj next = closureRef(co, 2);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = hd;
__arg2 = makeNative(32, clofun10, 1, 3, tl, ls, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294763047;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj hd1 = __arg1;
Obj x140289292104231 = makeCons(hd1, closureRef(co, 1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45list);
__arg1 = closureRef(co, 0);
__arg2 = x140289292104231;
__arg3 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label33:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140289294840807 = __arg1;
Obj x140289294840839 = __arg2;
Obj x140289294841383 = makeNative(36, clofun10, 0, 2, x140289294840807, x140289294840839);
Obj x = x140289294840807;
Obj next = x140289294840839;
Obj x140289292512487 = primIsSymbol(x);
if (True == x140289292512487) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294841383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 35, clofun10, 3, next, x, x140289294841383);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label35:
{
Obj x140289292513255 = __arg1;
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289294841383= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140289292513255) {
if (True == True) {
__nargs = 2;
__arg0 = next;
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294841383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294841383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label36:
{
Obj x140289294842151 = makeNative(38, clofun10, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x = closureRef(co, 0);
Obj __ = closureRef(co, 1);
pushCont(co, 37, clofun10, 2, x, x140289294842151);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140289292511495 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289294842151= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140289292511495) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294842151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label38:
{
Obj x140289294842727 = makeNative(42, clofun10, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140289292546343 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289292546343) {
Obj x140289292546791 = PRIM_CAR(closureRef(co, 0));
Obj x140289292546919 = PRIM_EQ(symif, x140289292546791);
if (True == x140289292546919) {
Obj x140289292547399 = PRIM_CDR(closureRef(co, 0));
Obj x140289292547431 = PRIM_ISCONS(x140289292547399);
if (True == x140289292547431) {
Obj x140289292547847 = PRIM_CDR(closureRef(co, 0));
Obj x140289292547975 = PRIM_CAR(x140289292547847);
Obj a = x140289292547975;
Obj x140289292548647 = PRIM_CDR(closureRef(co, 0));
Obj x140289292548679 = PRIM_CDR(x140289292548647);
Obj x140289292548711 = PRIM_ISCONS(x140289292548679);
if (True == x140289292548711) {
Obj x140289292549383 = PRIM_CDR(closureRef(co, 0));
Obj x140289292549415 = PRIM_CDR(x140289292549383);
Obj x140289292549511 = PRIM_CAR(x140289292549415);
Obj b = x140289292549511;
Obj x140289292525767 = PRIM_CDR(closureRef(co, 0));
Obj x140289292525799 = PRIM_CDR(x140289292525767);
Obj x140289292525831 = PRIM_CDR(x140289292525799);
Obj x140289292525863 = PRIM_ISCONS(x140289292525831);
if (True == x140289292525863) {
Obj x140289292526631 = PRIM_CDR(closureRef(co, 0));
Obj x140289292526663 = PRIM_CDR(x140289292526631);
Obj x140289292526695 = PRIM_CDR(x140289292526663);
Obj x140289292526727 = PRIM_CAR(x140289292526695);
Obj c = x140289292526727;
Obj x140289292528039 = PRIM_CDR(closureRef(co, 0));
Obj x140289292528071 = PRIM_CDR(x140289292528039);
Obj x140289292528231 = PRIM_CDR(x140289292528071);
Obj x140289292528263 = PRIM_CDR(x140289292528231);
Obj x140289292528295 = PRIM_EQ(Nil, x140289292528263);
if (True == x140289292528295) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = a;
__arg2 = makeNative(39, clofun10, 1, 3, b, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294842727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294842727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294842727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294842727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294842727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294842727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj ra = __arg1;
pushCont(co, 40, clofun10, 1, ra);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140289292509607 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
pushCont(co, 41, clofun10, 2, x140289292509607, ra);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140289292510023 = __arg1;
Obj x140289292509607= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289292510087 = makeCons(x140289292510023, Nil);
Obj x140289292510119 = makeCons(x140289292509607, x140289292510087);
Obj x140289292510151 = makeCons(ra, x140289292510119);
Obj x140289292510183 = makeCons(symif, x140289292510151);
__nargs = 2;
__arg1 = x140289292510183;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label42:
{
Obj x140289294807495 = makeNative(45, clofun10, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140289292702759 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289292702759) {
Obj x140289292703591 = PRIM_CAR(closureRef(co, 0));
Obj x140289292703623 = PRIM_EQ(symdo, x140289292703591);
if (True == x140289292703623) {
Obj x140289292704039 = PRIM_CDR(closureRef(co, 0));
Obj x140289292704071 = PRIM_ISCONS(x140289292704039);
if (True == x140289292704071) {
Obj x140289292704967 = PRIM_CDR(closureRef(co, 0));
Obj x140289292705095 = PRIM_CAR(x140289292704967);
Obj a = x140289292705095;
Obj x140289292705735 = PRIM_CDR(closureRef(co, 0));
Obj x140289292705767 = PRIM_CDR(x140289292705735);
Obj x140289292607495 = PRIM_ISCONS(x140289292705767);
if (True == x140289292607495) {
Obj x140289292609799 = PRIM_CDR(closureRef(co, 0));
Obj x140289292609831 = PRIM_CDR(x140289292609799);
Obj x140289292609863 = PRIM_CAR(x140289292609831);
Obj b = x140289292609863;
Obj x140289292571559 = PRIM_CDR(closureRef(co, 0));
Obj x140289292571591 = PRIM_CDR(x140289292571559);
Obj x140289292571623 = PRIM_CDR(x140289292571591);
Obj x140289292571655 = PRIM_EQ(Nil, x140289292571623);
if (True == x140289292571655) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = a;
__arg2 = makeNative(43, clofun10, 1, 2, b, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294807495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294807495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294807495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294807495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294807495;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj ra = __arg1;
Obj x140289292572327 = primIsSymbol(ra);
if (True == x140289292572327) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
pushCont(co, 44, clofun10, 1, ra);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = closureRef(co, 0);
__arg2 = closureRef(co, 1);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj x140289292573511 = __arg1;
Obj ra= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289292573575 = makeCons(x140289292573511, Nil);
Obj x140289292573639 = makeCons(ra, x140289292573575);
Obj x140289292573671 = makeCons(symdo, x140289292573639);
__nargs = 2;
__arg1 = x140289292573671;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label45:
{
Obj x140289294808871 = makeNative(48, clofun10, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140289292778599 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289292778599) {
Obj x140289292779047 = PRIM_CAR(closureRef(co, 0));
Obj x140289292779079 = PRIM_EQ(symlet, x140289292779047);
if (True == x140289292779079) {
Obj x140289292734535 = PRIM_CDR(closureRef(co, 0));
Obj x140289292734567 = PRIM_ISCONS(x140289292734535);
if (True == x140289292734567) {
Obj x140289292735047 = PRIM_CDR(closureRef(co, 0));
Obj x140289292735079 = PRIM_CAR(x140289292735047);
Obj a = x140289292735079;
Obj x140289292735847 = PRIM_CDR(closureRef(co, 0));
Obj x140289292735879 = PRIM_CDR(x140289292735847);
Obj x140289292735911 = PRIM_ISCONS(x140289292735879);
if (True == x140289292735911) {
Obj x140289292736967 = PRIM_CDR(closureRef(co, 0));
Obj x140289292736999 = PRIM_CDR(x140289292736967);
Obj x140289292737031 = PRIM_CAR(x140289292736999);
Obj b = x140289292737031;
Obj x140289292737927 = PRIM_CDR(closureRef(co, 0));
Obj x140289292737959 = PRIM_CDR(x140289292737927);
Obj x140289292737991 = PRIM_CDR(x140289292737959);
Obj x140289292738023 = PRIM_ISCONS(x140289292737991);
if (True == x140289292738023) {
Obj x140289292731175 = PRIM_CDR(closureRef(co, 0));
Obj x140289292731207 = PRIM_CDR(x140289292731175);
Obj x140289292731239 = PRIM_CDR(x140289292731207);
Obj x140289292731271 = PRIM_CAR(x140289292731239);
Obj c = x140289292731271;
Obj x140289292732295 = PRIM_CDR(closureRef(co, 0));
Obj x140289292732327 = PRIM_CDR(x140289292732295);
Obj x140289292732359 = PRIM_CDR(x140289292732327);
Obj x140289292732391 = PRIM_CDR(x140289292732359);
Obj x140289292732423 = PRIM_EQ(Nil, x140289292732391);
if (True == x140289292732423) {
Obj next = closureRef(co, 1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = b;
__arg2 = makeNative(46, clofun10, 1, 3, a, c, next);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294808871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294808871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294808871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294808871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294808871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294808871;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj rb = __arg1;
pushCont(co, 47, clofun10, 1, rb);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = closureRef(co, 1);
__arg2 = closureRef(co, 2);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140289292734087 = __arg1;
Obj rb= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289292734151 = makeCons(x140289292734087, Nil);
Obj x140289292734183 = makeCons(rb, x140289292734151);
Obj x140289292734215 = makeCons(closureRef(co, 0), x140289292734183);
Obj x140289292734247 = makeCons(symlet, x140289292734215);
__nargs = 2;
__arg1 = x140289292734247;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun10) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label48:
{
Obj x140289294810471 = makeNative(0, clofun11, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140289293182087 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289293182087) {
Obj x140289293182535 = PRIM_CAR(closureRef(co, 0));
Obj x140289293182567 = PRIM_EQ(sym_37closure, x140289293182535);
if (True == x140289293182567) {
Obj x140289293183175 = PRIM_CDR(closureRef(co, 0));
Obj x140289293183207 = PRIM_ISCONS(x140289293183175);
if (True == x140289293183207) {
Obj x140289293184583 = PRIM_CDR(closureRef(co, 0));
Obj x140289293184615 = PRIM_CAR(x140289293184583);
Obj x140289293184647 = PRIM_ISCONS(x140289293184615);
if (True == x140289293184647) {
Obj x140289292825063 = PRIM_CDR(closureRef(co, 0));
Obj x140289292825095 = PRIM_CAR(x140289292825063);
Obj x140289292825127 = PRIM_CAR(x140289292825095);
Obj x140289292825159 = PRIM_EQ(symlambda, x140289292825127);
if (True == x140289292825159) {
Obj x140289292825895 = PRIM_CDR(closureRef(co, 0));
Obj x140289292825927 = PRIM_CAR(x140289292825895);
Obj x140289292825959 = PRIM_CDR(x140289292825927);
Obj x140289292825991 = PRIM_ISCONS(x140289292825959);
if (True == x140289292825991) {
Obj x140289292826951 = PRIM_CDR(closureRef(co, 0));
Obj x140289292826983 = PRIM_CAR(x140289292826951);
Obj x140289292827015 = PRIM_CDR(x140289292826983);
Obj x140289292827047 = PRIM_CAR(x140289292827015);
Obj args = x140289292827047;
Obj x140289292828295 = PRIM_CDR(closureRef(co, 0));
Obj x140289292828327 = PRIM_CAR(x140289292828295);
Obj x140289292828359 = PRIM_CDR(x140289292828327);
Obj x140289292828391 = PRIM_CDR(x140289292828359);
Obj x140289292828423 = PRIM_ISCONS(x140289292828391);
if (True == x140289292828423) {
Obj x140289292817095 = PRIM_CDR(closureRef(co, 0));
Obj x140289292817127 = PRIM_CAR(x140289292817095);
Obj x140289292817287 = PRIM_CDR(x140289292817127);
Obj x140289292817319 = PRIM_CDR(x140289292817287);
Obj x140289292817351 = PRIM_CAR(x140289292817319);
Obj body = x140289292817351;
Obj x140289292818695 = PRIM_CDR(closureRef(co, 0));
Obj x140289292818887 = PRIM_CAR(x140289292818695);
Obj x140289292819047 = PRIM_CDR(x140289292818887);
Obj x140289292819783 = PRIM_CDR(x140289292819047);
Obj x140289292819815 = PRIM_CDR(x140289292819783);
Obj x140289292819847 = PRIM_EQ(Nil, x140289292819815);
if (True == x140289292819847) {
Obj x140289292820327 = PRIM_CDR(closureRef(co, 0));
Obj x140289292820359 = PRIM_CDR(x140289292820327);
Obj frees = x140289292820359;
Obj next = closureRef(co, 1);
pushCont(co, 49, clofun10, 3, args, frees, next);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35tailify);
__arg1 = body;
__arg2 = globalRef(symcora_47lib_47toc_35id);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294810471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810471;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj x140289292776903 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj frees= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj next= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289292776967 = makeCons(x140289292776903, Nil);
Obj x140289292776999 = makeCons(args, x140289292776967);
Obj x140289292777031 = makeCons(symlambda, x140289292776999);
Obj x140289292777095 = makeCons(x140289292777031, frees);
Obj x140289292777127 = makeCons(sym_37closure, x140289292777095);
__nargs = 2;
__arg0 = next;
__arg1 = x140289292777127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun10) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun11(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140289294804295 = makeNative(1, clofun11, 0, 0);
Obj x140289293458823 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289293458823) {
Obj x140289293459079 = PRIM_CAR(closureRef(co, 0));
Obj f = x140289293459079;
Obj x140289293459399 = PRIM_CDR(closureRef(co, 0));
Obj args = x140289293459399;
Obj next = closureRef(co, 1);
Obj x140289293181607 = makeCons(f, args);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35tailify_45list);
__arg1 = x140289293181607;
__arg2 = Nil;
__arg3 = next;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294804295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x = __arg1;
Obj x140289293456135 = makeCons(x, Nil);
Obj x140289293456167 = makeCons(symreturn, x140289293456135);
__nargs = 2;
__arg1 = x140289293456167;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
Obj x140289294763303 = __arg1;
Obj x140289294763335 = __arg2;
Obj x140289294763847 = makeNative(5, clofun11, 0, 2, x140289294763303, x140289294763335);
Obj __ = x140289294763303;
Obj x = x140289294763335;
pushCont(co, 4, clofun11, 2, x, x140289294763847);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140289293528807 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289294763847= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140289293528807) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294763847;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj x140289294764423 = makeNative(7, clofun11, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj var = closureRef(co, 1);
Obj x140289293527207 = primIsSymbol(var);
if (True == x140289293527207) {
pushCont(co, 6, clofun11, 1, var);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35index);
__arg1 = var;
__arg2 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294764423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x140289293527495 = __arg1;
Obj var= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj pos = x140289293527495;
Obj x140289293527847 = PRIM_EQ(MAKE_NUMBER(-1), pos);
if (True == x140289293527847) {
__nargs = 2;
__arg1 = var;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
Obj x140289293528263 = makeCons(pos, Nil);
Obj x140289293528295 = makeCons(sym_37closure_45ref, x140289293528263);
__nargs = 2;
__arg1 = x140289293528295;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label7:
{
Obj x140289294764967 = makeNative(12, clofun11, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj x140289293783303 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140289293783303) {
Obj x140289293783783 = PRIM_CAR(closureRef(co, 1));
Obj x140289293783815 = PRIM_EQ(symlambda, x140289293783783);
if (True == x140289293783815) {
Obj x140289293784231 = PRIM_CDR(closureRef(co, 1));
Obj x140289293784263 = PRIM_ISCONS(x140289293784231);
if (True == x140289293784263) {
Obj x140289293784743 = PRIM_CDR(closureRef(co, 1));
Obj x140289293784903 = PRIM_CAR(x140289293784743);
Obj args = x140289293784903;
Obj x140289293785671 = PRIM_CDR(closureRef(co, 1));
Obj x140289293785703 = PRIM_CDR(x140289293785671);
Obj x140289293785735 = PRIM_ISCONS(x140289293785703);
if (True == x140289293785735) {
Obj x140289293786535 = PRIM_CDR(closureRef(co, 1));
Obj x140289293786567 = PRIM_CDR(x140289293786535);
Obj x140289293786599 = PRIM_CAR(x140289293786567);
Obj body = x140289293786599;
Obj x140289293746567 = PRIM_CDR(closureRef(co, 1));
Obj x140289293746599 = PRIM_CDR(x140289293746567);
Obj x140289293746631 = PRIM_CDR(x140289293746599);
Obj x140289293746663 = PRIM_EQ(Nil, x140289293746631);
if (True == x140289293746663) {
Obj x140289293747847 = makeCons(body, Nil);
Obj x140289293747879 = makeCons(args, x140289293747847);
Obj x140289293747911 = makeCons(symlambda, x140289293747879);
pushCont(co, 8, clofun11, 3, body, args, fvs);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = x140289293747911;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294764967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294764967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294764967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294764967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294764967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj x140289293747943 = __arg1;
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj fvs1 = x140289293747943;
pushCont(co, 9, clofun11, 3, args, fvs, fvs1);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = fvs1;
__arg2 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140289293749511 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289293749575 = makeCons(x140289293749511, Nil);
Obj x140289293749607 = makeCons(args, x140289293749575);
Obj x140289293749639 = makeCons(symlambda, x140289293749607);
pushCont(co, 10, clofun11, 2, fvs1, x140289293749639);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140289293750023 = __arg1;
Obj fvs1= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289293749639= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 11, clofun11, 1, x140289293749639);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x140289293750023;
__arg2 = fvs1;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140289293750087 = __arg1;
Obj x140289293749639= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289293750119 = makeCons(x140289293749639, x140289293750087);
Obj x140289293750151 = makeCons(sym_37closure, x140289293750119);
__nargs = 2;
__arg1 = x140289293750151;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label12:
{
Obj x140289294618727 = makeNative(15, clofun11, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj fvs = closureRef(co, 0);
Obj x140289293874695 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140289293874695) {
Obj x140289293875367 = PRIM_CAR(closureRef(co, 1));
Obj x140289293875399 = PRIM_EQ(symlet, x140289293875367);
if (True == x140289293875399) {
Obj x140289293875815 = PRIM_CDR(closureRef(co, 1));
Obj x140289293875847 = PRIM_ISCONS(x140289293875815);
if (True == x140289293875847) {
Obj x140289293876359 = PRIM_CDR(closureRef(co, 1));
Obj x140289293876391 = PRIM_CAR(x140289293876359);
Obj a = x140289293876391;
Obj x140289293877127 = PRIM_CDR(closureRef(co, 1));
Obj x140289293877159 = PRIM_CDR(x140289293877127);
Obj x140289293877191 = PRIM_ISCONS(x140289293877159);
if (True == x140289293877191) {
Obj x140289293836871 = PRIM_CDR(closureRef(co, 1));
Obj x140289293836903 = PRIM_CDR(x140289293836871);
Obj x140289293836935 = PRIM_CAR(x140289293836903);
Obj b = x140289293836935;
Obj x140289293837991 = PRIM_CDR(closureRef(co, 1));
Obj x140289293838023 = PRIM_CDR(x140289293837991);
Obj x140289293838055 = PRIM_CDR(x140289293838023);
Obj x140289293838183 = PRIM_ISCONS(x140289293838055);
if (True == x140289293838183) {
Obj x140289293839111 = PRIM_CDR(closureRef(co, 1));
Obj x140289293839335 = PRIM_CDR(x140289293839111);
Obj x140289293839367 = PRIM_CDR(x140289293839335);
Obj x140289293839399 = PRIM_CAR(x140289293839367);
Obj c = x140289293839399;
Obj x140289293840327 = PRIM_CDR(closureRef(co, 1));
Obj x140289293840359 = PRIM_CDR(x140289293840327);
Obj x140289293828103 = PRIM_CDR(x140289293840359);
Obj x140289293828135 = PRIM_CDR(x140289293828103);
Obj x140289293828167 = PRIM_EQ(Nil, x140289293828135);
if (True == x140289293828167) {
pushCont(co, 13, clofun11, 3, fvs, c, a);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = fvs;
__arg2 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294618727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294618727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294618727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294618727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294618727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294618727;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj x140289293829383 = __arg1;
Obj fvs= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 14, clofun11, 2, x140289293829383, a);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = fvs;
__arg2 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label14:
{
Obj x140289293831079 = __arg1;
Obj x140289293829383= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289293831143 = makeCons(x140289293831079, Nil);
Obj x140289293831175 = makeCons(x140289293829383, x140289293831143);
Obj x140289293831207 = makeCons(a, x140289293831175);
Obj x140289293831239 = makeCons(symlet, x140289293831207);
__nargs = 2;
__arg1 = x140289293831239;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label15:
{
Obj x140289294620199 = makeNative(17, clofun11, 0, 0);
Obj fvs = closureRef(co, 0);
Obj x140289293905351 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140289293905351) {
Obj x140289293905671 = PRIM_CAR(closureRef(co, 1));
Obj f = x140289293905671;
Obj x140289293873351 = PRIM_CDR(closureRef(co, 1));
Obj args = x140289293873351;
pushCont(co, 16, clofun11, 2, f, args);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35closure_45convert);
__arg1 = fvs;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294620199;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label16:
{
Obj x140289293873703 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289293873959 = makeCons(f, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x140289293873703;
__arg2 = x140289293873959;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label18:
{
Obj x140289294840615 = __arg1;
Obj x140289294840935 = makeNative(20, clofun11, 0, 1, x140289294840615);
Obj x = x140289294840615;
pushCont(co, 19, clofun11, 1, x140289294840935);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35convert_45protect_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label19:
{
Obj x140289293903207 = __arg1;
Obj x140289294840935= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140289293903207) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294840935;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj x140289294841351 = makeNative(21, clofun11, 0, 1, closureRef(co, 0));
Obj x = closureRef(co, 0);
Obj x140289293902471 = primIsSymbol(x);
if (True == x140289293902471) {
Obj x140289293902695 = makeCons(x, Nil);
__nargs = 2;
__arg1 = x140289293902695;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294841351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label21:
{
Obj x140289294841831 = makeNative(23, clofun11, 0, 1, closureRef(co, 0));
Obj x140289294067559 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289294067559) {
Obj x140289294068199 = PRIM_CAR(closureRef(co, 0));
Obj x140289294068231 = PRIM_EQ(symlambda, x140289294068199);
if (True == x140289294068231) {
Obj x140289294068647 = PRIM_CDR(closureRef(co, 0));
Obj x140289294068679 = PRIM_ISCONS(x140289294068647);
if (True == x140289294068679) {
Obj x140289294069255 = PRIM_CDR(closureRef(co, 0));
Obj x140289294069287 = PRIM_CAR(x140289294069255);
Obj args = x140289294069287;
Obj x140289293996135 = PRIM_CDR(closureRef(co, 0));
Obj x140289293996263 = PRIM_CDR(x140289293996135);
Obj x140289293996295 = PRIM_ISCONS(x140289293996263);
if (True == x140289293996295) {
Obj x140289293997415 = PRIM_CDR(closureRef(co, 0));
Obj x140289293997447 = PRIM_CDR(x140289293997415);
Obj x140289293997479 = PRIM_CAR(x140289293997447);
Obj body = x140289293997479;
Obj x140289293998407 = PRIM_CDR(closureRef(co, 0));
Obj x140289293998439 = PRIM_CDR(x140289293998407);
Obj x140289293998471 = PRIM_CDR(x140289293998439);
Obj x140289293998631 = PRIM_EQ(Nil, x140289293998471);
if (True == x140289293998631) {
pushCont(co, 22, clofun11, 1, args);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294841831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294841831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294841831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294841831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294841831;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label22:
{
Obj x140289293999335 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = x140289293999335;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label23:
{
Obj x140289294842855 = makeNative(25, clofun11, 0, 1, closureRef(co, 0));
Obj x140289294204999 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289294204999) {
Obj x140289294205607 = PRIM_CAR(closureRef(co, 0));
Obj x140289294205639 = PRIM_EQ(symif, x140289294205607);
if (True == x140289294205639) {
Obj x140289294206119 = PRIM_CDR(closureRef(co, 0));
Obj x140289294206151 = PRIM_ISCONS(x140289294206119);
if (True == x140289294206151) {
Obj x140289294206567 = PRIM_CDR(closureRef(co, 0));
Obj x140289294206599 = PRIM_CAR(x140289294206567);
Obj x = x140289294206599;
Obj x140289294207815 = PRIM_CDR(closureRef(co, 0));
Obj x140289294207847 = PRIM_CDR(x140289294207815);
Obj x140289294207879 = PRIM_ISCONS(x140289294207847);
if (True == x140289294207879) {
Obj x140289294208519 = PRIM_CDR(closureRef(co, 0));
Obj x140289294208551 = PRIM_CDR(x140289294208519);
Obj x140289294208583 = PRIM_CAR(x140289294208551);
Obj y = x140289294208583;
Obj x140289294119431 = PRIM_CDR(closureRef(co, 0));
Obj x140289294119463 = PRIM_CDR(x140289294119431);
Obj x140289294119495 = PRIM_CDR(x140289294119463);
Obj x140289294119527 = PRIM_ISCONS(x140289294119495);
if (True == x140289294119527) {
Obj x140289294120807 = PRIM_CDR(closureRef(co, 0));
Obj x140289294120839 = PRIM_CDR(x140289294120807);
Obj x140289294120871 = PRIM_CDR(x140289294120839);
Obj x140289294120903 = PRIM_CAR(x140289294120871);
Obj z = x140289294120903;
Obj x140289294122151 = PRIM_CDR(closureRef(co, 0));
Obj x140289294122183 = PRIM_CDR(x140289294122151);
Obj x140289294122215 = PRIM_CDR(x140289294122183);
Obj x140289294122247 = PRIM_CDR(x140289294122215);
Obj x140289294122279 = PRIM_EQ(Nil, x140289294122247);
if (True == x140289294122279) {
Obj x140289294066055 = makeCons(z, Nil);
Obj x140289294066087 = makeCons(y, x140289294066055);
Obj x140289294066119 = makeCons(x, x140289294066087);
PUSH_CONT_0(co, 24, clofun11);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = x140289294066119;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294842855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294842855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294842855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294842855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294842855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294842855;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label24:
{
Obj x140289294066151 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = x140289294066151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label25:
{
Obj x140289294807303 = makeNative(27, clofun11, 0, 1, closureRef(co, 0));
Obj x140289294619495 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289294619495) {
Obj x140289294620007 = PRIM_CAR(closureRef(co, 0));
Obj x140289294620039 = PRIM_EQ(symdo, x140289294620007);
if (True == x140289294620039) {
Obj x140289294620583 = PRIM_CDR(closureRef(co, 0));
Obj x140289294620615 = PRIM_ISCONS(x140289294620583);
if (True == x140289294620615) {
Obj x140289294621255 = PRIM_CDR(closureRef(co, 0));
Obj x140289294621287 = PRIM_CAR(x140289294621255);
Obj x = x140289294621287;
Obj x140289294622407 = PRIM_CDR(closureRef(co, 0));
Obj x140289294622535 = PRIM_CDR(x140289294622407);
Obj x140289294622631 = PRIM_ISCONS(x140289294622535);
if (True == x140289294622631) {
Obj x140289294607143 = PRIM_CDR(closureRef(co, 0));
Obj x140289294607175 = PRIM_CDR(x140289294607143);
Obj x140289294607207 = PRIM_CAR(x140289294607175);
Obj y = x140289294607207;
Obj x140289294608199 = PRIM_CDR(closureRef(co, 0));
Obj x140289294608231 = PRIM_CDR(x140289294608199);
Obj x140289294608263 = PRIM_CDR(x140289294608231);
Obj x140289294608327 = PRIM_EQ(Nil, x140289294608263);
if (True == x140289294608327) {
Obj x140289294609319 = makeCons(y, Nil);
Obj x140289294609351 = makeCons(x, x140289294609319);
PUSH_CONT_0(co, 26, clofun11);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = x140289294609351;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294807303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294807303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294807303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294807303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294807303;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj x140289294609383 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = x140289294609383;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140289294808455 = makeNative(31, clofun11, 0, 1, closureRef(co, 0));
Obj x140289294840199 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289294840199) {
Obj x140289294841255 = PRIM_CAR(closureRef(co, 0));
Obj x140289294841287 = PRIM_EQ(symlet, x140289294841255);
if (True == x140289294841287) {
Obj x140289294841991 = PRIM_CDR(closureRef(co, 0));
Obj x140289294842023 = PRIM_ISCONS(x140289294841991);
if (True == x140289294842023) {
Obj x140289294842791 = PRIM_CDR(closureRef(co, 0));
Obj x140289294842823 = PRIM_CAR(x140289294842791);
Obj a = x140289294842823;
Obj x140289294807751 = PRIM_CDR(closureRef(co, 0));
Obj x140289294807783 = PRIM_CDR(x140289294807751);
Obj x140289294807911 = PRIM_ISCONS(x140289294807783);
if (True == x140289294807911) {
Obj x140289294808999 = PRIM_CDR(closureRef(co, 0));
Obj x140289294809031 = PRIM_CDR(x140289294808999);
Obj x140289294809063 = PRIM_CAR(x140289294809031);
Obj b = x140289294809063;
Obj x140289294810215 = PRIM_CDR(closureRef(co, 0));
Obj x140289294810247 = PRIM_CDR(x140289294810215);
Obj x140289294810279 = PRIM_CDR(x140289294810247);
Obj x140289294810311 = PRIM_ISCONS(x140289294810279);
if (True == x140289294810311) {
Obj x140289294803239 = PRIM_CDR(closureRef(co, 0));
Obj x140289294803271 = PRIM_CDR(x140289294803239);
Obj x140289294803303 = PRIM_CDR(x140289294803271);
Obj x140289294803335 = PRIM_CAR(x140289294803303);
Obj c = x140289294803335;
Obj x140289294762727 = PRIM_CDR(closureRef(co, 0));
Obj x140289294762759 = PRIM_CDR(x140289294762727);
Obj x140289294762791 = PRIM_CDR(x140289294762759);
Obj x140289294762823 = PRIM_CDR(x140289294762791);
Obj x140289294762887 = PRIM_EQ(Nil, x140289294762823);
if (True == x140289294762887) {
pushCont(co, 28, clofun11, 2, c, a);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294808455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294808455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294808455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294808455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294808455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294808455;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label28:
{
Obj x140289294763367 = __arg1;
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 29, clofun11, 2, a, x140289294763367);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label29:
{
Obj x140289294764743 = __arg1;
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289294763367= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289294765159 = makeCons(a, Nil);
pushCont(co, 30, clofun11, 1, x140289294763367);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = x140289294764743;
__arg2 = x140289294765159;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140289294765191 = __arg1;
Obj x140289294763367= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35union);
__arg1 = x140289294763367;
__arg2 = x140289294765191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label31:
{
Obj x140289294809703 = makeNative(32, clofun11, 0, 1, closureRef(co, 0));
Obj x140289295937607 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289295937607) {
Obj x140289295938503 = PRIM_CAR(closureRef(co, 0));
Obj x140289295938535 = PRIM_EQ(sym_37closure, x140289295938503);
if (True == x140289295938535) {
Obj x140289295939015 = PRIM_CDR(closureRef(co, 0));
Obj x140289295939047 = PRIM_ISCONS(x140289295939015);
if (True == x140289295939047) {
Obj x140289295939815 = PRIM_CDR(closureRef(co, 0));
Obj x140289295939847 = PRIM_CAR(x140289295939815);
Obj lam = x140289295939847;
Obj x140289295940295 = PRIM_CDR(closureRef(co, 0));
Obj x140289295940327 = PRIM_CDR(x140289295940295);
Obj more = x140289295940327;
Obj x140289295940775 = makeCons(lam, more);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = x140289295940775;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294809703;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294809703;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294809703;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj x140289294810567 = makeNative(33, clofun11, 0, 1, closureRef(co, 0));
Obj x140289296101287 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289296101287) {
Obj x140289296073063 = PRIM_CAR(closureRef(co, 0));
Obj x140289296073095 = PRIM_EQ(symreturn, x140289296073063);
if (True == x140289296073095) {
Obj x140289296073575 = PRIM_CDR(closureRef(co, 0));
Obj x140289296073607 = PRIM_ISCONS(x140289296073575);
if (True == x140289296073607) {
Obj x140289296074215 = PRIM_CDR(closureRef(co, 0));
Obj x140289296074247 = PRIM_CAR(x140289296074215);
Obj x = x140289296074247;
Obj x140289296074919 = PRIM_CDR(closureRef(co, 0));
Obj x140289296075015 = PRIM_CDR(x140289296074919);
Obj x140289296075207 = PRIM_EQ(Nil, x140289296075015);
if (True == x140289296075207) {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294810567;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810567;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810567;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810567;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x140289294803207 = makeNative(35, clofun11, 0, 1, closureRef(co, 0));
Obj x140289296234023 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289296234023) {
Obj x140289296234503 = PRIM_CAR(closureRef(co, 0));
Obj x140289296234535 = PRIM_EQ(symcall, x140289296234503);
if (True == x140289296234535) {
Obj x140289296235047 = PRIM_CDR(closureRef(co, 0));
Obj x140289296235079 = PRIM_ISCONS(x140289296235047);
if (True == x140289296235079) {
Obj x140289296235559 = PRIM_CDR(closureRef(co, 0));
Obj x140289296235591 = PRIM_CAR(x140289296235559);
Obj exp = x140289296235591;
Obj x140289296236231 = PRIM_CDR(closureRef(co, 0));
Obj x140289296236359 = PRIM_CDR(x140289296236231);
Obj x140289296236519 = PRIM_ISCONS(x140289296236359);
if (True == x140289296236519) {
Obj x140289296097959 = PRIM_CDR(closureRef(co, 0));
Obj x140289296097991 = PRIM_CDR(x140289296097959);
Obj x140289296098151 = PRIM_CAR(x140289296097991);
Obj cont = x140289296098151;
Obj x140289296098983 = PRIM_CDR(closureRef(co, 0));
Obj x140289296099015 = PRIM_CDR(x140289296098983);
Obj x140289296099047 = PRIM_CDR(x140289296099015);
Obj x140289296099079 = PRIM_EQ(Nil, x140289296099047);
if (True == x140289296099079) {
Obj x140289296100231 = makeCons(cont, Nil);
Obj x140289296100263 = makeCons(exp, x140289296100231);
PUSH_CONT_0(co, 34, clofun11);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = x140289296100263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294803207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294803207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294803207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294803207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294803207;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label34:
{
Obj x140289296100295 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = x140289296100295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label35:
{
Obj x140289294804423 = makeNative(36, clofun11, 0, 1, closureRef(co, 0));
Obj x140289296242791 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289296242791) {
Obj x140289296243239 = PRIM_CAR(closureRef(co, 0));
Obj x140289296243271 = PRIM_EQ(symtailcall, x140289296243239);
if (True == x140289296243271) {
Obj x140289296243687 = PRIM_CDR(closureRef(co, 0));
Obj x140289296243751 = PRIM_ISCONS(x140289296243687);
if (True == x140289296243751) {
Obj x140289296244231 = PRIM_CDR(closureRef(co, 0));
Obj x140289296244263 = PRIM_CAR(x140289296244231);
Obj exp = x140289296244263;
Obj x140289296232871 = PRIM_CDR(closureRef(co, 0));
Obj x140289296232903 = PRIM_CDR(x140289296232871);
Obj x140289296232935 = PRIM_EQ(Nil, x140289296232903);
if (True == x140289296232935) {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = exp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294804423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294804423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294804423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294804423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label36:
{
Obj x140289294805639 = makeNative(38, clofun11, 0, 1, closureRef(co, 0));
Obj x140289296361831 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289296361831) {
Obj x140289296362631 = PRIM_CAR(closureRef(co, 0));
Obj x140289296362663 = PRIM_EQ(symcontinuation, x140289296362631);
if (True == x140289296362663) {
Obj x140289296363239 = PRIM_CDR(closureRef(co, 0));
Obj x140289296363271 = PRIM_ISCONS(x140289296363239);
if (True == x140289296363271) {
Obj x140289296314535 = PRIM_CDR(closureRef(co, 0));
Obj x140289296314599 = PRIM_CAR(x140289296314535);
Obj arg = x140289296314599;
Obj x140289296315271 = PRIM_CDR(closureRef(co, 0));
Obj x140289296315303 = PRIM_CDR(x140289296315271);
Obj x140289296315335 = PRIM_ISCONS(x140289296315303);
if (True == x140289296315335) {
Obj x140289296316295 = PRIM_CDR(closureRef(co, 0));
Obj x140289296316327 = PRIM_CDR(x140289296316295);
Obj x140289296316359 = PRIM_CAR(x140289296316327);
Obj body = x140289296316359;
Obj x140289296317127 = PRIM_CDR(closureRef(co, 0));
Obj x140289296317159 = PRIM_CDR(x140289296317127);
Obj x140289296317191 = PRIM_CDR(x140289296317159);
Obj x140289296317223 = PRIM_EQ(Nil, x140289296317191);
if (True == x140289296317223) {
pushCont(co, 37, clofun11, 1, arg);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg1 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294805639;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294805639;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294805639;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294805639;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294805639;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label37:
{
Obj x140289296241479 = __arg1;
Obj arg= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = x140289296241479;
__arg2 = arg;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140289294762407 = makeNative(40, clofun11, 0, 0);
Obj x140289296359911 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289296359911) {
Obj x140289296360231 = PRIM_CAR(closureRef(co, 0));
Obj f = x140289296360231;
Obj x140289296360551 = PRIM_CDR(closureRef(co, 0));
Obj args = x140289296360551;
Obj x140289296361255 = makeCons(f, args);
PUSH_CONT_0(co, 39, clofun11);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = globalRef(symcora_47lib_47toc_35free_45vars);
__arg2 = x140289296361255;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294762407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label39:
{
Obj x140289296361287 = __arg1;
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = globalRef(symcora_47lib_47toc_35union);
__arg2 = Nil;
__arg3 = x140289296361287;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
Obj x140289294809927 = __arg1;
Obj x140289294810151 = makeNative(42, clofun11, 0, 1, x140289294809927);
Obj x140289296664263 = PRIM_ISCONS(x140289294809927);
if (True == x140289296664263) {
Obj x140289296664871 = PRIM_CAR(x140289294809927);
Obj x140289296664967 = PRIM_EQ(sym_37const, x140289296664871);
if (True == x140289296664967) {
Obj x140289296665383 = PRIM_CDR(x140289294809927);
Obj x140289296665511 = PRIM_ISCONS(x140289296665383);
if (True == x140289296665511) {
Obj x140289296666247 = PRIM_CDR(x140289294809927);
Obj x140289296666279 = PRIM_CAR(x140289296666247);
Obj x = x140289296666279;
Obj x140289296388487 = PRIM_CDR(x140289294809927);
Obj x140289296388519 = PRIM_CDR(x140289296388487);
Obj x140289296388551 = PRIM_EQ(Nil, x140289296388519);
if (True == x140289296388551) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294810151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810151;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label42:
{
Obj x140289294810919 = makeNative(43, clofun11, 0, 1, closureRef(co, 0));
Obj x140289296685095 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289296685095) {
Obj x140289296685895 = PRIM_CAR(closureRef(co, 0));
Obj x140289296685927 = PRIM_EQ(sym_37global, x140289296685895);
if (True == x140289296685927) {
Obj x140289296686343 = PRIM_CDR(closureRef(co, 0));
Obj x140289296686375 = PRIM_ISCONS(x140289296686343);
if (True == x140289296686375) {
Obj x140289296686951 = PRIM_CDR(closureRef(co, 0));
Obj x140289296686983 = PRIM_CAR(x140289296686951);
Obj x = x140289296686983;
Obj x140289296663175 = PRIM_CDR(closureRef(co, 0));
Obj x140289296663207 = PRIM_CDR(x140289296663175);
Obj x140289296663239 = PRIM_EQ(Nil, x140289296663207);
if (True == x140289296663239) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294810919;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810919;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810919;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294810919;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj x140289294803687 = makeNative(44, clofun11, 0, 1, closureRef(co, 0));
Obj x140289297000999 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289297000999) {
Obj x140289297001447 = PRIM_CAR(closureRef(co, 0));
Obj x140289297001479 = PRIM_EQ(sym_37builtin, x140289297001447);
if (True == x140289297001479) {
Obj x140289297002055 = PRIM_CDR(closureRef(co, 0));
Obj x140289297002087 = PRIM_ISCONS(x140289297002055);
if (True == x140289297002087) {
Obj x140289296683207 = PRIM_CDR(closureRef(co, 0));
Obj x140289296683239 = PRIM_CAR(x140289296683207);
Obj op = x140289296683239;
Obj x140289296684007 = PRIM_CDR(closureRef(co, 0));
Obj x140289296684103 = PRIM_CDR(x140289296684007);
Obj x140289296684231 = PRIM_EQ(Nil, x140289296684103);
if (True == x140289296684231) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294803687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294803687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294803687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294803687;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label44:
{
Obj x140289294804487 = makeNative(45, clofun11, 0, 1, closureRef(co, 0));
Obj x140289297030023 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289297030023) {
Obj x140289297030759 = PRIM_CAR(closureRef(co, 0));
Obj x140289297030791 = PRIM_EQ(symquote, x140289297030759);
if (True == x140289297030791) {
Obj x140289296998439 = PRIM_CDR(closureRef(co, 0));
Obj x140289296998471 = PRIM_ISCONS(x140289296998439);
if (True == x140289296998471) {
Obj x140289296999207 = PRIM_CDR(closureRef(co, 0));
Obj x140289296999239 = PRIM_CAR(x140289296999207);
Obj x = x140289296999239;
Obj x140289297000007 = PRIM_CDR(closureRef(co, 0));
Obj x140289297000039 = PRIM_CDR(x140289297000007);
Obj x140289297000071 = PRIM_EQ(Nil, x140289297000039);
if (True == x140289297000071) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294804487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294804487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294804487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294804487;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label45:
{
Obj x140289294805671 = makeNative(46, clofun11, 0, 1, closureRef(co, 0));
Obj x140289297079783 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289297079783) {
Obj x140289297027399 = PRIM_CAR(closureRef(co, 0));
Obj x140289297027431 = PRIM_EQ(sym_37closure_45ref, x140289297027399);
if (True == x140289297027431) {
Obj x140289297027847 = PRIM_CDR(closureRef(co, 0));
Obj x140289297027879 = PRIM_ISCONS(x140289297027847);
if (True == x140289297027879) {
Obj x140289297028295 = PRIM_CDR(closureRef(co, 0));
Obj x140289297028391 = PRIM_CAR(x140289297028295);
Obj __ = x140289297028391;
Obj x140289297029127 = PRIM_CDR(closureRef(co, 0));
Obj x140289297029159 = PRIM_CDR(x140289297029127);
Obj x140289297029191 = PRIM_EQ(Nil, x140289297029159);
if (True == x140289297029191) {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294805671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294805671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294805671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294805671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label46:
{
Obj x140289294762119 = makeNative(47, clofun11, 0, 0);
Obj x = closureRef(co, 0);
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
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
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label48:
{
Obj x140289294807047 = __arg1;
Obj x140289294807079 = __arg2;
Obj x140289294807463 = makeNative(49, clofun11, 0, 2, x140289294807047, x140289294807079);
Obj x140289297076967 = PRIM_EQ(Nil, x140289294807047);
if (True == x140289297076967) {
Obj __ = x140289294807079;
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun11) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294807463;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label49:
{
Obj x140289294808103 = makeNative(1, clofun12, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140289297099495 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289297099495) {
Obj x140289297099847 = PRIM_CAR(closureRef(co, 0));
Obj x = x140289297099847;
Obj x140289297100167 = PRIM_CDR(closureRef(co, 0));
Obj y = x140289297100167;
Obj s2 = closureRef(co, 1);
pushCont(co, 0, clofun12, 3, y, s2, x140289294808103);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35elem_63);
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294808103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun11) { co->ctx.pc = ps; goto fail; };
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

static void clofun12(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20, &&label21, &&label22, &&label23, &&label24, &&label25, &&label26, &&label27, &&label28, &&label29, &&label30, &&label31, &&label32, &&label33, &&label34, &&label35, &&label36, &&label37, &&label38, &&label39, &&label40, &&label41, &&label42, &&label43, &&label44, &&label45, &&label46, &&label47, &&label48, &&label49};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140289297100615 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289294808103= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140289297100615) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294808103;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj x140289294808903 = makeNative(3, clofun12, 0, 0);
Obj x140289297097895 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289297097895) {
Obj x140289297098151 = PRIM_CAR(closureRef(co, 0));
Obj x = x140289297098151;
Obj x140289297098471 = PRIM_CDR(closureRef(co, 0));
Obj y = x140289297098471;
Obj s2 = closureRef(co, 1);
pushCont(co, 2, clofun12, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35diff);
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294808903;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label2:
{
Obj x140289297099079 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289297099111 = makeCons(x, x140289297099079);
__nargs = 2;
__arg1 = x140289297099111;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label3:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label4:
{
Obj x140289294840967 = __arg1;
Obj x140289294840999 = __arg2;
Obj x140289294841415 = makeNative(5, clofun12, 0, 2, x140289294840967, x140289294840999);
Obj x140289297276615 = PRIM_EQ(Nil, x140289294840967);
if (True == x140289297276615) {
Obj s2 = x140289294840999;
__nargs = 2;
__arg1 = s2;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294841415;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj x140289294842087 = makeNative(7, clofun12, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj x140289297274311 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289297274311) {
Obj x140289297274663 = PRIM_CAR(closureRef(co, 0));
Obj x = x140289297274663;
Obj x140289297274951 = PRIM_CDR(closureRef(co, 0));
Obj y = x140289297274951;
Obj s2 = closureRef(co, 1);
pushCont(co, 6, clofun12, 3, y, s2, x140289294842087);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35elem_63);
__arg1 = x;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294842087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x140289297275815 = __arg1;
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj s2= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289294842087= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
if (True == x140289297275815) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35union);
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294842087;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label7:
{
Obj x140289294842887 = makeNative(9, clofun12, 0, 0);
Obj x140289297300743 = PRIM_ISCONS(closureRef(co, 0));
if (True == x140289297300743) {
Obj x140289297300999 = PRIM_CAR(closureRef(co, 0));
Obj x = x140289297300999;
Obj x140289297273255 = PRIM_CDR(closureRef(co, 0));
Obj y = x140289297273255;
Obj s2 = closureRef(co, 1);
pushCont(co, 8, clofun12, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35union);
__arg1 = y;
__arg2 = s2;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294842887;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label8:
{
Obj x140289297273895 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289297273927 = makeCons(x, x140289297273895);
__nargs = 2;
__arg1 = x140289297273927;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label9:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label10:
{
Obj x140289294763655 = __arg1;
Obj x140289294763687 = __arg2;
Obj x140289294763719 = __arg3;
Obj x140289294764295 = makeNative(14, clofun12, 0, 3, x140289294763655, x140289294763687, x140289294763719);
Obj __ = x140289294763655;
Obj globals = x140289294763687;
Obj x = x140289294763719;
pushCont(co, 11, clofun12, 2, x, x140289294764295);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35number_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label11:
{
Obj x140289297326951 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289294764295= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140289297326951) {
if (True == True) {
Obj x140289297328167 = makeCons(x, Nil);
Obj x140289297328199 = makeCons(sym_37const, x140289297328167);
__nargs = 2;
__arg1 = x140289297328199;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294764295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
Obj x140289297328647 = primIsString(x);
if (True == x140289297328647) {
if (True == True) {
Obj x140289297329063 = makeCons(x, Nil);
Obj x140289297329095 = makeCons(sym_37const, x140289297329063);
__nargs = 2;
__arg1 = x140289297329095;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294764295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 12, clofun12, 2, x, x140289294764295);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35boolean_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label12:
{
Obj x140289297329639 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289294764295= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140289297329639) {
if (True == True) {
Obj x140289297330151 = makeCons(x, Nil);
Obj x140289297297415 = makeCons(sym_37const, x140289297330151);
__nargs = 2;
__arg1 = x140289297297415;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294764295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
pushCont(co, 13, clofun12, 2, x, x140289294764295);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label13:
{
Obj x140289297297799 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289294764295= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140289297297799) {
if (True == True) {
Obj x140289297298279 = makeCons(x, Nil);
Obj x140289297298311 = makeCons(sym_37const, x140289297298279);
__nargs = 2;
__arg1 = x140289297298311;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294764295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
if (True == False) {
Obj x140289297299047 = makeCons(x, Nil);
Obj x140289297299079 = makeCons(sym_37const, x140289297299047);
__nargs = 2;
__arg1 = x140289297299079;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294764295;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label14:
{
Obj x140289294765063 = makeNative(16, clofun12, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj __ = closureRef(co, 0);
Obj globals = closureRef(co, 1);
Obj x140289297759943 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140289297759943) {
Obj x140289297731719 = PRIM_CAR(closureRef(co, 2));
Obj x140289297731751 = PRIM_EQ(symquote, x140289297731719);
if (True == x140289297731751) {
Obj x140289297732263 = PRIM_CDR(closureRef(co, 2));
Obj x140289297732295 = PRIM_ISCONS(x140289297732263);
if (True == x140289297732295) {
Obj x140289297733447 = PRIM_CDR(closureRef(co, 2));
Obj x140289297733575 = PRIM_CAR(x140289297733447);
Obj x = x140289297733575;
Obj x140289297734375 = PRIM_CDR(closureRef(co, 2));
Obj x140289297734407 = PRIM_CDR(x140289297734375);
Obj x140289297734439 = PRIM_EQ(Nil, x140289297734407);
if (True == x140289297734439) {
pushCont(co, 15, clofun12, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35add_45symbol_45to_45list);
__arg1 = x;
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294765063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294765063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj x140289297734727 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289297735239 = makeCons(x, Nil);
Obj x140289297735271 = makeCons(sym_37const, x140289297735239);
__nargs = 2;
__arg1 = x140289297735271;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label16:
{
Obj x140289294618791 = makeNative(19, clofun12, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj env = closureRef(co, 0);
Obj globals = closureRef(co, 1);
Obj x = closureRef(co, 2);
Obj x140289297758023 = primIsSymbol(x);
if (True == x140289297758023) {
pushCont(co, 17, clofun12, 2, globals, x);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35elem_63);
__arg1 = x;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294618791;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label17:
{
Obj x140289297758407 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
if (True == x140289297758407) {
__nargs = 2;
__arg1 = x;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
pushCont(co, 18, clofun12, 1, x);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35add_45symbol_45to_45list);
__arg1 = x;
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj x140289297758791 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289297759207 = makeCons(x, Nil);
Obj x140289297759239 = makeCons(sym_37global, x140289297759207);
__nargs = 2;
__arg1 = x140289297759239;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label19:
{
Obj x140289294619559 = makeNative(22, clofun12, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj env = closureRef(co, 0);
Obj globals = closureRef(co, 1);
Obj x140289297828039 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140289297828039) {
Obj x140289297828487 = PRIM_CAR(closureRef(co, 2));
Obj x140289297828519 = PRIM_EQ(symlambda, x140289297828487);
if (True == x140289297828519) {
Obj x140289297829511 = PRIM_CDR(closureRef(co, 2));
Obj x140289297829543 = PRIM_ISCONS(x140289297829511);
if (True == x140289297829543) {
Obj x140289297780807 = PRIM_CDR(closureRef(co, 2));
Obj x140289297780839 = PRIM_CAR(x140289297780807);
Obj args = x140289297780839;
Obj x140289297782151 = PRIM_CDR(closureRef(co, 2));
Obj x140289297782183 = PRIM_CDR(x140289297782151);
Obj x140289297782215 = PRIM_ISCONS(x140289297782183);
if (True == x140289297782215) {
Obj x140289297782951 = PRIM_CDR(closureRef(co, 2));
Obj x140289297782983 = PRIM_CDR(x140289297782951);
Obj x140289297783015 = PRIM_CAR(x140289297782983);
Obj body = x140289297783015;
Obj x140289297783911 = PRIM_CDR(closureRef(co, 2));
Obj x140289297783943 = PRIM_CDR(x140289297783911);
Obj x140289297783975 = PRIM_CDR(x140289297783943);
Obj x140289297784007 = PRIM_EQ(Nil, x140289297783975);
if (True == x140289297784007) {
pushCont(co, 20, clofun12, 3, globals, body, args);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35append);
__arg1 = args;
__arg2 = env;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294619559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294619559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294619559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294619559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294619559;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label20:
{
Obj x140289297756455 = __arg1;
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj body= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 21, clofun12, 1, args);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = x140289297756455;
__arg2 = globals;
__arg3 = body;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label21:
{
Obj x140289297756551 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289297756615 = makeCons(x140289297756551, Nil);
Obj x140289297756647 = makeCons(args, x140289297756615);
Obj x140289297756679 = makeCons(symlambda, x140289297756647);
__nargs = 2;
__arg1 = x140289297756679;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label22:
{
Obj x140289294620967 = makeNative(25, clofun12, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj env = closureRef(co, 0);
Obj globals = closureRef(co, 1);
Obj x140289297964743 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140289297964743) {
Obj x140289297826023 = PRIM_CAR(closureRef(co, 2));
Obj x140289297826055 = PRIM_EQ(symif, x140289297826023);
if (True == x140289297826055) {
Obj x140289297826311 = PRIM_CDR(closureRef(co, 2));
Obj args = x140289297826311;
pushCont(co, 23, clofun12, 1, args);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294620967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294620967;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label23:
{
Obj x140289297827111 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
PUSH_CONT_0(co, 24, clofun12);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x140289297827111;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label24:
{
Obj x140289297827175 = __arg1;
Obj x140289297827207 = makeCons(symif, x140289297827175);
__nargs = 2;
__arg1 = x140289297827207;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label25:
{
Obj x140289294621927 = makeNative(28, clofun12, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj env = closureRef(co, 0);
Obj globals = closureRef(co, 1);
Obj x140289297989511 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140289297989511) {
Obj x140289297977735 = PRIM_CAR(closureRef(co, 2));
Obj x140289297977799 = PRIM_EQ(symdo, x140289297977735);
if (True == x140289297977799) {
Obj x140289297978247 = PRIM_CDR(closureRef(co, 2));
Obj x140289297978311 = PRIM_ISCONS(x140289297978247);
if (True == x140289297978311) {
Obj x140289297978727 = PRIM_CDR(closureRef(co, 2));
Obj x140289297978759 = PRIM_CAR(x140289297978727);
Obj x = x140289297978759;
Obj x140289297979399 = PRIM_CDR(closureRef(co, 2));
Obj x140289297979431 = PRIM_CDR(x140289297979399);
Obj x140289297979463 = PRIM_ISCONS(x140289297979431);
if (True == x140289297979463) {
Obj x140289297980039 = PRIM_CDR(closureRef(co, 2));
Obj x140289297980071 = PRIM_CDR(x140289297980039);
Obj x140289297980103 = PRIM_CAR(x140289297980071);
Obj y = x140289297980103;
Obj x140289297980967 = PRIM_CDR(closureRef(co, 2));
Obj x140289297980999 = PRIM_CDR(x140289297980967);
Obj x140289297981031 = PRIM_CDR(x140289297980999);
Obj x140289297981063 = PRIM_EQ(Nil, x140289297981031);
if (True == x140289297981063) {
pushCont(co, 26, clofun12, 3, env, globals, y);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = globals;
__arg3 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294621927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294621927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294621927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294621927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294621927;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label26:
{
Obj x140289297961319 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
pushCont(co, 27, clofun12, 1, x140289297961319);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = globals;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label27:
{
Obj x140289297961863 = __arg1;
Obj x140289297961319= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289297961927 = makeCons(x140289297961863, Nil);
Obj x140289297961959 = makeCons(x140289297961319, x140289297961927);
Obj x140289297961991 = makeCons(symdo, x140289297961959);
__nargs = 2;
__arg1 = x140289297961991;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label28:
{
Obj x140289294606951 = makeNative(31, clofun12, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj env = closureRef(co, 0);
Obj globals = closureRef(co, 1);
Obj x140289298005511 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140289298005511) {
Obj x140289297997959 = PRIM_CAR(closureRef(co, 2));
Obj x140289297997991 = PRIM_EQ(symlet, x140289297997959);
if (True == x140289297997991) {
Obj x140289297998599 = PRIM_CDR(closureRef(co, 2));
Obj x140289297998631 = PRIM_ISCONS(x140289297998599);
if (True == x140289297998631) {
Obj x140289297999047 = PRIM_CDR(closureRef(co, 2));
Obj x140289297999079 = PRIM_CAR(x140289297999047);
Obj a = x140289297999079;
Obj x140289297999751 = PRIM_CDR(closureRef(co, 2));
Obj x140289297999783 = PRIM_CDR(x140289297999751);
Obj x140289297999815 = PRIM_ISCONS(x140289297999783);
if (True == x140289297999815) {
Obj x140289298000967 = PRIM_CDR(closureRef(co, 2));
Obj x140289298001255 = PRIM_CDR(x140289298000967);
Obj x140289298001287 = PRIM_CAR(x140289298001255);
Obj b = x140289298001287;
Obj x140289297993991 = PRIM_CDR(closureRef(co, 2));
Obj x140289297994023 = PRIM_CDR(x140289297993991);
Obj x140289297994055 = PRIM_CDR(x140289297994023);
Obj x140289297994087 = PRIM_ISCONS(x140289297994055);
if (True == x140289297994087) {
Obj x140289297994919 = PRIM_CDR(closureRef(co, 2));
Obj x140289297994951 = PRIM_CDR(x140289297994919);
Obj x140289297995079 = PRIM_CDR(x140289297994951);
Obj x140289297995111 = PRIM_CAR(x140289297995079);
Obj c = x140289297995111;
Obj x140289297996135 = PRIM_CDR(closureRef(co, 2));
Obj x140289297996167 = PRIM_CDR(x140289297996135);
Obj x140289297996199 = PRIM_CDR(x140289297996167);
Obj x140289297996231 = PRIM_CDR(x140289297996199);
Obj x140289297996263 = PRIM_EQ(Nil, x140289297996231);
if (True == x140289297996263) {
pushCont(co, 29, clofun12, 4, env, globals, c, a);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = globals;
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294606951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294606951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294606951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294606951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294606951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294606951;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label29:
{
Obj x140289297997127 = __arg1;
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj c= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140289297988103 = makeCons(a, env);
pushCont(co, 30, clofun12, 2, x140289297997127, a);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = x140289297988103;
__arg2 = globals;
__arg3 = c;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label30:
{
Obj x140289297988199 = __arg1;
Obj x140289297997127= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj a= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289297988263 = makeCons(x140289297988199, Nil);
Obj x140289297988295 = makeCons(x140289297997127, x140289297988263);
Obj x140289297988327 = makeCons(a, x140289297988295);
Obj x140289297988359 = makeCons(symlet, x140289297988327);
__nargs = 2;
__arg1 = x140289297988359;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label31:
{
Obj x140289294608583 = makeNative(39, clofun12, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj env = closureRef(co, 0);
Obj globals = closureRef(co, 1);
Obj x140289298006375 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140289298006375) {
Obj x140289298006887 = PRIM_CAR(closureRef(co, 2));
Obj op = x140289298006887;
Obj x140289298007143 = PRIM_CDR(closureRef(co, 2));
Obj args = x140289298007143;
pushCont(co, 32, clofun12, 5, op, args, env, globals, x140289294608583);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35builtin_63);
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294608583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label32:
{
Obj x140289298007399 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj x140289294608583= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
if (True == x140289298007399) {
pushCont(co, 33, clofun12, 4, op, args, env, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35builtin_45_62args);
__arg1 = op;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294608583;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label33:
{
Obj x140289298007655 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj required = x140289298007655;
pushCont(co, 34, clofun12, 5, required, op, args, env, globals);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35length);
__arg1 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label34:
{
Obj x140289298007911 = __arg1;
Obj required= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 4];
Obj provided = x140289298007911;
Obj x140289298008519 = PRIM_EQ(required, provided);
if (True == x140289298008519) {
Obj x140289298009319 = makeCons(op, Nil);
Obj x140289298009351 = makeCons(sym_37builtin, x140289298009319);
pushCont(co, 37, clofun12, 2, args, x140289298009351);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
Obj x140289298002503 = PRIM_GT(required, provided);
if (True == x140289298002503) {
Obj x140289298002951 = PRIM_SUB(required, provided);
pushCont(co, 35, clofun12, 4, op, args, env, globals);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35temp_45list);
__arg1 = x140289298002951;
__arg2 = Nil;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("primitive call mismatch");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}
}

label35:
{
Obj x140289298003015 = __arg1;
Obj op= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 3];
Obj tmp = x140289298003015;
Obj x140289298004359 = makeCons(op, args);
pushCont(co, 36, clofun12, 3, tmp, env, globals);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35append);
__arg1 = x140289298004359;
__arg2 = tmp;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label36:
{
Obj x140289298004423 = __arg1;
Obj tmp= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj env= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj globals= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 2];
Obj x140289298004487 = makeCons(x140289298004423, Nil);
Obj x140289298004519 = makeCons(tmp, x140289298004487);
Obj x140289298004551 = makeCons(symlambda, x140289298004519);
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = globals;
__arg3 = x140289298004551;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label37:
{
Obj x140289298010023 = __arg1;
Obj args= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289298009351= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
pushCont(co, 38, clofun12, 1, x140289298009351);
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x140289298010023;
__arg2 = args;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label38:
{
Obj x140289298010087 = __arg1;
Obj x140289298009351= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj x140289298001927 = makeCons(x140289298009351, x140289298010087);
__nargs = 2;
__arg1 = x140289298001927;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label39:
{
Obj x140289294609575 = makeNative(41, clofun12, 0, 0);
Obj env = closureRef(co, 0);
Obj globals = closureRef(co, 1);
Obj ls = closureRef(co, 2);
pushCont(co, 40, clofun12, 1, ls);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35parse);
__arg1 = env;
__arg2 = globals;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label40:
{
Obj x140289298014087 = __arg1;
Obj ls= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
__nargs = 3;
__arg0 = globalRef(symcora_47init_35map);
__arg1 = x140289298014087;
__arg2 = ls;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label41:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label42:
{
Obj x140289294805575 = __arg1;
Obj x140289294805607 = __arg2;
Obj x140289294806407 = makeNative(43, clofun12, 0, 2, x140289294805575, x140289294805607);
Obj x140289298018183 = PRIM_EQ(MAKE_NUMBER(0), x140289294805575);
if (True == x140289298018183) {
Obj res = x140289294805607;
__nargs = 2;
__arg1 = res;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294806407;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label43:
{
Obj x140289294762215 = makeNative(44, clofun12, 0, 0);
Obj n = closureRef(co, 0);
Obj res = closureRef(co, 1);
Obj x140289298017159 = PRIM_SUB(n, MAKE_NUMBER(1));
Obj x140289298017607 = primGenSym();
Obj x140289298017671 = makeCons(x140289298017607, res);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35temp_45list);
__arg1 = x140289298017159;
__arg2 = x140289298017671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label44:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label45:
{
Obj x = __arg1;
PUSH_CONT_0(co, 46, clofun12);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35assq);
__arg1 = x;
__arg2 = globalRef(symcora_47lib_47toc_35_42builtin_45prims_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label46:
{
Obj x140289298015079 = __arg1;
Obj find = x140289298015079;
pushCont(co, 47, clofun12, 1, find);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label47:
{
Obj x140289298015335 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140289298015335) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun12) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47init_35cadr);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label48:
{
Obj x = __arg1;
PUSH_CONT_0(co, 49, clofun12);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35assq);
__arg1 = x;
__arg2 = globalRef(symcora_47lib_47toc_35_42builtin_45prims_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label49:
{
Obj x140289298021863 = __arg1;
Obj find = x140289298021863;
pushCont(co, 0, clofun13, 1, find);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun12) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

static void clofun13(struct Cora* co){
int __nargs = co->nargs;
Obj __arg0 = co->args[0];
Obj __arg1 = co->args[1];
Obj __arg2 = co->args[2];
Obj __arg3 = co->args[3];

static void* jumpTable[] = {&&label0, &&label1, &&label2, &&label3, &&label4, &&label5, &&label6, &&label7, &&label8, &&label9, &&label10, &&label11, &&label12, &&label13, &&label14, &&label15, &&label16, &&label17, &&label18, &&label19, &&label20};

goto *jumpTable[co->ctx.pc.label];

label0:
{
Obj x140289298022119 = __arg1;
Obj find= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
if (True == x140289298022119) {
__nargs = 2;
__arg1 = makeCString("ERROR");
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun13) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 2;
__arg0 = globalRef(symcora_47init_35caddr);
__arg1 = find;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label1:
{
Obj x = __arg1;
PUSH_CONT_0(co, 2, clofun13);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35assq);
__arg1 = x;
__arg2 = globalRef(symcora_47lib_47toc_35_42builtin_45prims_42);
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label2:
{
Obj x140289298021063 = __arg1;
PUSH_CONT_0(co, 3, clofun13);
__nargs = 2;
__arg0 = globalRef(symcora_47init_35null_63);
__arg1 = x140289298021063;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label3:
{
Obj x140289298021095 = __arg1;
Obj x140289298021127 = primNot(x140289298021095);
__nargs = 2;
__arg1 = x140289298021127;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun13) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}

label4:
{
Obj x140289294803143 = __arg1;
Obj x140289294803175 = __arg2;
Obj x140289294803719 = makeNative(5, clofun13, 0, 2, x140289294803143, x140289294803175);
Obj x = x140289294803143;
Obj x140289298038983 = PRIM_EQ(Nil, x140289294803175);
if (True == x140289298038983) {
__nargs = 2;
__arg1 = False;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun13) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294803719;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label5:
{
Obj x140289294804263 = makeNative(7, clofun13, 0, 0);
Obj x = closureRef(co, 0);
Obj x140289298056487 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140289298056487) {
Obj x140289298056839 = PRIM_CAR(closureRef(co, 1));
Obj hd = x140289298056839;
Obj x140289298057095 = PRIM_CDR(closureRef(co, 1));
Obj tl = x140289298057095;
pushCont(co, 6, clofun13, 2, x, tl);
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35index);
__arg1 = x;
__arg2 = hd;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294804263;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label6:
{
Obj x140289298057639 = __arg1;
Obj x= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj tl= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
Obj x140289298057703 = PRIM_LT(x140289298057639, MAKE_NUMBER(0));
if (True == x140289298057703) {
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35exist_45in_45env);
__arg1 = x;
__arg2 = tl;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 2;
__arg1 = True;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun13) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
}
}

label7:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label8:
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
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label9:
{
Obj x140289294807815 = __arg1;
Obj x140289294807847 = __arg2;
Obj x140289294807879 = __arg3;
Obj x140289294808423 = makeNative(10, clofun13, 0, 3, x140289294807815, x140289294807847, x140289294807879);
Obj __ = x140289294807815;
Obj x = x140289294807847;
Obj x140289298090919 = PRIM_EQ(Nil, x140289294807879);
if (True == x140289298090919) {
__nargs = 2;
__arg1 = MAKE_NUMBER(-1);
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun13) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294808423;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label10:
{
Obj x140289294809191 = makeNative(11, clofun13, 0, 3, closureRef(co, 0), closureRef(co, 1), closureRef(co, 2));
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj x140289298088743 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140289298088743) {
Obj x140289298088999 = PRIM_CAR(closureRef(co, 2));
Obj a = x140289298088999;
Obj x140289298089255 = PRIM_CDR(closureRef(co, 2));
Obj b = x140289298089255;
Obj x140289298089543 = PRIM_EQ(x, a);
if (True == x140289298089543) {
__nargs = 2;
__arg1 = pos;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun13) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294809191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294809191;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label11:
{
Obj x140289294810183 = makeNative(12, clofun13, 0, 0);
Obj pos = closureRef(co, 0);
Obj x = closureRef(co, 1);
Obj x140289297987303 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140289297987303) {
Obj x140289297987559 = PRIM_CAR(closureRef(co, 2));
Obj a = x140289297987559;
Obj x140289297987815 = PRIM_CDR(closureRef(co, 2));
Obj b = x140289297987815;
Obj x140289298088103 = PRIM_ADD(pos, MAKE_NUMBER(1));
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35pos_45in_45list0);
__arg1 = x140289298088103;
__arg2 = x;
__arg3 = b;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294810183;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label12:
{
__nargs = 2;
__arg0 = globalRef(symcora_47lib_47toc_35error);
__arg1 = makeCString("no match-help found!");
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label13:
{
Obj x140289294841639 = __arg1;
Obj x140289294841703 = __arg2;
Obj x140289294841735 = __arg3;
Obj x140289294842599 = makeNative(14, clofun13, 0, 3, x140289294841639, x140289294841703, x140289294841735);
Obj f = x140289294841639;
Obj acc = x140289294841703;
Obj x140289297985895 = PRIM_EQ(Nil, x140289294841735);
if (True == x140289297985895) {
__nargs = 2;
__arg1 = acc;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun13) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294842599;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label14:
{
Obj x140289294843367 = makeNative(16, clofun13, 0, 0);
Obj f = closureRef(co, 0);
Obj acc = closureRef(co, 1);
Obj x140289297980295 = PRIM_ISCONS(closureRef(co, 2));
if (True == x140289297980295) {
Obj x140289297980551 = PRIM_CAR(closureRef(co, 2));
Obj x = x140289297980551;
Obj x140289297980807 = PRIM_CDR(closureRef(co, 2));
Obj y = x140289297980807;
pushCont(co, 15, clofun13, 2, f, y);
__nargs = 3;
__arg0 = f;
__arg1 = acc;
__arg2 = x;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294843367;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label15:
{
Obj x140289297981223 = __arg1;
Obj f= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 0];
Obj y= ((Obj*)bytesData(co->ctx.stk.stack))[co->ctx.stk.base + 1];
__nargs = 4;
__arg0 = globalRef(symcora_47lib_47toc_35foldl);
__arg1 = f;
__arg2 = x140289297981223;
__arg3 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
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
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

label17:
{
Obj x140289294840711 = __arg1;
Obj x140289294840743 = __arg2;
Obj x140289294841127 = makeNative(18, clofun13, 0, 2, x140289294840711, x140289294840743);
Obj var = x140289294840711;
Obj x140289297979015 = PRIM_EQ(Nil, x140289294840743);
if (True == x140289297979015) {
__nargs = 2;
__arg1 = Nil;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun13) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294841127;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label18:
{
Obj x140289294841671 = makeNative(19, clofun13, 0, 2, closureRef(co, 0), closureRef(co, 1));
Obj var = closureRef(co, 0);
Obj x140289290136903 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140289290136903) {
Obj x140289290137511 = PRIM_CAR(closureRef(co, 1));
Obj x140289290137543 = PRIM_ISCONS(x140289290137511);
if (True == x140289290137543) {
Obj x140289290108519 = PRIM_CAR(closureRef(co, 1));
Obj x140289290108551 = PRIM_CAR(x140289290108519);
Obj x = x140289290108551;
Obj x140289297977479 = PRIM_CAR(closureRef(co, 1));
Obj x140289297977511 = PRIM_CDR(x140289297977479);
Obj y = x140289297977511;
Obj x140289297977767 = PRIM_CDR(closureRef(co, 1));
Obj __ = x140289297977767;
Obj x140289297978055 = PRIM_EQ(var, x);
if (True == x140289297978055) {
Obj x140289297978279 = makeCons(x, y);
__nargs = 2;
__arg1 = x140289297978279;
co->ctx = co->callstack.data[--co->callstack.len];
if (co->ctx.pc.func != clofun13) { goto fail; }
goto *jumpTable[co->ctx.pc.label];
} else {
__nargs = 1;
__arg0 = x140289294841671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294841671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
} else {
__nargs = 1;
__arg0 = x140289294841671;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}
}

label19:
{
Obj x140289294840519 = makeNative(20, clofun13, 0, 0);
Obj var = closureRef(co, 0);
Obj x140289290135751 = PRIM_ISCONS(closureRef(co, 1));
if (True == x140289290135751) {
Obj x140289290136007 = PRIM_CAR(closureRef(co, 1));
Obj __ = x140289290136007;
Obj x140289290136263 = PRIM_CDR(closureRef(co, 1));
Obj y = x140289290136263;
__nargs = 3;
__arg0 = globalRef(symcora_47lib_47toc_35assq);
__arg1 = var;
__arg2 = y;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
} else {
__nargs = 1;
__arg0 = x140289294840519;
co->ctx.frees = __arg0;
struct pcState ps = OBJ_FIELD(__arg0, scmNative, code);
if (OBJ_FIELD(__arg0, scmNative, required)+1 != __nargs) { co->ctx.pc.func = coraDispatch; goto fail; };
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
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
if (ps.func != clofun13) { co->ctx.pc = ps; goto fail; };
goto *jumpTable[ps.label];
}

fail:
co->nargs = __nargs;
co->args[0] = __arg0;
co->args[1] = __arg1;
co->args[2] = __arg2;
co->args[3] = __arg3;

}

