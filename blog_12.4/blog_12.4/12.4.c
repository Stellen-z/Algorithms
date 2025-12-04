#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//
//指针-指针
//#include <stdio.h>
//int my_strlen(char* s)
//{
//	char* p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}
//int main()
//{
//	printf("%d\n", my_strlen("abc"));
//	return 0;
//}
 //指针的关系运算
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = &arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (p < arr + sz) //指针的⼤⼩⽐较
//	{
//	 printf("%d ", *p);
//	 p++;
//	}
//	return 0;
//}
//int main()
//{
//	int* p;//未初始化，默认为随机值
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2 };
//	int* p = &arr;
//	printf("%d ", *(p + 2));
//	return 0;
//}
//#include <stdio.h>
//int* test()
//{
//	int n = 100;
//	return &n;
//}
//int main()
//{
//	int* p = test();
//	printf("%d\n", *p);
//	return 0;
//}
//模拟实现strlen函数
//#include <stdio.h>
//#include <assert.h>
//int My_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int len = My_strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}
//写⼀个函数，交换两个整型变量的值
//#include <stdio.h>
//void Swap1(int x, int y)
//{
//	int temp = x;
//	y = x;
//	x = temp;
//}
#include <stdio.h>
void Swap2(int* px, int* py)
{
	int tmp = 0;
	tmp = *px;
	*px = *py;
	*py = tmp;
}
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	printf("交换前a=%d,b=%d\n", a, b);
	//Swap1(a, b);
	Swap2(&a,&b);
	printf("交换后a=%d,b=%d\n", a, b);
	return 0;
}