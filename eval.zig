const std = @import("std");
const Io = std.Io;
const Allocator = std.mem.Allocator;
const ArrayList = std.ArrayList;
const StringHashMap = std.StringHashMap;

// =======================================
// Object representation
// =======================================
// FIXME
pub const Obj = union(enum) {
    integer: i64,
    float: f64,
    string: []const u8,
    boolean: bool,
    nil,
    symbol: *Symbol,
    cons: *Cons,
    closure: *Closure,
    vector: ArrayList(Obj),
    primitive: Primitive,

    pub fn format(
        self: Obj,
        comptime fmt_str: []const u8,
        options: std.fmt.FormatOptions,
        writer: anytype,
    ) !void {
        _ = fmt_str;
        _ = options;
        switch (self) {
            .integer => |i| try writer.print("{d}", .{i}),
            .float => |f| try writer.print("{d}", .{f}),
            .string => |s| try writer.print("\"{s}\"", .{s}),
            .boolean => |b| try writer.print("{s}", .{if (b) "true" else "false"}),
            .nil => try writer.print("()", .{}),
            .symbol => |sym| try writer.print("{s}", .{sym.str}),
            .cons => |c| try c.format(writer),
            .closure => try writer.print("#closure()", .{}),
            .vector => try writer.print("#vector", .{}),
            .primitive => |p| try writer.print("#primitive {s}", .{p.name}),
        }
    }

    pub fn deinit(self: Obj, allocator: Allocator) void {
        switch (self) {
            .string => |s| allocator.free(s),
            .cons => |c| c.deinit(allocator),
            .closure => |c| c.deinit(allocator),
            .vector => |v| v.deinit(),
            // Other types are either primitives or managed by the arena.
            else => {},
        }
    }
};

fn equal(a: Obj, b: Obj) bool {
    if (!std.mem.eql(u8, @tagName(a), @tagName(b))) return false;
    return switch (a) {
        .integer => |a_val| b.integer == a_val,
        .float => |a_val| b.float == a_val,
        .string => |a_val| std.mem.eql(u8, b.string, a_val),
        .boolean => |a_val| b.boolean == a_val,
        .nil => true,
        .symbol => |a_val| b.symbol == a_val,
        .cons => |a_val| b.cons == a_val, // TODO
        .closure => false, // TODO
        .vector => false, // TODO
        .primitive => false, // TODO
    };
}

// isInteger determinate whether a float64 is actually a precise integer.
// Judge is according to IEEE754 standard.
fn isPreciseInteger(f: f64) bool {
    if (f != @round(f)) return false;
    const min_safe = -9007199254740991.0; // -(2^53 - 1)
    const max_safe = 9007199254740991.0; // 2^53 - 1
    return f >= min_safe and f <= max_safe;
}

pub fn makeNumber(f: f64) Obj {
    if (isPreciseInteger(f)) {
        return Obj{ .integer = @intFromFloat(f) };
    }
    return Obj{ .float = f };
}

pub const Symbol = struct {
    str: []const u8,
    val: Obj,
};

pub const String = []const u8;

pub const Cons = struct {
    car: Obj,
    cdr: Obj,

    pub fn deinit(self: *Cons, allocator: Allocator) void {
        self.car.deinit(allocator);
        self.cdr.deinit(allocator);
        allocator.destroy(self);
    }

    pub fn format(self: *const Cons, writer: anytype) !void {
        try writer.writeAll("(");
        try writer.print("{}", .{self.car});

        var current = self.cdr;
        while (true) {
            switch (current) {
                .cons => |cons_cell| {
                    try writer.writeAll(" ");
                    try writer.print("{}", .{cons_cell.car});
                    current = cons_cell.cdr;
                },
                else => {
                    if (current != .nil) {
                        try writer.print(" . {}", .{current});
                    }
                    break;
                },
            }
        }
        try writer.writeAll(")");
    }
};

pub fn makeCons(allocator: Allocator, hd: Obj, tl: Obj) !Obj {
    const c = try allocator.create(Cons);
    c.* = .{ .car = hd, .cdr = tl };
    return Obj{ .cons = c };
}

pub const Closure = struct {
    closed: ArrayList(Obj),
    code: ?*const Instr,
    required: usize,
    name: []const u8,

    pub fn deinit(self: *Closure, allocator: Allocator) void {
        self.closed.deinit();
        // The instruction code is part of the arena, so it's not de-initialized here.
        allocator.destroy(self);
    }
};

pub const Vector = ArrayList(Obj);

// =======================================
// VM and instructions
// =======================================

pub const Frame = struct {
    pc: ?*const Instr,
    base: usize,
    pos: usize,
};

