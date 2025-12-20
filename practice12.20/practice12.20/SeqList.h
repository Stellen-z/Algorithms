#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//#define N 100
////静态顺序表
//struct SeqList
//{
//	int arr[N];
//	int size;//有效数据个数
//};

typedef int SLDataType;
//动态顺序表
typedef struct SeqList
{
	SLDataType* arr;
	int size;//有效数据个数
	int capacity;//空间大小
}SL;

//typedef struct SeqList SL;

//顺序表的初始化
void SLInit(SL* ps);
//顺序表的销毁
void SLDestory(SL* ps);
//插入之前检查空间够不够
void CheckCapacity(SL* ps);
//打印插入后的结果
void SLPrint(SL s);
//头部插入删除/尾部插入删除
void SLPushBack(SL* ps, SLDataType x);
void SLPushFront(SL* ps, SLDataType x);

void SLPopBack(SL* ps);
void SLPopFront(SL* ps);
