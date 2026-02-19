#include "parser.h"
#include "picohttpparser/picohttpparser.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/* Parse HTTP request - Cora native function */
static void
httpInternalParseRequest(struct Cora *co, int label, Obj *R) {
    Obj bytesObj = R[1];

    /* In Cora, strings are bytes */
    if (!isBytes(bytesObj)) {
        coraReturn(co, Nil);
        return;
    }

    /* Get buffer and length */
    struct scmBytes *bytes = ptr(bytesObj);
    const char *buf = bytes->data;
    size_t len = bytes->len;

    const char *method;
    size_t method_len;
    const char *path;
    size_t path_len;
    int minor_version;
    struct phr_header headers[100];
    size_t num_headers = sizeof(headers) / sizeof(headers[0]);

    /* Parse request */
    int ret = phr_parse_request(buf, len,
                                &method, &method_len,
                                &path, &path_len,
                                &minor_version,
                                headers, &num_headers, 0);

    if (ret < 0) {
        /* Parse failed - return nil */
        coraReturn(co, Nil);
        return;
    }

    /* Build request association list */
    Obj result = Nil;

    /* Add body (remaining bytes after headers) */
    size_t header_end = ret;
    Obj body = makeString(co->gc, buf + header_end, len - header_end);
    result = makeCons(co->gc, makeCons(co->gc, intern("body"), body), result);

    /* Build headers list */
    Obj headers_list = Nil;
    for (size_t i = 0; i < num_headers; i++) {
        if (headers[i].name != NULL) {
            Obj hname = makeString(co->gc, headers[i].name, headers[i].name_len);
            Obj hvalue = makeString(co->gc, headers[i].value, headers[i].value_len);
            Obj header = makeCons(co->gc, hname, hvalue);
            headers_list = makeCons(co->gc, header, headers_list);
        }
    }
    result = makeCons(co->gc, makeCons(co->gc, intern("headers"), headers_list), result);

    /* Add HTTP version */
    char version[16];
    snprintf(version, sizeof(version), "HTTP/1.%d", minor_version);
    Obj version_obj = makeString(co->gc, version, strlen(version));
    result = makeCons(co->gc, makeCons(co->gc, intern("version"), version_obj), result);

    /* Split path into path and query string */
    Obj path_obj;
    Obj query_obj = makeString(co->gc, "", 0);

    const char *query_start = memchr(path, '?', path_len);
    if (query_start != NULL) {
        size_t path_only_len = query_start - path;
        path_obj = makeString(co->gc, path, path_only_len);
        query_obj = makeString(co->gc, query_start + 1, path_len - path_only_len - 1);
    } else {
        path_obj = makeString(co->gc, path, path_len);
    }

    result = makeCons(co->gc, makeCons(co->gc, intern("query"), query_obj), result);
    result = makeCons(co->gc, makeCons(co->gc, intern("path"), path_obj), result);

    /* Add method */
    Obj method_obj = makeString(co->gc, method, method_len);
    result = makeCons(co->gc, makeCons(co->gc, intern("method"), method_obj), result);

    coraReturn(co, result);
}

/* Build HTTP response from Cora data structure */
static void
httpInternalBuildResponse(struct Cora *co, int label, Obj *R) {
    Obj response = R[1];

    /* Extract fields from response */
    int status = 200;
    Obj headers = Nil;
    Obj body = makeString(co->gc, "", 0);

    /* Iterate through association list */
    Obj curr = response;
    while (curr != Nil) {
        Obj pair = car(curr);
        Obj key = car(pair);
        Obj value = cdr(pair);

        if (key == intern("status")) {
            status = fixnum(value);
        } else if (key == intern("headers")) {
            headers = value;
        } else if (key == intern("body")) {
            body = value;
        }

        curr = cdr(curr);
    }

    /* Build status line */
    char status_line[256];
    const char *status_text = "OK";
    switch (status) {
        case 200: status_text = "OK"; break;
        case 201: status_text = "Created"; break;
        case 204: status_text = "No Content"; break;
        case 400: status_text = "Bad Request"; break;
        case 404: status_text = "Not Found"; break;
        case 500: status_text = "Internal Server Error"; break;
    }
    snprintf(status_line, sizeof(status_line), "HTTP/1.1 %d %s\r\n", status, status_text);

    /* Start building response */
    size_t total_len = strlen(status_line);

    /* Calculate headers length */
    Obj curr_header = headers;
    size_t headers_len = 0;
    while (curr_header != Nil) {
        Obj pair = car(curr_header);
        Obj hname = car(pair);
        Obj hvalue = cdr(pair);
        struct scmBytes *name = ptr(hname);
        struct scmBytes *value_buf = ptr(hvalue);
        headers_len += name->len;
        headers_len += value_buf->len;
        headers_len += 4; /* ": " + "\r\n" */
        curr_header = cdr(curr_header);
    }

    /* Get body length */
    struct scmBytes *body_buf = ptr(body);
    size_t body_len = body_buf->len;

    /* Total response length */
    total_len += headers_len;
    total_len += 2; /* blank line */
    total_len += body_len;

    /* Allocate response buffer */
    char *resp_buf = (char*)malloc(total_len + 1);
    if (!resp_buf) {
        coraReturn(co, makeString(co->gc, "", 0));
        return;
    }

    /* Build response */
    char *p = resp_buf;
    p += sprintf(p, "%s", status_line);

    /* Add headers */
    curr_header = headers;
    while (curr_header != Nil) {
        Obj pair = car(curr_header);
        Obj hname = car(pair);
        Obj hvalue = cdr(pair);
        struct scmBytes *name = ptr(hname);
        struct scmBytes *value_buf = ptr(hvalue);
        p += sprintf(p, "%.*s: %.*s\r\n", name->len, name->data, value_buf->len, value_buf->data);
        curr_header = cdr(curr_header);
    }

    /* Add blank line */
    p += sprintf(p, "\r\n");

    /* Add body */
    if (body_len > 0 && body_buf != NULL) {
        memcpy(p, body_buf->data, body_len);
        p += body_len;
    }
    *p = '\0';

    Obj result = makeString(co->gc, resp_buf, total_len);
    free(resp_buf);

    coraReturn(co, result);
}

/* Register functions using new API */
void
entry(struct Cora *co, int label, Obj *R) {
	Obj pkg = R[2];
	str module = stringStr(pkg);
	coraRegisterAPI(co, module.str, "http-internal-parse-request", httpInternalParseRequest, 1);
	coraRegisterAPI(co, module.str, "http-internal-build-response", httpInternalBuildResponse, 1);
	coraReturn(co, intern("http"));
}