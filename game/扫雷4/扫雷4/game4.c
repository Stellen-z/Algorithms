#define _CRT_SECURE_NO_WARNINGS

#include "game4.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int r, int c,char set)
{
	int i = 0;
	for (i = 0; i < r; i++)
	{
		int j = 0;
		for (j = 1; j < c; j++)
		{
			board[i][j] = set;
		}
	}
}

//布置雷
void SetMine(char mine[ROWS][COLS], int r, int c)
{
	//布置雷的条件
	//1.随机十个坐标
	//2.没被布置过
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % r + 1;
		int y = rand() % r + 1;

		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int r, int c)
{
	int i = 0;
	printf("———扫雷游戏———\n");
	//打印行号
	for (i = 0; i <= 9; i++)
		//若在上面括号后加上；则循环体为空，只会打印一次
	{
		printf("%d ", i);
	}printf("\n");
	for (i = 1; i <= r; i++)
	{
		int j = 0;
		//打印列号
		printf("%d ", i);
		for (j = 1; j <= c; j++)
		{
			printf("%c ", board[i][j]);
		}printf("\n");
	}
}

//统计雷
int  GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int c = 0;
	int i = 0;
	for (i = -1; i <= 1; i++);
	{
		int j = 0;
		for (j = -1; j <= 1; j++)
		{
			if (mine[x+i][y+j] == '1')
				c++;
		}
	}return c;
}

//排查雷
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int r, int c)
{
	int win = 0;
	while (win < r * c - EASY_COUNT)
	{
		int x, y;
		printf("请输入排查坐标:");
		scanf("%d %d", &x, &y);

		//坐标合法才能排查
		if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了！！！\n");
				DisplayBoard(show, ROW, COL);
				break;
			}
			else if(show[x][y] == '*')
				{
					int c = GetMineCount(mine, x, y);
					show[x][y] = c + '0';
					win++;
					DisplayBoard(show, ROW, COL);
				}
			    else
			    {
				printf("该坐标已经被排查过，请重新输入\n");
			    }
			
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	if (win == r * c - EASY_COUNT)
	{
		printf("恭喜你，扫雷成功\n");
		
	}
}