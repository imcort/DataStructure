#include <iostream>
#include "BiTree.h"

using namespace std;

Status PrintElem(TElemType e)
{

    cout << e << " ";
    return OK;
}

Status CreateBiTree(BiTree &T)
{

    TElemType ch;
    ch = cin.get();
    if (ch == ' ')
        T = NULL;
    else
    {
        if (!(T = (BiTNode *)malloc(sizeof(BiTNode))))
            exit(OVERFLOW);
        T->data = ch;
        CreateBiTree(T->lchild);
        CreateBiTree(T->rchild);
    }
    return OK;
}

Status PreOrder(BiTree T)
{

    if (T == NULL)
        return OK;
    else
    {
        cout << T->data;
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
    return OK;
}

Status MidOrder(BiTree T){
    
    if (T == NULL)
        return OK;
    else
    {
        
        MidOrder(T->lchild);
        cout << T->data;
        MidOrder(T->rchild);
    }
    return OK;

}

Status PostOrder(BiTree T){
    
    if (T == NULL)
        return OK;
    else
    {
        
        PostOrder(T->lchild);
        PostOrder(T->rchild);
        cout << T->data;
    }
    return OK;
}

/*
 #include <iostream>
 #include "BiTree.h"
 using namespace std;
 
 int main(int argc, const char *argv[])
 {
 BiTree T;
 cout<<"input preorder string"<<endl;
 CreateBiTree(T);
 cout<<"Preorder:";
 PreOrder(T);
 cout<<endl;
 
 cout<<"Midorder:";
 MidOrder(T);
 cout<<endl;
 
 cout<<"Postorder:";
 PostOrder(T);
 cout<<endl;
 }

 
 */
