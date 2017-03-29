#include <iostream>
#include <cstdlib>
#include "SqStack.h"
#include "DS.h"

Status InitStack(SqStack &S)
{
    S.base = (SElemType *)malloc(STACK_INIT_SIZE * sizeof(SElemType));
    if (!S.base)
        exit(OVERFLOW);
    S.top = S.base;
    S.stacksize = STACK_INIT_SIZE;
    return OK;
}

Status Push(SqStack &S, SElemType e)
{
    if (S.top - S.base >= S.stacksize)
    {
        SElemType *Newbase;
        Newbase = (SElemType *)realloc(S.base, (S.stacksize + STACK_INIT_SIZE) * sizeof(SElemType));
        if (!Newbase)
            exit(OVERFLOW);
        S.base = Newbase;
        S.top = S.base + S.stacksize;
        S.stacksize += STACKINCREMENT;
    }
    *S.top++ = e;
    return OK;
}

SElemType Pull(SqStack &S){
    if (S.top - S.base)
    {
        SElemType pullnum = *S.top;
        S.top--;
        return pullnum;
    }
    else
        exit(OVERFLOW);
}

Status StackEmpty(SqStack S)
{
    if (S.top - S.base)
        return FALSE;
    else
        return TRUE;
}

int StackLength(SqStack S)
{
    return int(S.top-S.base);
}
