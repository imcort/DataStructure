//
//  main.cpp
//  DataStructure
//
//  Created by imcort on 2017/3/13.
//  Copyright © 2017 imcort. All rights reserved.
//

#include <iostream>
//#include "DS.h"
//#include "SqList.h"
////#include "SqStack.h"
//#include "str.h"
#include "SparseMtx.h"

/*void conversion()
{
    SqStack S;
    InitStack(S);
    int N;
    std::cin >> N;
    while (N)
    {
        Push(S, N % 8);
        N = N / 8;
    }
    while (!StackEmpty(S))
    {
        int e;
        Pop(S, e);
        std::cout << e;
    }
}
 */

int main(int argc, const char *argv[])
{
    TSMatrix K,J;
    CreateSparseMtx(K, 2, 2, 2);
    //CreateSparseMtx(J, 2, 2, 2);
    PrintSparseMtx(K);
    TransSparseMtx(K, J);
    PrintSparseMtx(J);

}
