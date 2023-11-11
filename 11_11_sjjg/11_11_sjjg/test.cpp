#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;


//图的广度优先遍历

//BFS算法的搭建


#define Max_Vertex_Num 9999
bool visited[Max_Vertex_Num];//定义一个bool数组，里面的装着结点的访问情况的信息

//将数组的所有变量先初始化为false
void Initvisit(bool visited[])
{
	bool* tmp = visited;
	while (tmp)
	{
		*tmp = false;
		tmp++;
	}
}


//广度优先遍历


void BFS(Graph G, int v)//其中v第一个被访问的结点
{
	visit(v);//1访问
	visited[v] = true;//2改状态
	EnQueue(Q,v);//3入队
	while (!isEmpty(Q))//当队列不为空循环就继续
	{
		DeQueue(Q,v);//队首元素出队
		for (w = FirstNeighbor; w >= 0; w = NextNeighbor)//循环去找与队首元素相连接的元素//w先置成与该顶点相连接的第一个元素，再去找下一个元素
		{
			visit(w);//访问该元素
			visited[w] = true;
			EnQueue(Q,w);//顶点w入队
		}
	}
}

//对图G进行广度优先遍历
void BFSTraverse(Graph G)
{
	//初始化数组
	Initvisit(visited);
	InitQueue(q);//初始化辅助队列
	for (i = 1; i < G.vexnum; i++)
	{
		if (visited[i] == false)//每当顶点没被访问就丢进BFS
			BFS(G, i);
	}
}  