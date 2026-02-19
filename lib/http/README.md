# HTTP Library for Cora

A Go-style HTTP library for the Cora programming language.

## Features

- ✅ HTTP/1.1 request parsing (using picohttpparser)
- ✅ HTTP response building
- ✅ Go-style API (`http-listen-and-serve`)
- ✅ Request/Response helpers
- ✅ Simple routing (serve mux)
- ✅ CML-based concurrency (one thread per connection)

## Quick Start

### Hello World Server

```cora
(import "cora/lib/net/http")

(defun hello-handler (req)
  (http-response-html "<h1>Hello from Cora!</h1>"))

(http-listen-and-serve ":8080" #'hello-handler)
```

Run it:
```bash
DYLD_LIBRARY_PATH=./src ./cora hello-server.cora
```

Test it:
```bash
curl http://localhost:8080/
```

### Server with Routing

```cora
(import "cora/lib/net/http")

;; Create router
(let mux (http-new-serve-mux)
  (begin
    (set 'mux (http-handle mux "/" 
      (lambda (req) (http-response-html "<h1>Home</h1>"))))
    
    (set 'mux (http-handle mux "/api/status"
      (lambda (req) (http-response-json "{\"status\":\"ok\"}"))))
    
    (http-listen-and-serve ":8080" (http-mux-handler mux))))
```

## API Reference

Primary module path: `cora/lib/net/http`

### Request Helpers

```cora
;; Get field from request
(http-request-get req 'path)      ; => "/"
(http-request-get req 'method)    ; => "GET"
(http-request-get req 'query)     ; => "foo=bar"
(http-request-get req 'version)   ; => "HTTP/1.1"
(http-request-get req 'headers)   ; => (("Host" . "localhost") ...)
(http-request-get req 'body)      ; => "request body"

;; Get specific header
(http-request-get-header req "Content-Type")  ; => "application/json"
```

### Response Builders

```cora
;; Create custom response
(http-response-new 200 
                   '(("Content-Type" . "text/html"))
                   "<h1>Hello</h1>")

;; Convenience functions
(http-response-ok "Success")              ; 200 text/plain
(http-response-html "<h1>Hello</h1>")     ; 200 text/html
(http-response-json "{\"status\":\"ok\"}") ; 200 application/json
(http-response-not-found)                  ; 404 text/html
(http-response-error "Something went wrong") ; 500 text/plain
```

### Server Functions

```cora
;; Start HTTP server
(http-listen-and-serve ":8080" handler)

;; Handler signature
(defun my-handler (req)
  ;; req is an association list:
  ;; ((method . "GET")
  ;;  (path . "/")
  ;;  (query . "")
  ;;  (version . "HTTP/1.1")
  ;;  (headers . (...))
  ;;  (body . ""))
  
  ;; Return response
  (http-response-ok "Hello"))
```

### Routing

```cora
;; Create router
(let mux (http-new-serve-mux))

;; Add routes
(set 'mux (http-handle mux "/path" handler))

;; Use router
(http-listen-and-serve ":8080" (http-mux-handler mux))
```

## Examples

See `examples/http/` directory:

- `hello-server.cora` - Basic hello world server
- `router-server.cora` - Server with multiple routes

## Architecture

### Request Parsing

- Uses [picohttpparser](https://github.com/h2o/picohttpparser) for fast HTTP/1.1 parsing
- Returns request as association list
- Automatically splits path and query string

### Response Building

- Build response from association list
- Automatic status text mapping (200 → "OK", 404 → "Not Found", etc.)
- Headers and body concatenation

### Concurrency Model

- Based on CML (Concurrent ML)
- One CML thread per connection (like goroutines)
- Automatic cleanup when connection closes

## Implementation Details

### Native Functions (C)

```c
// Parse HTTP request
(http-internal-parse-request bytes)  ; => alist

// Build HTTP response
(http-internal-build-response alist) ; => bytes
```

### Performance

- picohttpparser is used in production (H2O server)
- Zero-copy parsing where possible
- CML threads are lightweight

## Building

```bash
# Build HTTP library
cd build && make cora_http_internal

# Library is automatically installed to:
# ~/.local/share/cora/pkg/cora/lib/net/http/internal.so
```

## Testing

```bash
# Run parser tests
DYLD_LIBRARY_PATH=./src ./cora test/http/test-parser-comprehensive.cora

# Run response builder tests
DYLD_LIBRARY_PATH=./src ./cora test/http/test-response-builder.cora
```

## Status

- ✅ HTTP request parsing
- ✅ HTTP response building
- ✅ High-level API
- ✅ Examples
- ⚠️ Needs real-world testing
- ⚠️ Missing middleware support
- ⚠️ Missing static file serving
- ⚠️ Missing HTTPS support

## Future Work

- [ ] Middleware support
- [ ] Static file serving
- [ ] HTTPS/TLS support
- [ ] WebSocket support
- [ ] HTTP/2 support
- [ ] Request context and cancellation
- [ ] Graceful shutdown
- [ ] Request logging
- [ ] Rate limiting

## Related

- [MISSING_INFRASTRUCTURE.md](MISSING_INFRASTRUCTURE.md) - Missing features discovered during implementation
- [Cora Language](../README.md) - Main Cora documentation
