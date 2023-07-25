package main

import (
	"fmt"
	"io"
	"os"
	// "net/http"
	// _ "net/http/pprof"

	"github.com/tiancaiamao/cora"
)

func main() {
	// go http.ListenAndServe(":6606", nil)
	vm := cora.New()

	// load boot file
	vm.Eval(cora.MakeCons(cora.MakeSymbol("import"), cora.MakeCons(cora.String("cora/init"), cora.Nil)))

	r := cora.NewSexpReader(os.Stdin, "")
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
