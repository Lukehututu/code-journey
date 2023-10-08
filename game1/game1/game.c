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
		return '!';//����
	}


}
//��ʼ����ά���飬�����ڲ�ȫ���Ͽո�
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

//��ӡ����
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

//��ʼ��Ϸ
//�����
char Player_round(char board[ROW][COL], int row, int col)
{
    printf("�����>\n");
	printf("�������������꣺");
	int x,y;
	//�������ģ�1��3����ʵ�������꣨0��2��
	//�ж����������Ƿ�Ϲ�
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x > 0 && x <= row && y > 0 && y <= col)
		{
			if (board[x - 1][y - 1] != ' ')
			{
				printf("��λ�����Ѿ�������,����������");
			}
			else
			{
				board[x - 1][y - 1] = '*';

				break;
			}
		}
		else
		{
			printf("��������Ч����������������");
		}
	}
}

//������
char Computer_round(char board[ROW][COL], int row, int col)
{
	printf("������>\n");
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

//�ж��Ƿ�ʤ��
char IDF_WIN(char board[ROW][COL], int row, int col)
{
	int i;

//�ж���
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1]== board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//�ж���
	for (i = 0; i < col; i++)
	{
		if(board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//�ж϶Խ�
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