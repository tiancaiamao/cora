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

// Arithmetic for conscheme

// TODO: the arithmetic procedures should return fixnums when fixnums
// can represent the result, e.g. when two bignums are added.

package vm

import (
	"fmt"
	"math"
	"math/big"
	"strings"
)

const (
	fixnum_max = int(^uint(0) >> 1)
	fixnum_min = -fixnum_max - 1
)

var fixnum_max_Int, fixnum_min_Int, one_Int *big.Int

func init() {
	fixnum_max_Int = big.NewInt(int64(fixnum_max))
	fixnum_min_Int = big.NewInt(int64(fixnum_min))
	one_Int = big.NewInt(int64(1))
}

// Exact complex numbers. Inexact complex numbers use complex128.
type Compnum struct {
	real, imag big.Rat
}

func fixnum_p(x Obj) Obj {
	switch (x).(type) {
	case int:
		return True
	default:
		return False
	}
}

func Make_fixnum(x int) Obj {
	return x
}

func fixnum_to_int(x Obj) int {
	return x.(int)
}

func make_number(x int) Obj {
	return Make_fixnum(x)
}

func number_to_int(x Obj) int {
	if fixnum_p(x) == True {
		return fixnum_to_int(x)
	}

	switch v := (x).(type) {
	case *ScmBignum:
		// XXX:
		return int(v.Int64())
	}
	panic("bad type")
}

func number_p(x Obj) Obj {
	switch (x).(type) {
	default:
		return False
	case int:
	case *ScmBignum:
	case *ScmRatnum:
	case float64:
	case complex128:
		// case Compnum:
	}
	return True
}

func integer_p(x Obj) Obj {
	switch v := (x).(type) {
	default:
		return False
	case int:
		return True
	case *ScmBignum:
		return True
	case float64:
		return Make_boolean(v == math.Floor(v))
	}
}

func denominator(num Obj) Obj {
	switch n := (num).(type) {
	case int:
		return Make_fixnum(1)
	case *ScmBignum:
		return Make_fixnum(1)
	case *ScmRatnum:
		return n.Denom()
	case float64:
		panic("TODO: denominator for float64")
	case complex128:
		panic("undefined")
	}
	panic("bad type")
}

func number_add(x, y Obj) Obj {
	xfx := fixnum_p(x) == True
	yfx := fixnum_p(y) == True
	if xfx && yfx {
		i1 := fixnum_to_int(x)
		i2 := fixnum_to_int(y)
		r := i1 + i2
		if (r < i1) != (i2 < 0) {
			var b1 *big.Int = big.NewInt(int64(i1))
			var b2 *big.Int = big.NewInt(int64(i2))
			return &ScmBignum{Bignum, b1.Add(b1, b2)}
		} else {
			return Make_fixnum(r)
		}
	}

	if xfx {
		return number_add(y, x)
	}

	switch vx := (x).(type) {
	case *ScmBignum:
		var z *big.Int = big.NewInt(0)
		if yfx {
			vy := big.NewInt(int64(fixnum_to_int(y)))
			return &ScmBignum{Bignum, z.Add(vx.Int, vy)}
		}
		switch vy := (y).(type) {
		case *ScmBignum:
			return simpBig(z.Add(vx.Int, vy.Int))
		default:
			panic("bad type")
		}
	}
	panic("bad type")
}

func number_subtract(x, y Obj) Obj {
	xfx := fixnum_p(x) == True
	yfx := fixnum_p(y) == True
	if xfx && yfx {
		i1 := fixnum_to_int(x)
		i2 := fixnum_to_int(y)
		r := i1 - i2
		if r >= fixnum_min && r <= fixnum_max { // XXX: invalid overflow check
			return Make_fixnum(r)
		} else {
			var b1 *big.Int = big.NewInt(int64(i1))
			var b2 *big.Int = big.NewInt(int64(i2))
			return &ScmBignum{Bignum, b1.Sub(b1, b2)}
		}
	}

	if xfx {
		x = big.NewInt(int64(fixnum_to_int(x)))
	}
	if yfx {
		y = big.NewInt(int64(fixnum_to_int(y)))
	}

	switch vx := (x).(type) {
	case *ScmBignum:
		var z *big.Int = big.NewInt(0)
		switch vy := (y).(type) {
		case *ScmBignum:
			return simpBig(z.Sub(vx.Int, vy.Int))
		default:
			panic("bad type")
		}
	}
	panic("bad type")
}

