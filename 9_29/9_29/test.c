#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//ָ�����

//1.�ַ�ָ��

//int main()
//{
//
//	char* ps = "hello bit";
//	printf("%c\n", *ps);
//	printf("%s\n", ps);
//	return 0;
//}




//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}



//ָ������


//int main()
//{
//	//int*  arr[3];���ָ�������
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[] = { a,b,c };//������ȫ�ŵ�ָ�루��ͬ������׵�ַ��ģ����һ����ά����  
//	return 0;
//}


//int main()
//{
//	float b = 9.0f;
//	int* p = (int*)&b;
//	printf("%d\n",*p);
//
//	return 0;
//}



//����ָ��-----��һ��ָ�������ָ��


//int main()
//{
//	int arr[10] = { 0 };
//	int(*parr)[10] = arr;
//	double* d[5];
//	double* (*pd)[5];
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}

//1.sizeof(arr)��ʾ������������
//2.&arrҲ��ʾ��������
//����������Ԫ�ص�ַ

//��ά�������������ʾ��һ�����飡��������
//���磺int arr[3][5]  ���Ϊ������Ԫ��ÿһ������a[5],��һ��Ԫ�ؾ��ǵ�һ�����顣
//*��*��p+i��+j��   ��p+i���ҵڼ��У��������õ�������Ԫ�صĵ�ַ����+j�õ�����ĵڼ��еڼ��е�Ԫ�صĵ�ַ���ٽ�����   



//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//		printf(">\n");
//	else
//		printf("<\n");
//
//	return 0;
//}

//������a��ɵ�ǰn��֮�ͣ�
//Sn=a+aa+aaa+��������

//
//int add(int x, int y)
//{
//	int Sn = 0;
//	int c = x;
//	for (int i = 0; i < y; i++)
//	{
//		Sn = Sn + c;
//		c = 10 * c + x;
//	}
//	return Sn;
//}
//
//
//
//
//
//int main()
//{
//	int a = 2;
//	int n = 5;
//	add(a, n);
//	printf("%d\n", add(a, n));
//	return 0;
//}


//��ӡˮ�ɻ�����ˮ�ɻ�����һ��nλ�������λ���ֵ�n�η�֮��ǡ�õ��������������153=1^3+5^3+3^3��

//int Count(int i)
//{
//	int count = 0;
//	while (i)
//	{
//		i=i / 10;
//		count++;
//	}
//	return count;
//}
//int add(int i, int count)
//{
//	int sum = 0;
//	int j = 0;
//	for (j = 0; j < count; j++)
//	{
//		sum = sum + pow((i % 10), count);
//		i=i / 10;
//	}
//	return sum;
//}
//
//int main()
//{
//	int i;
//	for (i = 0; i < 100000; i++)
//	{
//		if (i == add(i, Count(i)))
//			printf("%d\n", i);
//	}
//
//	return 0;
//}


