#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//����ˮ����
//һƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ�����ˮ��
//int main()
//{
//	int price = 1;
//	int w = 6;
//	int sum = 0;
//	sum = w / price;
//	int n = w / price;
//	int count=0;
//	while (n != 1 && n != 0)
//	{
//		sum = sum + n / 2;
//		n = n / 2 + n % 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//����������������ż����λ�ã�ʹ����λ��ǰ�벿�֣�ż��λ�ں�벿�֡�


//int main()
//{
//	int arr[10] = { 4,2,5,6,3,8,7,9,4,1 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			int j = i;
//			for (j = i; j < 10; j++)
//			{
//				if (arr[j] % 2 == 1)
//				{
//					int tmp = arr[i];
//					arr[i] = arr[j];
//					arr[j] = tmp;
// //���Դ�ǰ������ż�����Ӻ���ǰ������������ֻ����һ���������飬���ҵķ������˺ܶ�����顣
//				}
//
//			}
//		}
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//
//	}
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	//a��b������ʱ��Ҫ�������������������޷��ţ�����0��
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	//����ڴ�ʵ������ 00 00 12 34
//	//�����Ǵ�˴洢��������� 00 00 12 34
//	unsigned char b = *(unsigned char*)&a;
//	//unsigned char* ֻ�ܶ�ȡһ���ֽڣ����ֻ�ܶ�ȡ00������b�У����b����0x00
////����32λ���ģʽ�������ϱ���b����
//	return 0;
//}


//��ӡ�������
// 
// ����1 �ö���ʽ������
//int fac(int x)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 0; i < x; i++)
//	{
//		sum = sum * (x - i);
//	}
//	return sum;
//}
//
//
//int num(int no,int col)
//{
//	return fac(col) / (fac(no) * fac(col - no));
//}
//
//int main()
//{
//	int i = 1;
//	printf("1\n");
//	for (i = 1;i<10; i++)
//	{
//		int j = 1;
//		printf("1 ");
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d ", num(j,i));//num(j)��ÿһ��ϵ���ĺ���
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//2.�ö���ʽ���������


//�߼��ж���Ŀ��������
//A˵��������   B˵:��C   C˵����D  D˵��C�ں�˵
//��֪������˵���滰��һ����˵�˼ٻ���

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int n=1;
//    //�ж�
//	for (n = 1; n <= 4; n++)
//	{
//		int count = 0;
//		if (n != a)
//		{
//			count++;
//		}
//		if(n==c)
//		{
//			count++;
//		}
//		if (n == d)
//		{
//			count++;
//		}
//		if (n !=d )
//		{
//			count++;
//		}
//		if (count == 3)
//			break;
//	}
//	switch (n)
//	{
//	case 1:
//		printf("������A\n");
//		break;
//	case 2:
//		printf("������B\n");
//		break;
//
//	case 3:
//		printf("������C\n");
//		break;
//	case 4:
//		printf("������D\n");
//		break;
//	}
//	return 0;
//}


//����2��

//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			printf("������%c ", killer);
//	}
//	return 0;
//}


//������ 5λ�˶�Ա�μ��˱���
//A˵��B�ڶ����ҵ���
//B˵���ҵڶ���E����
//C˵���ҵ�һ��D�ڶ�
//D˵��C����ҵ���
//E˵���ҵ��ģ�A��һ
//����������ÿλѡ�ֶ�ֻ˵����һ�룬������ȷ������������

#include<time.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5;b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ( a*b*c*d*e==120 && a+b+c+d+e==15)
//						{
//							if (((b == 2) + (a == 3) == 1)
//								&& ((b == 2) + (e == 4) == 1)
//								&& ((c == 1) + (d == 2) == 1)
//								&& ((c == 5) + (d == 3) == 1)
//								&& ((e == 4) + (a == 1) == 1))
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d \n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//
//		}
//		
//	}
//	return 0;
//}
//

void menu()
{

	printf("*************************\n");
	printf(" 1:add 2:sub \n");
	printf(" 3:mul 4:div \n");
	printf("*************************\n");
	printf("��ѡ��");
}


int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}

int calc(int (*p)(int, int))
{
	int x = 0;
	int y = 0;
	printf("���������֣�");
	scanf("%d%d", &x, &y);
	return p(x, y);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("%d\n",calc(add));
			break;
		case 2:
			printf("%d\n",calc(sub));
			break;
		case 3:
			printf("%d\n",calc(mul));
			break;
		case 4:
			printf("%d\n",calc(div));
			break;
		default:
			break;

		}
	
	
	} while (input);

	return 0;
}