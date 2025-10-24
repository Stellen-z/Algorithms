#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main()
//{
//	//time(NULL) 函数的返回值类型是 time_t 类型（这是一个由系统定义的时间戳类型，通常是带符号的整数，比如 long 或 long long）
//	//srand()括号内为unsigned int 无符号整型 故应使用强制类型转换 srand((unsigned int)time(NULL));
//	//srand 用来初始化随机数生成器
//	//随机数默认范围0-32767；想要生成0-100之间的随机数，只需让“rand() % 10”余数即为0-99；之后+1即可z
//	srand((unsigned int)time(NULL));
//	printf("%d\n", rand()%10 +1);
//
//	return 0;
//}
//猜数字 比大小


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void game()
{
	int r = rand() % 100 + 1;
	int guess = 0;

	printf("请输入数字：");
	scanf("%d", &guess);

	while (1)
	{
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
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
int main()
{
	int input = 0;
	//游戏部分
	srand((unsigned int)time(NULL));

	do
	{
		printf("***************\n");
		printf("****1 play ****\n");
		printf("****0 exit ****\n");
		printf("***************\n");
		printf("请输入> ");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;

		case 0:
			printf("游戏结束，请退出");
			break;
		default:
			printf("请重新输入");
		}
	} while (input);
	
	return 0;
}



//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//void game()
//{
//	int r = rand() % 100 + 1;
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字> :");
//			scanf("%d", &guess);
//		if (guess < r)
//		{
//			printf("猜?了\n");
//		}
//		else if (guess > r)
//		{
//			printf("猜?了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//				break;
//		}
//	}
//}
//void menu()
//{
//	printf("***********************\n");
//	printf("******  1. play  ******\n");
//	printf("******  0. exit  ******\n");
//	printf("***********************\n");
//}
//int main()
//
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择: >");
//			scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("游戏结束\n");
//				break;
//		default:
//			printf("选择错误，重新选择\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}