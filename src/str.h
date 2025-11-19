#ifndef _STR_H_
#define _STR_H_

typedef struct {
  char *str;
  unsigned int len;
} str;

struct _strBuf;
typedef struct _strBuf* strBuf;

#define S(s) (str){s, sizeof(s)-1}
str cstr(char* str);
str toStr(strBuf s);
int strLen(str s);
int strStr(str haystack, str needle);
int strChr(str s, char c);
int strRchr(str s, char c);
int strCmp(str s, str s0);
str strSub(str s, int start, int end);
str strCut(str *s, str split);

char* toCStr(strBuf s);
strBuf fromCStr(char *s);
strBuf fromBlk(void *ptr, int len);
strBuf strNew(int cap);
void strFree(strBuf buf);
strBuf strDup(str s);
strBuf strCpy(strBuf to, str from);
strBuf strCat(strBuf to, str from);
strBuf strAppend(strBuf to, char c);
strBuf strShrink(strBuf to, int n);

#endif