pub const VM = struct {
    allocator: Allocator,
    // arena: std.heap.ArenaAllocator,

    next: ?*const Instr,
    stack: ArrayList(Obj),
    base: usize,
    val: Obj,
    call_stack: ArrayList(Frame),
    symbol_map: StringHashMap(*Symbol),

    // Symbols
    sym_quote: Obj,
    sym_if: Obj,
    sym_do: Obj,
    sym_lambda: Obj,
    sym_macro_expand: *Symbol,
    sym_let: Obj,

    pub fn init(allocator: Allocator) !VM {
        var vm: VM = undefined;
        vm.allocator = allocator;
        // vm.arena = std.heap.ArenaAllocator.init(allocator);
        // vm.allocator = vm.arena.allocator();
        vm.next = null;
        vm.stack = ArrayList(Obj).init(vm.allocator);
        vm.base = 0;
        vm.val = .nil;
        vm.call_stack = ArrayList(Frame).init(vm.allocator);
        vm.symbol_map = StringHashMap(*Symbol).init(vm.allocator);
        vm.sym_quote = undefined;
        vm.sym_if = undefined;
        vm.sym_do = undefined;
        vm.sym_lambda = undefined;
        vm.sym_macro_expand = undefined;
        vm.sym_let = undefined;

        try vm.initSymbols();
        try vm.initPrimitive();
        return vm;
    }

    // pub fn deinit(self: *VM) void {
    //     self.arena.deinit();
    // }

    fn initSymbols(self: *VM) !void {
        self.sym_if = Obj{ .symbol = try self.makeSymbol("if") };
        self.sym_do = Obj{ .symbol = try self.makeSymbol("do") };
        self.sym_lambda = Obj{ .symbol = try self.makeSymbol("lambda") };
        self.sym_quote = Obj{ .symbol = try self.makeSymbol("quote") };
        const macro_sym = try self.makeSymbol("macroexpand");
        self.sym_macro_expand = macro_sym;
        self.sym_let = Obj{ .symbol = try self.makeSymbol("let") };
    }

    fn initPrimitive(self: *VM) !void {
        (try self.makeSymbol("set")).val = makePrimitive("set", &primSet);
        (try self.makeSymbol("+")).val = makePrimitive("+", &primAdd);
        (try self.makeSymbol("-")).val = makePrimitive("-", &primSub);
        (try self.makeSymbol("*")).val = makePrimitive("*", &primMul);
        (try self.makeSymbol("=")).val = makePrimitive("=", &primEQ);
        (try self.makeSymbol("<")).val = makePrimitive("<", &primLT);
    }

    fn makeSymbol(self: *VM, str: []const u8) !*Symbol {
        // copy key, so the memory for hash key is stable
        const owned_str = try self.allocator.dupe(u8, str);

        // getOrPut to avoid duplicate caused panic
        const gop = try self.symbol_map.getOrPut(owned_str);
        if (gop.found_existing) {
            self.allocator.free(owned_str);
            return gop.value_ptr.*;
        }

        // create new Symbol
        const s = try self.allocator.create(Symbol);
        s.* = Symbol{ .str = owned_str, .val = .nil };
        gop.value_ptr.* = s;
        return s;
    }

    pub fn pop(self: *VM) Obj {
        return self.stack.pop() orelse unreachable;
    }

    pub fn ret(self: *VM, x: Obj) void {
        self.val = x;
        const addr = self.call_stack.pop() orelse unreachable;
        self.base = addr.base;
        self.stack.shrinkRetainingCapacity(addr.pos);
        self.next = addr.pc;
    }

    pub fn eval(self: *VM, exp: Obj) !Obj {
        const converted = try self.closureConvert(exp);
        std.debug.print("closure convert = {}\n", .{converted.exp});

        var code = try self.compile(converted.exp, &[_]Obj{}, Obj.nil, &exit_instr);
        code = try self.reserveForLetBinding(converted.nlets, code);
        std.debug.print("generated code = \n{}\n", .{code});

        try self.call_stack.append(.{ .pc = null, .base = self.base, .pos = self.stack.items.len });
        try self.trampoline(code);
        return self.val;
    }

    fn trampoline(self: *VM, code: *const Instr) !void {
        self.next = code;
        while (self.next) |current_instr| {
            self.next = null;
            try current_instr.exec(self);
        }
    }

    fn makeTheCall(self: *VM, nargs_provided_in_call: usize) void {
        // TODO: currying not implemented for simplicity
        _ = nargs_provided_in_call;
        // std.debug.print("============== now dumping ======{d}\n", .{nargs_provided_in_call});
        // self.dump();

        const fn_obj = self.stack.items[self.base];
        switch (fn_obj) {
            .closure => |c| self.next = c.code,
            .primitive => |p| p.op(self),
            else => @panic("trying to call a non-callable object"),
        }
    }

    // =====================================
    // Compiler utilities
    // =====================================
    const ClosureConvertResult = struct { exp: Obj, nlets: usize };

    pub fn closureConvert(self: *VM, exp: Obj) !ClosureConvertResult {
        var frees = ArrayList(Obj).init(self.allocator);
        defer frees.deinit();
        var max_nlets: usize = 0;
        const new_exp = try self.closureConvert1(exp, .nil, .nil, &frees, &max_nlets);
        return .{ .exp = new_exp, .nlets = max_nlets };
    }

    fn appendFreeVar(frees: *ArrayList(Obj), free_var: Obj) !void {
        // Check for duplicates before adding
        var found = false;
        for (frees.items) |f| if (equal(f, free_var)) {
            found = true;
            break;
        };
        if (!found) try frees.append(free_var);
    }

    // closureConvert1 converts closure into flat representation.
    // (lambda (x) body) => (lambda (x) frees nlet body)
    // Input parameters:
    //     exp: the expression to be converted
    //     locals: local variables when handling this expression, it is a list from lambda exp
    //     env: environment of the current expression, collecting all locals from lambda exp,
    //     the format is ((a b) (c) (d e f))
    // Return values:
    //     the new expression, all expressions except for lambda get rewritten.
    //     free variable in this expression,
    //     nlets calculates the maxinum hight of let expression, which is used as the
    //     count of local variables.
    fn closureConvert1(
        self: *VM,
        exp: Obj,
        locals: Obj,
        env: Obj,
        frees: *ArrayList(Obj),
        nlets: *usize,
    ) !Obj {
        switch (exp) {
            .nil, .boolean, .integer, .string, .float => return exp,
            .symbol => {
                if (assq(exp, locals) >= 0) {
                    return exp;
                }

                // If not in local args, check enclosing environments.
                // If found, it's a free variable, otherwise, it's a global variable.
                var current_env = env;
                while (true) {
                    switch (current_env) {
                        .cons => |c_env| {
                            if (assq(exp, c_env.car) >= 0) {
                                // Check for duplicates before adding
                                var found = false;
                                for (frees.items) |free_var| {
                                    if (equal(free_var, exp)) {
                                        found = true;
                                        break;
                                    }
                                }
                                if (!found) try frees.append(exp);
                                break;
                            }
                            current_env = c_env.cdr;
                        },
                        else => break,
                    }
                }
                return exp;
            },
            .cons => |c| {
                // Special Forms
                if (equal(c.car, self.sym_quote)) return exp;
                if (equal(c.car, self.sym_if)) {
                    const tb = try self.closureConvert1(cadr(exp), locals, env, frees, nlets);
                    const succ = try self.closureConvert1(caddr(exp), locals, env, frees, nlets);
                    const fail = try self.closureConvert1(cadr(cdr(cdr(exp))), locals, env, frees, nlets);
                    return makeCons(self.allocator, self.sym_if, try makeCons(self.allocator, tb, try makeCons(self.allocator, succ, try makeCons(self.allocator, fail, .nil))));
                }
                if (equal(c.car, self.sym_lambda)) {
                    const args = cadr(exp);
                    const body = caddr(exp);

                    var lambda_frees = ArrayList(Obj).init(self.allocator);
                    defer lambda_frees.deinit();
                    var lambda_nlets: usize = 0;

                    const new_env = try makeCons(self.allocator, locals, env);
                    const new_body = try self.closureConvert1(body, args, new_env, &lambda_frees, &lambda_nlets);

                    // The lambda body's free variables, minus the locals of the lambda,
                    // become the free variables of the lambda expression.
                    for (lambda_frees.items) |free_var| {
                        if (assq(free_var, locals) < 0) {
                            try appendFreeVar(frees, free_var);
                        }
                    }

                    // Annotate lambda: (lambda args free_vars nlets body)
                    const frees_list = try sliceToList(self.allocator, lambda_frees.items);
                    const nlets_obj = Obj{ .integer = @intCast(lambda_nlets) };

                    return makeCons(self.allocator, self.sym_lambda, try makeCons(self.allocator, args, try makeCons(self.allocator, frees_list, try makeCons(self.allocator, nlets_obj, try makeCons(self.allocator, new_body, .nil)))));
                }
                if (equal(c.car, self.sym_let)) {
                    const name = cadr(exp);
                    const val = caddr(exp);
                    const body = cadr(cdr(cdr(exp)));

                    const new_val = try self.closureConvert1(val, locals, env, frees, nlets);

                    const current_nlets = nlets.*;
                    nlets.* += 1;
                    const new_locals = try makeCons(self.allocator, name, locals);
                    const new_body = try self.closureConvert1(body, new_locals, env, frees, nlets);
                    nlets.* = @max(current_nlets + 1, nlets.*);

                    return makeCons(self.allocator, self.sym_let, try makeCons(self.allocator, name, try makeCons(self.allocator, new_val, try makeCons(self.allocator, new_body, .nil))));
                }

                // Function application
                var current = exp;
                var result_list: Obj = .nil;
                while (true) {
                    switch (current) {
                        .cons => |cell| {
                            const converted_item = try self.closureConvert1(cell.car, locals, env, frees, nlets);
                            result_list = try makeCons(self.allocator, converted_item, result_list);
                            current = cell.cdr;
                        },
                        else => break,
                    }
                }
                return try reverse(self.allocator, result_list);
            },
            else => return exp,
        }
    }

    fn compile(
        self: *VM,
        exp: Obj,
        locals: []const Obj,
        frees: Obj,
        next: *const Instr,
    ) anyerror!*const Instr {
        switch (exp) {
            .nil, .boolean, .integer, .string, .float => {
                const i = try self.allocator.create(Instr);
                i.* = .{ .iconst = .{ .val = exp, .next = next } };
                return i;
            },
            .symbol => |s| {
                // Check locals
                for (locals, 0..) |local, i| {
                    if (local.symbol == s) {
                        const instr = try self.allocator.create(Instr);
                        instr.* = .{ .local_ref = .{ .idx = i, .next = next } };
                        return instr;
                    }
                }
                // Check free variables
                const free_idx = assq(exp, frees);
                if (free_idx >= 0) {
                    const instr = try self.allocator.create(Instr);
                    instr.* = .{ .closure_ref = .{ .idx = @intCast(free_idx), .next = next } };
                    return instr;
                }
                // Global
                const instr = try self.allocator.create(Instr);
                instr.* = .{ .global_ref = .{ .sym = s, .next = next } };
                return instr;
            },
            .cons => |c| {
                if (equal(c.car, self.sym_quote)) {
                    const i = try self.allocator.create(Instr);
                    i.* = .{ .iconst = .{ .val = cadr(exp), .next = next } };
                    return i;
                }
                if (equal(c.car, self.sym_if)) {
                    const then_cont = try self.compile(caddr(exp), locals, frees, next);
                    const else_cont = try self.compile(cadr(cdr(cdr(exp))), locals, frees, next);
                    const if_instr = try self.allocator.create(Instr);
                    if_instr.* = .{ .if_else = .{ .succ = then_cont, .fail = else_cont } };
                    return self.compile(cadr(exp), locals, frees, if_instr);
                }
                if (equal(c.car, self.sym_do)) {
                    const b = try self.compile(caddr(exp), locals, frees, next);
                    return self.compile(cadr(exp), locals, frees, b);
                }
                if (equal(c.car, self.sym_lambda)) {
                    const args = cadr(exp);
                    const free_vars = caddr(exp);
                    const nlets_obj = car(cddr(cdr(exp)));
                    const body = cadr(cddr(cdr(exp)));

                    const local_slice = try listToSlice(self.allocator, args);
                    const code = try self.compile(body, local_slice, free_vars, &exit_instr);

                    const nlets: usize = @intCast(nlets_obj.integer);
                    const code_with_lets = try self.reserveForLetBinding(nlets, code);

                    const make_closure_instr = try self.allocator.create(Instr);
                    make_closure_instr.* = .{ .make_closure = .{
                        .required = listLength(args),
                        .nfrees = listLength(free_vars),
                        .code = code_with_lets,
                        .next = next,
                    } };
                    return self.compileList(free_vars, locals, frees, make_closure_instr);
                }
                if (equal(c.car, self.sym_let)) {
                    const name = cadr(exp);
                    const val = caddr(exp);
                    const body = cadr(cdr(cdr(exp)));

                    const new_locals = try self.allocator.alloc(Obj, locals.len + 1);
                    @memcpy(new_locals[0..locals.len], locals);
                    new_locals[locals.len] = name;

                    const body_cont = try self.compile(body, new_locals, frees, next);
                    const set_instr = try self.allocator.create(Instr);
                    set_instr.* = .{ .local_set = .{ .idx = locals.len, .next = body_cont } };
                    return try self.compile(val, locals, frees, set_instr);
                }

                // Function application
                const nargs = listLength(exp);
                const is_tail = (next == &exit_instr);

                const cont = if (is_tail) blk: {
                    const i = try self.allocator.create(Instr);
                    i.* = .{ .tail_call = .{ .nargs = nargs } };
                    break :blk i;
                } else blk: {
                    const i = try self.allocator.create(Instr);
                    i.* = .{ .call = .{ .nargs = nargs, .next = next } };
                    break :blk i;
                };
                return self.compileList(exp, locals, frees, cont);
            },
            else => @panic("uncompilable object"),
        }
    }

    fn compileList(self: *VM, list: Obj, locals: []const Obj, frees: Obj, next: *const Instr) !*const Instr {
        if (list == .nil) return next;
        const push_instr = try self.allocator.create(Instr);
        const remaining_cont = try self.compileList(cdr(list), locals, frees, next);
        push_instr.* = .{ .push = .{ .next = remaining_cont } };
        return self.compile(car(list), locals, frees, push_instr);
    }

    fn reserveForLetBinding(self: *VM, nlets: usize, code: *const Instr) !*const Instr {
        if (nlets == 0) return code;
        const i = try self.allocator.create(Instr);
        i.* = .{ .reserve_locals = .{ .nlets = nlets, .next = code } };
        return i;
    }
    const exit_instr = Instr{ .exit = {} };

    pub fn dump(self: *VM) void {
        for (self.stack.items) |item| {
            std.debug.print("{any: <8}\n", .{item});
        }
        for (self.call_stack.items, 0..) |frame, i| {
            std.debug.print("[{d}] base={d}, pos={d}\n", .{ i, frame.base, frame.pos });
        }
        std.debug.print("--------- finish dumping -------\n", .{});
    }
};

