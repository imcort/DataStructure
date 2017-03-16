#ifndef _Sq_List__
#define _Sq_List__

#include "DS.h"

#define LIST_INIT_SIZE 100
#define LISTINCREMENT 10

typedef int ElemType;

typedef struct {
    
    ElemType *elem;
    //ElemType *newbase;
    int length;
    int listsize;
    
}SqList;

Status ListInit_Sq(SqList &L);
Status ListInsert_Sq(SqList &L, int i, ElemType e);

#endif
