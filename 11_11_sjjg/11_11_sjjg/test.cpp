#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;


//ͼ�Ĺ�����ȱ���

//BFS�㷨�Ĵ


#define Max_Vertex_Num 9999
bool visited[Max_Vertex_Num];//����һ��bool���飬�����װ�Ž��ķ����������Ϣ

//����������б����ȳ�ʼ��Ϊfalse
void Initvisit(bool visited[])
{
	bool* tmp = visited;
	while (tmp)
	{
		*tmp = false;
		tmp++;
	}
}


//������ȱ���


void BFS(Graph G, int v)//����v��һ�������ʵĽ��
{
	visit(v);//1����
	visited[v] = true;//2��״̬
	EnQueue(Q,v);//3���
	while (!isEmpty(Q))//�����в�Ϊ��ѭ���ͼ���
	{
		DeQueue(Q,v);//����Ԫ�س���
		for (w = FirstNeighbor; w >= 0; w = NextNeighbor)//ѭ��ȥ�������Ԫ�������ӵ�Ԫ��//w���ó���ö��������ӵĵ�һ��Ԫ�أ���ȥ����һ��Ԫ��
		{
			visit(w);//���ʸ�Ԫ��
			visited[w] = true;
			EnQueue(Q,w);//����w���
		}
	}
}

//��ͼG���й�����ȱ���
void BFSTraverse(Graph G)
{
	//��ʼ������
	Initvisit(visited);
	InitQueue(q);//��ʼ����������
	for (i = 1; i < G.vexnum; i++)
	{
		if (visited[i] == false)//ÿ������û�����ʾͶ���BFS
			BFS(G, i);
	}
}  