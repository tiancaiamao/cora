package cora

import (
	"bufio"
	"errors"
	"fmt"
	"io"
	"os"
	"path"
)

// ==================================
// 	Library and primitive functions
// ==================================

func cons(a, b Obj) Obj {
	return &Cons{a, b}
}

func car(o Obj) Obj {
	return o.(*Cons).car
}

func cdr(o Obj) Obj {
	return o.(*Cons).cdr
}

func cadr(o Obj) Obj {
	return car(cdr(o))
}

func cddr(o Obj) Obj {
	return cdr(cdr(o))
}

func caddr(o Obj) Obj {
	return car(cdr(cdr(o)))
}

func reverse(o Obj) Obj {
	ret := Nil
	for o != Nil {
		ret = cons(car(o), ret)
		o = cdr(o)
	}
	return ret
}

func listLength(l Obj) int {
	count := 0
	for l != Nil {
		count++
		l = cdr(l)
	}
	return count
}

func sliceToList(s []Obj) Obj {
	ret := Nil
	for i := len(s) - 1; i >= 0; i-- {
		x := s[i]
		ret = cons(x, ret)
	}
	return ret
}

func listToSlice(l Obj) []Obj {
	ret := make([]Obj, 0, 5)
	for l != Nil {
		ret = append(ret, car(l))
		l = cdr(l)
	}
	return ret
}

func tempList(n int) Obj {
	ret := Nil
	for ; n > 0; n-- {
		sym := MakeSymbol(fmt.Sprintf("#tmp%d", genIdx))
		genIdx++
		ret = cons(sym, ret)
	}
	return ret
}

func listAppend(l1, l2 Obj) Obj {
	if l1 == Nil {
		return l2
	}
	return cons(car(l1), listAppend(cdr(l1), l2))
}

func assq(v, list Obj) int {
	idx := 0
	for list != Nil {
		if car(list) == v {
			return idx
		}
		idx++
		list = cdr(list)
	}
	return -1
}

func iscons(x Obj) bool {
	_, ok := x.(*Cons)
	return ok
}

func eq(x, y Obj) bool {
	if x == y {
		return true
	}

	if iscons(x) && iscons(y) {
		if !eq(car(x), car(y)) {
			return false
		}
		return eq(cdr(x), cdr(y))
	}

	return false
}

type primitiveDesc struct {
	name     string
	required int
	fn       func(vm *VM)
}

var primDescs = []primitiveDesc{
	{name: "set", required: 2, fn: primSet},
	{name: "load", required: 2, fn: primLoad},
	{name: "import", required: 1, fn: primImport},
	{name: "car", required: 1, fn: primCar},
	{name: "cdr", required: 1, fn: primCdr},
	{name: "cons", required: 2, fn: primCons},
	{name: "cons?", required: 1, fn: primIsCons},
	{name: "+", required: 2, fn: primAdd},
	{name: "-", required: 2, fn: primSub},
	{name: "*", required: 2, fn: primMul},
	{name: "/", required: 2, fn: primDiv},
	{name: "=", required: 2, fn: primEQ},
	{name: ">", required: 2, fn: primGT},
	{name: "<", required: 2, fn: primLT},
	{name: "gensym", required: 1, fn: primGenSym},
	{name: "symbol?", required: 1, fn: primIsSymbol},
	{name: "not", required: 1, fn: primNot},
	{name: "integer?", required: 1, fn: primIsInteger},
	{name: "string?", required: 1, fn: primIsString},
}

var primitives map[string]primitiveDesc

type instrPrim func(vm *VM)

func (i instrPrim) Exec(vm *VM) {
	i(vm)
}

func (i instrPrim) MarshalText(to io.Writer) error {
	panic("instr prim marshal text not implement")
}

func (i instrPrim) Marshal(to io.Writer) error {
	return errors.New("instrPrim not implemented")
}

func primSet(vm *VM) {
	val := vm.pop()
	key := vm.pop()
	key.(*Symbol).val = val
	vm.val = val
}

func loadFile(e *VM, filePath string, pkg string) error {
	if _, err := os.Stat(filePath); err != nil {
		return err
	}

	f, err := os.Open(filePath)
	if err != nil {
		return err
	}
	defer f.Close()

	r := NewSexpReader(f, pkg)
	for {
		exp, err := r.Read()
		if err != nil {
			if err != io.EOF {
				return err
			}
			break
		}

		exp = e.MacroExpand(exp)

		e.Eval(exp)
	}
	return nil
}

func primLoad(e *VM) {
	pkg := e.pop()
	file := e.pop()
	tmp, ok := file.(String)
	if !ok {
		panic("arg1 must be string")
		return
	}
	err := loadFile(e, string(tmp), string(pkg.(String)))
	if err != nil {
		panic(err)
	}
	e.val = MakeSymbol("loaded")
}

