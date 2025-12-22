#include "SeqList.h"
//顺序表的初始化
void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}
//扩容
void ChechCapacity(SL* ps)
{
	//插入之前检查空间够不够
	if (ps->size == ps->capacity)
	{
		//空间不够，进行扩容
		//检查有效空间是否为0
		SLDataType Newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, Newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc fail");
			exit(1);
		}
		//开辟成功
		ps->arr = tmp;
		ps->capacity = Newcapacity;
	}
}
//尾插
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	ChechCapacity(ps);
	//进行插入
	ps->arr[ps->size++] = x;
}
//头插
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	//扩容
	ChechCapacity(ps);
	//整体往后挪动一位
	//for (int i = ps->size; i > 0; i--)
	//{
	//	ps->arr[i] = ps->arr[i - 1];
	//}
	//利用memmove来实现
	SLDataType* tmp = memmove(ps->arr + 1, ps->arr, ps->size * sizeof(SLDataType));
	if (tmp == NULL)
	{
		perror("memmove");
		exit(1);
	}
	//此处不需要将tmp赋给arr,因为函数执行完后返回的是目标空间的地址
	//即ps->arr+1的地址，我们只需要ps->arr插入新元素即可
	//进行赋值
	ps->arr[0] = x;
	//赋值完后对size进行++
	++ps->size;
}
//尾删
void SLPopBack(SL* ps)
{
	//判空
	assert(ps);
	assert(ps->size);
	//进行删除
	--ps->size;
}
//头删
void SLPopFront(SL* ps)
{
	//判空
	assert(ps);
	assert(ps->size);
	//整体往前挪动一位
	//for (int i = 0; i < ps->size - 1; i++)
	//{
	//	ps->arr[i] = ps->arr[i + 1];
	//}
	//利用memmove来实现
	SLDataType* tmp = memmove(ps->arr, (ps->arr) + 1, ps->size * sizeof(SLDataType));
	if (tmp == NULL)
	{
		perror("memmove");
		exit(1);
	}
	//ps->arr = tmp;
	--ps->size;
}
//打印插完结果
void SLPrint(SL sl)
{
	for (int i = 0; i < sl.size; i++)
	{
		printf("%d ", sl.arr[i]);
	}
	printf("\n");
}
//顺序表的销毁
void SLDestroy(SL* ps)
{
	if (ps->arr)
	{
		//ps不为空
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}