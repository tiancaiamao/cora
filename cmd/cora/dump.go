package main

import (
	"errors"
	"fmt"
	"io"
	"runtime"
)

func (i *instrConst) MarshalText(to io.Writer) error {
	fmt.Fprintf(to, "(const %v) ", i.val.String())
	return i.next.MarshalText(to)
}

func (i *instrLocalRef) MarshalText(to io.Writer) error {
	fmt.Fprintf(to, "(local-ref %d) ", i.idx)
	return i.next.MarshalText(to)
}

func (i *instrClosureRef) MarshalText(to io.Writer) error {
	fmt.Fprintf(to, "(closure-ref %d) ", i.idx)
	return i.next.MarshalText(to)
}
func (i *instrGlobalRef) MarshalText(to io.Writer) error {
	fmt.Fprintf(to, "(global-ref %v) ", i.sym)
	return i.next.MarshalText(to)
}

func (i *instrIf) MarshalText(to io.Writer) error {
	fmt.Fprintf(to, "(if (")
	err := i.succ.MarshalText(to)
	if err != nil {
		return withTrace(err)
	}
	fmt.Fprintf(to, ") (")
	err = i.fail.MarshalText(to)
	if err != nil {
		return withTrace(err)
	}
	fmt.Fprintf(to, "))")
	return nil
}

func (i *instrMakeClosure) MarshalText(to io.Writer) error {
	fmt.Fprintf(to, "(make-closure %d %d (", i.required, i.nfrees)
	err := i.code.MarshalText(to)
	if err != nil {
		return withTrace(err)
	}
	fmt.Fprintf(to, "))")
	return i.next.MarshalText(to)
}

func (i *instrLocalSet) MarshalText(to io.Writer) error {
	fmt.Fprintf(to, "(local-set %d) ", i.idx)
	return i.next.MarshalText(to)
}

func (i *instrTailCall) MarshalText(to io.Writer) error {
	fmt.Fprintf(to, "(tailcall %d)", i.nargs)
	return nil
}

func (i *instrCall) MarshalText(to io.Writer) error {
	fmt.Fprintf(to, "(call %d) ", i.nargs)
	return i.next.MarshalText(to)
}

func (i *instrPush) MarshalText(to io.Writer) error {
	fmt.Fprintf(to, "(push) ")
	return i.next.MarshalText(to)
}

func (instrExit) MarshalText(to io.Writer) error {
	fmt.Fprintf(to, "(exit)")
	return nil
}

func (instrArityCheck) MarshalText(to io.Writer) error {
	panic(errors.New("instraritycheck not implemented"))
}

func (i *instrReserveLocals) MarshalText(to io.Writer) error {
	fmt.Fprintf(to, "(reserve-locals %d) ", i.nlets)
	return i.next.MarshalText(to)
}

func (i *instrPrimitive) MarshalText(to io.Writer) error {
	fmt.Fprintf(to, "(primitive %s) ", i.desc.name)
	return i.next.MarshalText(to)
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
