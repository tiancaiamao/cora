#!/bin/bash
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"

run_ok() {
  local file="$1"
  local log="/tmp/cora-type-test-ok.log"
  if ./cora "$file" >"$log" 2>&1; then
    echo "PASS: $file"
  else
    cat "$log"
    echo "FAIL: $file"
    exit 1
  fi
}

run_fail() {
  local file="$1"
  local log="/tmp/cora-type-test-fail.log"
  set +e
  ./cora "$file" >"$log" 2>&1
  local code=$?
  set -e
  if [ "$code" -ge 128 ]; then
    cat "$log"
    echo "FAIL: $file (process crashed with signal, exit=$code)"
    exit 1
  fi
  if [ "$code" -eq 0 ]; then
    cat "$log"
    echo "FAIL: $file (expected failure but got success)"
    exit 1
  fi
  echo "PASS(expected-fail): $file"
}

run_ok "test/type/resolve-test.cora"
run_ok "test/type/resolver/boundary-test.cora"
run_ok "test/type/infer-test.cora"
run_ok "test/type/try-throw-test.cora"
run_ok "test/type/cml-static-test.cora"
run_ok "test/type/error-diagnostic-test.cora"
run_ok "test/type/stdlib/signature-test.cora"
run_ok "test/type/stdlib/async-cml-signature-test.cora"
run_ok "test/type/stdlib/data-structure-signature-test.cora"
run_ok "test/type/stdlib/tc-stdlib-smoke.cora"
run_ok "example/type.cora"
run_ok "test/type/usability/module-usage-pass.cora"
run_ok "test/type/usability/tc-module-scope-pass.cora"
run_ok "test/type/usability/api-positive-matrix.cora"
run_ok "test/type/usability/api-negative-matrix.cora"
run_ok "test/type/usability/begin-nary-pass.cora"
run_ok "test/type/type-directive-ok.cora"
run_fail "test/type/type-directive-fail.cora"
run_fail "test/type/usability/module-usage-fail.cora"
run_fail "test/type/usability/tc-module-scope-fail.cora"
run_fail "test/type/usability/do-arity-fail.cora"
run_fail "test/type/usability/known-crash-chan-async-repro.cora"
