#!/bin/bash
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"

echo "===================================="
echo "Parallel 测试套件 - spawn-vm + 集成回归"
echo "===================================="
echo ""

run_test() {
  local name="$1"
  local file="$2"
  local timeout_s="$3"
  local tail_n="$4"

  echo "▶ ${name}"
  echo "--------------------------------------"
  if timeout "$timeout_s" ./cora "$file" >/tmp/cora-parallel-test.log 2>&1; then
    tail -n "$tail_n" /tmp/cora-parallel-test.log
    echo "PASS: $file"
  else
    tail -n 60 /tmp/cora-parallel-test.log
    echo "FAIL: $file"
    exit 1
  fi
  echo ""
}

run_test "测试 01: spawn-vm 基础启动 + ack" "test/parallel/spawn-vm-test-01-basic.cora" 30 30
run_test "测试 02: 2 VM + VM 内多 coroutine" "test/parallel/spawn-vm-test-02-multi-vm-coroutines.cora" 30 30
run_test "测试 03: spawn-vm mailbox RPC" "test/parallel/spawn-vm-test-03-mailbox-rpc.cora" 30 30
run_test "测试 04: 跨 VM mailbox 现有用例" "test/parallel/cross-vm-mailbox.cora" 30 35
run_test "测试 05: mixed workload 现有用例" "test/parallel/mixed-workload.cora" 30 30
run_test "测试 06: parallel net e2e 现有用例" "test/parallel/parallel-net-e2e.cora" 30 35

echo "===================================="
echo "全部通过"
echo "===================================="
