package main

import (
	"io"
	"os"
	"path"

	"github.com/tiancaiamao/cora/runtime"
)

func loadFile(args ...runtime.Obj) runtime.Obj {
	file := runtime.GetString(args[0])
	var filePath string
	if _, err := os.Stat(file); err == nil {
		filePath = file
	} else {
		filePath = path.Join(runtime.PackagePath(), file)
		if _, err := os.Stat(filePath); err != nil {
			return runtime.MakeError(err.Error())
		}
	}

	f, err := os.Open(filePath)
	if err != nil {
		return runtime.MakeError(err.Error())
	}
	defer f.Close()

	r := runtime.NewSexpReader(f)
	for {
		exp, err := r.Read()
		if err != nil {
			if err != io.EOF {
				return runtime.MakeError(err.Error())
			}
			break
		}

		res := runtime.Eval(exp)
		if runtime.IsError(res) {
			return res
		}
	}
	return args[0]
}

func pwd(args ...runtime.Obj) runtime.Obj {
	dir, err := os.Getwd()
	if err != nil {
		return runtime.MakeError(err.Error())
	}
	return runtime.MakeString(dir)
}

func cd(args ...runtime.Obj) runtime.Obj {
	dir := runtime.GetString(args[0])
	err := os.Chdir(dir)
	if err != nil {
		return runtime.MakeError(err.Error())
	}
	return args[0]
}

func Main() {
	runtime.RegistNativeCall("prelude.load-file", 1, loadFile)
	runtime.RegistNativeCall("prelude.pwd", 0, pwd)
	runtime.RegistNativeCall("prelude.cd", 1, cd)
}
