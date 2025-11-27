#include "game.h"

//1.初始化棋盘
void Initboard(char board[ROWS][COLS], int r, int c, char set)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		//遍历行
		int j = 0;
		for (j = 0; j < c; j++)
		{
			//遍历列
			board[i][j] = set;
		}
	}
}
//2.打印棋盘
void Displayboard(char board[ROWS][COLS], int r, int c)
{
	int i = 0;
	for (i = 1; i <= r; i++)
	{
		//遍历行
		int j = 0;
		for (j = 1; j <= c; j++)
		{
			//遍历列
			printf("%c ", board[i][j]);
		}printf("\n");
	}
}
//3.布置雷
void Setmine(char mine[ROWS][COLS], int r, int c)
{
	//布置雷的条件
	//1.坐标范围1-9
	//2.没有被布置过
	int count = 10;

	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;
		if (mine[x][y] == '0')//没雷
		{
			mine[x][y] = '1';
			count--;
			//printf("布置了%d个雷\n", count);
		}
	}
}

