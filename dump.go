package cora

import (
	"fmt"
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
)

func (i *instrConst) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idConst})
	if err != nil {
		return err
	}
	err = i.val.Marshal(to)
	if err != nil {
		return err
	}
	return i.next.Marshal(to)
}

func (i *instrLocalRef) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idLocalRef})
	if err != nil {
		return err
	}
	err = binary.Write(to, binary.LittleEndian, i.idx)
	if err != nil {
		fmt.Println("2222")
		return err
	}
	return i.next.Marshal(to)
}

func (i *instrClosureRef) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idClosureRef})
	if err != nil {
		return err
	}
	err = binary.Write(to, binary.LittleEndian, i.idx)
	if err != nil {
		return err
	}
	return i.next.Marshal(to)
}

func (i *instrGlobalRef) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idGlobalRef})
	if err != nil {
		return err
	}
	err = i.sym.Marshal(to)
	if err != nil {
		return err
	}
	return i.next.Marshal(to)
}

func (i *instrIf) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idIf})
	if err != nil {
		return err
	}
	var buf bytes.Buffer
	err = i.succ.Marshal(&buf)
	if err != nil {
		return err
	}
	err = binary.Write(to, binary.LittleEndian, buf.Len())
	if err != nil {
		return err
	}
	_, err = io.Copy(to, &buf)
	if err != nil {
		return err
	}
	return i.fail.Marshal(to)
}

func (i *instrMakeClosure) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idMakeClosure})
	if err != nil {
		return err
	}
	err = binary.Write(to, binary.LittleEndian, i.required)
	if err != nil {
		return err
	}
	err = binary.Write(to, binary.LittleEndian, i.nfrees)
	if err != nil {
		return err
	}
	var buf bytes.Buffer
	err = i.code.Marshal(&buf)
	if err != nil {
		return err
	}
	err = binary.Write(to, binary.LittleEndian, buf.Len())
	if err != nil {
		return err
	}
	_, err = io.Copy(to, &buf)
	if err != nil {
		return err
	}
	return i.next.Marshal(to)
}

func (*instrLocalSet) Marshal(to io.Writer) error {
	return errors.New("localset not implemented")
}

func (i *instrTailCall) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idTailCall})
	if err != nil {
		return err
	}
	return binary.Write(to, binary.LittleEndian, uint32(i.nargs))
}

func (*instrCall) Marshal(to io.Writer) error {
	return errors.New("instrcall not implemented")
}
func (i *instrPush) Marshal(to io.Writer) error {
	_, err := to.Write([]byte{idPush})
	if err != nil {
		return err
	}
	return i.next.Marshal(to)
}
func (instrExit) Marshal(to io.Writer) error {
	return errors.New("instrexit not implemented")
}
func (instrArityCheck) Marshal(to io.Writer) error {
	return errors.New("instraritycheck not implemented")
}
func (*instrReserveLocals) Marshal(to io.Writer) error {
	return errors.New("instrPrim not implemented")
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
		return err
	}
	return binary.Write(to, binary.LittleEndian, i)
}

func (i Float64) Marshal(to io.Writer) error {
	return errors.New("float64")
}
func (i booleanObj) Marshal(to io.Writer) error {
	return errors.New("boolean")
}
func (i nilObj) Marshal(to io.Writer) error {
	return errors.New("nil")
}

func (i *Symbol) Marshal(to io.Writer) error {
	_,err := to.Write([]byte{tpSymbol})
	if err != nil {
		return err
	}
	err = binary.Write(to, binary.LittleEndian, uint32(len(i.str)))
	if err != nil {
		return err
	}
	_,err =  to.Write([]byte(i.str))
	return err
}

func (i String) Marshal(to io.Writer) error {
	return errors.New("string")
}
func (i *Closure) Marshal(to io.Writer) error {
	return errors.New("closure")
}
func (i *Cons) Marshal(to io.Writer) error {
	return errors.New("cons")
}
func (i Vector) Marshal(to io.Writer) error {
	return errors.New("vector")
}
