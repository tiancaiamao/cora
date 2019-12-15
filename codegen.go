package main

import (
	"os"

	"github.com/tiancaiamao/cora/kl"
)

func main() {
	f, err := os.Open("a.bc")
	if err != nil {
		panic(err)
	}
	r := kl.NewSexpReader(f)
	sexp, err := r.Read()
	if err != nil {
		panic(err)
	}

	kl.GenerateC(kl.MakeString("gen.c"), sexp)
	return
}
