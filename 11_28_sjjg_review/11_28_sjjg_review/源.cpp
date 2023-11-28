#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//˳���Ķ�̬ʵ��
typedef struct //��̬˳���Ķ���
{
	int* data;
	int length;
	int MaxSize;

}sqList;

//��ʼ��

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

//����
bool isFull(sqList L)
{
	if (L.length == L.MaxSize)
	{
		int* ptr = (int*)realloc(L.data,(L.MaxSize + INC) * sizeof(int));//ע��˴�Ӧ�������е�����������������
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
	//���õ���Ĭ�Ϻ���
	if (!isFull(L))
		return false;

	//����
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
	//�п�
	if (Empty(L))
		return false;
	
	//��xλ�����е�Ԫ�ض���ǰ�ƶ�
	for (int i = x; i < L.length; i++)
		L.data[i + 1] = L.data[i];
	L.length--;//������-1(�߼���--)
}