pub const Instr = union(enum) {
    exit: void,
    iconst: struct {
        val: Obj,
        next: *const Instr,
    },
    local_ref: struct {
        idx: usize,
        next: *const Instr,
    },
    closure_ref: struct {
        idx: usize,
        next: *const Instr,
    },
    global_ref: struct {
        sym: *Symbol,
        next: *const Instr,
    },
    if_else: struct {
        succ: *const Instr,
        fail: *const Instr,
    },
    make_closure: struct {
        required: usize,
        nfrees: usize,
        code: *const Instr,
        next: *const Instr,
    },
    local_set: struct {
        idx: usize,
        next: *const Instr,
    },
    tail_call: struct {
        nargs: usize,
    },
    call: struct {
        nargs: usize,
        next: *const Instr,
    },
    push: struct {
        next: *const Instr,
    },
    reserve_locals: struct {
        nlets: usize,
        next: *const Instr,
    },
    arity_check,

    pub fn exec(self: *const Instr, vm: *VM) !void {
        var val: Obj = vm.val;
        dispatch: switch (self.*) {
            .exit => {
                vm.ret(val);
                break :dispatch;
            },
            .iconst => |i| {
                val = i.val;
                continue :dispatch i.next.*;
            },
            .local_ref => |i| {
                val = vm.stack.items[vm.base + i.idx + 1];
                continue :dispatch i.next.*;
            },
            .closure_ref => |i| {
                const closure = vm.stack.items[vm.base].closure;
                val = closure.closed.items[i.idx];
                continue :dispatch i.next.*;
            },
            .global_ref => |i| {
                if (i.sym.val == .nil) {
                    // In a real implementation, this should probably be an error
                    @panic("undefined symbol");
                }
                val = i.sym.val;
                continue :dispatch i.next.*;
            },
            .if_else => |i| {
                switch (val) {
                    .boolean => |b| {
                        if (b) {
                            continue :dispatch i.succ.*;
                        } else {
                            continue :dispatch i.fail.*;
                        }
                    },
                    else => @panic("if condition must be a boolean"),
                }
            },
            .make_closure => |i| {
                var closure: *Closure = try vm.allocator.create(Closure);
                const slice = vm.stack.items[vm.stack.items.len - i.nfrees ..];
                var closed = try std.ArrayList(Obj).initCapacity(vm.allocator, i.nfrees);
                try closed.appendSlice(slice);
                closure.closed = closed;
                closure.code = i.code;
                closure.required = i.required;
                const o: Obj = Obj{ .closure = closure };
                val = o;
                continue :dispatch i.next.*;
            },
            .local_set => |i| {
                vm.stack.items[vm.base + i.idx + 1] = val;
                continue :dispatch i.next.*;
            },
            .tail_call => |i| {
                const slice = vm.stack.items[vm.stack.items.len - i.nargs ..];
                std.mem.copyForwards(Obj, vm.stack.items[vm.base..], slice);
                vm.stack.items = vm.stack.items[0 .. vm.base + i.nargs];
                vm.makeTheCall(i.nargs);
            },
            .call => |i| {
                const new_base = vm.stack.items.len - i.nargs;
                try vm.call_stack.append(Frame{
                    .pc = i.next,
                    .base = vm.base,
                    .pos = new_base,
                });
                vm.base = new_base;
                vm.makeTheCall(i.nargs);
            },
            .push => |i| {
                vm.stack.append(val) catch @panic("out of memory");
                continue :dispatch i.next.*;
            },
            .reserve_locals => |i| {
                // The top level let differs from the let inside a lambda.
                // There is no [fn arg1 arg2 ...], need to fill [fn] to make the offset correct.
                if (vm.base == vm.stack.items.len) {
                    try vm.stack.append(Obj.nil);
                }
                // reserve space for let bindings
                // The layout looks like this:
                // [fn arg1 arg2 .. let1 let2 ...]
                for (0..i.nlets) |_| {
                    try vm.stack.append(Obj.nil);
                }
                continue :dispatch i.next.*;
            },
            .arity_check => {},
        }
    }

    pub fn format(
        self: *const Instr,
        comptime fmt_str: []const u8,
        options: std.fmt.FormatOptions,
        writer: anytype,
    ) !void {
        _ = fmt_str;
        _ = options;
        switch (self.*) {
            .exit => {
                try writer.print("exit\n", .{});
            },
            .iconst => |i| {
                try writer.print("const {}\n", .{i.val});
                try writer.print("{}", .{i.next});
            },
            .local_ref => |i| {
                try writer.print("local_ref {d}\n", .{i.idx});
                try writer.print("{}", .{i.next});
            },
            .closure_ref => |i| {
                try writer.print("closure_ref {d}\n", .{i.idx});
                try writer.print("{}", .{i.next});
            },
            .global_ref => |i| {
                try writer.print("global_ref {s}\n", .{i.sym.str});
                try writer.print("{}", .{i.next});
            },
            .if_else => |i| {
                try writer.print("if_else {{\n{}}} {{\n{}}}\n", .{ i.succ, i.fail });
            },
            .make_closure => |c| {
                try writer.print("make_closure(\n", .{});
                try writer.print("{}", .{c.code});
                try writer.print(")\n", .{});
                try writer.print("{}", .{c.next});
            },
            .local_set => |i| {
                try writer.print("local_set {d}\n", .{i.idx});
            },
            .tail_call => |i| {
                try writer.print("tail_call {d}\n", .{i.nargs});
            },
            .call => |i| {
                try writer.print("call {d}\n", .{i.nargs});
                try writer.print("{}", .{i.next});
            },
            .push => |i| {
                try writer.print("push\n", .{});
                try writer.print("{}", .{i.next});
            },
            .reserve_locals => |i| {
                try writer.print("reserve_locals {d}\n", .{i.nlets});
                try writer.print("{}", .{i.next});
            },
            .arity_check => try writer.print("arity_check", .{}),
        }
    }
};

