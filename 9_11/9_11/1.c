#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
//指针变量
//int main()
//{
//	int num = 10;
//	int* p = &num;
//
//
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;   //此处*p=arr是什么意思？
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
////输出：1 2 3 4 5 6 7 8 9 10


//int main()
//{
//	int age = 60;
//	if (age < 18)
//		printf("少年");
//	else if (18<=age&&age<60)
//	{
//		printf("青年");
//
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("haha");
//	     else
//		printf("hehe");
//	return 0;
//}


//int main()
//{
	//if (condition)
	//{
	//	return x,
	//}

	//return y;
	//return 0;
//
//	if (condition)
//	{
//		return x;
//	}
//	else
//		return y;
//	return 0;
//}
//判断一个数是否为奇数
	//int main()
	//{
	//	int t;
	//	scanf("%d", &t);
	//	int a = t % 2;
	//	if (a == 1)
	//	{
	//		printf("这个数是奇数");
	//	}
	//	else
	//		printf("这个数是偶数");
	//	return 0;
	//}


//int main()
//	{
//		int t=1;
//		for (t = 1; t <= 100; t++)
//		{
//			if (t%2==1)
//			{
//				printf("%d\n", t);
//			}
//		}
//		return 0;
//	}

//int main()
//{
//	int t = 1;
//	for (t = 1; t <= 100; t+=2)
//	{
//		/*int a = t % 2;
//		if (a == 1)
//		{
//			printf("%d\n", t);
//		}*/
//		printf("%d\n", t);
//	}
//	return 0;
//}



//int main()
//{
//
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//       case 1:
//           printf("星期一");
//		break;
//	   case 2:
//		   printf("星期二");
//		   break;
//	   case 3:
//		   printf("星期三");
//		   break;
//	   case 4:
//		   printf("星期四");
//		   break;
//	   case 5:
//		   printf("星期五");
//		   break;
//	   case 6:
//		   printf("星期六");
//		   break;
//	   case 7:
//		   printf("星期日");
//		   break;
//	   default:
//		   printf("输入错误");
//		   break;
//
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i <= 9)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	char password[20] = {0};
//	printf("请输入密码：");
//	scanf("%s", password);
//	int a = getchar();
//	while ((a = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认密码（Y/N）");
//	int ch = getchar();
//	if (ch=='Y')
//		printf("确认成功");
//	else
//		printf("确认失败");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//计算n的阶乘

//第一题：int main()
//{
//	int n, i;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 0;i<n; i++)
//	{
//		sum = sum*(n-i);
//	}
//	printf("%d", sum);
//	return 0;
//}

//第二题：计算1！+2！+……+10！ 答案=4037913
//int main()
//{
//	int  i,j;
//	int sum1 = 0;
//	for (j = 1; j < 11; j++)
//	{
//		int sum2 = 1;   //*****很重要
//		for (i = 0; i < j; i++)
//				{
//					sum2 = sum2*(j-i);
//				}
//		sum1 += sum2;
//	}
//	printf("%d", sum1);
//	return 0;
//}

//第三题：
//int binsearch(int x, int v[], int n)
//{
//	int i;
//	v[n] > v[n - 1];
//	for (i = 0; i < n; i++)
//	{
//       if(x==v[i])
//	   return v[i];
//	}
//	return i;
//}
//
//int main()
//{
//	int x, n;
//	int v[] = { 0 };
//	scanf("%d%s%d", &x, v, & n);
//	int b = binsearch(x,v[n],n);
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int v[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int right = sizeof(v) / sizeof(v[0])-1;
//	int mid = (right + left) / 2;
//	//要去找跟7相等的数组元素的下标
//	while (left <= right)
//	{
//		if (k > v[mid])
//		{
//			left = mid + 1;
//			mid = (right + left) / 2;
//		}
//		else if (k < v[mid])
//		{
//			right = mid - 1;
//			mid = (right + left) / 2;
//		}
//		else if(k=v[mid])
//		{
//			printf("数组的下标=%d", mid);
//			break;
//		}
//	}
//	while (left >right)
//	{
//		printf("找不到");
//		break;
//
//	}
//	return 0;
//}



//int main()
//{
//	int i = 1;
//    while(i<4)
//    { 
//		switch (i)
//		{
//		case 1:
//			printf("h###o\n");
//			break;
//		case 2:
//			printf("he#lo\n");
//			break;
//		case 3:
//			printf("hello\n");
//			break;
//		}
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "hello to bit!!!!!!";
//	char arr2[] = "##################";
//	int i = 0;
//	int left = 0;
//	int right = strlen(arr1)-1;
//    while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//	Sleep(300);
//	system("cls");
//		left++;
//		right--;
//	}
//	int a = strlen(arr2);
//	printf("%d", a);
//	return 0;
//}

//int main()
//{
//	char password[20] = {0};
//	char right = "123456";
//	int i = 0;
//	while (i < 3)
//	{
//		scanf("%s", &password);
//		if (strcmp(password,"123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;	
//		}
//		else 
//			printf("登陆失败，请重新输入\n");
//		i++;
//	}
//	while (i == 3)
//	{
//		printf("登陆失败且不可再登录\n");
//		break;
//	}
//		return 0;
//}

//写一个猜数字的游戏

#include <stdlib.h>
#include <time.h>

//void game()
//{
//	int rod=rand();
//}
//
//
//
//int main()
//{
//	srand((unsigned int)time(NULL));
//	int rod=0;
//	int a = 0;
//	printf("********欢迎进入游戏********\n");
//	printf("******** 1>进入游戏 ********\n");
//	printf("******** 0>退出游戏 ********\n");
//	printf("****************************\n");
//	printf("*********  请选择   ********\n");
//	printf("请输入：");
//	scanf("%d", &a);
//	if (a == 1)
//	{
//		int guess = 0;
//		int rod = rand() % 100 + 1;
//		while (1)
//		{
//			printf("请开始猜数字：\n");
//		    scanf("%d", &guess);
//			//调用函数产生随机数
//			//用户输入数字
//
//			if (guess> rod)
//			{
//				printf("猜大了\n");
//			}
//			else if (guess < rod)
//			{
//				printf("猜小了\n");
//			}
//			else
//			{
//				printf("猜对了\n");
//				break;
//			}
//		}
//	}
//	else
//		return 0;
//	return 0;
//}

int menu()
{
	printf("********欢迎进入游戏********\n");
	printf("******** 1>进入游戏 ********\n");
	printf("******** 0>退出游戏 ********\n");
	printf("****************************\n");
	printf("*********  请选择   ********\n");
	printf("请输入：");
}
void game()
{
	int guess = 0;
	int ret = rand()%100+1;
	while (1)
	{
		printf("请开始猜数字：\n");
		scanf("%d", &guess);
		//调用函数产生随机数
		//用户输入数字
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了\n");
			break;
		}
	}
}

int main() 
{
	srand((unsigned int)time(NULL));//设置随机数起点
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误请重新输入！\n");
			break;
		}
	} while (input);



	return 0;
}