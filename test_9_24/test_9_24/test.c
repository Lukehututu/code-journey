#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//void test1()
//{
//
//
//}
//void test()
//{
//
//	test1();
//}
//int main()
//{
//	test();
//
//	int i =0;
//	for (i =0; i <= 10; i++)
//	{
//		test();
//	}
//
//	return 0;
//}

//
//int main()
//{
//	int i = 0;
//	int sum = 0;//保存最终结果
//	int n = 0;
//	int ret = 1;//保存n的阶乘
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i <= 12; i++)
//	{
//		arr[i] = 0;
//		printf("hehe\n");
//	}
//	return 0;
//}


//模拟strcpy

//初级方法

//void str_cpy(char dest[], char src[])
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}
 
 
//void str_cpy(char dest[], char src[])
//{
//	while (*dest++=*src++)
//	{
//		;
//	}
//}



void str_cpy(char* dest,const char* src)
{
	assert(*src!=NULL);//断言
	while (*dest++ = *src++)
	{
		;
	}

}



int main()
{
	char arr1[20] = "xxxxxxxxxxxxxx";
	char arr2[] = "hello";
	str_cpy(arr1,arr2);
	printf("%s\n", arr1);


	return 0;
}