func number_divide(x, y Obj) Obj {
	xfx := fixnum_p(x) == True
	yfx := fixnum_p(y) == True
	if xfx && yfx {
		i1 := fixnum_to_int(x)
		i2 := fixnum_to_int(y)
		r, m := i1/i2, i1%i2
		if m == 0 && r > fixnum_min && r < fixnum_max {
			return Make_fixnum(r)
		} else {
			return big.NewRat(int64(i1), int64(i2))
		}
	}

	if xfx {
		x = big.NewInt(int64(fixnum_to_int(x)))
	}
	if yfx {
		y = big.NewInt(int64(fixnum_to_int(y)))
		//return z.Div(vx,vy)
	}

	switch vx := (x).(type) {
	case *ScmBignum:
		var z *big.Int = big.NewInt(0)
		switch vy := (y).(type) {
		case *ScmBignum:
			return simpBig(z.Div(vx.Int, vy.Int))
		case *ScmRatnum:
			z := big.NewRat(1, 1)
			z.SetInt(vx.Int)
			return simpRat(z.Quo(z, vy.Rat))
		default:
			panic("bad type")
		}
	case *ScmRatnum:
		z := big.NewRat(1, 1)
		switch vy := (y).(type) {
		case *ScmBignum:
			z.SetInt(vy.Int)
			return simpRat(z.Quo(vx.Rat, z))
		case *ScmRatnum:
			return simpRat(z.Quo(vx.Rat, vy.Rat))
		}
	}
	panic("bad type")
}

func simpRat(x *big.Rat) Obj {
	if x.Denom().Cmp(one_Int) == 0 {
		return simpBig(x.Num())
	}
	return &ScmRatnum{Rational, x}
}

func simpBig(x *big.Int) Obj {
	if x.Cmp(fixnum_min_Int) >= 0 && x.Cmp(fixnum_max_Int) <= 0 {
		return Make_fixnum(int(x.Int64()))
	}
	return &ScmBignum{Bignum, x}
}

func number_multiply(x, y Obj) Obj {
	xfx := fixnum_p(x) == True
	yfx := fixnum_p(y) == True
	if xfx && yfx {
		i1 := int64(fixnum_to_int(x))
		i2 := int64(fixnum_to_int(y))
		r := i1 * i2
		if r > int64(fixnum_min) && r < int64(fixnum_max) { // XXX: invalid overflow check
			return Make_fixnum(int(r))
		} else {
			return &ScmBignum{Bignum, big.NewInt(r)}
		}
	}

	if xfx {
		x = big.NewInt(int64(fixnum_to_int(x)))
	}
	if yfx {
		y = big.NewInt(int64(fixnum_to_int(y)))
	}

	switch vx := (x).(type) {
	case *ScmBignum:
		var z *big.Int = big.NewInt(0)
		switch vy := (y).(type) {
		case *ScmBignum:
			return simpBig(z.Mul(vx.Int, vy.Int))
		case *ScmRatnum:
			z := big.NewRat(1, 1)
			z.SetInt(vx.Int)
			return simpRat(z.Mul(z, vy.Rat))
		default:
			panic("bad type")
		}
	case *ScmRatnum:
		z := big.NewRat(1, 1)
		switch vy := (y).(type) {
		case *ScmBignum:
			z.SetInt(vy.Int)
			return simpRat(z.Mul(vx.Rat, z))
		case *ScmRatnum:
			return simpRat(z.Mul(vx.Rat, vy.Rat))
		}
	}
	panic("bad type")
}

func number_cmp(x, y Obj) Obj {
	xfx := fixnum_p(x) == True
	yfx := fixnum_p(y) == True
	if xfx && yfx {
		i1 := fixnum_to_int(x)
		i2 := fixnum_to_int(y)
		switch {
		case i1 > i2:
			return Make_fixnum(1)
		case i1 < i2:
			return Make_fixnum(-1)
		default:
			return Make_fixnum(0)
		}
	}

	if xfx {
		return number_subtract(y, x)
	}

	switch vx := (x).(type) {
	case *ScmBignum:
		if yfx {
			vy := big.NewInt(int64(fixnum_to_int(y)))
			return Make_fixnum(vx.Cmp(vy))
		}
		switch vy := (y).(type) {
		case *ScmBignum:
			return Make_fixnum(vx.Int.Cmp(vy.Int))
		case *ScmRatnum:
			r := big.NewRat(1, 1).SetInt(vx.Int)
			return Make_fixnum(r.Cmp(vy.Rat))
		case complex128:
			panic("comparison on complex numbers is undefined")
		default:
			panic("bad type")
		}
	case *ScmRatnum:
		if yfx {
			vy := big.NewRat(int64(fixnum_to_int(y)), 1)
			return Make_fixnum(vx.Cmp(vy))
		}
		switch vy := (y).(type) {
		case *ScmBignum:
			r := big.NewRat(1, 1).SetInt(vy.Int)
			return Make_fixnum(vx.Cmp(r))
		case *ScmRatnum:
			return Make_fixnum(vx.Cmp(vy.Rat))
		case complex128:
			panic("comparison on complex numbers is undefined")
		default:
			panic("bad type")
		}
	case complex128:
		panic("comparison on complex numbers is undefined")
	}
	panic("bad type")
}

