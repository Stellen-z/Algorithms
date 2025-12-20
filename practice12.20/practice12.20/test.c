#include "SeqList.h"
void SLTest01()
{
	SL sl;
	SLInit(&sl);
	//增删查改操作
	//测试尾插
	//SLPushBack(&sl, 1);
	//SLPushBack(&sl, 2);
	//SLPushBack(&sl, 3);
	//SLPushBack(&sl, 4);
	//SLPushBack(NULL,5);
	//打印尾插
	//SLPrint(sl);
	//测试头插
	SLPushFront(&sl, 5);
	SLPushFront(&sl, 6);
	//打印头插
	SLPrint(sl);
	
	//测试尾删
	SLPopBack(&sl);
	//打印尾删
	SLPrint(sl);
	//测试头删
	//SLPopFront(&sl);
	//打印头删
	//SLPrint(sl);

	//顺序表的销毁
	//SLDestory(&sl);
}
int main()
{
	SLTest01();
	return 0;
}