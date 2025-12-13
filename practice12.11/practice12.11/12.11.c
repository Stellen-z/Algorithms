#define _CRT_SECURE_NO_WARNINGS
//利用calloc开辟一块内存空间
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main()
//{
//	int*p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//开辟成功
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//		printf("%d ",p[i]);
//	}
//	//使用完之后回收内存
//	free(p);
//	p = NULL;
//	return 0;
//}
//int main()
//{
//	int*p = (int*)calloc(5, sizeof(int));
//	if (p == NULL)
//	{
//		perror("calloc");
//		return 1;
//	}
//	//利用realloc增加内存空间
//	int* p2 = (int*)realloc(p, 10 * sizeof(int));
//	//增加失败
//	if (p2 == NULL)
//	{
//		perror("realloc");
//		free(p);
//		p = NULL;
//		return 1;
//	}
//	//增加成功
//	p = p2;
//	//...
//	//开辟成功
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i + 1;
//		printf("%d ",p[i]);
//	}
//	//使用完之后回收内存
//	free(p);
//	p = NULL;
//	return 0;
//}
//笔试题1:
//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//进行修改：
//第一种
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}
//第二种
//char* GetMemory()
//{
//	char* p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//结构体中包含柔性数组
//struct S
//{
//	int n;
//	int arr[];//柔性数组成员
//};
//int main()
//{
//	//有柔性数组结构体用malloc开辟空间
//	struct S* ps = (struct S*)malloc(sizeof(int) + 10 * sizeof(int));
//	//检查是否开辟成功
//	if (ps == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	//开辟成功
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i + 1;
//		printf("%d ", ps->arr[i]);
//	}
//	//利用realloc扩大这块空间
//	struct S* tmp = realloc(ps, sizeof(int) + 10 * sizeof(int));
//	if (tmp == NULL)
//	{
//		perror("realloc");
//		return 1;
//	}
//	ps = tmp;
//	//...
//	//释放
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//利用结构体中包含指针实现上述操作
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	struct S* ps = (struct S*)malloc(sizeof(struct S));
//	if (ps == NULL)
//	{
//		//开辟失败
//		perror("malloc");
//		return 1;
//	}
//	ps->n = 100;
//	int* ptr = (int*)malloc(10 * sizeof(int));
//	if (ptr == NULL)
//	{
//		//开辟失败
//		perror("malloc2");
//		return 1;
//	}
//	ps->arr = ptr;
//	//存放1-10
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(ps->arr + i) = i + 1;
//		printf("%d ", ps->arr[i]);
//	}
//	//扩大空间
//	int* tmp = realloc(ps->arr, 20 * sizeof(int));
//	if (tmp == NULL)
//	{
//		//扩容失败
//		perror("malloc2");
//		return 1;
//	}
//	ps->arr = tmp;
//	//...
//	//释放
//	free(ps->arr);
//	free(ps);
//	ps = NULL;
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(long));
//	return 0;
//}

//#pragma pack(4)/*编译选项，表示4字节对齐 平台：VS2013。语言：C语言*/
////假设long 是4个字节
//int main(int argc, char* argv[])
//{
//    struct tagTest1
//    {
//        short a;
//        char d;
//        long b;
//        long c;
//    };
//    struct tagTest2
//    {
//        long b;
//        short c;
//        char d;
//        long a;
//    };
//    struct tagTest3
//    {
//        short c;
//        long b;
//        char d;
//        long a;
//    };
//    struct tagTest1 stT1;
//    struct tagTest2 stT2;
//    struct tagTest3 stT3;
//
//    printf("%d %d %d", sizeof(stT1), sizeof(stT2), sizeof(stT3));
//    return 0;
//}
//#pragma pack()

//A=2,B=3
#define MAX_SIZE 5
struct _Record_Struct
{
	unsigned char Env_Alarm_ID : 4;
	unsigned char Para1 : 2;
	unsigned char state;
	unsigned char avail : 1;
}*Env_Alarm_Record;
struct _Record_Struct* pointer = (struct _Record_Struct*)malloc(sizeof(struct _Record_Struct) * 5);