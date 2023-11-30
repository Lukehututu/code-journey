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

//Floyd算法
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

//定义一个数组记录入度
int indegree[Max];

//定义一个邻接表
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

//定义一个栈以及封装相关操作的函数
typedef struct stack{
	int A[Max];
	int top;//栈顶指针
}stack;

void Push(stack* s, int v)
{
	//此处应当还有判满操作
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
	int print[Max] = { -1 };//来记录排序序列
	
	//让indgree[]为0的元素入栈
	for (int i = 0; i < G.vexnum; i++)
		if (indegree[i] == 0)
			Push(s, i);
	int cnt = 0;//用来记录存入print数组中顶点的个数的同时当数组下标用
	while (!isEmpty(s))
	{
		int ret = 0;
		Pop(s, ret);
		print[cnt++] = ret;
		for (ArcNode* p = G.vertices[ret].first; p; p = p->next)
			if (!(--indegree[p->adjvex]))//如果他的临边的入度更新后变为0就入栈
				Push(s, p->adjvex);

	}
	if (cnt < G.vexnum)
		return false;
	else
		return true;
}


//逆拓扑排序

//此时入栈的应当是出度为0的顶点因此需要一个出度表
int Dedegree[Max];

bool Reverse_TopologicalSort(ALGraph G)
{
	stack* s = new stack;
	Initstack(s);
	int print[Max] = { -1 };//来记录排序序列

	//让出度为0的元素入栈
	for (int i = 0; i < G.vexnum; i++)
		if (Dedegree[i] == 0)
			Push(s, i);
	int cnt = 0;//用来记录存入print数组中顶点的个数的同时当数组下标用
	while (!isEmpty(s))
	{
		int ret = 0;
		Pop(s, ret);
		print[cnt++] = ret;

		//此处的找下条边应该修改，应当去遍历整个邻接表
	/*	for (int i = 0; i < G.vexnum; i++)
		{
			for (ArcNode* p = G.vertices[i].first; p; p = p->next)
				if (p->adjvex == ret)
					if (!(--Dedegree[i]))
						Push(s, i);
		}*/

		//实际上使用逆邻接表来实现的//直接就跟拓扑排序的代码一样
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
//DFS算法实现逆拓扑---用递归函数调用栈--LIFO

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
	cout << v ;//在顶点退栈前输出顶点
}

