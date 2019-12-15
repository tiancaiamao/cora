all: cora runtime

runtime:
	make -C runtime
	mv runtime/cora a.out

cora:
	go build -o cora cora.go
