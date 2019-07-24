package kl

import (
	"bufio"
	"io"
	"strconv"
	"unicode"
)

type SexpReader struct {
	reader *bufio.Reader
	buf    []rune
}

func NewSexpReader(r io.Reader) *SexpReader {
	return &SexpReader{
		reader: bufio.NewReader(r),
	}
}

var quoteSym = MakeSymbol("quote")

func (r *SexpReader) Read() (Obj, error) {
	b, err := peekFirstRune(r.reader)
	if err != nil {
		return Nil, err
	}

	switch b {
	case rune('\''):
		obj, err := r.Read()
		if err != nil {
			return obj, err
		}
		return cons(quoteSym, cons(obj, Nil)), nil
	case rune('('):
		return r.readSexp()
	case rune('['):
		tmp, rest, err := r.readListMacro()
		if err != nil {
			return Nil, err
		}
		var hd Obj
		if rest {
			hd = MakeSymbol("list-rest")
		} else {
			hd = MakeSymbol("list")
		}
		return cons(hd, tmp), nil
	case rune('"'):
		return r.readString()
	}

	r.resetBuf()
	r.appendBuf(b)
	b, _, err = r.reader.ReadRune()
	for err == nil {
		if notSymbolChar(b) {
			r.reader.UnreadRune()
			break
		}
		r.appendBuf(b)
		b, _, err = r.reader.ReadRune()
	}

	return tokenToObj(string(r.buf)), err
}

func (r *SexpReader) readString() (Obj, error) {
	r.resetBuf()
	b, _, err := r.reader.ReadRune()
	for err == nil && b != rune('"') {
		r.appendBuf(b)
		b, _, err = r.reader.ReadRune()
	}
	return MakeString(string(r.buf)), err
}

func (r *SexpReader) readSexp() (Obj, error) {
	ret := Nil
	b, err := peekFirstRune(r.reader)
	for err == nil && b != rune(')') {
		var obj Obj
		r.reader.UnreadRune()
		obj, err = r.Read()
		if err == nil {
			ret = cons(obj, ret)
			b, err = peekFirstRune(r.reader)
		}
	}
	return reverse(ret), err
}

func (r *SexpReader) readListMacro() (Obj, bool, error) {
	var rest, finish bool
	var obj Obj
	ret := Nil
	b, err := peekFirstRune(r.reader)
	for err == nil && !finish {
		switch b {
		case rune('.'):
			rest = true
			b, err = peekFirstRune(r.reader)
		case rune(']'):
			finish = true
		default:
			r.reader.UnreadRune()
			obj, err = r.Read()
			if err == nil {
				ret = cons(obj, ret)
				b, err = peekFirstRune(r.reader)
			}
		}
	}
	return reverse(ret), rest, err
}

func (r *SexpReader) resetBuf() {
	r.buf = r.buf[:0]
}

func (r *SexpReader) appendBuf(b rune) {
	r.buf = append(r.buf, b)
}

func peekFirstRune(r *bufio.Reader) (rune, error) {
	b, _, err := r.ReadRune()
	for err == nil && unicode.IsSpace(b) {
		b, _, err = r.ReadRune()
	}
	return b, err
}

func notSymbolChar(c rune) bool {
	return unicode.IsSpace(c) || c == '(' || c == '"' || c == ')' || c == '[' || c == ']'
}

func tokenToObj(str string) Obj {
	switch str {
	case "true":
		return True
	case "false":
		return False
	}
	if v, err := strconv.ParseFloat(str, 64); err == nil {
		return MakeNumber(v)
	}
	return MakeSymbol(str)
}
