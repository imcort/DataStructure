#include <iostream>
#include <cstdlib>
#include "str.h"

Status StrAssign(HString &T, char *chars)
{

    if (T.ch)
        free(T.ch);
    int i;
    char *c;
    for (i = 0, c = chars; *c; ++i, ++c) //calculate chars length i
        ;
    if (!i)
    {
        T.ch = NULL;
        T.length = 0;
    } //string empty
    else
    {
        if (!(T.ch = (char *)malloc(i * sizeof(char))))
            exit(OVERFLOW);
        for (int j = 0; j < i; j++)
            T.ch[j] = chars[j];
        T.length = i;
    } //not empty
    return OK;
}

Status StrPrint(HString S)
{
    for (int i = 0; i < S.length; i++)
        printf("%c", S.ch[i]);
    return OK;
}

int StrLength(HString S)
{
    return S.length;
}

int StrCompare(HString S, HString T)
{
    for (int i = 0; i < S.length && i < T.length; ++i)
        if (S.ch[i] != T.ch[i])
            return S.ch[i] - T.ch[i];
    return S.length - T.length;
}

Status SubString(HString &sub, HString S, int pos, int len)
{
    if (pos < 1 || pos > S.length || len < 0 || len > S.length - pos + 1)
        return ERROR;
    if (sub.ch)
        free(sub.ch);
    if (!len)
    {
        sub.ch = NULL;
        sub.length = 0;
    }
    else
    {
        sub.ch = (char *)malloc(len * sizeof(char));
        for (int i = 0; i < len; i++)
            sub.ch[i] = S.ch[pos + i - 1];
        sub.length = len;
    }
    return OK;
}

int index(HString S, HString T, int pos)
{
    int s_length, t_length, i;
    HString sub;
    if (pos > 0)
    {
        s_length = StrLength(S);
        t_length = StrLength(T);
        i = pos;
        while (i <= s_length - t_length + 1)
        {
            SubString(sub, S, i, t_length);
            if (StrCompare(sub, T) != 0)
                ++i;
            else
                return i;
        }
    }
    return 0;
}
