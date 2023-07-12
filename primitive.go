package cora

import (
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
	id uint8
	name string
	required int
	fn func(vm *VM)
}

var primDescs = []primitiveDesc{
	{id: 1, name: "set", required: 2, fn: primSet},
	{id: 2, name: "load", required: 2, fn: primLoad},
	{id: 3, name: "import", required: 1, fn: primImport},
	{id: 4, name: "car", required: 1, fn: primCar},
	{id: 5, name: "cdr", required: 1, fn: primCdr},
	{id: 6, name: "cons", required: 2, fn: primCons},
	{id: 7, name: "cons?", required: 1, fn: primIsCons},
	{id: 8, name: "+", required: 2, fn: primAdd},
	{id: 9, name: "-", required: 2, fn: primSub},
	{id: 10, name: "*", required: 2, fn: primMul},
	{id: 11, name: "/", required: 2, fn: primDiv},
	{id: 12, name: "=", required: 2, fn: primEQ},
	{id: 13, name: "gensym", required: 1, fn: primGenSym},
	{id: 14, name: "symbol?", required: 1, fn: primIsSymbol},
	{id: 15, name: "not", required: 1, fn: primNot},
	{id: 16, name: "integer?", required: 1, fn: primIsInteger},
	{id: 17, name: "string?", required: 1, fn: primIsString},
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
	e.ret(MakeSymbol("loaded"))
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

func primIsString (vm *VM) {
	x := vm.pop()
	if _, ok := x.(String); ok {
		vm.val = True
	} else {
		vm.val = False
	}
}

func primIsInteger (vm *VM) {
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

func primMul (vm *VM) {
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
