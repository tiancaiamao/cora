package runtime

import (
	"errors"
	"fmt"
	"strings"
)

type instruction uint32

const (
	iAccess = iota
	iGrab
	iFreeze
	iPop
	iApply
	iMark
	iTailApply
	iPrimCall
	iConst
	iReturn
	iHalt
	iDefun
	iGetF
	iJF
	iJMP
	iSetJmp
	iClearJmp
	iNativeCall
)

type instructionInfo struct {
	id   instruction
	name string
}

var instructionTable = []instructionInfo{
	{iAccess, "ACCESS"},
	{iGrab, "GRAB"},
	{iPop, "POP"},
	{iApply, "APPLY"},
	{iMark, "MARK"},
	{iPrimCall, "PRIMCALL"},
	{iNativeCall, "NATIVECALL"},
	{iConst, "CONST"},
	{iReturn, "RETURN"},
	{iHalt, "HALT"},
}

var instructionStrToInfo map[string]*instructionInfo

const (
	codeBitShift = 24
	valueBitMask = (1<<codeBitShift - 1)
)

func instructionCode(i instruction) int {
	return int(i >> codeBitShift)
}

func instructionOPN(i instruction) int {
	return int(i) & valueBitMask
}

func instructionOP2(i instruction) int {
	return int((i >> 8) & 0xff)
}

func instructionOP3(i instruction) int {
	return int(i & 0xff)
}

func (i instruction) String() string {
	switch instructionCode(i) {
	case iAccess:
		return fmt.Sprintf("ACCESS %d", instructionOPN(i))
	case iGrab:
		return "GRAB"
	case iPop:
		return "POP"
	case iApply:
		return "APPLY"
	case iTailApply:
		return fmt.Sprintf("TAILAPPLY %d", instructionOPN(i))
	case iPrimCall:
		return "PRIMCALL"
	case iNativeCall:
		return fmt.Sprintf("NATIVECALL %d", instructionOPN(i))
	case iConst:
		return fmt.Sprintf("CONST %d", instructionOPN(i))
	case iReturn:
		return "RETURN"
	case iHalt:
		return "HALT"
	case iDefun:
		return "DEFUN"
	case iGetF:
		return "GETF"
	case iJF:
		return fmt.Sprintf("JF %d", instructionOPN(i))
	case iJMP:
		return fmt.Sprintf("JMP %d", instructionOPN(i))
	case iFreeze:
		return fmt.Sprintf("FREEZE %d", instructionOPN(i))
	case iSetJmp:
		return fmt.Sprintf("SETJMP %d", instructionOPN(i))
	case iClearJmp:
		return "CLEARJMP"
	case iMark:
		return "MARK"
	}
	return "UNKNOWN"
}

type Assember struct {
	buf    []instruction
	consts []Obj
}

func (a *Assember) ACCESS(i int) {
	inst := instruction((iAccess << codeBitShift) | i)
	a.buf = append(a.buf, inst)
}

func (a *Assember) RETURN() {
	a.buf = append(a.buf, instruction(iReturn<<codeBitShift))
}

func (a *Assember) APPLY() {
	a.buf = append(a.buf, instruction(iApply<<codeBitShift))
}

func (a *Assember) TAILAPPLY() {
	a.buf = append(a.buf, instruction(iTailApply<<codeBitShift))
}

func (a *Assember) HALT() {
	a.buf = append(a.buf, instruction(iHalt<<codeBitShift))
}

func (a *Assember) CLEARJMP() {
	a.buf = append(a.buf, instruction(iClearJmp<<codeBitShift))
}

func (a *Assember) DEFUN() {
	a.buf = append(a.buf, instruction(iDefun<<codeBitShift))
}

func (a *Assember) FREEZE(i int) {
	inst := instruction((iFreeze << codeBitShift) | i)
	a.buf = append(a.buf, inst)
}
func (a *Assember) GRAB() {
	a.buf = append(a.buf, instruction(iGrab<<codeBitShift))
}

func (a *Assember) JF(i int) {
	if i >= (1 << codeBitShift) {
		panic("overflow instruct bits")
	}
	inst := instruction((iJF << codeBitShift) | i)
	a.buf = append(a.buf, inst)
}

func (a *Assember) JMP(i int) {
	if i >= (1 << codeBitShift) {
		panic("overflow instruct bits")
	}
	inst := instruction((iJMP << codeBitShift) | i)
	a.buf = append(a.buf, inst)
}

func (a *Assember) SETJMP(i int) {
	if i >= (1 << codeBitShift) {
		panic("overflow instruct bits")
	}
	inst := instruction((iSetJmp << codeBitShift) | i)
	a.buf = append(a.buf, inst)
}

func (a *Assember) POP() {
	a.buf = append(a.buf, instruction(iPop<<codeBitShift))
}

func (a *Assember) MARK() {
	a.buf = append(a.buf, instruction(iMark<<codeBitShift))
}

func (a *Assember) GetF() {
	a.buf = append(a.buf, instruction(iGetF<<codeBitShift))
}

func (a *Assember) CONST(o Obj) {
	idx := len(a.consts)
	a.consts = append(a.consts, o)
	if idx >= (1 << codeBitShift) {
		panic("overflow instruct bits")
	}
	inst := instruction((iConst << codeBitShift) | idx)
	a.buf = append(a.buf, inst)
}

