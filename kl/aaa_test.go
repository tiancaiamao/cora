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

func gen1(m *VM1) {
	var k6, x1 Obj
	k6 = m.stack[1]
	x1 = m.stack[2]

	tmp0 := closureFn(k6)
	tmp1 := primNumberMultiply(x1, x1)

	m.pc = tmp0
	m.stack[0] = k6
	m.stack[1] = tmp1
}

func gen2(m *VM1) {
	var r4 Obj
	r4 = m.stack[1]
	var r2 Obj
	r2 = PrimNumberAdd(r4, makeInteger(1))

	m.pc = halt
	m.stack[0] = r2
}

func gen3(m *VM1) {
	var r5 Obj
	r5 = makeClosure(gen1)
	r3 := funSet(MakeSymbol("square"), r5)

	tmp0 := closureFn(r3)
	tmp1 := makeClosure(gen2)

	m.pc = tmp0
	m.stack[0] = r3
	m.stack[1] = tmp1
	m.stack[2] = makeInteger(5)
}

func clofun35259(m *VM1) {
	reg35801 := makeClosure(clofun35255)
	reg35864 := MakeSymbol("square")
	reg35887 := funSet(reg35864, reg35801)
	reg35952 := reg35887
	m.pc = closureFn(reg35952)
	reg36068 := makeClosure(clofun35155)
	reg36088 := makeInteger(5)
	m.stack[0] = reg35952
	m.stack[1] = reg36068
	m.stack[2] = reg36088
	return
}

func clofun35255(m *VM1) {
	// reg36124 := m.stack[0]
	reg36128 := m.stack[1]
	reg36132 := m.stack[2]
	m.pc = closureFn(reg36128)
	reg36293 := primNumberMultiply(reg36132, reg36132)
	m.stack[0] = reg36128
	m.stack[1] = reg36293
	return
}

func clofun35155(m *VM1) {
	// reg36326 := m.stack[0]
	reg36330 := m.stack[1]
	reg36404 := MakeInteger(1)
	reg36405 := PrimNumberAdd(reg36330, reg36404)
	m.stack[0] = reg36405
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
