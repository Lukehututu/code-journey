#define _CRT_SECURE_NO_WARNINGS 1
#define MAX_SIZE  10
#include<stdio.h>
#include<stdlib.h>


////��̬˳���
//typedef struct
//{
//	int data[MAX_SIZE];
//	int length;
//}sqList;
//
//void InitList(sqList* L)
//{
//	L->length = 0;//��Ϊ������������lengthһ��Ҫ��ʼ����
//
//}
//
//int main()
//{
//	sqList L;
//	InitList(&L);
//	return 0;
//}

//��̬˳���
//#define INC 5
//#define InitSize 10
//typedef struct
//{
//	int* data; //��ָ����������ڶ�̬�ڴ濪�٣�ʵ������һ���ģ�
//	int length;//��ʾ��ǰʹ�õ���
//	int MAXsize;//��ʾ�������
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
//	//��ʼ��˳���
//	InitList(&l);
//	//����
//	IncList(&l);
//	return 0;
//}

int main()
{



}