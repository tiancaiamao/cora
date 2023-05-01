package re

import (
	"bytes"
	"fmt"
	"io"
	"math"
	"reflect"
	"strconv"
)

// =======================================
//          Object representation
// =======================================

var _ Obj = Integer(0)
var _ Obj = Float64(0.0)
var _ Obj = String("")
var _ Obj = True
var _ Obj = False
var _ Obj = Nil
var _ Obj = &Symbol{}
var _ Obj = &Closure{}
var _ Obj = &Cons{}
var _ Obj = Vector{}

type Obj interface {
	String() string
}

type Integer int64

func (i Integer) String() string {
	return strconv.FormatInt(int64(i), 10)
}

type Float64 float64

func (f Float64) String() string {
	return strconv.FormatFloat(float64(f), 'E', -1, 64)
}

// isInteger determinate whether a float64 is actually a precise integer.
// Judge is according to IEEE754 standard.
func isPreciseInteger(f float64) bool {
	exp := math.Ilogb(f)
	if exp < 0 && exp != math.MinInt32 {
		return false
	}

	if exp >= 52 {
		return true
	}

	bits := math.Float64bits(f)
	return (bits << uint(12+exp)) == 0
}

func MakeNumber(f float64) Obj {
	if isPreciseInteger(f) {
		return Integer(int(f))
	}
	return Float64(f)
}

type booleanObj bool

func (b booleanObj) String() string {
	switch b {
	case True:
		return "True"
	case False:
		return "False"
	default:
		panic("bool type error")
	}
}

var True = booleanObj(true)
var False = booleanObj(false)

type nilObj struct{}

func (_ nilObj) String() string {
	return "()"
}

var Nil Obj = nilObj{}

type Symbol struct {
	str string
	val Obj
}

func (s *Symbol) String() string {
	return s.str
}

var symbolMap = make(map[string]*Symbol)

var symQuote, symIf, symDo, symLambda Obj
var symMacroExpand *Symbol
var symCond, symAnd, symOr, symLet, symType, symFreeze, symTrapError, symSimpleError Obj

func init() {
	symIf = MakeSymbol("if")
	symDo = MakeSymbol("do")
	symLambda = MakeSymbol("lambda")
	symQuote = MakeSymbol("quote")
	symMacroExpand = MakeSymbol("macroexpand")
	symLet = MakeSymbol("let")
	symCond = MakeSymbol("cond")
	symAnd = MakeSymbol("and")
	symOr = MakeSymbol("or")
	symTrapError = MakeSymbol("trap-error")
	symSimpleError = MakeSymbol("simple-error")

	MakeSymbol("car").val = primCar
	MakeSymbol("cdr").val = primCdr
	MakeSymbol("cons").val = primCons
	MakeSymbol("cons?").val = primIsCons
	MakeSymbol("+").val = primAdd
	MakeSymbol("-").val = primSub
	MakeSymbol("*").val = primMul
	MakeSymbol("/").val = primDiv
	MakeSymbol("=").val = primEQ
	MakeSymbol("set").val = primSet
	MakeSymbol("gensym").val = primGenSym
	MakeSymbol("symbol?").val = primIsSymbol
	MakeSymbol("not").val = primNot
	MakeSymbol("load").val = primLoad
	MakeSymbol("import").val = primImport
	MakeSymbol("*imported*").val = Nil
}

func MakeSymbol(str string) *Symbol {
	if s, ok := symbolMap[str]; ok {
		return s
	}
	s := &Symbol{
		str: str,
	}
	symbolMap[str] = s
	return s
}

type String string

func (s String) String() string {
	return strconv.Quote(string(s))
}

type Cons struct {
	car Obj
	cdr Obj
}

func (c *Cons) String() string {
	var buf bytes.Buffer
	printCons(&buf, c, true)
	return buf.String()
}

func printCons(to io.Writer, o Obj, start bool) {
	if start {
		fmt.Fprintf(to, "(")
	} else {
		fmt.Fprintf(to, " ")
	}
	fmt.Fprintf(to, "%s", car(o).String())

	tl := cdr(o)
	if tl == Nil {
		fmt.Fprintf(to, ")")
	} else if _, ok := tl.(*Cons); ok {
		printCons(to, tl, false)
	} else {
		fmt.Fprintf(to, " . ")
		fmt.Fprintf(to, "%s", tl)
		fmt.Fprintf(to, ")")
	}
}

