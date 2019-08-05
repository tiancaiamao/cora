package kl

import (
	"fmt"
	"testing"
	"unsafe"
)

type VM1 struct {
	pc    func(*VM1)
	stack []Obj
}

type Closure struct {
	scmHead
	fn   func(*VM1)
	args []Obj
}

func makeClosure(fn func(*VM1), args ...Obj) Obj {
	tmp := &Closure{
		scmHead: scmHeadProcedure,
		fn:      fn,
		args:    args,
	}
	return Obj(unsafe.Pointer(&tmp.scmHead))
}

func mustClosure(o Obj) *Closure {
	if *o != scmHeadProcedure {
		panic("mustProceduer")
	}
	return (*Closure)(unsafe.Pointer(o))
}

func closureRef(c Obj, n int) Obj {
	c1 := mustClosure(c)
	return c1.args[n]
}

func closureFn(c Obj) func(*VM1) {
	c1 := mustClosure(c)
	return c1.fn
}

func trampoline(m *VM1) {
	for m.pc != nil {
		m.pc(m)
	}
}

func funSet(sym Obj, val Obj) Obj {
	mustSymbol(sym).value = val
	return val
}

func halt(m *VM1) {
	fmt.Println(ObjString(m.stack[0]))
	m.pc = nil
}

func clofun35259(m *VM1) {
	reg9159 := makeClosure(clofun35255)
	reg9222 := MakeSymbol("square")
	reg9245 := funSet(reg9222, reg9159)
	_ = reg9245
	reg9310 := GetSymbolValue(reg9222)
	m.pc = closureFn(reg9310)
	reg9426 := makeClosure(clofun35155)
	reg9446 := MakeInteger(5)
	m.stack[0] = reg9310
	m.stack[1] = reg9426
	m.stack[2] = reg9446
	return
}
func clofun35255(m *VM1) {
	reg9482 := m.stack[0]
	_ = reg9482
	reg9486 := m.stack[1]
	_ = reg9486
	reg9490 := m.stack[2]
	_ = reg9490
	m.pc = closureFn(reg9486)
	reg9651 := primNumberMultiply(reg9490, reg9490)
	m.stack[0] = reg9486
	m.stack[1] = reg9651
	return
}
func clofun35155(m *VM1) {
	reg9684 := m.stack[0]
	_ = reg9684
	reg9688 := m.stack[1]
	_ = reg9688
	reg9762 := MakeInteger(1)
	reg9763 := PrimNumberAdd(reg9688, reg9762)
	m.stack[0] = reg9763
	m.pc = nil
	return
}

func TestXX(t *testing.T) {
	var m VM1
	m.stack = make([]Obj, 20)
	m.pc = clofun35259
	trampoline(&m)

	fmt.Println(ObjString(m.stack[0]))
}
