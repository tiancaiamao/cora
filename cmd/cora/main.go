package main

import (
	"fmt"
	"io"
	"os"
	// "net/http"
	// _ "net/http/pprof"
	// "github.com/tiancaiamao/cora"
)

func main() {
	// go http.ListenAndServe(":6606", nil)
	vm := New()

	// load boot file
	vm.Eval(MakeCons(MakeSymbol("import"), MakeCons(String("cora/init"), Nil)))

	r := NewSexpReader(os.Stdin, "")
	for i := 0; ; i++ {
		fmt.Printf("%d #> ", i)

		sexp, err := r.Read()
		if err != nil && err != io.EOF {
			panic(err)
		}
		// fmt.Println("read=", sexp)

		sexp = vm.MacroExpand(sexp)
		// fmt.Println("after macroexpand=", sexp)

		res := vm.Eval(sexp)

		fmt.Printf(res.String())
		fmt.Println()
	}
}
