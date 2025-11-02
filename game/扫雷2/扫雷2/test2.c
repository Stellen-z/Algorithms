

#include "game2.h"
void menu()
{
	printf("******************\n");
	printf("*****1. play******\n");
	printf("*****0. exit******\n");
	printf("******************\n");
}

void game()
{
	//初始化棋盘
	char mine[ROWS][COLS];
	char show[ROWS][COLS];
	
    //引入函数：
	InitBoard(mine, ROWS, COLS, '0');  //全部赋为'0'
    InitBoard(show, ROWS, COLS, '*');  //全部赋为'*'
	
	//布置雷
	SetMine(mine, ROW, COL);

	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);
	
	//排查雷
	FindMine(mine, show, ROW, COL);
	//统计雷

}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
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