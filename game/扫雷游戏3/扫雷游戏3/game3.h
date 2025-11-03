#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int r, int c,char set);
//布置雷
void SetMine(char mine[ROWS][COLS],int r,int c);
//打印棋盘信息
void DisplayBorad(char board[ROWS][COLS], int r, int c);
//排查雷
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int r, int c );
