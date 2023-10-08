#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//������Ϸ���߼�
//������

void menu()
{
	printf("*****************************\n");
	printf("**********1.play*************\n");
	printf("**********0.exit*************\n");
	printf("*****************************\n");
	printf("�����루1/0����");
}

void game()
{
	char board[ROW][COL];
	InitBoard(board,ROW,COL);
	Displayboard(board,ROW,COL);
	while (1)
	{
		//�����
		Player_round(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//�ж��Ƿ�ʤ������ͬһ��������
		/*IDF_WIN(board, ROW, COL);*/
		int ret= IDF_WIN(board, ROW, COL);
		if (ret == '*')
		{
			printf("���Ӯ\n");
				break;
		}
		else if(ret=='!')
		{
			printf("ƽ��\n");
			break;
		}
		//������
		Computer_round(board, ROW, COL);
		Displayboard(board, ROW, COL);
		if (ret == '#')
		{
			printf("����Ӯ\n");
			break;
		}
		else if (ret == '!')
		{
			printf("ƽ��\n");
			break;
		}
	}
}


int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do 
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		    game();//��game.c�н������
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}
