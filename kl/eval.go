package kl

import (
	"fmt"
)

// ((a . 1) (b . 2) (c . 3))
func envGet(env Obj, sym Obj) (Obj, bool) {
	return assq(sym, env)
}

func envExtend(env Obj, params Obj, args Obj) Obj {
	for params != Nil {
		pair := cons(car(params), car(args))
		env = cons(pair, env)

		params = cdr(params)
		args = cdr(args)
	}
	return env
}

// func (env *Environment) Get(sym string) (Obj, bool) {
// 	for env != nil {
// 		if v, ok := env.bind[sym]; ok {
// 			return v, true
// 		}
// 		env = env.parent
// 	}
// 	return Nil, false
// }

// func (env *Environment) Extend(symbols, values []Obj) *Environment {
// 	if len(symbols) == 0 {
// 		return env
// 	}

// 	bind := make(map[string]Obj)
// 	for i := 0; i < len(symbols); i++ {
// 		name := GetSymbol(symbols[i])
// 		bind[name] = values[i]
// 	}
// 	return &Environment{
// 		parent: env,
// 		bind:   bind,
// 	}
// }

type controlFlowKind int

const (
	controlFlowReturn controlFlowKind = iota
	controlFlowEval
	controlFlowApply
)

type controlFlow struct {
	kind        controlFlowKind
	inException bool
	// arguments for eval
	exp Obj
	env Obj
	// arguments for apply
	f    Obj
	args Obj
	// return result
	result Obj
}

// trampoline is introduced for tail call optimization.
func (e *Evaluator) trampoline(exp Obj, env Obj) Obj {
	var ctl = controlFlow{
		kind: controlFlowEval,
		exp:  exp,
		env:  env,
	}
	for ctl.kind != controlFlowReturn {
		switch ctl.kind {
		case controlFlowEval:
			e.eval(&ctl)
		case controlFlowApply:
			e.apply(&ctl)
		}
	}
	return ctl.result
}

func (ctl *controlFlow) TailEval(exp Obj, env Obj) {
	ctl.exp = exp
	ctl.env = env
	ctl.kind = controlFlowEval
}

func (ctl *controlFlow) TailApply(f Obj, args Obj) {
	ctl.f = f
	ctl.args = args
	ctl.kind = controlFlowApply
}

func (ctl *controlFlow) Return(result Obj) {
	ctl.result = result
	ctl.kind = controlFlowReturn
}

// Exception can be replaced by Return totally, just defined as a name alias.
func (ctl *controlFlow) Exception(err Obj) {
	mustError(err)
	ctl.result = err
	ctl.kind = controlFlowReturn
}

func (e *Evaluator) eval(ctl *controlFlow) {
	exp := ctl.exp
	env := ctl.env

	fmt.Println("evaling exp:", ObjString(exp), "in env:", ObjString(env))

	switch *exp { // handle constant
	case scmHeadNumber, scmHeadString, scmHeadVector, scmHeadBoolean, scmHeadNull, scmHeadProcedure, scmHeadPrimitive:
		ctl.Return(exp)
		return
	}

	if ok, _ := isSymbol(exp); ok {
		if val, ok := envGet(env, exp); ok {
			ctl.Return(val)
		} else {
			ctl.Return(mustSymbol(exp).value)
		}
		return
	}

	pair := mustPair(exp)
	if ok, sym := isSymbol(pair.car); ok {
		exp = pair.cdr // handle special form
		switch sym.str {
		case "quote":
			ctl.Return(car(exp))
			return
		case "lambda": // (lambda (x y) x)
			if env == Nil {
				ctl.Return(ctl.exp)
			} else {
				ctl.Return(makeProcedure(car(exp), cadr(exp), env))
			}
			return
		case "and":
			e.evalAnd(car(exp), cadr(exp), env, ctl)
			return
		case "or":
			e.evalOr(car(exp), cadr(exp), env, ctl)
			return
		case "if": // (if a b c)
			if listLength(pair.cdr) == 3 {
				e.evalIf(car(exp), cadr(exp), caddr(exp), env, ctl)
				return
			} // if may also be a function for partial apply
		case "cond": // (cond (false 1) (true 2))
			e.evalCond(exp, env, ctl)
			return
		// case "trap-error": // (trap-error ~body ~handler)
		// 	e.evalTrapError(exp, env, ctl)
		// 	return
		case "do": // (do A A)
			if tmp := e.trampoline(car(exp), env); *tmp == scmHeadError {
				ctl.Exception(tmp)
				return
			}
			ctl.TailEval(cadr(exp), env)
			return
		}
	}

	fn := e.trampoline(pair.car, env)
	// if *fn == scmHeadError {
	// 	ctl.Exception(fn)
	// 	return
	// }

	args := e.evalArgumentList(pair.cdr, env)
	// if !ctl.inException && len(args) == 1 && *args[0] == scmHeadError {
	// 	ctl.Exception(args[0])
	// 	return
	// }
	ctl.TailApply(fn, args)
	return
}

// func (e *Evaluator) evalFunction(fn Obj, env Obj) Obj {
// 	if ok, _ := isSymbol(fn); ok {
// 		str := GetSymbol(fn)
// 		if proc, ok := envGet(env, fn); ok {
// 			return proc
// 		}
// 		if val, ok := e.functionTable[str]; ok {
// 			return val
// 		}
// 	}

