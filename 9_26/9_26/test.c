#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//求两个正整数的最小公倍数（即求出最大公约数然后a*b/q）


//int cau_min(int a,int b)
//{
//	int i = 0;
//	if (b > a)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	//或者直接三目操作符，  int min= a<b?a:b;
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
//    printf("最小公倍数为： %d",cau_min(a, b));
//
//	return 0;
//}
//方法2

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
//			printf("最小公倍数为：%d\n", min * i);
//			break;
//		}
//	}
//	return 0;
//}


//三步翻转法
//先整个字符串逆序  abc def
// 然后每个单词逆序  fed cba
// //然后再单词逆序  def abc
//gets()

//将给出的字符串逆序排列
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


//整数再2进制中有3种表示形式



//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//	{
//		printf("小端存储\n");
//
//	}
//	else
//		printf("大端存储\n");
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
//	//原码10000000000000000000000010000000
//	//反码11111111111111111111111101111111
//	//原码11111111111111111111111110000000
//	//因为是char 所以截断后只有10000000
//	//又因为char是有符号整形所以提升符号位
//	//提升后；11111111111111111111111110000000
//	//而%u是无符号10进制，因此认为你的第一个1不是符号位，
//	//因此最后打印的结果就是11111111111111111111111110000000的10进制
//	printf("%u\n", a);
//	return 0;
//}

//int main()
//{
//	char a = 128;
//	printf("%u\n", a);
//	return 0;
//}
//10000000 会被直接解析为-128


//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 -4…… -127 -128 127 …… 3 2 1 0 -1 -2 -3 -4…… -127 -128
//	//strlen()是求字符串长度，一直找到\0就结束，而\0的ascll值为0因此到0就结束 就只有128+127=255个
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
	printf("n的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	*pFloat = 9.0;
	printf("num的值为：%d\n", n);
	printf("*pFloat的值为：%f\n", *pFloat);
	return 0;
}