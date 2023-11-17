#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

//二叉排序树的结点
typedef struct BSTnode
{
	int key;//储存着结点的值的信息，当然也可以存储更多更复杂的信息
	BSTnode* left, * right;
}BSTnode,*BSTtree;

//在二叉排序树中找到key结点
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

//二叉排序树的查找——递归实现
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

//二叉排序树的插入
bool BST_Insert(BSTtree& T, int k)
{
	if (T == NULL)//如果树为空树则直接插入
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