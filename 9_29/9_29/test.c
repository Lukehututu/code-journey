#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
//指针进阶

//1.字符指针

//int main()
//{
//
//	char* ps = "hello bit";
//	printf("%c\n", *ps);
//	printf("%s\n", ps);
//	return 0;
//}




//int main()
//{
//	char str1[] = "hello bit.";
//	char str2[] = "hello bit.";
//	const char* str3 = "hello bit.";
//	const char* str4 = "hello bit.";
//	if (str1 == str2)
//		printf("str1 and str2 are same\n");
//	else
//		printf("str1 and str2 are not same\n");
//	if (str3 == str4)
//		printf("str3 and str4 are same\n");
//	else
//		printf("str3 and str4 are not same\n");
//	return 0;
//}



//指针数组


//int main()
//{
//	//int*  arr[3];存放指针的数组
//	int a[] = { 1,2,3,4,5 };
//	int b[] = { 2,3,4,5,6 };
//	int c[] = { 3,4,5,6,7 };
//	int* arr[] = { a,b,c };//数组里全放的指针（不同数组的首地址）模拟了一个二维数组  
//	return 0;
//}


//int main()
//{
//	float b = 9.0f;
//	int* p = (int*)&b;
//	printf("%d\n",*p);
//
//	return 0;
//}



//数组指针-----是一种指向数组的指针


//int main()
//{
//	int arr[10] = { 0 };
//	int(*parr)[10] = arr;
//	double* d[5];
//	double* (*pd)[5];
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}

//1.sizeof(arr)表示的是整个数组
//2.&arr也表示整个数组
//其他都是首元素地址

//二维数组的数组名表示第一行数组！！！！！
//例如：int arr[3][5]  理解为有三个元素每一个都是a[5],第一个元素就是第一个数组。
//*（*（p+i）+j）   先p+i来找第几行，解引用拿到这行首元素的地址，再+j得到具体的第几行第几列的元素的地址，再解引。   



//int i;
//int main()
//{
//	i--;
//	if (i > sizeof(i))
//		printf(">\n");
//	else
//		printf("<\n");
//
//	return 0;
//}

//计算又a组成的前n项之和：
//Sn=a+aa+aaa+…………

//
//int add(int x, int y)
//{
//	int Sn = 0;
//	int c = x;
//	for (int i = 0; i < y; i++)
//	{
//		Sn = Sn + c;
//		c = 10 * c + x;
//	}
//	return Sn;
//}
//
//
//
//
//
//int main()
//{
//	int a = 2;
//	int n = 5;
//	add(a, n);
//	printf("%d\n", add(a, n));
//	return 0;
//}


//打印水仙花数（水仙花数，一个n位数，其各位数字的n次方之和恰好等于这个数本身，如153=1^3+5^3+3^3）

//int Count(int i)
//{
//	int count = 0;
//	while (i)
//	{
//		i=i / 10;
//		count++;
//	}
//	return count;
//}
//int add(int i, int count)
//{
//	int sum = 0;
//	int j = 0;
//	for (j = 0; j < count; j++)
//	{
//		sum = sum + pow((i % 10), count);
//		i=i / 10;
//	}
//	return sum;
//}
//
//int main()
//{
//	int i;
//	for (i = 0; i < 100000; i++)
//	{
//		if (i == add(i, Count(i)))
//			printf("%d\n", i);
//	}
//
//	return 0;
//}


