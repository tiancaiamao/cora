package main

import (
	"encoding/json"
	"fmt"
	"io"
	"log"
	"os"
)

type TraceEvent struct {
	Name string  `json:"name"`
	Ph   string  `json:"ph"`
	Ts   uint64  `json:"ts"`
	Pid  int     `json:"pid"`
	Tid  uint16  `json:"tid"`
	Id   uint32  `json:"id,omitempty"`
	Cat  string  `json:"cat,omitempty"`
}

func main() {
	if len(os.Args) < 2 {
		log.Fatal("Usage: trace_convert input_file")
	}

	f, err := os.Open(os.Args[1])
	if err != nil {
		log.Fatal(err)
	}
	defer f.Close()

	totalOfst := 0
	var events []TraceEvent
	pid := 1
	for {
		hdr := make([]byte, 16) // sizeof(trace_event_t): 1 + 1 + 2 + 4 + 8 = 16
		_, err := io.ReadFull(f, hdr)
		if err == io.EOF {
			break
		} else if err != nil {
			log.Fatal(err)
		}

		ph := hdr[0]
		switch ph {
		case 'B','E','b','e','s','f':
		default:
			panic(fmt.Sprintf("wrong data at ofst:%d", totalOfst))
		}
		nameLen := int(hdr[1])
		tid := uint16(hdr[2]) | uint16(hdr[3])<<8
		id := uint32(hdr[4]) | uint32(hdr[5])<<8 | uint32(hdr[6])<<16 | uint32(hdr[7])<<24
		ts := uint64(hdr[8]) |
			uint64(hdr[9])<<8 |
			uint64(hdr[10])<<16 |
			uint64(hdr[11])<<24 |
			uint64(hdr[12])<<32 |
			uint64(hdr[13])<<40 |
			uint64(hdr[14])<<48 |
			uint64(hdr[15])<<56

		name := make([]byte, nameLen)
		_, err = io.ReadFull(f, name)
		if err != nil {
			log.Fatal(err)
		}

		event := TraceEvent{
			Name: string(name),
			Ph:   string(ph),
			Ts:   ts,
			Pid:  pid,
			Tid:  tid,
			Id:   id,
		}
		events = append(events, event)
		totalOfst += (16 + nameLen)
	}

	out, err := json.MarshalIndent(events, "", "  ")
	if err != nil {
		log.Fatal(err)
	}

	fmt.Println(string(out))
}
