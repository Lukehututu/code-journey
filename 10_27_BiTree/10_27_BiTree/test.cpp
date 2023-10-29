#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;


//������������


typedef struct BiTree
{
	BiTnode* lchild, * rchild;
	int a;
}*BiTree,BiTnode;

//���취������ǰ�����������ڸ���һ�����BiTnode f;

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
//	//�ȴ���һ��ָ��ָ��f
//	BiTnode* p = &f;
//	//��������ָ��һ��pcָ�����ڷ��ʵĽ�㣬һ��prepָ����ǰ��
//	BiTnode* pc, *prep;
//	pc = T;
//	prep = NULL;
//	//��������������飬��pc=pʱ����ʱ��prep����f��ǰ��
//	Inorder(T,prep,pc,p);
//
//
//
//}
// 
// 
//�������������//����ͨ����������и���

typedef struct Threadnode
{
	Threadnode* lchild, * rchild;
	int a;
	int ltag, rtag; //����һ����ǩ��¼�ӽڵ��Ƿ�������
}*Threadtree, Threadnode;

//��Ҫ��궨������
Threadnode* pre = NULL; //����һ��ȫ�ֱ���preָ��ǰ��

//����д��������Ŀ��

//����visit����
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

//�ڷ��ʺ����У��Ե�ǰ�������Һ��ӽڵ���в���
void visit(Threadtree p)
{
	//�ȶ����Һ����п�
	if (p->lchild == NULL)
	{
		p->lchild = pre;//����ָ��ǰ��
		p->ltag = 1;//�����ӵ�tag����Ϊ1��ʾ�Ѿ��������
	}
	if (pre!=NULL && pre->rchild==NULL)//��pre��Ϊ�գ����ǵ�һ����㣩ͬʱpre���Һ��Ӳ�Ϊ��ʱ�������������
	{
		pre->rchild = p;
		pre->rtag = 1;
	}
	pre = p;//ǰ������Ϊ��ǰ���ʵĽ��//Ҫ�ŵ��������Ϊʵ��������������Ҫͬʱ���е�����Ե�p��pre����ͬһ������//ͬʱ��ʹʲô������ҲҪ������˷������
}
//������������������Ŀ��
void CreatInThread(Threadtree T)
{
	//�п�
	if (T == NULL)
		return;
	//���б�����������
	InThreadTree(T);
	//�����һ�������Һ��ӽ����жϺʹ�����Ϊ�Һ����Ƿ��ʽ��ĺ�̽��ʱ���õģ������һ�����û�к�̽ڵ㣬���Ҫ��������
	//��������ʱpre��¼�ľ������һ�����
	
	//�ж�
	if (pre->rchild == NULL)
		pre->rtag = 1;
}


//�����������

//�����������

//������һ��
void visit(Threadtree T);

void preThread(Threadtree T)
{
	if (T != NULL)
	{
		visit(T);
		if(T->ltag!=1)//�ж����Ӳ���������ȥ����������
			preThread(T->lchild);
		preThread(T->rchild);
	}
}

//�������������µ�visit����
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


//������������������
void preThreadTree(Threadtree T)
{
	//��pre��ʼ��
	pre = NULL;
	//�п�
	if (T != NULL)
	{
		//����������
		preThread(T);
		//ͬʱ�����һ�����������⴦��
		if (pre->rchild == NULL)
			pre->rtag = 1;
	}
}

//����������
//�ȹ���������������
void PostThread(Threadtree T)
{
	if (T != NULL)
	{
		PostThread(T->lchild);
		PostThread(T->rchild);
		visit(T);
	}
}

//�������������µ�visit����
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

//����������������������
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