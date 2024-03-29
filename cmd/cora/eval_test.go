package main

import (
	"os"
	// "bytes"
	"fmt"
	"io"
	"strings"
	"testing"
)

type testCase struct {
	name   string
	input  string
	output string
}

var basicCases = []testCase{
	testCase{
		name:   "let and let",
		input:  "(let a (let b 1 (let c 2 (+ b c))) a)",
		output: "3",
	},

	testCase{
		name:   "curry as arg",
		input:  `((lambda (f) (f 42)) (+ 1))`,
		output: "43",
	},

	testCase{
		name: "let-variable-shadow",
		input: `(do (set (quote f) (lambda (a b)
					   (let a 3 a))) (f 4 5))`,
		output: "3",
	},

	testCase{
		name: "let variable shadow",
		input: `(let Result 123
	(let Result 456
		  (if (= Result 456)
		      true
		      Result)))`,
		output: "true",
	},

	testCase{
		name:   "curry",
		input:  `(do (set (quote f) (lambda (x y z) y)) ((f 1 2) 3))`,
		output: "2",
	},

	testCase{
		name:   "curry-partial",
		input:  `((lambda (x) (lambda (y) (lambda (z) (+ x z)))) 1 2 3)`,
		output: "4",
	},

	// testCase{
	// 	name:   "trap-let",
	// 	input:  "(trap-error (let X 666 42) (lambda E (cons --> (cons A ()))))",
	// 	output: "42",
	// },

	testCase{
		name: "curry1",
		input: `(do (set (quote f) (lambda (x)
			 (do (set (quote ignore) (lambda (z w)
			   (lambda (y)
			      z))) (ignore))))
			(((f 1) 2 3) 4))`,
		output: "2",
	},

	testCase{
		name: "fib10",
		input: `(do (set (quote fib) (lambda (i)
	(if (= i 0)
	    1
	    (if (= i 1)
		1
		(+ (fib (- i 1)) (fib (- i 2)))))))
	(fib 10))`,
		output: "89",
	},

	testCase{
		name: "proper tail call",
		input: `(do (set (quote sum) (lambda (r i)
	  (if (= i 0)
	      r
	      (sum (+ r 1) (- i 1)))))
	(sum 0 5000000))`,
		output: "5000000",
	},

	testCase{
		name:   "do in args",
		input:  `(+ (do 1 (do 2 3)) 4)`,
		output: "7",
	},

	testCase{
		name:   "partial primitive",
		input:  `(+ (+ (+ 1 2) 3) 4)`,
		output: "10",
	},

	testCase{
		name:   "do in tail call",
		input:  `(do (set (quote f) (lambda (x y z) (do 1 (do 2 z)))) (f 1 2 3))`,
		output: "3",
	},

	testCase{
		name:   "closure value",
		input:  "((((lambda (x) (lambda (y) (lambda (z) (+ x z)))) 1) 2) 3)",
		output: "4",
	},

	testCase{
		name:   "basic func call",
		input:  `(do (set (quote id) (lambda (x) x)) (id (do 1 (do 2 42))))`,
		output: "42",
	},

	testCase{
		name:   "identify function",
		input:  `(do (set (quote id) (lambda (x) x)) (id 42))`,
		output: "42",
	},

	testCase{
		name:   "basic set",
		input:  `(do (set (quote x) 42) x)`,
		output: "42",
	},

	testCase{
		name:   "basic if",
		input:  `(if true 1 2)`,
		output: "1",
	},

	testCase{
		name:   "curry lambda",
		input:  `((lambda (x) (lambda (y) (lambda (z) z))) 1 2 3)`,
		output: "3",
	},

	testCase{
		name:   "basic lambda",
		input:  `(((lambda (x y) (lambda (z) y)) 1 2) 3)`,
		output: "2",
	},

	testCase{
		name:   "basic do",
		input:  `(do 1 2)`,
		output: "2",
	},

	testCase{
		name:   "basic primitive",
		input:  `(+ 3 7)`,
		output: "10",
	},

	testCase{
		name:   "constant",
		input:  "42",
		output: "42",
	},

	testCase{
		name:   "partial primitive1",
		input:  `((+ 1) 2)`,
		output: "3",
	},

	testCase{
		name:   "partial primitive2",
		input:  `(((+) 1) 2)`,
		output: "3",
	},
}

