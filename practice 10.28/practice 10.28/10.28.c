#define _CRT_SECURE_NO_WARNINGS
//复习昨天代码：二分查找；
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;  //要查找的数
//	scanf("%d", &n);
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int left = 0;
//	
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > n)
//		{
//			right = mid - 1;
//		}
//		else if (arr < n)
//		{
//			left = right + 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//	}
//	return 0;
//}
//#include <math.h>
//#include <stdio.h>
//
//int main()
//{
//	double i = sqrt(16.0);
//	printf("%f", i);
//	return 0;
//}
//加法函数
//#include <stdio.h>
//
//int add(int x, int y)     //自定义函数后面没有分号
//{
//	return x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//
//	scanf("%d %d", &a, &b);
//	int c = add(a, b);
//	printf("c = %d",c);
//	return 0;
//}
//返回类型时void即代表函数不需要返回值
//新定义函数练习
//#include <stdio.h>
//int self(int x, int y)
//{
//	return x * y - x + y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int c = self(a, b);
//
//	printf("%d",c);
//
//	return 0;
//}
#include <stdio.h>

void print()
{
	printf("hello world!");
}
int main()
{
	print();//使用函数必须后面带括号，无论传不传参数
	return 0;
}