#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	printf("Hello World!\n");
//	main();
//	return 0;
//}
//函数的递归
//int Fun(int n)
//{
//	if (n == 0)
//		return 1;
//	else
//		return  n * Fun(n - 1);
//}
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fun(n);
//	printf("%d的阶乘为%d\n", n, r);
//	return 0;
//}

//#include <stdio.h>
//void Print(int m)
//{
//	if (m > 9)//m是一个两位数
//	{
//		Print(m / 10);
//	}
//	printf("%d ", m % 10);
//}
//int main()
//{
//	//顺序输出一个整数的每一位
//	int m = 0;
//	scanf("%d", &m);
//	Print(m);
//	return 0;
//}

//#include <stdio.h>
//int count = 0;
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	if (n == 3)
//		count++;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int r = Fib(n);
//	printf("%d\n", r);
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//利用循环求出第n个斐波那契数的值
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	printf("%d\n", c);
//	return 0;
//}

//二分查找
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int key = 7;
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > key)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < key)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标为%d", mid);
//			break;
//		}
//	}
//	return 0;
//}

//九九乘法表
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 9; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%d ", j, i, i * j);
		}printf("\n");
	}
	return 0;
}