type Closure struct {
	closed   []Obj
	code     func(vm *VM)
	Required int
	Name     string
}

func (c *Closure) String() string {
	ret := "#closure"
	if c.Name != "" {
		ret += c.Name
	}
	return ret
}

type Vector []Obj

func (v Vector) String() string {
	return "#vector"
}

// =======================================
// 	VM and instructions
// =======================================

type returnAddr struct {
	pc   func(*VM)
	base int
	pos  int
}

type VM struct {
	next      func(*VM)
	stack     []Obj
	base      int
	val       Obj
	callStack []returnAddr
}

func New() *VM {
	return &VM{}
}

func (vm *VM) pop() Obj {
	ret := vm.stack[len(vm.stack)-1]
	vm.stack = vm.stack[:len(vm.stack)-1]
	return ret
}

func (vm *VM) ret(x Obj) {
	vm.val = x
	ret := vm.callStack[len(vm.callStack)-1]
	vm.callStack = vm.callStack[:len(vm.callStack)-1]
	vm.base = ret.base
	vm.stack = vm.stack[:ret.pos]
	vm.next = ret.pc
}

func (vm *VM) Eval(exp Obj) Obj {
	return eval(vm, exp)
}

func trampoline(vm *VM, code func(*VM)) {
	vm.next = code
	for vm.next != nil {
		code = vm.next
		vm.next = nil
		code(vm)
	}
}

func exit(vm *VM) {
	vm.ret(vm.val)
}

func eval(vm *VM, exp Obj) Obj {
	exp1, _ := closureConvert(exp, Nil, Nil, nil)
	code := compile(exp1, Nil, Nil, exit)
	vm.callStack = append(vm.callStack, returnAddr{
		pc:   nil,
		base: vm.base,
		pos:  len(vm.stack),
	})
	trampoline(vm, code)
	return vm.val
}

func (vm *VM) MacroExpand(exp Obj) Obj {
	return macroExpand(vm, exp)
}

func macroExpand(vm *VM, exp Obj) Obj {
	if symMacroExpand.val == nil || symMacroExpand.val == Nil {
		return exp
	}

	f := symMacroExpand
	arg := cons(symQuote, cons(exp, Nil))
	input := cons(f, cons(arg, Nil))
	output := eval(vm, input)
	return output
}

// =====================================
// 	Compiler utilities
// =====================================

func closureConvert(exp Obj, locals Obj, env Obj, frees []Obj) (Obj, []Obj) {
	switch exp.(type) {
	case nilObj, booleanObj, Integer, String, Float64:
		return exp, frees
	case *Symbol:
		if assq(exp, locals) < 0 {
			for env != Nil {
				x := car(env)
				for x != Nil {
					if car(x) == exp {
						frees = append(frees, exp)
						return exp, frees
					}
					x = cdr(x)
				}
				env = cdr(env)
			}
		}
		return exp, frees
	}
	raw := exp.(*Cons)
	switch raw.car {
	case symQuote:
		return exp, frees
	case symIf:
		var test, succ, fail Obj
		test, frees = closureConvert(cadr(exp), locals, env, frees)
		succ, frees = closureConvert(caddr(exp), locals, env, frees)
		fail, frees = closureConvert(caddr(cdr(exp)), locals, env, frees)
		return cons(symIf, cons(test, cons(succ, cons(fail, Nil)))), frees
	case symDo:
		var x, y Obj
		x, frees = closureConvert(cadr(exp), locals, env, frees)
		y, frees = closureConvert(caddr(exp), locals, env, frees)
		return cons(symDo, cons(x, cons(y, Nil))), frees
	case symLambda:
		args := cadr(exp)
		body := caddr(exp)
		body1, frees1 := closureConvert(body, args, cons(locals, env), nil)
		for _, free := range frees1 {
			if assq(free, locals) < 0 {
				frees = append(frees, free)
			}
		}
		return cons(symLambda, cons(args, cons(sliceToList(frees1), cons(body1, Nil)))), frees
	}
	ret := Nil
	for ; exp != Nil; exp = cdr(exp) {
		var tmp Obj
		tmp, frees = closureConvert(car(exp), locals, env, frees)
		ret = cons(tmp, ret)
	}
	return reverse(ret), frees
}

