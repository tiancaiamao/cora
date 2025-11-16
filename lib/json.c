// Wrap on jansson lib

#include "runtime.h"
#include <jansson.h>

static void
jsonLoadFile(struct Cora *co, int label, Obj *R) {
	str path = stringStr(R[1]);
	json_error_t err;
	json_t *json = json_load_file(path.str, 0, &err);
	if (!json) {
		printf("json load file error:%s\n", err.text);
		coraReturn(co, Nil);
		return;
	}
	coraReturn(co, makeCObj(json));
}

static void
jsonTypeOf(struct Cora *co, int label, Obj *R) {
	if (!iscobj(R[1])) {
		coraReturn(co, Nil);
		return;
	}
	json_t *json = (json_t *)mustCObj(R[1]);
	int v = json_typeof(json);
	switch (v) {
	case JSON_OBJECT:
		coraReturn(co, intern("object"));
		return;
	case JSON_ARRAY:
		coraReturn(co, intern("array"));
		return;
	case JSON_STRING:
		coraReturn(co, intern("string"));
		return;
	case JSON_INTEGER:
		coraReturn(co, intern("integer"));
		return;
	case JSON_REAL:
		coraReturn(co, intern("real"));
		return;
	case JSON_TRUE:
		coraReturn(co, intern("true"));
		return;
	case JSON_FALSE:
		coraReturn(co, intern("false"));
		return;
	case JSON_NULL:
		coraReturn(co, intern("null"));
		return;
	}
	coraReturn(co, Nil);
}

static void
jsonIsArray(struct Cora *co, int label, Obj *R) {
	if (!iscobj(R[1])) {
		coraReturn(co, False);
		return;
	}
	json_t *json = (json_t *)mustCObj(R[1]);
	int v = json_is_array(json);
	coraReturn(co, v > 0 ? True : False);
}

static void
jsonIsObject(struct Cora *co, int label, Obj *R) {
	if (!iscobj(R[1])) {
		coraReturn(co, False);
		return;
	}
	json_t *json = (json_t *)mustCObj(R[1]);
	int v = json_is_object(json);
	coraReturn(co, v > 0 ? True : False);
}

static void
jsonIsString(struct Cora *co, int label, Obj *R) {
	if (!iscobj(R[1])) {
		coraReturn(co, False);
		return;
	}
	json_t *json = (json_t *)mustCObj(R[1]);
	int v = json_is_string(json);
	coraReturn(co, v > 0 ? True : False);
}

static void
jsonStringValue(struct Cora *co, int label, Obj *R) {
	if (!iscobj(R[1])) {
		coraReturn(co, makeCString(co->gc, ""));
		return;
	}
	json_t *json = (json_t *)mustCObj(R[1]);
	const char *s = json_string_value(json);
	size_t len = json_string_length(json);
	coraReturn(co, makeString(co->gc, s, len));
}

static void
jsonIntegerValue(struct Cora *co, int label, Obj *R) {
	if (!iscobj(R[1])) {
		coraReturn(co, makeNumber(0));
		return;
	}
	json_t *json = (json_t *)mustCObj(R[1]);
	json_int_t v = json_integer_value(json);
	coraReturn(co, makeNumber(v));
}

static void
jsonIsInteger(struct Cora *co, int label, Obj *R) {
	if (!iscobj(R[1])) {
		coraReturn(co, False);
		return;
	}
	json_t *json = (json_t *)mustCObj(R[1]);
	int v = json_is_integer(json);
	coraReturn(co, v > 0 ? True : False);
}

static void
jsonIsReal(struct Cora *co, int label, Obj *R) {
	if (!iscobj(R[1])) {
		coraReturn(co, False);
		return;
	}
	json_t *json = (json_t *)mustCObj(R[1]);
	int v = json_is_real(json);
	coraReturn(co, v > 0 ? True : False);
}

static void
jsonIsNull(struct Cora *co, int label, Obj *R) {
	if (!iscobj(R[1])) {
		coraReturn(co, False);
		return;
	}
	json_t *json = (json_t *)mustCObj(R[1]);
	int v = json_is_null(json);
	coraReturn(co, v > 0 ? True : False);
}

static void
jsonIsTrue(struct Cora *co, int label, Obj *R) {
	if (!iscobj(R[1])) {
		coraReturn(co, False);
		return;
	}
	json_t *json = (json_t *)mustCObj(R[1]);
	int v = json_is_true(json);
	coraReturn(co, v > 0 ? True : False);
}

static void
jsonIsFalse(struct Cora *co, int label, Obj *R) {
	if (!iscobj(R[1])) {
		coraReturn(co, False);
		return;
	}
	json_t *json = (json_t *)mustCObj(R[1]);
	int v = json_is_false(json);
	coraReturn(co, v > 0 ? True : False);
}

static void
jsonArraySize(struct Cora *co, int label, Obj *R) {
	json_t *json = (json_t *)mustCObj(R[1]);
	size_t v = json_array_size(json);
	coraReturn(co, makeNumber(v));
}

static void
jsonArrayGet(struct Cora *co, int label, Obj *R) {
	json_t *json = (json_t *)mustCObj(R[1]);
	int idx = fixnum(R[2]);
	json_t *v = json_array_get(json, idx);
	if (v == NULL) {
		coraReturn(co, Nil);
		return;
	}
	coraReturn(co, makeCObj(v));
}

static void
jsonObjectSize(struct Cora *co, int label, Obj *R) {
	json_t *json = (json_t *)mustCObj(R[1]);
	size_t v = json_object_size(json);
	coraReturn(co, makeNumber(v));
}

static void
jsonObjectGet(struct Cora *co, int label, Obj *R) {
	json_t *json = (json_t *)mustCObj(R[1]);
	str key = stringStr(R[2]);
	json_t *v = json_object_get(json, key.str);
	if (v == NULL) {
		coraReturn(co, Nil);
		return;
	}
	coraReturn(co, makeCObj(v));
}

struct registerModule jsonModule = {
	NULL,
	{{"json-load-file", jsonLoadFile, 1},
		{"json-typeof", jsonTypeOf, 1},
		{"json-is-array?", jsonIsArray, 1},
		{"json-is-object?", jsonIsObject, 1},
		{"json-is-integer?", jsonIsInteger, 1},
		{"json-integer-value", jsonIntegerValue, 1},
		{"json-is-real?", jsonIsReal, 1},
		{"json-is-string?", jsonIsString, 1},
		{"json-string-value", jsonStringValue, 1},
		{"json-is-null?", jsonIsNull, 1},
		{"json-is-true?", jsonIsTrue, 1},
		{"json-is-false?", jsonIsFalse, 1},
		{"json-array-size", jsonArraySize, 1},
		{"json-array-get", jsonArrayGet, 2},
		{"json-object-size", jsonObjectSize, 1},
		{"json-object-get", jsonObjectGet, 2},
		{NULL, NULL, 0}}};

void
entry(struct Cora *co, int label, Obj *R) {
	Obj pkg = R[2];
	registerAPI(co, &jsonModule, stringStr(pkg));
	coraReturn(co, intern("json"));
}
