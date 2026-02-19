#ifndef CORA_HTTP_PARSER_H
#define CORA_HTTP_PARSER_H

#include "../../src/types.h"
#include "../../src/runtime.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Parse HTTP request from buffer, return Cora association list:
   ((method . "GET")
    (path . "/foo")
    (query . "bar=1")
    (version . "HTTP/1.1")
    (headers . (("Host" . "localhost")))
    (body . ""))
*/
Obj coraHttpParseRequest(Cora *co, const char *buf, size_t len);

/* Build HTTP response from Cora data structure:
   ((status . 200)
    (headers . (("Content-Type" . "text/html")))
    (body . "<html>...</html>"))

   Returns: Cora string object
*/
Obj coraHttpBuildResponse(Cora *co, Obj response);

#ifdef __cplusplus
}
#endif

#endif