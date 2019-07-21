package main

import (
	"flag"
	"fmt"
	"io"
	"net/http"
	_ "net/http/pprof"
	"os"

	"github.com/tiancaiamao/cora/kl"
)

var pprof bool
var bootFile string

func init() {
	flag.BoolVar(&pprof, "pprof", false, "enable pprof")
	flag.StringVar(&bootFile, "boot", "init.cora", "the init file for bootstrap")
}

func main() {
	flag.Parse()

	if pprof {
		go http.ListenAndServe(":8080", nil)
	}

	e := kl.NewEvaluator()
	if len(bootFile) > 0 {
		e.Silence = true
		e.LoadFile(bootFile)
		e.Silence = false
	}
	r := kl.NewSexpReader(os.Stdin)
	for i := 0; ; i++ {
		fmt.Printf("%d #> ", i)
		sexp, err := r.Read()
		if err != nil {
			if err != io.EOF {
				fmt.Println("read error:", err)
			}
			break
		}

		res := e.Eval(sexp)
		fmt.Println(kl.ObjString(res))
	}
}
