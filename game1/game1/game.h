#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3     //def���Ų���Ҫ;
#define COL 3

//������з��ŵĶ���
//������к���������

void InitBoard(char board[ROW][COL], int row, int col);
void Displayboard(char board[ROW][COL], int row, int col);
char Player_round(char board[ROW][COL],int row,int col);
char Computer_round(char board[ROW][COL],int row,int col);
char IDF_WIN(char board[ROW][COL],int row,int col);
int is_full(char board[ROW][COL], int row, int col);