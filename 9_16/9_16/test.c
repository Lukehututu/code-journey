#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//��һ��1-100���������г����˶��ٸ�9
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
//	printf("9�ĸ���Ϊ��%d\n", n);
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





//дһ�������ֵ���Ϸ
//����1��ѭ����ܵ�ѡ��
//�����������

//void menu()
//{
//	printf("*************************************\n");
//	printf("********* ��ӭ�����������Ϸ ********\n");
//	printf("*********       1>play       ********\n");
//	printf("*********       0>exit       ********\n");
//	printf("*************************************\n");
//}
//void game()
//{
//	//������Ҫ����һ�������
//	int c=rand();
//	int guess = 0;
//	c = c % 100 + 1;//����i�ڣ�1��100��
//	while (1)
//	{
//		printf("���������֣�");
//		scanf("%d", &guess);
//		if (guess > c)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < c)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("������1/0��");
//		scanf("%d", &input);
//		if (input == 1)
//		{
//			game();
//		}
//		else if (input == 0)
//		{
//			printf("��Ϸ���˳�");
//			break;
//		}
//		else
//		{
//			printf("�����������������\n");
//			continue;
//		}//�˴���if �����ʺ���switch������д����Ϊ���Ǹ�ѡ�����ַ�������ʽ��
//	} while (input);
//
//	return 0;
//}

