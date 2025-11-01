#pragma once

#include "game1.h"
void InitBoard(char board[ROWS][COLS], int r, int c, char set)
{
	//末尾再次引入set，用set替代初始化的值，否则代码只会输出一种
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 0; j < c; j++)
		{
			board[i][j] = set;
		}
	}
}

void Displayboard(char board[ROWS][COLS], int r, int c)
{
	printf("-----扫雷游戏-----\n");
	//打印时行号和列号均为1-9
	//函数实现过程中应使用形参，即为实参替代形参
	int i = 0;
	//打印列号
	for (i = 0; i <= c; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= r; i++)
	{
		//打印行号 
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <= c; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char mine[ROWS][COLS], int r, int c)
{
	//布置10个雷
	//随即找10个合法坐标
	//1.在范围内
	//2.没有布置过雷
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % r + 1;//1-r
		int y = rand() % c + 1;//1-c
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//统计雷的个数函数
int Getminecount(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y-1] + mine[x + 1][y] +mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS],int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;
	
	while (win < ROW*COL - EASY_COUNT)
	{
		printf("请输入排查坐标：");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= ROW && y >= 1 && y <= COL)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				Displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				//该位置不是雷，就统计周围雷的个数
				int count = Getminecount(mine, x, y);
			    show[x][y] = count + '0';
				Displayboard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("坐标输入错误，请重新输入\n");
		}
	}
	if (win == r * c - EASY_COUNT)
	{
		printf("恭喜你，扫雷成功\n");
		Displayboard(mine, ROW, COL);
	}
}