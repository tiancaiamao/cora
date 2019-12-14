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

	// labelSym := MakeSymbol("label")
	// Generate declare...
	// for _, fn := range bc {
	// 	first := Car(fn)
	// 	if ok, pair := isPair(first); ok && pair.car == labelSym {
	// 		fmt.Fprintf(out, "static void %s (struct VM* m);\n", symbolString(car(pair.cdr)))
	// 	} else {
	// 		fmt.Println("???  = ", ObjString(first))
	// 	}
	// }

	fmt.Fprintf(out, "\n\n")

	// Generate each function...
	for _, fn := range bc {
		if err := generateFunc(out, fn); err != nil {
			fmt.Println("err =", err)
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

func generateInst(w *os.File, inst Obj) error {
	kind := GetSymbol(Car(inst))
	switch kind {
	case "mov":
		// (mov SRC DST)
		src := Cadr(inst)
		dst := Car(Cdr(Cdr(inst)))
		fmt.Fprintf(w, "%s = %s;\n", symbolString(dst), symbolString(src))
	case "%const":
		// (const Number DST)
		// (const () DST)
		// (cons "xxx" DST)
		dst := Car(Cdr(Cdr(inst)))
		c := Cadr(inst)
		switch {
		case IsNumber(c):
			fmt.Fprintf(w, "Obj %s = makeNumber(%d);\n", symbolString(dst), GetInteger(Cadr(inst)))
		case IsString(c):
			str := GetString(c)
			fmt.Fprintf(w, "Obj %s = makeString(\"%s\", %d);\n", symbolString(dst), str, len(str))
		case IsSymbol(c):
			fmt.Fprintf(w, "Obj %s = intern(\"%s\");\n", symbolString(dst), symbolString(c))
		case c == Nil:
			fmt.Fprintf(w, "Obj %s = Nil;\n", symbolString(dst))
		case c == True:
			fmt.Fprintf(w, "Obj %s = True;\n", symbolString(dst))
		case c == False:
			fmt.Fprintf(w, "Obj %s = False;\n", symbolString(dst))
		}
	case "%closure-ref":
		dst := Cadr(inst)
		clo := Cadr(Cdr(inst))
		idx := Cadr(Cdr(Cdr(inst)))
		fmt.Fprintf(w, "Obj %s = closureRef(%s, %d);\n", symbolString(dst), symbolString(clo), GetInteger(idx))
	case "%closure":
		// (closure DST FuncName FV0 FV1 ...)
		tmp := ListToSlice(Cdr(inst))
		dst := tmp[0]
		funcName := tmp[1]
		captured := tmp[2:]
		args := fmt.Sprintf("%s , %d, %d", symbolString(funcName),
			len(captured),
			len(captured))
		for i := 0; i < len(captured); i++ {
			args += ", "
			args = args + symbolString(captured[i])
		}
		fmt.Fprintf(w, "Obj %s = makeNative(%s);\n", symbolString(dst), args)
	case "%builtin":
		// (builtin OP (ARG1 ARG2 ...) DST)
		op := Cadr(inst)
		args := Cadr(Cdr(inst))
		dst := Car(Cdr(Cdr(Cdr(inst))))
		generateCBuiltinCall(w, op, args, dst)
	case "%return":
		fmt.Fprintf(w, "return ctxReturn(ctx, %s);\n", symbolString(Cadr(inst)))
	case "%call-def":
		fn := Cadr(inst)
		args := Cadr(Cdr(inst))
		dst := Car(Cdr(Cdr(Cdr(inst))))
		fmt.Fprintf(w, "Obj %s = Call(%s", symbolString(dst), symbolString(fn))
		for _, arg := range ListToSlice(args) {
			fmt.Fprintf(w, ", ")
			fmt.Fprintf(w, symbolString(arg))
		}
		fmt.Fprintf(w, ");\n")
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
	return nil
}

func generateInsts(w *os.File, sexp Obj) error {
	instructs := ListToSlice(sexp)
	for _, inst := range instructs {
		if err := generateInst(w, inst); err != nil {
			return err
		}
	}
	return nil
}

func generateFunc(w *os.File, sexp Obj) error {
	if symbolString(Car(sexp)) != "label" {
		return fmt.Errorf("invalid input:%s\n", ObjString(sexp))
	}
	// (label FuncName (Args ...) Body)
	funcName := symbolString(Cadr(sexp))
	fmt.Fprintf(w, `static void
%s(struct controlFlow *ctx, struct scmNative *self`, funcName)
	args := Cadr(Cdr(sexp))
	for _, arg := range ListToSlice(args) {
		fmt.Fprintf(w, ", Obj %s", symbolString(arg))
	}
	fmt.Fprintf(w, ") {\n")

	if err := generateInsts(w, Cdr(Cdr(Cdr(sexp)))); err != nil {
		return err
	}
	fmt.Fprintf(w, "}\n\n")
	return nil
}

func generateCIfExpr(w *os.File, a, b, c Obj) error {
	fmt.Fprintf(w, "if (%s == True) {\n", symbolString(a))
	if err := generateInsts(w, b); err != nil {
		return err
	}
	fmt.Fprintf(w, "} else {\n")
	if err := generateInsts(w, c); err != nil {
		return err
	}
	fmt.Fprintf(w, "}\n")
	return nil
}

func generateCBuiltinCall(w *os.File, op, args, dst Obj) {
	input := ListToSlice(args)
	switch GetSymbol(op) {
	case "+":
		fmt.Fprintf(w, "Obj %s = builtinAdd(%s, %s);\n", symbolString(dst), symbolString(input[0]), symbolString(input[1]))
	case "*":
		fmt.Fprintf(w, "Obj %s = builtinMul(%s, %s);\n", symbolString(dst), symbolString(input[0]), symbolString(input[1]))
	case "-":
		fmt.Fprintf(w, "Obj %s = builtinSub(%s, %s);\n", symbolString(dst), symbolString(input[0]), symbolString(input[1]))
	case "set":
		fmt.Fprintf(w, "Obj %s = symbolSet(%s, %s);\n", symbolString(dst), symbolString(input[0]), symbolString(input[1]))
	case "halt":
		fmt.Fprintf(w, "m->stack[0] = %s;\nm->pc = NULL;\nreturn;\n}\n", symbolString(input[1]))
	case "=":
		fmt.Fprintf(w, "Obj %s = builtinEqual(%s, %s);\n", symbolString(dst), symbolString(input[0]), symbolString(input[1]))
	case "cons":
		fmt.Fprintf(w, "Obj %s = cons(%s, %s);\n", symbolString(dst), symbolString(input[0]), symbolString(input[1]))
	case "car":
		fmt.Fprintf(w, "Obj %s = car(%s);\n", symbolString(dst), symbolString(input[0]))
	case "cons?":
		fmt.Fprintf(w, "Obj %s = consp(%s);\n", symbolString(dst), symbolString(input[0]))
	case "cdr":
		fmt.Fprintf(w, "Obj %s = cdr(%s);\n", symbolString(dst), symbolString(input[0]))
	default:
		fmt.Fprintf(w, "error, unknown builtin %s\n", GetSymbol(op))
	}
}
