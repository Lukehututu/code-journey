#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>


//输入一个数字，把这个数字的每一位都打印出来
//例如1234 打印1 2 3 4
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	unsigned int num=0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}

//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//
//	//递归最好不要搞++
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d", my_strlen(arr));
//	return 0;
//}

//int Fac(int n)
//{
//	if (n > 2)
//	{
//		return   Fac(n - 1)+Fac(n-2);
//		//如果算出来的数字不保存，那每一个数都会重复计算好几次。
//	}
//	else if (n == 2||n==1)
//	{
//		return 1;
//	}
//	//效率太低，算50位都要好几分钟。
//}
////要考虑使用合适的方法，不一定递归就简单，还要考虑计算量。
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", Fac(n));
//	return 0;
//}


//汉诺塔问题
//青蛙跳台阶问题
