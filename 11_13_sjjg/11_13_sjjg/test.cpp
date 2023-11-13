#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;


#define Infinite 9999
#define Max_Vex 999

//BFS�㷨�����·��
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
	//��ʼ��visited
	InitVisited(visited);
	//�ȹ���dis[]��path[]
	int d[G.vex_num];
	int path[G.vex_num];
	for (int i = 0; i < G.vex_num; i++)
	{
		d[i] = Infinite; //�������㵽v��ľ��붼��ʼ��Ϊ����
		path[i] = -1; //���������ǰ������ʼ��Ϊ-1
	}
	d[v] = 0;//�Լ����Լ��ľ���Ϊ0
	//��ʼBFS�㷨
	visited[v] = true;
	EnQueue(v);//�ö�������
	while (isEmpty(Q) != NULL)//�����в�Ϊ��ʱѭ������
	{
		DeQueue(v);//����  //�˴��Ĳ���ֵ����ȶ
		for (int w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v, w))
		{
			//ԭ����visit(v)���ڸ���ú���������·��
			d[w] = d[v] + 1;//ǰ���ľ���+1
			path[w] = v;//��ǰ��Ϊu
			visited[w] = true;
			EnQueue(w);
		}
	}


}