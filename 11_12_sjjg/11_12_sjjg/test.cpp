#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;


//图的深度优先遍历
#define Max_Vex_Num 999
bool visited[Max_Vex_Num];


//visited数组的初始化
void InitVisit(bool visited[])
{
	for (int i = 0; i < Max_Vex_Num; i++)
		visited[i] = false;
}

void visit(int v)
{
	;
}


//DFS算法
void DFS(Graph G, int v)
{
	visit(v);
	visited[v] = true;
	for (int w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G,v,w))
	{
		if(visited[w]==false)//只有没被访问过的才会进入DFS
			DFS(G, w);
	}
}