func bitwise_ior(x, y Obj) Obj {
	xfx := fixnum_p(x) == True
	yfx := fixnum_p(y) == True
	if xfx && yfx {
		i1 := fixnum_to_int(x)
		i2 := fixnum_to_int(y)
		return i1 | i2
	}

	if xfx {
		return bitwise_ior(y, x)
	}

	switch vx := (x).(type) {
	case *ScmBignum:
		var z *big.Int = big.NewInt(0)
		if yfx {
			vy := big.NewInt(int64(fixnum_to_int(y)))
			return &ScmBignum{Bignum, z.Or(vx.Int, vy)}
		}
		switch vy := (y).(type) {
		case *ScmBignum:
			return &ScmBignum{Bignum, z.Or(vx.Int, vy.Int)}
		default:
			panic("bad type")
		}
	}
	panic("bad type")
}

func bitwise_and(x, y Obj) Obj {
	xfx := fixnum_p(x) == True
	yfx := fixnum_p(y) == True
	if xfx && yfx {
		i1 := fixnum_to_int(x)
		i2 := fixnum_to_int(y)
		return Obj(i1 & i2)
	}

	if xfx {
		return bitwise_and(y, x)
	}

	switch vx := (x).(type) {
	case *ScmBignum:
		var z *big.Int = big.NewInt(0)
		if yfx {
			vy := big.NewInt(int64(fixnum_to_int(y)))
			return &ScmBignum{Bignum, z.And(vx.Int, vy)}
		}
		switch vy := (y).(type) {
		case *ScmBignum:
			return &ScmBignum{Bignum, z.And(vx.Int, vy.Int)}
		default:
			panic("bad type")
		}
	}
	panic("bad type")
}

func bitwise_arithmetic_shift_right(x, y Obj) Obj {
	xfx := fixnum_p(x) == True
	yfx := fixnum_p(y) == True
	if !yfx {
		panic("bad shift amount")
	}

	// TODO: check the amount. shouldn't be negative, and perhaps
	// '>>' does a modulo on the amount.
	amount := uint(fixnum_to_int(y))
	if xfx {
		i1 := fixnum_to_int(x)
		return Obj(i1 >> amount)
	}

	switch vx := (x).(type) {
	case *ScmBignum:
		var z *big.Int = big.NewInt(0)
		return &ScmBignum{Bignum, z.Rsh(vx.Int, amount)}
	}
	panic("bad type")
}

func bitwise_arithmetic_shift_left(x, y Obj) Obj {
	xfx := fixnum_p(x) == True
	yfx := fixnum_p(y) == True
	if !yfx {
		panic("bad shift amount")
	}

	amount := uint(fixnum_to_int(y))
	if xfx && amount < 32 {
		i := fixnum_to_int(x)
		r := i << amount
		if r>>amount == i {
			return Obj(r)
		} else {
			return big.NewInt(int64(r))
		}
	} else if xfx {
		x = big.NewInt(int64(fixnum_to_int(x)))
	}

	switch vx := (x).(type) {
	case *ScmBignum:
		var z *big.Int = big.NewInt(0)
		return &ScmBignum{Bignum, z.Lsh(vx.Int, amount)}
	}
	panic("bad type")
}

func _number_to_string(num Obj, radix Obj) Obj {
	var format string

	switch number_to_int(radix) {
	case 2:
		format = "%b"
	case 8:
		format = "%o"
	case 10:
		format = "%d"
	default:
		format = "%x"
	}

	if fixnum_p(num) != False {
		return String_string(fmt.Sprintf(format, fixnum_to_int(num)))
	}

	switch v := (num).(type) {
	case *ScmBignum:
		return String_string(fmt.Sprintf(format, v.Int))
	case *ScmRatnum:
		return String_string(fmt.Sprintf(format+"/"+format,
			v.Num(), v.Denom()))
	case float64:
		if format != "%d" {
			panic("inexact numbers can only be printed decimally")
		}
		return String_string(fmt.Sprintf("%g", v))
	case complex128:
		if format != "%d" {
			panic("inexact numbers can only be printed decimally")
		}
		// %+f gives trailing zeroes, but %+g loses decimal
		// points, which is worse
		format = "%+f%+fi"
		return String_string(fmt.Sprintf(format, real(v), imag(v)))
		// case Compnum:
	}

	panic("number->string needs numbers")
}

// TODO: handle flonums, compnums, ratnums, etc
func _string_to_number(_str Obj, _radix Obj) Obj {
	str := string(mustString(_str))

	radix := number_to_int(_radix)
	switch {
	case strings.HasPrefix(str, "#b"):
		radix = 2
		str = str[2:]
	case strings.HasPrefix(str, "#o"):
		radix = 8
		str = str[2:]
	case strings.HasPrefix(str, "#d"):
		radix = 10
		str = str[2:]
	case strings.HasPrefix(str, "#x"):
		radix = 16
		str = str[2:]
	}

	var v big.Int
	z, s := v.SetString(str, radix)
	if !s {
		return False
	}
	if z.Cmp(fixnum_max_Int) < 1 && z.Cmp(fixnum_min_Int) > -1 {
		return Make_fixnum(int(z.Int64()))
	}
	return ScmBignum{Bignum, z}
}