// =======================================
//   Forward Declarations & Helper Types
// =======================================

const Primitive = struct {
    name: [:0]const u8,
    op: *const fn (*VM) void,

    pub fn init(name: [:0]const u8, op: *const fn (*VM) void) Primitive {
        return Primitive{
            .name = name,
            .op = op,
        };
    }
};

fn makePrimitive(name: [:0]const u8, op: *const fn (*VM) void) Obj {
    return Obj{ .primitive = Primitive.init(name, op) };
}

fn primSet(vm: *VM) void {
    const val = vm.pop();
    const sym = vm.pop();
    switch (sym) {
        .symbol => |s| {
            s.val = val;
            vm.ret(val);
        },
        else => @panic("set on non symbol"),
    }
}

fn primAdd(vm: *VM) void {
    const a = vm.pop();
    const b = vm.pop();
    if (a == .integer) {
        if (b == .integer) {
            const res: Obj = Obj{ .integer = a.integer + b.integer };
            vm.ret(res);
            return;
        }
    }
    @panic("add for non-integer");
}

fn primSub(vm: *VM) void {
    const a = vm.pop();
    const b = vm.pop();
    if (a == .integer) {
        if (b == .integer) {
            const res: Obj = Obj{ .integer = b.integer - a.integer };
            vm.ret(res);
            return;
        }
    }
    @panic("sub for non-integer");
}

