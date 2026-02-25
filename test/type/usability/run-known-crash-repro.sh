#!/bin/bash
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/../../.." && pwd)"
cd "$ROOT"

target="test/type/usability/known-crash-chan-async-repro.cora"
log="/tmp/cora-known-crash-repro.log"

set +e
./cora "$target" >"$log" 2>&1
code=$?
set -e

if [ "$code" -ge 128 ]; then
  echo "KNOWN-CRASH-REPRO: unexpected crash (exit=$code)"
  cat "$log"
  exit 1
fi

if [ "$code" -eq 0 ]; then
  echo "KNOWN-CRASH-REPRO: expected graceful failure, got success"
  cat "$log"
  exit 1
fi

echo "KNOWN-CRASH-REPRO: pass (failed without crash, exit=$code)"
