#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"








void menu()
{
	printf("*****************************\n");
	printf("**********1.play*************\n");
	printf("**********0.exit*************\n");
	printf("*****************************\n");
}

void game()
{
	//���ٿռ�
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//������
	//����ĳ�ʼ��
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//�����ӡ
	/*DisPlayboard(mine, ROW, COL);*/
	DisPlayboard(show, ROW, COL);
	//������
	Set_mine(mine,ROW,COL);
	/*DisPlayboard(mine, ROW, COL);*/
	//�Ų���
	Find_mine(mine,show, ROW, COL);
	//�����ǵ������Ȼ����ʾ��Χ�׵ĸ���
}


int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("�����루1/0����");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
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