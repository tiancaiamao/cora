package re

import (
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
		name:   "curry as arg",
		input:  `((lambda (f) (f 42)) (+ 1))`,
		output: "43",
	},

	// testCase{
	// 	name: "let-variable-shadow",
	// 	input: `(do (set (quote f) (lambda (a b)
	// 				   (let a 3 a)) (f 4 5)))`,
	// 	output: "3",
	// },

	// 	testCase{
	// 		name: "let variable shadow",
	// 		input: `(let Result 123
	// (let Result 456
	// 	  (if (= Result 456)
	// 	      true
	// 	      Result)))`,
	// 		output: "true",
	// 	},

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
	r := NewSexpReader(strings.NewReader(exp))
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

// func TestLoadData(t *testing.T) {
// 	r := NewSexpReader(strings.NewReader("(load \"./init.cora\")"))
// 	sexp, err := r.Read()
// 	if err != nil && err != io.EOF {
// 		panic(err)
// 	}

// 	vm := New()
// 	res := vm.Eval(sexp)
// 	fmt.Println(res.String())
// }

func TestClosureConvert(t *testing.T) {
	// r := NewSexpReader(strings.NewReader(`(lambda (x) x)`))
	// r := NewSexpReader(strings.NewReader(`(lambda (z) (+ x z))`))
	r := NewSexpReader(strings.NewReader(`((((lambda (x) (lambda (y) (lambda (z) (+ x y)))) 1) 2) 3)`))
	sexp, err := r.Read()
	if err != nil && err != io.EOF {
		panic(err)
	}
	exp1, frees := closureConvert(sexp, Nil, Nil, nil)
	fmt.Println("result:", exp1, frees)
}

func TestXXX(t *testing.T) {
	r := NewSexpReader(strings.NewReader(`((+ 1) 2)`))
	// r := NewSexpReader(strings.NewReader(`(((lambda (x y) x) 4) 5)`))
	// r := NewSexpReader(strings.NewReader(`((((lambda (x) (lambda (y) (lambda (z) (+ x z)))) 1) 2) 3)`))
	// r := NewSexpReader(strings.NewReader(`(((lambda (x) (lambda () (+ x 1))) 5))`))
	// r := NewSexpReader(strings.NewReader(`(do (set 'f (lambda (x) x)) (f 44))`))
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
	// (sum 0 5000000))`))
	sexp, err := r.Read()
	if err != nil && err != io.EOF {
		panic(err)
	}

	// vm := New()
	// res := vm.Eval(sexp)
	// fmt.Println(res.String())

	// loadFile(vm, "../cmd/cora/init.cora")

	var vm VM
	res := vm.Eval(sexp)
	fmt.Printf("%#v\n", res)

	// var cg CodeGen
	// cg.GenC(code)
}
