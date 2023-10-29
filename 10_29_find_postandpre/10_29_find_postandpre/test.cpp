#define _CRT_SECURE_NO_WARNINGS 1
using namespace std;
#include<iostream>



typedef struct Threadnode
{
	Threadnode* lchild, * rchild;
	int a;
	int ltag, rtag; //����һ����ǩ��¼�ӽڵ��Ƿ�������
}*Threadtree, Threadnode;


//����������������Һ��

Threadnode* Firstnode(Threadtree T)
{
	Threadnode* pc = T;
	while (pc->ltag == 0)//���pc�����Ӿ�һֱ��������
		pc = pc->lchild;
	return pc;
}

Threadnode* Findnext(Threadtree T)
{
	//���Һ���Ϊ����ʱֱ�ӷ����Һ���
	if (T->rtag == 1)
		return T->rchild;
	else//�������T���Һ��ӵ������½ǵĵ�һ�����
		return Firstnode(T->rchild);
}

//�������������������������������������ʵ�ֵķǵݹ��㷨��
void visit(Threadnode* p)
{
	//ҵ��
	;
}

void Inorder(Threadtree T)
{	
	for (Threadnode* p = Firstnode(T);p!=NULL; p = Findnext(p))
		visit(p);
}

//�����������������ǰ��

Threadnode* Lastnode(Threadtree p);

Threadnode* Findpre(Threadtree p)
{
	//�ж���������Ƿ���ֱ���ҵ�ǰ��
	if (p->ltag == 1)
		return p->lchild;
	else//��ʱһ�������ӣ���Ϊ˳������������p��ǰ�����������������½�
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

//�Զ����������������
void Inreserveorder(Threadtree T)
{
	for (Threadnode* p = Lastnode(T); p != NULL; p = Findpre(p))
	{
		visit(p);
	}
}



//�����������ǰ��
Threadnode* Prenode(Threadtree p)
{
	if (p->ltag == 1)
		return p->lchild;
	else
		return;//p�ĸ��ڵ� ���Ҫô�����취 ȫ����һ�飬Ҫô�������������븸�ڵ�
}

//����������ĺ��
Threadnode* Nextnode(Threadnode* p)
{
	if (p->rtag == 1)
		return p->rchild;//�ӽ����Һ��ӵ�����������ȥѰ��
	if (p->ltag == 0)
		return p->lchild;//��Ϊ�Ǹ����ң����ǵ�һ�����������������������p�ĺ��
	else
		return p->rchild;//��û���������Һ��Ӿ�����һ�����ʽ��
}


//���������������Һ���ǰ��
Threadnode* Prepost(Threadtree p)
{
	if (p->ltag == 1)
		return p->lchild;
	else
	{
		//�������
		//1.���Һ�����p��ǰ���������� ��Ϊ�����Ҹ�����������������󱻷��ʵĽ�㣬��û���Һ��ӣ����p��ǰ����������
		if (p->rtag == 1)
			return p->lchild;
		//2.���Һ��ӣ����Һ��Ӿ�������������󱻷��ʵĽ�����p��ǰ�������Һ���
		else
			return p->rchild;
	}
}

//���������������Һ������
Threadnode* Nestpost(Threadnode* p)
{
	if (p->rtag == 1)
		return p->rchild;
	else
	{
		//��p����ڵ��ʱ��
		//1.���ҽ�㲻����ʱ ��ʱp�ĺ�̾���p�ĸ��ڵ�
		//2.���ҽ�����ʱ p�ĺ�̾����ҽ���������һ��Ľ���������ߣ����û·����������������֪�����Ҷ��߲�ͨ
		//return findbottle(p)1

	}


}