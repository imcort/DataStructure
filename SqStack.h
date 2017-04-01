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

Status InitStack(SqStack &S); //构造一个空栈

//Status DestroyStack(SqStack &S);

//Status ClearStack(SqStack &S);

Status StackEmpty(SqStack S);

int StackLength(SqStack S);

Status GetTop(SqStack S, SElemType &e);

Status Push(SqStack &S, SElemType e);

Status Pop(SqStack &S, SElemType &e);

//Status StackTransverse(SqStack S, Status (*visit)());

#endif
