#define _CRT_SECURE_NO_WARNINGS
//输出一个字符串，表示将输入字符串翻转后的结果
//#include <stdio.h>
//int main()
//{
//	char arr[] = { "a" };
//	scanf("%s", arr);
//	char* pa = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = sz; i >= 0; i++)
//	{
//		printf("%c", *(pa + i));
//	}
//
//
//	return 0;
//}
//使用指针打印数组内容
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(pa + i));
//	}
//	return 0;
//}

//实现一个对整形数组的冒泡排序
//#include <stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0;
//		//判断是否有逆序对
//		int flag = 0;//假设没有
//		for (j = 0; j < sz-1-i; j++)
//		{
//			
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = temp;
//				int flag = 1;
//			}
//		}if (flag == 0)
//		{
//			break;
//		}
//	}
//}
//void print_arr(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}printf("\n");
//}
//
//int main()
//{
//	int arr[] = { 2,3,6,3,8,9,7,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print_arr(arr, sz);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}
//实现一个函数，可以左旋字符串中的k个字符。
//例如：
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB
#include <stdio.h>
#include <string.h>
void circle(char stl[], int k, int sz)
{
	char* ps = stl;
	//对k进行取模优化
	k = k%sz;
	int i = 0;
	for (i = 0; i < k; i++)
	{
		char tmp = *(ps);
		*(ps) = *(ps + sz - 1);
		*(ps + sz - 1) = tmp;
	}
}
void print_stl(char stl[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%c", stl[i]);
	}
}

int main()
{
	char stl[] = { "ABCD" };
	//int sz = sizeof(stl) / sizeof(stl[0]);
	int sz = strlen(stl);
	int k = 0;
	printf("请输入k：");
	scanf("%d", &k);
	circle(stl,k,sz);
	print_stl(stl, sz);
	return 0;
}