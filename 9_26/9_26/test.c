#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//����������������С����������������Լ��Ȼ��a*b/q��


//int cau_min(int a,int b)
//{
//	int i = 0;
//	if (b > a)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	//����ֱ����Ŀ��������  int min= a<b?a:b;
//	for (i = 0; i < b ; i++)
//	{
//		int q = b - i;
//		if (a % q == 0 && b % q == 0)
//			return a * b / q;
//	}
//	
//	return b*a;
//}
//
//
//
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//
//    printf("��С������Ϊ�� %d",cau_min(a, b));
//
//	return 0;
//}
//����2

//int main()
//{
//
//	int a, b;
//    scanf("%d %d", &a, &b);
//	int min = a < b ? a : b;
//	int max = a > b ? a : b;
//	int i = 1;
//	for (i =1;; i++)
//	{
//		if (min * i % max == 0)
//		{
//			printf("��С������Ϊ��%d\n", min * i);
//			break;
//		}
//	}
//	return 0;
//}


//������ת��
//�������ַ�������  abc def
// Ȼ��ÿ����������  fed cba
// //Ȼ���ٵ�������  def abc
//gets()

//���������ַ�����������
// I like BeiJing.
// Beijing. like I


//void reverse(char arr[],char* left,char* right)
//{
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void reverse_words(char arr[])
//{
//	char* start = arr;
//	while (*start)
//	{
//		char* p = start;
//		int cnt = 0;
//		while (*p != ' ' && *p!='\0')
//		{
//			cnt++;
//			p++;
//
//		}
//		char* end = start + cnt - 1;
//		reverse(arr, start, end);
//		start = end + 2;
//		if (*(end + 1) == '\0')
//			break;
//	}
//
//}
//
//int  main()
//{
//	char arr[20] = { 0 };
//	gets(arr);
//	char* left = arr;
//	char* right = arr+strlen(arr) - 1;
//	reverse(arr,left,right);
//	printf("%s\n", arr);
//	reverse_words(arr);
//	printf("%s\n", arr);
//	return 0;
//}




//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//
//
//
//	return 0;
//}


//������2��������3�ֱ�ʾ��ʽ



//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("С�˴洢\n");
//
//	}
//	else
//		printf("��˴洢\n");
//
//	return 0;
//}


//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a=%d b=%d c=%d", a, b, c);
//	return 0;
//
//}

//int main()
//{
//	char a = -128;
//	//ԭ��10000000000000000000000010000000
//	//����11111111111111111111111101111111
//	//ԭ��11111111111111111111111110000000
//	//��Ϊ��char ���ԽضϺ�ֻ��10000000
//	//����Ϊchar���з�������������������λ
//	//������11111111111111111111111110000000
//	//��%u���޷���10���ƣ������Ϊ��ĵ�һ��1���Ƿ���λ��
//	//�������ӡ�Ľ������11111111111111111111111110000000��10����
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
//10000000 �ᱻֱ�ӽ���Ϊ-128


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 -4���� -127 -128 127 ���� 3 2 1 0 -1 -2 -3 -4���� -127 -128
//	//strlen()�����ַ������ȣ�һֱ�ҵ�\0�ͽ�������\0��ascllֵΪ0��˵�0�ͽ��� ��ֻ��128+127=255��
//	printf("%d", strlen(a));
//	return 0;
//}
//
//unsigned char i = 0;
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");
//	}
//	return 0;
//}

int main()
{
	int n = 9;
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num��ֵΪ��%d\n", n);
	printf("*pFloat��ֵΪ��%f\n", *pFloat);
	return 0;
}