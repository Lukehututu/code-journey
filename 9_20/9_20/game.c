#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//��ʼ������
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

//��ӡ����
void DisPlayboard(char board[ROWS][COLS], int row, int  col)
{

	int i = 1;
	printf("����������������ɨ����Ϸ����������������\n");
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
	printf("����������������ɨ����Ϸ����������������\n");

}



//������
void Set_mine(char mine[ROWS][COLS], int row, int col)
{
	//�Ƚ����ж�
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




//������
void Find_mine(char mine[ROWS][COLS],char show[ROWS][COLS], int  row, int col)
{
	
	
		//�ж�����Ϸ���
		int a=0;
		while (a < row * col - easy)
		{
			int x = 0;
			int y = 0;
			printf("������Ҫ��ѯ������");
			scanf("%d %d", &x, &y);
			if (x > 0 && x <= row && y > 0 && y <= col)
			{
				if (mine[x][y] == '1')
				{
					printf("���ź�����ȵ����ˣ���Ϸ������\n");
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
				printf("����Ƿ�������������");
			}

		}
		if (a == row * col - easy)
			printf("��ϲ����Ϸʤ��\n");
}