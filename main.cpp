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

int main(int argc, const char * argv[]) {
    // insert code here...
    SqList sql;
    ListInit_Sq(sql);
    for(int i=1;i<=10;i++)
        ListInsert_Sq(sql, i, i*i); //插入10个数
    for(int i=0;i<10;i++)
        std::cout<<sql.elem[i]<<std::endl;
    
    return 0;

}
