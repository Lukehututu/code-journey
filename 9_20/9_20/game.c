#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//初始化函数
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < ROWS; i++)
	{
		int j = 0;
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = set;
		}
	}
}

//打印函数
void DisPlayboard(char board[ROWS][COLS], int row, int  col)
{

	int i = 1;
	printf("————————扫雷游戏————————\n");
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		int j = 1;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
	printf("————————扫雷游戏————————\n");

}



//生成雷
void Set_mine(char mine[ROWS][COLS], int row, int col)
{
	//先进行判断
	int count = easy;

	while(count>0)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
	
}

int get_mine(char mine[ROWS][COLS], char show[ROWS][COLS],int x,int y)
{
	int count = 0;
	return mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0';
}




//查找雷
void Find_mine(char mine[ROWS][COLS],char show[ROWS][COLS], int  row, int col)
{
	
	
		//判断坐标合法性
		int a=0;
		while (a < row * col - easy)
		{
			int x = 0;
			int y = 0;
			printf("请输入要查询的坐标");
			scanf("%d %d", &x, &y);
			if (x > 0 && x <= row && y > 0 && y <= col)
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你踩到雷了，游戏结束。\n");
					break;
				}
				else
				{
					int count = get_mine(mine, show, x, y);
					show[x][y] = '0' + count;
					DisPlayboard(show, row, col);
					a++;
				}
			}
			else
			{
				printf("坐标非法，请重新输入");
			}

		}
		if (a == row * col - easy)
			printf("恭喜你游戏胜利\n");
}