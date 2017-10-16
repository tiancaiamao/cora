package vm

import (
	"fmt"
	"testing"
)

var int17tests = []struct {
	input  uint32
	expect int
}{
	{0x00000, 0},
	{0x1ffff, -1},
	{0x0ffff, 0xffff},
}

func TestInt17(t *testing.T) {
	for _, test := range int17tests {
		actual := int17(test.input)
		if actual != test.expect {
			t.Errorf(fmt.Sprintf("int17(%d), expected %d, actual %d",
				test.input, test.expect, actual))
		}
	}
}

func BenchmarkInt17(b *testing.B) {
	for i := 0; i < b.N; i++ {
		int17(0x1ffff)
	}
}
