//
//  SqList.hpp
//  DataStructure
//
//  Created by 舒磊明 on 2020/4/1.
//  Copyright © 2020 Shuleiming. All rights reserved.
//

#ifndef SqList_hpp
#define SqList_hpp

#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 10

typedef struct {
    int data[MAX_SIZE];
    int length;
} SqList;

typedef struct {
    int *data;
    int max_size;
    int length;
} DSqList;

// 初始化线性表
void InitSqList(SqList &L);
// 初始化动态线性表
void InitDSqList(DSqList &L);
// 动态线性表增加
void IncreaseList(DSqList &L, int n);
// 插入操作
bool InsertList(SqList &L, int i, int e);
// 删除操作
bool DeleteList(SqList &L, int i, int &e);
#endif /* SqList_hpp */
