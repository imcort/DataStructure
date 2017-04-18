#ifndef __STR_H__
#define __STR_H__

#include "DS.h"

#define MAXSTRLEN 255
typedef unsigned char SString[MAXSTRLEN + 1];

typedef struct
{
    char *ch;
    int length;
} HString;

Status StrAssign(HString &T, char *chars);
int StrLength(HString S);
int StrCompare(HString S, HString T);
Status ClearString(HString &S);
Status Concat(HString &T, HString S1, HString S2);
Status SubString(HString &sub, HString S, int pos, int len);
int index(HString S, HString T, int pos = 0);
Status StrPrint(HString S);

#endif
