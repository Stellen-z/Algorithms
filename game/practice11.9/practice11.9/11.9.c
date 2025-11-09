#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//用指针打印数组内容
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//拿到第一个元素的地址
//	int* p = &arr[sz - 1];
//	/*for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p--;
//	}*/
//	for (i = sz - 1; i >= 0; i--)
//	{
//		printf("%d ", *(p + i));
//	}
//	
//	return 0;
//}
int main()
{
	char arr[] = "hello world";
	char* pc = &arr[0];

	while (*pc != '\0')
	{
		printf("%c", *pc); //一个一个打印，打印的是字符，用 %c
		pc++;
	}
	return 0;
}
//int main()
//{
//	char arr[] = "hello world" ;
//	char* pc = &arr[0];
//
//	while (*pc != '\0')
//	{
//		printf("%c ",*pc);
//		pc++;
//	}
//	return 0;
//}