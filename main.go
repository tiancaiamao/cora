package main

import (
	"flag"
	"fmt"
	"net/http"
	_ "net/http/pprof"
	"os"
	"path"
	"plugin"

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

// (native plugin-bind "plugin" [bit-shift 2 "BitLeftShift"])
func pluginBind(m *runtime.VM) func(...runtime.Obj) runtime.Obj {
	return func(args ...runtime.Obj) runtime.Obj {
		pluginName := runtime.GetString(args[0])
		pluginPath := path.Join("/home/genius/project/src/github.com/tiancaiamao/shen-go/pkg/prelude", pluginName)
		if _, err := os.Stat(pluginPath); err != nil {
			return runtime.MakeError(err.Error())
		}
		bindInfo := getBindInfo(args[1])

		p, err := plugin.Open(pluginPath)
		if err != nil {
			return runtime.MakeError(err.Error())
		}

		for _, info := range bindInfo {
			f, err := p.Lookup(info.PluginFunc)
			if err != nil {
				return runtime.MakeError(err.Error())
			}
			if funcAddr, ok := f.(func(...runtime.Obj) runtime.Obj); !ok {
				return runtime.MakeError(fmt.Sprintf("func %s signature is illeagel", info.PluginFunc))
			} else {
				m.RegistNativeCall(info.Name, info.Arity, funcAddr)
			}
		}
		return args[0]
	}
}

type bindInfo struct {
	Name       string
	Arity      int
	PluginFunc string
}

func getBindInfo(l runtime.Obj) []bindInfo {
	ret := make([]bindInfo, 0, 1)
	for l != runtime.Nil {
		name := runtime.GetSymbol(runtime.Car(l))
		l = runtime.Cdr(l)
		arity := runtime.GetInteger(runtime.Car(l))
		l = runtime.Cdr(l)
		pluginName := runtime.GetString(runtime.Car(l))
		l = runtime.Cdr(l)
		ret = append(ret, bindInfo{name, arity, pluginName})
	}
	return ret
}
