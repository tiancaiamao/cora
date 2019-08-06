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

func clofun20806(m *VM1) {
	reg20870 := makeClosure(clofun20802)
	reg20939 := MakeSymbol("square")
	reg20964 := funSet(reg20939, reg20870)
	_ = reg20964
	reg21015 := GetSymbolValue(MakeSymbol("square"))
	m.pc = closureFn(reg21015)
	reg21141 := makeClosure(clofun20672)
	reg21163 := MakeInteger(5)
	m.stack[0] = reg21015
	m.stack[1] = reg21141
	m.stack[2] = reg21163
	return
}
func clofun20802(m *VM1) {
	reg21201 := m.stack[0]
	_ = reg21201
	reg21205 := m.stack[1]
	_ = reg21205
	reg21209 := m.stack[2]
	_ = reg21209
	m.pc = closureFn(reg21205)
	reg21384 := primNumberMultiply(reg21209, reg21209)
	m.stack[0] = reg21205
	m.stack[1] = reg21384
	return
}
func clofun20672(m *VM1) {
	reg21419 := m.stack[0]
	_ = reg21419
	reg21423 := m.stack[1]
	_ = reg21423
	reg21505 := MakeInteger(1)
	reg21506 := PrimNumberAdd(reg21423, reg21505)
	m.stack[0] = reg21506
	m.pc = nil
	return
}

func TestXX(t *testing.T) {
	var m VM1
	m.stack = make([]Obj, 20)
	m.pc = clofun20806
	trampoline(&m)

	fmt.Println(ObjString(m.stack[0]))
}
