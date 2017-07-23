//
//  main.cpp
//  DataStructure
//
//  Created by imcort on 2017/3/13.
//  Copyright © 2017 imcort. All rights reserved.
//

#include <iostream>
#include "Vertex.h"
#include "BiTree.h"
using namespace std;
/*
int main(int argc, const char *argv[])
{

    MGraph G;
    CreateGraph(G);
    PrintGraph(G);
  
}
*/


int main()
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