fn primMul(vm: *VM) void {
    const a = vm.pop();
    const b = vm.pop();
    if (a == .integer) {
        if (b == .integer) {
            const res: Obj = Obj{ .integer = a.integer * b.integer };
            vm.ret(res);
            return;
        }
    }
    @panic("mul for non-integer");
}

fn primEQ(vm: *VM) void {
    const a = vm.pop();
    const b = vm.pop();
    if (equal(a, b)) {
        vm.ret(Obj{ .boolean = true });
    } else {
        vm.ret(Obj{ .boolean = false });
    }
}

fn primLT(vm: *VM) void {
    const a = vm.pop();
    const b = vm.pop();
    if (a == .integer) {
        if (b == .integer) {
            const res: Obj = Obj{ .boolean = b.integer < a.integer };
            vm.ret(res);
            return;
        }
    }
    @panic("< for non-integer");
}

// =======================================
//      List (Cons) Helper Functions
// =======================================
fn car(obj: Obj) Obj {
    return switch (obj) {
        .cons => |c| c.car,
        else => unreachable,
    };
}

fn cdr(obj: Obj) Obj {
    return switch (obj) {
        .cons => |c| c.cdr,
        else => unreachable,
    };
}

fn cadr(obj: Obj) Obj {
    return car(cdr(obj));
}

