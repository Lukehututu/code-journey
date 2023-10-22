#define _CRT_SECURE_NO_WARNINGS 
#include"contact.h"


//通讯录
//增删查改

void menu()
{
	printf("********************************\n");
	printf("*******       通讯录     *******\n");
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
    //初始化函数
	//先将通讯录初始化
	InitCon(&c);
	do
	{
		menu();
		printf("请输入：>");
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