#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//将输入的三个数按从大到小的顺序打印出来。
//int main()
//{
//	int a, b, c;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b)
//	{
//		a = a;
//		if (a > c)
//		{
//			a = a;
//			if (b > c)
//			{
//				;
//			}
//			else
//			{
//				c = c + b;
//				b = c - b;
//				c = c - b;
//			}
//		}
//		else
//		{
//			a = a + c;
//			c = a - c;
//			a = a - c;
//		}
//	}
//	else
//	{
//		a = a + b;
//		b = a - b;
//		a = a - b;
//		if (b > c)
//		{
//			;
//		}
//		else 
//		{
//			c = c + b;
//			b = c - b;
//			c = c - b;
//			if (a > b)
//			{
//				;
//			}
//			else
//			{
//				a = a + b;
//				b = a - b;
//				a = a - b;
//			}
//		}
//
//	}
//
//
//	printf(" % d % d % d", a,b,c);
//	return 0;
//}
//思路二：一下子直接比较两个大小，先a和b比，将大的放在a，再a和c比，将大的放在a。//计算机思想比较时已经将大的数字放进去了，a是个变量！！！！！

//打印三的倍数（1，100）

//int main()
//{
//	int i = 3;
//	for (i = 3; i < 100; i += 3)
//	{
//		printf("%d\n", i);
//	}
//		return 0;
//}

//给定两个数，求两个数的最大公约数。

//int main()
//{
//
//	int a, b;
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		int tem = a;
//		int a = b;
//		int b = tem;
//	}
//	int max;
//	int i = 0;
//	for (i = 0;1; i++)
//	{
//		max = b - i;//直接从两数中较小的那个数开始减小，这样找到的公约数一定是最大的。
//		if (a % max == 0 && b % max == 0)
//		{
//			break;
//		}
//	}
//	printf("最大公约数=%d", max);
//
//return 0;
//}
//辗转相除法
//24%18=6
//18%6=0那6就是最大公约数

//int main()
//{
//	int i = 1000;
//	for (i = 1000; i <= 2000; i += 4)
//	{
//		printf("%d\n", i);
//
//	}
//
//
//
//	return 0;
//}

//打印100-200之间的素数
//
//int main()
//{
//	int i = 100;
//	int b=0;
//	for (i = 100; i<=200; i++)
//	{
//		for (b = 1; b < i; b++)
//		{
//			int max = i - b;
//			int c = i % max;
//			if (c == 0 && max == 1)
//			{
//				printf("%d\n", i);
//				break;
//			}
//			else if (c == 0 && max > 1)
//			{
//				break;
//			}
//			else if (c != 0)
//			{
//				continue;
//			}
//		}
//	}
//	return 0;
//}
//方法2：判断2-（i-1）之间是否有数是否能被i整除    判断素数
//判断是否的思想 
//先int i=1
//然后在一个事件中看这个事件是真是假，若果是假那将i=0
//之后只要看i=1/0就能判断这个事件的真假。
//若a=b*c 那b、c中至少有一个数<=a的平方根
//所以上述代码的简化思路就是，只要看2-sqrt（a） 之间有没有数能够整除a就行，相当于行程缩短了一半。（sqrt()是开平方函数其头文件--math.h）
//再简化，因为偶数不可能是素数，所以直接在最大的for里变成for(i=101;1;i+=2)


//goto语句************
//关机程序
//cmd中的关机指令 ---shutdown -s -t 60
//-s -t 60 依次是设置关机-设置时间关机-60s关机
//shutdown -a 取消关机
//int main()
//{
//	//关机在c语言中
//	//system()--专门执行系统命令
//	system("shutdown -s -t 10");
//again:
//	printf("请注意，您的电脑将会在60s后关机，请输入'我是猪'取消关机\n");
//	char ch[20] = { 0 };
//	scanf("\n%s", ch);
//	if (strcmp(ch, "我是猪")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}


//memset设置内存块

//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s", arr);
//	return 0;
//}


