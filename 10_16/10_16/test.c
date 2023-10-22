#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int adds(int x, int y)
//{
//	static int m = 0, n = 3;
//	n *= ++m;
//	m = n % x + y++;
//	return m;
//}
//
//int main()
//{
//	int a = 5, b = -1, c;
//	c = adds(a, b);
//	printf("%d\n", c);
//	c = adds(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//int main()
//{
//	int a[5] = { 2,4,6,8,10 },*p,**k;
//	p = a;
//	k = &p;
//	printf("%d\n", *(p++));
//	printf("%d\n", **k);
//
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 1;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//			break;
//		if (b % 3 == 1)
//		{
//			b += 3;
//			continue;
//		}
//		b -= 5;
//	}
//
//	printf("%d", a);
//
//	return 0;
//}

//char* addBinary(char* a, char* b)
//{
//	//用计算机语言描述2进制
//	int c = *(int*)a + *(int*)b;
//	char arr[10] = { 0 };
//	int i = 0;
//	//把每一位都卸下来了
//	while (c)
//	{
//		arr[i] = c % 10;
//		i++;
//		c /= 10;
//	}
//	//2进制
//	int lim = i;
//	for (i = 0; i < lim; i++)
//	{
//		if (arr[i] > 1)
//		{
//			arr[i + 1] = arr[i] / 2;
//			arr[i] %= 2;
//		}
//	}
//	int right = i;
//	int ret = (int)0;
//	for (i = right - 1; i >= 0; i--)
//	{
//		ret = 10 * ret + arr[i];
//	}
//	return &ret;
//}

#include<string.h>
//char* addBinary(char* a, char* b)
//{
//	char sum[20] = { 0 };
//	//把每一位都卸下来了
//	int len_a = strlen(a);
//	int len_b = strlen(b);
//	int dis = len_a - len_b;
//	if (len_a > len_b)
//	{
//		dis = dis;
//		int i = 0;
//		for (i = 0; i < dis; i++)
//		{
//			b[i+dis]=b
//		}
//		for (i = len_a-1; i >= 0; i--)
//		{
//			sum[i]=a[i]
//
//		}
//	}
//
//}
//
//int main()
//{
//	char a[] = "1010";
//	char b[] = "1011";
//	printf("%d", *addBinary(a, b));
//	return 0;
//}


int main()
{
	


	return 0;
}