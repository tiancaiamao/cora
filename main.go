package main

import (
	"flag"
	"net/http"
	_ "net/http/pprof"
	"path"
	"plugin"
	"os"
	"fmt"

	"github.com/tiancaiamao/shen-go/kl"
	"github.com/tiancaiamao/shen-go/vm"
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
	vm.Boot = boot
	vm.BootstrapCora()

	m := vm.New()
	m.RegistNativeCall("plugin-bind", 2, pluginBind(m))

	m.Eval(kl.Cons(kl.MakeSymbol("shen.shen"), kl.Nil))
	return
}

// (native plugin-bind "plugin" [bit-shift 2 "BitLeftShift"])
func pluginBind(m *vm.VM) func(...kl.Obj) kl.Obj {
	return func(args ...kl.Obj) kl.Obj {
		pluginName := kl.GetString(args[0])
		pluginPath := path.Join("/home/genius/project/src/github.com/tiancaiamao/shen-go/pkg/prelude", pluginName)
		if _, err := os.Stat(pluginPath); err != nil {
			return kl.MakeError(err.Error())
		}
		bindInfo := getBindInfo(args[1])

		p, err := plugin.Open(pluginPath)
		if err != nil {
			return kl.MakeError(err.Error())
		}

		for _, info := range bindInfo {
			f, err := p.Lookup(info.PluginFunc)
			if err != nil {
				return kl.MakeError(err.Error())
			}
			if funcAddr, ok := f.(func(...kl.Obj) kl.Obj); !ok {
				return kl.MakeError(fmt.Sprintf("func %s signature is illeagel", info.PluginFunc))
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

func getBindInfo(l kl.Obj) []bindInfo {
	ret := make([]bindInfo, 0, 1)
	for l != kl.Nil {
		name := kl.GetSymbol(kl.Car(l))
		l = kl.Cdr(l)
		arity := kl.GetInteger(kl.Car(l))
		l = kl.Cdr(l)
		pluginName := kl.GetString(kl.Car(l))
		l = kl.Cdr(l)
		ret = append(ret, bindInfo{name, arity, pluginName})
	}
	return ret
}
