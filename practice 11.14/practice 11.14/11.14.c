#define _CRT_SECURE_NO_WARNINGS
//冒泡排序
//#include <stdio.h>
//#include <string.h>
//
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//总共需要排序的趟数
//	{
//		int j = 0;
//		for (j = 0; j < ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = temp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}

//优化冒泡排序
//#include <stdio.h>
//
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//总共需要排序的趟数
//	{
//		int j = 0;
//		int flag = 0; //假设无交换
//		for (j = 0; j < sz - 1- i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 1;//说明此前进行过交换，不确定前面是否还有逆序对
//			}
//		}
//		if (flag == 0)
//		{
//			//说明没有逆序对，即不需要交换
//			break;
//		}
//	}
//}
////指针-指针得到的是元素个数
//void print_arr(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//printf("%d ", arr[i]);
//		printf("%d ", *(arr+i)); 
//		
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;
//	printf("%d ", **ppa);
//	//*ppa 得到pa的值（a的地址）
//	//**ppa 即对a的地址进行解引用，拿到a的值
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//
//	int* arr[] = { &a,&b,&c };
//	return 0;
//}
//数组名在表达式中会隐式转换为 “指向数组首元素的指针”
//利用二级指针模拟访问二维数组
//#include <stdio.h>
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* arr[] = { arr1,arr2,arr3 };//arr即为指针数组
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		//访问arr[i] 相当于将arr中的arr1,arr2,arr3看成3个元素
//		//arr[i] 等价于*(arr + i) == *(&arr[0] + i)
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("%d ", *(arr[i] + j));
//		}printf("\n");
//	}
//
//	return 0;
//}
#include <stdio.h>
int main()
{
	//char arr[] = { "abcdef" };
	//char* pc = arr; //*pc拿到的是首字符a的地址

	//char* pc = "abcdef";//常量字符串，无法被修改
	//因此更严谨是这样写:
	const char* pc = "abcdef";
	//pc中存的是首字符a的地址
	printf("%c \n", *pc);
	printf("%s ", pc);
	//打印字符串只需要给出起始地址即pc即可
	return 0;
}