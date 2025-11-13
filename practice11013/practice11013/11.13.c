#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//void bubble_sort(int arr[],int sz)
//{
//	int i;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j;
//		int flag = 0;//假设没有进行交换，即有序
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;//进行了交换，说明交换前是无序的
//			}
//		}
//		if (flag == 0) //即这一趟冒泡排序已经有序了，不需要再排序了
//		{
//			break;
//		}
//	}
//}
//void printf_arr(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	printf_arr(arr, sz);
//	return 0;
//}
//void bubble_sort(int* arr, int sz)
//{
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
//}
//void printf_arr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	printf_arr(arr, sz);
//	return 0;
//}