func compile(exp Obj, locals Obj, frees Obj, next func(*VM)) func(vm *VM) {
	switch raw := exp.(type) {
	case nilObj, booleanObj, Integer, String, Float64:
		return func(vm *VM) {
			vm.val = exp
			vm.next = next
		}
	case *Symbol:
		idx := assq(exp, locals)
		if idx >= 0 {
			return func(vm *VM) {
				vm.val = vm.stack[vm.base+idx+1]
				vm.next = next
			}
		}
		idx = assq(exp, frees)
		if idx >= 0 {
			return func(vm *VM) {
				closure := vm.stack[vm.base].(*Closure)
				vm.val = closure.closed[idx]
				vm.next = next
			}
		}
		return func(vm *VM) {
			if raw.val == nil {
				panic("undefined symbol:" + raw.str)
			}
			vm.val = raw.val
			vm.next = next
		}
	}

	raw := exp.(*Cons)
	switch raw.car {
	case symQuote:
		return func(vm *VM) {
			vm.val = car(raw.cdr)
			vm.next = next
		}
	case symIf:
		thenCont := compile(cadr(raw.cdr), locals, frees, next)
		elseCont := compile(caddr(raw.cdr), locals, frees, next)
		return compile(car(raw.cdr), locals, frees, func(vm *VM) {
			switch vm.val {
			case True:
				thenCont(vm)
			case False:
				elseCont(vm)
			default:
				panic("if need to be true / false")
			}
		})
	case symDo:
		y := compile(caddr(raw), locals, frees, next)
		return compile(cadr(raw), locals, frees, func(vm *VM) {
			y(vm)
		})
	case symLambda:
		args := cadr(exp)
		frees1 := caddr(exp)
		body := caddr(cdr(exp))
		code := compile(body, args, frees1, exit)
		return compileList(frees1, locals, frees, func(vm *VM) {
			vm.val = &Closure{
				closed:   append([]Obj{}, vm.stack[len(vm.stack)-listLength(frees1):]...),
				code:     code,
				Required: listLength(args),
			}
			vm.stack = vm.stack[:len(vm.stack)-listLength(frees1)]
			vm.next = next
		})
	}

	// compile call
	nargs := listLength(exp)
	tail := reflect.ValueOf(next).Pointer() == reflect.ValueOf(exit).Pointer()
	var cont func(vm *VM)
	if tail {
		cont = func(vm *VM) {
			// prepare arguments
			copy(vm.stack[vm.base:], vm.stack[len(vm.stack)-nargs:])
			vm.stack = vm.stack[:vm.base+nargs]
			// make the call
			makeTheCall(vm)
		}
	} else {
		cont = func(vm *VM) {
			// normal call
			// save the stack
			newBase := len(vm.stack) - nargs
			vm.callStack = append(vm.callStack, returnAddr{
				pc:   next,
				base: vm.base,
				pos:  newBase,
			})
			vm.base = newBase
			// make the call
			makeTheCall(vm)
		}
	}
	return compileList(exp, locals, frees, cont)
}

// makeTheCall handles the curry / partial calling protocol.
func makeTheCall(vm *VM) {
	fn := vm.stack[vm.base].(*Closure)
	required := fn.Required + 1
	provided := len(vm.stack) - vm.base
	switch {
	case provided == required:
		vm.next = fn.code
	case provided < required:
		closed := append([]Obj{}, vm.stack[len(vm.stack)-provided:]...)
		vm.val = &Closure{
			code: func(vm *VM) {
				tmp := append([]Obj{}, vm.stack[vm.base+1:]...)
				vm.stack = append(vm.stack[:vm.base], closed...)
				vm.stack = append(vm.stack, tmp...)
				vm.next = makeTheCall
			},
			Required: required - provided,
		}
		vm.next = exit
	case provided > required:
		newBase := len(vm.stack)
		vm.stack = append(vm.stack, vm.stack[vm.base:vm.base+required]...)
		vm.callStack = append(vm.callStack, returnAddr{
			pc: func(vm *VM) {
				vm.stack[vm.base] = vm.val
				vm.stack = append(vm.stack[:vm.base+1], vm.stack[vm.base+required:]...)
				vm.next = makeTheCall
			},
			base: vm.base,
			pos:  newBase,
		})
		vm.base = newBase
		vm.next = fn.code
	}
}

func compileList(exp Obj, locals Obj, frees Obj, next func(*VM)) func(*VM) {
	if exp == Nil {
		return next
	}
	remain := compileList(cdr(exp), locals, frees, next)
	return compile(car(exp), locals, frees, func(vm *VM) {
		vm.stack = append(vm.stack, vm.val)
		vm.next = remain
	})
}
