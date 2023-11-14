#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//��������

//�ȶ���һ���ڽӱ���ʽ�洢��ͼ

//1.�����ٱ߶���
typedef struct arcnode
{
	int ajdvex;//�Լ��ǵڼ���
	arcnode* nextarc;//ָ����һ������ָ��
	//typeelmt info;//�洢����Ϣ
}arcnode;

//2.�����񶥵�
typedef struct vnode
{
	//VertexInfo data ������Ϣ
	arcnode* firstarc;//ָ�����ڵĵ�һ������ָ��
}vnode;

//3.�����ڽӱ�
#define MaxVertexNum 999
typedef struct
{
	vnode AdjList[MaxVertexNum];
	int vexnum, arcnum;
}Graph;

//����һ��ջ
typedef struct stack
{
	int vexarr[MaxVertexNum];
	int top;
}stack;

//ջ�Ļ�������
void InitStack(stack &s)
{
	s.top == -1;
}

//��ջ
void Push(stack& s, int i)
{
	//�ж�ջ�Ƿ�����
	if (s.top == MaxVertexNum)
		return;
	//����ջ��
	s.vexarr[++s.top] = i;
}

//��ջ
void Pop(stack& s,int& i)
{
	i = s.vexarr[s.top];
	s.top--;
}

//���ջ��
bool isEmpty(stack& s)
{
	if (s.top == -1)
		return true;
	return false;
}

//��������ľ���ʵ��
int indegree[MaxVertexNum];//����һ�������ʾ������������
int print[MaxVertexNum];//����һ�������ʾ�������������

bool TopologicalSort(Graph G)
{
	//����һ��ջ����ʼ��
	stack s;
	InitStack(s);

	//��ʼ��print����
	for (int i = 0; i < MaxVertexNum; i++)
		print[i] = -1;

	//��ͼ�����Ϊ0�ĵ���ջ
	for (int i = 0; i < MaxVertexNum; i++)
	{
		if (indegree[i] == 0)
			Push(s, i);
	}
	
	int cnt = 0;//��¼�Ѿ�������Ķ��������䵱print������±�
	//ѭ��
	while (!isEmpty(s))
	{
		int v=0;
		Pop(s, v);//ջ��Ϊ���򵯳�ջ��Ԫ��
		print[cnt++] = v;//����Ԫ�ؼ�¼��print������

		//��ʼѭ�����ٱ����ٱ���ջ
		for (arcnode* p = G.AdjList[v].firstarc; p; p = p->nextarc)
		{
			int i = p->ajdvex;
			//if (indegree[i] != 0)//�˴����Խ����Ż�����Ϊi����ȿ϶���Ϊ0����Ϊ����p����һ����������������Ϊ1
			//	indegree[i]--;
			//if(indegree[i]==0)
			//	Push(s, i);

			//�Ż���//��������Ϊ0����������ջ
			if (!(--indegree[i]))
				Push(s, i);
		}
	}

	//������Ϻ󷵻��Ƿ�ɹ������������������Ϣ
	if (cnt == MaxVertexNum)//����պý�����ȫ��������������������ɹ�
		return true;
	else
		return false;
}