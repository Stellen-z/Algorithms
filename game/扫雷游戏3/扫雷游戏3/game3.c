#define _CRT_SECURE_NO_WARNINGS

#include "game3.h"

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int r, int c,char set)
{
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
//打印棋盘信息 打印只需1-9行列
void DisplayBorad(char board[ROWS][COLS], int r, int c)
{
	int i = 0;
	//打印列号
	for (i = 0; i <= r; i++)
	{
		printf("%d ", i);
	}printf("\n");
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
//总结一下：0-10行列均需要进行初始化，避免越界访问；打印时只需打印1-9行列即可
//因此i，j均从1开始 到9结束
void SetMine(char mine[ROWS][COLS], int r, int c)
{
	int count = EASY_COUNT;
	while (count)
	{
		//布置雷条件
		// 1.合法坐标
		// 2.未被布置过
		//随机生成10个合法坐标
		int x = rand() % r + 1;
		int y = rand() % c + 1;

		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}
int  GetmineCount(char mine[ROWS][COLS], int x, int y)
{
	/*return (mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0');*/
		int c = 0;
		int i = 0;
		for (i = -1; i <= 1; i++)
		{
			int j = 0;
			for (j = -1; j <= 1; j++)
			{
				if (mine[x + i][y + j] == '1')
					c++;
			}
			
		}
		return c;

}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	{
		int x = 0;
		int y = 0;
		int win = 0;
		while (win < ROW * COL - EASY_COUNT)
		{
			printf("请输入排查坐标：");//坐标要合法
			scanf("%d %d", &x, &y);
			if (x >= 1 && x <= 9 && y >= 1 && y <= 9)
			{
				if (mine[x][y] == '1')
				{
					printf("你被炸死了，游戏结束\n");
					DisplayBorad(mine, ROW, COL);
					break;
				}
				else //没炸死就统计周围有几个雷
				{
					int count = GetmineCount(mine, x, y);
					show[x][y] = count + '0';
					DisplayBorad(show, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("坐标非法，请重新输入\n");
			}
		}
		if (win == ROW * COL - EASY_COUNT)
		{
			printf("恭喜你，扫雷成功!");
			DisplayBorad(mine, ROW, COL);
		}
	}
}
		
