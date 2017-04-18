#ifndef _SPARSE_MTX__
#define _SPARSE_MTX__

#include "DS.h"

#define MAXSIZE 12500

typedef int ElemType;

typedef struct
{

    int i, j; //行下标，列下标
    ElemType e;
} Triple;

typedef struct
{

    Triple data[MAXSIZE + 1];
    int mu, nu, tu; //矩阵行数、列数、非零元个数
} TSMatrix;

Status CreateSparseMtx(TSMatrix &M, int mu, int nu, int tu);
//Status DestroySparseMtx(&M);
Status PrintSparseMtx(TSMatrix M);
//Status CopySparseMtx(M, &T); //由M复制到T
//Sattus AddSparseMtx(M, N, &Q);
Status TransSparseMtx(TSMatrix M, TSMatrix &T);

#endif
