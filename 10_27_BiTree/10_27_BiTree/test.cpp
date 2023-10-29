#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//二叉树线索化


typedef struct BiTree
{
	BiTnode* lchild, * rchild;
	int a;
}*BiTree,BiTnode;

//土办法找中序前驱，例如现在给定一个结点BiTnode f;

//void visit(BiTnode* n)
//{
//	return;
//}
//
//void Inorder(BiTree T,BiTnode* prep, BiTnode* pc, BiTnode* p)
//{
//	if (pc == NULL)
//		return;
//	if (pc == p)
//		return;
//	else
//	{
//		prep = pc;
//		Inorder(pc->lchild,prep,pc,p);
//		visit(pc);
//		Inorder(pc->lchild, prep, pc, p);
//	}
//}
//
//void findpre(BiTree T, BiTnode f)
//{	
//	//先创建一个指针指向f
//	BiTnode* p = &f;
//	//创建两个指针一个pc指向正在访问的结点，一个prep指向其前驱
//	BiTnode* pc, *prep;
//	pc = T;
//	prep = NULL;
//	//中序遍历整个数组，当pc=p时，此时的prep就是f的前驱
//	Inorder(T,prep,pc,p);
//
//
//
//}
// 
// 
//中序遍历线索化//对普通中序遍历进行改造

typedef struct Threadnode
{
	Threadnode* lchild, * rchild;
	int a;
	int ltag, rtag; //定义一个标签记录子节点是否是线索
}*Threadtree, Threadnode;

//不要与宏定义搞混了
Threadnode* pre = NULL; //定义一个全局变量pre指向前驱

//先书写中序遍历的框架

//声明visit函数
void visit(Threadtree T);


void InThreadTree(Threadtree T)
{
	if (T == NULL)
		return;
	else
	{
		InThreadTree(T->lchild);
		visit(T);
		InThreadTree(T->rchild);
	}
}

//在访问函数中，对当前结点的左右孩子节点进行操作
void visit(Threadtree p)
{
	//先对左右孩子判空
	if (p->lchild == NULL)
	{
		p->lchild = pre;//左孩子指向前驱
		p->ltag = 1;//将左孩子的tag更新为1表示已经变成线索
	}
	if (pre!=NULL && pre->rchild==NULL)//当pre不为空（不是第一个结点）同时pre的右孩子不为空时，建立后继线索
	{
		pre->rchild = p;
		pre->rtag = 1;
	}
	pre = p;//前驱更新为当前访问的结点//要放到最后是因为实际上上面两个是要同时进行的且针对的p和pre都是同一个对象//同时即使什么都不做也要更新因此放在最后
}
//构建中序遍历线索化的框架
void CreatInThread(Threadtree T)
{
	//判空
	if (T == NULL)
		return;
	//进行遍历及线索化
	InThreadTree(T);
	//对最后一个结点的右孩子进行判断和处理因为右孩子是访问结点的后继结点时设置的，但最后一个结点没有后继节点，因此要单独处理
	//条件：此时pre记录的就是最后一个结点
	
	//判断
	if (pre->rchild == NULL)
		pre->rtag = 1;
}


//构建先序遍历

//先序遍历函数

//先声明一下
void visit(Threadtree T);

void preThread(Threadtree T)
{
	if (T != NULL)
	{
		visit(T);
		if(T->ltag!=1)//判断左孩子不是线索再去访问其左孩子
			preThread(T->lchild);
		preThread(T->rchild);
	}
}

//构建先序条件下的visit函数
void visit(Threadtree p)
{
	if (p->lchild == NULL)
	{
		p->lchild = pre;
		p->ltag = 1;
	}
	if (pre != NULL && pre->rchild == NULL)
	{
		pre->rchild = p;
		pre->rtag = 1;
	}
	pre = p;
}


//构建先序线索化函数
void preThreadTree(Threadtree T)
{
	//将pre初始化
	pre = NULL;
	//判空
	if (T != NULL)
	{
		//进行线索化
		preThread(T);
		//同时对最后一个结点进行特殊处理
		if (pre->rchild == NULL)
			pre->rtag = 1;
	}
}

//后续线索化
//先构建后续遍历函数
void PostThread(Threadtree T)
{
	if (T != NULL)
	{
		PostThread(T->lchild);
		PostThread(T->rchild);
		visit(T);
	}
}

//构建后续条件下的visit函数
void visit(Threadtree p)
{
	if (p->lchild == NULL)
	{
		p->lchild = pre;
		p->ltag = 1;
	}
	if (pre != NULL && pre->rchild == NULL)
	{
		pre->rchild = p;
		pre->rtag = 1;
	}
	pre = p;
}

//构建后续遍历线索化函数
void PostThreadTree(Threadtree T)
{
	pre = NULL;
	if (T != NULL)
	{
		PostThread(T);
		if (pre->rchild == NULL)
			pre->rtag = 1;
	}
}