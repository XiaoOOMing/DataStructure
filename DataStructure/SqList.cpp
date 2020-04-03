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

// 插入操作
bool InsertList(SqList &L, int i, int e)
{
    if (i < 1 || i > L.length + 1) {
        return false;
    }
    if (L.length == MAX_SIZE) {
        return false;
    }
    
    for (int j = L.length; j >= i ; j--) {
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = e;
    L.length++;
    return true;
}
// 删除操作
bool DeleteList(SqList &L, int i, int &e)
{
    if (i < 1 || i > L.length) {
        return false;
    }
    
    e = L.data[i-1];
    for (int j = i; j < L.length; j++) {
        L.data[j-1] = L.data[j];
    }
    L.length--;
    return true;
}
