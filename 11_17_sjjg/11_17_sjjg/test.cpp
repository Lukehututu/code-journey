#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//�����������Ľ��
typedef struct BSTnode
{
	int key;//�����Ž���ֵ����Ϣ����ȻҲ���Դ洢��������ӵ���Ϣ
	BSTnode* left, * right;
}BSTnode,*BSTtree;

//�ڶ������������ҵ�key���
BSTnode* BST_Search(BSTtree T, int k)
{
	if (T == NULL)
		return NULL;
	BSTnode* tmp = T;
	while (tmp != NULL && k != tmp->key)
	{
		if (k > tmp->key)
			tmp = tmp->right;
		else
			tmp = tmp->left;
	}
	return tmp;
}

//�����������Ĳ��ҡ����ݹ�ʵ��
BSTnode* BSTSearch(BSTtree T, int k)
{
	if (k = T->key)
		return T;
	else if (T == NULL)
		return T;
	else if (k > T->key)
		BSTSearch(T->right, k);
	else
		BSTSearch(T->left, k);
}

//�����������Ĳ���
bool BST_Insert(BSTtree& T, int k)
{
	if (T == NULL)//�����Ϊ������ֱ�Ӳ���
	{
		T = new BSTnode;
		T->key = k;
		T->left = NULL;
		T->right = NULL;
		return true;
	}
	else if (k == T->key)
		return false;
	else if (k > T->key)
	{
		BST_Insert(T->right, k);
	}
	else if (k < T->key)
	{
		BST_Insert(T->right, k);
	}


}