#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

int is_full(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int i = 0;
		for (i = 0; i < row; i++)
		{
			for (int j=0; j < col; j++)
			{
				if (board[i][j] == ' ')
					return 'C';
			}
		}
		return '!';//满了
	}


}
//初始化二维数组，将其内部全填上空格
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

//打印棋盘
void Displayboard(char board[ROW][COL], int row, int col)
{
   int i = 0;
   int j = 0;
   for (i = 0; i < row; i++)
   {
	   for (j = 0; j < col; j++)
	   {
		   printf(" %c ", board[i][j]);
		   if (j < col - 1)
		   {
			   printf("|");
		   }
	   }
	   printf("\n");
	   for (j = 0; j < col; j++)
	   {
		   if (i < row - 1)
		   {
			   printf("---");
			   if (j< col - 1)
				   printf("|");
		   }
	   }
	   printf("\n");
   }
}

//开始游戏
//玩家走
char Player_round(char board[ROW][COL], int row, int col)
{
    printf("玩家走>\n");
	printf("请输入棋子坐标：");
	int x,y;
	//玩家输入的（1，3）但实际上坐标（0，2）
	//判断棋子坐标是否合规
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (board[x - 1][y - 1] != ' ')
			{
				printf("该位子上已经有棋子,请重新输入");
			}
			else
			{
				board[x - 1][y - 1] = '*';

				break;
			}
		}
		else
		{
			printf("该坐标无效，请重新输入坐标");
		}
	}
}

//电脑走
char Computer_round(char board[ROW][COL], int row, int col)
{
	printf("电脑走>\n");
	int i = rand()%row;
	int j = rand()%col;
	while (1)
	{
		if (board[i][j] == ' ')
		{
			board[i][j] = '#';
			break;
		}
	}

}

//判断是否胜利
char IDF_WIN(char board[ROW][COL], int row, int col)
{
	int i;

//判断行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1]== board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断列
	for (i = 0; i < col; i++)
	{
		if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断对角
	if(board[0][0]==board[1][1]&&board[1][1]==board[2][2]&&board[1][1]!=' ')
	{
		return board[1][i];
	}
	else if (board[0][2] == board[1][1] && board[1][1] == board[2][1] && board[1][1] != ' ')
	{
		return board[1][i];
	}
	char back=is_full(board,row,col);
	return back;
}