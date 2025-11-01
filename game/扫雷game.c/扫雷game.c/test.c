#define _CRT_SECURE_NO_WARNINGS

#include "game1.h"

void menu()
{
	printf("**************************\n");
	printf("*******   1. play  *******\n");
	printf("*******   0. exit  *******\n");
	printf("**************************\n");
}
void game()
{
	//1.打印棋盘
	char mine[ROWS][COLS]; //行 列
	char show[ROWS][COLS];

	//初始化棋盘
	InitBoard(mine, ROWS, COLS,'0'); //全部初始化为"0"
	InitBoard(show, ROWS, COLS,'*'); //全部初始化为"*"
	
	Displayboard(show, ROW, COL); 
	//Displayboard(mine, ROW, COL);
	//只打印9*9的，即为show数组

	//布置雷
	Setmine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);

	//排查雷
	Findmine(mine,show,ROW,COL);


}

void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}//
	} while (input);
}
int main()
{
	test();
	return 0;
}