#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//#define MAX_SIZE  2+3
//
//struct _Record_struct
//{
//	unsigned char  a : 4;
//	unsigned char  b : 2;
//	unsigned char  c;
//	unsigned char  d : 1;
//}*ENV_ALARM_RECORD;
//
//
////struct _Record_struct* pt = (struct _Record_struct*)malloc(sizeof(struct _Record_struct) * 2+3);
//int main()
//{
//	int sz = sizeof(struct _Record_struct) * MAX_SIZE;
//	printf("%d", sz);
//
//	return 0;
//}


//int main()
//{
//
//	unsigned char puc[4];
//	struct tagPIM
//	{
//		unsigned char ucPim1;
//		unsigned char ucData0 : 1;
//		unsigned char ucData1 : 2;
//		unsigned char ucData2 : 3;
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}



//int main()
//{
//	union 
//	{
//		short k;
//		char i[2];
//	}*p,a;
//	p = &a;
//	p->i[0] = 0x39;
//	p->i[1] = 0x38;
//	printf("%x\n", a.k);
//	return 0;
//}



//atoi 函数的实现
#include<ctype.h>
//int my_atoi(const char* p)
//{
//
//	//空指针
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	int sum = 0;
//	char* tmp = p;
//	//跳过空白字符
//	while (isspace(*tmp))
//	{
//		tmp++;
//	}
//	while (*tmp!='\0')
//	{
//		if (*tmp == '-')
//		{
//			tmp++;
//		}
//		sum = 10*sum + (*tmp - '0');
//		tmp++;
//	}
//	if (*p == '-')
//	{
//		sum = 0 - sum;
//	}
//	
//	return sum;
//}
////异常情况分析：
////空指针
////空字符串
////或者给了字母字符
////给的整形很大
//
//int main()
//{
//	char str[20] = "-8312313";
//	printf("%d\n", my_atoi(str));
//return 0;
//}


//找单身狗 一个数组中只有两个数字是出现一次，其他所有数字都出现了两次，编写一个函数找出这两个数字。

//void find_single(int* p, int* r, int sz)
//{
//
//	int i = 0;
//	int c = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = p[i];
//		int j = 0;
//		int cnt = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (tmp == p[j])
//			{
//				cnt++;
//			}
//		}
//		if (cnt == 1)
//		{
//			r[c] = tmp;
//			c++;
//		}
//		if (c == 2)
//			break;
//	}
//}
//
////方法2；分组异或
////当只找一个不同，其他都是成对的时候可以全部一起异或，因为相同的数异或为0，0和任何数异或都为它本身。
//
//
//
//
//
//
//int main()
//{
//
//	int arr[] = {1,2,3,4,5,6,1,2,3,4};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret[2] = { 0 };
//	find_single(arr,ret,sz);
//	printf("%d\n", ret[0]);
//	printf("%d\n", ret[1]);
//	return 0;
//}


//struct A
//{
//	int a;
//	short b;
//	int c;
//	char d;
//};
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//
//
//int main()
//{
//	struct A s = { 1,1,1,1 };
//	char* ps = (char*)&s;
//	int count = 0;
//	int step = sizeof(struct A);
//	while (step--)
//	{
//		if (*ps == 1)
//		{
//			printf("%d\n", count);
//		}
//		ps++;
//		count++;
//	}
//	printf("%d\n", OFFSETOF(struct A, a));
//	printf("%d\n", OFFSETOF(struct A, b));
//	printf("%d\n", OFFSETOF(struct A, c));
//	printf("%d\n", OFFSETOF(struct A, d));
//
//
//
//	return 0;
//}



//写一个宏，实现将一个数的2进制形式的奇数位和偶数位调换
//
//#define SWAP(x)  (((x & 0xaaaaaaaa)>>1) +((x & 0x55555555)<<1))
//
//
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", SWAP(a));
//
//
//	return 0;
//}

//int main()
//{
//    int arr[20] = { 0 };
//    int i = 0;
//    int x = 0;
//    scanf("%d", &x);
//    if (x < 0)
//    {
//        printf("false\n");
//        return 0;
//    }
//    while (x)
//    {
//        arr[i] = x % 10;
//        i++;
//        x = x / 10;
//    }
//    int left = 0;
//    int right = i - 1;
//    while (left <= right)
//    {
//        if (arr[left] != arr[right])
//            break;
//        left++;
//        right--;
//    }
//    if (left>right)
//    {
//        printf("true");
//    }
//    else
//        printf("false");
//
//        return 0;
//}

//
//int main()
//{
//	int x = 0 ;
//	scanf("%d", &x);
//   if(x < 10 && x >= 0)
//		return ture;
//   else if (x < 0)
//   return false;
//   int b = 0;
//   while (x)
//   {
//	   b = 10 * b + x % 10;
//	   x = x / 10;
//   }
//   if (x == b)
//	   return ture;
//   else
//	   return false;
//
//
//
//
//}
