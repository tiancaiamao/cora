package kl

import (
	"bytes"
	"fmt"
	"io"
	"time"
	"unsafe"
)

// All kinds of Scheme object.
type Obj *scmHead

type scmHead int

const (
	scmHeadNumber    scmHead = 0
	scmHeadPair              = 1
	scmHeadVector            = 2
	scmHeadNull              = 3
	scmHeadString            = 4
	scmHeadSymbol            = 5
	scmHeadBoolean           = 6
	scmHeadProcedure         = 14
	scmHeadStream            = 17
	scmHeadPrimitive         = 21
	scmHeadError             = 22
	scmHeadRaw               = 42
)

type scmNumber struct {
	scmHead
	val float64
}

type scmSymbol struct {
	scmHead
	str   string
	value Obj
}

type scmPair struct {
	scmHead
	car Obj
	cdr Obj
}

type scmVector struct {
	scmHead
	vector []Obj
}

type scmString struct {
	scmHead
	str string
}

type scmStream struct {
	scmHead
	raw interface{}
}

type scmBoolean struct {
	scmHead
	bool
}

// type scmProcedure struct {
// 	scmHead
// 	name  string
// 	arg   []Obj
// 	arity int
// 	body  Obj
// 	env   *Environment
// }

type ScmPrimitive struct {
	scmHead
	id       int
	Name     string
	Required int
	Function func(...Obj) Obj
}

type scmError struct {
	scmHead
	err string
}

// MakeRaw makes a struct into a raw object.
// Usage:
// type T struct {
//    scmHead int
//    ... // xxx
// }
// tmp := &T{}
// raw := MakeRaw(&tmp.scmHead)
func MakeRaw(scmHead *int) Obj {
	*scmHead = scmHeadRaw
	return Obj(unsafe.Pointer(scmHead))
}

func MakeError(err string) Obj {
	tmp := scmError{scmHeadError, err}
	return &tmp.scmHead
}

func mustError(o Obj) *scmError {
	if *o != scmHeadError {
		panic("mustError")
	}
	return (*scmError)(unsafe.Pointer(o))
}

func IsError(o Obj) bool {
	return *o == scmHeadError
}

func IsNumber(o Obj) bool {
	return *o == scmHeadNumber
}

func IsSymbol(o Obj) bool {
	return *o == scmHeadSymbol
}

func MakePrimitive(name string, arity int, f func(...Obj) Obj) *ScmPrimitive {
	return &ScmPrimitive{
		scmHead:  scmHeadPrimitive,
		Name:     name,
		Required: arity,
		Function: f,
	}
}

func isPrimitive(o Obj) (bool, *ScmPrimitive) {
	if *o != scmHeadPrimitive {
		return false, nil
	}
	return true, (*ScmPrimitive)(unsafe.Pointer(o))
}

func mustPrimitive(o Obj) *ScmPrimitive {
	if *o != scmHeadPrimitive {
		panic("mustPrimitive")
	}
	return (*ScmPrimitive)(unsafe.Pointer(o))
}

func mustVector(o Obj) []Obj {
	if (*o) != scmHeadVector {
		panic("mustVector")
	}
	tmp := (*scmVector)(unsafe.Pointer(o))
	return tmp.vector
}

// func mustProcedure(o Obj) *scmProcedure {
// 	if (*o) != scmHeadProcedure {
// 		panic("mustProcedure")
// 	}
// 	return (*scmProcedure)(unsafe.Pointer(o))
// }

func mustString(o Obj) string {
	if (*o) != scmHeadString {
		panic("mustString")
	}
	return (*scmString)(unsafe.Pointer(o)).str
}

func mustInteger(o Obj) int {
	if (*o) != scmHeadNumber {
		panic("mustNumber")
	}
	f := (*scmNumber)(unsafe.Pointer(o)).val
	return int(f)
}

func mustNumber(o Obj) *scmNumber {
	if (*o) != scmHeadNumber {
		panic("mustNumber")
	}
	return (*scmNumber)(unsafe.Pointer(o))
}

func mustSymbol(o Obj) *scmSymbol {
	if (*o) != scmHeadSymbol {
		panic("mustSymbol")
	}
	return (*scmSymbol)(unsafe.Pointer(o))
}

func isSymbol(o Obj) (bool, *scmSymbol) {
	if *o == scmHeadSymbol {
		return true, (*scmSymbol)(unsafe.Pointer(o))
	}
	return false, nil
}

func mustStream(o Obj) *scmStream {
	if (*o) != scmHeadStream {
		panic("mustStream")
	}
	return (*scmStream)(unsafe.Pointer(o))
}

func mustPair(o Obj) *scmPair {
	if (*o) != scmHeadPair {
		fmt.Println(ObjString(o))
		panic("mustPair")
	}
	return (*scmPair)(unsafe.Pointer(o))
}

func isPair(o Obj) (bool, *scmPair) {
	if (*o) == scmHeadPair {
		return true, (*scmPair)(unsafe.Pointer(o))
	}
	return false, nil
}

const intConstCount = 8192

var True, False, Nil, undefined Obj
var uptime time.Time
var intConst [intConstCount]Obj

