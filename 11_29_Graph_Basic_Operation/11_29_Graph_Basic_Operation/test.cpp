#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>


//ͼ�Ļ�������

//�����ڽӱ���һ��ͼ



typedef struct ArcNode{
	int adjvex;  //��/��ָ���ĸ�����(�˴��Ǳ������Ĺ�ϵ���ֻ�ô����ĸ����㣩
	struct ArcNode* next; //��һ����
}ArcNode;

typedef struct {
	int vex;//��ʾ�ĸ�����
	//elemtype data //����������Ϣ
	ArcNode* first; //��һ������
}*AdjList,AdjNode;

#define MaxVertexNum 100
typedef struct {
	AdjList L;
	int vexnum, arcnum;
	bool vexnode[MaxVertexNum];
}ALGraph;   //�ڽӱ�


//�жϱ�/���Ƿ����----<x,y>�Ƿ����
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

//�ҳ��붥��x���ڵı�(���ߣ���ߣ�)��������ͼ��˵���Ǳ���һ�������������ͼ��˵���Ǳ��������ڽӱ�
void Neighbors(ALGraph G, int x)
{

	;

}
//��ΪҪ���ض��㣬����������ʲô�����飿



//ɾ������
bool DeleteVertex(ALGraph G, int x)
{
	for (int i = 0; i < G.vexnum; i++)
	{
		;

	}
}


//�Ҷ���ĵ�һ���ڽӵ�
int FirstNeighbor(ALGraph G, int x)
{
	return G.L[x].first->adjvex;
}

//�ҵ���һ���ڽӵ�
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



//ͼ�Ĺ�����ȱ���

//�ȶ���һ������
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
	Q.rear = 0;//rear��ʾ��һ������Ԫ�ص�λ��
}

void Push(int x, Queue Q)
{
	Q.q[Q.rear++] = x;
	//ʵ��������� rear=(rear+1)%MaxSize ���ζ���
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

//����һ�������¼���ķ���״̬
bool visited[MaxVertexNum] = { false };

void BFS(ALGraph G,int x)
{
	
	//��������һ����������ʼ������

	//�ö��еĽṹ��ʵ��BFS
	Queue Q;
	InitQ(Q);
	//�������
	Push(x, Q);
	visited[x] = true;
	while (!isEmpty(Q))
	{
		int ret = 0;
		Pop(Q, ret);//�������
		visit(G,ret);//���ʳ��Ӷ���
		for (int m = FirstNeighbor(G, x); m != -1; m = NextNeighbor(G, x, m))
		{
			Push(m, Q);
			visit(G, m);
			visited[m] = true;
		}
	}
}


//ʵ�������������ͨͼ��һ��BFS�ǿ϶����ܱ���������ͼ�ģ����ܻ���������ͨ����û�б���
//���Ҫ����visited����

void BFSTraverse(ALGraph G)
{
	for (int i = 0; i < MaxVertexNum; i++)
	{
		if (visited[i] == false)//����ý��û�б����ʾ�ȥ��������Ϊ����������ͨ����
			BFS(G, i);
	}
}

//ͼ��������ȱ���---��ϵ�����ȸ�����---�ݹ�ķ�ʽʵ�ֵ�
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


//���·��BFS�㷨  //�޸�BFS�㷨
void Shortest_Path_BFS(ALGraph G, int x)
{

	//��������һ����������ʼ������
	//����һ������һ��distance[Vernum]��¼���㵽���ľ����Path[Vernum]��¼��ǰ��
	int distance[MaxVertexNum];
	int path[MaxVertexNum];
	//��ʼ������
	for (int i = 0; i < MaxVertexNum; i++)
	{
		distance[i] = 9999;
		path[i] = -1;
	}
		//�ö��еĽṹ��ʵ��BFS
	Queue Q;
	InitQ(Q);
	//�������
	Push(x, Q);
	visited[x] = true;
	distance[x] = 0;
	while (!isEmpty(Q))
	{
		int ret = 0;
		Pop(Q, ret);//�������
		visit(G, ret);//���ʳ��Ӷ���
		for (int m = FirstNeighbor(G, ret); m != -1; m = NextNeighbor(G, ret, m))
		{
			Push(m, Q);
			visit(G, m);
			visited[m] = true;
			distance[m]=distance[ret]+1;//Ӧ��Ϊ��ǰ������+1
			path[m] = ret;
		}
	}
}