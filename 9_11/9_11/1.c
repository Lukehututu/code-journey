#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
//ָ�����
//int main()
//{
//	int num = 10;
//	int* p = &num;
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;   //�˴�*p=arr��ʲô��˼��
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
////�����1 2 3 4 5 6 7 8 9 10


//int main()
//{
//	int age = 60;
//	if (age < 18)
//		printf("����");
//	else if (18<=age&&age<60)
//	{
//		printf("����");
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("haha");
//	     else
//		printf("hehe");
//	return 0;
//}


//int main()
//{
	//if (condition)
	//{
	//	return x,
	//}

	//return y;
	//return 0;
//
//	if (condition)
//	{
//		return x;
//	}
//	else
//		return y;
//	return 0;
//}
//�ж�һ�����Ƿ�Ϊ����
	//int main()
	//{
	//	int t;
	//	scanf("%d", &t);
	//	int a = t % 2;
	//	if (a == 1)
	//	{
	//		printf("�����������");
	//	}
	//	else
	//		printf("�������ż��");
	//	return 0;
	//}


//int main()
//	{
//		int t=1;
//		for (t = 1; t <= 100; t++)
//		{
//			if (t%2==1)
//			{
//				printf("%d\n", t);
//			}
//		}
//		return 0;
//	}

//int main()
//{
//	int t = 1;
//	for (t = 1; t <= 100; t+=2)
//	{
//		/*int a = t % 2;
//		if (a == 1)
//		{
//			printf("%d\n", t);
//		}*/
//		printf("%d\n", t);
//	}
//	return 0;
//}



//int main()
//{
//
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//       case 1:
//           printf("����һ");
//		break;
//	   case 2:
//		   printf("���ڶ�");
//		   break;
//	   case 3:
//		   printf("������");
//		   break;
//	   case 4:
//		   printf("������");
//		   break;
//	   case 5:
//		   printf("������");
//		   break;
//	   case 6:
//		   printf("������");
//		   break;
//	   case 7:
//		   printf("������");
//		   break;
//	   default:
//		   printf("�������");
//		   break;
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 9)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char password[20] = {0};
//	printf("���������룺");
//	scanf("%s", password);
//	int a = getchar();
//	while ((a = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ�����루Y/N��");
//	int ch = getchar();
//	if (ch=='Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("ȷ��ʧ��");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//����n�Ľ׳�

//��һ�⣺int main()
//{
//	int n, i;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 0;i<n; i++)
//	{
//		sum = sum*(n-i);
//	}
//	printf("%d", sum);
//	return 0;
//}

//�ڶ��⣺����1��+2��+����+10�� ��=4037913
//int main()
//{
//	int  i,j;
//	int sum1 = 0;
//	for (j = 1; j < 11; j++)
//	{
//		int sum2 = 1;   //*****����Ҫ
//		for (i = 0; i < j; i++)
//				{
//					sum2 = sum2*(j-i);
//				}
//		sum1 += sum2;
//	}
//	printf("%d", sum1);
//	return 0;
//}

//�����⣺
//int binsearch(int x, int v[], int n)
//{
//	int i;
//	v[n] > v[n - 1];
//	for (i = 0; i < n; i++)
//	{
//       if(x==v[i])
//	   return v[i];
//	}
//	return i;
//}
//
//int main()
//{
//	int x, n;
//	int v[] = { 0 };
//	scanf("%d%s%d", &x, v, & n);
//	int b = binsearch(x,v[n],n);
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int v[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int right = sizeof(v) / sizeof(v[0])-1;
//	int mid = (right + left) / 2;
//	//Ҫȥ�Ҹ�7��ȵ�����Ԫ�ص��±�
//	while (left <= right)
//	{
//		if (k > v[mid])
//		{
//			left = mid + 1;
//			mid = (right + left) / 2;
//		}
//		else if (k < v[mid])
//		{
//			right = mid - 1;
//			mid = (right + left) / 2;
//		}
//		else if(k=v[mid])
//		{
//			printf("������±�=%d", mid);
//			break;
//		}
//	}
//	while (left >right)
//	{
//		printf("�Ҳ���");
//		break;
//
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;
//    while(i<4)
//    { 
//		switch (i)
//		{
//		case 1:
//			printf("h###o\n");
//			break;
//		case 2:
//			printf("he#lo\n");
//			break;
//		case 3:
//			printf("hello\n");
//			break;
//		}
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "hello to bit!!!!!!";
//	char arr2[] = "##################";
//	int i = 0;
//	int left = 0;
//	int right = strlen(arr1)-1;
//    while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//	Sleep(300);
//	system("cls");
//		left++;
//		right--;
//	}
//	int a = strlen(arr2);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	char password[20] = {0};
//	char right = "123456";
//	int i = 0;
//	while (i < 3)
//	{
//		scanf("%s", &password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;	
//		}
//		else 
//			printf("��½ʧ�ܣ�����������\n");
//		i++;
//	}
//	while (i == 3)
//	{
//		printf("��½ʧ���Ҳ����ٵ�¼\n");
//		break;
//	}
//		return 0;
//}

//дһ�������ֵ���Ϸ

#include <stdlib.h>
#include <time.h>

//void game()
//{
//	int rod=rand();
//}
//
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int rod=0;
//	int a = 0;
//	printf("********��ӭ������Ϸ********\n");
//	printf("******** 1>������Ϸ ********\n");
//	printf("******** 0>�˳���Ϸ ********\n");
//	printf("****************************\n");
//	printf("*********  ��ѡ��   ********\n");
//	printf("�����룺");
//	scanf("%d", &a);
//	if (a == 1)
//	{
//		int guess = 0;
//		int rod = rand() % 100 + 1;
//		while (1)
//		{
//			printf("�뿪ʼ�����֣�\n");
//		    scanf("%d", &guess);
//			//���ú������������
//			//�û���������
//
//			if (guess> rod)
//			{
//				printf("�´���\n");
//			}
//			else if (guess < rod)
//			{
//				printf("��С��\n");
//			}
//			else
//			{
//				printf("�¶���\n");
//				break;
//			}
//		}
//	}
//	else
//		return 0;
//	return 0;
//}

int menu()
{
	printf("********��ӭ������Ϸ********\n");
	printf("******** 1>������Ϸ ********\n");
	printf("******** 0>�˳���Ϸ ********\n");
	printf("****************************\n");
	printf("*********  ��ѡ��   ********\n");
	printf("�����룺");
}
void game()
{
	int guess = 0;
	int ret = rand()%100+1;
	while (1)
	{
		printf("�뿪ʼ�����֣�\n");
		scanf("%d", &guess);
		//���ú������������
		//�û���������
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶���\n");
			break;
		}
	}
}

int main() 
{
	srand((unsigned int)time(NULL));//������������
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);



	return 0;
}