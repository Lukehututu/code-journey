#define _CRT_SECURE_NO_WARNINGS 
#include"contact.h"


//ͨѶ¼
//��ɾ���

void menu()
{
	printf("********************************\n");
	printf("*******       ͨѶ¼     *******\n");
	printf("*******   1>ADD   2>SUB  *******\n");
	printf("*******   3>SEA   4>MOD  *******\n");
	printf("*******   0>EXIT  5>PIT  *******\n");
	printf("********************************\n");
}

enum Option
{
	EXIT,
	ADD,
	SUB,
	SER,
	MOD,
	PIT
};



int main() 
{
	Con c = { 0 };
	int input = 0;
    //��ʼ������
	//�Ƚ�ͨѶ¼��ʼ��
	InitCon(&c);
	do
	{
		menu();
		printf("�����룺>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			Add(&c);
			break;
		case SUB:
			Sub(&c);
			break;
		case SER:
			Ser(&c);
			break;
		case MOD:
			Mod(&c);
			break;
		case EXIT:
			Exit(&c);
			Des(&c);
			break;
		case PIT:
			Print(&c);
			break;
		}
	} while (input);

	return 0;
}