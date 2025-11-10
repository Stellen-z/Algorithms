#define _CRT_SECURE_NO_WARNINGS
////猜数字游戏1-100
////#include <stdio.h>
////#include <stdlib.h>
////#include <time.h>
////
////void menu()
////{
////	printf("******************\n");
////	printf("******1.play******\n");
////	printf("******0.exit******\n");
////	printf("******************\n");
////}
////void game()
////{
////	//随机生成一个值
////	int guess;
////	int r = rand() % 99 + 1;
////	printf("请输入数字：");
////	scanf("%d", &guess);
////	while (1)
////	{
////		printf("请输入数字：");
////		scanf("%d", &guess);
////		if (guess > r)
////		{
////			printf("猜大了\n");
////		}
////		else if (guess < r)
////		{
////			printf("猜小了\n");
////		}
////		else
////		{
////			printf("恭喜你，猜对了！\n");
////			break;
////		}
////	}
////}
////int main()
////{
////	int input = 0;
////	srand((unsigned int)time(NULL));
////	do
////	{
////		menu();
////		printf("请输入：\n");
////		scanf("%d", &input);
////		switch (input)
////		{
////		case 1:
////			printf("猜数字游戏开始\n");
////			game();
////			break;
////		case 0:
////			printf("游戏结束，退出游戏\n");
////			break;
////		default:
////			printf("输入错误，请重新输入\n");
////		}
////	} while (input);
////
////	return 0;
////}
////猜数字游戏1 - 100 (5次机会限制）
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//void menu()
//{
//	printf("******************\n");
//	printf("******1.play******\n");
//	printf("******0.exit******\n");
//	printf("******************\n");
//}
//void game()
//{
//	//随机生成一个值
//	int guess;
//	int r = rand() % 99 + 1;
//	int count = 5;
//	while (count)
//	{
//		printf("你还有%d次机会\n", count);
//		printf("请输入数字：");
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
//			printf("恭喜你，猜对了！\n");
//			break;
//		}
//		count--;
//	}if (count == 0)
//	{
//		printf("次数耗尽，正确数字是%d\n", r);
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入：\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("猜数字游戏开始\n");
//			game();
//			break;
//		case 0:
//			printf("游戏结束，退出游戏\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//		}
//	} while (input);
//
//	return 0;
//}
//求10 个整数中最大值 1-100
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//
//int main()
//{
//	int arr[10] = { 0 };
//	//随机生成10个整数
//	srand((unsigned int)time(NULL));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = rand() % 99 + 1;
//		printf("%d ", arr[i]);
//	}printf("\n");
//	//比较大小
//	int max = arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("最大值为%d", max);
//	return 0;
//}
//写一个代码：打印100~200之间的素数
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num;
	for (num = 100; num <= 200; num++)
	{
		int i = 0;
		int flag = 1; //假设num为素数
		for (i = 2; i < num; i++)
		{
			if (num % i == 0)
			{
				flag = 0; //num不是素数
				break;
			}
		}//此时num % i结果可能为其他值，不一定是1 因此需要进行确认
		if (flag == 1)
			printf("%d ", num);
	}
	return 0;
}