func init() {
	uptime = time.Now()
	tmp1 := &scmBoolean{scmHeadBoolean, false}
	False = Obj(&tmp1.scmHead)

	tmp2 := &scmBoolean{scmHeadBoolean, true}
	True = Obj(&tmp2.scmHead)

	tmp3 := &scmPair{scmHeadNull, nil, nil}
	Nil = Obj(&tmp3.scmHead)

	var tmp4 int
	undefined = MakeRaw(&tmp4)

	for i := 0; i < intConstCount; i++ {
		intConst[i] = makeInteger(i)
	}

	// symbolArray = make([]symbolArrayObj, 0, 4096)
	// trieRoot = &trieNode{}
}

func MakeInteger(v int) Obj {
	if v >= 0 && v < intConstCount {
		return intConst[v]
	}
	return makeInteger(v)
}

func makeInteger(v int) Obj {
	tmp := scmNumber{scmHeadNumber, float64(v)}
	return &tmp.scmHead
}

func MakeNumber(f float64) Obj {
	if isPreciseInteger(f) {
		if f >= 0 && int(f) < intConstCount {
			return intConst[int(f)]
		}
	}

	tmp := scmNumber{scmHeadNumber, f}
	return &tmp.scmHead
}

func MakeStream(raw interface{}) Obj {
	tmp := scmStream{
		scmHeadStream,
		raw,
	}
	return &tmp.scmHead
}

func GetString(o Obj) string {
	return mustString(o)
}

func GetSymbol(o Obj) string {
	return mustSymbol(o).str
}

// func BindSymbolFunc(sym Obj, f Obj) {
// 	o := &symbolArray[mustSymbol(sym).offset]
// 	o.function = f
// }

// func GetSymbolValue(sym Obj) Obj {
// 	o := &symbolArray[mustSymbol(sym).offset]
// 	return o.value
// }

func cons(x, y Obj) Obj {
	tmp := scmPair{
		scmHead: scmHeadPair,
		car:     x,
		cdr:     y,
	}
	return &tmp.scmHead
}

func car(x Obj) Obj {
	return mustPair(x).car
}

func cdr(x Obj) Obj {
	return mustPair(x).cdr
}

func MakeVector(n int) Obj {
	tmp := scmVector{
		scmHeadVector,
		make([]Obj, n),
	}
	return &tmp.scmHead
}

func MakeString(s string) Obj {
	tmp := scmString{scmHeadString, s}
	return &tmp.scmHead
}

var strToSym = make(map[string]Obj)

func MakeSymbol(s string) Obj {
	v, ok := strToSym[s]
	if ok {
		return v
	}
	tmp := scmSymbol{
		scmHead: scmHeadSymbol,
		str:     s,
	}
	strToSym[s] = Obj(unsafe.Pointer(&tmp.scmHead))
	return &tmp.scmHead
}

func makeProcedure(arg Obj, body Obj, env Obj) Obj {
	// (lambda arg body env)
	return cons(MakeSymbol("lambda"), cons(arg, cons(body, env)))

	// tmp := scmProcedure{
	// 	scmHead: scmHeadProcedure,
	// 	body:    body,
	// 	env:     env,
	// }
	// if *arg == scmHeadSymbol {
	// 	tmp.arg = []Obj{arg}
	// 	tmp.arity = 1
	// } else {
	// 	tmp.arg = ListToSlice(arg)
	// 	tmp.arity = len(tmp.arg)
	// }
	// return &tmp.scmHead
}

func ObjString(o Obj) string {
	return (*scmHead)(o).GoString()
}

func (o *scmPair) fmt(buf io.Writer, start bool) {
	if start {
		fmt.Fprintf(buf, "(%s", ObjString(o.car))
	} else {
		fmt.Fprintf(buf, " %s", ObjString(o.car))
	}
	switch *o.cdr {
	case scmHeadNull:
		fmt.Fprintf(buf, ")")
	case scmHeadPair:
		mustPair(o.cdr).fmt(buf, false)
	default:
		fmt.Fprintf(buf, " . %s)", ObjString(o.cdr))
	}
}

func (o *scmHead) GoString() string {
	switch *o {
	case scmHeadNumber:
		f := mustNumber(o)
		if !isPreciseInteger(f.val) {
			return fmt.Sprintf("%f", f.val)
		}
		return fmt.Sprintf("%d", int(f.val))
	case scmHeadPair:
		var buf bytes.Buffer
		mustPair(o).fmt(&buf, true)
		return buf.String()
	case scmHeadVector:
		return fmt.Sprintf("#vector")
	case scmHeadNull:
		return fmt.Sprintf("()")
	case scmHeadString:
		return fmt.Sprintf(`"%s"`, mustString(o))
	case scmHeadSymbol:
		return fmt.Sprintf("%s", GetSymbol(o))
	case scmHeadBoolean:
		if o == True {
			return fmt.Sprintf("true")
		} else if o == False {
			return fmt.Sprintf("false")
		} else {
			return fmt.Sprintf("Boolean(something wrong)")
		}
	case scmHeadError:
		return fmt.Sprintf("Error(%s)", mustError(o).err)
	case scmHeadProcedure:
		return fmt.Sprintf("#procedure")
	case scmHeadStream:
		return fmt.Sprintf("#stream")
	case scmHeadPrimitive:
		prim := mustPrimitive(o)
		return fmt.Sprintf("#primitive(%s)", prim.Name)
	case scmHeadRaw:
		return "#raw"
	}
	return fmt.Sprintf("unknown type %d", *o)
}
