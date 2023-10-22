#define _CRT_SECURE_NO_WARNINGS 1
#define MAX_SIZE  10
#include<stdio.h>
#include<stdlib.h>


////静态顺序表
//typedef struct
//{
//	int data[MAX_SIZE];
//	int length;
//}sqList;
//
//void InitList(sqList* L)
//{
//	L->length = 0;//因为有脏数据所以length一定要初始化。
//
//}
//
//int main()
//{
//	sqList L;
//	InitList(&L);
//	return 0;
//}

//动态顺序表
//#define INC 5
//#define InitSize 10
//typedef struct
//{
//	int* data; //用指针来方便后期动态内存开辟（实际上是一样的）
//	int length;//表示当前使用的量
//	int MAXsize;//表示最大容量
//	
//}sqList;

//void InitList(sqList* l)
//{
//	l->length = 0;
//	l->MAXsize = InitSize;
//	int* pc = (int*)calloc(InitSize, sizeof(int));
//	if (pc == NULL)
//	{
//		perror("InitList");
//		return;
//	}
//	l->data = pc;
//}
//
//void IncList(sqList* l)
//{
//	int* pc = (int*)realloc(l, InitSize * sizeof(int) + INC * sizeof(int));
//	if (pc == NULL)
//	{
//		perror("IncList");
//		return;
//	}
//	l->data = pc;
//	l->MAXsize = l->MAXsize + INC;
//	free(pc);
//}
//
//int main()
//{
//	sqList l;
//	//初始化顺序表
//	InitList(&l);
//	//扩容
//	IncList(&l);
//	return 0;
//}

int main()
{



}