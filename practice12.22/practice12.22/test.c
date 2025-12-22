#include "SeqList.h"
void test01()
{
	SL sl;
	SLInit(&sl);
	//Î²²å
	//SLPushBack(&sl, 4);
	//SLPushBack(&sl, 3);
	//SLPushBack(&sl, 2);
	//SLPushBack(&sl, 1);
	//SLPushBack(NULL, 4);
	//Í·²å
	SLPushFront(&sl, 4);
	SLPushFront(&sl, 3);
	SLPushFront(&sl, 2);
	SLPushFront(&sl, 1);
	SLPrint(sl);//1 2 3 4
	//Î²É¾
	SLPopBack(&sl);
	SLPrint(sl);//1 2 3 
	SLPopBack(&sl);
	SLPrint(sl);//1 2
	//Í·É¾
	SLPopFront(&sl);
	SLPrint(sl);//2
}
int main()
{
	test01();
	return 0;
}