fn caddr(obj: Obj) Obj {
    return car(cdr(cdr(obj)));
}

fn cddr(obj: Obj) Obj {
    return cdr(cdr(obj));
}

fn printCons(c: *const Cons, writer: anytype) !void {
    try writer.writeAll("(");
    try writer.print("{}", .{c.car});
    var current = c.cdr;
    while (true) {
        switch (current) {
            .cons => |cell| {
                try writer.writeAll(" ");
                try writer.print("{}", .{cell.car});
                current = cell.cdr;
            },
            .nil => break,
            else => {
                try writer.print(" . {}", .{current});
                break;
            },
        }
    }
    try writer.writeAll(")");
}

fn listLength(list: Obj) usize {
    var count: usize = 0;
    var current = list;
    while (true) {
        switch (current) {
            .cons => |cell| {
                count += 1;
                current = cell.cdr;
            },
            else => break,
        }
    }
    return count;
}

// Finds a symbol in a Lisp association list and returns its index, or -1.
fn assq(sym: Obj, list: Obj) i64 {
    var current = list;
    var i: i64 = 0;
    while (true) {
        switch (current) {
            .cons => |cell| {
                if (equal(cell.car, sym)) return i;
                i += 1;
                current = cell.cdr;
            },
            else => break,
        }
    }
    return -1;
}

