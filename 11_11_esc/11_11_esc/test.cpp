#define _CRT_SECURE_NO_WARNINGS
using namespace std;
#include<iostream>


//���˳�����������

//1.�ȶ���һ��������
typedef struct BiTree
{
	int data;//���ҵ������
	TreeNode* lchild, * rchild;//������Һ��ӵ�ָ��
}*BiTree,TreeNode;

//2.����һ��stack
#define MaxSize 9999
typedef struct tstack
{
	TreeNode arr[MaxSize];
	int top;//ջ��ָ��
}tstack;


//��ʼ��ջ
void Initstack(tstack s)
{
	s.top = -1;

}
//��װջ�Ĳ���
//��ջ
void push(TreeNode* p,tstack t)
{
	t.top++;
	t.arr[t.top] = *p;
}

//��ջ
void pop(tstack t)
{
	//������pop�����
	visit(&t.arr[t.top]);
	t.top--;
}

//ҵ��
void visit(TreeNode* p)
{
	;
}

//3.�������
void leveltravel(BiTree t)
{
	//���ջ
	tstack s;
	Initstack(s);

	//��ʼ����
	TreeNode* tmp = t;
	//����ջ
	push(tmp, s);
	//��ջ
	pop(s);
	while (tmp)
	{
		//���ӽڵ���ջ
		push(tmp->lchild, s);
		push(tmp->rchild, s);
		pop(s);
		pop(s);
	}

}




//ͳ��Ҷ�ӵĸ���

//��װһ����������ĺ���
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