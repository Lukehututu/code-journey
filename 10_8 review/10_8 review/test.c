#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = { 'a','b','c' };
//	//printf("%s\n", arr1);
//	//printf("%s\n", arr2);
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	return 0;
//}

//int main()
//{
//	printf("\n");
//
//	printf("\"\"");
//
//	return 0;
//}


//void test()
//{
//	static int i = 0;
//	i++;
//	printf("%d ", i);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		test();
//	}
//	return 0;
//}




//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		
//			printf("%d ", i);
//		i = i + 1;
//	}
//	return 0;
//}

//
//int main()
//{
//	int ch = 0;
//	ch=getchar();
//	while ((ch = getchar()) != ' ')
//	{
//		putchar(ch);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[100] = { 0 };
//	//scanf("%s", arr);
//	scanf("%s", arr);
//	int ch;
//	while ((ch=getchar()) != '\0')
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//		printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	/*int i = 0;*/
//	/*for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 10; j++)
//		{
//			printf("%d%d:hehe\n",i,j);
//		}
//	}*/
//	//代码3
//	//int i = 0;
//	//
//	////如果省略掉初始化部分，这里打印多少个hehe?
//	//for (; i < 10; i++)
//	//{
//	//	int j = 0;
//	//	for (; j < 10; j++)
//	//	{
//	//		printf("%d%d:hehe\n",i,j);
//	//	}
//	//}
//	//代码4-使用多余一个变量控制循环
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("%d%d:hehe\n",x,y);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}


//猜数字游戏

#include <time.h>
//void menu()
//{
//	printf("*****************************\n");
//	printf("********  猜数字游戏  *******\n");
//	printf("********   1>play     *******\n");
//	printf("********   0>exit     *******\n");
//	printf("*****************************\n");
//}
//
//void game()
//{
//	int a = rand()%100+1;
//	int put = 0;
//	while (1)
//	{
//		printf("请输入:>");
//		scanf("%d", &put);
//		if (put > a)
//		{
//			printf("猜大了\n");
//		}
//		else if (put < a)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("猜对了！\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do 
//	{
//
//		menu();
//		printf("请输入:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default :
//			printf("非法输入\n");
//			break;
//		}
//
//	} while (input);
//	printf("游戏结束\n");
//	return 0;
//}