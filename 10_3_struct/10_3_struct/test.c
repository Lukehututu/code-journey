#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//struct book //如果book这里没有就是匿名结构体类型
//{
//	char name[20]; //结构体标签也可以省略（name这些）
//	int price;
//	char id[20];
//}b1,b2,b3;        //这三个都是全局变量
//
//
//int main()
//{
//	struct book b4;   //这三个都是局部变量
//	struct book b5;
//	struct book b6;
//
//
//	return 0;
//}


//
//struct book
//{
//	char name[20];
//	int price;
//	char id[20];
//}b1;
//
//struct c
//{
//	int a;
//	float c;
//	struct book q;
//};
//
//int main()
//{
//	struct book b4 = { "bo1",20,1000123};
//	struct c cs = { 1,3.14,{"woshi",20,4565} };
//	//printf("%d %s", cs.a, cs.q.name);
//	printf("%d\n", sizeof(b4));
//	printf("%d\n", sizeof(cs));
//
//	return 0;
//}



//#pragma pack(2)
//struct c
//{
//	char c2;
//	int a;
//	char c;
//};
//#pragma pack()
//struct c2
//{
//	
//	char c2;
//	int a;
//	char c;
//};
////struct c3
////{
////	char c2;
////	char c;
////	int a;
////
////
////};
//
// 
//int main()
//{
//	struct c cs = { 0 };
//	struct c2 cs2 = { 0 };
//	//struct c3 cs3 = {0};
//	//printf("%d\n", sizeof(cs));
//	//printf("%d\n", sizeof(struct S3));
//	//printf("%d\n", sizeof(struct S4));
//
//	printf("%d\n", sizeof(cs));
//	printf("%d\n", sizeof(cs2));
//	//printf("%d\n", sizeof(cs3));
//
//
//	return 0;
//}



//struct A
//{
//	int _a : 2;//a占2bits
//	int _b : 5;//b占5bits
//	int _c : 10;//……
//	int _d : 30;
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//
//
//	return 0;
//}


//枚举


enum color
{
	RED=5,
	YELLOW,
	BLUE
};

int main()
{
	printf("%d\n", RED);
	printf("%d\n", YELLOW);
	printf("%d\n", BLUE);
	return 0;
}