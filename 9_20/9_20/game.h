#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define easy 10
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
void DisPlayboard(char board[ROWS][COLS],int row,int  col);
void Set_mine(char mine[ROWS][COLS],int row,int col);
void Find_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int  row,int col);