func primImport(vm *VM) {
	pkg := vm.pop()
	pkgStr := pkg.(String)
	sym := MakeSymbol("*imported*")
	imported := sym.val
	// Avoid repeated load.
	for imported != Nil {
		elem := car(imported)
		if elem == pkg {
			vm.val = sym
			return
		}
		imported = cdr(imported)
	}
	coraPath := os.Getenv("CORAPATH")
	if len(coraPath) == 0 {
		dir, err := os.UserHomeDir()
		if err != nil {
			panic(err)
		}
		coraPath = path.Join(dir, ".corapath")
	}
	filePath := path.Join(coraPath, string(pkgStr)+".cora")
	err := loadFile(vm, filePath, string(pkgStr))
	if err != nil {
		panic(err)
	}
	vm.val = pkg
}

func primCar(vm *VM) {
	y := vm.pop()
	vm.val = car(y)
}

func primCdr(vm *VM) {
	y := vm.pop()
	vm.val = cdr(y)
}

func primCons(vm *VM) {
	x := vm.pop()
	y := vm.pop()
	vm.val = cons(y, x)
}

func primIsCons(vm *VM) {
	x := vm.pop()
	if _, ok := x.(*Cons); ok {
		vm.val = True
	} else {
		vm.val = False
	}
}

func primIsSymbol(vm *VM) {
	x := vm.pop()
	if _, ok := x.(*Symbol); ok {
		vm.val = True
	} else {
		vm.val = False
	}
}

func primIsString(vm *VM) {
	x := vm.pop()
	if _, ok := x.(String); ok {
		vm.val = True
	} else {
		vm.val = False
	}
}

func primIsInteger(vm *VM) {
	x := vm.pop()
	if _, ok := x.(Integer); ok {
		vm.val = True
	} else {
		vm.val = False
	}
}

var genIdx int

func primGenSym(vm *VM) {
	obj := vm.pop()
	sym := obj.(*Symbol)
	res := MakeSymbol(fmt.Sprintf("#%s%d", sym.str, genIdx))
	genIdx++
	vm.val = res
}

func primNot(vm *VM) {
	obj := vm.pop()
	switch obj {
	case True:
		vm.val = False
	case False:
		vm.val = True
	default:
		panic("wrong argument for not")
	}
}

func primAdd(vm *VM) {
	x := vm.pop().(Integer)
	y := vm.pop().(Integer)
	vm.val = Integer(x + y)
}

func primSub(vm *VM) {
	x := vm.pop().(Integer)
	y := vm.pop().(Integer)
	vm.val = Integer(y - x)
}

func primMul(vm *VM) {
	x := vm.pop().(Integer)
	y := vm.pop().(Integer)
	vm.val = Integer(x * y)
}

func primDiv(vm *VM) {
	x := vm.pop().(Integer)
	y := vm.pop().(Integer)
	vm.val = Integer(y / x)
}

func primEQ(vm *VM) {
	x := vm.pop()
	y := vm.pop()
	if eq(x, y) {
		vm.val = True
	} else {
		vm.val = False
	}
}

func primGT(vm *VM) {
	y := vm.pop().(Integer)
	x := vm.pop().(Integer)
	if x > y {
		vm.val = True
	} else {
		vm.val = False
	}
}

func primLT(vm *VM) {
	y := vm.pop().(Integer)
	x := vm.pop().(Integer)
	if x < y {
		vm.val = True
	} else {
		vm.val = False
	}
}

func readFileAsSexp(vm *VM) {
	path := vm.stack[vm.base+1]
	pkg := vm.stack[vm.base+2]
	filePath := string(path.(String))
	if _, err := os.Stat(filePath); err != nil {
		panic(err)
	}

	f, err := os.Open(filePath)
	if err != nil {
		panic(err)
	}
	defer f.Close()

	res := Nil
	r := NewSexpReader(f, string(pkg.(String)))
	for {
		exp, err := r.Read()
		if err != nil {
			if err != io.EOF {
				panic(err)
			}
			break
		}
		res = cons(exp, res)
	}
	res = reverse(res)
	vm.ret(res)
}

func printCons1(to io.Writer, o Obj) {
	var stack []Obj
	stack = append(stack, o)
	stack = append(stack, MakeSymbol("("))
	for len(stack) > 0 {
		curr := stack[len(stack)-1]
		stack = stack[:len(stack)-1]
		if curr == Nil {
			fmt.Fprintf(to, ")")
			continue
		}
		switch raw := curr.(type) {
		case *Cons:
			_, ok := raw.cdr.(*Cons)
			if !ok && raw.cdr != Nil {
				stack = append(stack, MakeSymbol(")"))
			}
			stack = append(stack, raw.cdr)
			if !ok && raw.cdr != Nil {
				stack = append(stack, MakeSymbol("."))
			}

			_, ok = raw.car.(*Cons)
			stack = append(stack, raw.car)
			if ok {
				stack = append(stack, MakeSymbol("("))
			}
		default:
			fmt.Fprintf(to, " %s", curr.String())
		}
	}
}

func writeSexpToFile(vm *VM) {
	path := vm.stack[vm.base+1]
	obj := vm.stack[vm.base+2]
	filePath := string(path.(String))
	file, err := os.Create(filePath)
	if err != nil {
		panic(err)
	}
	defer file.Close()
	w := bufio.NewWriter(file)
	printCons(w, obj, true)
	w.Flush()
	vm.ret(MakeSymbol("done"))
}
