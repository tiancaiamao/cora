// Copyright (C) 2011, 2017 Göran Weinholt <goran@weinholt.se>
// Copyright (C) 2011 Per Odlund <per.odlund@gmail.com>

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

// Standard library for conscheme

package vm

import (
	"bytes"
	"fmt"
	"io"
	"os"
	"path/filepath"
	"plugin"
	"runtime/pprof"
	"unicode"
	"unicode/utf8"
)

// Characters

func char_whitespace_p(x Obj) Obj {
	if char_p(x) == False {
		panic("bad type")
	}
	return Make_boolean(unicode.IsSpace(char_to_int(x)))
}

func char_upcase(x Obj) Obj {
	if char_p(x) == False {
		panic("bad type")
	}
	return Make_char(unicode.ToUpper(char_to_int(x)))
}

func char_downcase(x Obj) Obj {
	if char_p(x) == False {
		panic("bad type")
	}
	return Make_char(unicode.ToLower(char_to_int(x)))
}

// Input and output

type ScmInputPort struct {
	scmHead
	r         io.Reader
	is_binary bool
	// one byte of lookahead if is_binary, otherwise one codepoint
	lookahead_valid int
	lookahead       [utf8.UTFMax]byte
}

type ScmOutputPort struct {
	scmHead
	w         io.Writer
	is_binary bool
	buf       [1]byte
}

var stdin, curin, stdout, curout Obj

func init() {
	// FIXME: per-thread
	stdin = &ScmInputPort{scmHead: InputPort, r: os.Stdin, is_binary: false}
	curin = stdin

	stdout = &ScmOutputPort{scmHead: OutputPort, w: os.Stdout, is_binary: false}
	curout = stdout
}

func port_p(x Obj) Obj {
	switch (x).(type) {
	case *ScmInputPort:
		return True
	case *ScmOutputPort:
		return True
	}
	return False
}

func input_port_p(x Obj) Obj {
	switch (x).(type) {
	case *ScmInputPort:
		return True
	}
	return False
}

func output_port_p(x Obj) Obj {
	switch (x).(type) {
	case *ScmOutputPort:
		return True
	}
	return False
}

// Called by Obj_display
func display_port(out io.Writer, port Obj) {
	name := "*unnamed*"
	var is_binary bool
	switch v := (port).(type) {
	case *ScmOutputPort:
		fmt.Fprintf(out, "#<output-port ")
		is_binary = v.is_binary
		switch f := v.w.(type) {
		case *os.File:
			name = f.Name()
		}
	case *ScmInputPort:
		fmt.Fprintf(out, "#<input-port ")
		is_binary = v.is_binary
		switch f := v.r.(type) {
		case *os.File:
			name = f.Name()
		}
	}
	if is_binary {
		fmt.Fprintf(out, "binary")
	} else {
		fmt.Fprintf(out, "textual")
	}
	fmt.Fprintf(out, " %s>", name)
}

// XXX: curin and curout should be handled with dynamic-wind and
// should be thread local
func current_input_port() Obj {
	return curin
}

func current_output_port() Obj {
	return curout
}

func file_exists_p(fn Obj) Obj {
	_, err := os.Stat(string(mustString(fn)))
	return Make_boolean(err == nil)
}

func delete_file(fn Obj) Obj {
	if err := os.Remove(string(mustString(fn))); err != nil {
		panic(fmt.Sprintf("I/O error: %s", err))
	}
	return Void
}

func open_input_file(fn Obj) Obj {
	f, e := os.OpenFile(string(mustString(fn)), os.O_RDONLY, 0666)
	if e != nil {
		panic(fmt.Sprintf("I/O error: %s", e))
	}
	return &ScmInputPort{scmHead: InputPort, r: f, is_binary: false}
}

func open_output_file(fn Obj) Obj {
	f, e := os.OpenFile(string(mustString(fn)), os.O_WRONLY|os.O_CREATE|os.O_EXCL, 0666)
	if e != nil {
		panic(fmt.Sprintf("I/O error: %s", e))
	}
	return &ScmOutputPort{w: f, is_binary: false}
}

