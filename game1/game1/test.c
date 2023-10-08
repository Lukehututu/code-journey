#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

//测试游戏的逻辑
//三子棋

void menu()
{
	printf("*****************************\n");
	printf("**********1.play*************\n");
	printf("**********0.exit*************\n");
	printf("*****************************\n");
	printf("请输入（1/0）：");
}

void game()
{
	char board[ROW][COL];
	InitBoard(board,ROW,COL);
	Displayboard(board,ROW,COL);
	while (1)
	{
		//玩家走
		Player_round(board, ROW, COL);
		Displayboard(board, ROW, COL);
		//判断是否胜利（用同一个函数）
		/*IDF_WIN(board, ROW, COL);*/
		int ret= IDF_WIN(board, ROW, COL);
		if (ret == '*')
		{
			printf("玩家赢\n");
				break;
		}
		else if(ret=='!')
		{
			printf("平局\n");
			break;
		}
		//电脑走
		Computer_round(board, ROW, COL);
		Displayboard(board, ROW, COL);
		if (ret == '#')
		{
			printf("电脑赢\n");
			break;
		}
		else if (ret == '!')
		{
			printf("平局\n");
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
		    game();//在game.c中解决函数
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