func TestBasic(t *testing.T) {
	ctx := New()
	for _, c := range basicCases {
		t.Run(c.name, func(t *testing.T) {
			res := evalString(ctx, c.input)
			if res.String() != c.output {
				fmt.Println("input is:", c.input)
				fmt.Println("output is:", res.String())
				t.Fail()
			}
			if len(ctx.stack) != 0 {
				fmt.Println("unexpected sp after evaluation:", len(ctx.stack))
				t.Fail()
			}
			if ctx.base != 0 {
				fmt.Println("unexpected stack after evaluation:", ctx.base)
				t.Fail()
			}
		})
	}
}

func TestIssue25(t *testing.T) {
	ctx := New()
	evalString(ctx, "(set (quote return) (lambda (x) (lambda (k) (k x))))")
	evalString(ctx, "(set (quote add1) (lambda (n) (return (+ n 1))))")
	res := evalString(ctx, "(add1 4 (lambda (x) x))")
	if res != Integer(5) {
		t.Fail()
	}
}

func evalString(ctx *VM, exp string) Obj {
	r := NewSexpReader(strings.NewReader(exp), "")
	sexp, err := r.Read()
	if err != nil && err != io.EOF {
		panic(err)
	}

	sexp = macroExpand(ctx, sexp)

	return ctx.Eval(sexp)
}

// func TestTryThrow(t *testing.T) {
// 	ctx := New()
// 	res := evalString(ctx, `(try (lambda (cc handler)
// 		(+ 4 (throw 42 cc handler)))
// 	(lambda (x k)
// 		(k 66)))`)
// 	if res != Integer(70) {
// 		t.Fail()
// 	}
// }

func TestLoadData(t *testing.T) {
	r := NewSexpReader(strings.NewReader("(load \"./init.cora\")"), "")
	sexp, err := r.Read()
	if err != nil && err != io.EOF {
		panic(err)
	}

	vm := New()
	res := vm.Eval(sexp)
	fmt.Println(res.String())
}

func TestClosureConvert(t *testing.T) {
	// r := NewSexpReader(strings.NewReader(`(let #cc50 (lambda () (error "no match-help found!")) 42)`), "")
	// r := NewSexpReader(strings.NewReader(`(lambda (x) x)`), "")
	// r := NewSexpReader(strings.NewReader(`(lambda (z) (+ x z))`))
	// r := NewSexpReader(strings.NewReader(`((((lambda (x) (lambda (y) (lambda (z) (+ x y)))) 1) 2) 3)`), "")
	// 	r := NewSexpReader(strings.NewReader(`(lambda (x y z)
	// (let a 3
	// (lambda (b)
	//   (let base 5
	//      a))))`), "")
	r := NewSexpReader(strings.NewReader(`(let #val2 42 (lambda () (cons #val2 (lambda () 111))))`), "")
	sexp, err := r.Read()
	if err != nil && err != io.EOF {
		panic(err)
	}
	exp1, frees, _ := closureConvert(sexp, Nil, Nil, nil, 0)
	fmt.Println("result:", exp1, frees)
}

