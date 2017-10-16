// Copyright (C) 2017 Arthur <tiancaiamao@gmail.com>
// Copyright (C) 2011, 2017 Göran Weinholt <goran@weinholt.se>
// Copyright (C) 2011 Per Odlund <per.odlund@gmail.com>

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

package main

import (
	"flag"
	"fmt"
	"log"
	"os"
	"runtime"
	"runtime/pprof"
	"strings"

	"github.com/tiancaiamao/cora/vm"
)

const imagename = "conscheme.image"

var conschemedirs []string = []string{
	"/usr/local/share",
	"/usr/share",
	// XXX: this might not be a good idea in the long run
	"./compiler",
	"."}

const dirsep = "/"
const pathsep = ":"

var boot = flag.String("boot", "", "conscheme boot image file")
var cpuprofile = flag.String("cpuprofile", "", "write cpu profile to file")
var memprofile = flag.String("memprofile", "", "write memory profile to this file")

func usage() {
	fmt.Fprintf(os.Stderr, "Usage: conscheme [OPTION]... [FILE]...\n")
	flag.PrintDefaults()
	os.Exit(1)
}

func tryimage(fn string) (*vm.Deserializer, error) {
	f, e := os.OpenFile(fn, os.O_RDONLY, 0666)
	if e != nil {
		return nil, e
	}
	d, e := vm.NewReader(f)
	if e != nil {
		return nil, e
	}
	return d, nil
}

func findimage() *vm.Deserializer {
	if *boot != "" {
		d, e := tryimage(*boot)
		if e != nil {
			fmt.Fprintf(os.Stderr, "Not a conscheme image file: %v\n", e)
			usage()
		}
		return d
	}

	dirs := conschemedirs
	search := os.Getenv("CONSCHEMEDIRS")
	if search != "" {
		dirs = strings.Split(search, pathsep)
	}

	for i := range dirs {
		d, e := tryimage(fmt.Sprintf("%s%s%s", dirs[i], dirsep, imagename))
		if e == nil {
			return d
		}
	}

	return nil
}

func main() {
	// Parse arguments and pass on some to compiler/main.scm.
	var script = flag.String("script", "", "run a Scheme script")
	var eval_expr = flag.String("c", "", "eval expression and exit")
	flag.Parse()
	os.Args = flag.Args()
	// The first element in os.Args is always the script to run. If "" then REPL.
	if *script != "" {
		os.Args = append([]string{*script}, os.Args...)
	} else if len(os.Args) == 0 {
		os.Args = append(os.Args, "")
	}
	if *eval_expr != "" {
		os.Args = append([]string{os.Args[0], "-c", *eval_expr}, os.Args[1:]...)
	}

	if *cpuprofile != "" {
		f, err := os.Create(*cpuprofile)
		if err != nil {
			log.Fatal("could not create CPU profile: ", err)
		}
		if err := pprof.StartCPUProfile(f); err != nil {
			log.Fatal("could not start CPU profile: ", err)
		}
		defer pprof.StopCPUProfile()
	}

	d := findimage()
	if d == nil {
		fmt.Fprintf(os.Stderr, "Can't find the conscheme.image file\n")
		usage()
	}
	header := d.ReadObject()
	code := d.ReadObject()
	// vm.Write(header)
	// fmt.Print("\n")
	vm.Conscheme(header, code)

	if *memprofile != "" {
		f, err := os.Create(*memprofile)
		if err != nil {
			log.Fatal("could not create memory profile: ", err)
		}
		runtime.GC() // get up-to-date statistics
		if err := pprof.WriteHeapProfile(f); err != nil {
			log.Fatal("could not write memory profile: ", err)
		}
		f.Close()
	}
}
