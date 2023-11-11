#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>


//层次顺序遍历二叉树

//1.先定义一个二叉树
typedef struct BiTree
{
	int data;//存放业务数据
	TreeNode* lchild, * rchild;//存放左右孩子的指针
}*BiTree,TreeNode;

//2.定义一个stack
#define MaxSize 9999
typedef struct tstack
{
	TreeNode arr[MaxSize];
	int top;//栈顶指针
}tstack;


//初始化栈
void Initstack(tstack s)
{
	s.top = -1;

}
//封装栈的操作
//入栈
void push(TreeNode* p,tstack t)
{
	t.top++;
	t.arr[t.top] = *p;
}

//出栈
void pop(tstack t)
{
	//访问在pop里进行
	visit(&t.arr[t.top]);
	t.top--;
}

//业务
void visit(TreeNode* p)
{
	;
}

//3.层序遍历
void leveltravel(BiTree t)
{
	//搭建好栈
	tstack s;
	Initstack(s);

	//开始遍历
	TreeNode* tmp = t;
	//先入栈
	push(tmp, s);
	//出栈
	pop(s);
	while (tmp)
	{
		//孩子节点入栈
		push(tmp->lchild, s);
		push(tmp->rchild, s);
		pop(s);
		pop(s);
	}

}




//统计叶子的个数

//封装一个中序遍历的函数
int inorder(TreeNode* t)
{
	if (t == NULL)
		return 1;
	else
	{
		inorder(t->lchild);
		inorder
	}


}


int count_leaves(BiTree t)
{
	inorder(t);

}