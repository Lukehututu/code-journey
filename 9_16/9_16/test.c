#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//数一下1-100所有整数中出现了多少个9
//int main()
//{
//	int i = 1;
//	int n = 0;
//	for (i = 1; i <= 100; i++)
//	{
//	
//		/*if (i % 10 % 9 == 0 && i%10!=0)
//		{
//			n++;
//		}
//		else if (i % 90 == 1 && i>1 )		{
//			int b = i % 90;
//			if (b % 9 != 0)
//			{
//				n++;
//			}
//			else
//			{
//				n += 2;
//			}
//		}*/
//		if (i % 10 == 9)
//		{
//			n++;
//		}
//		if (i / 10 == 9)
//		{
//			n++;
//		}
//	}
//	printf("9的个数为：%d\n", n);
//	return 0;
//}


//int main()
//{
//	int i = 1;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		double b = (1.0/ i); 
//		sum =sum+b*flag;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}





//写一个猜数字的游戏
//问题1（循环框架的选择）
//随机数的生成

//void menu()
//{
//	printf("*************************************\n");
//	printf("********* 欢迎来玩猜数字游戏 ********\n");
//	printf("*********       1>play       ********\n");
//	printf("*********       0>exit       ********\n");
//	printf("*************************************\n");
//}
//void game()
//{
//	//首先我要生成一个随机数
//	int c=rand();
//	int guess = 0;
//	c = c % 100 + 1;//控制i在（1，100）
//	while (1)
//	{
//		printf("请输入数字：");
//		scanf("%d", &guess);
//		if (guess > c)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < c)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入1/0：");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			game();
//		}
//		else if (input == 0)
//		{
//			printf("游戏已退出");
//			break;
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
//			continue;
//		}//此处的if 句块更适合用switch（）来写，因为就是个选择哪种方案的形式。
//	} while (input);
//
//	return 0;
//}

