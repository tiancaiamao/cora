package cora

import (
	// "fmt"
	"runtime"
	"bytes"
	"encoding/binary"
	"errors"
	"io"
)

const (
	idConst = 1 + iota
	idLocalRef
	idClosureRef
	idGlobalRef
	idIf
	idMakeClosure
	idLocalSet
	idTailCall
	idCall
	idPush
	idExit
	idArityCheck
	idPrimitive
)

func (i *instrConst) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idConst})
	if err != nil {
		return withTrace(err)
	}
	err = i.val.Marshal(to)
	if err != nil {
		return withTrace(err)
	}
	return i.next.Marshal(to)
}

func (i *instrLocalRef) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idLocalRef})
	if err != nil {
		return withTrace(err)
	}
	err = binary.Write(to, binary.LittleEndian, uint32(i.idx))
	if err != nil {
		return withTrace(err)
	}
	return i.next.Marshal(to)
}

func (i *instrClosureRef) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idClosureRef})
	if err != nil {
		return withTrace(err)
	}
	err = binary.Write(to, binary.LittleEndian, i.idx)
	if err != nil {
		return withTrace(err)
	}
	return i.next.Marshal(to)
}

func (i *instrGlobalRef) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idGlobalRef})
	if err != nil {
		return withTrace(err)
	}
	err = i.sym.Marshal(to)
	if err != nil {
		return withTrace(err)
	}
	return i.next.Marshal(to)
}

func (i *instrIf) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idIf})
	if err != nil {
		return withTrace(err)
	}
	var buf bytes.Buffer
	err = i.succ.Marshal(&buf)
	if err != nil {
		return withTrace(err)
	}
	err = binary.Write(to, binary.LittleEndian, uint32(buf.Len()))
	if err != nil {
		return withTrace(err)
	}
	_, err = io.Copy(to, &buf)
	if err != nil {
		return withTrace(err)
	}
	return i.fail.Marshal(to)
}

func (i *instrMakeClosure) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idMakeClosure})
	if err != nil {
		return withTrace(err)
	}
	err = binary.Write(to, binary.LittleEndian, uint32(i.required))
	if err != nil {
		return withTrace(err)
	}
	err = binary.Write(to, binary.LittleEndian, uint32(i.nfrees))
	if err != nil {
		return withTrace(err)
	}
	var buf bytes.Buffer
	err = i.code.Marshal(&buf)
	if err != nil {
		return withTrace(err)
	}
	err = binary.Write(to, binary.LittleEndian, uint32(buf.Len()))
	if err != nil {
		return withTrace(err)
	}
	_, err = io.Copy(to, &buf)
	if err != nil {
		return withTrace(err)
	}
	return i.next.Marshal(to)
}

func (*instrLocalSet) Marshal(to io.Writer) error {
	panic( errors.New("localset not implemented"))
}

func (i *instrTailCall) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idTailCall})
	if err != nil {
		return withTrace(err)
	}
	return binary.Write(to, binary.LittleEndian, uint32(i.nargs))
}

func (*instrCall) Marshal(to io.Writer) error {
	panic("instrcall not implemented")
}
func (i *instrPush) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idPush})
	if err != nil {
		return withTrace(err)
	}
	return i.next.Marshal(to)
}

func (instrExit) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idExit})
	return withTrace(err)
}

func (instrArityCheck) Marshal(to io.Writer) error {
	panic( errors.New("instraritycheck not implemented"))
}

func (*instrReserveLocals) Marshal(to io.Writer) error {
	panic( errors.New("instrPrim not implemented"))
}

func (i *instrPrimitive) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idPrimitive})
	if err != nil {
		return withTrace(err)
	}
	_, err = to.Write([]byte{i.desc.id})
	if err != nil {
		return withTrace(err)
	}
	return i.next.Marshal(to)
}

const (
	tpInteger = 1 + iota
	tpFloat64
	tpBoolean
	tpString
	tpSymbol
	tpCons
)

func (i Integer) Marshal(to io.Writer) error {
	_,err := to.Write([]byte{tpInteger})
	if err != nil {
		return withTrace(err)
	}
	return binary.Write(to, binary.LittleEndian, i)
}

func (i Float64) Marshal(to io.Writer) error {
	panic( errors.New("float64"))
}
func (i booleanObj) Marshal(to io.Writer) error {
	panic( errors.New("boolean"))
}
func (i nilObj) Marshal(to io.Writer) error {
	panic( errors.New("nil"))
}

func (i *Symbol) Marshal(to io.Writer) error {
	_,err := to.Write([]byte{tpSymbol})
	if err != nil {
		return withTrace(err)
	}
	err = binary.Write(to, binary.LittleEndian, uint32(len(i.str)))
	if err != nil {
		return withTrace(err)
	}
	_,err =  to.Write([]byte(i.str))
	return withTrace(err)
}

func (i String) Marshal(to io.Writer) error {
	panic( errors.New("string"))
}
func (i *Closure) Marshal(to io.Writer) error {
	panic( errors.New("closure"))
}
func (i *Cons) Marshal(to io.Writer) error {
	panic( errors.New("cons"))
}
func (i Vector) Marshal(to io.Writer) error {
	panic( errors.New("vector"))
}

type errWithStack struct {
	err error
	buf []byte
}

func (e *errWithStack) Error() string {
	return e.err.Error() + "\n" + string(e.buf)
}

func withTrace(err error) error {
	if err == nil {
		return nil
	}
	if _, ok := err.(*errWithStack); ok {
		return err
	}
	var stack [4096]byte
	sz := runtime.Stack(stack[:], false)
	return &errWithStack{err, stack[:sz]}
}
