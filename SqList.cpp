#include <iostream>
#include <cstdlib>
#include "SqList.h"

Status ListInit_Sq(SqList &L)
{

    L.elem = (ElemType *)malloc(LIST_INIT_SIZE * sizeof(ElemType));

    if (!L.elem)
        exit(OVERFLOW);

    L.length = 0;
    L.listsize = LIST_INIT_SIZE;
    return OK;
}

Status ListInsert_Sq(SqList &L, int i, ElemType e)
{

    if (i < 1 || i > L.length + 1)
        return ERROR;
    if (L.length >= L.listsize)
    {

        ElemType *newbase = (ElemType *)realloc(L.elem, (L.listsize + LISTINCREMENT) * sizeof(ElemType));
        if (!newbase)
            exit(OVERFLOW);
        L.elem = newbase;
        L.listsize += LISTINCREMENT;
    }
    ElemType *p, *q;
    q = &(L.elem[i - 1]);
    for (p = &(L.elem[L.length - 1]); p >= q; --p)
        *(p + 1) = *p;
    *q = e;
    ++L.length;
    return OK;
}
