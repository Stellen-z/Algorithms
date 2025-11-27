#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//≥ı ºªØ∆Â≈Ã
void Initboard(char board[ROWS][COLS],int r, int c,char set);
//¥Ú”°∆Â≈Ã
void Displayboard(char show[ROWS][COLS], int r, int c);
//≤º÷√¿◊
void Setmine(char mine[ROWS][COLS],int r,int c);
