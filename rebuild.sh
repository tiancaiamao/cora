#!/bin/bash
# Rebuild the boot image and primitives.go.

# This can be used to get access to new primitives written in Go. See
# compiler/primitives.scm.

set -ex

go build
pushd compiler
time ../cora -boot conscheme.image.pre-built -c '(compile-bytecode "main.scm" "conscheme.image")'
../cora -boot conscheme.image -c '(print-operations (current-output-port))' > ../vm/primitives.go
cp -f conscheme.image conscheme.image.pre-built
popd
go build
