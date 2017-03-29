#ifndef __SQSTACK__H_
#define __SQSTACK__H_

#include "DS.h"

#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10

typedef int SElemType;

typedef struct
{

    SElemType *base;
    SElemType *top;
    int stacksize;

} SqStack;

Status InitStack(SqStack &S);
Status StackEmpty(SqStack S);
Status Push(SqStack &S, SElemType e);
int StackLength(SqStack S);
SElemType Pull(SqStack &S);

#endif
