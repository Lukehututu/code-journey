#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>

#define MaxSize 100
//��������˳��洢
typedef struct treenode
{
	int data;
	bool isEmpty;
}Tree;

//��ʼ��
void InitTree(Tree tree[])
{
	int i = 0;
	//��ÿһ������isEmpty����Ϊtrue(���߼�����ÿһ����㶼Ϊ��)
	for (i = 0; i < MaxSize; i++)
	{
		tree[i].isEmpty = true;
	}
}
int main()
{
	Tree tree[MaxSize];
}




//����������ʽ�洢

typedef struct Elemtype
{
	int a;
	//����
}Elemtype;

typedef struct bitree
{
	//ָ����(ָ�����Һ���)
	BiTnode* lchild, * rchild;
	//������ 
	Elemtype data;
}BiTnode,*BiTree;//���������һ������ڵ�һ��������

//��ʼ����
void Bitree(BiTree t)
{	
	//����root���
	BiTnode* root = (BiTnode*)malloc(sizeof(BiTnode));
	//�пգ�����Ͳ�д�ˣ�
	root->data = { 1 };
	root->lchild = NULL;
	root->rchild = NULL;
}

//������
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
	//ҵ��

	return;
}


//���������������
void Preorder(BiTree T)
{
	//�ж��Ƿ�Ϊ��
	if (T == NULL)
		return;
	else
	{
		visit(T);
		Preorder(T->lchild);
		Preorder(T->rchild);
	}
}

//���������������
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

//�������ĺ������
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


//�����ĸ߶�//�ֱ������������ĸ߶�Ȼ��Ƚ�ѡ�ϴ�ֵ
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


//�������Ĳ������
//����һ����ʽ���еĽ��
typedef struct Linknode
{
	BiTnode* data;
	struct Linknode* next;
}Lnode;

//����һ������
typedef struct
{
	//����ͷָ���βָ��
	Lnode* front;
	Lnode* rear;
}LinkQueue;


//��ʼ������(��ͷ���)
void InitQueue(LinkQueue Q)
{
	//��ͷ��㿪�ٿռ�
	Lnode* pc = (Lnode*)malloc(sizeof(Lnode));
	Q.front = pc;
	Q.rear = pc;
	pc->next = NULL;
}


//���(β��ͷ��)
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


//���ӣ�ͷ����
void Pop(LinkQueue Q,BiTnode* ret)
{
	//���п�
	if (isEmpty(Q))
		return;
	//��һ��������
	Linknode* pc = Q.front;
	pc->next = pc->next->next;
	ret = pc->next->data;
	free(pc->next);
}

//�������Ĳ������//�ݹ����
void levelOrder(BiTree T)
{
	//����һ������
	LinkQueue Q;
	//��ʼ��һ������
	InitQueue(Q);
	//��rootnode���
	Push(Q,T);
	BiTnode node;
	while (!isEmpty(Q))
	{
		//���ڵ����
		Pop(Q, &node);
		//����ҵ��
		visit(&node);
		//�ȶ��ӽڵ�����п�Ȼ�����
		if (node.lchild != NULL)
			Push(Q, node.lchild);
		if (node.rchild != NULL)
			Push(Q, node.rchild);
	}
}