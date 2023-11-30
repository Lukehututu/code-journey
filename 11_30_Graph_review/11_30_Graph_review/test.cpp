#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


#define Max 10
typedef struct Graph
{
	int vexnum;
	int dis[Max][Max];
	int path[Max][Max];
}Graph;

//Floyd�㷨
void Floyd(Graph G) {
	for (int i = 0; i < G.vexnum; i++)
	{
		for (int j = 0; j < G.vexnum; j++)
		{
			for (int k = 0; k < G.vexnum; k++)
			{
				if (G.dis[i][j] > G.dis[i][k] + G.dis[k][j])
				{
					G.dis[i][j] = G.dis[i][k] + G.dis[k][j];
					G.path[i][j] = k;
				}
			}


		}
	}
}


//TopologicalSort

//����һ�������¼���
int indegree[Max];

//����һ���ڽӱ�
typedef struct ArcNode{
	int adjvex;
	ArcNode* next;
}ArcNode;

typedef struct {
	int vex;
	ArcNode* first;
}Vnode,VList[Max];

typedef struct {
	int vexnum,arcnum;
	VList vertices;
}ALGraph;

//����һ��ջ�Լ���װ��ز����ĺ���
typedef struct stack{
	int A[Max];
	int top;//ջ��ָ��
}stack;

void Push(stack* s, int v)
{
	//�˴�Ӧ��������������
//----------------------------------
	s->A[++s->top] = v;
}

bool isEmpty(stack* s)
{
	if (s->top == -1)
		return true;
	return false;
}

void Pop(stack* s, int& ret)
{
	if(!isEmpty(s))
	ret = s->A[s->top--];
}

void Initstack(stack* s)
{
	s->top = -1;
}

bool TopologicalSort(ALGraph G)
{
	stack* s = new stack;
	Initstack(s);
	int print[Max] = { -1 };//����¼��������
	
	//��indgree[]Ϊ0��Ԫ����ջ
	for (int i = 0; i < G.vexnum; i++)
		if (indegree[i] == 0)
			Push(s, i);
	int cnt = 0;//������¼����print�����ж���ĸ�����ͬʱ�������±���
	while (!isEmpty(s))
	{
		int ret = 0;
		Pop(s, ret);
		print[cnt++] = ret;
		for (ArcNode* p = G.vertices[ret].first; p; p = p->next)
			if (!(--indegree[p->adjvex]))//��������ٱߵ���ȸ��º��Ϊ0����ջ
				Push(s, p->adjvex);

	}
	if (cnt < G.vexnum)
		return false;
	else
		return true;
}


//����������

//��ʱ��ջ��Ӧ���ǳ���Ϊ0�Ķ��������Ҫһ�����ȱ�
int Dedegree[Max];

bool Reverse_TopologicalSort(ALGraph G)
{
	stack* s = new stack;
	Initstack(s);
	int print[Max] = { -1 };//����¼��������

	//�ó���Ϊ0��Ԫ����ջ
	for (int i = 0; i < G.vexnum; i++)
		if (Dedegree[i] == 0)
			Push(s, i);
	int cnt = 0;//������¼����print�����ж���ĸ�����ͬʱ�������±���
	while (!isEmpty(s))
	{
		int ret = 0;
		Pop(s, ret);
		print[cnt++] = ret;

		//�˴�����������Ӧ���޸ģ�Ӧ��ȥ���������ڽӱ�
	/*	for (int i = 0; i < G.vexnum; i++)
		{
			for (ArcNode* p = G.vertices[i].first; p; p = p->next)
				if (p->adjvex == ret)
					if (!(--Dedegree[i]))
						Push(s, i);
		}*/

		//ʵ����ʹ�����ڽӱ���ʵ�ֵ�//ֱ�Ӿ͸���������Ĵ���һ��
		for (ArcNode* p = G.vertices[ret].first; p; p = p->next)
			if (!(--Dedegree[p->adjvex]))
				Push(s, p->adjvex);
	}
	if (cnt < G.vexnum)
		return false;
	else
		return true;

}

int cnt = 0;
int print[Max];
//DFS�㷨ʵ��������---�õݹ麯������ջ--LIFO

int visited[Max];
void DFS_Topo(ALGraph G, int v);
void DFSTraversal(ALGraph G)
{
	for (int i = 0; i < G.vexnum; i++)
		visited[i] = false;
	for (int i = 0; i < G.vexnum; i++)
	{
		if (visited[i] == false)
			DFS_Topo(G, i);
			
	}

}


void DFS_Topo(ALGraph G,int v)
{
	visited[v] = true;
	for (ArcNode* p = G.vertices[v].first; p; p = p->next)
	{
		if(visited[p->adjvex]==false)
		DFS_Topo(G, G.vertices[v].first->adjvex);
	}
	cout << v ;//�ڶ�����ջǰ�������
}

