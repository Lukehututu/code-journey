#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序
//第一行输入一个整数(0≤N≤50)。

//第二行输入N个升序排列的整数，输入用空格分隔的N个整数。

//第三行输入想要进行插入的一个整数。

//int main()
//{
//	int  num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int arr[50] = { 0 };
//	for (i = 0; i < num; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	scanf("%d", &arr[num]);
//	for (i = 0; i < num + 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			
//			}
//		}
//
//	}
//	i = 0;
//	for (i = 0; i <= num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int  num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	int arr[50] = { 0 };
//	for (i = 0; i < num; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int m = 0;
//	scanf("%d", &m);
//	for (i = num - 1; i >= 0; i--)
//	{
//		if (arr[i] > m)
//		{
//			arr[i + 1] = arr[i];
//		}
//		if (arr[i] < m)
//		{
//			arr[i+1]=m;
//			break;
//		}
//
//	}
//	if (i < 0)
//	{
//		arr[0] = m;
//	}//没有考虑到要插入的元素是最小的时候的情况。
//	i = 0;
//	for (i = 0; i <= num; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


int main()
{
	fputc('b', stdout);
	fputc('i', stdout);
	fputc('t', stdout);

	return 0;
}