fn listToSlice(allocator: Allocator, list: Obj) ![]Obj {
    const len = listLength(list);
    const slice = try allocator.alloc(Obj, len);
    var current = list;
    for (slice, 0..) |*item, i| {
        _ = i;
        item.* = car(current);
        current = cdr(current);
    }
    return slice;
}

fn sliceToList(allocator: Allocator, slice: []const Obj) !Obj {
    var list: Obj = Obj.nil;
    var i = slice.len;
    while (i > 0) {
        i -= 1;
        list = try makeCons(allocator, slice[i], list);
    }
    return list;
}

fn reverse(allocator: Allocator, list: Obj) !Obj {
    var reversed: Obj = Obj.nil;
    var current: Obj = list;
    while (true) {
        switch (current) {
            .cons => |c| {
                reversed = try makeCons(allocator, c.car, reversed);
                current = c.cdr;
            },
            else => break,
        }
    }
    return reversed;
}

// =======================================
// Peeking Reader for Unread support
// =======================================
const PeekingReader = struct {
    reader: std.io.AnyReader,
    // A single-rune buffer to support unread
    lookahead: ?u8,

    pub fn readRune(self: *PeekingReader) !u8 {
        if (self.lookahead) |r| {
            self.lookahead = null;
            return r;
        }

        // Simple UTF-8 decoding from a byte stream
        const first_byte = self.reader.readByte() catch |err| switch (err) {
            error.EndOfStream => return err,
            else => return err,
        };
        return first_byte;

        // if (first_byte < 0x80) {
        //     return first_byte;
        // }

        // var buf: [4]u8 = undefined;
        // buf[0] = first_byte;
        // const len = std.unicode.utf8_byte_sequence_length(first_byte) catch return ' ';

        // if (len > 4 or len < 2) return ' ';

        // try self.reader.readNoEof(&buf[1..len]);
        // return std.unicode.utf8Decode(buf[0..len]) catch ' ';
    }

    pub fn unreadRune(self: *PeekingReader, r: u8) void {
        std.debug.assert(self.lookahead == null); // Should not unread twice
        self.lookahead = r;
    }
};

