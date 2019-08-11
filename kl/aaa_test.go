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

func TestXX(t *testing.T) {
	var m VM1
	m.stack = make([]Obj, 20)
	m.pc = clofun17313
	trampoline(&m)

	fmt.Println(ObjString(m.stack[0]))
}

func clofun17313(m *VM1) {
	reg18689 := makeClosure(clofun16875)
	reg18758 := MakeSymbol("fact")
	reg18783 := funSet(reg18758, reg18689)
	_ = reg18783
	reg18852 := GetSymbolValue(MakeSymbol("fact"))
	m.pc = closureFn(reg18852)
	reg18874 := GetSymbolValue(MakeSymbol("fact"))
	reg18899 := makeClosure(clofun16732)
	reg18921 := MakeInteger(5)
	m.stack[0] = reg18874
	m.stack[1] = reg18899
	m.stack[2] = reg18921
	return
}
func clofun16875(m *VM1) {
	reg18959 := m.stack[0]
	_ = reg18959
	reg18963 := m.stack[1]
	_ = reg18963
	reg18967 := m.stack[2]
	_ = reg18967
	reg19052 := MakeInteger(0)
	reg19053 := PrimEqual(reg18967, reg19052)
	if reg19053 == True {
		m.pc = closureFn(reg18963)
		reg19242 := MakeInteger(1)
		m.stack[0] = reg18963
		m.stack[1] = reg19242
		return
	} else {
		reg19343 := MakeInteger(1)
		reg19344 := primNumberSubtract(reg18967, reg19343)
		reg19413 := GetSymbolValue(MakeSymbol("fact"))
		m.pc = closureFn(reg19413)
		reg19435 := GetSymbolValue(MakeSymbol("fact"))
		reg19544 := makeClosure(clofun17042, reg18963, reg18967)
		m.stack[0] = reg19435
		m.stack[1] = reg19544
		m.stack[2] = reg19344
		return
	}
}
func clofun17042(m *VM1) {
	reg19610 := m.stack[0]
	_ = reg19610
	reg19614 := m.stack[1]
	_ = reg19614
	reg19705 := closureRef(reg19610, 0)
	m.pc = closureFn(reg19705)
	reg19757 := closureRef(reg19610, 0)
	reg19827 := closureRef(reg19610, 1)
	reg19852 := primNumberMultiply(reg19827, reg19614)
	m.stack[0] = reg19757
	m.stack[1] = reg19852
	return
}
func clofun16732(m *VM1) {
	reg19887 := m.stack[0]
	_ = reg19887
	reg19891 := m.stack[1]
	_ = reg19891
	m.stack[0] = reg19891
	m.pc = nil
	return
}
