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
	for (i = 0; i <= c; i++)
	{
		printf("%d ", i);
	}	printf("\n");
	for (i = 1; i <= r; i++)
	{
		printf("%d ", i);//打印行号
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
//排查雷
int Mine(char mine[ROWS][COLS], char show[ROWS][COLS],int x, int y)
{
	int n = 0;
	int i = 0;
	for (i = -1;i <= 1; i++)
	{
		int j = 0;
		for (j = -1; j <= 1; j++)
		{
			if (mine[x + i][y + j] == '1')
				n++;
		}
	}
	return n;
}
//4.统计雷
void Findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;//排雷次数
	while (win < r * c - EASY_COUNT)
	{
		printf("请输入要排查的坐标：");
		scanf("%d %d", &x, &y);
		if(x >= 1 && x <= r && y >= 1 && y <= c)
		{
			if (mine[x][y] == '1')
			{
				printf("你被炸死了\n");
				Displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				//没炸死就统计周围雷的个数
				int count = Mine(mine, show, x, y);
				show[x][y] = count + '0';
				Displayboard(show, ROW, COL);
				win++;
			}

		}
		else
		{
			printf("输入错误，请重新输入\n");
		}
	}
	if (win == r * c - EASY_COUNT)
	{
		printf("恭喜你，排雷成功\n");
	}

}

