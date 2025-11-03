#define _CRT_SECURE_NO_WARNINGS
#include "game3.h"

void menu()
{
	printf("********************\n");
	printf("****** 1.play ******\n");
	printf("****** 0.exit ******\n");
	printf("********************\n");
}
//游戏主体
void game()
{
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化棋盘
	InitBoard(mine, ROWS, COLS, '0');
	InitBoard(show, ROWS, COLS, '*');
	//若在宏定义中未对ROW COL赋值，就会出现“应输入表达式”错误提示
	//布置雷
	SetMine(mine, ROW, COL);
	//打印棋盘信息
	DisplayBorad(mine, ROW, COL);
	DisplayBorad(show, ROW, COL);
	//排查雷
	Findmine(mine, show, ROW, COL);
}

void test()
{
	int input = 0;
	do
	{
		printf("请输入：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
		case 0:
			printf("游戏结束，退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}

	} while (input);
}

int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}