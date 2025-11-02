#include "game2.h"

void InitBoard(char board[ROWS][COLS],int r, int c, char set)
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
void DisplayBoard(char board[ROWS][COLS], int r, int c)
{
	int i = 0;
	printf("----扫雷----\n");
	for (i = 0; i <= c; i++)
	{
		printf("%d ", i);
	}printf("\n");
	for (i = 1;i <= r; i++)
	{
		printf("%d ", i);
		int j = 0;
		for (j = 1; j <=c; j++)
		{
			printf("%c ", board[i][j]);
		}printf("\n");
	}
}
void SetMine(char mine[ROWS][COLS], int r, int c)
{
	int count = EASY_COUNT;
	//布置雷的条件：
	//1.合法坐标
	//2.未被布置过

	while (count)//循环至少执行10次
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;//限制坐标范围
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;  //只有布置成功1个雷，count才--
		}
	}
}
int  GetMineCount(char mine[ROWS][COLS], int x, int y)
{
	int c = 0;
	int i = 0;
	for (i = -1;i <= 1;i++)
	{
		int j = 0;
		for (j = -1; j <= 1; j++)
		{
			if (mine[x + i][y + i] == '1')
				c++;
		}
	}
	return c;
}
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c)
{
	int x = 0;
	int y = 0;
	int win = 0;//记录排查次数
	while (win < ROW * COL - EASY_COUNT)
	{
		printf("请输入排查坐标：");
		scanf("%d %d", &x, &y);

		if (x >= 1 && x <= r && y >= 1 && y <= c) //坐标合法
		{
			if(mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了\n");
				DisplayBoard(mine, ROW, COL);
				break;
			}
			else  //没炸死，那就统计周围雷的个数,统计之前，应确保该位置没被排查过
				if (show[x][y] == '*')  //没被排查过
				{
					int c = GetMineCount(mine,x,y);
					show[x][y] = '0' + c;
					DisplayBoard(show, r, c);
					win++;
				}
				else
				{
					printf("该坐标已被排查过，请重新输入坐标");
				}

		}
		else
		{
			printf("坐标非法，请重新输入");
		}
	}  
	if (win == ROW * COL - EASY_COUNT)
	{
		printf("恭喜你，扫雷成功\n");
	}
}



//if (show[x][y] != '*')
//{
//	{
//		int c = GetMineCount(mine, ROW, COL);
//		show[x][y] = '0' + c;
//		DisplayBoard(show, ROW, COL);
//		win++;
//	}
//}
//else
//{
//	printf("该坐标已经被排查过，请重新输入坐标\n");
//}
//
//
//
//if (mine[x][y] == '1')
//{
//	printf("很遗憾，你被炸死了\n");
//	DisplayBoard(show, ROW, COL);
//	break;
//}
//else  //没炸死，那就统计周围雷的个数 统计之前，应确保该位置没被排查过