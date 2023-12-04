package cora

import (
	"bytes"
	"fmt"
	"io"
	"math"
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
	Marshal(io.Writer) error
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
		return "true"
	case False:
		return "false"
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
	MakeSymbol("integer?").val = primIsInteger
	MakeSymbol("string?").val = primIsString
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

func MakeCons(x, y Obj) Obj {
	return &Cons{car: x, cdr: y}
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
	code     Instr
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
	pc   Instr
	base int
	pos  int
}

type VM struct {
	next      Instr
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

func trampoline(vm *VM, code Instr) {
	vm.next = code
	for vm.next != nil {
		code = vm.next
		vm.next = nil
		code.Exec(vm)
	}
}

func eval(vm *VM, exp Obj) Obj {
	exp1, _, nlets := closureConvert(exp, Nil, Nil, nil, 0)
	code := compile(exp1, nil, Nil, exit)
	code = reserveForLetBinding(nlets, code)
	vm.callStack = append(vm.callStack, returnAddr{
		pc:   nil,
		base: vm.base,
		pos:  len(vm.stack),
	})
	trampoline(vm, code)
	return vm.val
}

type Instr interface {
	Exec(vm *VM)
	Marshal(to io.Writer) error
}

var (
	_ Instr = &instrConst{}
	_ Instr = &instrLocalRef{}
	_ Instr = &instrClosureRef{}
	_ Instr = &instrGlobalRef{}
	_ Instr = &instrIf{}
	_ Instr = &instrMakeClosure{}
	_ Instr = &instrLocalSet{}
	_ Instr = &instrTailCall{}
	_ Instr = &instrCall{}
	_ Instr = &instrPush{}
	_ Instr = instrExit{}
	_ Instr = instrArityCheck{}
	_ Instr = &instrReserveLocals{}
)

type instrExit struct{}

var exit instrExit

func (i instrExit) Exec(vm *VM) {
	vm.ret(vm.val)
}

type instrConst struct {
	val  Obj
	next Instr
}

func (i *instrConst) Exec(vm *VM) {
	vm.val = i.val
	vm.next = i.next
}

type instrLocalRef struct {
	idx  int
	next Instr
}

func (i *instrLocalRef) Exec(vm *VM) {
	vm.val = vm.stack[vm.base+i.idx+1]
	vm.next = i.next
}

type instrClosureRef struct {
	idx  int
	next Instr
}

func (i *instrClosureRef) Exec(vm *VM) {
	closure := vm.stack[vm.base].(*Closure)
	vm.val = closure.closed[i.idx]
	vm.next = i.next
}

type instrGlobalRef struct {
	sym  *Symbol
	next Instr
}

func (i *instrGlobalRef) Exec(vm *VM) {
	if i.sym == nil || i.sym.val == nil {
		panic("undefined symbol:" + i.sym.str)
	}
	vm.val = i.sym.val
	vm.next = i.next
}

type instrIf struct {
	succ Instr
	fail Instr
}

func (i *instrIf) Exec(vm *VM) {
	switch vm.val {
	case True:
		i.succ.Exec(vm)
	case False:
		i.fail.Exec(vm)
	default:
		panic("if need to be true / false")
	}
}

type instrMakeClosure struct {
	required int
	nfrees   int
	code     Instr
	next     Instr
}

func (i *instrMakeClosure) Exec(vm *VM) {
	vm.val = &Closure{
		closed:   append([]Obj{}, vm.stack[len(vm.stack)-i.nfrees:]...),
		code:     i.code,
		Required: i.required,
	}
	vm.stack = vm.stack[:len(vm.stack)-i.nfrees]
	vm.next = i.next
}

type instrLocalSet struct {
	idx  int
	next Instr
}

func (i *instrLocalSet) Exec(vm *VM) {
	vm.stack[vm.base+i.idx+1] = vm.val
	vm.next = i.next
}

type instrTailCall struct {
	nargs int
}

func (i *instrTailCall) Exec(vm *VM) {
	// prepare arguments
	copy(vm.stack[vm.base:], vm.stack[len(vm.stack)-i.nargs:])
	vm.stack = vm.stack[:vm.base+i.nargs]
	// make the call
	makeTheCall(vm)
}

type instrCall struct {
	nargs int
	next  Instr
}

func (i *instrCall) Exec(vm *VM) {
	// normal call
	// save the stack
	newBase := len(vm.stack) - i.nargs
	vm.callStack = append(vm.callStack, returnAddr{
		pc:   i.next,
		base: vm.base,
		pos:  newBase,
	})
	vm.base = newBase
	// make the call
	makeTheCall(vm)
}

type instrPush struct {
	next Instr
}

func (i *instrPush) Exec(vm *VM) {
	vm.stack = append(vm.stack, vm.val)
	vm.next = i.next
}

type instrReserveLocals struct {
	nlets int
	next  Instr
}

func (i *instrReserveLocals) Exec(vm *VM) {
	// The top level let differs from the let inside a lambda.
	// There is no [fn arg1 arg2 ...], need to fill [fn] to make the offset correct.
	if vm.base == len(vm.stack) {
		vm.stack = append(vm.stack, nil)
	}
	// reserve space for let bindings
	// The layout looks like this:
	// [fn arg1 arg2 .. let1 let2 ...]
	for x := 0; x < int(i.nlets); x++ {
		vm.stack = append(vm.stack, nil)
	}
	vm.next = i.next
}

type instrArityCheck struct{}

func (i instrArityCheck) Exec(vm *VM) {
	makeTheCall(vm)
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
//
//	Compiler utilities
//
// =====================================
func closureConvert(exp Obj, locals Obj, env Obj, frees []Obj, nlets int) (Obj, []Obj, int) {
	switch exp.(type) {
	case nilObj, booleanObj, Integer, String, Float64:
		return exp, frees, nlets
	case *Symbol:
		if assq(exp, locals) < 0 {
			for env != Nil {
				x := car(env)
				for x != Nil {
					if car(x) == exp {
						frees = append(frees, exp)
						return exp, frees, nlets
					}
					x = cdr(x)
				}
				env = cdr(env)
			}
		}
		return exp, frees, nlets
	}
	raw := exp.(*Cons)
	switch raw.car {
	case symQuote:
		return exp, frees, nlets
	case symIf:
		var test, succ, fail Obj
		var let1, let2, let3 int
		max := nlets
		test, frees, let1 = closureConvert(cadr(exp), locals, env, frees, nlets)
		if let1 > max {
			max = let1
		}
		succ, frees, let2 = closureConvert(caddr(exp), locals, env, frees, nlets)
		if let2 > max {
			max = let2
		}
		fail, frees, let3 = closureConvert(caddr(cdr(exp)), locals, env, frees, nlets)
		if let3 > max {
			max = let3
		}
		return cons(symIf, cons(test, cons(succ, cons(fail, Nil)))), frees, max
	case symDo:
		var x, y Obj
		var let1, let2 int
		max := nlets
		x, frees, let1 = closureConvert(cadr(exp), locals, env, frees, nlets)
		if let1 > max {
			max = let1
		}
		y, frees, let2 = closureConvert(caddr(exp), locals, env, frees, nlets)
		if let2 > max {
			max = let2
		}
		return cons(symDo, cons(x, cons(y, Nil))), frees, max
	case symLambda:
		args := cadr(exp)
		body := caddr(exp)
		body1, frees1, nlets1 := closureConvert(body, args, cons(locals, env), nil, 0)
		for _, free := range frees1 {
			if assq(free, locals) < 0 {
				frees = append(frees, free)
			}
		}
		return cons(symLambda, cons(args, cons(sliceToList(frees1), cons(Integer(nlets1), cons(body1, Nil))))), frees, nlets
	case symLet:
		name := cadr(exp)
		max := nlets
		var val Obj
		var let1 int
		val, frees, let1 = closureConvert(caddr(exp), locals, env, frees, nlets)
		if let1 > max {
			max = let1
		}
		body := caddr(cdr(exp))
		body, frees, nlets = closureConvert(body, cons(name, locals), env, frees, nlets+1)
		if nlets > max {
			max = nlets
		}
		return cons(symLet, cons(name, cons(val, cons(body, Nil)))), frees, max
	}
	max := nlets
	ret := Nil
	for ; exp != Nil; exp = cdr(exp) {
		var tmp Obj
		var lets1 int
		tmp, frees, lets1 = closureConvert(car(exp), locals, env, frees, nlets)
		ret = cons(tmp, ret)
		if lets1 > max {
			max = lets1
		}
	}
	return reverse(ret), frees, max
}

func compile(exp Obj, locals []Obj, frees Obj, next Instr) Instr {
	switch raw := exp.(type) {
	case nilObj, booleanObj, Integer, String, Float64:
		return &instrConst{val: exp, next: next}
	case *Symbol:
		for i := len(locals) - 1; i >= 0; i-- {
			if locals[i] == exp {
				return &instrLocalRef{idx: i, next: next}
			}
		}
		idx := assq(exp, frees)
		if idx >= 0 {
			return &instrClosureRef{idx: idx, next: next}
		}
		return &instrGlobalRef{sym: raw, next: next}
	}

	raw := exp.(*Cons)
	switch raw.car {
	case symQuote:
		return &instrConst{val: car(raw.cdr), next: next}
	case symIf:
		thenCont := compile(cadr(raw.cdr), locals, frees, next)
		elseCont := compile(caddr(raw.cdr), locals, frees, next)
		return compile(car(raw.cdr), locals, frees, &instrIf{succ: thenCont, fail: elseCont})
	case symDo:
		y := compile(caddr(raw), locals, frees, next)
		return compile(cadr(raw), locals, frees, y)
	case symLambda:
		args := cadr(exp)
		frees1 := caddr(exp)
		remainExp := cddr(cdr(exp))
		nlets := car(remainExp).(Integer)
		body := cadr(remainExp)
		code := compile(body, listToSlice(args), frees1, exit)
		return compileList(frees1, locals, frees, &instrMakeClosure{
			required: listLength(args),
			nfrees:   listLength(frees1),
			code:     reserveForLetBinding(int(nlets), code),
			next:     next,
		})
	case symLet:
		name := cadr(exp)
		val := caddr(exp)
		body := caddr(cdr(exp))
		pos := len(locals)
		body1 := compile(body, append(locals, name), frees, next)
		return compile(val, locals, frees, &instrLocalSet{idx: pos, next: body1})
	}

	// compile call
	nargs := listLength(exp)
	tail := next == exit
	var cont Instr
	if tail {
		cont = &instrTailCall{nargs: nargs}
	} else {
		cont = &instrCall{nargs: nargs, next: next}
	}
	return compileList(exp, locals, frees, cont)
}

func reserveForLetBinding(nlets int, code Instr) Instr {
	if nlets == 0 {
		return code
	}
	return &instrReserveLocals{nlets: nlets, next: code}
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
			code: instrPrim(func(vm *VM) {
				tmp := append([]Obj{}, vm.stack[vm.base+1:]...)
				vm.stack = append(vm.stack[:vm.base], closed...)
				vm.stack = append(vm.stack, tmp...)
				vm.next = instrArityCheck{}
			}),
			Required: required - provided,
		}
		vm.next = exit
	case provided > required:
		newBase := len(vm.stack)
		vm.stack = append(vm.stack, vm.stack[vm.base:vm.base+required]...)
		vm.callStack = append(vm.callStack, returnAddr{
			pc: instrPrim(func(vm *VM) {
				vm.stack[vm.base] = vm.val
				vm.stack = append(vm.stack[:vm.base+1], vm.stack[vm.base+required:]...)
				vm.next = instrArityCheck{}
			}),
			base: vm.base,
			pos:  newBase,
		})
		vm.base = newBase
		vm.next = fn.code
	}
}

func compileList(exp Obj, locals []Obj, frees Obj, next Instr) Instr {
	if exp == Nil {
		return next
	}
	remain := compileList(cdr(exp), locals, frees, next)
	return compile(car(exp), locals, frees, &instrPush{next: remain})
}
