#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

#define MaxSize 100
//二叉树的顺序存储
typedef struct treenode
{
	int data;
	bool isEmpty;
}Tree;

//初始化
void InitTree(Tree tree[])
{
	int i = 0;
	//将每一个结点的isEmpty都置为true(在逻辑上让每一个结点都为空)
	for (i = 0; i < MaxSize; i++)
	{
		tree[i].isEmpty = true;
	}
}
int main()
{
	Tree tree[MaxSize];
}




//二叉树的链式存储

typedef struct Elemtype
{
	int a;
	//……
}Elemtype;

typedef struct bitree
{
	//指针域(指向左右孩子)
	BiTnode* lchild, * rchild;
	//数据域 
	Elemtype data;
}BiTnode,*BiTree;//与链表很像，一个代表节点一个代表树

//初始化树
void Bitree(BiTree t)
{	
	//建立root结点
	BiTnode* root = (BiTnode*)malloc(sizeof(BiTnode));
	//判空（这里就不写了）
	root->data = { 1 };
	root->lchild = NULL;
	root->rchild = NULL;
}

//插入结点
void InsertTnode(BiTree root)
{
	BiTnode* p = (BiTnode*)malloc(sizeof(BiTnode));
	p->lchild = NULL;
	p->rchild = NULL;
	p->data = { 2 };
	root->lchild = p;
}

void visit(BiTree T)
{
	//业务

	return;
}


//二叉树的先序遍历
void Preorder(BiTree T)
{
	//判断是否为空
	if (T == NULL)
		return;
	else
	{
		visit(T);
		Preorder(T->lchild);
		Preorder(T->rchild);
	}
}

//二叉树的中序遍历
void Inorder(BiTree T)
{
	if (T == NULL)
		return;
	else
	{
		Inorder(T->lchild);
		visit(T);
		Inorder(T->rchild);
	}
}

//二叉树的后序遍历
void Postorder(BiTree T)
{
	if (T == NULL)
		return;
	else
	{
		Postorder(T->lchild);
		Postorder(T->rchild);
		visit(T);
	}
}


//求树的高度//分别求左右子树的高度然后比较选较大值
int treeDepth(BiTree T)
{
	if (T == NULL)
		return 0;
	else
	{
		int l = treeDepth(T->lchild);
		int r = treeDepth(T->rchild);
		return l > r ? l + 1 : r + 1;

	}
}


//二叉树的层序遍历
//定义一个链式队列的结点
typedef struct Linknode
{
	BiTnode* data;
	struct Linknode* next;
}Lnode;

//定义一个队列
typedef struct
{
	//定义头指针和尾指针
	Lnode* front;
	Lnode* rear;
}LinkQueue;


//初始化队列(带头结点)
void InitQueue(LinkQueue Q)
{
	//给头结点开辟空间
	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));
	Q.front = pc;
	Q.rear = pc;
	pc->next = NULL;
}


//入队(尾进头出)
void Push(LinkQueue Q, BiTnode* t)
{
	Linknode* pc = (Linknode*)malloc(sizeof(Linknode));
	pc->next = NULL;
	Q.rear->next = pc;
	Q.rear = pc;
}

bool isEmpty(LinkQueue Q)
{
	if (Q.front == Q.rear)
		return true;
	else
		return false;
}


//出队（头出）
void Pop(LinkQueue Q,BiTnode* ret)
{
	//先判空
	if (isEmpty(Q))
		return;
	//第一个结点出队
	Linknode* pc = Q.front;
	pc->next = pc->next->next;
	ret = pc->next->data;
	free(pc->next);
}

//二叉树的层序遍历//递归访问
void levelOrder(BiTree T)
{
	//创建一个对列
	LinkQueue Q;
	//初始化一个队列
	InitQueue(Q);
	//让rootnode入队
	Push(Q,T);
	BiTnode node;
	while (!isEmpty(Q))
	{
		//父节点出队
		Pop(Q, &node);
		//进行业务活动
		visit(&node);
		//先对子节点进行判空然后入队
		if (node.lchild != NULL)
			Push(Q, node.lchild);
		if (node.rchild != NULL)
			Push(Q, node.rchild);
	}
}