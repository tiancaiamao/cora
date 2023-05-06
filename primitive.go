package cora

import (
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

var primSet = &Closure{
	code: func(vm *VM) {
		val := vm.pop()
		key := vm.pop()
		key.(*Symbol).val = val
		vm.ret(val)
	},
	Required: 2,
	Name:     "Set",
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

var primLoad = &Closure{
	code: func(e *VM) {
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
	},
	Required: 2,
	Name:     "load",
}

var primImport = &Closure{
	code: func(vm *VM) {
		pkg := vm.stack[vm.base+1]
		pkgStr := pkg.(String)
		sym := MakeSymbol("*imported*")
		imported := sym.val
		// Avoid repeated load.
		for imported != Nil {
			elem := car(imported)
			if elem == pkg {
				vm.ret(sym)
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
		vm.ret(pkg)
	},
	Required: 1,
	Name:     "import",
}

var primCar = &Closure{
	code: func(vm *VM) {
		y := vm.pop()
		vm.ret(car(y))
	},
	Required: 1,
	Name:     "car",
}

var primCdr = &Closure{
	code: func(vm *VM) {
		y := vm.pop()
		vm.ret(cdr(y))
	},
	Required: 1,
	Name:     "cdr",
}

var primCons = &Closure{
	code: func(vm *VM) {
		x := vm.pop()
		y := vm.pop()
		vm.ret(cons(y, x))
	},
	Required: 2,
	Name:     "cons",
}

var primIsCons = &Closure{
	code: func(vm *VM) {
		x := vm.pop()
		if _, ok := x.(*Cons); ok {
			vm.ret(True)
		} else {
			vm.ret(False)
		}
	},
	Required: 1,
	Name:     "cons?",
}

var primIsSymbol = &Closure{
	code: func(vm *VM) {
		x := vm.pop()
		if _, ok := x.(*Symbol); ok {
			vm.ret(True)
		} else {
			vm.ret(False)
		}
	},
	Required: 1,
	Name:     "symbol?",
}

var genIdx int

var primGenSym = &Closure{
	code: func(vm *VM) {
		obj := vm.pop()
		sym := obj.(*Symbol)
		res := MakeSymbol(fmt.Sprintf("#%s%d", sym.str, genIdx))
		genIdx++
		vm.ret(res)
	},
	Required: 1,
	Name:     "gensym",
}

var primNot = &Closure{
	code: func(vm *VM) {
		obj := vm.pop()
		switch obj {
		case True:
			vm.ret(False)
		case False:
			vm.ret(True)
		default:
			panic("wrong argument for not")
		}
	},
	Required: 1,
	Name:     "not",
}

var primAdd = &Closure{
	code: func(vm *VM) {
		x := vm.pop().(Integer)
		y := vm.pop().(Integer)
		vm.ret(Integer(x + y))
	},
	Required: 2,
	Name:     "Add",
}

var primSub = &Closure{
	code: func(vm *VM) {
		x := vm.pop().(Integer)
		y := vm.pop().(Integer)
		vm.ret(Integer(y - x))
	},
	Required: 2,
	Name:     "Sub",
}

var primMul = &Closure{
	code: func(vm *VM) {
		x := vm.pop().(Integer)
		y := vm.pop().(Integer)
		vm.ret(Integer(x * y))
	},
	Required: 2,
	Name:     "Mul",
}

var primDiv = &Closure{
	code: func(vm *VM) {
		x := vm.pop().(Integer)
		y := vm.pop().(Integer)
		vm.ret(Integer(y / x))
	},
	Required: 2,
	Name:     "Div",
}

var primEQ = &Closure{
	code: func(vm *VM) {
		x := vm.pop()
		y := vm.pop()
		if eq(x, y) {
			vm.ret(True)
		} else {
			vm.ret(False)
		}
	},
	Required: 2,
	Name:     "EQ",
}
