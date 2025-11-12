#define _CRT_SECURE_NO_WARNINGS
//用指针打印数组
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,10 };
//	int* p = arr;
//	int i = 0;
//	//将数组前五项置为-1
//	for (i = 0; i < 5; i++)
//	{
//		*p = -1;
//		printf("%d ", *p);
//		p++;
//	}
//	p = NULL;
//	//现在又想使用p了
//	p = arr;
//	if ("p == NULL")
//	{
//		printf("p为空指针");
//	}
//	else
//	{
//		//...
//	}
//
//	return 0;
//}
//#define NDEBUG
//#include <stdio.h>
//#include <assert.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	//assert(a == 20);
//	assert(pa != NULL);
//	printf("%d", *pa);
//	return 0;
//}
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//	//strlen统计的是\0之前的字符串个数
//	char arr[] = { "abcdef" };
//	size_t len = strlen(arr);
//	printf("%zu\n", len);
//	return 0;
//}
#include <string.h>
#include <assert.h>
#include <stdio.h>

//size_t my_strlen(const char* stl)
//{
//	int count = 0;
//	assert(stl != NULL);
//	while (*stl != '\0')
//	{
//		count++;
//		stl++;
//	}
//	return count;
//}
//局部变量的生命周期从进入函数开始，执行完函数销毁
//int main()
//{
//	char arr[] = { "abcdef" };
//	size_t len = my_strlen(arr);
//	printf("%zu\n", len);
//	return 0;
//}
//void Swap1(int a, int b)
//{
//	int temp;
//	temp = a;
//	a = b;
//	b = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前a=%d b=%d\n", a, b);
//	Swap1(a, b);//传值调用
//	printf("交换后a=%d b=%d\n", a, b);
//
//	return 0;
//}
//void Swap2(int* x,int* y)
//{
//	int temp;
//	temp = *x; //*x就是a
//	*x = *y;   //*y就是b
//	*y = temp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前a=%d b=%d\n", a, b);
//	Swap2(&a,&b);//传址调用
//	printf("交换后a=%d b=%d\n", a, b);
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%zu", sizeof(arr));
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d",p+i);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",*(p+i));
//	}
//	return 0;
//}
//一维数组传参的本质是指针
//#include <stdio.h>
//void test(int* arr,int sz)
//{
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//printf("%d", sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	test(arr,sz);
//	return 0;
//}
//冒泡排序
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	//进行升序
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int min = arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		if (min > arr[i])
//		{
//			min = arr[i];
//		}
//	}
//	printf("%d", min);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	//进行升序
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int min = arr[0];
	
	return 0;
}