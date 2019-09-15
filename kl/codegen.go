package kl

import (
	"fmt"
	"os"
)

func GenerateC(args ...Obj) Obj {
	filePath := mustString(args[0])
	bc := ListToSlice(args[1])

	out, err := os.Create(filePath)
	if err != nil {
		return MakeError(fmt.Sprintf("open file fail %s", err))
	}
	defer out.Close()

	// Generate "#include ..."
	fmt.Fprintf(out, "#include \"runtime.h\"\n")
	fmt.Fprintf(out, "#include <stdlib.h>\n\n")

	labelSym := MakeSymbol("label")
	// Generate declare...
	for _, fn := range bc {
		first := Car(fn)
		if ok, pair := isPair(first); ok && pair.car == labelSym {
			fmt.Fprintf(out, "static void %s (struct VM* m);\n", symbolString(car(pair.cdr)))
		} else {
			fmt.Println("???  = ", ObjString(first))
		}
	}

	fmt.Fprintf(out, "\n\n")

	// Generate each function...
	for _, fn := range bc {
		if err := generateFunc(out, fn); err != nil {
			return MakeError(err.Error())
		}
	}
	return True
}

func symbolString(sym Obj) string {
	str := GetSymbol(sym)
	if str[0] == '#' {
		return str[1:]
	}
	return str
}

func generateFunc(w *os.File, sexp Obj) error {
	var finalBrack bool
	instructs := ListToSlice(sexp)
	for _, inst := range instructs {
		kind := GetSymbol(Car(inst))
		switch kind {
		case "savepc":
			// (savepc SRC)
			fmt.Fprintf(w, "m->pc = closureFn(%s);\n", symbolString(Cadr(inst)))
		case "mov":
			// (mov SRC DST)
			src := Cadr(inst)
			dst := Car(Cdr(Cdr(inst)))
			fmt.Fprintf(w, "%s = %s;\n", symbolString(dst), symbolString(src))
		case "const":
			// (const Number DST)
			// (const () DST)
			// (cons "xxx" DST)
			dst := Car(Cdr(Cdr(inst)))
			c := Cadr(inst)
			switch {
			case IsNumber(c):
				fmt.Fprintf(w, "Obj %s = %d;\n", symbolString(dst), GetInteger(Cadr(inst))<<1)
			case IsString(c):
				str := GetString(c)
				fmt.Fprintf(w, "Obj %s = makeString(\"%s\", %d);\n", symbolString(dst), str, len(str))
			case c == Nil:
				fmt.Fprintf(w, "Obj %s = Nil;\n", symbolString(dst))
			case c == True:
				fmt.Fprintf(w, "Obj %s = True;\n", symbolString(dst))
			case c == False:
				fmt.Fprintf(w, "Obj %s = False;\n", symbolString(dst))
			}
		case "stack-get":
			// (stack-get N DST)
			n := GetInteger(Cadr(inst))
			dst := Car(Cdr(Cdr(inst)))
			fmt.Fprintf(w, "Obj %s = m->stack[%d];\n", symbolString(dst), n)
		case "stack-set":
			// (stack-set N DST)
			n := GetInteger(Cadr(inst))
			dst := Car(Cdr(Cdr(inst)))
			fmt.Fprintf(w, "m->stack[%d] = %s;\n", n, symbolString(dst))
		case "closure-get":
			// (closure-get #reg19610 0 #reg19757)
			clo := Cadr(inst)
			n := GetInteger(Car(Cdr(Cdr(inst))))
			res := Car(Cdr(Cdr(Cdr(inst))))
			fmt.Fprintf(w, "Obj %s = closureRef(%s, %d);\n",
				symbolString(res), symbolString(clo), n)
		case "label":
			// (label FuncName)
			funcName := symbolString(Cadr(inst))
			fmt.Fprintf(w, "static void\n%s (struct VM* m) {\n", funcName)
			finalBrack = true
		case "closure":
			// (closure (FuncName FV0 FV1 ...) DST)
			dst := Car(Cdr(Cdr(inst)))
			vals := ListToSlice(Cadr(inst))
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
			sym := Cadr(inst)
			dst := Car(Cdr(Cdr(inst)))
			fmt.Fprintf(w, "Obj %s = intern(\"%s\");\n", symbolString(dst), symbolString(sym))
		case "global":
			sym := Cadr(inst)
			dst := Car(Cdr(Cdr(inst)))
			fmt.Fprintf(w, "Obj %s = symbolGet(intern(\"%s\"));\n", symbolString(dst), symbolString(sym))
		case "builtin":
			// (builtin (OP ARG1 ARG2 ...) DST)
			src := Cadr(inst)
			dst := Car(Cdr(Cdr(inst)))
			generateCBuiltinCall(w, src, dst)
		case "jump":
			// (jump)
			fmt.Fprintf(w, "return;\n")
			if finalBrack {
				fmt.Fprintf(w, "}\n")
			}
		case "if":
			// (if a b c)
			a := Cadr(inst)
			b := Car(Cdr(Cdr(inst)))
			c := Car(Cdr(Cdr(Cdr(inst))))
			if err := generateCIfExpr(w, a, b, c); err != nil {
				return err
			}
		default:
			return fmt.Errorf("unknown instruct: %s\n", kind)
		}
	}
	return nil
}

func generateCIfExpr(w *os.File, a, b, c Obj) error {
	fmt.Fprintf(w, "if (%s == True) {\n", symbolString(a))
	if err := generateFunc(w, b); err != nil {
		return err
	}
	fmt.Fprintf(w, "} else {\n")
	if err := generateFunc(w, c); err != nil {
		return err
	}
	fmt.Fprintf(w, "}\n}\n")
	return nil
}

func generateCBuiltinCall(w *os.File, src, dst Obj) {
	input := ListToSlice(src)
	switch GetSymbol(input[0]) {
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
	case "cons":
		fmt.Fprintf(w, "Obj %s = cons(%s, %s);\n", symbolString(dst), symbolString(input[1]), symbolString(input[2]))
	case "car":
		fmt.Fprintf(w, "Obj %s = car(%s);\n", symbolString(dst), symbolString(input[1]))
	case "cons?":
		fmt.Fprintf(w, "Obj %s = consp(%s);\n", symbolString(dst), symbolString(input[1]))
	case "cdr":
		fmt.Fprintf(w, "Obj %s = cdr(%s);\n", symbolString(dst), symbolString(input[1]))
	default:
		fmt.Fprintf(w, "error, unknown builtin %s\n", GetSymbol(input[0]))
	}
}
