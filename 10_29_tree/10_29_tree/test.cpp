#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//����˳��洢
//�ȶ�����
typedef struct treenode
{
	int data;//������
	int parent;//ָ���򡪡�ָ��ĸ��ڵ��λ��
}treenode;

//�ٶ�������
#define MaxSize 100
typedef struct tree
{
	treenode nodes[MaxSize];
	int n;//��n����ʾ�Ѿ����˶���Ԫ��
}tree;

//��ɾ����
//����ֱ���ڿհ׵�λ���������ݼ��ɣ���¼�����Լ����ڵ��λ�ã�
 
void Insertnode(tree T, int a)
{
	int i = 0;
	while (T.nodes[i].parent != -2)//��ʼ��һ������ֵ���������Ϊ��
	{
		i++;
	}
	T.nodes[i].data = a;
}

//ɾ������ ��
//1.ֻ�����ɾ����λ�þͿճ���
//2.ɾ������ͬʱ����β���Ľ�㲹���ýڵ��λ��

//��ɾ���Ľ�㲻��Ҷ�ӽڵ�ʱ����Ҫɾ���������Լ����ĺ���




//���ӱ�ʾ��
//��ʾ����
typedef struct CTnode
{
	int a;//�洢��������������е�λ��
	CTnode* next;//ָ����һ�����ӣ������ֵܽ�㣩
}CTnode;

//������ڵ�
typedef struct
{
	int data;//������
	CTnode* firstchild;//ָ��ýڵ�ĵ�һ�����ӣ�������������
}CTbox;

//��������
typedef struct
{
	CTbox nodes[MaxSize];
	int n, r;//n��ʾ���ĸ�����r����ʾ���ڵ��λ��
}cTree;


//�����ֵܱ�ʾ��(����ʽ�洢)
typedef struct CSnode
{
	CSnode* firstchild, * nextsibling;//ָ���� �洢���ĵ�һ�����ӵ�ָ���������ӵ����ֵܵ�ָ��
	int data;//������
}CSnode,*CStree;
