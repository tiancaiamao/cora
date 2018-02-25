package main

import (
	"time"

	"github.com/tiancaiamao/cora/runtime"
)

func now(args ...runtime.Obj) runtime.Obj {
	now := time.Now()
	return runtime.MakeString(now.String())
}

func Main() {
	runtime.RegistNativeCall("test.now", 0, now)
}
