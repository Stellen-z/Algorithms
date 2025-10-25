#define _CRT_SECURE_NO_WARNINGS
//// 猜数字 比大小 （1-100）
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("****************\n");
//	printf("**** 1.play ****\n");
//	printf("**** 0.exit ****\n");
//	printf("****************\n");
//
//}
//void game()
//{
//	srand((unsigned int)time(NULL));
//	int r = rand() % 100 + 1;
//	int guess = 0;
//
//	while (1)
//	{
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
//	}
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请输入数字>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:
//			game();
//		case 0:
//			printf("游戏结束");
//		default:
//			printf("请重新输入");
//		}
//	} while (input);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int math[20];
//	double score[10]
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr1[10] = { 1, 2, 3, 4, 5 };
//	int arr2[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	//数组如果进行了初始化，数组大小是可以省略的
//	//整型数组
//	int arr1[3] = { 1,2.3 };// 完全初始化
//	int arr2[5] = { 1, 2, 3, 4, };// 未完全初始化 则后面元素均初始化为0
//	//字符数组
//	int arr3[6] = "abc";          // a b c \0 0 0    \0的ASICI码值为0，故实际监视时显示为 a b c 0 0 0 
//	int arr4[6] = { 'a','b','c' };// a b c 0 0 0
//
//	return 0;
//}
//数组也是有类型的
//int a = 10;        int类型
//int arr1[10];      int [10]类型
//char ch[7];        char [7]类型
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//
//	printf("%zd\n", sizeof(a));//4
//	printf("%zd\n", sizeof(int));
//
//	int arr1[10];
//	printf("%zd\n", sizeof(arr1));//40
//	printf("%zd\n", sizeof(int [10]));
//
//	char ch[7];
//	printf("%zd\n", sizeof(ch));//1     bool char长度均为1
//	printf("%zd\n", sizeof(char [7]));
//
//	return 0;
//}
//"[]"下标引用操作符
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//printf("%d\n", arr[4]); //打印出来即为5
//	//printf("%d\n", arr[6]); //打印出来即为7
//
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0;i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
// %p 打印内存地址
// &  取地址操作符
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]);
//	}
//	return 0;
//}
//地址就是内存单元的标号，地址是以16进制打印的
//结论：一维数组在内存是连续存放的，随着数组下标的增长，地址是由小（低）到大（高）变化的
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//二维数组
//#include <stdio.h>
//int main()
//{
//	int arr1[3][5] = {1,2,3,4,5,6,7,8,9,0,1,2,3,3,5,};
//	int arr2[][5] = { 1,2,3,4,5,6,7 };
//	int arr3[][5] = { {1,2},{3,4},{5,6},7 };
//
//	return 0;
//}
//猜数字 比大小 100-200 
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
////游戏菜单
//void menu();
//void game();
//void menu()
//{
//	printf("***************\n");
//	printf("****1.play*****\n");
//	printf("****0.exit*****\n");
//	printf("***************\n");
//}
////游戏本体
//void game()
//{
//	//srand((unsigned int)time（NULL）); 种子不能放进循环中，只能有一个种子
//	int guess = 0;
//	int r = rand() % 101+ 100;
//
//	while (1)
//	{
//		scanf("%d", &guess);
//		if (guess > r)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < r)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
////游戏框架
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请输入数字>");
//		scanf("%d\n", &input);
//		switch(input)
//		{
//		 case 1:
//			game();
//			break;
//		 case 0:
//			printf("游戏结束\n");
//			break;
//		 default:
//			printf("请重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}
//限制五次机会
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//游戏菜单
void menu()
{
	printf("***************\n");
	printf("****1.play*****\n");
	printf("****0.exit*****\n");
	printf("***************\n");
}
//游戏本体
void game()
{
	//srand((unsigned int)time（NULL）); 种子不能放进循环中，只能有一个种子
	int guess = 0;
	int r = rand() % 101 + 100;
	int count = 5;

	while (count)//C语言中非零为真，故当count为0时，循环不再执行 实现了count的作用
	{
		printf("\n你还有%d次机会\n",count);
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("你失败了，正确的值为：%d\n", r);
	}
}
//游戏框架
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请输入数字>");
		scanf("%d\n", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input);

	return 0;
}

