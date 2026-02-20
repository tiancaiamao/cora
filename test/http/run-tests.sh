#!/bin/bash
# Run HTTP library tests

set -e

SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/../.." && pwd)"

echo "=== HTTP Library Tests ==="
echo ""

# Set library path
export DYLD_LIBRARY_PATH="$PROJECT_ROOT/src:$DYLD_LIBRARY_PATH"

# Run parser tests
echo "Running parser tests..."
"$PROJECT_ROOT/cora" "$SCRIPT_DIR/test-parser-comprehensive.cora" 2>&1 | grep -v "import load-so"
echo ""

# Run response builder tests
echo "Running response builder tests..."
"$PROJECT_ROOT/cora" "$SCRIPT_DIR/test-response-builder.cora" 2>&1 | grep -v "import load-so"
echo ""

echo "Running net/http integration tests..."
"$SCRIPT_DIR/test-net-http-integration.sh"
echo ""

echo "=== All HTTP tests completed ==="
