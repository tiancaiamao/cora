package cora

import (
	"bufio"
	"io"
	"strconv"
	"strings"
	"unicode"
)

type SexpReader struct {
	reader     *bufio.Reader
	buf        []rune
	selfPath   string
	pkgMapping map[string]string
}

func NewSexpReader(r io.Reader, selfPath string) *SexpReader {
	return &SexpReader{
		reader:     bufio.NewReader(r),
		selfPath:   selfPath,
		pkgMapping: make(map[string]string),
	}
}

func (r *SexpReader) Read() (Obj, error) {
	b, err := peekFirstRune(r.reader)
	if err != nil {
		return Nil, err
	}

	switch b {
	case rune('\''):
		return r.readQuoteMacro()
	case rune('['):
		return r.readListMacro()
	case rune('('):
		return r.readSexp()
	case rune('"'):
		return r.readString()
	}

	r.resetBuf()
	r.appendBuf(b)
	b, _, err = r.reader.ReadRune()
	for err == nil {
		if r.notSymbolChar(b) {
			r.reader.UnreadRune()
			break
		}
		r.appendBuf(b)
		b, _, err = r.reader.ReadRune()
	}

	return r.tokenToObj(string(r.buf)), err
}

func (r *SexpReader) readString() (Obj, error) {
	r.resetBuf()
	b, _, err := r.reader.ReadRune()
	for err == nil && b != rune('"') {
		r.appendBuf(b)
		b, _, err = r.reader.ReadRune()
	}
	return String(r.buf), err
}

func (r *SexpReader) readSexp() (Obj, error) {
	ret := Nil
	b, err := peekFirstRune(r.reader)
	for err == nil && b != ')' {
		var obj Obj
		r.reader.UnreadRune()
		obj, err = r.Read()
		if err == nil {
			ret = cons(obj, ret)
			b, err = peekFirstRune(r.reader)
		}
	}
	if err == nil {
		ret = reverse(ret)
		// Handle the @import reader macro
		if _, ok := ret.(*Cons); ok {
			// (@import "path/to/file" sym)
			if car(ret) == MakeSymbol("@import") {
				path := cadr(ret)
				if tmp, ok := cdr(cdr(ret)).(*Cons); ok {
					if sym, ok := tmp.car.(*Symbol); ok {
						r.pkgMapping[sym.str] = string(path.(String))
					}
				}
				hd := MakeSymbol("import")
				return cons(hd, cons(path, Nil)), nil
			}
		}
	}
	return ret, err
}

func (r *SexpReader) readQuoteMacro() (Obj, error) {
	obj, err := r.Read()
	if err != nil {
		return obj, err
	}
	return cons(symQuote, cons(obj, Nil)), nil
}

func (r *SexpReader) readListMacro() (Obj, error) {
	hd := MakeSymbol("list")
	tmp := Nil
	b, err := peekFirstRune(r.reader)
	for err == nil && b != ']' {
		if b == '.' {
			hd = MakeSymbol("list-rest")
		} else {
			r.reader.UnreadRune()
		}
		var obj Obj
		obj, err = r.Read()
		if err == nil {
			tmp = cons(obj, tmp)
			b, err = peekFirstRune(r.reader)
		}
	}
	return cons(hd, reverse(tmp)), nil
}

func (r *SexpReader) resetBuf() {
	r.buf = r.buf[:0]
}

func (r *SexpReader) appendBuf(b rune) {
	r.buf = append(r.buf, b)
}

func peekUntilNewline(r *bufio.Reader) (b rune, err error) {
	for err == nil && b != '\n' {
		b, _, err = r.ReadRune()
	}
	return
}

func peekFirstRune(r *bufio.Reader) (rune, error) {
	done := false
	b, _, err := r.ReadRune()
	for err == nil && !done {
		switch {
		case unicode.IsSpace(b):
			b, _, err = r.ReadRune()
		case b == rune(';'):
			b, err = peekUntilNewline(r)
		default:
			done = true
		}
	}
	return b, err
}

func (r *SexpReader) notSymbolChar(c rune) bool {
	if unicode.IsSpace(c) {
		return true
	}
	switch c {
	case '(', '"', ')':
		return true
	case '[', ']':
		return true
	}
	return false
}

func (r *SexpReader) tokenToObj(str string) Obj {
	switch str {
	case "true":
		return True
	case "false":
		return False
	}
	if v, err := strconv.ParseFloat(str, 64); err == nil {
		return MakeNumber(v)
	}
	firstDot := strings.IndexByte(str, '.')
	switch {
	case firstDot == 0:
		return MakeSymbol(r.selfPath + str)
	case firstDot > 0:
		pkg := str[:firstDot]
		if path, ok := r.pkgMapping[pkg]; ok {
			return MakeSymbol(path + str[firstDot:])
		}
	}
	return MakeSymbol(str)
}
