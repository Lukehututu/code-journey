#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;


#define Infinite 9999
#define Max_Vex 999

//BFS算法求最短路径
bool visited[Max_Vex];

void InitVisited(bool visited[])
{
	for (int i = 0; i < Max_Vex; i++)
	{
		visited[i] = false;
	}
}

void BFS(Graph G, int v)
{
	//初始化visited
	InitVisited(visited);
	//先构造dis[]和path[]
	int d[G.vex_num];
	int path[G.vex_num];
	for (int i = 0; i < G.vex_num; i++)
	{
		d[i] = Infinite; //将其他点到v点的距离都初始化为无穷
		path[i] = -1; //将其他点的前驱都初始化为-1
	}
	d[v] = 0;//自己到自己的距离为0
	//开始BFS算法
	visited[v] = true;
	EnQueue(v);//让顶点入列
	while (isEmpty(Q) != NULL)//当队列不为空时循环继续
	{
		DeQueue(v);//出列  //此处的参数值得商榷
		for (int w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v, w))
		{
			//原本是visit(v)现在改造该函数来计算路径
			d[w] = d[v] + 1;//前驱的距离+1
			path[w] = v;//其前驱为u
			visited[w] = true;
			EnQueue(w);
		}
	}


}