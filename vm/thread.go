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

package vm

import (
	"container/list"
	"runtime"
	"sync"
)

type ScmThread struct {
	scmHead
	name     Obj
	specific Obj
	thunk    Obj
	queue    Obj
	once     *sync.Once
	channel  chan Obj
	links    *list.List
	winders  Obj
}

var primordial Obj

func init() {
	name := String_string("primordial")
	once := new(sync.Once)
	channel := make(chan Obj, 100)
	links := list.New()
	thunk := Eol // XXX: makes (thread-start! primordial) not work
	t := &ScmThread{Thread, name, False, thunk, Eol, once, channel, links, Eol}
	primordial = t
}

func _make_thread(thunk, name Obj) Obj {
	if procedure_p(thunk) == False {
		panic("bad type")
	}
	once := new(sync.Once)
	channel := make(chan Obj, 100)
	links := list.New()
	return &ScmThread{Thread, name, False, thunk, Eol, once, channel, links, Eol}
}

func thread_p(thread Obj) Obj {
	switch (thread).(type) {
	default:
		return False
	case *ScmThread:
		return True
	}
}

func thread_name(thread Obj) Obj {
	t := mustThread(thread)
	return t.name
}

func thread_specific(thread Obj) Obj {
	t := mustThread(thread)
	return t.specific
}

func thread_specific_set_ex(thread, v Obj) Obj {
	t := mustThread(thread)
	t.specific = v
	return Void
}

func thread_queue(thread Obj) Obj {
	t := mustThread(thread)
	return t.queue
}

func thread_queue_set_ex(thread, v Obj) Obj {
	t := mustThread(thread)
	t.queue = v
	return Void
}

func thread_winders(thread Obj) Obj {
	t := mustThread(thread)
	return t.winders
}

func thread_winders_set_ex(thread, v Obj) Obj {
	t := mustThread(thread)
	t.winders = v
	return Void
}

func thread_yield_ex() Obj {
	runtime.Gosched()
	return Void
}

func thread_link_ex(_t1, _t2 Obj) Obj {
	t1 := mustThread(_t1)
	t1.links.PushFront(_t2)
	return Void
}

func send(thread, o Obj) Obj {
	t := mustThread(thread)
	go func(t *ScmThread, o Obj) {
		t.channel <- o
	}(t, o)
	return Void
}

func _receive(thread Obj) Obj {
	t := mustThread(thread)
	return <-t.channel
}

func thread_start_ex(thread Obj) Obj {
	t := mustThread(thread)

	go t.once.Do(func() {
		defer func() {
			if err := recover(); err != nil {
				for e := t.links.Front(); e != nil; e = e.Next() {
					send(e.Value, _vector(intern("died"), thread))
				}
				return
			}
		}()

		// This has to create a new stack
		apply_procedure(t.thunk, nil, thread)
	})

	return Void
}
