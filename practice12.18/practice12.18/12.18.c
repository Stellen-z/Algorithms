#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[] = { 2,5,3,8,0,10,69,43 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//冒泡排序
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		int flag = 0;//假设无交换
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = temp;
//				flag = 1;//有交换，有逆序对，不确定下一趟是否还有逆序对
//			}
//		}
//		if (flag == 0)
//		{
//			//无交换，没有逆序对
//			break;
//		}
//	}
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 2,4,6,8,3,0,10,54,34 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//外层循环，代表趟数
//	for (i = 0; i < sz - 1; i++)
//	{
//		//内层循环，从前向后遍历
//		int j = 0;
//		int flag = 0;//假设没有逆序对
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				//进入if即为有逆序对
//			    flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%d ", arr[j]);
//	}
//	return 0;
//}

//#include <time.h>
//int main()
//{
//	//时间复杂度
//	int i = 0;
//	int count = 0;
//	int begin = clock();
//	for (i = 0; i < 100000; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 100000; j++)
//		{
//			++count;
//		}
//	}
//	int end = clock();
//	printf("%d\n", end - begin);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	int n = 10000;
//	for (int i = 0; i < n; i++)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			++count;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = { 2,54,7,23,78,95,5,6,86 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int flag = 0;
//		for (int j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			break;
//	}
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}