// =======================================
//   S-Expression Reader
// =======================================
pub const SexpReader = struct {
    vm: *VM,
    peeker: PeekingReader,
    buf: std.ArrayList(u8),
    // pkg_mapping: std.StringHashMap([]const u8),

    pub fn init(vm: *VM, reader: std.io.AnyReader) !SexpReader {
        return SexpReader{
            .vm = vm,
            .peeker = PeekingReader{ .reader = reader, .lookahead = null },
            .buf = std.ArrayList(u8).init(vm.allocator),
        };
    }

    pub fn deinit(self: *SexpReader) void {
        self.buf.deinit();
    }

    // Main entry point for reading one object
    pub fn read(self: *SexpReader) !Obj {
        const r = self.peekAndSkipWhitespace() catch |err| return switch (err) {
            error.EndOfStream => err,
            else => |e| return e,
        };

        switch (r) {
            ';' => { // Comment
                _ = try self.peeker.readRune(); // Consume the ';'
                var current = try self.peeker.readRune();
                while (current != '\n') {
                    current = self.peeker.readRune() catch |err| switch (err) {
                        error.EndOfStream => return err,
                        else => |e| return e,
                    };
                }
                return self.read(); // Recurse to read the next actual object
            },
            '\'' => {
                _ = try self.peeker.readRune(); // Consume the '
                const obj = try self.read();
                const quoted = try makeCons(self.vm.allocator, obj, .nil);
                return makeCons(self.vm.allocator, self.vm.sym_quote, quoted);
            },
            '[' => return self.readListMacro(),
            '(' => return self.readSexp(),
            '"' => return self.readString(),
            else => { // Atom (symbol or number)
                self.buf.clearRetainingCapacity();
                var current = try self.peeker.readRune();
                try self.buf.append(current);

                while (true) {
                    current = self.peeker.readRune() catch break;
                    if (isSymbolTerminator(current)) {
                        self.peeker.unreadRune(current);
                        break;
                    }
                    try self.buf.append(current);
                }
                const token_str = self.buf.items;
                return self.tokenToObj(token_str);
            },
        }
    }

    fn readString(self: *SexpReader) !Obj {
        _ = try self.peeker.readRune(); // consume opening "
        self.buf.clearRetainingCapacity();
        while (true) {
            const r = try self.peeker.readRune();
            if (r == '"') break;
            // TODO: handle escape sequences
            try self.buf.append(r);
        }
        return Obj{ .string = self.buf.items };
    }

    fn readSexp(self: *SexpReader) !Obj {
        _ = try self.peeker.readRune(); // consume opening (
        var head: Obj = Obj.nil;
        while (true) {
            const r = self.peekAndSkipWhitespace() catch |err| switch (err) {
                error.EndOfStream => return error.UnmatchedParenthesis,
                else => |e| return e,
            };
            if (r == ')') break;

            const obj = try self.read();
            head = try makeCons(self.vm.allocator, obj, head);
        }
        _ = try self.peeker.readRune(); // consume closing )

        const reversed = try reverse(self.vm.allocator, head);
        return reversed;
    }

    fn readListMacro(self: *SexpReader) !Obj {
        _ = try self.peeker.readRune(); // consume opening [
        var head_sym_str: []const u8 = "list";
        var items_head: Obj = Obj.nil;
        while (true) {
            const r = self.peekAndSkipWhitespace() catch |err| switch (err) {
                error.EndOfStream => return error.UnmatchedBracket,
                else => |e| return e,
            };
            if (r == ']') break;

            if (r == '.') {
                _ = try self.peeker.readRune(); // consume '.'
                head_sym_str = "list-rest";
                continue;
            }

            const obj = try self.read();
            items_head = try makeCons(self.vm.allocator, obj, items_head);
        }
        _ = try self.peeker.readRune(); // consume closing ]

        const head_sym = try self.vm.makeSymbol(head_sym_str);
        const reversed_items = try reverse(self.vm.allocator, items_head);
        return makeCons(self.vm.allocator, Obj{ .symbol = head_sym }, reversed_items);
    }

    fn tokenToObj(self: *SexpReader, token: []const u8) !Obj {
        if (std.mem.eql(u8, token, "true")) return Obj{ .boolean = true };
        if (std.mem.eql(u8, token, "false")) return Obj{ .boolean = false };

        if (std.fmt.parseFloat(f64, token)) |v| {
            return makeNumber(v);
        } else |_| {}

        // std.debug.print("token to obj for token: {s}\n", .{token});

        return Obj{ .symbol = try self.vm.makeSymbol(token) };
    }

    fn peekAndSkipWhitespace(self: *SexpReader) !u8 {
        while (true) {
            const r = self.peeker.readRune() catch |err| return err;
            if (!std.ascii.isWhitespace(r)) {
                self.peeker.unreadRune(r);
                return r;
            }
        }
    }
};

fn isSymbolTerminator(r: u8) bool {
    if (std.ascii.isWhitespace(r)) return true;
    return switch (r) {
        '(', ')', '[', ']', '"', ';' => true,
        else => false,
    };
}

// Main function for demonstration
pub fn main() !void {
    var gpa = std.heap.GeneralPurposeAllocator(.{}){};
    defer _ = gpa.deinit();
    const allocator = gpa.allocator();

    var vm = try VM.init(allocator);
    // defer vm.deinit();

    const stdin = std.io.getStdIn();
    const reader = stdin.reader();
    var sexp_reader = try SexpReader.init(&vm, reader.any());
    defer sexp_reader.deinit();

    var i: u64 = 0;
    while (true) {
        std.debug.print("{d} #> ", .{i});
        const sexp = try sexp_reader.read();
        std.debug.print("read sexp = {}\n", .{sexp});
        const result = try vm.eval(sexp);
        std.debug.print("{}\n", .{result});
        i = i + 1;
    }
}
