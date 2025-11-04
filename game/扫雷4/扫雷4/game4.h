#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY_COUNT 10

//≥ı ºªØ∆Â≈Ã
void InitBoard(char board[ROWS][COLS], int r, int c,char set);
//≤º÷√¿◊
void SetMine(char mine[ROWS][COLS], int r, int c);
//¥Ú”°∆Â≈Ã
void DisplayBoard(char board[ROWS][COLS], int r, int c);
//≈≈≤È¿◊
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS], int r, int c);