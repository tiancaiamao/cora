#!/bin/bash
set -euo pipefail

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"
CORA_BIN="$PROJECT_ROOT/cora"
CURL_BIN="/usr/bin/curl"

SERVER_PID=""
SERVER_LOG=""

cleanup() {
  if [[ -n "${SERVER_PID}" ]]; then
    kill "${SERVER_PID}" >/dev/null 2>&1 || true
    wait "${SERVER_PID}" >/dev/null 2>&1 || true
    SERVER_PID=""
  fi
}

show_server_log_and_fail() {
  local msg="$1"
  echo "ERROR: ${msg}"
  if [[ -n "${SERVER_LOG}" && -f "${SERVER_LOG}" ]]; then
    echo "--- server log ---"
    sed -n '1,200p' "${SERVER_LOG}"
    echo "------------------"
  fi
  exit 1
}

wait_until_ready() {
  local port="$1"
  local i=0
  while [[ $i -lt 80 ]]; do
    if ! kill -0 "${SERVER_PID}" >/dev/null 2>&1; then
      show_server_log_and_fail "server exited before becoming ready"
    fi
    local code
    code="$("${CURL_BIN}" -s -o /dev/null -w "%{http_code}" --max-time 1 "http://127.0.0.1:${port}/" || true)"
    if [[ "${code}" != "000" ]]; then
      return 0
    fi
    /bin/sleep 0.05
    i=$((i + 1))
  done
  show_server_log_and_fail "server did not listen on 127.0.0.1:${port}"
}

start_server() {
  local script="$1"
  local port="$2"

  cleanup
  SERVER_LOG="$(mktemp -t cora-net-http)"
  DYLD_LIBRARY_PATH="$PROJECT_ROOT/src:${DYLD_LIBRARY_PATH:-}" \
    "${CORA_BIN}" "${SCRIPT_DIR}/${script}" >"${SERVER_LOG}" 2>&1 &
  SERVER_PID=$!
  wait_until_ready "${port}"
}

assert_request() {
  local port="$1"
  local path="$2"
  local want_code="$3"
  local want_substr="$4"

  local response
  response="$("${CURL_BIN}" -sS --max-time 2 -w $'\n%{http_code}' "http://127.0.0.1:${port}${path}")"

  local status
  status="$(printf "%s" "${response}" | tail -n 1)"
  local body
  body="$(printf "%s" "${response}" | sed '$d')"

  if [[ "${status}" != "${want_code}" ]]; then
    echo "Request failed: GET ${path}"
    echo "Expected status: ${want_code}, got: ${status}"
    echo "Body: ${body}"
    show_server_log_and_fail "unexpected status code"
  fi

  if [[ -n "${want_substr}" ]] && ! printf "%s" "${body}" | grep -Fq "${want_substr}"; then
    echo "Request failed: GET ${path}"
    echo "Expected body to contain: ${want_substr}"
    echo "Body: ${body}"
    show_server_log_and_fail "unexpected response body"
  fi
}

trap cleanup EXIT

echo "Running net/http integration tests..."

start_server "test-net-http-server-basic.cora" "18081"
assert_request "18081" "/health" "200" "ok-basic"
assert_request "18081" "/missing" "404" "404"
cleanup

start_server "test-net-http-server-mux.cora" "18082"
assert_request "18082" "/" "200" "mux-home"
assert_request "18082" "/api/status" "200" "\"status\":\"ok\""
assert_request "18082" "/missing" "404" "404"
cleanup

echo "net/http integration tests passed."