func open_file_output_port(fn Obj) Obj {
	// TODO: takes three more arguments
	f, e := os.OpenFile(string(mustString(fn)), os.O_WRONLY|os.O_CREATE|os.O_EXCL, 0666)
	if e != nil {
		panic(fmt.Sprintf("I/O error: %s", e))
	}
	return &ScmOutputPort{w: f, is_binary: true}
}

func close_input_port(port Obj) Obj {
	v := mustInputPort(port)
	switch f := v.r.(type) {
	case *os.File:
		f.Close()
	}
	return Void
}

func close_output_port(port Obj) Obj {
	v := mustOutputPort(port)
	switch f := v.w.(type) {
	case *os.File:
		f.Close()
	}
	return Void
}

func close_port(port Obj) Obj {
	switch v := (port).(type) {
	case *ScmInputPort:
		switch f := v.r.(type) {
		case *os.File:
			f.Close()
		}
	case *ScmOutputPort:
		switch f := v.w.(type) {
		case *os.File:
			f.Close()
		}
	}
	return Void
}

func _read_char(port Obj) Obj {
	switch v := (port).(type) {
	case *ScmInputPort:
		if v.is_binary {
			panic("bad port type")
		}
		for !utf8.FullRune(v.lookahead[0:v.lookahead_valid]) {
			n, err := io.ReadFull(v.r,
				v.lookahead[v.lookahead_valid:v.lookahead_valid+1])
			v.lookahead_valid += n
			switch {
			case err == io.EOF:
				return Eof
			case err != nil:
				panic("I/O read error")
			}
		}
		cp, _ := utf8.DecodeRune(v.lookahead[0:v.lookahead_valid])
		v.lookahead_valid = 0
		return Make_char(cp)
	}
	panic("bad type")
}

func _peek_char(port Obj) Obj {
	switch v := (port).(type) {
	case *ScmInputPort:
		if v.is_binary {
			panic("bad port type")
		}
		for !utf8.FullRune(v.lookahead[0:v.lookahead_valid]) {
			n, err := io.ReadFull(v.r,
				v.lookahead[v.lookahead_valid:v.lookahead_valid+1])
			v.lookahead_valid += n
			switch {
			case err == io.EOF:
				return Eof
			case err != nil:
				panic("I/O read error")
			}
		}
		cp, _ := utf8.DecodeRune(v.lookahead[0:v.lookahead_valid])
		return Make_char(cp)
	}
	panic("bad type")
}

func _write_char(ch, port Obj) Obj {
	if char_p(ch) == False {
		panic("bad type")
	}
	switch v := (port).(type) {
	case *ScmOutputPort:
		if v.is_binary {
			panic("bad port type")
		}
		buf := make([]rune, 1)
		buf[0] = char_to_int(ch)
		_, err := io.WriteString(v.w, string(buf))
		// XXX: should check number of bytes written
		if err != nil {
			panic("I/O write error")
		}
		return Void
	}
	panic("bad type")
}

func lookahead_u8(port Obj) Obj {
	switch v := (port).(type) {
	case *ScmInputPort:
		if !v.is_binary {
			panic("bad port type")
		}
		if v.lookahead_valid == 0 {
			n, err := io.ReadFull(v.r, v.lookahead[0:1])
			if n != 1 {
				return Eof
			}
			if err != nil {
				panic("I/O read error")
			}
		}
		v.lookahead_valid = 1
		return Make_fixnum(int(v.lookahead[0]))
	}
	panic("bad type")
}

func get_u8(port Obj) Obj {
	switch v := (port).(type) {
	case *ScmInputPort:
		if !v.is_binary {
			panic("bad port type")
		}
		if v.lookahead_valid == 0 {
			n, err := io.ReadFull(v.r, v.lookahead[0:1])
			if n != 1 {
				return Eof
			}
			if err != nil {
				panic("I/O read error")
			}
		}
		v.lookahead_valid = 0
		return Make_fixnum(int(v.lookahead[0]))
	}
	panic("bad type")
}

