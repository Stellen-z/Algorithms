#include "SeqList.h"
//顺序表的初始化
void SLInit(SL* ps)
{
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}
//顺序表的销毁
void SLDestory(SL* ps)
{
	if (ps->arr)//ps->arr不为0
	{
		free(ps->arr);
	}
	ps->arr = NULL;
	ps->size = ps->capacity = 0;
}

//插入之前检查空间够不够
void CheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		//申请空间
		//判断有效空间是否为0
		SLDataType Newcapacity = ps->capacity == 0 ? 4 : 2 * ps->capacity;
		SLDataType* tmp = (SLDataType*)realloc(ps->arr, Newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			perror("realloc");
			exit(1);
		}
		//增容成功
		ps->arr = tmp;
		ps->capacity = Newcapacity;
	}
}
//尾插
void SLPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	//插入数据之前判断空间够不够
	CheckCapacity(ps);
	ps->arr[ps->size++] = x;
	//ps->arr[ps->size] = x;
	//++ps->size;
}

//头插
void SLPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	//插入数据之前判断空间够不够
	CheckCapacity(ps);
	//先让顺序表中的内容整体往后挪动一位
	for (int i = ps->size; i > 0; i--)
	{
		ps->arr[i] = ps->arr[i - 1];
	}
	ps->arr[0] = x;
	ps->size++;
}

//打印插入后的结果
void SLPrint(SL s)
{
	for (int i = 0; i < s.size; i++)
	{
		printf("%d ", s.arr[i]);
	}
	printf("\n");
}

//尾删
void SLPopBack(SL* ps)
{
	assert(ps);
	assert(ps->size);//顺序表不能为空
	//ps->arr[ps->size - 1] = -1;没必要，控制索引即可
	--ps->size;
}

//头删
void SLPopFront(SL* ps)
{
	assert(ps);
	assert(ps->size);
	for (int i = 0; i < ps->size - 1; i++)
	{
		ps->arr[ps->size] = ps->arr[ps->size + 1];
	}
	ps->size--;
}