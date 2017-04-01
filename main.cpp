//
//  main.cpp
//  DataStructure
//
//  Created by imcort on 2017/3/13.
//  Copyright © 2017 imcort. All rights reserved.
//

#include <iostream>
#include "DS.h"
#include "SqList.h"
#include "SqStack.h"

int main(int argc, const char * argv[]) {
    SqStack sq;
    InitStack(sq);
    for(int i=1;i<=50;i++)
        Push(sq, i*2);  //插入50个数
    for(int i=0;i<50;i++){
        int e;
        Pop(sq, e);
        std::cout<<e<<',';
    }
    
    
    return 0;

}
