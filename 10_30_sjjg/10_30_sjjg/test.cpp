#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>



//������һ�����鼯
#define Size 50
int s[Size];

//��ʼ�����鼯
void UFSets(int s[])
{
	for (int i = 0; i < Size; i++)
		s[i] = -1;
}

//��Ĳ���--����һ����㣬������ĸ����
int Find(int s[],int x)
{
	while (s[x] >= 0)//�±��ָ��Ϊ-1ʱ����
	{
		x = s[x];
	}
	return x;
}


//�ϲ��Ĳ���--��һ�����ϲ�����һ����������
void Union(int s[], int root1,int root2)
{
	//���жϺϷ���
	if (root1 == root2)//�ж��Ƿ�����ͬ�ļ���
		return;
	s[root2] = root1;
}

//�Ż��ϲ�����//��ʱ���ڵ��s[]�����ǽ�����ʾ���ڵ㣬ͬʱ����ʾ�˸����Ľ�����
void Union_2(int s[], int root1, int root2)
{
	if (root1 == root2)
		return;
	if (root1 < root2)
	{
		s[root1] += s[root2];//�ڵ����ı�
		s[root2] = root1;//С���ϲ�������
	}
	else
	{
		s[root2] += s[root1];
		s[root1] = root2;
	}
}


//Find�����Ż�(ѹ��·��)//ÿ����һ�������ͽ���׷��·���ϵ����нڵ�ҵ��������

int Find_2(int s[],int x)
{
	//�ҵ����ڵ�
	int root = 0;
	int i = x;
	while (s[i] >= 0)
		i = s[i];
	root = x;

	//��׷��·���ϵ����е����root��
	while (s[x]>=0)
	{
		int tmp = x;
		s[tmp] = root;//�øý��ָ��root
		x = s[x];//��x��Ϊ�丸���
	}
	return root;
}


