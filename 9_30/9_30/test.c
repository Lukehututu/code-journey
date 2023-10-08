#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//喝汽水问题
//一瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以喝多少汽水。
//int main()
//{
//	int price = 1;
//	int w = 6;
//	int sum = 0;
//	sum = w / price;
//	int n = w / price;
//	int count=0;
//	while (n != 1 && n != 0)
//	{
//		sum = sum + n / 2;
//		n = n / 2 + n % 2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//调整数组中奇数和偶数的位置，使奇数位于前半部分，偶数位于后半部分。


//int main()
//{
//	int arr[10] = { 4,2,5,6,3,8,7,9,4,1 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 0)
//		{
//			int j = i;
//			for (j = i; j < 10; j++)
//			{
//				if (arr[j] % 2 == 1)
//				{
//					int tmp = arr[i];
//					arr[i] = arr[j];
//					arr[j] = tmp;
// //可以从前往后找偶数，从后往前找奇数，这样只走了一轮整个数组，但我的方法走了很多次数组。
//				}
//
//			}
//		}
//
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ",arr[i]);
//
//	}
//	return 0;
//}

//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	//a和b在运算时就要进行整形提升，都是无符号，都补0；
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}

//int main()
//{
//	unsigned int a = 0x1234;
//	//存进内存实际上是 00 00 12 34
//	//而又是大端存储，因此上是 00 00 12 34
//	unsigned char b = *(unsigned char*)&a;
//	//unsigned char* 只能读取一个字节，因此只能读取00放入了b中，因此b就是0x00
////求在32位大端模式处理器上变量b等于
//	return 0;
//}


//打印杨辉三角
// 
// 方法1 用二项式定理解决
//int fac(int x)
//{
//	int i = 0;
//	int sum = 1;
//	for (i = 0; i < x; i++)
//	{
//		sum = sum * (x - i);
//	}
//	return sum;
//}
//
//
//int num(int no,int col)
//{
//	return fac(col) / (fac(no) * fac(col - no));
//}
//
//int main()
//{
//	int i = 1;
//	printf("1\n");
//	for (i = 1;i<10; i++)
//	{
//		int j = 1;
//		printf("1 ");
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d ", num(j,i));//num(j)算每一项系数的函数
//		}
//		printf("\n");
//	}
//
//	return 0;
//}


//2.用二项式定理来解决


//逻辑判断题目：找凶手
//A说：不是我   B说:是C   C说：是D  D说：C在胡说
//已知三个人说了真话，一个人说了假话；

//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int d = 4;
//	int n=1;
//    //判断
//	for (n = 1; n <= 4; n++)
//	{
//		int count = 0;
//		if (n != a)
//		{
//			count++;
//		}
//		if(n==c)
//		{
//			count++;
//		}
//		if (n == d)
//		{
//			count++;
//		}
//		if (n !=d )
//		{
//			count++;
//		}
//		if (count == 3)
//			break;
//	}
//	switch (n)
//	{
//	case 1:
//		printf("凶手是A\n");
//		break;
//	case 2:
//		printf("凶手是B\n");
//		break;
//
//	case 3:
//		printf("凶手是C\n");
//		break;
//	case 4:
//		printf("凶手是D\n");
//		break;
//	}
//	return 0;
//}


//方法2：

//int main()
//{
//	char killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
//			printf("凶手是%c ", killer);
//	}
//	return 0;
//}


//猜名次 5位运动员参加了比赛
//A说：B第二，我第三
//B说，我第二，E第四
//C说：我第一，D第二
//D说：C最后，我第三
//E说：我第四，A第一
//比赛结束后，每位选手都只说对了一半，请编程来确定比赛的名次

#include<time.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5;b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ( a*b*c*d*e==120 && a+b+c+d+e==15)
//						{
//							if (((b == 2) + (a == 3) == 1)
//								&& ((b == 2) + (e == 4) == 1)
//								&& ((c == 1) + (d == 2) == 1)
//								&& ((c == 5) + (d == 3) == 1)
//								&& ((e == 4) + (a == 1) == 1))
//							{
//								printf("a=%d b=%d c=%d d=%d e=%d \n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//
//		}
//		
//	}
//	return 0;
//}
//

void menu()
{

	printf("*************************\n");
	printf(" 1:add 2:sub \n");
	printf(" 3:mul 4:div \n");
	printf("*************************\n");
	printf("请选择：");
}


int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}
int mul(int a, int b)
{
	return a * b;
}
int div(int a, int b)
{
	return a / b;
}

int calc(int (*p)(int, int))
{
	int x = 0;
	int y = 0;
	printf("请输入数字：");
	scanf("%d%d", &x, &y);
	return p(x, y);
}

int main()
{
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("%d\n",calc(add));
			break;
		case 2:
			printf("%d\n",calc(sub));
			break;
		case 3:
			printf("%d\n",calc(mul));
			break;
		case 4:
			printf("%d\n",calc(div));
			break;
		default:
			break;

		}
	
	
	} while (input);

	return 0;
}