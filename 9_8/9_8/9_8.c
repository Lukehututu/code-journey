#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//&&并且  a&&b 只有两个都为真才是真，有一个为假都是假。
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;
//	printf("%d", c);
//	return 0;
//}

//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a && b;
//	printf("%d", c);
//	return 0;
//}

//||或者  a||b，只要有一个是真则为真，全假才为假。

//int main()
//{
//	int a = 6;
//	int b = 0;
//	int c1= a || b;
//	printf("%d\n", c1);
//
//	a = b = 0;
//	int c2= a || b;
//	printf("%d\n", c2);
//
//
//	return 0;
//}


//exp1?exp2:exp3   如果exp1为真，则计算exp2，结果为exp2的结果，否则结果为exp3的结果。

//int main()
//{
//	int a = 2;
//	int b = 3;
//	int max;
//	max = a > b ? a : b;
//	printf("max=%d", max);
//	return 0;
//}

//typedef 类型重定义

//typedef unsigned int u_int;
//
//int main()
//{
//	unsigned int a;
//	u_int b;  //此时这两个起到同样的作用只是别名
//	return 0;
//}

//static   静态的


//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//
//	int i = 0;
//
//	while (i<10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//void test()
//{
//	static int a = 1;  //static 修饰局部变量
//	a++;
//	printf("%d ", a);
//}
//
//int main()
//{
//
//	int i = 0;
//
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//define定义常量

//#define MAX 1000
//
//int main()
//{
//	printf("%d", MAX);
//	return 0;
//}

//#define ADD(x,y)  (x+y)
//
//int main()
//{
//	printf("%d", 4 * ADD(2, 3));
//	return;
//}

//int main()
//{
//	int a = 10;
//	printf("%p", &a);
//	int* pa = &a;//pa是指针变量，专门存放地址
//	//int int 说明指针执行的对象是int类型的 
//	//*说明pa是指针变量
//	return 0;
//}

//int main()
//{
//	int a = 10;
//
//	int* pa = &a;
//
//	*pa = 20;
//
//	printf("%d", a);
//
//	return 0;
//}



//int main()
//{
//	printf("%d ", sizeof(int*));
//	printf("%d ", sizeof(char*));
//	printf("%d ", sizeof(double*));
//	printf("%d ", sizeof(float*));
//	printf("%d ", sizeof(long*));
//
//
//	return 0;
//}


//结构体(可以让c语言创造新的类型出来)

struct Stu
{
	char name[10];
	int age;
	double score;
};



int main()
{
	//结构体的创建和初始化
	//找到结构体的成员，访问成员用的.
	//结构体的基本访问
	struct Stu s = { "Luke",20,85.5 };
	printf("1:%s %d %lf", s.age, s.name, s.score);
	struct Stu* ps = &s;
	printf("2:%s %d %lf", (*ps).age, (*ps).name, (*ps).score);
	printf("3:%s %d %lf", ps->age, ps->name, ps->score);
	return 0;
}

//int Max(int x, int y) {
//	if (x>y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	int m = Max(x, y);
//	printf("m=%d", m);
//	return 0;
//}


//判断一个整数是否能被5整除
//int main()
//{
//	int M;
//	scanf("%d", &M);
//	int a = M % 5;
// 此处可以简化为 不要int a=M%5
// 直接if（M%5=0）
//	if (a==0)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//
//	return 0;
//}
