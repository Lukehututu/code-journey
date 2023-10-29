#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>



typedef struct Threadnode
{
	Threadnode* lchild, * rchild;
	int a;
	int ltag, rtag; //定义一个标签记录子节点是否是线索
}*Threadtree, Threadnode;


//线索化的中序遍历找后继

Threadnode* Firstnode(Threadtree T)
{
	Threadnode* pc = T;
	while (pc->ltag == 0)//如果pc有左孩子就一直往左下走
		pc = pc->lchild;
	return pc;
}

Threadnode* Findnext(Threadtree T)
{
	//当右孩子为线索时直接返回右孩子
	if (T->rtag == 1)
		return T->rchild;
	else//否则就是T的右孩子的最左下角的第一个结点
		return Firstnode(T->rchild);
}

//对中序线索二叉树进行中序遍历（利用线索实现的非递归算法）
void visit(Threadnode* p)
{
	//业务
	;
}

void Inorder(Threadtree T)
{	
	for (Threadnode* p = Firstnode(T);p!=NULL; p = Findnext(p))
		visit(p);
}

//线索化的中序遍历找前驱

Threadnode* Lastnode(Threadtree p);

Threadnode* Findpre(Threadtree p)
{
	//判断左孩子情况是否能直接找到前驱
	if (p->ltag == 1)
		return p->lchild;
	else//此时一定有左孩子，因为顺序是左根右因此p的前驱是左子树的最右下角
	{
		return Lastnode(p->lchild);
	}
}

Threadnode* Lastnode(Threadtree p)
{
	while (p->rtag == 0)
		p = p->rchild;
	return p;
}

//对二叉树进行逆序遍历
void Inreserveorder(Threadtree T)
{
	for (Threadnode* p = Lastnode(T); p != NULL; p = Findpre(p))
	{
		visit(p);
	}
}



//找先序遍历的前驱
Threadnode* Prenode(Threadtree p)
{
	if (p->ltag == 1)
		return p->lchild;
	else
		return;//p的父节点 因此要么用土办法 全遍历一遍，要么用三叉树，引入父节点
}

//找先序遍历的后继
Threadnode* Nextnode(Threadnode* p)
{
	if (p->rtag == 1)
		return p->rchild;//从结点的右孩子的线索意义上去寻找
	if (p->ltag == 0)
		return p->lchild;//因为是根左右，根是第一个，因此如果有左孩子那其就是p的后继
	else
		return p->rchild;//若没有左孩子那右孩子就是下一个访问结点
}


//后续线索二叉树找后序前驱
Threadnode* Prepost(Threadtree p)
{
	if (p->ltag == 1)
		return p->lchild;
	else
	{
		//两种情况
		//1.无右孩子那p的前驱就是左孩子 因为是左右根，左孩子是左子树最后被访问的结点，又没有右孩子，因此p的前驱就是左孩子
		if (p->rtag == 1)
			return p->lchild;
		//2.有右孩子，那右孩子就是右子树中最后被访问的结点因此p的前驱就是右孩子
		else
			return p->rchild;
	}
}

//后续线索二叉树找后续后继
Threadnode* Nestpost(Threadnode* p)
{
	if (p->rtag == 1)
		return p->rchild;
	else
	{
		//当p是左节点的时候
		//1.当右结点不存在时 此时p的后继就是p的父节点
		//2.当右结点存在时 p的后继就是右结点的最下面一层的结点先往左走，左边没路再往右再优先往左，知道左右都走不通
		//return findbottle(p)1

	}


}