#!/bin/bash
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"

echo "===================================="
echo "Poller 测试套件 - 严格模式"
echo "===================================="
echo ""

run_test() {
  local name="$1"
  local file="$2"
  local tail_n="$3"

  echo "▶ ${name}"
  echo "--------------------------------------"
  if timeout 10 ./cora "$file" >/tmp/cora-poller-test.log 2>&1; then
    tail -n "$tail_n" /tmp/cora-poller-test.log
    echo "PASS: $file"
  else
    tail -n 40 /tmp/cora-poller-test.log
    echo "FAIL: $file"
    exit 1
  fi
  echo ""
}

run_test "测试 01: 导入模块" "test/poller/poller-test-01-import.cora" 15
run_test "测试 02: Mailbox 功能" "test/poller/poller-test-02-mailbox.cora" 20
run_test "测试 03: 直接调用 net-listen" "test/poller/poller-test-03-net-listen-direct.cora" 12
run_test "测试 04: let + net-listen" "test/poller/poller-test-04-net-listen-let.cora" 15
run_test "测试 05: let 绑定数字" "test/poller/poller-test-05-let-number.cora" 12
run_test "测试 06: vm-runtime-init" "test/poller/poller-test-06-vm-init.cora" 18
run_test "测试 07: poller-init" "test/poller/poller-test-07-poller-init.cora" 18
run_test "测试 08: 创建 EventHandle" "test/poller/poller-test-08-eventhandle-new.cora" 20

echo "===================================="
echo "全部通过"
echo "===================================="
