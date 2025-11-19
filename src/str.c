#include "str.h"
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct _strBuf {
	int cap;
	int len;
	char data[];
};

static int
growCap(int oldLen) {
	if (oldLen == 0) {
		return 16;
	}
	if (oldLen < 1024) {
		return oldLen * 2;
	}
	return oldLen * 1.25;
}

str
cstr(char *s) {
	return (str){
		.str = s, .len = strlen(s)};
}

str
toStr(strBuf s) {
	return (str){
		.str = s->data, .len = s->len};
}

int
strLen(str s) {
	return s.len;
}

int
strStr(str haystack, str needle) {
	// TODO: Use Boyer Moore Algorithm maybe?
	int pos = 0;
	while (pos + needle.len <= haystack.len) {
		int i;
		for (i = 0; i < needle.len; i++) {
			if (pos + i >= haystack.len) {
				return -1;
			}
			if (haystack.str[pos + i] != needle.str[i]) {
				pos++;
				break;
			}
		}
		if (i == needle.len) {
			return pos;
		}
	}
	return -1;
}

int
strChr(str s, char c) {
	int pos = 0;
	for (int i = pos; i < strLen(s); i++) {
		if (s.str[i] == c) {
			return i;
		}
	}
	return -1;
}

int
strRchr(str s, char c) {
	int pos = strLen(s) - 1;
	while (pos >= 0) {
		if (s.str[pos] == c) {
			return pos;
		}
		pos--;
	}
	return -1;
}

int
strCmp(str s1, str s2) {
	for (int i = 0; i < s1.len && i < s2.len; i++) {
		if (s1.str[i] > s2.str[i]) {
			return 1;
		}
		if (s1.str[i] < s2.str[i]) {
			return -1;
		}
	}
	return s1.len - s2.len;
}

static char *
ptrByIdx(char *p, int len, int idx) {
	if (idx >= 0) {
		if (idx <= len) {
			return p + idx;
		}
		return NULL;
	}
	if (idx + len >= 0) {
		return p + len + idx;
	}
	return NULL;
}

str
strSub(str s, int start, int end) {
	char *p1 = ptrByIdx(s.str, s.len, start);
	if (p1 == NULL) {
		return (str){
			.len = 0};
	}
	char *p2 = ptrByIdx(s.str, s.len, end);
	if (p2 == NULL) {
		return (str){
			.len = 0};
	}
	if (p1 >= p2) {
		return (str){
			.len = 0};
	}
	return (str){
		.str = p1, .len = p2 - p1};
}

char *
toCStr(strBuf s) {
	return s->data;
}

strBuf
fromBlk(void *ptr, int len) {
	strBuf ret = (strBuf)malloc(sizeof(struct _strBuf) + len + 1);
	if (ptr != NULL) {
		memcpy(&ret->data, ptr, len);
	}
	ret->data[len] = '\0';
	ret->len = len;
	ret->cap = len + 1;
	return ret;
}

strBuf
fromCStr(char *s) {
	int len = strlen(s);
	return fromBlk((void *)s, len);
}

strBuf
strNew(int cap) {
	assert(cap > 0);
	strBuf ret = (strBuf)malloc(sizeof(struct _strBuf) + cap);
	ret->cap = cap;
	ret->len = 0;
	ret->data[0] = '\0';
	return ret;
}

void
strFree(strBuf buf) {
	free(buf);
}

strBuf
strDup(str s) {
	strBuf ret = fromBlk(s.str, s.len);
	return ret;
}

strBuf
strCpy(strBuf to, str from) {
	if (to->cap < from.len + 1) {
		strBuf tmp = strNew(from.len + 1);
		strFree(to);
		to = tmp;
	}

	memcpy(to->data, from.str, from.len);
	to->len = from.len;
	to->data[from.len] = '\0';
	return to;
}

strBuf
strBufReserve(strBuf s, int cap) {
	if (s->cap >= cap) {
		return s;
	}
	strBuf tmp = strNew(cap);
	tmp = strCpy(tmp, toStr(s));
	strFree(s);
	return tmp;
}

strBuf
strCat(strBuf to, str from) {
	to = strBufReserve(to, to->len + from.len + 1);
	memcpy(&to->data[to->len], from.str, from.len);
	to->len = to->len + from.len;
	to->data[to->len] = '\0';
	return to;
}

strBuf
strAppend(strBuf to, char c) {
	if (to->len + 2 > to->cap) {
		to = strBufReserve(to, growCap(to->len + 1));
	}
	to->data[to->len] = c;
	to->len++;
	to->data[to->len] = '\0';
	return to;
}

strBuf
strShrink(strBuf to, int n) {
	if (n >= to->len) {
		to->len = 0;
		to->data[0] = '\0';
	} else {
		to->len -= n;
		to->data[to->len] = '\0';
	}
	return to;
}
