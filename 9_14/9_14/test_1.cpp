#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//�Զ��庯��
//int get_Max(int a,int b)
//{
//	if (a > b)
//	{
//		;
//	}
//	else if (a < b)
//	{
//		int tem = a;
//		a = b;
//		b = tem;
//	}
//	return a;
//}
// �����������д��
// get_Max(int a,int b)
// {
//     int c=0;
//     if(a>b)
//     c=a;
//     else;
//     c=b;
//     return c;
// }
// 
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	int c = get_Max(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//�����������α���������
//����������Ҫ����ʲôֵ��������ǰ׺��дvoid

//void swap(int a, int b)
//{
//	int tem = a;
//	a = b;
//	b = tem;
//	return ;
//}
//
//int main()
//{
//	int a, b;
//	scanf("%d%d", &a, &b);
//	printf(" %d %d", a, b);
//	swap(a, b);
//	printf(" %d %d", a, b);
//	return 0;
//}
//��������a.b�ĵ�ַ��swap�еĵ�ַ��һ����s

//void swap(int* pa, int* pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��%d %d\n", a, b);
//	swap(&a, &b);
//	printf("������%d %d\n", a, b);
//	return 0;
//}

//Ū�������ʲôʱ����Ҫ����ַ��ʲôʱ����Ҫ��

//дһ�����������ж�һ�����ǲ�������
#include<math.h>
//int prime(int a)
//{
//	int i;
//	int b = sqrt(a);
//	for (i = 2; i<=b; i++)
//	{
//		if (a % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	int c= prime(x);
//	if (c == 0)
//	{
//		printf("��������");
//	}
//
//	else if(c==1)
//	{
//		printf("������");
//	}
//
//	return 0;
//}




//int is_leep_year(int n)
//{
//	if (n % 4 == 0)
//	{
//		if (n % 100 != 0)
//			return 1;
//		else
//			return 0;
//	}
//	else if (n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}

//���ֲ�����������


//дһ��������ÿ����һ����������ͻ�ʹnum��ֵ����1

//int Plus(int *pa)
//{
//	*pa = *pa + 1;
//	return *pa;
//}
//
//
//
//
//int main()
//{
//	int num = 0;
//	int* pn = &num;
//	again:
//	Plus(pn);
//	printf("%d\n", num);
//	goto again;
//	return 0;
//}

int main()
{
	/*char arr1[20] = { 0 };
	char arr2[] = "bit";
	printf("%s", strcpy(arr1, arr2));*/

	printf("%d ", printf("%d ", printf("%d ", 43)));
	return 0;
}


//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ADD(int, int);
//	int c = ADD(a, b);
//	printf("%d", c);
//	return 0;
//}
//
//int ADD(int a, int b)
//{
//	return a + b;
//}


