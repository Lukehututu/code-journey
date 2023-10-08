#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//题目是找十个数中最大的那一个数
int main()
{
	//首先先给十个数创造一个放他们的空间
	int arr[10] = { 0 };
 //上面的{0}实际上是一个集合所以用大括号
	//再向空间里面放我的数
	int i = 0;
	for ( i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//再在空间里找最大的
	int max = arr[0];
	for ( i = 0; i <10; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	//再将他打印出来
	printf("max=%d", max);
	return 0;
}

 