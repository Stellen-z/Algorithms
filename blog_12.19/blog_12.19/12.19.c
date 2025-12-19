#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n",arr);
//	printf("%p\n",&arr[0]);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	printf("&arr[0] = %p\n", &arr[0]);
//	printf("arr     = %p\n", arr);
//	printf("&arr    = %p\n", &arr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//x86环境
//	int arr[] = { 1,2,3,4,5 };
//	printf("&arr[0]   = %p\n", &arr[0]);
//	printf("&arr[0]+1 = %p\n", &arr[0] + 1);
//	printf("arr       = %p\n", arr);
//	printf("arr+1     = %p\n", arr + 1);
//	printf("&arr      = %p\n", &arr);
//	printf("&arr+1    = %p\n", &arr + 1);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//输入
//	int* p = arr;
//	for (int i = 0; i < sz; i++)
//	{
//		scanf("%d", p + i);
//		//下面两种方式也是可行的：
//		//scanf("%d", arr + i);
//		//scanf("%d", &arr[i]);
//	}
//	//输出
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", p[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
////测试环境是x86
//void test(int arr[])
//{
//	int sz2 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz2 = %d\n", sz2);
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz1 = sizeof(arr) / sizeof(arr[0]);
//	printf("sz1 = %d\n", sz1);
//	test(arr);
//	return 0;
//}

//#include <stdio.h>
//void test(int arr[])//参数写成数组形式，本质上还是指针
//{
//	printf("%d\n", sizeof(arr));
//}
//void test(int* arr)//参数写成指针形式
//{
//	printf("%d\n", sizeof(arr));//计算⼀个指针变量的⼤⼩
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	test(arr);
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//冒泡排序基础版本
//	int arr[] = { 2,3,6,5,9,10,1,7,4,8 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	//确定趟数为n-1
//	for (int i = 0; i < n - 1; i++)
//	{
//		//需要排序的次数为n-1-i
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			//利用if语句来判断是否需要换位
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];//创建中间变量
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	//输出排序后的结果
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//冒泡排序优化版本
//	int arr[] = { 2,3,6,5,9,10,1,7,4,8 };
//	int n = sizeof(arr) / sizeof(arr[0]);
//	//确定趟数为n-1
//	for (int i = 0; i < n - 1; i++)
//	{
//		int flag = 0;//假设没有逆序对
//		//需要排序的次数为n-1-i
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			//利用if语句来判断是否需要换位
//			if (arr[j] > arr[j + 1])
//			{
//				flag = 1;//进入if语句中，将flag置为1，即代表有逆序对
//				int tmp = arr[j];//创建中间变量
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//		if (flag == 0)
//			break;//如果内层循环结束后flag扔为0，那便跳出循环
//	}
//	//输出排序后的结果
//	for (int i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//	//二级指针
//	int a = 10;
//	int* p = &a;
//	int** pa = &p;
//
//	printf("**pa = %d\n", **pa);
//	printf("*p   = %d", *p);
//	return 0;
//}

#include <stdio.h>
int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };
	//数组名为数组收元素的地址，类型为int*，便可以存放到指针数组中
	int* parr[3] = { arr1,arr2,arr3 };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d ", parr[i][j]);
			//等价于printf("%d ",*（*(parr+i)+j));
		}
		printf("\n");
	}
	return 0;
}