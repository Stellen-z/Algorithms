#define _CRT_SECURE_NO_WARNINGS
//形参是实参的临时拷贝，均有自己独立的空间
//写一个函数将一个整形类型的数组，全部置为-1，在写一个函数打印数组的内容
// #include <stdio.h>
//置为-1
//int i = 0;
//void set(int arr[10], int sz)
//{
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = -1;
//	}
//	return;
//}
//void print(int arr[10], int sz)
//{
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//	return;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//找到数组内所有元素的下标
//	set(arr, sz);
//	print(arr, sz);
//
//	return 0;
//}
//自定义函数，打印二维数组内容
//形参的数组和实参的数组时同一个数组，形参不会创建新的数组
//#include <stdio.h>
//void print(int arr[3][5],int r,int c)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5, 2,3,4,5,6, 3,4,5,6,7, };
//	print(arr,3,5);  //若写为arr[3][5] 即为一个元素，而print要访问的是整个数组
//
//	return 0;
//}
//计算某年某月有多少天 
//#include <stdio.h>
//int is_leap_year(int a)
////闰年返回1 非闰年返回0
//{
//	if (a % 400 == 0 || (a % 4 == 0 && a % 100 != 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int get_days_of_month(int a, int b)
//{
//	
//	int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int r = arr[b];//访问数组元素2
//	if (is_leap_year(a) && b == 2 )
//		r += 1;
//		return r;
//}
//int main()
//{
//	int year = 0;
//	int month = 0;
//	scanf("%d %d", &year, &month);
//
//	int r = get_days_of_month(year,month);
//	printf("%d\n", r);
//
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	return 0;
//}
//#include <stdio.h>
//
//int main()
//{
//	printf("%d\n", strlen("abcdef"));
//	return 0;
//}
//printf函数的返回值时为整形；并且是打印在屏幕上的个数
//函数的定义是一种特殊的声名
//函数在声明时括号内可以只填变量类型
//库函数的使用：#include <xxx.h>
//自己创建的头文件的使用：#include "xxx.h"
//extern 生命来自外部的符号；全局变量在整个工程中均可使用 
#include <stdio.h>
void test()
{                 
	static int n = 0;
	//局部变量一般放在内存的栈区
	//ststic修饰局部变量时，将局部变量内存放到静态区（全局变量的位置），改变了生命周期；即等价于全局变量，但作用域不变
	//未来一个变量出了函数后，我们还想保留值，等下次进入函数时继续使用，就可以使用ststic来修饰
	n++;            
	printf("%d ", n);
}
int main()
{
	int i = 0; 
	for (i = 0; i < 5; i++)
	{
		test();
	}
	return 0;
}