func TestXXX(t *testing.T) {
	// r := NewSexpReader(strings.NewReader(`(let Result 123
	// (let Result 456
	// 	  (if (= Result 456)
	// 	      true
	// 	      Result)))`), "")
	// r := NewSexpReader(strings.NewReader(`((lambda (x y) (let a 3 a)) 5 7)`), "")
	// r := NewSexpReader(strings.NewReader(`((let a 3 (lambda (b) (let base 5 b))) 42)`), "")
	// r := NewSexpReader(strings.NewReader(`((+ 1) 2)`), "")
	// r := NewSexpReader(strings.NewReader(`(((lambda (x y) x) 4) 5)`))
	// r := NewSexpReader(strings.NewReader(`((((lambda (x) (lambda (y) (lambda (z) (+ x z)))) 1) 2) 3)`))
	// r := NewSexpReader(strings.NewReader(`(((lambda (x) (lambda () (+ x 1))) 5))`))
	// r := NewSexpReader(strings.NewReader(`(+ 3)`), "")
	// r := NewSexpReader(strings.NewReader(`((lambda (a) (+ 1 a)) 2)`), "")
	// 	r := NewSexpReader(strings.NewReader(`(do
	// (set 'f (lambda (a b c) a))
	// (do
	//  (set 'g (lambda (n) (+ n 1)))
	//  (f 1 (g 5) 4)))`))
	// r := NewSexpReader(strings.NewReader("(load \"../cmd/cora/init.cora\")"))
	// r := NewSexpReader(strings.NewReader(`(do (set (quote sum) (lambda (r i)
	//   (if (= i 0)
	//       r
	//       (sum (+ r 1) (- i 1)))))
	// (sum 0 50000000))`), "")
	// r := NewSexpReader(strings.NewReader(`(do (set (quote f) (lambda (a b)
	// 				   (let a 3 a))) (f 4 5))`), "")
	// r := NewSexpReader(strings.NewReader(`(set (quote simple) (lambda (#p126)
	// 		(let #val127 (cons #p126 ())
	// 		     (let #cc128 (lambda () (error "no match-help found!"))
	// 			  (if (if (cons? #val127) (if (not (null? #val127)) true false) false)
	// 			      (let res (car #val127)
	// 				   (if (null? (cdr #val127))
	// 				       (reverse res)
	// 				       (#cc128)))
	// 			      (#cc128))))))`), "")
	// sexp, err := r.Read()
	// if err != nil && err != io.EOF {
	// 	panic(err)
	// }

	f, err := os.Open("../../lib/compile.cora")
	if err != nil {
		panic(err)
	}
	defer f.Close()

	res := Nil
	r := NewSexpReader(f, "cora/lib/compile")
	for {
		exp, err := r.Read()
		if err != nil {
			if err != io.EOF {
				panic(err)
			}
			break
		}
		res = cons(exp, res)
	}
	res = reverse(res)

	vm := New()
	// res := vm.Eval(sexp)
	// fmt.Println(res.String())

	// loadFile(vm, "init.cora", "")
	vm.Eval(cons(MakeSymbol("import"), cons(String("cora/init"), Nil)))

	outfile, err := os.Create("../../compile.bc")
	if err != nil {
		fmt.Println(err)
		panic(err)
	}
	defer outfile.Close()

	fmt.Fprintf(outfile, "(")
	for ; res != Nil; res = cdr(res) {
		sexp := car(res)

		// fmt.Printf("%s\n", sexp)

		tmp := cons(symQuote, cons(sexp, Nil))
		tmp = cons(MakeSymbol("macroexpand"), cons(tmp, Nil))
		sexp = vm.Eval(tmp)
		fmt.Printf("%s\n", sexp)

		exp1, _, nlets := closureConvert(sexp, Nil, Nil, nil, 0)
		code := compile(exp1, nil, Nil, exit)
		code = reserveForLetBinding(nlets, code)

		fmt.Fprintf(outfile, "(")
		code.MarshalText(outfile)
		fmt.Fprintf(outfile, ") ")
	}
	fmt.Fprintf(outfile, ") ")

	// var buf bytes.Buffer
	// err = code.MarshalText(&buf)
	// if err != nil {
	// 	fmt.Println(err)
	// 	panic(err)
	// }
	// fmt.Println(buf.String())
}

func TestImport(t *testing.T) {
	r := NewSexpReader(strings.NewReader("(@import \"std/cora/basic\" xxx)\n(xxx.yyy 42)"), "")
	o, err := r.Read()
	if err != nil {
		t.Error(err)
	}
	pathStr := String("std/cora/basic")
	s := cons(MakeSymbol("import"), cons(pathStr, Nil))
	if !eq(o, s) {
		t.Errorf("expect %s, but get %s", s, o)
	}
	if r.pkgMapping["xxx"] != string(pathStr) {
		t.Error("xxx")
	}

	x, err := r.Read()
	if !eq(car(x), MakeSymbol("std/cora/basic.yyy")) {
		t.Error("result not expect 11")
	}
}

func TestReadComment(t *testing.T) {
	r := NewSexpReader(strings.NewReader(`(42    ;; free variable
)`), "")
	_, err := r.Read()
	if err != nil {
		t.Error(err)
	}
}
