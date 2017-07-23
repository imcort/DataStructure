#include <iostream>
#include <cstdlib>
#include "SparseMtx.h"

using namespace std;

Status CreateSparseMtx(TSMatrix &M, int mu, int nu, int tu)
{

    M.mu = mu;
    M.nu = nu;
    M.tu = tu;

    M.data[0].e = 0; //第0个为零值，用不到
    cout << "请输入" << tu << "个三元组(i,j,elem):" << endl;
    for (int k = 1; k <= M.tu; k++)
        cin >> M.data[k].i >> M.data[k].j >> M.data[k].e;
    return OK;
}

Status PrintSparseMtx(TSMatrix M)
{
    int flag = 0;
    for (int i = 1; i <= M.mu; i++)
    {
        cout << '[';
        for (int j = 1; j <= M.nu; j++)
        {
            for (int k = 1; k <= M.tu; k++)
                if (M.data[k].i == i && M.data[k].j == j)
                {
                    cout << M.data[k].e;
                    flag = 1;
                    break;
                }
            if (flag)
                flag = 0;
            else
                cout << 0;
            if(j!= M.nu)
                cout << ',';
        }
        cout << ']' << endl;
    }
    return OK;
}

Status TransSparseMtx(TSMatrix M, TSMatrix &T)
{
    T.mu = M.nu;
    T.nu = M.mu;
    T.tu = M.tu;

    if (T.tu)
    {
        int q = 1;
        for (int col = 1; col <= M.nu; col++)
            for (int p = 1; p <= M.tu; p++)
                if (M.data[p].j == col)
                {
                    T.data[q].i = M.data[p].j;
                    T.data[q].j = M.data[p].i;
                    T.data[q].e = M.data[p].e;
                    ++q;
                }
    }
    return OK;
}