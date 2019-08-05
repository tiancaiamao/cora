package main

import (
	"fmt"
	"os"

	"github.com/tiancaiamao/cora/kl"
)

func main() {
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
		if err := generateFunc(out, fn); err != nil {
			break
		}
	}
	return
}

func symbolString(sym kl.Obj) string {
	str := kl.GetSymbol(sym)
	if str[0] == '#' {
		return str[1:]
	}
	return str
}

func generateFunc(w *os.File, sexp kl.Obj) error {
	instructs := kl.ListToSlice(sexp)
	for _, inst := range instructs {
		kind := kl.GetSymbol(kl.Car(inst))
		switch kind {
		case "savepc":
			// (savepc SRC)
			fmt.Fprintf(w, "m.pc = closureFn(%s)\n", symbolString(kl.Cadr(inst)))
		case "mov":
			// (mov SRC DST)
			src := kl.Cadr(inst)
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			fmt.Fprintf(w, "%s := %s\n", symbolString(dst), symbolString(src))
		case "const":
			// (const Number DST)
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			fmt.Fprintf(w, "%s := MakeInteger(%d)\n", symbolString(dst), kl.GetInteger(kl.Cadr(inst)))
		case "stack-get":
			// (stack-get N DST)
			n := kl.GetInteger(kl.Cadr(inst))
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			fmt.Fprintf(w, "%s := m.stack[%d]\n", symbolString(dst), n)
			fmt.Fprintf(w, "_ = %s\n", symbolString(dst))
		case "stack-set":
			// (stack-set N DST)
			n := kl.GetInteger(kl.Cadr(inst))
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			fmt.Fprintf(w, "m.stack[%d] = %s\n", n, symbolString(dst))
		case "label":
			// (label FuncName)
			funcName := symbolString(kl.Cadr(inst))
			fmt.Fprintf(w, "func %s (m *VM1) {\n", funcName)
		case "closure":
			// (closure (FuncName FV0 FV1 ...) DST)
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			vals := kl.ListToSlice(kl.Cadr(inst))
			var args string
			for i, v := range vals {
				if i > 0 {
					args += ", "
				}
				args = args + symbolString(v)
			}
			fmt.Fprintf(w, "%s := makeClosure(%s)\n", symbolString(dst), args)
		case "intern":
			// (intern Symbol DST)
			sym := kl.Cadr(inst)
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			fmt.Fprintf(w, "%s := MakeSymbol(\"%s\")\n", symbolString(dst), symbolString(sym))
		case "builtin":
			// (builtin (OP ARG1 ARG2 ...) DST)
			src := kl.Cadr(inst)
			dst := kl.Car(kl.Cdr(kl.Cdr(inst)))
			generateBuiltinCall(w, src, dst)
		case "jump":
			// (jump)
			fmt.Fprintf(w, "return\n}\n")
		case "halt":
			// (halt)
			fmt.Fprintf(w, "m.pc = nil\nreturn\n}\n")
		case "if":
		default:
			return fmt.Errorf("unknown instruct: %s", kind)
		}
	}
	return nil
}

func generateBuiltinCall(w *os.File, src, dst kl.Obj) {
	input := kl.ListToSlice(src)
	switch kl.GetSymbol(input[0]) {
	case "+":
		fmt.Fprintf(w, "%s := PrimNumberAdd(%s, %s)\n", symbolString(dst), symbolString(input[1]), symbolString(input[2]))
	case "*":
		fmt.Fprintf(w, "%s := primNumberMultiply(%s, %s)\n", symbolString(dst), symbolString(input[1]), symbolString(input[2]))
	case "set":
		fmt.Fprintf(w, "%s := funSet(%s, %s)\n", symbolString(dst), symbolString(input[1]), symbolString(input[2]))
		fmt.Fprintf(w, "_ = %s\n", symbolString(dst))
	default:
		fmt.Fprintf(w, "error, unknown builtin %s\n", kl.GetSymbol(input[0]))
	}
}
