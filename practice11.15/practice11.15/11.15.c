#define _CRT_SECURE_NO_WARNINGS
////#include <stdio.h>
////int main()
////{
////	//数组指针变量，本质还是指针
////	int arr[10] = { 0 };
////	int (*p)[10] = &arr;
////	//指针数组变量，指向的是一个数组
////	int* p[10] = arr;
////	return 0;
////}
//
//#include <stdio.h>
//void test(int(*arr)[5], int r, int c)
//{
//	int i = 0;
//	for (i = 0; i < r; i++)
//	{
//		int j = 0;
//		for (j = 0; j < c; j++)
//		{
//			//1.printf("%d ",*(arr + i))       进入第一个一维数组
//			//2.printf("%d ", *(arr + i) + j)  访问第一个数组的元素
//			//此时  *(arr + i) == arr[i]  原式即为 arr[i] + j  进行解引用后即为 *(arr[i] + j) == arr[i][j]
//			printf("%d ", (*(arr[i] + j)));
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[3][5] = { 1,2,3,4,5,2,3,4,5,6,3,4,5,6,7 };
//	test(arr, 3, 5);
//	//二维数组的首地址是第一个一维数组，即{1，2，3，4，5}
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	int score = 0;
//	printf("请输入成绩：");
//	scanf("%d", &score);
//	printf("成绩是： %d\n", score);
//	return 0;
//}

//函数指针
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	
//	int (*pf)(int, int) = Add;//pf中存放着函数Add的地址
//	//int r = (*pf)(3, 5);
//	//int r = Add(3, 5); Add是函数名，代表函数的地址，而pf同样代表函数的地址
//	int r = pf(10, 20);
//	printf("%d", r);
//	return 0;
//}

//typedef unsigned int unit;
//int main()
//{
//	unsigned int num1 = 100;
//	unit num2 = 100;
//	return 0;
//}

//#include <stdio.h>
//typedef int(*parr_t)[5];
//int main()
//{
//	//创建数组指针
//	int arr[5] = { 0 };
//	int (*p)[5] = &arr;
//	parr_t p2 = &arr;
//
//	return 0;
//}


//猜数字游戏 1-100
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//typedef unsigned int uint;
//void menu()
//{
//	printf("*******************\n");
//	printf("*******1.play******\n");
//	printf("*******0.xit*******\n");
//	printf("*******************\n");
//}
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	int count = 5;
//	while (count)
//	{
//		printf("您还有%d次机会\n",count);
//		printf("请输入数字：");
//		scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//		count--;
//	}
//	if (count == 0)
//	{
//		printf("很遗憾，正确的答案是%d\n", r);
//	}
//}
//
//
//int main()
//{
//	
//	srand((uint)time(NULL));
//	int input = 0;
//	do
//	{
//		//菜单
//		menu();
//		printf("请输入数字：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("游戏开始\n");
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

//二分查找
//在一个升序数组中查找指定的数值，找到了就返回下标，找不到就返回 - 1
//int bin_search(int arr[], int left, int right, int key)
// arr 是查找的数组
//left 数组的左下标
//right 数组的右下标
//key 要查找的数字

//#include <stdio.h>
////函数的声明
//int bin_search(int arr[], int left, int right, int key)
//{
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (key < arr[mid])
//		{
//			right = mid - 1;
//		}
//		if (key > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//		
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int r = bin_search(arr, 0, sz - 1, 9);
//	printf("%d", r);
//	return 0;
//}

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表 

//#include <stdio.h>
//void prr_t(int r, int c)
//{
//	int i = 1;
//	for (i = 1; i <= r; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= c; j++)
//		{
//			printf("%d*%d=%d  ", j, i, i * j);
//		}printf("\n");
//	}
//}
//int main()
//{
//	printf("请输入要打印的乘法表：");
//	int input = 0;
//	scanf("%d", &input);
//	prr_t(input, input);
//	return 0;
//}

//实现函数判断year是不是润年
//#include <stdio.h>
//int main()
//{
//	int year = 0;
//	printf("请输入年份：");
//	scanf("%d", &year);
//	if ((year % 400 == 0) || (year % 4 == 0) && (year % 100 != 0))
//		printf("%d年是闰年\n",year);
//	else
//		printf("非闰年\n");
//	return 0;
//}

//实现一个函数is_prime，判断一个数是不是素数
//利用上面实现的is_prime函数，打印100到200之间的素数

//#include <stdio.h>
//void is_prime()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		int flag = 0;//假设是素数
//		for (j = 2; j < i - 1; j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 1;
//				break;
//			}
//		}
//		if (flag == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//
//int main()
//{
//	is_prime();
//	return 0;
//}

//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

void init(int arr[10],int r)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[10],int r)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		printf("%d ", arr[i]);
	}
}

#include <stdio.h>
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	init(arr,sz);
	print(arr,sz);

	return 0;
}