// 	switch *fn {
// 	case scmHeadPrimitive, scmHeadProcedure:
// 		return fn
// 	case scmHeadPair:
// 		return e.trampoline(fn, env)
// 	}
// 	panic(fmt.Sprintf("can't apply non function: %#v", (*scmHead)(fn)))
// }

func (e *Evaluator) evalIf(a, b, c Obj, env Obj, ctl *controlFlow) {
	t := e.trampoline(a, env)
	switch t {
	case True:
		ctl.TailEval(b, env)
		return
	case False:
		ctl.TailEval(c, env)
		return
	}
	panic("second argument of if should be boolean")
}

func (e *Evaluator) evalAnd(a, b Obj, env Obj, ctl *controlFlow) {
	if e.trampoline(a, env) == False {
		ctl.Return(False)
		return
	}
	ctl.TailEval(b, env)
}

func (e *Evaluator) evalOr(a, b Obj, env Obj, ctl *controlFlow) {
	if e.trampoline(a, env) == True {
		ctl.Return(True)
		return
	}
	ctl.TailEval(b, env)
}

func (e *Evaluator) evalCond(l Obj, env Obj, ctl *controlFlow) {
	for *l == scmHeadPair {
		curr := car(l)
		if e.trampoline(car(curr), env) == True {
			ctl.TailEval(cadr(curr), env)
			return
		}
		l = cdr(l)
	}
	ctl.Return(Nil)
	return
}

// func (e *Evaluator) evalTrapError(exp Obj, env Obj, ctl *controlFlow) {
// 	v := e.trampoline(car(exp), env)
// 	if *v == scmHeadError {
// 		ctl.inException = true
// 		handler := e.evalFunction(cadr(exp), env)
// 		ctl.TailApply(handler, []Obj{v})
// 		return
// 	}
// 	ctl.Return(v)
// 	return
// }

func (e *Evaluator) apply(ctl *controlFlow) {
	f := ctl.f
	args := ctl.args

	fmt.Println("apply:", ObjString(f), "  	to:", ObjString(args))

	if *f == scmHeadPrimitive {
		prim := mustPrimitive(f)
		// switch {
		// case prim.Name == "native":
		// 	method := GetSymbol(args[0])
		// 	prim1, ok := e.nativeFunc[method]
		// 	if !ok {
		// 		ctl.Return(MakeError("undefined native " + method))
		// 		return
		// 	}
		// 	prim = prim1
		// 	ctl.Return(prim.Function(args[1:]...))
		// 	return
		// case len(args) < prim.Required:
		// 	ctl.Return(partialApply(prim.Required, args, nil, f))
		// 	return
		// case len(args) == prim.Required:
		// 	ctl.Return(prim.Function(args...))
		// 	return
		// }
		fargs := ListToSlice(args)
		ctl.Return(prim.Function(fargs...))
		return
	}

	// procedure (lambda (x y) body env)
	params := car(cdr(f))
	body := car(cdr(cdr(f)))
	env := cdr(cdr(cdr(f)))

	fmt.Println("origin env: ", ObjString(env))
	env = envExtend(env, params, args)
	fmt.Println("new env: ", ObjString(env))

	ctl.TailEval(body, env)

	// nargs := length(args)
	// switch {
	// case len(args) < proc.arity:
	// 	ctl.Return(partialApply(proc.arity, args, proc.env, f))
	// 	return
	// case len(args) == proc.arity:
	// 	newEnv := proc.env.Extend(proc.arg, args)
	// 	ctl.TailEval(proc.body, newEnv)
	// 	return
	// case len(args) > proc.arity:
	// 	newEnv := proc.env.Extend(proc.arg, args[:proc.arity])
	// 	res := e.trampoline(proc.body, newEnv)
	// 	ctl.TailApply(res, args[proc.arity:])
	// 	return
	// }
}

// partialApply works when Required > providArgs
// func partialApply(required int, providArgs []Obj, env Obj, proc Obj) Obj {
// 	// Partial apply...
// 	// (f x y z) => (lambda (z) (f x y z)) with x y in env
// 	symbols := makeTempSymbols(required)
// 	env1 := env.Extend(symbols[:len(providArgs)], providArgs)

// 	args := Nil
// 	for i, count := len(symbols)-1, required-len(providArgs); count > 0; count-- {
// 		args = cons(symbols[i], args)
// 		i--
// 	}

// 	body := Nil
// 	for i := len(symbols) - 1; i >= 0; i-- {
// 		body = cons(symbols[i], body)
// 	}
// 	body = cons(proc, body)

// 	return makeProcedure(args, body, env1)
// }

func (e *Evaluator) evalArgumentList(args Obj, env Obj) Obj {
	// reuse the memory of args
	ret := args
	for args != Nil {
		curr := mustPair(args)
		v := e.trampoline(curr.car, env)
		curr.car = v
		args = cdr(args)
	}
	return ret
}

func makeTempSymbols(n int) []Obj {
	ret := make([]Obj, n)
	for i := 0; i < n; i++ {
		ret[i] = MakeSymbol(fmt.Sprintf("tmp%d", i))
	}
	return ret
}
