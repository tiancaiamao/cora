package main

import (
	"flag"
	"net/http"
	_ "net/http/pprof"

	"github.com/tiancaiamao/cora/runtime"
)

var pprof bool
var boot string

func init() {
	flag.BoolVar(&pprof, "pprof", false, "enable pprof")
	flag.StringVar(&boot, "boot", "", "use bootstrap file for testing")
}

func main() {
	flag.Parse()

	if pprof {
		go http.ListenAndServe(":8080", nil)
	}
	runtime.Boot = boot
	runtime.BootstrapCora()

	m := runtime.New()
	m.Eval(runtime.Cons(runtime.MakeSymbol("shen.shen"), runtime.Nil))
	return
}