func (a *Assember) PRIMCALL(id int) {
	if id >= (1 << codeBitShift) {
		panic("overflow instruct bits")
	}
	inst := instruction((iPrimCall << codeBitShift) | id)
	a.buf = append(a.buf, inst)
}

func (a *Assember) NATIVECALL(id int) {
	if id >= (1 << codeBitShift) {
		panic("overflow instruct bits")
	}
	inst := instruction((iNativeCall << codeBitShift) | id)
	a.buf = append(a.buf, inst)
}

func (a *Assember) Compile() Code {
	ret := make([]instFunc, 0, len(a.buf))
	for _, inst := range a.buf {
		switch instructionCode(inst) {
		case iAccess:
			ret = append(ret, opAccess(instructionOPN(inst)))
		case iGrab:
			ret = append(ret, opGrab)
		case iFreeze:
			ret = append(ret, opFreeze(instructionOPN(inst)))
		case iPop:
			ret = append(ret, opPop)
		case iApply:
			ret = append(ret, opApply)
		case iMark:
			ret = append(ret, opMark)
		case iTailApply:
			ret = append(ret, opTailApply)
		case iPrimCall:
			ret = append(ret, opPrimCall(instructionOPN(inst)))
		case iConst:
			n := instructionOPN(inst)
			o := a.consts[n]
			ret = append(ret, opConst(o))
		case iReturn:
			ret = append(ret, opReturn)
		case iHalt:
			ret = append(ret, opHalt)
		case iDefun:
			ret = append(ret, opDefun)
		case iGetF:
			ret = append(ret, opGetF)
		case iJF:
			ret = append(ret, opJF(instructionOPN(inst)))
		case iJMP:
			ret = append(ret, opJMP(instructionOPN(inst)))
		case iSetJmp:
			ret = append(ret, opSetJmp(instructionOPN(inst)))
		case iClearJmp:
			ret = append(ret, opClearJmp)
		case iNativeCall:
			ret = append(ret, opNativeCall(instructionOPN(inst)))
		default:
			panic("unknown instruction")
		}
	}

	a.buf = nil
	a.consts = nil
	return ret
}

func (a *Assember) Encode(str string) (*Code, error) {
	inputs := strings.Split(str, "\n")
	for _, input := range inputs {
		var inst string
		_, err := fmt.Sscanf(input, "%s ", &inst)
		if err != nil {
			return nil, err
		}
		_, ok := instructionStrToInfo[inst]
		if !ok {
			return nil, errors.New("invalid instruct " + inst)
		}
	}
	return nil, errors.New("fuck")
}

func (a *Assember) FromSexp(input Obj) error {
	objs := ListToSlice(input)
	for _, obj := range objs {
		id := GetSymbol(Car(obj))
		switch id {
		case "iAccess":
			n := GetInteger(Cadr(obj))
			a.ACCESS(n)
		case "iPrimCall":
			n := GetInteger(Cadr(obj))
			a.PRIMCALL(n)
		case "iNativeCall":
			n := GetInteger(Cadr(obj))
			a.NATIVECALL(n)
		case "iConst":
			a.CONST(Cadr(obj))
		case "iApply":
			a.APPLY()
		case "iTailApply":
			a.TAILAPPLY()
		case "iMark":
			a.MARK()
		case "iReturn":
			a.RETURN()
		case "iGrab":
			a.GRAB()
		case "iFreeze":
			var a1 Assember
			a1.FromSexp(Cdr(obj))
			a.FREEZE(len(a1.buf))
			adjustConst(a1.buf, len(a.consts))
			a.buf = append(a.buf, a1.buf...)
			a.consts = append(a.consts, a1.consts...)
		case "iHalt":
			a.HALT()
		case "iDefun":
			a.DEFUN()
		case "iClearJmp":
			a.CLEARJMP()
		case "iPop":
			a.POP()
		case "iGetF":
			a.GetF()
		case "iJF":
			var a1 Assember
			a1.FromSexp(Cdr(obj))
			a.JF(len(a1.buf) + 1) // Follow by a JMP
			adjustConst(a1.buf, len(a.consts))
			a.buf = append(a.buf, a1.buf...)
			a.consts = append(a.consts, a1.consts...)
		case "iJMP":
			var a1 Assember
			a1.FromSexp(Cdr(obj))
			a.JMP(len(a1.buf))
			adjustConst(a1.buf, len(a.consts))
			a.buf = append(a.buf, a1.buf...)
			a.consts = append(a.consts, a1.consts...)
		case "iSetJmp":
			var a1 Assember
			a1.FromSexp(Cdr(obj))
			a.SETJMP(len(a1.buf))
			adjustConst(a1.buf, len(a.consts))
			a.buf = append(a.buf, a1.buf...)
			a.consts = append(a.consts, a1.consts...)
		}
	}
	return nil
}

func adjustConst(insts []instruction, ofst int) {
	for i, inst := range insts {
		if instructionCode(inst) == iConst {
			idx := instructionOPN(inst) + ofst
			if i >= (1 << codeBitShift) {
				panic("overflow instruct bits")
			}
			insts[i] = instruction((iConst << codeBitShift) | idx)
		}

	}
}
