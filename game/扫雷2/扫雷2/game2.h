#pragma once
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 80

//棋盘初始化
void InitBoard(char board[ROWS][COLS], int r, int c,char set);
//布置雷
void SetMine(char mine[ROWS][COLS],int r, int c);
//打印棋盘信息
void DisplayBoard(char board[ROWS][COLS], int r, int c);
//排查雷
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int r,int c);