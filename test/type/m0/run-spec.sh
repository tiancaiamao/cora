#!/bin/bash
set -euo pipefail

ROOT="$(cd "$(dirname "$0")/../../.." && pwd)"
cd "$ROOT"

MANIFEST="test/type/m0/spec-manifest.txt"
INCLUDE_PENDING=0
if [ "${1:-}" = "--include-pending" ]; then
  INCLUDE_PENDING=1
fi

if [ ! -f "$MANIFEST" ]; then
  echo "manifest not found: $MANIFEST"
  exit 1
fi

pass_count=0
skip_count=0
fail_count=0

while IFS='|' read -r status expected file desc; do
  status="${status:-}"
  expected="${expected:-}"
  file="${file:-}"

  if [ -z "$status" ]; then
    continue
  fi
  case "$status" in
    \#*)
      continue
      ;;
  esac

  if [ "$status" = "pending" ] && [ "$INCLUDE_PENDING" -ne 1 ]; then
    echo "SKIP(pending): $file"
    skip_count=$((skip_count + 1))
    continue
  fi

  if [ ! -f "$file" ]; then
    echo "FAIL(missing): $file"
    fail_count=$((fail_count + 1))
    continue
  fi

  log="/tmp/cora-type-m0-$(basename "$file").log"
  set +e
  ./cora "$file" >"$log" 2>&1
  code=$?
  set -e

  ok=0
  if [ "$expected" = "pass" ] && [ "$code" -eq 0 ]; then
    ok=1
  fi
  if [ "$expected" = "fail" ] && [ "$code" -ne 0 ] && [ "$code" -lt 128 ]; then
    ok=1
  fi

  if [ "$ok" -eq 1 ]; then
    echo "PASS($expected): $file"
    pass_count=$((pass_count + 1))
  else
    echo "FAIL($expected): $file"
    if [ "$code" -ge 128 ]; then
      echo "  note: process crashed (exit=$code)"
    fi
    if [ -n "${desc:-}" ]; then
      echo "  note: $desc"
    fi
    cat "$log"
    fail_count=$((fail_count + 1))
  fi
done < "$MANIFEST"

echo "Summary: pass=$pass_count skip=$skip_count fail=$fail_count"
if [ "$fail_count" -ne 0 ]; then
  exit 1
fi
