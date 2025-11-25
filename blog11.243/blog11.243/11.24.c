#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	//完全初始化
//	int math[5] = { 75,80,95,90,80 };
//	//不完全初始化
//	//int math[5] = { 75,80,95 };
//	printf("%d\n", math[0]);//75
//	printf("%d\n", math[4]);//80
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//创建数组并进行初始化
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//创建循环变量
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	printf("%zd", sizeof(arr));
//	return 0;
//}

#include <stdio.h>
int main()
{
	int arr[10] = { 0 };
	//sizeof(arr)    数组总大小
	//sizeof(arr[0]) 单个元素大小
	int sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d", sz);
	return 0;
}