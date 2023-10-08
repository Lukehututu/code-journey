#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//自定义函数
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
// 函数更精简的写法
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

//交换两个整形变量的内容
//当函数不需要返回什么值，那他的前缀就写void

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
//主函数中a.b的地址和swap中的地址不一样。s

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
//	printf("交换前：%d %d\n", a, b);
//	swap(&a, &b);
//	printf("交换后：%d %d\n", a, b);
//	return 0;
//}

//弄清楚函数什么时候需要传地址，什么时候不需要。

//写一个函数可以判断一个数是不是素数
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
//		printf("不是素数");
//	}
//
//	else if(c==1)
//	{
//		printf("是素数");
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

//二分查找有序数列


//写一个函数，每调用一次这个函数就会使num的值增加1

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


