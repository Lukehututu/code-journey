#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;


//ͼ��������ȱ���
#define Max_Vex_Num 999
bool visited[Max_Vex_Num];


//visited����ĳ�ʼ��
void InitVisit(bool visited[])
{
	for (int i = 0; i < Max_Vex_Num; i++)
		visited[i] = false;
}

void visit(int v)
{
	;
}


//DFS�㷨
void DFS(Graph G, int v)
{
	visit(v);
	visited[v] = true;
	for (int w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G,v,w))
	{
		if(visited[w]==false)//ֻ��û�����ʹ��ĲŻ����DFS
			DFS(G, w);
	}
}