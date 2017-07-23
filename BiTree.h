#ifndef _DBTREE_H__
#define _DBTREE_H__

#include "DS.h"

typedef char TElemType;

typedef struct BiTNode{

    TElemType data;
    struct BiTNode *lchild, *rchild;

}BiTNode, *BiTree;

Status PrintElem(TElemType e);
Status CreateBiTree(BiTree &T);
Status PreOrder(BiTree T);
Status MidOrder(BiTree T);
Status PostOrder(BiTree T);

#endif
