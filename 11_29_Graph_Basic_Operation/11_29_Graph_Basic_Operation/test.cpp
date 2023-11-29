#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


//图的基本操作

//基于邻接表定义一个图



typedef struct ArcNode{
	int adjvex;  //边/弧指向哪个顶点(此处是表达点与点的关系因此只用存是哪个顶点）
	struct ArcNode* next; //下一条边
}ArcNode;

typedef struct {
	int vex;//表示哪个顶点
	//elemtype data //顶点具体的信息
	ArcNode* first; //第一条出边
}*AdjList,AdjNode;

#define MaxVertexNum 100
typedef struct {
	AdjList L;
	int vexnum, arcnum;
	bool vexnode[MaxVertexNum];
}ALGraph;   //邻接表


//判断边/弧是否存在----<x,y>是否存在
bool Adjcent(ALGraph G, int x, int y)
{
	ArcNode* p = G.L[x].first;
	while (p)
	{
		if (p->adjvex == y)
			return true;
		else
			p = p->next;
	}
	if (p == NULL)
		return false;
}

//找出与顶点x相邻的边(出边？入边？)对于无向图来说就是遍历一条链表对于有向图来说就是遍历整个邻接表
void Neighbors(ALGraph G, int x)
{

	;

}
//因为要返回顶点，返回类型是什么？数组？



//删除顶点
bool DeleteVertex(ALGraph G, int x)
{
	for (int i = 0; i < G.vexnum; i++)
	{
		;

	}
}


//找顶点的第一个邻接点
int FirstNeighbor(ALGraph G, int x)
{
	return G.L[x].first->adjvex;
}

//找到下一个邻接点
int NextNeighbor(ALGraph G, int x, int y)
{
	ArcNode* p = G.L[x].first;
	while (p->adjvex != y)
		p = p->next;
	if (p->next!=NULL)
		return p->next->adjvex;
	else
		return -1;
}



//图的广度优先遍历

//先定义一个队列
typedef struct {
	int q[MaxVertexNum];
	int rear,front;
}Queue;


void visit(ALGraph G, int x)
{
	;
}

void InitQ(Queue Q)
{
	Q.front = 0;
	Q.rear = 0;//rear表示下一个插入元素的位置
}

void Push(int x, Queue Q)
{
	Q.q[Q.rear++] = x;
	//实际上因该是 rear=(rear+1)%MaxSize 环形队列
}

void Pop(Queue Q,int& ret)
{
	ret = Q.q[Q.front++];
}

bool isEmpty(Queue Q)
{
	if (Q.front == Q.rear)
		return true;
	return false;
}

//定义一个数组记录结点的访问状态
bool visited[MaxVertexNum] = { false };

void BFS(ALGraph G,int x)
{
	
	//不可以用一个变量来初始化数组

	//用队列的结构来实现BFS
	Queue Q;
	InitQ(Q);
	//顶点入队
	Push(x, Q);
	visited[x] = true;
	while (!isEmpty(Q))
	{
		int ret = 0;
		Pop(Q, ret);//顶点出队
		visit(G,ret);//访问出队顶点
		for (int m = FirstNeighbor(G, x); m != -1; m = NextNeighbor(G, x, m))
		{
			Push(m, Q);
			visit(G, m);
			visited[m] = true;
		}
	}
}


//实际上如果不是连通图，一次BFS是肯定不能遍历完整个图的，可能还有其他联通分量没有遍历
//因此要借助visited数组

void BFSTraverse(ALGraph G)
{
	for (int i = 0; i < MaxVertexNum; i++)
	{
		if (visited[i] == false)//如果该结点没有被访问就去遍历以他为顶点的最大连通分量
			BFS(G, i);
	}
}

//图的深度优先遍历---联系树的先根遍历---递归的方式实现的
void DFS(ALGraph G,int v)
{
	visit(G, v);
	visited[v] = true;
	for (int m = FirstNeighbor(G, v); m >= 0; m = NextNeighbor(G, v, m))
	{
		if (!visited[m])
			DFS(G, m);
	}
}


//最短路径BFS算法  //修改BFS算法
void Shortest_Path_BFS(ALGraph G, int x)
{

	//不可以用一个变量来初始化数组
	//新增一个新增一个distance[Vernum]记录顶点到根的距离和Path[Vernum]记录其前驱
	int distance[MaxVertexNum];
	int path[MaxVertexNum];
	//初始化数组
	for (int i = 0; i < MaxVertexNum; i++)
	{
		distance[i] = 9999;
		path[i] = -1;
	}
		//用队列的结构来实现BFS
	Queue Q;
	InitQ(Q);
	//顶点入队
	Push(x, Q);
	visited[x] = true;
	distance[x] = 0;
	while (!isEmpty(Q))
	{
		int ret = 0;
		Pop(Q, ret);//顶点出队
		visit(G, ret);//访问出队顶点
		for (int m = FirstNeighbor(G, ret); m != -1; m = NextNeighbor(G, ret, m))
		{
			Push(m, Q);
			visit(G, m);
			visited[m] = true;
			distance[m]=distance[ret]+1;//应该为其前驱距离+1
			path[m] = ret;
		}
	}
}