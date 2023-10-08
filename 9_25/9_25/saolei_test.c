#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"



void menu()
{
	printf("*********************\n");
	printf("*******1>play********\n");
	printf("*******0>exit********\n");
	printf("*********************\n");
	printf("*********************\n");
	printf("请输入(1/0):");
}


void game()
{
	int arr1[ROWS][COLS] = { 0 };
	int arr2[ROWS][COLS] = { 0 };
	//初始化游戏界面




}

//int main()
//{
//	int input = 0;
//
//	do
//	{
//		menu();
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			//game();5
//			break;
//		case 0:
//			printf("game over");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}