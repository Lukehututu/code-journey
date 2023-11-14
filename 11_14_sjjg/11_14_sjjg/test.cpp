#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//拓扑排序

//先定义一个邻接表形式存储的图

//1.定义临边顶点
typedef struct arcnode
{
	int ajdvex;//自己是第几个
	arcnode* nextarc;//指向下一个弧的指针
	//typeelmt info;//存储的信息
}arcnode;

//2.定义表格顶点
typedef struct vnode
{
	//VertexInfo data 顶点信息
	arcnode* firstarc;//指向相邻的第一条弧的指针
}vnode;

//3.定义邻接表
#define MaxVertexNum 999
typedef struct
{
	vnode AdjList[MaxVertexNum];
	int vexnum, arcnum;
}Graph;

//声明一个栈
typedef struct stack
{
	int vexarr[MaxVertexNum];
	int top;
}stack;

//栈的基本操作
void InitStack(stack &s)
{
	s.top == -1;
}

//入栈
void Push(stack& s, int i)
{
	//判断栈是否已满
	if (s.top == MaxVertexNum)
		return;
	//放入栈顶
	s.vexarr[++s.top] = i;
}

//出栈
void Pop(stack& s,int& i)
{
	i = s.vexarr[s.top];
	s.top--;
}

//检查栈空
bool isEmpty(stack& s)
{
	if (s.top == -1)
		return true;
	return false;
}

//拓扑排序的具体实现
int indegree[MaxVertexNum];//声明一个数组表示各个顶点的入度
int print[MaxVertexNum];//声明一个数组表示拓扑排序的序列

bool TopologicalSort(Graph G)
{
	//声明一个栈并初始化
	stack s;
	InitStack(s);

	//初始化print数组
	for (int i = 0; i < MaxVertexNum; i++)
		print[i] = -1;

	//将图中入度为0的点入栈
	for (int i = 0; i < MaxVertexNum; i++)
	{
		if (indegree[i] == 0)
			Push(s, i);
	}
	
	int cnt = 0;//记录已经处理过的顶点数并充当print数组的下标
	//循环
	while (!isEmpty(s))
	{
		int v=0;
		Pop(s, v);//栈不为空则弹出栈顶元素
		print[cnt++] = v;//将该元素记录在print数组中

		//开始循环找临边让临边入栈
		for (arcnode* p = G.AdjList[v].firstarc; p; p = p->nextarc)
		{
			int i = p->ajdvex;
			//if (indegree[i] != 0)//此处可以进行优化，因为i的入度肯定不为0，因为他是p的下一个顶点因此入度至少为1
			//	indegree[i]--;
			//if(indegree[i]==0)
			//	Push(s, i);

			//优化后//如果其入度为0，则让其入栈
			if (!(--indegree[i]))
				Push(s, i);
		}
	}

	//处理完毕后返回是否成功进行了拓扑排序的信息
	if (cnt == MaxVertexNum)//如果刚好将顶点全部处理完了则拓扑排序成功
		return true;
	else
		return false;
}