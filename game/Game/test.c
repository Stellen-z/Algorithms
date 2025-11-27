#include "game.h"
void menu()
{
	printf("**************\n");
	printf("****1.play****\n");
	printf("****0.exit****\n");
	printf("**************\n");
}
void game()
{
	//布置两个11*11的二维数组
	char mine[ROWS][COLS];//雷区数组
	char show[ROWS][COLS];//展示数组
	//1.初始化棋盘
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//2.打印棋盘
	//Displayboard(show, ROW, COL);
	//Displayboard(mine, ROW, COL);
	//3.布置雷(十个）
	Setmine(mine, ROW, COL);
	Displayboard(mine, ROW, COL);
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default :
			printf("输入错误，请重新输入");
		}
	} while (input);
	return 0;
}