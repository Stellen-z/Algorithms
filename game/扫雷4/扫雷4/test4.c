#define _CRT_SECURE_NO_WARNINGS

#include "game4.h"

void menu()
{
	printf("*******************\n");
	printf("***** 1.play ******\n");
	printf("***** 0.exit ******\n");
	printf("*******************\n");
}

void game()
{
	//创建棋盘
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	//初始化棋盘
	InitBoard(mine, ROWS, COLS,'0');
	InitBoard(show, ROWS, COLS,'*');
	//布置雷
	SetMine(mine, ROW, COL);
	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	//排查雷
	FindMine(mine,show,ROW,COL);
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入：>");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
			//在 switch 结构中，case 是 “穿透式” 的 
			//如果某一个 case 执行完后没有 break，程序会继续执行下一个 case 的代码
		case 0:
		{
			printf("退出游戏\n");
			break;
		}
		default:
		{
			printf("输入错误，请重新输入\n");
		}
		}
	} while (input);
}
int main()
{
	srand((unsigned int)time(NULL));
	test();
	return 0;
}