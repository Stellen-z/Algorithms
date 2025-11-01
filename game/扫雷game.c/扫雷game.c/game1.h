#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9 //行
#define COL 9 //列

#define ROWS ROW+2 
#define COLS COL+2

//布置10个雷
#define EASY_COUNT 80
//声明函数
//若出现调用参数过多的情况，即超过了它声明 / 定义时的参数数量
//应回到.c和.h文件中定位函数位置
//看声明时的参数个数


//初始化棋盘 
void InitBoard(char board[ROWS][COLS], int r, int c,char set);

//打印棋盘
//实参为show，为11*11的，故应接收11*11的
void Displayboard(char board[ROWS][COLS], int r, int c);


//布置雷
void Setmine(char mine[ROWS][COLS], int r, int c);

//排查雷
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS],int r,int c);