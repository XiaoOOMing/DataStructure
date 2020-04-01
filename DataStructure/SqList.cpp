//
//  SqList.cpp
//  DataStructure
//
//  Created by 舒磊明 on 2020/4/1.
//  Copyright © 2020 Shuleiming. All rights reserved.
//

#include "SqList.hpp"

// 初始化线性表
void InitSqList(SqList &L)
{
    L.length = 0;
    for (int i = 0; i < MAX_SIZE; i++) {
        L.data[i] = 0;
    }
}

/**
 初始化动态表
 */
void InitDSqList(DSqList &L)
{
    L.data = (int*)malloc(sizeof(int) * MAX_SIZE);
    L.length = 0;
    L.max_size = MAX_SIZE;
    for (int i = 0; i < MAX_SIZE; i++) {
        L.data[i] = 0;
    }
}

/**
 动态表增加表长
 */
void IncreaseList(DSqList &L, int n)
{
    int *p = L.data;
    L.data = (int*)malloc(sizeof(int) * (L.max_size + n));
    for (int i = 0; i < L.max_size; i++) {
        L.data[i] = p[i];
    }
    L.max_size += n;
    free(p);
}
