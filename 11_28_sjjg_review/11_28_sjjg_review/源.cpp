#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//顺序表的动态实现
typedef struct //动态顺序表的定义
{
	int* data;
	int length;
	int MaxSize;

}sqList;

//初始化

#define Default 10
#define INC 5

void InitList(sqList L)
{
	int* p = new int[Default];
	if (p == NULL)
	{
		perror("InitList");
		return;
	}

	L.data = p;
	L.MaxSize = Default;
	L.length = 0;
}

//插入
bool isFull(sqList L)
{
	if (L.length == L.MaxSize)
	{
		int* ptr = (int*)realloc(L.data,(L.MaxSize + INC) * sizeof(int));//注意此处应当是现有的容量加上增加容量
		if (ptr == NULL)
			return false;
		else if (ptr != L.data)
		{
			for (int i = 0; i < L.length; i++)
				ptr[i] = L.data[i];
			delete(L.data);
			L.data = ptr;
			L.MaxSize += INC;
			return true;
		}
	}

}


bool InSqList(sqList L, int a)
{
	//先用调用默认函数
	if (!isFull(L))
		return false;

	//插入
	L.data[++L.length] = a;
	return true;
}

bool Empty(sqList L)
{
	if (L.length == 0)
		return true;
}

bool DeleteList(sqList L, int x)
{
	//判空
	if (Empty(L))
		return false;
	
	//将x位后所有的元素都向前移动
	for (int i = x; i < L.length; i++)
		L.data[i + 1] = L.data[i];
	L.length--;//将长度-1(逻辑上--)
}


