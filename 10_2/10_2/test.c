#define _CRT_SECURE_NO_WARNINGS 1
#include<time.h>
#include<stdio.h>
#include<string.h>
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数是否存在
//

//int find_num (int arr[3][3], int* px, int* py,int k)
//{
//	while (*px < 3 && *py >=0)
//	{
//		if (arr[*px][*py] < k)
//		{
//			(*px)++;
//		}
//		else if (arr[*px][*py] > k)
//			(*py)--;
//		else if (arr[*px][*py] == k)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{   //O(1)指我查找的次数是常数次，跟n无关。
//	///查找的个数最坏的情况下是N次（数组的个数）或者n的倍数次
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	//1 2 3
//	//4 5 6
//	//7 8 9
//	int x = 0;
//	int y = 2;
//	int k = 17;
//	int ret=find_num(arr, &x, &y,k);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标为：%d，%d\n",x,y);
//	}
//	else if(ret==0)
//	{
//		printf("没找到");
//	}
//
//	return 0;
//}

//字符串左旋
//实现一个函数，可以左旋字符串的k个字符
//例如：
//ABCD左旋转1个字符得到BCDA
//ABCD左旋转2个字符得到CDAB

//void left_roll(char p[], int k,int right)
//{
//	int i = 0;
//	
//	for (int j = 0; j < k; j++)
//	{
//		char tmp = *p;
//		for (i =0; i < right; i++)
//		{
//			p[i] = p[i + 1];
//		}
//		p[right] = tmp;
//	}
//}
//
//
//
//
//int main()
//{
//	char p[]="ABCD";
//	int k = 3;
//	int sz = strlen(p)-1;
//	left_roll(p, k,sz);
//
//
//	return 0;
//}


//方法二：三步调转法（整体翻转的方法，把左边右边看成整体反转的方法）

//写出一个判断一个字符串是否是由一个已知的字符串旋转的得到的函数。

//strcat(des,string)字符串追加函数
//strncat(des,string,num)可以选择追加多少个
//strstr(const str,const str)判断一个字符串是否是另一个字符串的子串。（如果找到了，就会返回那个首字符的指针，否则就返回空指针）

//方法：


//int is_string_rotate(char* str1, char* str2)
//{
//	if (strlen(str1) == strlen(str2))
//	{
//		strcat(str1, str2);
//		char* p = strstr(str1, str2);
//		return p != NULL;
//	}
//	else
//		return 0;
//}
//
//
//
//int main()
//{
//	char p1[20] = "AABCD";
//	char p2[] = "BCDA";
//	int ret=is_string_rotate(p1,p2);
//	if (ret == 1)
//	{
//		printf("ture\n");
//	}
//	else
//		printf("false\n");
//
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1122;
//
//
//	return 0;
//}