func put_u8(port, octet Obj) Obj {
	byt := number_to_int(octet)
	if byt < 0 || byt > 255 {
		panic("not an octet")
	}
	switch v := (port).(type) {
	case *ScmOutputPort:
		if !v.is_binary {
			panic("bad port type")
		}
		v.buf[0] = byte(byt)
		n, err := v.w.Write(v.buf[0:1])
		if n != 1 {
			panic("I/O short write")
		}
		if err != nil {
			panic("I/O write error")
		}

		return Void
	}
	panic("bad type")
}

func put_bytevector(port, _bv Obj) Obj {
	bv := mustByteVector(_bv)
	switch v := (port).(type) {
	case *ScmOutputPort:
		if !v.is_binary {
			panic("bad port type")
		}
		n, err := v.w.Write(bv)
		// XXX: should loop
		if n != len(bv) {
			panic("I/O short write")
		}
		if err != nil {
			panic("I/O write error")
		}

		return Void
	}
	panic("bad type")
}

func display(x, port Obj) Obj {
	v := mustOutputPort(port)
	if v.is_binary {
		panic("bad port type")
	}
	Obj_display(x, v.w, False)
	return Void
}

func write(x, port Obj) Obj {
	v := mustOutputPort(port)
	if v.is_binary {
		panic("bad port type")
	}
	Obj_display(x, v.w, True)
	return Void
}

func open_string_input_port(str Obj) Obj {
	sink := bytes.NewBufferString(string(mustString(str)))
	return &ScmInputPort{scmHead: InputPort, r: sink}
}

// Bytevectors

func bytevector_p(x Obj) Obj {
	switch (x).(type) {
	case *ScmBytevector:
		return True
	}
	return False
}

func bytevector_length(x Obj) Obj {
	switch v := (x).(type) {
	case *ScmBytevector:
		return make_number(len(v.bytevector))
	}
	panic("bad type")
}

func u8_list_to_bytevector(l Obj) Obj {
	var bv []byte = make([]byte, number_to_int(Length(l)))

	for i := 0; l != Eol; i++ {
		v := mustPair(l)
		octet := number_to_int(v.car)
		if octet < 0 || octet > 255 {
			panic("not an octet")
		}
		bv[i] = byte(octet)
		l = v.cdr
	}

	return &ScmBytevector{Bytevector, bv}
}

func string_to_utf8(str Obj) Obj {
	return &ScmBytevector{Bytevector, []byte(string(mustString(str)))}
}

func _open_bytevector_output_port() Obj {
	var sink bytes.Buffer
	return &ScmOutputPort{w: &sink, is_binary: true}
}

func _bytevector_output_port_extract(p Obj) Obj {
	v := mustOutputPort(p)
	sink := (v.w).(*bytes.Buffer)

	ret := make([]byte, sink.Len())
	copy(ret, sink.Bytes())
	sink.Reset()

	return &ScmBytevector{Bytevector, ret}
}

// Misc

func Command_line() Obj {
	ret := Eol
	for i := len(os.Args) - 1; i >= 0; i-- {
		arg := &ScmString{String, ([]rune)(os.Args[i])}
		ret = Cons(arg, ret)
	}
	return ret
}

func Set_command_line(strings Obj) Obj {
	new_args := []string{}
	for strings != Eol {
		new_args = append(new_args, string(mustString(car(strings))))
		strings = cdr(strings)
	}
	os.Args = new_args

	return Void
}

func start_cpu_profile(p Obj) Obj {
	v := mustOutputPort(p)
	pprof.StartCPUProfile(v.w)

	return Void
}

func stop_cpu_profile() Obj {
	pprof.StopCPUProfile()
	return Void
}

func load_plugin(o Obj) Obj {
	path := string(mustString(o))
	p, err := plugin.Open(path)
	if err != nil {
		panic(fmt.Sprintf("bad plugin path: %s", err))
	}
	_, file := filepath.Split(path)
	return &ScmPlugin{
		scmHead: Plugin,
		name:    file,
		Plugin:  p,
	}
}

func plugin_lookup(p, m Obj) Obj {
	p1 := mustPlugin(p)
	m1 := string(mustString(m))

	sym, err := p1.Lookup(m1)
	if err != nil {
		panic(err)
	}

	return &ScmProcedure{
		scmHead: Procedure,
		name:    m1,
		plugin:  sym,
	}
}
