#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>



//先声明一个并查集
#define Size 50
int s[Size];

//初始化并查集
void UFSets(int s[])
{
	for (int i = 0; i < Size; i++)
		s[i] = -1;
}

//查的操作--给定一个结点，查出他的根结点
int Find(int s[],int x)
{
	while (s[x] >= 0)//下标的指针为-1时跳出
	{
		x = s[x];
	}
	return x;
}


//合并的操作--将一个树合并成另一个树的子树
void Union(int s[], int root1,int root2)
{
	//先判断合法性
	if (root1 == root2)//判断是否是相同的集合
		return;
	s[root2] = root1;
}

//优化合并操作//此时根节点的s[]不再是仅仅表示根节点，同时还表示了该树的结点个数
void Union_2(int s[], int root1, int root2)
{
	if (root1 == root2)
		return;
	if (root1 < root2)
	{
		s[root1] += s[root2];//节点数改变
		s[root2] = root1;//小树合并到大树
	}
	else
	{
		s[root2] += s[root1];
		s[root1] = root2;
	}
}


//Find操作优化(压缩路径)//每查找一个树，就将其追溯路径上的所有节点挂到根结点上

int Find_2(int s[],int x)
{
	//找到根节点
	int root = 0;
	int i = x;
	while (s[i] >= 0)
		i = s[i];
	root = x;

	//将追溯路径上的所有点挂在root上
	while (s[x]>=0)
	{
		int tmp = x;
		s[tmp] = root;//让该结点指向root
		x = s[x];//让x变为其父结点
	}
	return root;
}


