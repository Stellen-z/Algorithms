#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

typedef int SLDataType;
//定义顺序表结构
typedef struct SeqList
{
	SLDataType* arr;
	SLDataType size;//有效数据个数
	SLDataType capacity;//有效空间个数
}SL;
//顺序表初始化
void SLInit(SL* ps);
//尾插
void SLPushBack(SL* ps, SLDataType x);
//头插
void SLPushFront(SL* ps, SLDataType x);
//尾删
void SLPopBack(SL* ps);
//头删
void SLPopFront(SL* ps);
//打印插完结果
void SLPrint(SL sl);
//顺序表的销毁
void SLDestroy(SL* ps);
