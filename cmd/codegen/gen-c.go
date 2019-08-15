package main

import (
	"fmt"
	"os"

	"github.com/tiancaiamao/cora/kl"
)

func genC() {
	if len(os.Args) != 2 {
		fmt.Println("usage: ./codegen xxx.bc")
		os.Exit(-1)
	}

	f, err := os.Open(os.Args[1])
	if err != nil {
		fmt.Println("open file", err)
		os.Exit(-1)
	}
	defer f.Close()

	r := kl.NewSexpReader(f)
	sexp, err := r.Read()
	if err != nil {
		fmt.Println("read sexp", err)
	}

	out, err := os.Create("a.go.txt")
	if err != nil {
		fmt.Println("create output", err)
		os.Exit(-1)
	}
	defer out.Close()

	bc := kl.ListToSlice(sexp)
	for _, fn := range bc {
		if err := generateCFunc(out, fn); err != nil {
			fmt.Println(err)
			break
		}
	}
	return
}

func generateCFunc(w *os.File, sexp kl.Obj) error {
	var finalBrack bool
	instructs := kl.ListToSlice(sexp)
	for _, inst := range instructs {
		kind := kl.GetSymbol(kl.Car(inst))
		switch kind {
		case "savepc":
			// (savepc SRC)
			fmt.Fprintf(w, "m->pc = closureFn(%s);\n", symbolString(kl.Cadr(inst)))
		case "mov":
			// (mov SRC DST)
			src := kl.Cadr(inst)
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			fmt.Fprintf(w, "%s = %s;\n", symbolString(dst), symbolString(src))
		case "const":
			// (const Number DST)
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			fmt.Fprintf(w, "Obj %s = %d;\n", symbolString(dst), kl.GetInteger(kl.Cadr(inst))<<1)
		case "stack-get":
			// (stack-get N DST)
			n := kl.GetInteger(kl.Cadr(inst))
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			fmt.Fprintf(w, "Obj %s = m->stack[%d];\n", symbolString(dst), n)
		case "stack-set":
			// (stack-set N DST)
			n := kl.GetInteger(kl.Cadr(inst))
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			fmt.Fprintf(w, "m->stack[%d] = %s;\n", n, symbolString(dst))
		case "closure-get":
			// (closure-get #reg19610 0 #reg19757)
			clo := kl.Cadr(inst)
			n := kl.GetInteger(kl.Car(kl.Cdr(kl.Cdr(inst))))
			res := kl.Car(kl.Cdr(kl.Cdr(kl.Cdr(inst))))
			fmt.Fprintf(w, "Obj %s = closureRef(%s, %d);\n",
				symbolString(res), symbolString(clo), n)
		case "label":
			// (label FuncName)
			funcName := symbolString(kl.Cadr(inst))
			fmt.Fprintf(w, "static void\n%s (struct VM* m) {\n", funcName)
			finalBrack = true
		case "closure":
			// (closure (FuncName FV0 FV1 ...) DST)
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			vals := kl.ListToSlice(kl.Cadr(inst))
			args := symbolString(vals[0]) + fmt.Sprintf(", %d", len(vals)-1)
			if len(vals) > 1 {
				for i := 1; i < len(vals); i++ {
					args += ", "
					args = args + symbolString(vals[i])
				}
			}
			fmt.Fprintf(w, "Obj %s = makeClosure(%s);\n", symbolString(dst), args)
		case "intern":
			// (intern Symbol DST)
			sym := kl.Cadr(inst)
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			fmt.Fprintf(w, "Obj %s = intern(\"%s\");\n", symbolString(dst), symbolString(sym))
		case "global":
			sym := kl.Cadr(inst)
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			fmt.Fprintf(w, "Obj %s = symbolGet(intern(\"%s\"));\n", symbolString(dst), symbolString(sym))
		case "builtin":
			// (builtin (OP ARG1 ARG2 ...) DST)
			src := kl.Cadr(inst)
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			generateCBuiltinCall(w, src, dst)
		case "jump":
			// (jump)
			fmt.Fprintf(w, "return;\n")
			if finalBrack {
				fmt.Fprintf(w, "}\n")
			}
		case "if":
			// (if a b c)
			a := kl.Cadr(inst)
			b := kl.Car(kl.Cdr(kl.Cdr(inst)))
			c := kl.Car(kl.Cdr(kl.Cdr(kl.Cdr(inst))))
			if err := generateCIfExpr(w, a, b, c); err != nil {
				return err
			}
		default:
			return fmt.Errorf("unknown instruct: %s\n", kind)
		}
	}
	return nil
}

func generateCIfExpr(w *os.File, a, b, c kl.Obj) error {
	fmt.Fprintf(w, "if (%s == True) {\n", symbolString(a))
	if err := generateCFunc(w, b); err != nil {
		return err
	}
	fmt.Fprintf(w, "} else {\n")
	if err := generateCFunc(w, c); err != nil {
		return err
	}
	fmt.Fprintf(w, "}\n}\n")
	return nil
}

func generateCBuiltinCall(w *os.File, src, dst kl.Obj) {
	input := kl.ListToSlice(src)
	switch kl.GetSymbol(input[0]) {
	case "+":
		fmt.Fprintf(w, "Obj %s = %s + %s;\n", symbolString(dst), symbolString(input[1]), symbolString(input[2]))
	case "*":
		fmt.Fprintf(w, "Obj %s = primNumberMultiply(%s, %s);\n", symbolString(dst), symbolString(input[1]), symbolString(input[2]))
	case "-":
		fmt.Fprintf(w, "Obj %s = %s - %s;\n", symbolString(dst), symbolString(input[1]), symbolString(input[2]))
	case "set":
		fmt.Fprintf(w, "Obj %s = symbolSet(%s, %s);\n", symbolString(dst), symbolString(input[1]), symbolString(input[2]))
	case "halt":
		fmt.Fprintf(w, "m->stack[0] = %s;\nm->pc = NULL;\nreturn;\n}\n", symbolString(input[1]))
	case "=":
		fmt.Fprintf(w, "Obj %s = PrimEqual(%s, %s);\n", symbolString(dst), symbolString(input[1]), symbolString(input[2]))
	default:
		fmt.Fprintf(w, "error, unknown builtin %s\n", kl.GetSymbol(input[0]))
	}
}
