#!/bin/bash
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/../.." && pwd)"
cd "$ROOT"

echo "===================================="
echo "Shebang 处理回归测试套件"
echo "===================================="
echo ""
echo "测试目标：验证 main.c 中的 shebang 处理不会跳过文件的第一行"
echo ""

run_test() {
  local name="$1"
  local file="$2"
  local expected="$3"

  echo "▶ ${name}"
  echo "--------------------------------------"
  if timeout 10 ./cora "$file" >/tmp/cora-shebang-test.log 2>&1; then
    output=$(grep -v "^import load-so" /tmp/cora-shebang-test.log)
    if echo "$output" | grep -q "$expected"; then
      echo "PASS: $expected"
    else
      echo "FAIL: 期望包含 '$expected'"
      echo "实际输出:"
      echo "$output"
      exit 1
    fi
  else
    echo "FAIL: $file 执行失败"
    cat /tmp/cora-shebang-test.log
    exit 1
  fi
  echo ""
}

run_test "测试 01: 无 shebang 文件 - 第一行不丢失" \
  "test/shebang/shebang-test-01-no-shebang.cora" \
  "third line"

run_test "测试 02: 第一行 import 能工作" \
  "test/shebang/shebang-test-02-import-first.cora" \
  "5"

run_test "测试 03: 带 shebang 的文件正常工作" \
  "test/shebang/shebang-test-03-with-shebang.cora" \
  "has shebang"

run_test "测试 04: 多个 import 在前几行" \
  "test/shebang/shebang-test-04-multi-import.cora" \
  "done"

echo "===================================="
echo "全部通过 ✓"
echo "===================================="
