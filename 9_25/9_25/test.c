#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<assert.h>
#include<string.h>

//char* str_cpy(char* dest, const char* src)
//{
//	assert(*src != NULL);//断言
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//
//int main()
//{
//	char arr1[20] = "xxxxxxxxxxxxxx";
//	char arr2[] = "hello";
//	str_cpy(arr1, arr2);
//	printf("%s\n", str_cpy(arr1, arr2));
//
//
//	return 0;
//}




//模拟实现strlen
// const    assert

//size_t无符号整型     int是有符号的

//int my_strlen(const char* arry)//或者命名为MyStrlen  两个单词分别首字母大写，或者就两个都小写但是_隔开。
//{
//	int count = 0;
//	//assert(*arry != NULL);
//	assert(arry != NULL);         //应当是断言指针不等于空指针，而不是解引用后的。
//	//assert(arry);   //这样写也可以，arry等于\0则为假则也会报错。
//	while (*arry++)
//	{
//		//arry++;
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char arr[] = "abcndesda";
//	/*my_strlen(arr);*/
//	printf("%d\n", strlen(arr));
//	return 0;
//}





//计算两个整数二进制不同位的个数
//int cau_dif(int x, int y)
//{
//	int count = 0;
//	int z = x ^ y;
//	while (z)
//	{
//		if (z % 2 == 1)
//		{
//			count++;
//		}
//		z=z >> 1;
//	}
//
//	return count;
//}
//
//
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	printf("%d", cau_dif(a, b));
//	return 0;
//}





//打印整数二进制的奇数位和偶数位

//void print_odd(int x)
//{
//	printf("奇数位序列：");
//	int arr[16] = {5};
//	int i = 0;
//	while (x)
//	{
//		if (x & 1)
//		{
//			arr[i] = 1;
//		}
//		else
//		{
//			arr[i] = 0;
//		}
//		i++;
//		x = x >> 2;
//	}
//	for(i = 15; i >=0; i--)
//    {
//		if(arr[i]==1 ||arr[i]==0)
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//void print_even(int y)
//{
//	y = y >> 1;
//	printf("偶数位序列：");
//	int arr[15] = { 5 };
//	int i = 0;
//	while (y)
//	{
//		if (y&1)
//		{
//			arr[i] = 1;
//		}
//		else
//		{
//			arr[i] = 0;
//		}
//		y = y >> 2;
//	}
//	for (i = 31; i >= 0; i--)
//	{
//		if (arr[i] == 1 || arr[i] == 0)
//			printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//
//int main()
//{
//
//	int a = 0;
//	printf("请输入一个整数：");
//	scanf("%d", &a);
//	print_odd(a);
//	print_even(a);
//	return 0;
//}








//测试一个数二进制位有几个1

//int Numberof1(int x)
//{
//	int count = 0;
//	int i = 1;
//	while (x)
//	{
//		x = x & (x - 1);  //重点 新方法！！！！！！！！！！！！！！！！！！！！
//		count++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	int a = 10;
//	printf("%d", Numberof1(a));
//	return 0;
//}


int main()
{
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("%d %d", a, b);



	return 0;
}