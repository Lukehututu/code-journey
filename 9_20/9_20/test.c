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
	//开辟空间
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//布置雷
	//界面的初始化
	InitBoard(mine,ROWS,COLS,'0');
	InitBoard(show, ROWS, COLS, '*');
	//界面打印
	/*DisPlayboard(mine, ROW, COL);*/
	DisPlayboard(show, ROW, COL);
	//设置雷
	Set_mine(mine,ROW,COL);
	/*DisPlayboard(mine, ROW, COL);*/
	//排查雷
	Find_mine(mine,show, ROW, COL);
	//界面是点击方块然后显示周围雷的个数
}


int main()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入（1/0）：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
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